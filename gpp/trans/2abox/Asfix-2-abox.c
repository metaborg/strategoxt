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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_FBOX_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_Strict_0;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_seq_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_Conservative_0;
Symbol sym_layout_place_holder_0;
Symbol sym_Injections_0;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_layout_0;
Symbol sym_empty_0;
Symbol sym_seq_2;
Symbol sym_opt_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_n_2;
Symbol sym_iter_sep_n_3;
Symbol sym_set_1;
Symbol sym_pair_2;
Symbol sym_func_2;
Symbol sym_alt_2;
Symbol sym_perm_1;
Symbol sym_bracket_0;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_prod_fun_4;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_reject_0;
Symbol sym_lit_1;
Symbol sym_bracket_symbol_1;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_Conservative_0 = ATmakeSymbol("Conservative", 0, ATfalse);
  ATprotectSymbol(sym_Conservative_0);
  sym_layout_place_holder_0 = ATmakeSymbol("layout-place-holder", 0, ATfalse);
  ATprotectSymbol(sym_layout_place_holder_0);
  sym_Injections_0 = ATmakeSymbol("Injections", 0, ATfalse);
  ATprotectSymbol(sym_Injections_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_set_1 = ATmakeSymbol("set", 1, ATfalse);
  ATprotectSymbol(sym_set_1);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_perm_1 = ATmakeSymbol("perm", 1, ATfalse);
  ATprotectSymbol(sym_perm_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
}
ATerm term_k_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_a_60;
ATerm term_i_59;
ATerm term_h_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_a_59;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_g_58;
ATerm term_a_58;
ATerm term_z_57;
ATerm term_x_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_z_56;
ATerm term_y_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_z_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_f_55;
ATerm term_y_54;
ATerm term_t_54;
ATerm term_p_54;
ATerm term_y_53;
ATerm term_r_53;
ATerm term_d_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_x_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_p_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_z_51;
ATerm term_x_51;
ATerm term_v_51;
ATerm term_h_51;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_v_48;
ATerm term_k_47;
ATerm term_h_47;
ATerm term_a_47;
ATerm term_u_46;
ATerm term_q_46;
ATerm term_k_46;
ATerm term_a_46;
ATerm term_q_45;
ATerm term_k_45;
ATerm term_d_45;
ATerm term_a_45;
ATerm term_x_44;
ATerm term_t_44;
ATerm term_n_44;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_b_44;
ATerm term_w_43;
ATerm term_s_43;
ATerm term_n_43;
ATerm term_k_43;
ATerm term_s_42;
ATerm term_i_42;
ATerm term_e_42;
ATerm term_z_41;
ATerm term_u_41;
ATerm term_r_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_u_40;
ATerm term_r_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_g_40;
ATerm term_d_40;
ATerm term_r_39;
ATerm term_p_39;
ATerm term_j_39;
ATerm term_x_38;
ATerm term_p_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_y_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_a_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_f_35;
ATerm term_t_34;
ATerm term_y_33;
ATerm term_p_31;
ATerm term_z_29;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_x_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_r_20;
ATerm term_e_19;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_SOpt_2, term_d_16, term_e_16);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_lit_1, term_i_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_lit_1, term_k_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_SOpt_2, term_e_27, term_h_27);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Arg_1, term_v_14);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym__2, term_p_52, term_r_52);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym__2, term_l_55, term_o_55);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_55);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym__2, term_t_55, term_q_14);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_a_15);
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(sym__2, term_q_57, term_q_14);
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym__2, term_t_57, term_q_14);
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(sym__2, term_d_57, term_q_14);
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(sym__2, term_f_59, term_q_14);
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm m_10 (ATerm v_57, ATerm w_57, ATerm u_57, ATerm t);
ATerm Option_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_10 (ATerm v_67, ATerm t);
static ATerm e_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm o_5 (ATerm z_2, ATerm a_3, ATerm b_3, ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm m_127 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm collect_p__1_0 (ATerm z_126 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm i_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm k_96 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm d_38 (ATerm k_33, ATerm l_33, ATerm o_33, ATerm t);
static ATerm p_10 (ATerm r_21, ATerm q_21, ATerm t);
ATerm instantiate_list_1_0 (ATerm f_127 (ATerm), ATerm t);
static ATerm r_10 (ATerm g_24, ATerm h_24, ATerm e_24, ATerm f_24, ATerm t);
static ATerm y_42 (ATerm v_40, ATerm y_40, ATerm z_40, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm h_127 (ATerm), ATerm t);
static ATerm s_10 (ATerm w_46, ATerm x_46, ATerm t);
static ATerm t_10 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm m_25, ATerm n_25, ATerm t);
ATerm genzip_4_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm nzip_1_0 (ATerm k_105 (ATerm), ATerm t);
static ATerm x_10 (ATerm d_25, ATerm e_25, ATerm c_25, ATerm i_25, ATerm t);
static ATerm z_10 (ATerm e_46, ATerm f_46, ATerm t);
static ATerm a_11 (ATerm m_31, ATerm k_31, ATerm l_31, ATerm t);
static ATerm q_2 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm b_11 (ATerm w_64, ATerm v_64, ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm d_126 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
static ATerm c_11 (ATerm o_43, ATerm p_43, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
ATerm _2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm s_91 (ATerm s_90, ATerm t_90, ATerm u_90, ATerm t);
ATerm number_node_1_0 (ATerm h_126 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm symbol2abox_1_0 (ATerm e_126 (ATerm), ATerm t);
static ATerm v_98 (ATerm b_97, ATerm c_97, ATerm d_97, ATerm t);
static ATerm w_98 (ATerm e_98, ATerm f_98, ATerm g_98, ATerm h_98, ATerm i_98, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm escape_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
static ATerm f_104 (ATerm v_103, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm q_107 (ATerm m_107, ATerm t);
static ATerm l_6 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
static ATerm g_11 (ATerm s_28, ATerm t_28, ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm s_127 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm z_113 (ATerm a_113, ATerm b_113, ATerm c_113, ATerm t);
static ATerm q_6 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm m_11 (ATerm d_22, ATerm e_22, ATerm c_22, ATerm b_22, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm n_11 (ATerm k_21, ATerm i_21, ATerm j_21, ATerm l_21, ATerm t);
ATerm filter_1_0 (ATerm c_110 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm j_96 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm x_97 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm o_11 (ATerm t_64, ATerm u_64, ATerm t);
ATerm unescape_chars_1_0 (ATerm n_112 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm w_103 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm unquote_chars_2_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm w_11 (ATerm s_64, ATerm t);
ATerm oncetd_1_0 (ATerm n_97 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
static ATerm z_11 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm h_34, ATerm g_34, ATerm t);
static ATerm a_12 (ATerm z_106 (ATerm), ATerm d_34, ATerm c_34, ATerm t);
ATerm foldr_3_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
ATerm collect_om_2_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm b_12 (ATerm u_26, ATerm t_26, ATerm t);
static ATerm e_12 (ATerm d_43, ATerm e_43, ATerm t);
static ATerm f_12 (ATerm k_28, ATerm l_28, ATerm t);
static ATerm h_12 (ATerm m_102 (ATerm), ATerm v_196, ATerm o_28, ATerm t);
static ATerm g_12 (ATerm g_28, ATerm h_28, ATerm t);
static ATerm r_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm h_119 (ATerm), ATerm t);
static ATerm a_134 (ATerm u_133, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_12 (ATerm m_28, ATerm t);
static ATerm j_12 (ATerm f_43, ATerm g_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_135 (ATerm k_134, ATerm t);
static ATerm m_135 (ATerm o_134, ATerm p_134, ATerm q_134, ATerm t);
static ATerm n_135 (ATerm y_134, ATerm z_134, ATerm a_135, ATerm t);
static ATerm k_12 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm d_12 (ATerm x_41, ATerm y_41, ATerm t);
ATerm debug_1_0 (ATerm k_102 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm q_117 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm f_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_12 (ATerm v_52, ATerm w_52, ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm p_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_12 (ATerm y_45, ATerm z_45, ATerm t);
ATerm foldr_2_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_117 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm need_help_1_0 (ATerm f_120 (ATerm), ATerm t);
ATerm map_1_0 (ATerm v_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm n_12 (ATerm m_59, ATerm n_59, ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_122 (ATerm), ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm parse_options_1_0 (ATerm h_122 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm iowrap_3_0 (ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm s_119 (ATerm), ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm n_14 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,f_0 = NULL,j_0 = NULL;
  a_0 = t;
  t = term_q_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_r_14;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_14), b_0), term_s_14);
  j_0 = t;
  t = SSL_printnl(f_0, j_0);
  t = term_v_14;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
      t = term_q_14;
      t = r_0(t);
      a_1 = t;
      t = term_z_14;
      b_1 = t;
      t = term_a_15;
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, a_1);
      t = m_10(b_1, c_1, a_1, t);
      _fail(t);
    }
  else
    {
      ATerm i_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_0 = ATgetFirst((ATermList) t);
          x_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_0;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_0 = ATgetFirst((ATermList) t);
          z_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_0;
      t = o_0(t);
      t = y_0;
      t = p_0(t);
      i_1 = t;
      t = (ATerm) ATinsert(CheckATermList(z_0), i_1);
    }
  return(t);
}
static ATerm m_10 (ATerm v_57, ATerm w_57, ATerm u_57, ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_57, w_57);
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_15 = ATgetArgument(t, 0);
            ATerm e_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_57, w_57);
        t = n_12(v_57, w_57, t);
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = (ATerm) ATempty;
      }
  }
  n_1 = t;
  t = (ATerm) ATinsert(CheckATermList(n_1), u_57);
  o_1 = t;
  t = SSL_table_put(v_57, w_57, o_1);
  t = m_1;
  return(t);
}
ATerm Option_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
      t = term_q_14;
      t = n_0(t);
      y_1 = t;
      t = term_z_14;
      z_1 = t;
      t = term_a_15;
      a_2 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, y_1);
      t = m_10(z_1, a_2, y_1, t);
      _fail(t);
    }
  else
    {
      ATerm d_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_1 = ATgetFirst((ATermList) t);
          x_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_1;
      t = k_0(t);
      t = term_q_14;
      t = l_0(t);
      d_2 = t;
      t = (ATerm) ATinsert(CheckATermList(x_1), d_2);
    }
  return(t);
}
static ATerm n_10 (ATerm v_67, ATerm t)
{
  ATerm f_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(v_67);
      e_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, e_2)));
      LocalPopChoice(h_15);
    }
  else
    {
      t = f_15;
      {
        ATerm f_2 = NULL;
        t = SSL_concat_strings(v_67);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, f_2);
      }
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm i_15 = t;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL;
      n_2 = t;
      if(match_int(t, 9))
        {
          t = n_2;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = n_2;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = n_2;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = n_2;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_15;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
  i_2 = t;
  {
    ATerm m_15 = t;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,f_7 = NULL;
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
        f_7 = t;
        t = SSLsetAnnotations(f_7, k_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_15;
      }
  }
  if(match_cons(t, sym_layout_1))
    {
      h_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_concat_strings(h_2);
  j_2 = t;
  t = SSL_explode_string(j_2);
  t = filter_1_0(e_0, t);
  {
    ATerm o_15 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_15;
      }
  }
  t = i_2;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm w_15 = t;
  if((PushChoice() == 0))
    {
      ATerm o_2 = NULL,p_2 = NULL,s_2 = NULL,h_7 = NULL;
      s_2 = t;
      if(match_cons(t, sym_layout_1))
        {
          p_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_2);
      o_2 = t;
      t = p_2;
      if(!(match_cons(t, sym_layout_place_holder_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_layout_1, p_2);
      h_7 = t;
      t = SSLsetAnnotations(h_7, o_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_15;
    }
  return(t);
}
static ATerm o_5 (ATerm z_2, ATerm a_3, ATerm b_3, ATerm t)
{
  ATerm o_3 = NULL,j_7 = NULL;
  t = SSLgetAnnotations(b_3);
  o_3 = t;
  t = z_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_2, a_3);
  j_7 = t;
  t = SSLsetAnnotations(j_7, o_3);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm InsLayout_1_0 (ATerm m_127 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t)
  {
    static ATerm q_5 (ATerm s_3, ATerm t_3, ATerm u_3, ATerm t)
    {
      ATerm w_3 = NULL,c_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_3, t_3);
      t = m_127(t);
      if(match_cons(t, sym__2))
        {
          w_3 = ATgetArgument(t, 0);
          c_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, w_3), c_4);
      return(t);
    }
    static ATerm r_5 (ATerm f_4, ATerm g_4, ATerm h_4, ATerm j_4, ATerm k_4, ATerm t)
    {
      ATerm m_4 = NULL,n_4 = NULL,p_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_4, j_4);
      t = m_127(t);
      if(match_cons(t, sym__2))
        {
          m_4 = ATgetArgument(t, 0);
          {
            ATerm y_15 = ATgetArgument(t, 1);
            if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
              {
                n_4 = ATgetFirst((ATermList) y_15);
                s_4 = (ATerm) ATgetNext((ATermList) y_15);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_4), g_4), s_4);
      t = n_5(t);
      if(match_cons(t, sym__2))
        {
          ATerm z_15 = ATgetArgument(t, 0);
          if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
            {
              p_4 = ATgetFirst((ATermList) z_15);
              u_4 = (ATerm) ATgetNext((ATermList) z_15);
            }
          else
            _fail(t);
          t_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL,w_4 = NULL;
            t = term_c_16;
            t = get_options_0_0(t);
            t = oncetd_1_0(h_0, t);
            t = n_4;
            t = has_layout_0_0(t);
            t = n_4;
            if(match_cons(t, sym_layout_1))
              {
                w_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_10(w_4, t);
            v_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_f_16), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_4))), v_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_4))))), t_4);
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_4 = NULL,z_4 = NULL;
                  ATerm i_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm a_5 = NULL;
                      a_5 = t;
                      t = term_c_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(m_0, t);
                      t = a_5;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = i_16;
                    }
                  t = n_4;
                  t = has_significant_layout_0_0(t);
                  t = n_4;
                  if(match_cons(t, sym_layout_1))
                    {
                      z_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_10(z_4, t);
                  y_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(u_4), p_4), y_4), m_4), t_4);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(u_4), p_4), m_4), t_4);
                }
            }
          }
      }
      return(t);
    }
    ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL,m_5 = NULL;
    c_5 = t;
    if(match_cons(t, sym__2))
      {
        d_5 = ATgetArgument(t, 0);
        m_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = d_5;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_5 = ATgetFirst((ATermList) t);
        g_5 = (ATerm) ATgetNext((ATermList) t);
        t = g_5;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = o_5(d_5, m_5, c_5, t);
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = q_5(e_5, m_5, c_5, t);
              }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_5 = ATgetFirst((ATermList) t);
                k_5 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm l_16 = t;
                  int m_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_5(d_5, m_5, c_5, t);
                      LocalPopChoice(m_16);
                    }
                  else
                    {
                      t = l_16;
                      t = r_5(e_5, i_5, k_5, m_5, c_5, t);
                    }
                }
              }
            else
              {
                t = o_5(d_5, m_5, c_5, t);
              }
          }
      }
    else
      {
        t = o_5(d_5, m_5, c_5, t);
      }
    return(t);
  }
  t = n_5(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = t;
      if((PushChoice() == 0))
        {
          ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,q_7 = NULL;
          f_23 = t;
          if(match_cons(t, sym_layout_1))
            {
              e_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_23);
          d_23 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, e_23);
          q_7 = t;
          t = SSLsetAnnotations(q_7, d_23);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_16;
        }
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        ATerm h_25 = NULL,j_25 = NULL;
        h_25 = t;
        if(match_cons(t, sym_layout_1))
          {
            j_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm q_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_17 = NULL,e_17 = NULL,m_17 = NULL,r_7 = NULL;
              t = SSLgetAnnotations(h_25);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, j_25);
              r_7 = t;
              t = SSLsetAnnotations(r_7, e_17);
              m_17 = t;
              t = term_c_16;
              t = get_options_0_0(t);
              t = oncetd_1_0(s_0, t);
              t = m_17;
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  a_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_10(a_17, t);
              LocalPopChoice(r_16);
            }
          else
            {
              t = q_16;
              {
                ATerm u_17 = NULL,v_17 = NULL,t_7 = NULL;
                t = SSLgetAnnotations(h_25);
                v_17 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, j_25);
                t_7 = t;
                t = SSLsetAnnotations(t_7, v_17);
                {
                  ATerm s_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm a_18 = NULL;
                      a_18 = t;
                      t = term_c_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(t_0, t);
                      t = a_18;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = s_16;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    u_17 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_10(u_17, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,z_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,l_25 = NULL,o_25 = NULL,u_25 = NULL,p_7 = NULL,m_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_7);
  z_6 = t;
  t = c_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_6 = ATgetFirst((ATermList) t);
      {
        ATerm t_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_16 = ATgetFirst((ATermList) t);
      d_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_7, d_7);
  m_7 = t;
  t = SSLsetAnnotations(m_7, z_6);
  {
    static ATerm o_26 (ATerm t)
    {
      static ATerm j_27 (ATerm w_14, ATerm x_14, ATerm y_14, ATerm t)
      {
        ATerm g_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,n_15 = NULL,o_7 = NULL,n_7 = NULL;
        t = SSLgetAnnotations(w_14);
        g_15 = t;
        t = x_14;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_15 = ATgetFirst((ATermList) t);
            l_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_14);
        j_15 = t;
        t = (ATerm) ATinsert(CheckATermList(l_15), k_15);
        n_7 = t;
        t = SSLsetAnnotations(n_7, j_15);
        n_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_15, y_14);
        o_7 = t;
        t = SSLsetAnnotations(o_7, g_15);
        t = InsLayout_1_0(o_26, t);
        return(t);
      }
      ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
      u_15 = t;
      if(match_cons(t, sym__2))
        {
          s_15 = ATgetArgument(t, 0);
          t_15 = ATgetArgument(t, 1);
          t = s_15;
          if(match_cons(t, sym_H_2))
            {
              q_15 = ATgetArgument(t, 0);
              r_15 = ATgetArgument(t, 1);
              {
                ATerm v_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_1 = NULL,g_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                    t = InsLayout_1_0(o_26, t);
                    if(match_cons(t, sym__2))
                      {
                        e_1 = ATgetArgument(t, 0);
                        g_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, q_15, e_1), g_1);
                    LocalPopChoice(w_16);
                  }
                else
                  {
                    t = v_16;
                    {
                      ATerm x_16 = t;
                      int y_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_27(u_15, s_15, t_15, t);
                          LocalPopChoice(y_16);
                        }
                      else
                        {
                          t = x_16;
                          t = u_15;
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  q_15 = ATgetArgument(t, 0);
                  r_15 = ATgetArgument(t, 1);
                  {
                    ATerm z_16 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_2 = NULL,w_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                        t = InsLayout_1_0(o_26, t);
                        if(match_cons(t, sym__2))
                          {
                            v_2 = ATgetArgument(t, 0);
                            w_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, q_15, v_2), w_2);
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = z_16;
                        {
                          ATerm c_17 = t;
                          int d_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_27(u_15, s_15, t_15, t);
                              LocalPopChoice(d_17);
                            }
                          else
                            {
                              t = c_17;
                              t = u_15;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      q_15 = ATgetArgument(t, 0);
                      r_15 = ATgetArgument(t, 1);
                      {
                        ATerm f_17 = t;
                        int g_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_5 = NULL,u_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                            t = InsLayout_1_0(o_26, t);
                            if(match_cons(t, sym__2))
                              {
                                t_5 = ATgetArgument(t, 0);
                                u_5 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, q_15, t_5), u_5);
                            LocalPopChoice(g_17);
                          }
                        else
                          {
                            t = f_17;
                            {
                              ATerm h_17 = t;
                              int i_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_27(u_15, s_15, t_15, t);
                                  LocalPopChoice(i_17);
                                }
                              else
                                {
                                  t = h_17;
                                  t = u_15;
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          q_15 = ATgetArgument(t, 0);
                          r_15 = ATgetArgument(t, 1);
                          p_15 = ATgetArgument(t, 2);
                          {
                            ATerm j_17 = t;
                            int k_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_6 = NULL,i_6 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, p_15, t_15);
                                t = InsLayout_1_0(o_26, t);
                                if(match_cons(t, sym__2))
                                  {
                                    h_6 = ATgetArgument(t, 0);
                                    i_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, q_15, r_15, h_6), i_6);
                                LocalPopChoice(k_17);
                              }
                            else
                              {
                                t = j_17;
                                {
                                  ATerm l_17 = t;
                                  int n_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_27(u_15, s_15, t_15, t);
                                      LocalPopChoice(n_17);
                                    }
                                  else
                                    {
                                      t = l_17;
                                      t = u_15;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              q_15 = ATgetArgument(t, 0);
                              r_15 = ATgetArgument(t, 1);
                              {
                                ATerm o_17 = t;
                                int p_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_7 = NULL,y_7 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                                    t = InsLayout_1_0(o_26, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        w_7 = ATgetArgument(t, 0);
                                        y_7 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, q_15, w_7), y_7);
                                    LocalPopChoice(p_17);
                                  }
                                else
                                  {
                                    t = o_17;
                                    {
                                      ATerm q_17 = t;
                                      int r_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = j_27(u_15, s_15, t_15, t);
                                          LocalPopChoice(r_17);
                                        }
                                      else
                                        {
                                          t = q_17;
                                          t = u_15;
                                        }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  q_15 = ATgetArgument(t, 0);
                                  r_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_17 = t;
                                    int t_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm k_8 = NULL,n_8 = NULL,p_8 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, q_15, t_15);
                                        t = InsLayout_1_0(o_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            k_8 = ATgetArgument(t, 0);
                                            {
                                              ATerm w_17 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                                        t = InsLayout_1_0(o_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            n_8 = ATgetArgument(t, 0);
                                            p_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, k_8, n_8), p_8);
                                        LocalPopChoice(t_17);
                                      }
                                    else
                                      {
                                        t = s_17;
                                        {
                                          ATerm x_17 = t;
                                          int y_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_27(u_15, s_15, t_15, t);
                                              LocalPopChoice(y_17);
                                            }
                                          else
                                            {
                                              t = x_17;
                                              t = u_15;
                                            }
                                        }
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      q_15 = ATgetArgument(t, 0);
                                      r_15 = ATgetArgument(t, 1);
                                      {
                                        ATerm z_17 = t;
                                        int b_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm d_10 = NULL,e_10 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                                            t = InsLayout_1_0(o_26, t);
                                            if(match_cons(t, sym__2))
                                              {
                                                d_10 = ATgetArgument(t, 0);
                                                e_10 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, q_15, d_10), e_10);
                                            LocalPopChoice(b_18);
                                          }
                                        else
                                          {
                                            t = z_17;
                                            {
                                              ATerm c_18 = t;
                                              int d_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = j_27(u_15, s_15, t_15, t);
                                                  LocalPopChoice(d_18);
                                                }
                                              else
                                                {
                                                  t = c_18;
                                                  t = u_15;
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          q_15 = ATgetArgument(t, 0);
                                          r_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_18 = t;
                                            int g_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm j_11 = NULL,r_11 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                                                t = InsLayout_1_0(o_26, t);
                                                if(match_cons(t, sym__2))
                                                  {
                                                    j_11 = ATgetArgument(t, 0);
                                                    r_11 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, q_15, j_11), r_11);
                                                LocalPopChoice(g_18);
                                              }
                                            else
                                              {
                                                t = e_18;
                                                {
                                                  ATerm i_18 = t;
                                                  int j_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = j_27(u_15, s_15, t_15, t);
                                                      LocalPopChoice(j_18);
                                                    }
                                                  else
                                                    {
                                                      t = i_18;
                                                      t = u_15;
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              q_15 = ATgetArgument(t, 0);
                                              r_15 = ATgetArgument(t, 1);
                                              {
                                                ATerm k_18 = t;
                                                int l_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm i_13 = NULL,j_13 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                                                    t = InsLayout_1_0(o_26, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        i_13 = ATgetArgument(t, 0);
                                                        j_13 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, q_15, i_13), j_13);
                                                    LocalPopChoice(l_18);
                                                  }
                                                else
                                                  {
                                                    t = k_18;
                                                    {
                                                      ATerm m_18 = t;
                                                      int o_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_27(u_15, s_15, t_15, t);
                                                          LocalPopChoice(o_18);
                                                        }
                                                      else
                                                        {
                                                          t = m_18;
                                                          t = u_15;
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  q_15 = ATgetArgument(t, 0);
                                                  r_15 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm p_18 = t;
                                                    int q_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_15 = NULL,x_15 = NULL;
                                                        t = (ATerm) ATmakeAppl(sym__2, r_15, t_15);
                                                        t = InsLayout_1_0(o_26, t);
                                                        if(match_cons(t, sym__2))
                                                          {
                                                            v_15 = ATgetArgument(t, 0);
                                                            x_15 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, q_15, v_15), x_15);
                                                        LocalPopChoice(q_18);
                                                      }
                                                    else
                                                      {
                                                        t = p_18;
                                                        {
                                                          ATerm r_18 = t;
                                                          int s_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = j_27(u_15, s_15, t_15, t);
                                                              LocalPopChoice(s_18);
                                                            }
                                                          else
                                                            {
                                                              t = r_18;
                                                              t = u_15;
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm t_18 = t;
                                                  int u_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = j_27(u_15, s_15, t_15, t);
                                                      LocalPopChoice(u_18);
                                                    }
                                                  else
                                                    {
                                                      t = t_18;
                                                      t = u_15;
                                                    }
                                                }
                                            }
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
          t = u_15;
        }
      return(t);
    }
    t = o_26(t);
  }
  v_6 = t;
  if(match_cons(t, sym__2))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_6);
  r_6 = t;
  t = s_6;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_18 = ATgetFirst((ATermList) t);
                ATerm y_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, s_6);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
      }
  }
  u_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_6, t_6);
  p_7 = t;
  t = SSLsetAnnotations(p_7, r_6);
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      {
        ATerm z_18 = ATgetArgument(t, 1);
        if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
          {
            p_6 = ATgetFirst((ATermList) z_18);
            {
              ATerm a_19 = (ATerm) ATgetNext((ATermList) z_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_6), o_6), n_6);
  t = filter_1_0(q_0, t);
  t = flat_list_0_0(t);
  u_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_25 = ATgetFirst((ATermList) t);
      o_25 = (ATerm) ATgetNext((ATermList) t);
      t = o_25;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = l_25;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_f_16), u_25);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_f_16), u_25);
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm z_126 (ATerm), ATerm t)
{
  static ATerm n_27 (ATerm t)
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL;
        t = z_126(t);
        m_27 = t;
        t = (ATerm) ATinsert(ATempty, m_27);
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        {
          ATerm f_18 = NULL,h_18 = NULL;
          h_18 = t;
          t = SSL_explode_term(h_18);
          if(match_cons(t, sym__2))
            {
              ATerm d_19 = ATgetArgument(t, 0);
              f_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_18;
          t = foldr_3_0(u_0, conc_0_0, n_27, t);
        }
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm o_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,t_8 = NULL;
  w_27 = t;
  if(match_cons(t, sym_amb_1))
    {
      v_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_27);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, v_27);
  t_8 = t;
  t = SSLsetAnnotations(t_8, u_27);
  t = term_r_14;
  s_27 = t;
  t = (ATerm) ATinsert(ATempty, term_e_19);
  t_27 = t;
  t = SSL_printnl(s_27, t_27);
  t = term_v_14;
  o_27 = t;
  t = SSL_exit(o_27);
  t = (ATerm) ATinsert(ATempty, term_e_19);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_30;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          l_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_19 = NULL,e_20 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(j_30);
            z_19 = t;
            t = k_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_30;
            t = flat_list_0_0(t);
            e_20 = t;
            t = (ATerm) ATinsert(CheckATermList(e_20), k_30);
            w_8 = t;
            t = SSLsetAnnotations(w_8, z_19);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            {
              ATerm i_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,d_21 = NULL,x_8 = NULL;
                  t = SSLgetAnnotations(j_30);
                  z_20 = t;
                  t = k_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = k_30;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm k_19 = ATgetFirst((ATermList) t);
                          ATerm l_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = k_30;
                    }
                  t = (ATerm) ATinsert(CheckATermList(l_30), k_30);
                  x_8 = t;
                  t = SSLsetAnnotations(x_8, z_20);
                  d_21 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_20 = ATgetFirst((ATermList) t);
                      {
                        ATerm m_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = d_21;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm n_19 = ATgetFirst((ATermList) t);
                      x_20 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, y_20, x_20);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(j_19);
                }
              else
                {
                  t = i_19;
                  {
                    ATerm v_21 = NULL,y_21 = NULL,y_8 = NULL;
                    t = SSLgetAnnotations(j_30);
                    v_21 = t;
                    t = l_30;
                    t = flat_list_0_0(t);
                    y_21 = t;
                    t = (ATerm) ATinsert(CheckATermList(y_21), k_30);
                    y_8 = t;
                    t = SSLsetAnnotations(y_8, v_21);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,t_30 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      t_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
      {
        ATerm x_30 = NULL,y_30 = NULL;
        t = term_q_14;
        t = i_0(t);
        y_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_30, y_30);
        t = index_0_0(t);
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_30, x_30);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm a_31 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          t_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_q_14;
      t = i_0(t);
      a_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_30, a_31);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  static ATerm w_0 (ATerm t)
  {
    t = bottomup_1_0(k_96, t);
    return(t);
  }
  t = SRTS_all(w_0, t);
  t = k_96(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  c_33 = t;
  if(match_cons(t, sym_Arg_1))
    {
      d_33 = ATgetArgument(t, 0);
      {
        ATerm j_22 = NULL,e_9 = NULL;
        t = SSLgetAnnotations(c_33);
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, d_33);
        e_9 = t;
        t = SSLsetAnnotations(e_9, j_22);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          d_33 = ATgetArgument(t, 0);
          b_33 = ATgetArgument(t, 1);
          {
            ATerm u_22 = NULL,f_9 = NULL;
            t = SSLgetAnnotations(c_33);
            u_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, d_33, b_33);
            f_9 = t;
            t = SSLsetAnnotations(f_9, u_22);
          }
        }
      else
        {
          ATerm s_23 = NULL,g_9 = NULL;
          if(match_cons(t, sym_S_1))
            {
              d_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_33);
          s_23 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, d_33);
          g_9 = t;
          t = SSLsetAnnotations(g_9, s_23);
        }
    }
  return(t);
}
static ATerm d_38 (ATerm k_33, ATerm l_33, ATerm o_33, ATerm t)
{
  ATerm f_34 = NULL,i_9 = NULL;
  t = SSLgetAnnotations(k_33);
  f_34 = t;
  t = l_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = o_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_33, o_33);
  i_9 = t;
  t = SSLsetAnnotations(i_9, f_34);
  return(t);
}
static ATerm p_10 (ATerm r_21, ATerm q_21, ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,c_32 = NULL,d_32 = NULL,h_9 = NULL;
  y_31 = t;
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_31);
  z_31 = t;
  t = a_32;
  t = collect_p__1_0(d_1, t);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_32, c_32);
  h_9 = t;
  t = SSLsetAnnotations(h_9, z_31);
  {
    static ATerm c_38 (ATerm t)
    {
      static ATerm f_38 (ATerm m_34, ATerm n_34, ATerm o_34, ATerm p_34, ATerm t)
      {
        ATerm u_34 = NULL,y_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_34, p_34);
        t = c_38(t);
        if(match_cons(t, sym__2))
          {
            u_34 = ATgetArgument(t, 0);
            y_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_34), (ATerm) ATmakeAppl(sym_Arg_1, m_34)), (ATerm) ATinsert(CheckATermList(y_34), o_34));
        return(t);
      }
      static ATerm g_38 (ATerm h_35, ATerm i_35, ATerm l_35, ATerm m_35, ATerm n_35, ATerm t)
      {
        ATerm z_35 = NULL,c_36 = NULL;
        t = i_35;
        if(((v_31 != NULL) && (v_31 != t)))
          _fail(t);
        else
          v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_35, n_35);
        t = c_38(t);
        if(match_cons(t, sym__2))
          {
            z_35 = ATgetArgument(t, 0);
            c_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_35), (ATerm) ATmakeAppl(sym_Arg2_2, h_35, i_35)), (ATerm) ATinsert(CheckATermList(c_36), m_35));
        return(t);
      }
      static ATerm j_38 (ATerm h_36, ATerm i_36, ATerm k_36, ATerm t)
      {
        ATerm q_36 = NULL,v_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, i_36, k_36);
        t = c_38(t);
        if(match_cons(t, sym__2))
          {
            q_36 = ATgetArgument(t, 0);
            v_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_36), h_36), v_36);
        return(t);
      }
      ATerm z_36 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,i_37 = NULL,l_37 = NULL,m_37 = NULL,t_37 = NULL;
      c_37 = t;
      if(match_cons(t, sym__2))
        {
          d_37 = ATgetArgument(t, 0);
          l_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          t_37 = (ATerm) ATgetNext((ATermList) t);
          t = d_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_37 = ATgetFirst((ATermList) t);
              i_37 = (ATerm) ATgetNext((ATermList) t);
              t = e_37;
              if(match_cons(t, sym_Arg_1))
                {
                  z_36 = ATgetArgument(t, 0);
                  {
                    ATerm o_19 = t;
                    int p_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = d_38(c_37, d_37, l_37, t);
                        LocalPopChoice(p_19);
                      }
                    else
                      {
                        t = o_19;
                        {
                          ATerm q_19 = t;
                          int r_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_38(z_36, i_37, m_37, t_37, t);
                              LocalPopChoice(r_19);
                            }
                          else
                            {
                              t = q_19;
                              t = j_38(e_37, i_37, t_37, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      z_36 = ATgetArgument(t, 0);
                      b_37 = ATgetArgument(t, 1);
                      {
                        ATerm s_19 = t;
                        int t_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = d_38(c_37, d_37, l_37, t);
                            LocalPopChoice(t_19);
                          }
                        else
                          {
                            t = s_19;
                            {
                              ATerm u_19 = t;
                              int v_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = g_38(z_36, b_37, i_37, m_37, t_37, t);
                                  LocalPopChoice(v_19);
                                }
                              else
                                {
                                  t = u_19;
                                  t = j_38(e_37, i_37, t_37, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm w_19 = t;
                      int x_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_38(c_37, d_37, l_37, t);
                          LocalPopChoice(x_19);
                        }
                      else
                        {
                          t = w_19;
                          t = j_38(e_37, i_37, t_37, t);
                        }
                    }
                }
            }
          else
            {
              t = d_38(c_37, d_37, l_37, t);
            }
        }
      else
        {
          t = d_37;
          t = d_38(c_37, d_37, l_37, t);
        }
      return(t);
    }
    t = c_38(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      w_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_21, w_31);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  static ATerm q_39 (ATerm t)
  {
    ATerm i_39 = NULL,k_39 = NULL,l_39 = NULL;
    i_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_39;
      }
    else
      {
        ATerm l_24 = NULL,p_24 = NULL,r_24 = NULL,q_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_39 = ATgetFirst((ATermList) t);
            l_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_39;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_20 = ATgetFirst((ATermList) t);
            ATerm b_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_39);
        l_24 = t;
        t = term_q_14;
        t = f_127(t);
        {
          static ATerm f_1 (ATerm t)
          {
            ATerm c_20 = t;
            int d_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_20 = t;
                int g_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm h_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, k_39);
                      return(t);
                    }
                    t = Instantiate_1_0(h_1, t);
                    LocalPopChoice(g_20);
                  }
                else
                  {
                    t = f_20;
                    t = flat_list_0_0(t);
                  }
                LocalPopChoice(d_20);
              }
            else
              {
                t = c_20;
              }
            return(t);
          }
          t = bottomup_1_0(f_1, t);
        }
        r_24 = t;
        t = l_39;
        t = q_39(t);
        p_24 = t;
        t = (ATerm) ATinsert(CheckATermList(p_24), r_24);
        q_9 = t;
        t = SSLsetAnnotations(q_9, l_24);
      }
    return(t);
  }
  t = q_39(t);
  return(t);
}
static ATerm r_10 (ATerm g_24, ATerm h_24, ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,b_40 = NULL,j_40 = NULL;
  static ATerm k_1 (ATerm t)
  {
    t = not_null(x_39);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, e_24, (ATerm) ATinsert(ATempty, f_24));
  t = conc_0_0(t);
  b_40 = t;
  t = g_24;
  if(match_cons(t, sym_iter_1))
    {
      j_40 = ATgetArgument(t, 0);
      {
        ATerm a_25 = NULL,s_9 = NULL;
        t = SSLgetAnnotations(g_24);
        a_25 = t;
        t = j_40;
        w_39 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, j_40);
        s_9 = t;
        t = SSLsetAnnotations(s_9, a_25);
      }
    }
  else
    {
      ATerm p_25 = NULL,t_9 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          j_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_24);
      p_25 = t;
      t = j_40;
      w_39 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, j_40);
      t_9 = t;
      t = SSLsetAnnotations(t_9, p_25);
    }
  t = (ATerm) ATmakeAppl(sym__2, g_24, b_40);
  t = get_pp_entry_0_0(t);
  if(((x_39 != NULL) && (x_39 != t)))
    _fail(t);
  else
    x_39 = t;
  t = h_24;
  {
    static ATerm j_1 (ATerm t)
    {
      ATerm k_40 = NULL;
      k_40 = t;
      t = (ATerm) ATmakeAppl(sym__4, w_39, k_40, b_40, term_v_14);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(j_1, t);
  }
  t = instantiate_list_1_0(k_1, t);
  return(t);
}
static ATerm y_42 (ATerm v_40, ATerm y_40, ATerm z_40, ATerm t)
{
  ATerm f_41 = NULL,x_9 = NULL;
  t = SSLgetAnnotations(z_40);
  f_41 = t;
  t = y_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_40), v_40);
  x_9 = t;
  t = SSLsetAnnotations(x_9, f_41);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm h_127 (ATerm), ATerm t)
{
  static ATerm x_42 (ATerm t)
  {
    static ATerm z_42 (ATerm m_41, ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
    {
      ATerm b_42 = NULL,c_42 = NULL,g_42 = NULL,y_9 = NULL;
      t = p_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm h_20 = ATgetFirst((ATermList) t);
          ATerm i_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_41);
      b_42 = t;
      t = term_q_14;
      t = h_127(t);
      {
        static ATerm l_1 (ATerm t)
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_20 = t;
              int m_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm p_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, n_41), m_41);
                    return(t);
                  }
                  t = Instantiate_1_0(p_1, t);
                  LocalPopChoice(m_20);
                }
              else
                {
                  t = l_20;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
            }
          return(t);
        }
        t = bottomup_1_0(l_1, t);
      }
      g_42 = t;
      t = o_41;
      t = x_42(t);
      c_42 = t;
      t = (ATerm) ATinsert(CheckATermList(c_42), g_42);
      y_9 = t;
      t = SSLsetAnnotations(y_9, b_42);
      return(t);
    }
    ATerm k_42 = NULL,l_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
    k_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_42 = ATgetFirst((ATermList) t);
            o_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_42;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_42 = ATgetFirst((ATermList) t);
            q_42 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm n_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_42(l_42, o_42, k_42, t);
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = n_20;
                  t = z_42(l_42, p_42, q_42, k_42, t);
                }
            }
          }
        else
          {
            t = y_42(l_42, o_42, k_42, t);
          }
      }
    return(t);
  }
  t = x_42(t);
  return(t);
}
static ATerm s_10 (ATerm w_46, ATerm x_46, ATerm t)
{
  t = SSL_mod(w_46, x_46);
  return(t);
}
static ATerm t_10 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm m_25, ATerm n_25, ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_43 = NULL,y_43 = NULL,a_44 = NULL,j_44 = NULL;
      t = term_r_20;
      a_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_25, term_r_20);
      t = s_10(m_25, a_44, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_q_14;
      t = m_94(t);
      u_43 = t;
      t = term_q_14;
      t = n_94(t);
      y_43 = t;
      t = (ATerm) ATmakeAppl(sym__4, u_43, n_25, y_43, term_r_20);
      t = symbol2abox_0_0(t);
      j_44 = t;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_44;
            {
              ATerm u_20 = t;
              if((PushChoice() == 0))
                {
                  ATerm w_25 = NULL;
                  w_25 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = w_25;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm v_20 = ATgetFirst((ATermList) t);
                          ATerm w_20 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = w_25;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_20;
                }
            }
            t = (ATerm) ATinsert(ATempty, j_44);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = j_44;
          }
      }
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm r_44 = NULL,s_44 = NULL,f_45 = NULL;
        t = term_q_14;
        t = l_94(t);
        r_44 = t;
        t = term_q_14;
        t = n_94(t);
        s_44 = t;
        t = (ATerm) ATmakeAppl(sym__4, r_44, n_25, s_44, term_v_14);
        t = symbol2abox_0_0(t);
        f_45 = t;
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_45;
              {
                ATerm c_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_26 = NULL;
                    e_26 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = e_26;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_21 = ATgetFirst((ATermList) t);
                            ATerm f_21 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = e_26;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_21;
                  }
              }
              t = (ATerm) ATinsert(ATempty, f_45);
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              t = f_45;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  static ATerm u_45 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_104(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm m_45 = NULL,n_45 = NULL,p_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,h_10 = NULL;
          t = z_104(t);
          t_45 = t;
          if(match_cons(t, sym__2))
            {
              n_45 = ATgetArgument(t, 0);
              p_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_45);
          m_45 = t;
          t = n_45;
          t = b_105(t);
          r_45 = t;
          t = p_45;
          t = u_45(t);
          s_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
          h_10 = t;
          t = SSLsetAnnotations(h_10, m_45);
          t = a_105(t);
        }
      }
    return(t);
  }
  t = u_45(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_21 = ATgetArgument(t, 0);
      ATerm n_21 = ATgetArgument(t, 1);
      if(((ATgetType(n_21) != AT_LIST) || !(ATisEmpty(n_21))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,g_46 = NULL,j_46 = NULL,l_46 = NULL;
  if(match_cons(t, sym__2))
    {
      c_46 = ATgetArgument(t, 0);
      {
        ATerm o_21 = ATgetArgument(t, 1);
        if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
          {
            d_46 = ATgetFirst((ATermList) o_21);
            g_46 = (ATerm) ATgetNext((ATermList) o_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_v_14;
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_46, term_v_14);
  t = l_12(c_46, l_46, t);
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_46, d_46), (ATerm) ATmakeAppl(sym__2, j_46, g_46));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm m_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      m_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_46), m_46);
  return(t);
}
ATerm nzip_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, x_45);
  t = genzip_4_0(q_1, r_1, s_1, k_105, t);
  return(t);
}
static ATerm x_10 (ATerm d_25, ATerm e_25, ATerm c_25, ATerm i_25, ATerm t)
{
  ATerm v_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,y_47 = NULL,a_48 = NULL;
  static ATerm g_2 (ATerm t)
  {
    t = not_null(c_47);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, c_25, (ATerm) ATinsert(ATempty, i_25));
  t = conc_0_0(t);
  d_47 = t;
  t = d_25;
  if(match_cons(t, sym_iter_sep_2))
    {
      y_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
      {
        ATerm l_26 = NULL,u_10 = NULL;
        t = SSLgetAnnotations(d_25);
        l_26 = t;
        t = y_47;
        v_46 = t;
        t = a_48;
        b_47 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, y_47, a_48);
        u_10 = t;
        t = SSLsetAnnotations(u_10, l_26);
      }
    }
  else
    {
      ATerm b_27 = NULL,v_10 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          y_47 = ATgetArgument(t, 0);
          a_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_25);
      b_27 = t;
      t = y_47;
      v_46 = t;
      t = a_48;
      b_47 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, y_47, a_48);
      v_10 = t;
      t = SSLsetAnnotations(v_10, b_27);
    }
  t = (ATerm) ATmakeAppl(sym__2, d_25, d_47);
  t = get_pp_entry_0_0(t);
  if(((c_47 != NULL) && (c_47 != t)))
    _fail(t);
  else
    c_47 = t;
  t = e_25;
  {
    static ATerm t_1 (ATerm t)
    {
      ATerm b_48 = NULL,f_48 = NULL;
      static ATerm u_1 (ATerm t)
      {
        t = v_46;
        return(t);
      }
      static ATerm v_1 (ATerm t)
      {
        t = b_47;
        return(t);
      }
      static ATerm b_2 (ATerm t)
      {
        t = d_47;
        return(t);
      }
      static ATerm c_2 (ATerm t)
      {
        t = i_25;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          b_48 = ATgetArgument(t, 0);
          f_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_10(u_1, v_1, b_2, c_2, b_48, f_48, t);
      return(t);
    }
    t = nzip_1_0(t_1, t);
  }
  t = instantiate_sep_list_1_0(g_2, t);
  return(t);
}
static ATerm z_10 (ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm p_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_46, f_46);
      LocalPopChoice(s_21);
    }
  else
    {
      t = p_21;
      t = SSL_subtr(e_46, f_46);
    }
  return(t);
}
static ATerm a_11 (ATerm m_31, ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm j_48 = NULL,o_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_31, term_r_20);
  t = geq_0_0(t);
  t = term_v_14;
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_31, term_v_14);
  t = z_10(m_31, o_48, t);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, l_31);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm u_48 = NULL,w_48 = NULL,a_49 = NULL;
  if(match_cons(t, sym__2))
    {
      u_48 = ATgetArgument(t, 0);
      {
        ATerm t_21 = ATgetArgument(t, 1);
        if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
          {
            w_48 = ATgetFirst((ATermList) t_21);
            a_49 = (ATerm) ATgetNext((ATermList) t_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_11(u_48, w_48, a_49, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm q_48 = NULL;
  t = repeat_2_0(q_2, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm u_21 = ATgetArgument(t, 0);
      if(((ATgetType(u_21) != AT_INT) || (ATgetInt((ATermInt) u_21) != 1)))
        _fail(t);
      {
        ATerm w_21 = ATgetArgument(t, 1);
        if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
          {
            q_48 = ATgetFirst((ATermList) w_21);
            {
              ATerm x_21 = (ATerm) ATgetNext((ATermList) w_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_48;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm z_21 = t;
  if((PushChoice() == 0))
    {
      ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,k_11 = NULL;
      t_68 = t;
      if(match_cons(t, sym_lit_1))
        {
          s_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_68);
      r_68 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, s_68);
      k_11 = t;
      t = SSLsetAnnotations(k_11, r_68);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_21;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_22 = t;
  if((PushChoice() == 0))
    {
      ATerm v_68 = NULL,w_68 = NULL,y_68 = NULL,l_11 = NULL;
      y_68 = t;
      if(match_cons(t, sym_lit_1))
        {
          w_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_68);
      v_68 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, w_68);
      l_11 = t;
      t = SSLsetAnnotations(l_11, v_68);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_22;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,m_66 = NULL,o_66 = NULL,q_66 = NULL,u_66 = NULL,v_66 = NULL,g_67 = NULL,t_67 = NULL,w_67 = NULL;
  q_66 = t;
  if(match_cons(t, sym__4))
    {
      u_66 = ATgetArgument(t, 0);
      g_67 = ATgetArgument(t, 1);
      t_67 = ATgetArgument(t, 2);
      w_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = u_66;
  if(match_cons(t, sym_seq_1))
    {
      v_66 = ATgetArgument(t, 0);
      {
        ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL,o_68 = NULL,p_68 = NULL;
        static ATerm u_2 (ATerm t)
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_22 = t;
              int i_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm x_2 (ATerm t)
                  {
                    t = not_null(i_68);
                    return(t);
                  }
                  t = Instantiate_1_0(x_2, t);
                  LocalPopChoice(i_22);
                }
              else
                {
                  t = h_22;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
            }
          return(t);
        }
        t = g_67;
        if(match_cons(t, sym_appl_2))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            o_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_67, (ATerm) ATinsert(ATempty, w_67));
        t = conc_0_0(t);
        p_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, v_66), p_68);
        t = get_pp_entry_0_0(t);
        h_68 = t;
        t = v_66;
        t = filter_1_0(r_2, t);
        j_68 = t;
        t = o_66;
        t = filter_1_0(t_2, t);
        o_68 = t;
        t = (ATerm) ATmakeAppl(sym__4, j_68, o_68, p_68, term_v_14);
        t = seq2abox_0_0(t);
        if(((i_68 != NULL) && (i_68 != t)))
          _fail(t);
        else
          i_68 = t;
        t = h_68;
        t = bottomup_1_0(u_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          v_66 = ATgetArgument(t, 0);
          f_66 = ATgetArgument(t, 1);
          {
            ATerm n_28 = NULL,r_28 = NULL,u_28 = NULL;
            static ATerm t_39 (ATerm t)
            {
              ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,j_29 = NULL,l_29 = NULL,m_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,v_29 = NULL,e_30 = NULL,q_30 = NULL,w_30 = NULL,b_31 = NULL;
              if(match_cons(t, sym__4))
                {
                  o_29 = ATgetArgument(t, 0);
                  p_29 = ATgetArgument(t, 1);
                  w_30 = ATgetArgument(t, 2);
                  b_31 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = p_29;
              if(match_cons(t, sym_appl_2))
                {
                  q_29 = ATgetArgument(t, 0);
                  v_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_29;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_30 = ATgetFirst((ATermList) t);
                  q_30 = (ATerm) ATgetNext((ATermList) t);
                  t = q_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = q_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          x_28 = ATgetArgument(t, 0);
                          a_29 = ATgetArgument(t, 1);
                          m_29 = ATgetArgument(t, 2);
                          t = a_29;
                          if(match_cons(t, sym_alt_2))
                            {
                              j_29 = ATgetArgument(t, 0);
                              l_29 = ATgetArgument(t, 1);
                              t = x_28;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  y_28 = ATgetFirst((ATermList) t);
                                  z_28 = (ATerm) ATgetNext((ATermList) t);
                                  t = z_28;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = o_29;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          v_28 = ATgetArgument(t, 0);
                                          w_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm l_22 = t;
                                            int m_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = y_28;
                                                if((v_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = j_29;
                                                if((v_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = l_29;
                                                if((w_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, v_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, v_28), v_28, m_29), v_29), w_30, b_31);
                                                t = t_39(t);
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
                                                      ATerm t_31 = NULL,u_31 = NULL;
                                                      t = j_29;
                                                      if((v_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = l_29;
                                                      if((w_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = term_v_14;
                                                      u_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, b_31, term_v_14);
                                                      t = l_12(b_31, u_31, t);
                                                      t_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, y_28), w_28, m_29), v_29), w_30, t_31);
                                                      t = t_39(t);
                                                      LocalPopChoice(o_22);
                                                    }
                                                  else
                                                    {
                                                      t = n_22;
                                                      {
                                                        ATerm x_32 = NULL;
                                                        static ATerm y_2 (ATerm t)
                                                        {
                                                          ATerm p_22 = t;
                                                          int q_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_22 = t;
                                                              int s_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  static ATerm c_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATinsert(ATempty, not_null(r_28));
                                                                    return(t);
                                                                  }
                                                                  t = Instantiate_1_0(c_3, t);
                                                                  LocalPopChoice(s_22);
                                                                }
                                                              else
                                                                {
                                                                  t = r_22;
                                                                  t = flat_list_0_0(t);
                                                                }
                                                              LocalPopChoice(q_22);
                                                            }
                                                          else
                                                            {
                                                              t = p_22;
                                                            }
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, v_66, f_66), w_30);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((n_28 != NULL) && (n_28 != t)))
                                                          _fail(t);
                                                        else
                                                          n_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, o_29, e_30, w_30, term_v_14);
                                                        t = symbol2abox_0_0(t);
                                                        if(((r_28 != NULL) && (r_28 != t)))
                                                          _fail(t);
                                                        else
                                                          r_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, b_31, n_28);
                                                        t = index_0_0(t);
                                                        x_32 = t;
                                                        t = (ATerm) ATinsert(ATempty, x_32);
                                                        t = bottomup_1_0(y_2, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm s_33 = NULL;
                                          static ATerm d_3 (ATerm t)
                                          {
                                            ATerm t_22 = t;
                                            int v_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm w_22 = t;
                                                int x_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    static ATerm e_3 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(r_28));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(e_3, t);
                                                    LocalPopChoice(x_22);
                                                  }
                                                else
                                                  {
                                                    t = w_22;
                                                    t = flat_list_0_0(t);
                                                  }
                                                LocalPopChoice(v_22);
                                              }
                                            else
                                              {
                                                t = t_22;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, v_66, f_66), w_30);
                                          t = get_pp_entry_0_0(t);
                                          if(((n_28 != NULL) && (n_28 != t)))
                                            _fail(t);
                                          else
                                            n_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, o_29, e_30, w_30, term_v_14);
                                          t = symbol2abox_0_0(t);
                                          if(((r_28 != NULL) && (r_28 != t)))
                                            _fail(t);
                                          else
                                            r_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, b_31, n_28);
                                          t = index_0_0(t);
                                          s_33 = t;
                                          t = (ATerm) ATinsert(ATempty, s_33);
                                          t = bottomup_1_0(d_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm x_34 = NULL;
                                      static ATerm f_3 (ATerm t)
                                      {
                                        ATerm y_22 = t;
                                        int z_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm a_23 = t;
                                            int b_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                static ATerm g_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(r_28));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(g_3, t);
                                                LocalPopChoice(b_23);
                                              }
                                            else
                                              {
                                                t = a_23;
                                                t = flat_list_0_0(t);
                                              }
                                            LocalPopChoice(z_22);
                                          }
                                        else
                                          {
                                            t = y_22;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, v_66, f_66), w_30);
                                      t = get_pp_entry_0_0(t);
                                      if(((n_28 != NULL) && (n_28 != t)))
                                        _fail(t);
                                      else
                                        n_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, o_29, e_30, w_30, term_v_14);
                                      t = symbol2abox_0_0(t);
                                      if(((r_28 != NULL) && (r_28 != t)))
                                        _fail(t);
                                      else
                                        r_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, b_31, n_28);
                                      t = index_0_0(t);
                                      x_34 = t;
                                      t = (ATerm) ATinsert(ATempty, x_34);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm p_35 = NULL;
                                  static ATerm h_3 (ATerm t)
                                  {
                                    ATerm c_23 = t;
                                    int g_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm m_23 = t;
                                        int n_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm i_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(r_28));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(i_3, t);
                                            LocalPopChoice(n_23);
                                          }
                                        else
                                          {
                                            t = m_23;
                                            t = flat_list_0_0(t);
                                          }
                                        LocalPopChoice(g_23);
                                      }
                                    else
                                      {
                                        t = c_23;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, v_66, f_66), w_30);
                                  t = get_pp_entry_0_0(t);
                                  if(((n_28 != NULL) && (n_28 != t)))
                                    _fail(t);
                                  else
                                    n_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, o_29, e_30, w_30, term_v_14);
                                  t = symbol2abox_0_0(t);
                                  if(((r_28 != NULL) && (r_28 != t)))
                                    _fail(t);
                                  else
                                    r_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, b_31, n_28);
                                  t = index_0_0(t);
                                  p_35 = t;
                                  t = (ATerm) ATinsert(ATempty, p_35);
                                  t = bottomup_1_0(h_3, t);
                                }
                            }
                          else
                            {
                              ATerm g_36 = NULL;
                              static ATerm j_3 (ATerm t)
                              {
                                ATerm o_23 = t;
                                int p_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_23 = t;
                                    int t_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        static ATerm k_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(r_28));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(k_3, t);
                                        LocalPopChoice(t_23);
                                      }
                                    else
                                      {
                                        t = r_23;
                                        t = flat_list_0_0(t);
                                      }
                                    LocalPopChoice(p_23);
                                  }
                                else
                                  {
                                    t = o_23;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, v_66, f_66), w_30);
                              t = get_pp_entry_0_0(t);
                              if(((n_28 != NULL) && (n_28 != t)))
                                _fail(t);
                              else
                                n_28 = t;
                              t = (ATerm) ATmakeAppl(sym__4, o_29, e_30, w_30, term_v_14);
                              t = symbol2abox_0_0(t);
                              if(((r_28 != NULL) && (r_28 != t)))
                                _fail(t);
                              else
                                r_28 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_31, n_28);
                              t = index_0_0(t);
                              g_36 = t;
                              t = (ATerm) ATinsert(ATempty, g_36);
                              t = bottomup_1_0(j_3, t);
                            }
                        }
                      else
                        {
                          ATerm f_37 = NULL;
                          static ATerm l_3 (ATerm t)
                          {
                            ATerm u_23 = t;
                            int v_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_23 = t;
                                int x_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    static ATerm m_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(r_28));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(m_3, t);
                                    LocalPopChoice(x_23);
                                  }
                                else
                                  {
                                    t = w_23;
                                    t = flat_list_0_0(t);
                                  }
                                LocalPopChoice(v_23);
                              }
                            else
                              {
                                t = u_23;
                              }
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, v_66, f_66), w_30);
                          t = get_pp_entry_0_0(t);
                          if(((n_28 != NULL) && (n_28 != t)))
                            _fail(t);
                          else
                            n_28 = t;
                          t = (ATerm) ATmakeAppl(sym__4, o_29, e_30, w_30, term_v_14);
                          t = symbol2abox_0_0(t);
                          if(((r_28 != NULL) && (r_28 != t)))
                            _fail(t);
                          else
                            r_28 = t;
                          t = (ATerm) ATmakeAppl(sym__2, b_31, n_28);
                          t = index_0_0(t);
                          f_37 = t;
                          t = (ATerm) ATinsert(ATempty, f_37);
                          t = bottomup_1_0(l_3, t);
                        }
                    }
                  else
                    {
                      t = q_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          x_28 = ATgetArgument(t, 0);
                          a_29 = ATgetArgument(t, 1);
                          m_29 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = o_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          v_28 = ATgetArgument(t, 0);
                          w_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_28;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          y_28 = ATgetFirst((ATermList) t);
                          z_28 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = z_28;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = a_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          j_29 = ATgetArgument(t, 0);
                          l_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm y_23 = t;
                        int z_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = y_28;
                            if((v_28 != t))
                              {
                                _fail(t);
                              }
                            t = j_29;
                            if((v_28 != t))
                              {
                                _fail(t);
                              }
                            t = l_29;
                            if((w_28 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, v_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, v_28), v_28, m_29), v_29), w_30, b_31);
                            t = t_39(t);
                            LocalPopChoice(z_23);
                          }
                        else
                          {
                            t = y_23;
                            {
                              ATerm h_38 = NULL,i_38 = NULL;
                              t = j_29;
                              if((v_28 != t))
                                {
                                  _fail(t);
                                }
                              t = l_29;
                              if((w_28 != t))
                                {
                                  _fail(t);
                                }
                              t = term_v_14;
                              i_38 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_31, term_v_14);
                              t = l_12(b_31, i_38, t);
                              h_38 = t;
                              t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, y_28), w_28, m_29), v_29), w_30, h_38);
                              t = t_39(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = q_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      x_28 = ATgetArgument(t, 0);
                      a_29 = ATgetArgument(t, 1);
                      m_29 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = o_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      v_28 = ATgetArgument(t, 0);
                      w_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_28;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_28 = ATgetFirst((ATermList) t);
                      z_28 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = z_28;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      j_29 = ATgetArgument(t, 0);
                      l_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_24 = t;
                    int b_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_28;
                        if((v_28 != t))
                          {
                            _fail(t);
                          }
                        t = j_29;
                        if((v_28 != t))
                          {
                            _fail(t);
                          }
                        t = l_29;
                        if((w_28 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, v_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, v_28), v_28, m_29), v_29), w_30, b_31);
                        t = t_39(t);
                        LocalPopChoice(b_24);
                      }
                    else
                      {
                        t = a_24;
                        {
                          ATerm n_39 = NULL,s_39 = NULL;
                          t = j_29;
                          if((v_28 != t))
                            {
                              _fail(t);
                            }
                          t = l_29;
                          if((w_28 != t))
                            {
                              _fail(t);
                            }
                          t = term_v_14;
                          s_39 = t;
                          t = (ATerm) ATmakeAppl(sym__2, b_31, term_v_14);
                          t = l_12(b_31, s_39, t);
                          n_39 = t;
                          t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, y_28), w_28, m_29), v_29), w_30, n_39);
                          t = t_39(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, t_67, (ATerm) ATinsert(ATempty, w_67));
            t = conc_0_0(t);
            u_28 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, v_66, f_66), g_67, u_28, term_v_14);
            t = t_39(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              v_66 = ATgetArgument(t, 0);
              f_66 = ATgetArgument(t, 1);
              {
                ATerm i_70 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, v_66, f_66);
                i_70 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, v_66, f_66), g_67, t_67, w_67);
                t = x_10(i_70, g_67, t_67, w_67, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  v_66 = ATgetArgument(t, 0);
                  f_66 = ATgetArgument(t, 1);
                  {
                    ATerm p_71 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, v_66, f_66);
                    p_71 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, v_66, f_66), g_67, t_67, w_67);
                    t = x_10(p_71, g_67, t_67, w_67, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      v_66 = ATgetArgument(t, 0);
                      {
                        ATerm d_72 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, v_66);
                        d_72 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, v_66), g_67, t_67, w_67);
                        t = r_10(d_72, g_67, t_67, w_67, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          v_66 = ATgetArgument(t, 0);
                          {
                            ATerm p_72 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, v_66);
                            p_72 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, v_66), g_67, t_67, w_67);
                            t = r_10(p_72, g_67, t_67, w_67, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              v_66 = ATgetArgument(t, 0);
                              t = g_67;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm c_24 = ATgetArgument(t, 0);
                                  o_66 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = o_66;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  g_66 = ATgetFirst((ATermList) t);
                                  m_66 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm a_41 = NULL,c_41 = NULL,h_41 = NULL,i_41 = NULL,k_41 = NULL,q_41 = NULL;
                                    static ATerm n_3 (ATerm t)
                                    {
                                      ATerm d_24 = t;
                                      int i_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_24 = t;
                                          int k_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm p_3 (ATerm t)
                                              {
                                                t = not_null(i_41);
                                                return(t);
                                              }
                                              t = Instantiate_1_0(p_3, t);
                                              LocalPopChoice(k_24);
                                            }
                                          else
                                            {
                                              t = j_24;
                                              t = flat_list_0_0(t);
                                            }
                                          LocalPopChoice(i_24);
                                        }
                                      else
                                        {
                                          t = d_24;
                                        }
                                      return(t);
                                    }
                                    t = m_66;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, t_67, (ATerm) ATinsert(ATempty, w_67));
                                    t = conc_0_0(t);
                                    q_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, v_66), q_41);
                                    t = get_pp_entry_0_0(t);
                                    a_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, v_66, g_66, q_41, term_v_14);
                                    t = symbol2abox_0_0(t);
                                    c_41 = t;
                                    t = (ATerm) ATinsert(ATempty, c_41);
                                    k_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, a_41, (ATerm) ATinsert(ATempty, c_41));
                                    t = p_10(a_41, k_41, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        h_41 = ATgetArgument(t, 0);
                                        if(((i_41 != NULL) && (i_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          i_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = h_41;
                                    t = bottomup_1_0(n_3, t);
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
                              ATerm m_24 = t;
                              int n_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm q_24 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(n_24);
                                  {
                                    ATerm s_24 = t;
                                    int t_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = g_67;
                                        {
                                          ATerm u_24 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm v_42 = NULL;
                                              v_42 = t;
                                              t = SSL_is_string(v_42);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = u_24;
                                            }
                                        }
                                        t = g_67;
                                        {
                                          ATerm w_24 = t;
                                          int x_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,h_43 = NULL,i_43 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  a_43 = ATgetArgument(t, 0);
                                                  i_43 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = a_43;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  b_43 = ATgetArgument(t, 0);
                                                  c_43 = ATgetArgument(t, 1);
                                                  h_43 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = g_67;
                                              t = n_11(b_43, c_43, h_43, i_43, t);
                                              LocalPopChoice(x_24);
                                            }
                                          else
                                            {
                                              t = w_24;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(t_24);
                                      }
                                    else
                                      {
                                        t = s_24;
                                        t = SSL_is_string(g_67);
                                        t = (ATerm) ATmakeAppl(sym_S_1, g_67);
                                      }
                                  }
                                }
                              else
                                {
                                  t = m_24;
                                  {
                                    ATerm y_24 = t;
                                    int z_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm b_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(z_24);
                                        {
                                          ATerm i_44 = NULL,k_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, g_67);
                                          k_44 = t;
                                          t = SSL_implode_string(k_44);
                                          i_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, i_44);
                                        }
                                      }
                                    else
                                      {
                                        t = y_24;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            v_66 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, v_66);
                                      }
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
  ATerm k_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,s_74 = NULL,t_74 = NULL,w_74 = NULL,x_74 = NULL;
  if(match_cons(t, sym__4))
    {
      k_74 = ATgetArgument(t, 0);
      q_74 = ATgetArgument(t, 1);
      w_74 = ATgetArgument(t, 2);
      x_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_74;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_74 = ATgetFirst((ATermList) t);
          p_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_74;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_74 = ATgetFirst((ATermList) t);
          t_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_74;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm k_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(g_25);
            t = o_74;
            {
              ATerm q_25 = t;
              int r_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm s_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_25);
                  {
                    ATerm t_25 = t;
                    int v_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, p_74, t_74, w_74, x_74);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(v_25);
                      }
                    else
                      {
                        t = t_25;
                        {
                          ATerm o_76 = NULL,p_76 = NULL,r_76 = NULL,v_76 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, o_74, s_74, w_74, x_74);
                          t = symbol2abox_0_0(t);
                          o_76 = t;
                          t = term_v_14;
                          v_76 = t;
                          t = (ATerm) ATmakeAppl(sym__2, x_74, term_v_14);
                          t = l_12(x_74, v_76, t);
                          r_76 = t;
                          t = (ATerm) ATmakeAppl(sym__4, p_74, t_74, w_74, r_76);
                          t = seq2abox_0_0(t);
                          p_76 = t;
                          t = (ATerm) ATinsert(CheckATermList(p_76), o_76);
                        }
                      }
                  }
                }
              else
                {
                  t = q_25;
                  {
                    ATerm f_77 = NULL,g_77 = NULL,i_77 = NULL,p_77 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, o_74, s_74, w_74, x_74);
                    t = symbol2abox_0_0(t);
                    f_77 = t;
                    t = term_v_14;
                    p_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_74, term_v_14);
                    t = l_12(x_74, p_77, t);
                    i_77 = t;
                    t = (ATerm) ATmakeAppl(sym__4, p_74, t_74, w_74, i_77);
                    t = seq2abox_0_0(t);
                    g_77 = t;
                    t = (ATerm) ATinsert(CheckATermList(g_77), f_77);
                  }
                }
            }
          }
        else
          {
            t = f_25;
            {
              ATerm b_78 = NULL,c_78 = NULL,e_78 = NULL,f_78 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, o_74, s_74, w_74, x_74);
              t = symbol2abox_0_0(t);
              b_78 = t;
              t = term_v_14;
              f_78 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_74, term_v_14);
              t = l_12(x_74, f_78, t);
              e_78 = t;
              t = (ATerm) ATmakeAppl(sym__4, p_74, t_74, w_74, e_78);
              t = seq2abox_0_0(t);
              c_78 = t;
              t = (ATerm) ATinsert(CheckATermList(c_78), b_78);
            }
          }
      }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,t_78 = NULL;
  n_78 = t;
  t = term_y_25;
  t_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, n_78);
  t = n_12(t_78, n_78, t);
  if(match_cons(t, sym__2))
    {
      p_78 = ATgetArgument(t, 0);
      o_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_78;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(q_3, t);
  t = (ATerm) ATmakeAppl(sym__2, p_78, o_78);
  return(t);
}
static ATerm b_11 (ATerm w_64, ATerm v_64, ATerm t)
{
  ATerm z_78 = NULL,c_79 = NULL,e_79 = NULL;
  z_78 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      c_79 = ATgetArgument(t, 0);
      e_79 = ATgetArgument(t, 1);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_79 = NULL,j_79 = NULL;
            t = w_64;
            t = mk_key_0_0(t);
            i_79 = t;
            t = term_y_25;
            j_79 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_y_25, i_79);
            t = n_12(j_79, i_79, t);
            t = z_78;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = z_78;
            t = o_11(c_79, e_79, t);
          }
      }
    }
  else
    {
      ATerm t_79 = NULL,x_79 = NULL;
      t = w_64;
      t = mk_key_0_0(t);
      t_79 = t;
      t = term_y_25;
      x_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_25, t_79);
      t = n_12(x_79, t_79, t);
      t = z_78;
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL;
  t = number_nonterminals_0_0(t);
  h_80 = t;
  t = make_0_0(t);
  e_80 = t;
  t = h_80;
  {
    static ATerm v_3 (ATerm t)
    {
      static ATerm x_3 (ATerm t)
      {
        ATerm m_80 = NULL;
        t = term_q_14;
        t = d_126(t);
        m_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_80, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(x_3, t);
      return(t);
    }
    t = map_1_0(v_3, t);
  }
  t = concat_0_0(t);
  f_80 = t;
  t = term_q_14;
  t = d_126(t);
  g_80 = t;
  t = (ATerm) ATinsert(CheckATermList(f_80), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, g_80), e_80));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm r_80 = NULL;
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,h_81 = NULL;
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              d_81 = ATgetArgument(t, 0);
              {
                ATerm h_26 = ATgetArgument(t, 1);
              }
              f_81 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(g_26);
          {
            static ATerm z_3 (ATerm t)
            {
              t = not_null(r_80);
              return(t);
            }
            t = f_81;
            {
              static ATerm y_3 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((r_80 != NULL) && (r_80 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(y_3, t);
            }
            t = d_81;
            t = symbols2pp_entries_1_0(z_3, t);
          }
        }
      else
        {
          t = f_26;
          {
            ATerm p_81 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                d_81 = ATgetArgument(t, 0);
                e_81 = ATgetArgument(t, 1);
                f_81 = ATgetArgument(t, 2);
                h_81 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_26)), e_81), (ATerm) ATinsert(ATinsert(ATempty, term_j_26), (ATerm) ATmakeAppl(sym_lit_1, d_81)));
            t = concat_0_0(t);
            p_81 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, p_81, f_81, h_81);
            t = generate_pp_entries_0_0(t);
          }
        }
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm n_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_26 = t;
            if((PushChoice() == 0))
              {
                ATerm u_81 = NULL;
                u_81 = t;
                t = term_r_26;
                t = get_options_0_0(t);
                t = oncetd_1_0(a_4, t);
                t = u_81;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_26;
              }
            t = debug_1_0(b_4, t);
            LocalPopChoice(p_26);
          }
        else
          {
            t = n_26;
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_11 (ATerm o_43, ATerm p_43, ATerm t)
{
  t = SSL_mkterm(o_43, p_43);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL,r_92 = NULL,s_92 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      r_92 = ATgetArgument(t, 0);
      s_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_92;
  if(match_cons(t, sym_alt_2))
    {
      o_92 = ATgetArgument(t, 0);
      p_92 = ATgetArgument(t, 1);
      {
        ATerm s_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_92 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, o_92, p_92);
            t = flat_alt_0_0(t);
            w_92 = t;
            t = (ATerm) ATinsert(CheckATermList(w_92), r_92);
            LocalPopChoice(w_26);
          }
        else
          {
            t = s_26;
            t = (ATerm) ATinsert(ATinsert(ATempty, s_92), r_92);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, s_92), r_92);
    }
  return(t);
}
ATerm _2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,t_11 = NULL;
  d_82 = t;
  if(match_cons(t, sym__2))
    {
      z_81 = ATgetArgument(t, 0);
      a_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_82);
  y_81 = t;
  t = z_81;
  t = w_73(t);
  b_82 = t;
  t = a_82;
  t = x_73(t);
  c_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_82, c_82);
  t_11 = t;
  t = SSLsetAnnotations(t_11, y_81);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm g_82 = NULL,k_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  g_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_82;
    }
  else
    {
      ATerm v_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_82 = ATgetFirst((ATermList) t);
          n_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_82 = ATgetFirst((ATermList) t);
          p_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_82;
      t = pair_0_0(t);
      v_82 = t;
      t = (ATerm) ATinsert(CheckATermList(v_82), (ATerm) ATmakeAppl(sym__2, k_82, o_82));
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL,m_87 = NULL,v_12 = NULL;
  i_87 = t;
  if(match_cons(t, sym_lit_1))
    {
      h_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_87);
  g_87 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, h_87);
  v_12 = t;
  t = SSLsetAnnotations(v_12, g_87);
  if(match_cons(t, sym_lit_1))
    {
      m_87 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, m_87));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          m_87 = ATgetArgument(t, 0);
          {
            ATerm a_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, m_87);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,g_13 = NULL,w_89 = NULL,e_89 = NULL,z_12 = NULL;
  c_89 = t;
  if(match_cons(t, sym__2))
    {
      y_88 = ATgetArgument(t, 0);
      z_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_89);
  x_88 = t;
  t = y_88;
  if(match_cons(t, sym_lit_1))
    {
      b_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_88);
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, b_89);
  z_12 = t;
  t = SSLsetAnnotations(z_12, a_89);
  if(match_cons(t, sym_lit_1))
    {
      e_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, e_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          e_89 = ATgetArgument(t, 0);
          {
            ATerm c_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, e_89);
    }
  v_88 = t;
  t = z_88;
  t = _2_0(_id, r_4, t);
  if(match_cons(t, sym_lit_1))
    {
      w_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, w_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_89 = ATgetArgument(t, 0);
          {
            ATerm d_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_89);
    }
  w_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_88, w_88);
  g_13 = t;
  t = SSLsetAnnotations(g_13, x_88);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_i_27), (ATerm) ATinsert(ATinsert(ATempty, w_88), v_88));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm t_89 = NULL,u_89 = NULL;
  t_89 = t;
  if(match_cons(t, sym_iter_1))
    {
      u_89 = ATgetArgument(t, 0);
      {
        ATerm r_46 = NULL,b_13 = NULL;
        t = SSLgetAnnotations(t_89);
        r_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, u_89);
        b_13 = t;
        t = SSLsetAnnotations(b_13, r_46);
      }
    }
  else
    {
      ATerm e_47 = NULL,c_13 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          u_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_89);
      e_47 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, u_89);
      c_13 = t;
      t = SSLsetAnnotations(c_13, e_47);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm b_90 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      b_90 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, b_90));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          b_90 = ATgetArgument(t, 0);
          {
            ATerm k_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, b_90);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm e_84 = NULL,g_84 = NULL,n_84 = NULL,o_84 = NULL,s_84 = NULL;
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,h_85 = NULL,w_12 = NULL,w_86 = NULL,r_12 = NULL,q_86 = NULL,t_86 = NULL;
      t = reverse_acc_2_0(_id, d_4, t);
      h_85 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_84 = ATgetFirst((ATermList) t);
          x_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_85);
      v_84 = t;
      t = w_84;
      if(match_cons(t, sym__2))
        {
          b_85 = ATgetArgument(t, 0);
          c_85 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_84);
      a_85 = t;
      t = c_85;
      if(match_cons(t, sym_iter_1))
        {
          q_86 = ATgetArgument(t, 0);
          {
            ATerm o_44 = NULL,x_11 = NULL;
            t = SSLgetAnnotations(c_85);
            o_44 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, q_86);
            x_11 = t;
            t = SSLsetAnnotations(x_11, o_44);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              q_86 = ATgetArgument(t, 0);
              {
                ATerm w_44 = NULL,y_11 = NULL;
                t = SSLgetAnnotations(c_85);
                w_44 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, q_86);
                y_11 = t;
                t = SSLsetAnnotations(y_11, w_44);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  q_86 = ATgetArgument(t, 0);
                  t_86 = ATgetArgument(t, 1);
                  {
                    ATerm g_45 = NULL,c_12 = NULL;
                    t = SSLgetAnnotations(c_85);
                    g_45 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_86, t_86);
                    c_12 = t;
                    t = SSLsetAnnotations(c_12, g_45);
                  }
                }
              else
                {
                  ATerm b_46 = NULL,m_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      q_86 = ATgetArgument(t, 0);
                      t_86 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_85);
                  b_46 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, q_86, t_86);
                  m_12 = t;
                  t = SSLsetAnnotations(m_12, b_46);
                }
            }
        }
      d_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_85, d_85);
      r_12 = t;
      t = SSLsetAnnotations(r_12, a_85);
      if(match_cons(t, sym_lit_1))
        {
          w_86 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, w_86));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              w_86 = ATgetArgument(t, 0);
              {
                ATerm r_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, w_86);
        }
      y_84 = t;
      t = x_84;
      t = map_1_0(e_4, t);
      z_84 = t;
      t = (ATerm) ATinsert(CheckATermList(z_84), y_84);
      w_12 = t;
      t = SSLsetAnnotations(w_12, v_84);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_84 = ATgetFirst((ATermList) t);
          e_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_27 = t;
        if((PushChoice() == 0))
          {
            ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,f_88 = NULL,x_12 = NULL;
            f_88 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_87 = ATgetFirst((ATermList) t);
                z_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_88);
            x_87 = t;
            t = z_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_87), y_87);
            x_12 = t;
            t = SSLsetAnnotations(x_12, x_87);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_27;
          }
      }
      t = e_84;
      t = reverse_acc_2_0(_id, i_4, t);
      u_84 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_84), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, u_84)));
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,y_12 = NULL,q_88 = NULL;
            t = reverse_acc_2_0(_id, l_4, t);
            k_88 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_88 = ATgetFirst((ATermList) t);
                j_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_88);
            h_88 = t;
            t = i_88;
            if(match_cons(t, sym_lit_1))
              {
                q_88 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, q_88));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    q_88 = ATgetArgument(t, 0);
                    {
                      ATerm a_28 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, q_88);
              }
            s_84 = t;
            t = j_88;
            {
              ATerm b_28 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = b_28;
                }
            }
            t = reverse_acc_2_0(_id, o_4, t);
            n_84 = t;
            t = (ATerm) ATinsert(CheckATermList(n_84), s_84);
            y_12 = t;
            t = SSLsetAnnotations(y_12, h_88);
            t = n_84;
            t = pair_0_0(t);
            t = map_1_0(q_4, t);
            o_84 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_84), o_84));
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            t = map_1_0(x_4, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm c_28 = t;
  if((PushChoice() == 0))
    {
      ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL,a_14 = NULL;
      n_90 = t;
      if(match_cons(t, sym_lit_1))
        {
          m_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_90);
      l_90 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, m_90);
      a_14 = t;
      t = SSLsetAnnotations(a_14, l_90);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_28;
    }
  return(t);
}
static ATerm s_91 (ATerm s_90, ATerm t_90, ATerm u_90, ATerm t)
{
  ATerm y_90 = NULL,c_14 = NULL;
  t = SSLgetAnnotations(s_90);
  y_90 = t;
  t = u_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_90, u_90);
  c_14 = t;
  t = SSLsetAnnotations(c_14, y_90);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm r_90 = NULL;
  static ATerm r_91 (ATerm t)
  {
    ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL;
    c_91 = t;
    if(match_cons(t, sym__2))
      {
        d_91 = ATgetArgument(t, 0);
        e_91 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_91;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_91 = ATgetFirst((ATermList) t);
        g_91 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_91(c_91, d_91, e_91, t);
              LocalPopChoice(f_28);
            }
          else
            {
              t = d_28;
              {
                ATerm i_28 = t;
                int j_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL;
                    t = f_91;
                    t = h_126(t);
                    t = term_v_14;
                    m_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_91, term_v_14);
                    t = l_12(d_91, m_91, t);
                    l_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_91, g_91);
                    t = r_91(t);
                    k_91 = t;
                    t = (ATerm) ATinsert(CheckATermList(k_91), (ATerm) ATmakeAppl(sym__2, d_91, f_91));
                    LocalPopChoice(j_28);
                  }
                else
                  {
                    t = i_28;
                    {
                      ATerm q_91 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, d_91, g_91);
                      t = r_91(t);
                      q_91 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_91), f_91);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = s_91(c_91, d_91, e_91, t);
      }
    return(t);
  }
  r_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, r_90);
  t = r_91(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL;
  x_91 = t;
  {
    ATerm p_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            w_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(b_29);
        t = w_91;
      }
    else
      {
        t = p_28;
        t = x_91;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(b_5, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm j_92 = NULL;
  j_92 = t;
  {
    ATerm f_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_92;
        {
          ATerm s_29 = t;
          if((PushChoice() == 0))
            {
              ATerm v_47 = NULL;
              v_47 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = v_47;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_29 = ATgetFirst((ATermList) t);
                      ATerm u_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = v_47;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_29;
            }
        }
        t = (ATerm) ATinsert(ATempty, j_92);
        LocalPopChoice(n_29);
      }
    else
      {
        t = f_29;
        t = j_92;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(f_5, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  t_49 = t;
  if(match_cons(t, sym_Arg_1))
    {
      s_49 = ATgetArgument(t, 0);
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_50 = NULL,e_14 = NULL;
            t = SSLgetAnnotations(t_49);
            f_50 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, s_49);
            e_14 = t;
            t = SSLsetAnnotations(e_14, f_50);
            t = term_z_29;
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            t = t_49;
          }
      }
    }
  else
    {
      t = t_49;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL;
  static ATerm o_96 (ATerm t)
  {
    static ATerm q_96 (ATerm f_95, ATerm g_95, ATerm h_95, ATerm i_95, ATerm t)
    {
      ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
      t = SSL_explode_term(i_95);
      if(match_cons(t, sym__2))
        {
          s_95 = ATgetArgument(t, 0);
          t_95 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, g_95, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, h_95, s_95)));
      t = conc_0_0(t);
      o_95 = t;
      t = t_95;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      u_95 = t;
      t = make_0_0(t);
      p_95 = t;
      t = u_95;
      {
        static ATerm h_5 (ATerm t)
        {
          ATerm w_95 = NULL;
          w_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_95, o_95), w_95);
          t = o_96(t);
          return(t);
        }
        t = map_1_0(h_5, t);
      }
      t = concat_0_0(t);
      q_95 = t;
      t = (ATerm) ATinsert(CheckATermList(q_95), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, f_95, o_95), p_95));
      return(t);
    }
    ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
    if(match_cons(t, sym__2))
      {
        c_96 = ATgetArgument(t, 0);
        f_96 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = f_96;
    {
      ATerm d_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm g_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(f_30);
          t = (ATerm) ATempty;
        }
      else
        {
          t = d_30;
          if(match_cons(t, sym__2))
            {
              g_96 = ATgetArgument(t, 0);
              h_96 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_96;
          {
            ATerm m_30 = t;
            int p_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_sort_1))
                  {
                    ATerm s_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(p_30);
                t = c_96;
                {
                  ATerm u_30 = t;
                  int v_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm z_30 = ATgetArgument(t, 0);
                          ATerm c_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(v_30);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      t = u_30;
                      t = (ATerm) ATempty;
                    }
                }
              }
            else
              {
                t = m_30;
                {
                  ATerm d_31 = t;
                  int e_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_char_class_1))
                        {
                          ATerm f_31 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(e_31);
                      t = c_96;
                      {
                        ATerm g_31 = t;
                        int h_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym__2))
                              {
                                ATerm i_31 = ATgetArgument(t, 0);
                                ATerm j_31 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_31);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            t = g_31;
                            t = (ATerm) ATempty;
                          }
                      }
                    }
                  else
                    {
                      t = d_31;
                      if(match_cons(t, sym_alt_2))
                        {
                          a_96 = ATgetArgument(t, 0);
                          x_95 = ATgetArgument(t, 1);
                          t = c_96;
                          if(match_cons(t, sym__2))
                            {
                              d_96 = ATgetArgument(t, 0);
                              e_96 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = x_95;
                          if(match_cons(t, sym_alt_2))
                            {
                              y_95 = ATgetArgument(t, 0);
                              z_95 = ATgetArgument(t, 1);
                              {
                                ATerm n_31 = t;
                                int o_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,i_14 = NULL;
                                    t = d_96;
                                    if(((t_93 != NULL) && (t_93 != t)))
                                      _fail(t);
                                    else
                                      t_93 = t;
                                    t = e_96;
                                    if(((u_93 != NULL) && (u_93 != t)))
                                      _fail(t);
                                    else
                                      u_93 = t;
                                    t = g_96;
                                    if(((v_93 != NULL) && (v_93 != t)))
                                      _fail(t);
                                    else
                                      v_93 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, a_96, (ATerm) ATmakeAppl(sym_alt_2, y_95, z_95));
                                    t = flat_alt_0_0(t);
                                    f_49 = t;
                                    t = term_p_31;
                                    h_49 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_p_31, f_49);
                                    t = c_11(h_49, f_49, t);
                                    g_49 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_96, e_96), (ATerm) ATmakeAppl(sym__2, g_96, g_49));
                                    t = o_96(t);
                                    m_49 = t;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        j_49 = ATgetFirst((ATermList) t);
                                        k_49 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(m_49);
                                    i_49 = t;
                                    t = j_49;
                                    t = topdown_1_0(j_5, t);
                                    l_49 = t;
                                    t = (ATerm) ATinsert(CheckATermList(k_49), l_49);
                                    i_14 = t;
                                    t = SSLsetAnnotations(i_14, i_49);
                                    LocalPopChoice(o_31);
                                  }
                                else
                                  {
                                    t = n_31;
                                    t = q_96(d_96, e_96, g_96, h_96, t);
                                  }
                              }
                            }
                          else
                            {
                              t = q_96(d_96, e_96, g_96, h_96, t);
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_bracket_symbol_1))
                            {
                              a_96 = ATgetArgument(t, 0);
                              t = c_96;
                              if(match_cons(t, sym__2))
                                {
                                  d_96 = ATgetArgument(t, 0);
                                  e_96 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              {
                                ATerm q_31 = t;
                                int r_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_96, e_96), (ATerm) ATmakeAppl(sym__2, g_96, a_96));
                                    t = o_96(t);
                                    LocalPopChoice(r_31);
                                  }
                                else
                                  {
                                    t = q_31;
                                    t = q_96(d_96, e_96, g_96, h_96, t);
                                  }
                              }
                            }
                          else
                            {
                              t = c_96;
                              if(match_cons(t, sym__2))
                                {
                                  d_96 = ATgetArgument(t, 0);
                                  e_96 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = q_96(d_96, e_96, g_96, h_96, t);
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
  x_93 = t;
  t = term_q_14;
  t = e_126(t);
  w_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_93, x_93);
  t = o_96(t);
  return(t);
}
static ATerm v_98 (ATerm b_97, ATerm c_97, ATerm d_97, ATerm t)
{
  ATerm e_97 = NULL,g_97 = NULL;
  t = d_97;
  {
    ATerm s_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,l_50 = NULL;
        t = c_97;
        t = pp_table_get_0_0(t);
        l_50 = t;
        t = SSL_explode_term(l_50);
        if(match_cons(t, sym__2))
          {
            ATerm b_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_32 = ATgetArgument(t, 1);
              if(((ATgetType(e_32) == AT_LIST) && !(ATisEmpty(e_32))))
                {
                  ATerm f_32 = ATgetFirst((ATermList) e_32);
                  ATerm g_32 = (ATerm) ATgetNext((ATermList) e_32);
                  if(((ATgetType(g_32) == AT_LIST) && !(ATisEmpty(g_32))))
                    {
                      k_50 = ATgetFirst((ATermList) g_32);
                      {
                        ATerm j_32 = (ATerm) ATgetNext((ATermList) g_32);
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
        t = k_50;
        LocalPopChoice(x_31);
      }
    else
      {
        t = s_31;
        {
          ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,p_97 = NULL,m_50 = NULL,n_50 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,w_97 = NULL,m_14 = NULL;
          t = c_97;
          t = reverse_acc_2_0(_id, l_5, t);
          p_97 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_97 = ATgetFirst((ATermList) t);
              m_97 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_97);
          k_97 = t;
          t = m_97;
          t = reverse_acc_2_0(_id, p_5, t);
          e_97 = t;
          t = (ATerm) ATinsert(CheckATermList(e_97), l_97);
          m_14 = t;
          t = SSLsetAnnotations(m_14, k_97);
          t = e_97;
          t = pp_table_get_0_0(t);
          j_97 = t;
          t = SSL_explode_term(j_97);
          if(match_cons(t, sym__2))
            {
              ATerm k_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm l_32 = ATgetArgument(t, 1);
                if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
                  {
                    i_97 = ATgetFirst((ATermList) l_32);
                    {
                      ATerm m_32 = (ATerm) ATgetNext((ATermList) l_32);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = i_97;
          if(match_cons(t, sym_Path_2))
            {
              w_97 = ATgetArgument(t, 0);
              s_97 = ATgetArgument(t, 1);
              t = s_97;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_97 = ATgetFirst((ATermList) t);
                  u_97 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_97;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, w_97, (ATerm) ATinsert(ATempty, t_97));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  w_97 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, w_97, (ATerm) ATempty);
            }
          g_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_97, b_97);
          {
            static ATerm s_5 (ATerm t)
            {
              t = g_97;
              return(t);
            }
            t = symbol2abox_1_0(s_5, t);
          }
          t = map_1_0(v_5, t);
          t = c_97;
          t = pp_table_get_0_0(t);
          n_50 = t;
          t = SSL_explode_term(n_50);
          if(match_cons(t, sym__2))
            {
              ATerm n_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm q_32 = ATgetArgument(t, 1);
                if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
                  {
                    ATerm r_32 = ATgetFirst((ATermList) q_32);
                    ATerm t_32 = (ATerm) ATgetNext((ATermList) q_32);
                    if(((ATgetType(t_32) == AT_LIST) && !(ATisEmpty(t_32))))
                      {
                        m_50 = ATgetFirst((ATermList) t_32);
                        {
                          ATerm v_32 = (ATerm) ATgetNext((ATermList) t_32);
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
          t = m_50;
        }
      }
  }
  return(t);
}
static ATerm w_98 (ATerm e_98, ATerm f_98, ATerm g_98, ATerm h_98, ATerm i_98, ATerm t)
{
  t = i_98;
  {
    ATerm w_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL,p_50 = NULL;
        t = h_98;
        t = pp_table_get_0_0(t);
        p_50 = t;
        t = SSL_explode_term(p_50);
        if(match_cons(t, sym__2))
          {
            ATerm a_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_33 = ATgetArgument(t, 1);
              if(((ATgetType(e_33) == AT_LIST) && !(ATisEmpty(e_33))))
                {
                  ATerm f_33 = ATgetFirst((ATermList) e_33);
                  ATerm g_33 = (ATerm) ATgetNext((ATermList) e_33);
                  if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
                    {
                      o_50 = ATgetFirst((ATermList) g_33);
                      {
                        ATerm h_33 = (ATerm) ATgetNext((ATermList) g_33);
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
        t = o_50;
        LocalPopChoice(y_32);
      }
    else
      {
        t = w_32;
        {
          ATerm q_50 = NULL,r_50 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, e_98, f_98, g_98);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(w_5, t);
          t = h_98;
          t = pp_table_get_0_0(t);
          r_50 = t;
          t = SSL_explode_term(r_50);
          if(match_cons(t, sym__2))
            {
              ATerm i_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm j_33 = ATgetArgument(t, 1);
                if(((ATgetType(j_33) == AT_LIST) && !(ATisEmpty(j_33))))
                  {
                    ATerm m_33 = ATgetFirst((ATermList) j_33);
                    ATerm n_33 = (ATerm) ATgetNext((ATermList) j_33);
                    if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
                      {
                        q_50 = ATgetFirst((ATermList) n_33);
                        {
                          ATerm p_33 = (ATerm) ATgetNext((ATermList) n_33);
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
          t = q_50;
        }
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      c_98 = ATgetArgument(t, 0);
      d_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(c_98, d_98, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      n_98 = ATgetArgument(t, 0);
      o_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(n_98, o_98, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
  p_98 = t;
  if(match_cons(t, sym__2))
    {
      q_98 = ATgetArgument(t, 0);
      u_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_98;
  if(match_cons(t, sym_prod_3))
    {
      r_98 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
      t_98 = ATgetArgument(t, 2);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_98(q_98, u_98, p_98, t);
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = w_98(r_98, s_98, t_98, u_98, p_98, t);
          }
      }
    }
  else
    {
      t = v_98(q_98, u_98, p_98, t);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_33) != AT_INT) || (ATgetInt((ATermInt) t_33) != 34)))
        _fail(t);
      {
        ATerm u_33 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(u_33) != AT_LIST) || !(ATisEmpty(u_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
  z_98 = t;
  t = SSL_explode_string(z_98);
  x_98 = t;
  {
    ATerm v_33 = t;
    if((PushChoice() == 0))
      {
        ATerm a_99 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_99 = ATgetFirst((ATermList) t);
            {
              ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = a_99;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_33;
      }
  }
  t = x_98;
  {
    ATerm x_33 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(x_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_33;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_33)), x_98), (ATerm) ATinsert(ATempty, term_y_33));
  t = concat_0_0(t);
  y_98 = t;
  t = SSL_implode_string(y_98);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm c_99 = NULL,g_99 = NULL;
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm b_34 = ATgetArgument(t, 0);
          ATerm e_34 = ATgetArgument(t, 1);
          ATerm i_34 = ATgetArgument(t, 2);
          c_99 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(a_34);
      {
        ATerm i_99 = NULL;
        t = c_99;
        {
          static ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((i_99 != NULL) && (i_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(y_5, t);
        }
        t = not_null(i_99);
      }
    }
  else
    {
      t = z_33;
      {
        ATerm k_99 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm j_34 = ATgetArgument(t, 0);
            ATerm k_34 = ATgetArgument(t, 1);
            g_99 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = g_99;
        {
          static ATerm z_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((k_99 != NULL) && (k_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(z_5, t);
        }
        t = not_null(k_99);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL,r_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL;
  if(match_cons(t, sym__2))
    {
      t_99 = ATgetArgument(t, 0);
      x_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_99;
  if(match_cons(t, sym_prod_fun_4))
    {
      u_99 = ATgetArgument(t, 0);
      v_99 = ATgetArgument(t, 1);
      w_99 = ATgetArgument(t, 2);
      q_99 = ATgetArgument(t, 3);
      t = q_99;
      if(match_cons(t, sym_attrs_1))
        {
          p_99 = ATgetArgument(t, 0);
          {
            ATerm d_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, p_99, x_99);
            t = conc_0_0(t);
            d_100 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, u_99, v_99, w_99, (ATerm) ATmakeAppl(sym_attrs_1, d_100));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, u_99, v_99, w_99, (ATerm) ATmakeAppl(sym_attrs_1, x_99));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          u_99 = ATgetArgument(t, 0);
          v_99 = ATgetArgument(t, 1);
          w_99 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_99;
      if(match_cons(t, sym_attrs_1))
        {
          r_99 = ATgetArgument(t, 0);
          {
            ATerm m_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, r_99, x_99);
            t = conc_0_0(t);
            m_100 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, u_99, v_99, (ATerm) ATmakeAppl(sym_attrs_1, m_100));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, u_99, v_99, (ATerm) ATmakeAppl(sym_attrs_1, x_99));
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL,o_14 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL;
      c_101 = t;
      if(match_int(t, 34))
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_y_33), term_t_34);
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              t = (ATerm) ATinsert(ATempty, c_101);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm v_34 = t;
              int w_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_34), term_t_34);
                  LocalPopChoice(w_34);
                }
              else
                {
                  t = v_34;
                  t = (ATerm) ATinsert(ATempty, c_101);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_101 = ATgetFirst((ATermList) t);
                  e_101 = (ATerm) ATgetNext((ATermList) t);
                  t = d_101;
                  if(match_int(t, 34))
                    {
                      ATerm z_34 = t;
                      int a_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, c_101);
                          LocalPopChoice(a_35);
                        }
                      else
                        {
                          t = z_34;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(e_101), term_y_33), term_t_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 92))
                        {
                          ATerm b_35 = t;
                          int c_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, c_101);
                              LocalPopChoice(c_35);
                            }
                          else
                            {
                              t = b_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(e_101), term_t_34), term_t_34);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm d_35 = t;
                              int e_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, c_101);
                                  LocalPopChoice(e_35);
                                }
                              else
                                {
                                  t = d_35;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(e_101), term_f_35), term_t_34);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, c_101);
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, c_101);
                }
            }
        }
      b_101 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_100 = ATgetFirst((ATermList) t);
          z_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_101);
      x_100 = t;
      t = z_100;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      a_101 = t;
      t = (ATerm) ATinsert(CheckATermList(a_101), y_100);
      o_14 = t;
      t = SSLsetAnnotations(o_14, x_100);
      LocalPopChoice(q_34);
    }
  else
    {
      t = l_34;
      {
        ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL;
        a_102 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_101 = ATgetFirst((ATermList) t);
            z_101 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm n_51 = NULL,w_51 = NULL,p_14 = NULL;
              t = SSLgetAnnotations(a_102);
              n_51 = t;
              t = z_101;
              t = escape_chars_0_0(t);
              w_51 = t;
              t = (ATerm) ATinsert(CheckATermList(w_51), y_101);
              p_14 = t;
              t = SSLsetAnnotations(p_14, n_51);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_102;
          }
      }
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm o_52 = NULL,q_52 = NULL,y_52 = NULL;
  o_52 = t;
  if(match_int(t, 34))
    {
      ATerm g_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_y_33), term_t_34);
          LocalPopChoice(j_35);
        }
      else
        {
          t = g_35;
          t = (ATerm) ATinsert(ATempty, o_52);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm k_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_t_34), term_t_34);
              LocalPopChoice(o_35);
            }
          else
            {
              t = k_35;
              t = (ATerm) ATinsert(ATempty, o_52);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_52 = ATgetFirst((ATermList) t);
              y_52 = (ATerm) ATgetNext((ATermList) t);
              t = q_52;
              if(match_int(t, 34))
                {
                  ATerm q_35 = t;
                  int r_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, o_52);
                      LocalPopChoice(r_35);
                    }
                  else
                    {
                      t = q_35;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(y_52), term_y_33), term_t_34);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm s_35 = t;
                      int t_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, o_52);
                          LocalPopChoice(t_35);
                        }
                      else
                        {
                          t = s_35;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(y_52), term_t_34), term_t_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm u_35 = t;
                          int v_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, o_52);
                              LocalPopChoice(v_35);
                            }
                          else
                            {
                              t = u_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(y_52), term_f_35), term_t_34);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATinsert(ATempty, o_52);
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, o_52);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_103 = NULL,m_52 = NULL;
      e_103 = t;
      t = SSL_explode_string(e_103);
      t = map_1_0(a_6, t);
      t = concat_0_0(t);
      m_52 = t;
      t = SSL_implode_string(m_52);
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      {
        ATerm t_53 = NULL,u_53 = NULL;
        u_53 = t;
        t = SSL_explode_string(u_53);
        t = escape_chars_0_0(t);
        t_53 = t;
        t = SSL_implode_string(t_53);
      }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_35 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_35;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,i_54 = NULL,k_54 = NULL,m_54 = NULL,f_54 = NULL,g_54 = NULL,t_14 = NULL;
  t = filter_1_0(b_6, t);
  q_103 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_103 = ATgetFirst((ATermList) t);
      o_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_103);
  k_103 = t;
  t = SSL_explode_string(n_103);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_103 = ATgetFirst((ATermList) t);
      {
        ATerm a_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_103;
  {
    ATerm b_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_103, term_e_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_f_36, p_103);
        t = leq_0_0(t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATmakeAppl(sym__2, p_103, term_j_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_l_36, p_103);
        t = leq_0_0(t);
      }
  }
  t = (ATerm) ATinsert(CheckATermList(o_103), n_103);
  t_14 = t;
  t = SSLsetAnnotations(t_14, k_103);
  g_54 = t;
  t = term_m_36;
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, g_54);
  t = g_11(f_54, g_54, t);
  j_103 = t;
  t = SSL_concat_strings(j_103);
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_103, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_37), term_g_37), term_a_37), term_y_36), term_x_36), term_w_36), term_u_36), term_t_36), term_s_36), term_r_36), term_p_36), term_o_36), term_n_36));
  {
    ATerm j_37 = t;
    if((PushChoice() == 0))
      {
        ATerm r_103 = NULL,s_103 = NULL;
        if(match_cons(t, sym__2))
          {
            r_103 = ATgetArgument(t, 0);
            s_103 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_103;
        {
          static ATerm c_6 (ATerm t)
          {
            if((r_103 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(c_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, r_103, s_103);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_37;
      }
  }
  t = i_103;
  t = escape_0_0(t);
  k_54 = t;
  t = SSL_explode_string(k_54);
  m_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_33)), m_54), (ATerm) ATinsert(ATempty, term_y_33));
  t = concat_0_0(t);
  i_54 = t;
  t = SSL_implode_string(i_54);
  return(t);
}
static ATerm f_104 (ATerm v_103, ATerm t)
{
  ATerm y_103 = NULL;
  t = SSL_explode_term(v_103);
  if(match_cons(t, sym__2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_103;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL;
  c_104 = t;
  if(match_cons(t, sym__2))
    {
      a_104 = ATgetArgument(t, 0);
      b_104 = ATgetArgument(t, 1);
      {
        ATerm n_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_6 (ATerm t)
            {
              t = b_104;
              return(t);
            }
            t = a_104;
            t = at_end_1_0(d_6, t);
            LocalPopChoice(o_37);
          }
        else
          {
            t = n_37;
            t = f_104(c_104, t);
          }
      }
    }
  else
    {
      t = f_104(c_104, t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_37);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_37);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_37);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL;
  f_105 = t;
  if(match_cons(t, sym_cf_1))
    {
      d_105 = ATgetArgument(t, 0);
      t = d_105;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          d_105 = ATgetArgument(t, 0);
          t = d_105;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_s_37);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  d_105 = ATgetArgument(t, 0);
                  e_105 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(e_105), d_105);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      d_105 = ATgetArgument(t, 0);
                      t = d_105;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(e_6, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          d_105 = ATgetArgument(t, 0);
                          t = d_105;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(f_6, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              d_105 = ATgetArgument(t, 0);
                              t = d_105;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(g_6, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  d_105 = ATgetArgument(t, 0);
                                  e_105 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_105 = NULL,r_105 = NULL;
                                    t = d_105;
                                    t = Sym2Strs_0_0(t);
                                    q_105 = t;
                                    t = e_105;
                                    t = Sym2Strs_0_0(t);
                                    r_105 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_37)), r_105), q_105);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      d_105 = ATgetArgument(t, 0);
                                      e_105 = ATgetArgument(t, 1);
                                      {
                                        ATerm u_105 = NULL,v_105 = NULL;
                                        t = d_105;
                                        t = Sym2Strs_0_0(t);
                                        u_105 = t;
                                        t = e_105;
                                        t = Sym2Strs_0_0(t);
                                        v_105 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_37)), v_105), u_105);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm v_37 = t;
                                      int w_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              d_105 = ATgetArgument(t, 0);
                                              {
                                                ATerm x_37 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(w_37);
                                          {
                                            ATerm x_105 = NULL;
                                            t = d_105;
                                            t = Sym2Strs_0_0(t);
                                            x_105 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_37)), x_105);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = v_37;
                                          {
                                            ATerm z_37 = t;
                                            int b_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    d_105 = ATgetArgument(t, 0);
                                                    e_105 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_38 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(b_38);
                                                {
                                                  ATerm b_106 = NULL,c_106 = NULL;
                                                  t = d_105;
                                                  t = Sym2Strs_0_0(t);
                                                  b_106 = t;
                                                  t = e_105;
                                                  t = Sym2Strs_0_0(t);
                                                  c_106 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_37)), c_106), b_106);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = z_37;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    d_105 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_106 = NULL;
                                                      t = d_105;
                                                      t = Sym2Strs_0_0(t);
                                                      e_106 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, e_106), (ATerm) ATinsert(ATempty, term_k_38));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        d_105 = ATgetArgument(t, 0);
                                                        e_105 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_106 = NULL,i_106 = NULL;
                                                          t = d_105;
                                                          t = Sym2Strs_0_0(t);
                                                          h_106 = t;
                                                          t = e_105;
                                                          t = Sym2Strs_0_0(t);
                                                          i_106 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_106), (ATerm) ATinsert(ATempty, term_l_38)), h_106);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            d_105 = ATgetArgument(t, 0);
                                                            e_105 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_106 = NULL,m_106 = NULL;
                                                              t = d_105;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              l_106 = t;
                                                              t = e_105;
                                                              t = Sym2Strs_0_0(t);
                                                              m_106 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_106), (ATerm) ATinsert(ATempty, term_m_38)), l_106);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                d_105 = ATgetArgument(t, 0);
                                                                e_105 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm p_106 = NULL,q_106 = NULL;
                                                                  t = d_105;
                                                                  t = Sym2Strs_0_0(t);
                                                                  p_106 = t;
                                                                  t = e_105;
                                                                  t = Sym2Strs_0_0(t);
                                                                  q_106 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_106), (ATerm) ATinsert(ATempty, term_n_38)), p_106);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    d_105 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm s_106 = NULL;
                                                                      t = d_105;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      s_106 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(s_106), term_p_38);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        d_105 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, d_105);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            d_105 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm q_54 = NULL;
                                                                              t = d_105;
                                                                              {
                                                                                ATerm q_38 = t;
                                                                                int r_38 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(r_38);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_38;
                                                                                  }
                                                                              }
                                                                              q_54 = t;
                                                                              t = (ATerm) ATinsert(ATempty, q_54);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm s_38 = t;
                                                                            int t_38 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    d_105 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm u_38 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(t_38);
                                                                                {
                                                                                  ATerm h_55 = NULL;
                                                                                  t = d_105;
                                                                                  {
                                                                                    ATerm v_38 = t;
                                                                                    int w_38 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(w_38);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_38;
                                                                                      }
                                                                                  }
                                                                                  h_55 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, h_55);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = s_38;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_x_38);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm j_6 (ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(j_6, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_39 = ATgetFirst((ATermList) t);
      if(((ATgetType(a_39) != AT_INT) || (ATgetInt((ATermInt) a_39) != 34)))
        _fail(t);
      {
        ATerm b_39 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
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
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  k_112 = t;
  t = SSL_explode_string(k_112);
  g_112 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_112 = ATgetFirst((ATermList) t);
      {
        ATerm c_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_112;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = g_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_39 = ATgetFirst((ATermList) t);
      i_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_112;
  t = at_last_1_0(k_6, t);
  h_112 = t;
  t = SSL_implode_string(h_112);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm e_39 = t;
  if((PushChoice() == 0))
    {
      ATerm g_107 = NULL,h_107 = NULL;
      if(match_cons(t, sym__2))
        {
          g_107 = ATgetArgument(t, 0);
          h_107 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, g_107, h_107);
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(g_107, h_107);
            LocalPopChoice(g_39);
          }
        else
          {
            t = f_39;
            t = SSL_gtr(g_107, h_107);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, g_107, h_107);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_39;
    }
  return(t);
}
static ATerm q_107 (ATerm m_107, ATerm t)
{
  t = SSL_explode_string(m_107);
  {
    ATerm h_39 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(l_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_39;
      }
  }
  t = term_j_39;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm m_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_55 = NULL;
      u_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_55, term_p_39);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_r_39, u_55);
      t = leq_0_0(t);
      LocalPopChoice(o_39);
    }
  else
    {
      t = m_39;
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_55 = NULL;
            x_55 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_55, term_e_36);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_f_36, x_55);
            t = leq_0_0(t);
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            {
              ATerm y_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_55 = NULL;
                  y_55 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_55, term_j_36);
                  t = leq_0_0(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_l_36, y_55);
                  t = leq_0_0(t);
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = y_39;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_q_14;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm p_107 = NULL;
  p_107 = t;
  if(match_string(t, "|="))
    {
      ATerm a_40 = t;
      int c_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_107(p_107, t);
          LocalPopChoice(c_40);
        }
      else
        {
          t = a_40;
          t = term_d_40;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm e_40 = t;
          int f_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_107(p_107, t);
              LocalPopChoice(f_40);
            }
          else
            {
              t = e_40;
              t = term_g_40;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm h_40 = t;
              int i_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_107(p_107, t);
                  LocalPopChoice(i_40);
                }
              else
                {
                  t = h_40;
                  t = term_l_40;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm m_40 = t;
                  int n_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_107(p_107, t);
                      LocalPopChoice(n_40);
                    }
                  else
                    {
                      t = m_40;
                      t = term_o_40;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm p_40 = t;
                      int q_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_107(p_107, t);
                          LocalPopChoice(q_40);
                        }
                      else
                        {
                          t = p_40;
                          t = term_r_40;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm s_40 = t;
                          int t_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = q_107(p_107, t);
                              LocalPopChoice(t_40);
                            }
                          else
                            {
                              t = s_40;
                              t = term_u_40;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm w_40 = t;
                              int x_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = q_107(p_107, t);
                                  LocalPopChoice(x_40);
                                }
                              else
                                {
                                  t = w_40;
                                  t = term_b_41;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm d_41 = t;
                                  int e_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = q_107(p_107, t);
                                      LocalPopChoice(e_41);
                                    }
                                  else
                                    {
                                      t = d_41;
                                      t = term_g_41;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm j_41 = t;
                                      int l_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = q_107(p_107, t);
                                          LocalPopChoice(l_41);
                                        }
                                      else
                                        {
                                          t = j_41;
                                          t = term_r_41;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm s_41 = t;
                                          int t_41 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = q_107(p_107, t);
                                              LocalPopChoice(t_41);
                                            }
                                          else
                                            {
                                              t = s_41;
                                              t = term_u_41;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm v_41 = t;
                                              int w_41 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = q_107(p_107, t);
                                                  LocalPopChoice(w_41);
                                                }
                                              else
                                                {
                                                  t = v_41;
                                                  t = term_z_41;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm a_42 = t;
                                                  int d_42 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = q_107(p_107, t);
                                                      LocalPopChoice(d_42);
                                                    }
                                                  else
                                                    {
                                                      t = a_42;
                                                      t = term_e_42;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm f_42 = t;
                                                      int h_42 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = q_107(p_107, t);
                                                          LocalPopChoice(h_42);
                                                        }
                                                      else
                                                        {
                                                          t = f_42;
                                                          t = term_i_42;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm j_42 = t;
                                                          int m_42 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = q_107(p_107, t);
                                                              LocalPopChoice(m_42);
                                                            }
                                                          else
                                                            {
                                                              t = j_42;
                                                              t = term_n_38;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm n_42 = t;
                                                              int r_42 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = q_107(p_107, t);
                                                                  LocalPopChoice(r_42);
                                                                }
                                                              else
                                                                {
                                                                  t = n_42;
                                                                  t = term_s_42;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm t_42 = t;
                                                                  int u_42 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = q_107(p_107, t);
                                                                      LocalPopChoice(u_42);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = t_42;
                                                                      t = term_s_42;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm w_42 = t;
                                                                      int j_43 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = q_107(p_107, t);
                                                                          LocalPopChoice(j_43);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = w_42;
                                                                          t = term_k_43;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm l_43 = t;
                                                                          int m_43 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = q_107(p_107, t);
                                                                              LocalPopChoice(m_43);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_43;
                                                                              t = term_n_43;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm q_43 = t;
                                                                              int r_43 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = q_107(p_107, t);
                                                                                  LocalPopChoice(r_43);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_43;
                                                                                  t = term_s_43;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm t_43 = t;
                                                                                  int v_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = q_107(p_107, t);
                                                                                      LocalPopChoice(v_43);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = t_43;
                                                                                      t = term_w_43;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm x_43 = t;
                                                                                      int z_43 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = q_107(p_107, t);
                                                                                          LocalPopChoice(z_43);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_43;
                                                                                          t = term_b_44;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm c_44 = t;
                                                                                          int d_44 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = q_107(p_107, t);
                                                                                              LocalPopChoice(d_44);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = c_44;
                                                                                              t = term_e_44;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm f_44 = t;
                                                                                              int g_44 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = q_107(p_107, t);
                                                                                                  LocalPopChoice(g_44);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = f_44;
                                                                                                  t = term_h_44;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm l_44 = t;
                                                                                                  int m_44 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = q_107(p_107, t);
                                                                                                      LocalPopChoice(m_44);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_44;
                                                                                                      t = term_n_44;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm p_44 = t;
                                                                                                      int q_44 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = q_107(p_107, t);
                                                                                                          LocalPopChoice(q_44);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = p_44;
                                                                                                          t = term_t_44;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm u_44 = t;
                                                                                                          int v_44 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = q_107(p_107, t);
                                                                                                              LocalPopChoice(v_44);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = u_44;
                                                                                                              t = term_x_44;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm y_44 = t;
                                                                                                              int z_44 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = q_107(p_107, t);
                                                                                                                  LocalPopChoice(z_44);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_44;
                                                                                                                  t = term_a_45;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm b_45 = t;
                                                                                                                  int c_45 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = q_107(p_107, t);
                                                                                                                      LocalPopChoice(c_45);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_45;
                                                                                                                      t = term_d_45;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm e_45 = t;
                                                                                                                      int h_45 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = q_107(p_107, t);
                                                                                                                          LocalPopChoice(h_45);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = e_45;
                                                                                                                          t = term_l_38;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm i_45 = t;
                                                                                                                          int j_45 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = q_107(p_107, t);
                                                                                                                              LocalPopChoice(j_45);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_45;
                                                                                                                              t = term_k_45;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm l_45 = t;
                                                                                                                              int o_45 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = q_107(p_107, t);
                                                                                                                                  LocalPopChoice(o_45);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = l_45;
                                                                                                                                  t = term_q_45;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm v_45 = t;
                                                                                                                                  int w_45 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = q_107(p_107, t);
                                                                                                                                      LocalPopChoice(w_45);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = v_45;
                                                                                                                                      t = term_a_46;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm h_46 = t;
                                                                                                                                      int i_46 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = q_107(p_107, t);
                                                                                                                                          LocalPopChoice(i_46);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = h_46;
                                                                                                                                          t = term_k_46;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm n_46 = t;
                                                                                                                                          int p_46 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = q_107(p_107, t);
                                                                                                                                              LocalPopChoice(p_46);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = n_46;
                                                                                                                                              t = term_q_46;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm s_46 = t;
                                                                                                                                              int t_46 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = q_107(p_107, t);
                                                                                                                                                  LocalPopChoice(t_46);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = s_46;
                                                                                                                                                  t = term_u_46;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm y_46 = t;
                                                                                                                                                  int z_46 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = q_107(p_107, t);
                                                                                                                                                      LocalPopChoice(z_46);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = y_46;
                                                                                                                                                      t = term_a_47;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm f_47 = t;
                                                                                                                                                      int g_47 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = q_107(p_107, t);
                                                                                                                                                          LocalPopChoice(g_47);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = f_47;
                                                                                                                                                          t = term_h_47;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm i_47 = t;
                                                                                                                                                          int j_47 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = q_107(p_107, t);
                                                                                                                                                              LocalPopChoice(j_47);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = i_47;
                                                                                                                                                              t = term_k_47;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = q_107(p_107, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm g_11 (ATerm s_28, ATerm t_28, ATerm t)
{
  ATerm i_108 = NULL,j_108 = NULL;
  t = t_28;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_28;
    }
  else
    {
      ATerm g_56 = NULL,r_56 = NULL,n_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_108 = ATgetFirst((ATermList) t);
          j_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_28);
      g_56 = t;
      t = j_108;
      {
        static ATerm x_56 (ATerm t)
        {
          ATerm l_47 = t;
          int m_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_56 = NULL;
              t_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_56;
              LocalPopChoice(m_47);
            }
          else
            {
              t = l_47;
              {
                ATerm v_56 = NULL;
                t = Cons_2_0(_id, x_56, t);
                v_56 = t;
                t = (ATerm) ATinsert(CheckATermList(v_56), s_28);
              }
            }
          return(t);
        }
        t = x_56(t);
      }
      r_56 = t;
      t = (ATerm) ATinsert(CheckATermList(r_56), i_108);
      n_18 = t;
      t = SSLsetAnnotations(n_18, g_56);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL,d_109 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_108 = ATgetFirst((ATermList) t);
      d_109 = (ATerm) ATgetNext((ATermList) t);
      t = d_109;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_108 = ATgetFirst((ATermList) t);
          w_108 = (ATerm) ATgetNext((ATermList) t);
          t = v_108;
          if(match_int(t, 34))
            {
              t = x_108;
              if(match_int(t, 92))
                {
                  ATerm n_47 = t;
                  int o_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_109 = NULL;
                      t = w_108;
                      t = De_Escape_0_0(t);
                      g_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_109), term_y_33);
                      LocalPopChoice(o_47);
                    }
                  else
                    {
                      t = n_47;
                      {
                        ATerm j_109 = NULL;
                        t = d_109;
                        t = De_Escape_0_0(t);
                        j_109 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_109), x_108);
                      }
                    }
                }
              else
                {
                  ATerm m_109 = NULL;
                  t = d_109;
                  t = De_Escape_0_0(t);
                  m_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_109), x_108);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = x_108;
                  if(match_int(t, 92))
                    {
                      ATerm p_47 = t;
                      int q_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_109 = NULL;
                          t = w_108;
                          t = De_Escape_0_0(t);
                          p_109 = t;
                          t = (ATerm) ATinsert(CheckATermList(p_109), term_t_34);
                          LocalPopChoice(q_47);
                        }
                      else
                        {
                          t = p_47;
                          {
                            ATerm s_109 = NULL;
                            t = d_109;
                            t = De_Escape_0_0(t);
                            s_109 = t;
                            t = (ATerm) ATinsert(CheckATermList(s_109), x_108);
                          }
                        }
                    }
                  else
                    {
                      ATerm v_109 = NULL;
                      t = d_109;
                      t = De_Escape_0_0(t);
                      v_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_109), x_108);
                    }
                }
              else
                {
                  ATerm y_109 = NULL;
                  t = d_109;
                  t = De_Escape_0_0(t);
                  y_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_109), x_108);
                }
            }
        }
      else
        {
          ATerm b_110 = NULL;
          t = d_109;
          t = De_Escape_0_0(t);
          b_110 = t;
          t = (ATerm) ATinsert(CheckATermList(b_110), x_108);
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
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL;
  l_110 = t;
  t = SSL_explode_string(l_110);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_110 = ATgetFirst((ATermList) t);
      p_110 = (ATerm) ATgetNext((ATermList) t);
      t = p_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_110 = ATgetFirst((ATermList) t);
          n_110 = (ATerm) ATgetNext((ATermList) t);
          t = m_110;
          if(match_int(t, 34))
            {
              t = o_110;
              if(match_int(t, 92))
                {
                  ATerm r_47 = t;
                  int s_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_110 = NULL;
                      t = n_110;
                      t = De_Escape_0_0(t);
                      s_110 = t;
                      t = (ATerm) ATinsert(CheckATermList(s_110), term_y_33);
                      LocalPopChoice(s_47);
                    }
                  else
                    {
                      t = r_47;
                      {
                        ATerm v_110 = NULL;
                        t = p_110;
                        t = De_Escape_0_0(t);
                        v_110 = t;
                        t = (ATerm) ATinsert(CheckATermList(v_110), o_110);
                      }
                    }
                }
              else
                {
                  ATerm y_110 = NULL;
                  t = p_110;
                  t = De_Escape_0_0(t);
                  y_110 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_110), o_110);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = o_110;
                  if(match_int(t, 92))
                    {
                      ATerm t_47 = t;
                      int u_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_111 = NULL;
                          t = n_110;
                          t = De_Escape_0_0(t);
                          a_111 = t;
                          t = (ATerm) ATinsert(CheckATermList(a_111), term_t_34);
                          LocalPopChoice(u_47);
                        }
                      else
                        {
                          t = t_47;
                          {
                            ATerm d_111 = NULL;
                            t = p_110;
                            t = De_Escape_0_0(t);
                            d_111 = t;
                            t = (ATerm) ATinsert(CheckATermList(d_111), o_110);
                          }
                        }
                    }
                  else
                    {
                      ATerm g_111 = NULL;
                      t = p_110;
                      t = De_Escape_0_0(t);
                      g_111 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_111), o_110);
                    }
                }
              else
                {
                  ATerm j_111 = NULL;
                  t = p_110;
                  t = De_Escape_0_0(t);
                  j_111 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_111), o_110);
                }
            }
        }
      else
        {
          ATerm m_111 = NULL;
          t = p_110;
          t = De_Escape_0_0(t);
          m_111 = t;
          t = (ATerm) ATinsert(CheckATermList(m_111), o_110);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  k_110 = t;
  t = SSL_implode_string(k_110);
  return(t);
}
ATerm list_ana_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  static ATerm t_111 (ATerm t)
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_111 = NULL;
        t = s_127(t);
        o_111 = t;
        t = (ATerm) ATinsert(ATempty, o_111);
        LocalPopChoice(x_47);
      }
    else
      {
        t = w_47;
        {
          ATerm z_47 = t;
          int c_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_111 = NULL,c_57 = NULL;
              s_111 = t;
              t = SSL_explode_term(s_111);
              if(match_cons(t, sym__2))
                {
                  ATerm d_48 = ATgetArgument(t, 0);
                  c_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_57;
              t = filter_1_0(t_111, t);
              t = concat_0_0(t);
              LocalPopChoice(c_48);
            }
          else
            {
              t = z_47;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = t_111(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm y_111 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      y_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_111;
  {
    ATerm e_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        LocalPopChoice(g_48);
      }
    else
      {
        t = e_48;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm x_111 = NULL,f_57 = NULL,g_57 = NULL;
  t = list_ana_1_0(m_6, t);
  g_57 = t;
  t = term_m_36;
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, g_57);
  t = g_11(f_57, g_57, t);
  x_111 = t;
  t = SSL_concat_strings(x_111);
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
      }
  }
  return(t);
}
static ATerm z_113 (ATerm a_113, ATerm b_113, ATerm c_113, ATerm t)
{
  ATerm f_113 = NULL;
  t = c_113;
  {
    ATerm k_48 = t;
    int l_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_113;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        f_113 = t;
        LocalPopChoice(l_48);
      }
    else
      {
        t = k_48;
        {
          ATerm m_48 = t;
          int n_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_113 = NULL,n_113 = NULL;
              t = (ATerm) ATinsert(ATempty, b_113);
              t = syms2strs_0_0(t);
              m_113 = t;
              t = a_113;
              t = filter_1_0(lit2str_0_0, t);
              n_113 = t;
              t = filter_1_0(q_6, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_48 = ATgetFirst((ATermList) t);
                  ATerm r_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, m_113, n_113);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              f_113 = t;
              LocalPopChoice(n_48);
            }
          else
            {
              t = m_48;
              {
                ATerm s_48 = t;
                int t_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_113;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    f_113 = t;
                    LocalPopChoice(t_48);
                  }
                else
                  {
                    t = s_48;
                    {
                      ATerm p_113 = NULL,q_113 = NULL;
                      t = (ATerm) ATinsert(ATempty, b_113);
                      t = syms2strs_0_0(t);
                      p_113 = t;
                      t = term_q_14;
                      t = new_0_0(t);
                      q_113 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_113, (ATerm) ATinsert(ATinsert(ATempty, q_113), term_v_48));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      f_113 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = f_113;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm x_48 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_48;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm s_113 = NULL,t_113 = NULL,u_113 = NULL;
  s_113 = t;
  {
    ATerm y_48 = t;
    int z_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            t_113 = ATgetArgument(t, 0);
            {
              ATerm b_49 = ATgetArgument(t, 1);
            }
            {
              ATerm c_49 = ATgetArgument(t, 2);
            }
            {
              ATerm d_49 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_48);
        t = t_113;
        {
          ATerm e_49 = t;
          int n_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_57 = NULL,y_57 = NULL;
              ATerm o_49 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = o_49;
                }
              t = SSL_explode_string(t_113);
              y_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_33)), y_57), (ATerm) ATinsert(ATempty, term_y_33));
              t = concat_0_0(t);
              o_57 = t;
              t = SSL_implode_string(o_57);
              LocalPopChoice(n_49);
            }
          else
            {
              t = e_49;
            }
        }
      }
    else
      {
        t = y_48;
        if(match_cons(t, sym_prod_3))
          {
            t_113 = ATgetArgument(t, 0);
            u_113 = ATgetArgument(t, 1);
            {
              ATerm p_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_113;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm q_49 = t;
            int r_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_113(t_113, u_113, s_113, t);
                LocalPopChoice(r_49);
              }
            else
              {
                t = q_49;
                {
                  ATerm x_113 = NULL;
                  t = (ATerm) ATinsert(ATempty, u_113);
                  t = syms2strs_0_0(t);
                  x_113 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_113, (ATerm) ATinsert(ATempty, term_u_49));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = z_113(t_113, u_113, s_113, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL;
  e_116 = t;
  if(match_cons(t, sym_sort_1))
    {
      f_116 = ATgetArgument(t, 0);
      {
        ATerm c_58 = NULL,f_19 = NULL;
        t = SSLgetAnnotations(e_116);
        c_58 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, f_116);
        f_19 = t;
        t = SSLsetAnnotations(f_19, c_58);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          f_116 = ATgetArgument(t, 0);
          g_116 = ATgetArgument(t, 1);
          {
            ATerm j_59 = NULL,r_59 = NULL,s_59 = NULL,h_23 = NULL;
            t = SSLgetAnnotations(e_116);
            j_59 = t;
            t = f_116;
            t = syntaxless_sort_0_0(t);
            r_59 = t;
            t = g_116;
            t = syntaxless_sort_0_0(t);
            s_59 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, r_59, s_59);
            h_23 = t;
            t = SSLsetAnnotations(h_23, j_59);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              f_116 = ATgetArgument(t, 0);
              {
                ATerm d_60 = NULL,g_60 = NULL,i_23 = NULL;
                t = SSLgetAnnotations(e_116);
                d_60 = t;
                t = f_116;
                t = syntaxless_sort_0_0(t);
                g_60 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, g_60);
                i_23 = t;
                t = SSLsetAnnotations(i_23, d_60);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  f_116 = ATgetArgument(t, 0);
                  {
                    ATerm y_60 = NULL,b_61 = NULL,j_23 = NULL;
                    t = SSLgetAnnotations(e_116);
                    y_60 = t;
                    t = f_116;
                    t = syntaxless_sort_0_0(t);
                    b_61 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, b_61);
                    j_23 = t;
                    t = SSLsetAnnotations(j_23, y_60);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      f_116 = ATgetArgument(t, 0);
                      {
                        ATerm k_61 = NULL,p_61 = NULL,k_23 = NULL;
                        t = SSLgetAnnotations(e_116);
                        k_61 = t;
                        t = f_116;
                        t = syntaxless_sort_0_0(t);
                        p_61 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, p_61);
                        k_23 = t;
                        t = SSLsetAnnotations(k_23, k_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          f_116 = ATgetArgument(t, 0);
                          g_116 = ATgetArgument(t, 1);
                          {
                            ATerm d_62 = NULL,h_62 = NULL,l_23 = NULL;
                            t = SSLgetAnnotations(e_116);
                            d_62 = t;
                            t = f_116;
                            t = syntaxless_sort_0_0(t);
                            h_62 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, h_62, g_116);
                            l_23 = t;
                            t = SSLsetAnnotations(l_23, d_62);
                          }
                        }
                      else
                        {
                          ATerm v_62 = NULL,a_63 = NULL,q_23 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              f_116 = ATgetArgument(t, 0);
                              g_116 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(e_116);
                          v_62 = t;
                          t = f_116;
                          t = syntaxless_sort_0_0(t);
                          a_63 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, a_63, g_116);
                          q_23 = t;
                          t = SSLsetAnnotations(q_23, v_62);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,v_24 = NULL,o_24 = NULL;
  a_117 = t;
  if(match_cons(t, sym_prod_3))
    {
      r_116 = ATgetArgument(t, 0);
      s_116 = ATgetArgument(t, 1);
      t_116 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_117);
  q_116 = t;
  t = r_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_116 = ATgetFirst((ATermList) t);
      x_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_116);
  v_116 = t;
  t = w_116;
  t = syntaxless_sort_0_0(t);
  y_116 = t;
  t = x_116;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_116), y_116);
  o_24 = t;
  t = SSLsetAnnotations(o_24, v_116);
  z_116 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, z_116, s_116, t_116);
  v_24 = t;
  t = SSLsetAnnotations(v_24, q_116);
  u_116 = t;
  t = term_v_49;
  t = get_options_0_0(t);
  t = oncetd_1_0(w_6, t);
  t = u_116;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm c_117 = NULL,g_117 = NULL;
  ATerm w_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm y_49 = ATgetArgument(t, 0);
          ATerm z_49 = ATgetArgument(t, 1);
          ATerm a_50 = ATgetArgument(t, 2);
          c_117 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(x_49);
      t = c_117;
      t = oncetd_1_0(x_6, t);
      t = term_q_14;
    }
  else
    {
      t = w_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm b_50 = ATgetArgument(t, 0);
          ATerm c_50 = ATgetArgument(t, 1);
          g_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_117;
      t = oncetd_1_0(y_6, t);
      t = term_q_14;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm k_117 = NULL,o_117 = NULL;
  ATerm d_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm g_50 = ATgetArgument(t, 0);
          ATerm h_50 = ATgetArgument(t, 1);
          ATerm i_50 = ATgetArgument(t, 2);
          k_117 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(e_50);
      t = k_117;
      t = oncetd_1_0(a_7, t);
      t = term_q_14;
    }
  else
    {
      t = d_50;
      if(match_cons(t, sym_prod_3))
        {
          ATerm j_50 = ATgetArgument(t, 0);
          ATerm s_50 = ATgetArgument(t, 1);
          o_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_117;
      t = oncetd_1_0(g_7, t);
      t = term_q_14;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm x_117 = NULL;
  x_117 = t;
  {
    ATerm t_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_63 = NULL;
        t = x_117;
        {
          ATerm v_50 = t;
          if((PushChoice() == 0))
            {
              ATerm w_50 = t;
              int x_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  LocalPopChoice(x_50);
                }
              else
                {
                  t = w_50;
                  {
                    ATerm y_50 = t;
                    int z_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        LocalPopChoice(z_50);
                      }
                    else
                      {
                        t = y_50;
                        {
                          ATerm a_51 = t;
                          int b_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(b_51);
                            }
                          else
                            {
                              t = a_51;
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
              t = v_50;
            }
        }
        t = x_117;
        t = mk_constr_0_0(t);
        h_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_117, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, h_63)));
        t = add_attributes_0_0(t);
        LocalPopChoice(u_50);
      }
    else
      {
        t = t_50;
        {
          ATerm z_117 = NULL;
          static ATerm i_7 (ATerm t)
          {
            ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL,v_26 = NULL;
            c_118 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm c_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_118);
            a_118 = t;
            t = not_null(z_117);
            t = uq2q_0_0(t);
            b_118 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, b_118);
            v_26 = t;
            t = SSLsetAnnotations(v_26, a_118);
            return(t);
          }
          t = x_117;
          t = get_constr_0_0(t);
          if(((z_117 != NULL) && (z_117 != t)))
            _fail(t);
          else
            z_117 = t;
          t = x_117;
          t = oncetd_1_0(i_7, t);
        }
      }
  }
  return(t);
}
static ATerm m_11 (ATerm d_22, ATerm e_22, ATerm c_22, ATerm b_22, ATerm t)
{
  ATerm e_118 = NULL,f_118 = NULL;
  ATerm d_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm k_7 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((e_118 != NULL) && (e_118 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              e_118 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = c_22;
      t = oncetd_1_0(k_7, t);
      LocalPopChoice(e_51);
    }
  else
    {
      t = d_51;
      {
        ATerm f_51 = t;
        int g_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,z_26 = NULL,y_26 = NULL;
            t = e_22;
            if(match_cons(t, sym_sort_1))
              {
                n_118 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_22);
            m_118 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, n_118);
            y_26 = t;
            t = SSLsetAnnotations(y_26, m_118);
            t = (ATerm) ATmakeAppl(sym_prod_3, d_22, e_22, c_22);
            t = prodcons_0_0(t);
            l_118 = t;
            if(match_cons(t, sym_prod_3))
              {
                h_118 = ATgetArgument(t, 0);
                i_118 = ATgetArgument(t, 1);
                j_118 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_118);
            g_118 = t;
            t = j_118;
            {
              static ATerm l_7 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((e_118 != NULL) && (e_118 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_118 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(l_7, t);
            }
            k_118 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, h_118, i_118, k_118);
            z_26 = t;
            t = SSLsetAnnotations(z_26, g_118);
            LocalPopChoice(g_51);
          }
        else
          {
            t = f_51;
            t = term_h_51;
            e_118 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, d_22, e_22, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(e_118))))), (ATerm) ATinsert(ATempty, not_null(e_118)));
  t = get_pp_entry_0_0(t);
  f_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_118), f_118);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm i_51 = t;
  if((PushChoice() == 0))
    {
      ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,f_27 = NULL;
      w_118 = t;
      if(match_cons(t, sym_lit_1))
        {
          v_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_118);
      u_118 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, v_118);
      f_27 = t;
      t = SSLsetAnnotations(f_27, u_118);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_51;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm j_51 = t;
  if((PushChoice() == 0))
    {
      ATerm x_118 = NULL,y_118 = NULL,z_118 = NULL,g_27 = NULL;
      z_118 = t;
      if(match_cons(t, sym_lit_1))
        {
          y_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_118);
      x_118 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, y_118);
      g_27 = t;
      t = SSLsetAnnotations(g_27, x_118);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_51;
    }
  return(t);
}
static ATerm n_11 (ATerm k_21, ATerm i_21, ATerm j_21, ATerm l_21, ATerm t)
{
  ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL;
  static ATerm v_7 (ATerm t)
  {
    ATerm k_51 = t;
    int l_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_51 = t;
        int o_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_7 (ATerm t)
            {
              t = not_null(r_118);
              return(t);
            }
            t = Instantiate_1_0(x_7, t);
            LocalPopChoice(o_51);
          }
        else
          {
            t = m_51;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(l_51);
      }
    else
      {
        t = k_51;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, k_21, i_21, j_21), l_21);
  t = m_11(k_21, i_21, j_21, l_21, t);
  if(match_cons(t, sym__2))
    {
      p_118 = ATgetArgument(t, 0);
      q_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_21;
  t = filter_1_0(s_7, t);
  s_118 = t;
  t = l_21;
  t = filter_1_0(u_7, t);
  t_118 = t;
  t = (ATerm) ATmakeAppl(sym__4, s_118, t_118, (ATerm)ATinsert(ATempty, p_118), term_v_14);
  t = seq2abox_0_0(t);
  if(((r_118 != NULL) && (r_118 != t)))
    _fail(t);
  else
    r_118 = t;
  t = q_118;
  t = bottomup_1_0(v_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm o_119 = NULL,p_119 = NULL,t_119 = NULL;
  o_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_119;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_119 = ATgetFirst((ATermList) t);
          t_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_51 = t;
        int q_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_63 = NULL,p_63 = NULL,q_63 = NULL,l_27 = NULL;
            t = SSLgetAnnotations(o_119);
            m_63 = t;
            t = p_119;
            t = c_110(t);
            p_63 = t;
            t = t_119;
            t = filter_1_0(c_110, t);
            q_63 = t;
            t = (ATerm) ATinsert(CheckATermList(q_63), p_63);
            l_27 = t;
            t = SSLsetAnnotations(l_27, m_63);
            LocalPopChoice(q_51);
          }
        else
          {
            t = p_51;
            t = t_119;
            t = filter_1_0(c_110, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  static ATerm z_7 (ATerm t)
  {
    t = topdown_1_0(j_96, t);
    return(t);
  }
  t = j_96(t);
  t = SRTS_all(z_7, t);
  return(t);
}
ATerm sometd_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  static ATerm w_119 (ATerm t)
  {
    ATerm r_51 = t;
    int s_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_97(t);
        LocalPopChoice(s_51);
      }
    else
      {
        t = r_51;
        t = SRTS_some(w_119, t);
      }
    return(t);
  }
  t = w_119(t);
  return(t);
}
ATerm repeat_2_0 (ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm t)
{
  static ATerm x_119 (ATerm t)
  {
    ATerm t_51 = t;
    int u_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_95(t);
        t = x_119(t);
        LocalPopChoice(u_51);
      }
    else
      {
        t = t_51;
        t = k_95(t);
      }
    return(t);
  }
  t = x_119(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  static ATerm q_120 (ATerm t)
  {
    ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL;
    p_120 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_120 = ATgetFirst((ATermList) t);
        o_120 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_64 = NULL,f_64 = NULL,e_28 = NULL;
          t = SSLgetAnnotations(p_120);
          a_64 = t;
          t = o_120;
          t = q_120(t);
          f_64 = t;
          t = (ATerm) ATinsert(CheckATermList(f_64), n_120);
          e_28 = t;
          t = SSLsetAnnotations(e_28, a_64);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_120;
        t = l_103(t);
      }
    return(t);
  }
  t = q_120(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL;
  t_120 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_120;
    }
  else
    {
      static ATerm a_8 (ATerm t)
      {
        t = not_null(v_120);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_120 = ATgetFirst((ATermList) t);
          if(((v_120 != NULL) && (v_120 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_120;
      t = at_end_1_0(a_8, t);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      y_64 = ATgetArgument(t, 0);
      z_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(y_64);
  a_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_64), term_x_51), a_65), term_v_51);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL;
  m_121 = t;
  if(match_cons(t, sym_Path1_1))
    {
      n_121 = ATgetArgument(t, 0);
      t = n_121;
    }
  else
    {
      ATerm r_64 = NULL,x_64 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          n_121 = ATgetArgument(t, 0);
          o_121 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_121;
      t = map_1_0(b_8, t);
      t = concat_0_0(t);
      r_64 = t;
      t = (ATerm) ATinsert(CheckATermList(r_64), n_121);
      x_64 = t;
      t = SSL_concat_strings(x_64);
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm g_122 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      g_122 = ATgetArgument(t, 0);
      {
        ATerm y_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_122;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm w_121 = NULL,x_121 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      w_121 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, w_121);
    }
  else
    {
      ATerm f_122 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          w_121 = ATgetArgument(t, 0);
          x_121 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_121;
      t = map_1_0(c_8, t);
      f_122 = t;
      t = (ATerm) ATinsert(CheckATermList(f_122), w_121);
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_z_51;
  return(t);
}
static ATerm o_11 (ATerm t_64, ATerm u_64, ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL;
  t = t_64;
  t = mk_key_0_0(t);
  k_122 = t;
  t = term_y_25;
  l_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_64, u_64);
  m_122 = t;
  t = SSL_table_put(l_122, k_122, m_122);
  t = t_64;
  t = path_to_string_0_0(t);
  j_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_122, u_64);
  t = if_verbose1_1_0(d_8, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm n_112 (ATerm), ATerm t)
{
  static ATerm d_123 (ATerm t)
  {
    ATerm a_123 = NULL,b_123 = NULL,c_123 = NULL;
    ATerm a_52 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_112(t);
        LocalPopChoice(b_52);
      }
    else
      {
        t = a_52;
      }
    c_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_123 = ATgetFirst((ATermList) t);
        b_123 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_65 = NULL,n_65 = NULL,q_28 = NULL;
          t = SSLgetAnnotations(c_123);
          k_65 = t;
          t = b_123;
          t = d_123(t);
          n_65 = t;
          t = (ATerm) ATinsert(CheckATermList(n_65), a_123);
          q_28 = t;
          t = SSLsetAnnotations(q_28, k_65);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_123;
      }
    return(t);
  }
  t = d_123(t);
  return(t);
}
ATerm at_last_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  static ATerm a_124 (ATerm t)
  {
    ATerm x_123 = NULL,y_123 = NULL,z_123 = NULL;
    x_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_123 = ATgetFirst((ATermList) t);
        z_123 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_52 = t;
      int d_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_66 = NULL,c_29 = NULL;
          t = SSLgetAnnotations(x_123);
          c_66 = t;
          t = z_123;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_123), y_123);
          c_29 = t;
          t = SSLsetAnnotations(c_29, c_66);
          t = w_103(t);
          LocalPopChoice(d_52);
        }
      else
        {
          t = c_52;
          {
            ATerm w_66 = NULL,z_66 = NULL,d_29 = NULL;
            t = SSLgetAnnotations(x_123);
            w_66 = t;
            t = z_123;
            t = a_124(t);
            z_66 = t;
            t = (ATerm) ATinsert(CheckATermList(z_66), y_123);
            d_29 = t;
            t = SSLsetAnnotations(d_29, w_66);
          }
        }
    }
    return(t);
  }
  t = a_124(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_124 = NULL,h_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_124 = ATgetFirst((ATermList) t);
      h_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_124;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_124;
    }
  else
    {
      t = h_124;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm p_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_52 = ATgetFirst((ATermList) t);
      p_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_124;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL;
  m_124 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_124 = ATgetFirst((ATermList) t);
      {
        ATerm f_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_124;
  t = z_111(t);
  t = m_124;
  t = last_0_0(t);
  t = a_112(t);
  t = m_124;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_52 = ATgetFirst((ATermList) t);
      n_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_124;
  t = at_last_1_0(f_8, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_69 = ATgetFirst((ATermList) t);
      o_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_69;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = o_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_69 = ATgetFirst((ATermList) t);
      q_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_69;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(q_69), term_y_33);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(q_69), term_t_34);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(q_69), term_h_52);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_69), term_i_52);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm p_127 = NULL,q_127 = NULL,r_127 = NULL;
  p_127 = t;
  if(match_cons(t, sym_Arg_1))
    {
      q_127 = ATgetArgument(t, 0);
      {
        ATerm h_67 = NULL,j_67 = NULL,g_29 = NULL;
        t = SSLgetAnnotations(p_127);
        h_67 = t;
        t = SSL_string_to_int(q_127);
        j_67 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, j_67);
        g_29 = t;
        t = SSLsetAnnotations(g_29, h_67);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          q_127 = ATgetArgument(t, 0);
          r_127 = ATgetArgument(t, 1);
          {
            ATerm q_67 = NULL,u_67 = NULL,y_67 = NULL,h_29 = NULL;
            t = SSLgetAnnotations(p_127);
            q_67 = t;
            t = SSL_string_to_int(q_127);
            u_67 = t;
            t = SSL_string_to_int(r_127);
            y_67 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, u_67, y_67);
            h_29 = t;
            t = SSLsetAnnotations(h_29, q_67);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              q_127 = ATgetArgument(t, 0);
              r_127 = ATgetArgument(t, 1);
              {
                ATerm m_68 = NULL,i_29 = NULL;
                t = SSLgetAnnotations(p_127);
                m_68 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, q_127, r_127);
                i_29 = t;
                t = SSLsetAnnotations(i_29, m_68);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  q_127 = ATgetArgument(t, 0);
                  {
                    ATerm f_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,k_29 = NULL;
                    t = SSLgetAnnotations(p_127);
                    f_69 = t;
                    t = SSL_explode_string(q_127);
                    t = unquote_chars_2_0(g_8, h_8, t);
                    k_69 = t;
                    t = SSL_implode_string(k_69);
                    j_69 = t;
                    t = SSL_explode_string(j_69);
                    t = unescape_chars_1_0(i_8, t);
                    i_69 = t;
                    t = SSL_implode_string(i_69);
                    h_69 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, h_69);
                    k_29 = t;
                    t = SSLsetAnnotations(k_29, f_69);
                  }
                }
              else
                {
                  ATerm b_70 = NULL,j_70 = NULL,r_29 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      q_127 = ATgetArgument(t, 0);
                      r_127 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_127);
                  b_70 = t;
                  t = SSL_string_to_int(q_127);
                  j_70 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, j_70, r_127);
                  r_29 = t;
                  t = SSLsetAnnotations(r_29, b_70);
                }
            }
        }
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm d_128 = NULL,e_128 = NULL;
  t = topdown_1_0(m_8, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      d_128 = ATgetArgument(t, 0);
      e_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(d_128, e_128, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(k_52);
    }
  else
    {
      t = j_52;
    }
  return(t);
}
static ATerm w_11 (ATerm s_64, ATerm t)
{
  t = s_64;
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(l_8, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  static ATerm h_128 (ATerm t)
  {
    ATerm l_52 = t;
    int n_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_97(t);
        LocalPopChoice(n_52);
      }
    else
      {
        t = l_52;
        t = SRTS_one(h_128, t);
      }
    return(t);
  }
  t = h_128(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL;
  t = term_p_52;
  i_128 = t;
  t = term_r_52;
  j_128 = t;
  t = term_s_52;
  t = n_12(i_128, j_128, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm t_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_128 = NULL,l_128 = NULL,m_128 = NULL;
      t = term_x_52;
      t = get_options_0_0(t);
      t = oncetd_1_0(o_8, t);
      t = term_r_14;
      l_128 = t;
      t = (ATerm) ATinsert(ATempty, term_z_52);
      m_128 = t;
      t = SSL_printnl(l_128, m_128);
      t = term_v_14;
      k_128 = t;
      t = SSL_exit(k_128);
      t = (ATerm) ATinsert(ATempty, term_z_52);
      LocalPopChoice(u_52);
    }
  else
    {
      t = t_52;
      {
        ATerm o_128 = NULL,p_128 = NULL;
        t = term_r_14;
        o_128 = t;
        t = (ATerm) ATinsert(ATempty, term_a_53);
        p_128 = t;
        t = SSL_printnl(o_128, p_128);
        t = (ATerm) ATinsert(ATempty, term_a_53);
      }
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,p_70 = NULL,q_70 = NULL;
  t = if_verbose1_1_0(r_8, t);
  t = ReadFromFile_0_0(t);
  x_128 = t;
  t = SSL_explode_term(x_128);
  if(match_cons(t, sym__2))
    {
      q_70 = ATgetArgument(t, 0);
      {
        ATerm b_53 = ATgetArgument(t, 1);
        if(((ATgetType(b_53) == AT_LIST) && !(ATisEmpty(b_53))))
          {
            p_70 = ATgetFirst((ATermList) b_53);
            {
              ATerm c_53 = (ATerm) ATgetNext((ATermList) b_53);
              if(((ATgetType(c_53) != AT_LIST) || !(ATisEmpty(c_53))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_70;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = p_70;
  if(match_cons(t, sym_PP_Table_1))
    {
      w_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(w_128, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = debug_1_0(s_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_d_53;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm u_128 = NULL,v_128 = NULL;
  u_128 = t;
  t = term_y_25;
  v_128 = t;
  t = SSL_table_create(v_128);
  t = u_128;
  t = map_1_0(q_8, t);
  return(t);
}
static ATerm z_11 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm h_34, ATerm g_34, ATerm t)
{
  t = d_107(t);
  {
    static ATerm u_8 (ATerm t)
    {
      ATerm y_128 = NULL;
      y_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_34, y_128);
      t = c_107(t);
      return(t);
    }
    t = fetch_1_0(u_8, t);
  }
  t = g_34;
  return(t);
}
static ATerm a_12 (ATerm z_106 (ATerm), ATerm d_34, ATerm c_34, ATerm t)
{
  static ATerm p_129 (ATerm t)
  {
    ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
    k_129 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_129 = ATgetFirst((ATermList) t);
            m_129 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_53 = t;
          int f_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_129;
              {
                static ATerm v_8 (ATerm t)
                {
                  t = c_34;
                  return(t);
                }
                t = z_11(z_106, v_8, l_129, m_129, t);
              }
              t = p_129(t);
              LocalPopChoice(f_53);
            }
          else
            {
              t = e_53;
              {
                ATerm x_70 = NULL,a_71 = NULL,y_29 = NULL;
                t = SSLgetAnnotations(k_129);
                x_70 = t;
                t = m_129;
                t = p_129(t);
                a_71 = t;
                t = (ATerm) ATinsert(CheckATermList(a_71), l_129);
                y_29 = t;
                t = SSLsetAnnotations(y_29, x_70);
              }
            }
        }
      }
    return(t);
  }
  t = d_34;
  t = p_129(t);
  return(t);
}
ATerm foldr_3_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t)
{
  ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL;
  s_129 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_129;
      t = a_109(t);
    }
  else
    {
      ATerm x_129 = NULL,y_129 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_129 = ATgetFirst((ATermList) t);
          u_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_129;
      t = c_109(t);
      x_129 = t;
      t = u_129;
      t = foldr_3_0(a_109, b_109, c_109, t);
      y_129 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_129, y_129);
      t = b_109(t);
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm t)
{
  ATerm g_53 = t;
  int h_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_130 = NULL;
      t = e_108(t);
      b_130 = t;
      t = (ATerm) ATinsert(ATempty, b_130);
      LocalPopChoice(h_53);
    }
  else
    {
      t = g_53;
      {
        ATerm f_71 = NULL,g_71 = NULL;
        static ATerm a_9 (ATerm t)
        {
          t = collect_om_2_0(e_108, f_108, t);
          return(t);
        }
        g_71 = t;
        t = SSL_explode_term(g_71);
        if(match_cons(t, sym__2))
          {
            ATerm i_53 = ATgetArgument(t, 0);
            f_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_71;
        t = foldr_3_0(z_8, f_108, a_9, t);
      }
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm l_130 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      l_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_130;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm m_130 = NULL,n_130 = NULL;
  if(match_cons(t, sym__2))
    {
      m_130 = ATgetArgument(t, 0);
      n_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(d_9, m_130, n_130, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm o_130 = NULL;
  if(match_cons(t, sym__2))
    {
      o_130 = ATgetArgument(t, 0);
      if((o_130 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = sometd_1_0(l_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm q_130 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      q_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_130;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_53 = ATgetFirst((ATermList) t);
              ATerm m_53 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(n_9, t);
      LocalPopChoice(k_53);
    }
  else
    {
      t = j_53;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm n_53 = t;
  if((PushChoice() == 0))
    {
      ATerm s_130 = NULL,t_130 = NULL,u_130 = NULL,a_30 = NULL;
      u_130 = t;
      if(match_cons(t, sym_opt_1))
        {
          t_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_130);
      s_130 = t;
      t = t_130;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, t_130);
      a_30 = t;
      t = SSLsetAnnotations(a_30, s_130);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_53;
    }
  {
    ATerm o_53 = t;
    if((PushChoice() == 0))
      {
        ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL,b_30 = NULL;
        x_130 = t;
        if(match_cons(t, sym_layout_1))
          {
            w_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_130);
        v_130 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, w_130);
        b_30 = t;
        t = SSLsetAnnotations(b_30, v_130);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_53;
      }
  }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm k_131 = NULL,l_131 = NULL,m_131 = NULL,c_30 = NULL;
  m_131 = t;
  if(match_cons(t, sym_layout_1))
    {
      l_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_131);
  k_131 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, l_131);
  c_30 = t;
  t = SSLsetAnnotations(c_30, k_131);
  return(t);
}
static ATerm b_12 (ATerm u_26, ATerm t_26, ATerm t)
{
  ATerm h_130 = NULL,i_130 = NULL,j_130 = NULL,k_130 = NULL;
  t = u_26;
  t = collect_om_2_0(b_9, c_9, t);
  t = reverse_acc_2_0(_id, j_9, t);
  t = read_pp_tables_0_0(t);
  t = t_26;
  t = repeat_2_0(k_9, _id, t);
  k_130 = t;
  t = topdown_1_0(m_9, t);
  {
    ATerm p_53 = t;
    int q_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL,f_131 = NULL;
        a_131 = t;
        if(match_cons(t, sym_appl_2))
          {
            b_131 = ATgetArgument(t, 0);
            f_131 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_131;
        if(match_cons(t, sym_prod_3))
          {
            c_131 = ATgetArgument(t, 0);
            d_131 = ATgetArgument(t, 1);
            e_131 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = a_131;
        t = n_11(c_131, d_131, e_131, f_131, t);
        LocalPopChoice(q_53);
      }
    else
      {
        t = p_53;
        t = fatal_ambiguity_0_0(t);
      }
  }
  i_130 = t;
  t = k_130;
  t = collect_p__1_0(o_9, t);
  j_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_130, j_130);
  t = insert_layout_0_0(t);
  h_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, h_130);
  return(t);
}
static ATerm e_12 (ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm n_131 = NULL;
  t = SSL_fputc(d_43, e_43);
  n_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_131);
  return(t);
}
static ATerm f_12 (ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm o_131 = NULL;
  t = SSL_write_term_to_stream_text(k_28, l_28);
  o_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_131);
  return(t);
}
static ATerm h_12 (ATerm m_102 (ATerm), ATerm v_196, ATerm o_28, ATerm t)
{
  ATerm p_131 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_196, term_r_53);
  t = k_12(t);
  p_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_131, o_28);
  t = m_102(t);
  t = fclose_0_0(t);
  t = o_28;
  return(t);
}
static ATerm g_12 (ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm q_131 = NULL;
  t = SSL_write_term_to_stream_baf(g_28, h_28);
  q_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_131);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_53 = ATgetArgument(t, 0);
      if(match_cons(s_53, sym_Stream_1))
        {
          f_72 = ATgetArgument(s_53, 0);
        }
      else
        _fail(t);
      g_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(f_72, g_72, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_53 = ATgetArgument(t, 0);
      if(match_cons(v_53, sym_Stream_1))
        {
          f_73 = ATgetArgument(v_53, 0);
        }
      else
        _fail(t);
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(f_73, g_73, t);
  c_73 = t;
  t = term_h_52;
  d_73 = t;
  t = c_73;
  if(match_cons(t, sym_Stream_1))
    {
      e_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_52, c_73);
  t = e_12(d_73, e_73, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL,x_131 = NULL,y_131 = NULL,a_132 = NULL,b_132 = NULL,c_132 = NULL,d_132 = NULL,e_132 = NULL,e_133 = NULL,f_133 = NULL,i_30 = NULL,h_30 = NULL;
  v_131 = t;
  if(match_cons(t, sym__2))
    {
      c_132 = ATgetArgument(t, 0);
      d_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_131);
  b_132 = t;
  t = c_132;
  {
    ATerm w_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_9 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_131 != NULL) && (u_131 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_9, t);
        LocalPopChoice(x_53);
      }
    else
      {
        t = w_53;
        t = term_y_53;
        u_131 = t;
      }
  }
  e_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_132, d_132);
  h_30 = t;
  t = SSLsetAnnotations(h_30, b_132);
  t = v_131;
  if(match_cons(t, sym__2))
    {
      x_131 = ATgetArgument(t, 0);
      y_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_131);
  w_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_131, (ATerm) ATmakeAppl(sym__2, not_null(u_131), y_131));
  i_30 = t;
  t = SSLsetAnnotations(i_30, w_131);
  a_132 = t;
  if(match_cons(t, sym__2))
    {
      e_133 = ATgetArgument(t, 0);
      f_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_53 = t;
    int a_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_71 = NULL,y_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,n_30 = NULL;
        t = SSLgetAnnotations(a_132);
        v_71 = t;
        t = e_133;
        t = fetch_1_0(r_9, t);
        y_71 = t;
        t = f_133;
        if(match_cons(t, sym__2))
          {
            b_72 = ATgetArgument(t, 0);
            c_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_12(u_9, b_72, c_72, t);
        a_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_71, a_72);
        n_30 = t;
        t = SSLsetAnnotations(n_30, v_71);
        LocalPopChoice(a_54);
      }
    else
      {
        t = z_53;
        {
          ATerm n_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,o_30 = NULL;
          t = SSLgetAnnotations(a_132);
          n_72 = t;
          t = f_133;
          if(match_cons(t, sym__2))
            {
              z_72 = ATgetArgument(t, 0);
              a_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_12(v_9, z_72, a_73, t);
          y_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_133, y_72);
          o_30 = t;
          t = SSLsetAnnotations(o_30, n_72);
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
ATerm apply_strategy_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm i_133 = NULL,j_133 = NULL,k_133 = NULL,l_133 = NULL,m_133 = NULL;
  m_133 = t;
  t = dtime_0_0(t);
  t = m_133;
  t = h_119(t);
  l_133 = t;
  t = dtime_0_0(t);
  i_133 = t;
  t = l_133;
  if(match_cons(t, sym__2))
    {
      j_133 = ATgetArgument(t, 0);
      k_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_133), (ATerm) ATmakeAppl(sym_Runtime_1, i_133)), k_133);
  return(t);
}
static ATerm a_134 (ATerm u_133, ATerm t)
{
  t = SSL_fclose(u_133);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_133 = NULL,y_133 = NULL;
  y_133 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_133 = ATgetArgument(t, 0);
      {
        ATerm b_54 = t;
        int c_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_133);
            LocalPopChoice(c_54);
          }
        else
          {
            t = b_54;
            t = a_134(y_133, t);
          }
      }
    }
  else
    {
      t = a_134(y_133, t);
    }
  return(t);
}
static ATerm i_12 (ATerm m_28, ATerm t)
{
  t = SSL_read_term_from_stream(m_28);
  return(t);
}
static ATerm j_12 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm b_134 = NULL;
  t = SSL_fopen(f_43, g_43);
  b_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_134);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_134 = NULL;
  t = SSL_stdin_stream();
  c_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_134);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_134 = NULL;
  t = SSL_stdout_stream();
  d_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_134);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_134 = NULL;
  t = SSL_stderr_stream();
  e_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_134);
  return(t);
}
static ATerm l_135 (ATerm k_134, ATerm t)
{
  ATerm l_134 = NULL;
  t = SSL_explode_term(k_134);
  if(match_cons(t, sym__2))
    {
      ATerm d_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_54 = ATgetArgument(t, 1);
        if(((ATgetType(e_54) == AT_LIST) && !(ATisEmpty(e_54))))
          {
            l_134 = ATgetFirst((ATermList) e_54);
            {
              ATerm h_54 = (ATerm) ATgetNext((ATermList) e_54);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_134;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_134;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_134;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_134;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_135 (ATerm o_134, ATerm p_134, ATerm q_134, ATerm t)
{
  ATerm r_134 = NULL,s_134 = NULL,t_134 = NULL,w_134 = NULL,h_32 = NULL;
  t = SSLgetAnnotations(q_134);
  t_134 = t;
  t = o_134;
  if(match_cons(t, sym_Path_1))
    {
      w_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_134, p_134);
  h_32 = t;
  t = SSLsetAnnotations(h_32, t_134);
  if(match_cons(t, sym__2))
    {
      r_134 = ATgetArgument(t, 0);
      s_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(r_134, s_134, t);
  return(t);
}
static ATerm n_135 (ATerm y_134, ATerm z_134, ATerm a_135, ATerm t)
{
  ATerm b_135 = NULL,c_135 = NULL,d_135 = NULL,g_135 = NULL,i_32 = NULL;
  t = SSLgetAnnotations(a_135);
  d_135 = t;
  t = SSL_is_string(y_134);
  g_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_135, z_134);
  i_32 = t;
  t = SSLsetAnnotations(i_32, d_135);
  if(match_cons(t, sym__2))
    {
      b_135 = ATgetArgument(t, 0);
      c_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(b_135, c_135, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL;
  i_135 = t;
  if(match_cons(t, sym__2))
    {
      j_135 = ATgetArgument(t, 0);
      k_135 = ATgetArgument(t, 1);
      {
        ATerm j_54 = t;
        int l_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_135(i_135, t);
            LocalPopChoice(l_54);
          }
        else
          {
            t = j_54;
            {
              ATerm n_54 = t;
              int o_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_135(j_135, k_135, i_135, t);
                  LocalPopChoice(o_54);
                }
              else
                {
                  t = n_54;
                  t = n_135(j_135, k_135, i_135, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_135(i_135, t);
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_p_54;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_135 = NULL,p_135 = NULL,q_135 = NULL;
  ATerm r_54 = t;
  int s_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_135 = NULL;
      r_135 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_135, term_t_54);
      t = k_12(t);
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
      t = debug_1_0(w_9, t);
      _fail(t);
    }
  p_135 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_12(q_135, t);
  o_135 = t;
  t = p_135;
  t = fclose_0_0(t);
  t = o_135;
  return(t);
}
ATerm fetch_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  static ATerm q_136 (ATerm t)
  {
    ATerm n_136 = NULL,o_136 = NULL,p_136 = NULL;
    n_136 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_136 = ATgetFirst((ATermList) t);
        p_136 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_54 = t;
      int v_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_73 = NULL,z_73 = NULL,o_32 = NULL;
          t = SSLgetAnnotations(n_136);
          s_73 = t;
          t = o_136;
          t = f_103(t);
          z_73 = t;
          t = (ATerm) ATinsert(CheckATermList(p_136), z_73);
          o_32 = t;
          t = SSLsetAnnotations(o_32, s_73);
          LocalPopChoice(v_54);
        }
      else
        {
          t = u_54;
          {
            ATerm l_74 = NULL,r_74 = NULL,p_32 = NULL;
            t = SSLgetAnnotations(n_136);
            l_74 = t;
            t = p_136;
            t = q_136(t);
            r_74 = t;
            t = (ATerm) ATinsert(CheckATermList(r_74), o_136);
            p_32 = t;
            t = SSLsetAnnotations(p_32, l_74);
          }
        }
    }
    return(t);
  }
  t = q_136(t);
  return(t);
}
static ATerm d_12 (ATerm x_41, ATerm y_41, ATerm t)
{
  t = SSL_strcat(x_41, y_41);
  return(t);
}
ATerm debug_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm t_136 = NULL,u_136 = NULL,v_136 = NULL,w_136 = NULL;
  t_136 = t;
  t = k_102(t);
  u_136 = t;
  t = term_r_14;
  v_136 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_136), u_136);
  w_136 = t;
  t = SSL_printnl(v_136, w_136);
  t = t_136;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm w_54 = t;
  int x_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(x_54);
    }
  else
    {
      t = w_54;
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_y_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_137 = NULL;
      d_137 = t;
      t = SSL_is_string(d_137);
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      {
        ATerm b_55 = t;
        int c_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_9, t);
            LocalPopChoice(c_55);
          }
        else
          {
            t = b_55;
            {
              ATerm j_137 = NULL,k_137 = NULL,l_137 = NULL;
              j_137 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_137 = ATgetArgument(t, 0);
                  t = k_137;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_137 = ATgetArgument(t, 0);
                      t = k_137;
                      {
                        ATerm d_55 = t;
                        int e_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(e_55);
                          }
                        else
                          {
                            t = d_55;
                            t = debug_1_0(a_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_137 = NULL,q_137 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_137 = ATgetArgument(t, 0);
                          l_137 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_137;
                      t = eval_config_0_0(t);
                      p_137 = t;
                      t = l_137;
                      t = eval_config_0_0(t);
                      q_137 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_137, q_137);
                      t = d_12(p_137, q_137, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_137 = NULL,v_137 = NULL;
  u_137 = t;
  t = term_f_55;
  v_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_55, u_137);
  t = n_12(v_137, u_137, t);
  {
    ATerm g_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_137 = NULL,x_137 = NULL;
        t = eval_config_0_0(t);
        w_137 = t;
        t = term_f_55;
        x_137 = t;
        t = SSL_table_put(x_137, u_137, w_137);
        t = w_137;
        LocalPopChoice(i_55);
      }
    else
      {
        t = g_55;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  ATerm b_138 = NULL;
  b_138 = t;
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_138 = NULL;
        t = term_l_55;
        t = get_config_0_0(t);
        d_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_138, term_r_20);
        t = geq_0_0(t);
        t = b_138;
        t = q_117(t);
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        t = b_138;
      }
  }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm g_138 = NULL;
  g_138 = t;
  if(match_string(t, "-k"))
    {
      t = g_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_138;
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm h_138 = NULL,i_138 = NULL,j_138 = NULL;
  h_138 = t;
  t = SSL_string_to_int(h_138);
  i_138 = t;
  t = term_m_55;
  j_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_55, i_138);
  t = p_12(j_138, i_138, t);
  t = h_138;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_n_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_10, c_10, f_10, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm l_138 = NULL;
  l_138 = t;
  if(match_string(t, "-S"))
    {
      t = l_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_138;
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm m_138 = NULL,n_138 = NULL;
  t = term_l_55;
  m_138 = t;
  t = term_o_55;
  n_138 = t;
  t = term_p_55;
  t = p_12(m_138, n_138, t);
  t = term_q_55;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_r_55;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL,q_138 = NULL;
  o_138 = t;
  t = SSL_string_to_int(o_138);
  p_138 = t;
  t = term_l_55;
  q_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_55, p_138);
  t = p_12(q_138, p_138, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_138);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_s_55;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm r_138 = NULL,s_138 = NULL;
  t = term_t_55;
  r_138 = t;
  t = term_q_14;
  s_138 = t;
  t = term_v_55;
  t = p_12(r_138, s_138, t);
  t = term_w_55;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_z_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_56 = t;
  int b_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_10, i_10, j_10, t);
      LocalPopChoice(b_56);
    }
  else
    {
      t = a_56;
      {
        ATerm c_56 = t;
        int d_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_10, l_10, o_10, t);
            LocalPopChoice(d_56);
          }
        else
          {
            t = c_56;
            t = Option_3_0(q_10, w_10, y_10, t);
          }
      }
    }
  return(t);
}
static ATerm p_12 (ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm t_138 = NULL;
  t = term_f_55;
  t_138 = t;
  t = SSL_table_put(t_138, v_52, w_52);
  t = (ATerm) ATmakeAppl(sym__3, term_f_55, v_52, w_52);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm v_138 = NULL;
  v_138 = t;
  if(match_string(t, "-o"))
    {
      t = v_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_138;
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm w_138 = NULL,x_138 = NULL;
  w_138 = t;
  t = term_e_56;
  x_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_56, w_138);
  t = p_12(x_138, w_138, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_138);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_f_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_11, e_11, f_11, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm z_138 = NULL;
  z_138 = t;
  if(match_string(t, "-i"))
    {
      t = z_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_138;
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm b_139 = NULL,c_139 = NULL;
  b_139 = t;
  t = term_h_56;
  c_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_56, b_139);
  t = p_12(c_139, b_139, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_139);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_i_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_11, i_11, p_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_14;
  t = whoami_0_0(t);
  d_139 = t;
  t = term_r_14;
  f_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_56), d_139);
  g_139 = t;
  t = SSL_printnl(f_139, g_139);
  t = term_v_14;
  e_139 = t;
  t = SSL_exit(e_139);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_56;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_12 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm l_56 = t;
  int m_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_45, z_45);
      LocalPopChoice(m_56);
    }
  else
    {
      t = l_56;
      t = SSL_addr(y_45, z_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL,k_139 = NULL;
  i_139 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_139;
      t = y_108(t);
    }
  else
    {
      ATerm n_139 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_139 = ATgetFirst((ATermList) t);
          k_139 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_139;
      t = foldr_2_0(y_108, z_108, t);
      n_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_139, n_139);
      t = z_108(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm a_76 = NULL,e_76 = NULL;
  if(match_cons(t, sym__2))
    {
      a_76 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(a_76, e_76, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_139 = NULL,n_75 = NULL,u_75 = NULL;
  t = times_0_0(t);
  u_75 = t;
  t = SSL_explode_term(u_75);
  if(match_cons(t, sym__2))
    {
      ATerm n_56 = ATgetArgument(t, 0);
      n_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_75;
  t = foldr_2_0(q_11, s_11, t);
  q_139 = t;
  t = SSL_TicksToSeconds(q_139);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_140 = NULL,c_140 = NULL,d_140 = NULL;
  b_140 = t;
  if(match_cons(t, sym__2))
    {
      c_140 = ATgetArgument(t, 0);
      d_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_56 = t;
    int p_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_140;
        if((c_140 != t))
          {
            _fail(t);
          }
        t = b_140;
        LocalPopChoice(p_56);
      }
    else
      {
        t = o_56;
        t = (ATerm) ATmakeAppl(sym__2, c_140, d_140);
        {
          ATerm q_56 = t;
          int s_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_140, d_140);
              LocalPopChoice(s_56);
            }
          else
            {
              t = q_56;
              t = SSL_gtr(c_140, d_140);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_140, d_140);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  ATerm h_140 = NULL;
  h_140 = t;
  {
    ATerm u_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_140 = NULL;
        t = term_l_55;
        t = get_config_0_0(t);
        j_140 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_140, term_v_14);
        t = geq_0_0(t);
        t = h_140;
        t = p_117(t);
        LocalPopChoice(w_56);
      }
    else
      {
        t = u_56;
        t = h_140;
      }
  }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm l_140 = NULL,m_140 = NULL,o_140 = NULL,p_140 = NULL;
  t = run_time_0_0(t);
  l_140 = t;
  t = term_q_14;
  t = whoami_0_0(t);
  m_140 = t;
  t = term_r_14;
  o_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_56), l_140), term_y_56), m_140);
  p_140 = t;
  t = SSL_printnl(o_140, p_140);
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_56), l_140), term_y_56), m_140));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_140 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_55;
  q_140 = t;
  t = SSL_exit(q_140);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm y_140 = NULL,z_140 = NULL;
  z_140 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_140;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_140 = ATgetArgument(t, 0);
          {
            ATerm e_77 = NULL,s_32 = NULL;
            t = SSLgetAnnotations(z_140);
            e_77 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_140);
            s_32 = t;
            t = SSLsetAnnotations(s_32, e_77);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_140;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_120 (ATerm), ATerm t)
{
  ATerm a_57 = t;
  int b_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_57;
      t = get_config_0_0(t);
      LocalPopChoice(b_57);
    }
  else
    {
      t = a_57;
      t = fetch_1_0(v_11, t);
    }
  t = f_120(t);
  return(t);
}
ATerm map_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  static ATerm p_141 (ATerm t)
  {
    ATerm m_141 = NULL,n_141 = NULL,o_141 = NULL;
    m_141 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_141;
      }
    else
      {
        ATerm r_77 = NULL,v_77 = NULL,z_77 = NULL,u_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_141 = ATgetFirst((ATermList) t);
            o_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_141);
        r_77 = t;
        t = n_141;
        t = v_102(t);
        v_77 = t;
        t = o_141;
        t = p_141(t);
        z_77 = t;
        t = (ATerm) ATinsert(CheckATermList(z_77), v_77);
        u_32 = t;
        t = SSLsetAnnotations(u_32, r_77);
      }
    return(t);
  }
  t = p_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_141 = NULL,t_141 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_141 = ATgetFirst((ATermList) t);
      t_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_141 = NULL,y_141 = NULL;
        static ATerm o_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_141)), not_null(y_141));
          return(t);
        }
        t = t_141;
        t = g_0(t);
        if(((x_141 != NULL) && (x_141 != t)))
          _fail(t);
        else
          x_141 = t;
        t = s_141;
        t = d_0(t);
        if(((y_141 != NULL) && (y_141 != t)))
          _fail(t);
        else
          y_141 = t;
        t = t_141;
        t = reverse_acc_2_0(d_0, o_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_14;
      t = g_0(t);
    }
  return(t);
}
static ATerm n_12 (ATerm m_59, ATerm n_59, ATerm t)
{
  t = SSL_table_get(m_59, n_59);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm c_142 = NULL,d_142 = NULL,e_142 = NULL,z_32 = NULL;
  e_142 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_142);
  c_142 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_142);
  z_32 = t;
  t = SSLsetAnnotations(z_32, c_142);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm g_142 = NULL;
  g_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_142), term_e_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_142 = NULL,b_142 = NULL;
  ATerm h_57 = t;
  int i_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_56;
      t = get_config_0_0(t);
      LocalPopChoice(i_57);
    }
  else
    {
      t = h_57;
      t = fetch_1_0(q_12, t);
    }
  t = term_j_57;
  t = echo_0_0(t);
  t = term_z_14;
  a_142 = t;
  t = term_a_15;
  b_142 = t;
  t = term_k_57;
  t = n_12(a_142, b_142, t);
  t = reverse_acc_2_0(_id, s_12, t);
  t = map_1_0(t_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_142 = NULL,j_142 = NULL,k_142 = NULL;
  i_142 = t;
  {
    ATerm l_57 = t;
    int m_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_142;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_57 = ATgetFirst((ATermList) t);
                ATerm p_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_142;
          }
        LocalPopChoice(m_57);
      }
    else
      {
        t = l_57;
        t = (ATerm) ATinsert(ATempty, i_142);
      }
  }
  j_142 = t;
  t = term_y_53;
  k_142 = t;
  t = SSL_printnl(k_142, j_142);
  t = i_142;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_56;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm o_142 = NULL,p_142 = NULL;
  t = term_q_57;
  o_142 = t;
  t = term_q_14;
  p_142 = t;
  t = term_r_57;
  t = p_12(o_142, p_142, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_s_57;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm q_142 = NULL,r_142 = NULL,s_142 = NULL,t_142 = NULL;
  t = term_q_57;
  s_142 = t;
  t = term_q_14;
  t_142 = t;
  t = term_r_57;
  t = p_12(s_142, t_142, t);
  t = term_t_57;
  q_142 = t;
  t = term_q_14;
  r_142 = t;
  t = term_x_57;
  t = p_12(q_142, r_142, t);
  t = term_z_57;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_a_58;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_58 = t;
  int d_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_12, a_13, d_13, t);
      LocalPopChoice(d_58);
    }
  else
    {
      t = b_58;
      t = Option_3_0(e_13, f_13, h_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  ATerm u_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL,u_37 = NULL;
  z_142 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_142 = ATgetFirst((ATermList) t);
      w_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_142);
  u_142 = t;
  t = v_142;
  t = t_73(t);
  x_142 = t;
  t = w_142;
  t = u_73(t);
  y_142 = t;
  t = (ATerm) ATinsert(CheckATermList(y_142), x_142);
  u_37 = t;
  t = SSLsetAnnotations(u_37, u_142);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,j_143 = NULL,k_143 = NULL,a_38 = NULL;
  e_143 = t;
  {
    ATerm e_58 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_58;
        t = i_122(t);
        LocalPopChoice(f_58);
      }
    else
      {
        t = e_58;
      }
  }
  t = e_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_143 = ATgetFirst((ATermList) t);
      h_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_143);
  f_143 = t;
  t = term_k_56;
  k_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_56, g_143);
  t = p_12(k_143, g_143, t);
  t = h_143;
  {
    static ATerm u_143 (ATerm t)
    {
      ATerm h_58 = t;
      int i_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_58 = t;
          int k_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_143 = NULL;
              n_143 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_143;
              LocalPopChoice(k_58);
            }
          else
            {
              t = j_58;
              t = i_122(t);
              t = Cons_2_0(_id, u_143, t);
            }
          LocalPopChoice(i_58);
        }
      else
        {
          t = h_58;
          {
            ATerm q_143 = NULL,r_143 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_143 = ATgetFirst((ATermList) t);
                r_143 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_143), (ATerm) ATmakeAppl(sym_Undefined_1, q_143));
          }
        }
      return(t);
    }
    t = u_143(t);
  }
  j_143 = t;
  t = (ATerm) ATinsert(CheckATermList(j_143), (ATerm) ATmakeAppl(sym_Program_1, g_143));
  a_38 = t;
  t = SSLsetAnnotations(a_38, f_143);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm g_144 = NULL;
  g_144 = t;
  if(match_string(t, "--help"))
    {
      t = g_144;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_144;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_144;
        }
    }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm h_144 = NULL,i_144 = NULL;
  t = term_d_57;
  h_144 = t;
  t = term_q_14;
  i_144 = t;
  t = term_l_58;
  t = p_12(h_144, i_144, t);
  t = term_m_58;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_n_58;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm z_143 = NULL,a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL,e_144 = NULL,f_144 = NULL;
  b_144 = t;
  t = term_z_14;
  d_144 = t;
  t = term_a_15;
  e_144 = t;
  t = (ATerm) ATempty;
  f_144 = t;
  t = SSL_table_put(d_144, e_144, f_144);
  t = b_144;
  {
    static ATerm k_13 (ATerm t)
    {
      ATerm o_58 = t;
      int p_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_122(t);
          LocalPopChoice(p_58);
        }
      else
        {
          t = o_58;
          {
            ATerm q_58 = t;
            int r_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_13, m_13, n_13, t);
                LocalPopChoice(r_58);
              }
            else
              {
                t = q_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_13, t);
  }
  {
    ATerm s_58 = t;
    int t_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_144 = NULL;
        p_144 = t;
        {
          ATerm u_58 = t;
          int v_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_78 = NULL;
              t = p_144;
              {
                ATerm w_58 = t;
                int x_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_57;
                    t = get_config_0_0(t);
                    LocalPopChoice(x_58);
                  }
                else
                  {
                    t = w_58;
                    t = fetch_1_0(o_13, t);
                  }
              }
              t = p_144;
              t = default_system_usage_0_0(t);
              t = term_o_55;
              s_78 = t;
              t = SSL_exit(s_78);
              LocalPopChoice(v_58);
            }
          else
            {
              t = u_58;
              {
                ATerm x_78 = NULL;
                t = term_q_57;
                t = get_config_0_0(t);
                t = p_144;
                t = default_system_about_0_0(t);
                t = term_o_55;
                x_78 = t;
                t = SSL_exit(x_78);
              }
            }
        }
        LocalPopChoice(t_58);
      }
    else
      {
        t = s_58;
        {
          ATerm y_58 = t;
          int z_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_144 = NULL,r_144 = NULL,s_144 = NULL;
              static ATerm p_13 (ATerm t)
              {
                ATerm t_144 = NULL,u_144 = NULL,v_144 = NULL,o_38 = NULL;
                v_144 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_144 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_144);
                t_144 = t;
                t = u_144;
                if(((z_143 != NULL) && (z_143 != t)))
                  _fail(t);
                else
                  z_143 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_144);
                o_38 = t;
                t = SSLsetAnnotations(o_38, t_144);
                return(t);
              }
              t = fetch_1_0(p_13, t);
              t = term_r_14;
              r_144 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_143)), term_a_59);
              s_144 = t;
              t = SSL_printnl(r_144, s_144);
              t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_143)), term_a_59));
              t = default_system_usage_0_0(t);
              t = term_v_14;
              q_144 = t;
              t = SSL_exit(q_144);
              LocalPopChoice(z_58);
            }
          else
            {
              t = y_58;
            }
        }
      }
  }
  a_144 = t;
  t = term_z_14;
  c_144 = t;
  t = SSL_table_destroy(c_144);
  t = a_144;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t)
{
  ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL,d_145 = NULL;
  t = parse_options_1_0(h_120, t);
  a_145 = t;
  t = term_p_52;
  d_145 = t;
  t = SSL_table_create(d_145);
  t = term_p_52;
  b_145 = t;
  t = term_r_52;
  c_145 = t;
  t = SSL_table_put(b_145, c_145, a_145);
  t = a_145;
  t = j_120(t);
  {
    ATerm b_59 = t;
    int c_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_120, t);
        LocalPopChoice(c_59);
      }
    else
      {
        t = b_59;
        {
          ATerm d_59 = t;
          int e_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_120(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_59);
            }
          else
            {
              t = d_59;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = if_verbose2_1_0(w_13, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm e_145 = NULL,f_145 = NULL;
  t = term_f_59;
  e_145 = t;
  t = term_q_14;
  f_145 = t;
  t = term_g_59;
  t = p_12(e_145, f_145, t);
  t = term_h_59;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_i_59;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm g_145 = NULL,h_145 = NULL,i_145 = NULL,j_145 = NULL;
  g_145 = t;
  t = term_k_56;
  t = get_config_0_0(t);
  h_145 = t;
  t = term_r_14;
  i_145 = t;
  t = (ATerm) ATinsert(ATempty, h_145);
  j_145 = t;
  t = SSL_printnl(i_145, j_145);
  t = g_145;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm s_119 (ATerm), ATerm t)
{
  static ATerm q_13 (ATerm t)
  {
    ATerm k_59 = t;
    int l_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_119(t);
        LocalPopChoice(l_59);
      }
    else
      {
        t = k_59;
        {
          ATerm o_59 = t;
          int p_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(p_59);
            }
          else
            {
              t = o_59;
              {
                ATerm q_59 = t;
                int t_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(t_59);
                  }
                else
                  {
                    t = q_59;
                    {
                      ATerm u_59 = t;
                      int v_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_13, u_13, v_13, t);
                          LocalPopChoice(v_59);
                        }
                      else
                        {
                          t = u_59;
                          {
                            ATerm w_59 = t;
                            int x_59 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(x_59);
                              }
                            else
                              {
                                t = w_59;
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
  static ATerm s_13 (ATerm t)
  {
    ATerm k_145 = NULL,l_145 = NULL,m_145 = NULL;
    l_145 = t;
    {
      ATerm y_59 = t;
      int z_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_145 != NULL) && (k_145 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_145 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_13, t);
          LocalPopChoice(z_59);
        }
      else
        {
          t = y_59;
          t = term_a_60;
          k_145 = t;
        }
    }
    t = not_null(k_145);
    t = ReadFromFile_0_0(t);
    m_145 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_145, m_145);
    t = apply_strategy_1_0(q_119, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_13, s_119, r_13, s_13, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm n_145 = NULL,o_145 = NULL;
  if(match_cons(t, sym__2))
    {
      n_145 = ATgetArgument(t, 0);
      o_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(n_145, o_145, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm b_60 = t;
  int c_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_14, d_14, f_14, t);
      LocalPopChoice(c_60);
    }
  else
    {
      t = b_60;
      {
        ATerm e_60 = t;
        int f_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(g_14, h_14, j_14, t);
            LocalPopChoice(f_60);
          }
        else
          {
            t = e_60;
            t = ArgOption_3_0(k_14, l_14, n_14, t);
          }
      }
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_h_60;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_i_60;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_c_16;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_j_60;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm p_145 = NULL;
  p_145 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, p_145);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(y_13, z_13, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

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
ATerm term_j_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_a_60;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_h_59;
ATerm term_c_59;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_g_58;
ATerm term_a_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_s_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_m_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_u_55;
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
ATerm term_a_54;
ATerm term_r_53;
ATerm term_d_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_r_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_a_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_h_51;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_x_48;
ATerm term_k_47;
ATerm term_h_47;
ATerm term_d_47;
ATerm term_x_46;
ATerm term_q_46;
ATerm term_n_46;
ATerm term_b_46;
ATerm term_v_45;
ATerm term_l_45;
ATerm term_d_45;
ATerm term_a_45;
ATerm term_w_44;
ATerm term_t_44;
ATerm term_n_44;
ATerm term_i_44;
ATerm term_e_44;
ATerm term_b_44;
ATerm term_x_43;
ATerm term_s_43;
ATerm term_p_43;
ATerm term_k_43;
ATerm term_s_42;
ATerm term_i_42;
ATerm term_f_42;
ATerm term_z_41;
ATerm term_u_41;
ATerm term_p_41;
ATerm term_f_41;
ATerm term_a_41;
ATerm term_w_40;
ATerm term_r_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_g_40;
ATerm term_d_40;
ATerm term_q_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_x_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_y_37;
ATerm term_u_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_j_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_g_36;
ATerm term_e_36;
ATerm term_g_35;
ATerm term_u_34;
ATerm term_y_33;
ATerm term_p_31;
ATerm term_y_29;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_z_26;
ATerm term_s_26;
ATerm term_n_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_r_20;
ATerm term_d_19;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_SOpt_2, term_c_16, term_d_16);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_lit_1, term_j_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_lit_1, term_l_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_SOpt_2, term_g_27, term_h_27);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Arg_1, term_y_14);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeInt(48);
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
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_u_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(sym__2, term_t_55, term_r_14);
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_a_15);
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym__2, term_s_57, term_r_14);
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym__2, term_w_57, term_r_14);
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(sym__2, term_f_57, term_r_14);
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(sym__2, term_h_59, term_r_14);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm l_10 (ATerm y_56, ATerm z_56, ATerm x_56, ATerm t);
ATerm Option_3_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm m_10 (ATerm y_66, ATerm t);
static ATerm h_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm k_126 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm collect_p__1_0 (ATerm x_125 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm e_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm n_95 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm c_38 (ATerm d_33, ATerm k_33, ATerm l_33, ATerm t);
static ATerm o_10 (ATerm r_21, ATerm q_21, ATerm t);
ATerm instantiate_list_1_0 (ATerm d_126 (ATerm), ATerm t);
static ATerm q_10 (ATerm g_24, ATerm h_24, ATerm e_24, ATerm f_24, ATerm t);
static ATerm x_42 (ATerm t_40, ATerm v_40, ATerm y_40, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm f_126 (ATerm), ATerm t);
static ATerm r_10 (ATerm v_46, ATerm w_46, ATerm t);
static ATerm s_10 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm m_25, ATerm n_25, ATerm t);
ATerm genzip_4_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm nzip_1_0 (ATerm n_104 (ATerm), ATerm t);
static ATerm w_10 (ATerm d_25, ATerm e_25, ATerm c_25, ATerm i_25, ATerm t);
static ATerm y_10 (ATerm d_46, ATerm e_46, ATerm t);
static ATerm z_10 (ATerm m_31, ATerm k_31, ATerm l_31, ATerm t);
static ATerm r_2 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm a_11 (ATerm z_63, ATerm y_63, ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm b_125 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
static ATerm b_11 (ATerm n_43, ATerm o_43, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
ATerm _2_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm r_91 (ATerm r_90, ATerm s_90, ATerm t_90, ATerm t);
ATerm number_node_1_0 (ATerm f_125 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm symbol2abox_1_0 (ATerm c_125 (ATerm), ATerm t);
static ATerm u_98 (ATerm e_97, ATerm f_97, ATerm g_97, ATerm t);
static ATerm v_98 (ATerm d_98, ATerm e_98, ATerm f_98, ATerm g_98, ATerm h_98, ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
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
static ATerm j_104 (ATerm w_103, ATerm t);
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
static ATerm r_107 (ATerm n_107, ATerm t);
static ATerm p_6 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
static ATerm f_11 (ATerm s_28, ATerm t_28, ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm q_126 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm y_113 (ATerm e_113, ATerm f_113, ATerm g_113, ATerm t);
static ATerm w_6 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm l_11 (ATerm d_22, ATerm e_22, ATerm c_22, ATerm b_22, ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm m_11 (ATerm k_21, ATerm i_21, ATerm j_21, ATerm l_21, ATerm t);
ATerm filter_1_0 (ATerm f_109 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm m_95 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm a_97 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm o_102 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm n_11 (ATerm w_63, ATerm x_63, ATerm t);
ATerm unescape_chars_1_0 (ATerm q_111 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm z_102 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm unquote_chars_2_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm v_11 (ATerm v_63, ATerm t);
ATerm oncetd_1_0 (ATerm q_96 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
static ATerm y_11 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_34, ATerm g_34, ATerm t);
static ATerm z_11 (ATerm c_106 (ATerm), ATerm d_34, ATerm c_34, ATerm t);
ATerm foldr_3_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
ATerm collect_om_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm a_12 (ATerm u_26, ATerm t_26, ATerm t);
static ATerm d_12 (ATerm c_43, ATerm d_43, ATerm t);
static ATerm e_12 (ATerm k_28, ATerm l_28, ATerm t);
static ATerm g_12 (ATerm p_101 (ATerm), ATerm t_195, ATerm o_28, ATerm t);
static ATerm f_12 (ATerm g_28, ATerm h_28, ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_118 (ATerm), ATerm t);
static ATerm z_133 (ATerm t_133, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_12 (ATerm m_28, ATerm t);
static ATerm i_12 (ATerm e_43, ATerm f_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_135 (ATerm j_134, ATerm t);
static ATerm m_135 (ATerm n_134, ATerm o_134, ATerm p_134, ATerm t);
static ATerm n_135 (ATerm x_134, ATerm y_134, ATerm z_134, ATerm t);
static ATerm j_12 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_102 (ATerm), ATerm t);
static ATerm c_12 (ATerm v_41, ATerm w_41, ATerm t);
ATerm debug_1_0 (ATerm n_101 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm o_116 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_12 (ATerm y_51, ATerm z_51, ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_12 (ATerm x_45, ATerm y_45, ATerm t);
ATerm foldr_2_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_116 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm need_help_1_0 (ATerm d_119 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_101 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm m_12 (ATerm p_58, ATerm q_58, ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_121 (ATerm), ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm parse_options_1_0 (ATerm f_121 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm iowrap_3_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,j_0 = NULL,m_0 = NULL;
  a_0 = t;
  t = term_r_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_s_14;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_14), b_0), term_u_14);
  m_0 = t;
  t = SSL_printnl(j_0, m_0);
  t = term_y_14;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,w_0 = NULL,x_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL;
      t = term_r_14;
      t = o_0(t);
      y_0 = t;
      t = term_z_14;
      z_0 = t;
      t = term_a_15;
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, y_0);
      t = l_10(z_0, a_1, y_0, t);
      _fail(t);
    }
  else
    {
      ATerm g_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_0 = ATgetFirst((ATermList) t);
          u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_0;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_0 = ATgetFirst((ATermList) t);
          x_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_0;
      t = l_0(t);
      t = w_0;
      t = n_0(t);
      g_1 = t;
      t = (ATerm) ATinsert(CheckATermList(x_0), g_1);
    }
  return(t);
}
static ATerm l_10 (ATerm y_56, ATerm z_56, ATerm x_56, ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_56, z_56);
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_15 = ATgetArgument(t, 0);
            ATerm f_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_56, z_56);
        t = m_12(y_56, z_56, t);
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = (ATerm) ATempty;
      }
  }
  l_1 = t;
  t = (ATerm) ATinsert(CheckATermList(l_1), x_56);
  m_1 = t;
  t = SSL_table_put(y_56, z_56, m_1);
  t = j_1;
  return(t);
}
ATerm Option_3_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
      t = term_r_14;
      t = k_0(t);
      w_1 = t;
      t = term_z_14;
      x_1 = t;
      t = term_a_15;
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, w_1);
      t = l_10(x_1, y_1, w_1, t);
      _fail(t);
    }
  else
    {
      ATerm b_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_1 = ATgetFirst((ATermList) t);
          v_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_1;
      t = g_0(t);
      t = term_r_14;
      t = i_0(t);
      b_2 = t;
      t = (ATerm) ATinsert(CheckATermList(v_1), b_2);
    }
  return(t);
}
static ATerm m_10 (ATerm y_66, ATerm t)
{
  ATerm g_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(y_66);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, c_2)));
      LocalPopChoice(l_15);
    }
  else
    {
      t = g_15;
      {
        ATerm d_2 = NULL;
        t = SSL_concat_strings(y_66);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, d_2);
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm m_15 = t;
  if((PushChoice() == 0))
    {
      ATerm l_2 = NULL;
      l_2 = t;
      if(match_int(t, 9))
        {
          t = l_2;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = l_2;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = l_2;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = l_2;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_15;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL;
  g_2 = t;
  {
    ATerm t_15 = t;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,d_7 = NULL;
        k_2 = t;
        if(match_cons(t, sym_layout_1))
          {
            j_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_2);
        i_2 = t;
        t = j_2;
        if(!(match_cons(t, sym_layout_place_holder_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_layout_1, j_2);
        d_7 = t;
        t = SSLsetAnnotations(d_7, i_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_15;
      }
  }
  if(match_cons(t, sym_layout_1))
    {
      f_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_concat_strings(f_2);
  h_2 = t;
  t = SSL_explode_string(h_2);
  t = filter_1_0(h_0, t);
  {
    ATerm u_15 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_15;
      }
  }
  t = g_2;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm v_15 = t;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,f_7 = NULL;
      o_2 = t;
      if(match_cons(t, sym_layout_1))
        {
          n_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_2);
      m_2 = t;
      t = n_2;
      if(!(match_cons(t, sym_layout_place_holder_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_layout_1, n_2);
      f_7 = t;
      t = SSLsetAnnotations(f_7, m_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_15;
    }
  return(t);
}
static ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm t)
{
  ATerm m_3 = NULL,h_7 = NULL;
  t = SSLgetAnnotations(z_2);
  m_3 = t;
  t = x_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
  h_7 = t;
  t = SSLsetAnnotations(h_7, m_3);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm InsLayout_1_0 (ATerm k_126 (ATerm), ATerm t)
{
  static ATerm l_5 (ATerm t)
  {
    static ATerm n_5 (ATerm q_3, ATerm r_3, ATerm s_3, ATerm t)
    {
      ATerm u_3 = NULL,a_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
      t = k_126(t);
      if(match_cons(t, sym__2))
        {
          u_3 = ATgetArgument(t, 0);
          a_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_3), a_4);
      return(t);
    }
    static ATerm p_5 (ATerm d_4, ATerm e_4, ATerm f_4, ATerm g_4, ATerm i_4, ATerm t)
    {
      ATerm k_4 = NULL,l_4 = NULL,n_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_4, g_4);
      t = k_126(t);
      if(match_cons(t, sym__2))
        {
          k_4 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
            if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
              {
                l_4 = ATgetFirst((ATermList) w_15);
                q_4 = (ATerm) ATgetNext((ATermList) w_15);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_4), e_4), q_4);
      t = l_5(t);
      if(match_cons(t, sym__2))
        {
          ATerm x_15 = ATgetArgument(t, 0);
          if(((ATgetType(x_15) == AT_LIST) && !(ATisEmpty(x_15))))
            {
              n_4 = ATgetFirst((ATermList) x_15);
              s_4 = (ATerm) ATgetNext((ATermList) x_15);
            }
          else
            _fail(t);
          r_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 = NULL,u_4 = NULL;
            t = term_b_16;
            t = get_options_0_0(t);
            t = oncetd_1_0(p_0, t);
            t = l_4;
            t = has_layout_0_0(t);
            t = l_4;
            if(match_cons(t, sym_layout_1))
              {
                u_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_10(u_4, t);
            t_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_4))), t_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_4))))), r_4);
            LocalPopChoice(a_16);
          }
        else
          {
            t = y_15;
            {
              ATerm f_16 = t;
              int g_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_4 = NULL,x_4 = NULL;
                  ATerm h_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm y_4 = NULL;
                      y_4 = t;
                      t = term_b_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(q_0, t);
                      t = y_4;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = h_16;
                    }
                  t = l_4;
                  t = has_significant_layout_0_0(t);
                  t = l_4;
                  if(match_cons(t, sym_layout_1))
                    {
                      x_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_10(x_4, t);
                  w_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(s_4), n_4), w_4), k_4), r_4);
                  LocalPopChoice(g_16);
                }
              else
                {
                  t = f_16;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(s_4), n_4), k_4), r_4);
                }
            }
          }
      }
      return(t);
    }
    ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,h_5 = NULL,j_5 = NULL;
    a_5 = t;
    if(match_cons(t, sym__2))
      {
        b_5 = ATgetArgument(t, 0);
        j_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_5;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_5 = ATgetFirst((ATermList) t);
        d_5 = (ATerm) ATgetNext((ATermList) t);
        t = d_5;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_5(b_5, j_5, a_5, t);
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = n_5(c_5, j_5, a_5, t);
              }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_5 = ATgetFirst((ATermList) t);
                h_5 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm l_16 = t;
                  int m_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_5(b_5, j_5, a_5, t);
                      LocalPopChoice(m_16);
                    }
                  else
                    {
                      t = l_16;
                      t = p_5(c_5, f_5, h_5, j_5, a_5, t);
                    }
                }
              }
            else
              {
                t = m_5(b_5, j_5, a_5, t);
              }
          }
      }
    else
      {
        t = m_5(b_5, j_5, a_5, t);
      }
    return(t);
  }
  t = l_5(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = t;
      if((PushChoice() == 0))
        {
          ATerm b_23 = NULL,d_23 = NULL,e_23 = NULL,o_7 = NULL;
          e_23 = t;
          if(match_cons(t, sym_layout_1))
            {
              d_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_23);
          b_23 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, d_23);
          o_7 = t;
          t = SSLsetAnnotations(o_7, b_23);
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
        ATerm b_25 = NULL,h_25 = NULL;
        b_25 = t;
        if(match_cons(t, sym_layout_1))
          {
            h_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm q_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_17 = NULL,l_17 = NULL,n_17 = NULL,p_7 = NULL;
              t = SSLgetAnnotations(b_25);
              l_17 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, h_25);
              p_7 = t;
              t = SSLsetAnnotations(p_7, l_17);
              n_17 = t;
              t = term_b_16;
              t = get_options_0_0(t);
              t = oncetd_1_0(s_0, t);
              t = n_17;
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  d_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_10(d_17, t);
              LocalPopChoice(r_16);
            }
          else
            {
              t = q_16;
              {
                ATerm x_17 = NULL,y_17 = NULL,q_7 = NULL;
                t = SSLgetAnnotations(b_25);
                y_17 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, h_25);
                q_7 = t;
                t = SSLsetAnnotations(q_7, y_17);
                {
                  ATerm s_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm b_18 = NULL;
                      b_18 = t;
                      t = term_b_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(v_0, t);
                      t = b_18;
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
                    x_17 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_10(x_17, t);
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
static ATerm v_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,j_25 = NULL,l_25 = NULL,o_25 = NULL,n_7 = NULL,j_7 = NULL;
  c_7 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_7);
  u_6 = t;
  t = a_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_6 = ATgetFirst((ATermList) t);
      {
        ATerm t_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_16 = ATgetFirst((ATermList) t);
      b_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_6, b_7);
  j_7 = t;
  t = SSLsetAnnotations(j_7, u_6);
  {
    static ATerm h_26 (ATerm t)
    {
      static ATerm i_27 (ATerm t_14, ATerm v_14, ATerm w_14, ATerm t)
      {
        ATerm e_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,m_7 = NULL,l_7 = NULL;
        t = SSLgetAnnotations(t_14);
        e_15 = t;
        t = v_14;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_15 = ATgetFirst((ATermList) t);
            j_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_14);
        h_15 = t;
        t = (ATerm) ATinsert(CheckATermList(j_15), i_15);
        l_7 = t;
        t = SSLsetAnnotations(l_7, h_15);
        k_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_15, w_14);
        m_7 = t;
        t = SSLsetAnnotations(m_7, e_15);
        t = InsLayout_1_0(h_26, t);
        return(t);
      }
      ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
      s_15 = t;
      if(match_cons(t, sym__2))
        {
          q_15 = ATgetArgument(t, 0);
          r_15 = ATgetArgument(t, 1);
          t = q_15;
          if(match_cons(t, sym_H_2))
            {
              o_15 = ATgetArgument(t, 0);
              p_15 = ATgetArgument(t, 1);
              {
                ATerm v_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_1 = NULL,i_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                    t = InsLayout_1_0(h_26, t);
                    if(match_cons(t, sym__2))
                      {
                        h_1 = ATgetArgument(t, 0);
                        i_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, o_15, h_1), i_1);
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
                          t = i_27(s_15, q_15, r_15, t);
                          LocalPopChoice(y_16);
                        }
                      else
                        {
                          t = x_16;
                          t = s_15;
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  o_15 = ATgetArgument(t, 0);
                  p_15 = ATgetArgument(t, 1);
                  {
                    ATerm z_16 = t;
                    int a_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_2 = NULL,w_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                        t = InsLayout_1_0(h_26, t);
                        if(match_cons(t, sym__2))
                          {
                            v_2 = ATgetArgument(t, 0);
                            w_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, o_15, v_2), w_2);
                        LocalPopChoice(a_17);
                      }
                    else
                      {
                        t = z_16;
                        {
                          ATerm b_17 = t;
                          int c_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_27(s_15, q_15, r_15, t);
                              LocalPopChoice(c_17);
                            }
                          else
                            {
                              t = b_17;
                              t = s_15;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      o_15 = ATgetArgument(t, 0);
                      p_15 = ATgetArgument(t, 1);
                      {
                        ATerm e_17 = t;
                        int f_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_5 = NULL,u_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                            t = InsLayout_1_0(h_26, t);
                            if(match_cons(t, sym__2))
                              {
                                t_5 = ATgetArgument(t, 0);
                                u_5 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, o_15, t_5), u_5);
                            LocalPopChoice(f_17);
                          }
                        else
                          {
                            t = e_17;
                            {
                              ATerm g_17 = t;
                              int h_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_27(s_15, q_15, r_15, t);
                                  LocalPopChoice(h_17);
                                }
                              else
                                {
                                  t = g_17;
                                  t = s_15;
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          o_15 = ATgetArgument(t, 0);
                          p_15 = ATgetArgument(t, 1);
                          n_15 = ATgetArgument(t, 2);
                          {
                            ATerm i_17 = t;
                            int j_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_6 = NULL,i_6 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, n_15, r_15);
                                t = InsLayout_1_0(h_26, t);
                                if(match_cons(t, sym__2))
                                  {
                                    h_6 = ATgetArgument(t, 0);
                                    i_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, o_15, p_15, h_6), i_6);
                                LocalPopChoice(j_17);
                              }
                            else
                              {
                                t = i_17;
                                {
                                  ATerm k_17 = t;
                                  int m_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_27(s_15, q_15, r_15, t);
                                      LocalPopChoice(m_17);
                                    }
                                  else
                                    {
                                      t = k_17;
                                      t = s_15;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              o_15 = ATgetArgument(t, 0);
                              p_15 = ATgetArgument(t, 1);
                              {
                                ATerm o_17 = t;
                                int p_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_7 = NULL,a_8 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                                    t = InsLayout_1_0(h_26, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        z_7 = ATgetArgument(t, 0);
                                        a_8 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, o_15, z_7), a_8);
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
                                          t = i_27(s_15, q_15, r_15, t);
                                          LocalPopChoice(r_17);
                                        }
                                      else
                                        {
                                          t = q_17;
                                          t = s_15;
                                        }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  o_15 = ATgetArgument(t, 0);
                                  p_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_17 = t;
                                    int t_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_8 = NULL,o_8 = NULL,u_8 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, o_15, r_15);
                                        t = InsLayout_1_0(h_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            l_8 = ATgetArgument(t, 0);
                                            {
                                              ATerm u_17 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                                        t = InsLayout_1_0(h_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            o_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, l_8, o_8), u_8);
                                        LocalPopChoice(t_17);
                                      }
                                    else
                                      {
                                        t = s_17;
                                        {
                                          ATerm v_17 = t;
                                          int w_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = i_27(s_15, q_15, r_15, t);
                                              LocalPopChoice(w_17);
                                            }
                                          else
                                            {
                                              t = v_17;
                                              t = s_15;
                                            }
                                        }
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      o_15 = ATgetArgument(t, 0);
                                      p_15 = ATgetArgument(t, 1);
                                      {
                                        ATerm z_17 = t;
                                        int a_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm f_10 = NULL,i_10 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                                            t = InsLayout_1_0(h_26, t);
                                            if(match_cons(t, sym__2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                i_10 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, o_15, f_10), i_10);
                                            LocalPopChoice(a_18);
                                          }
                                        else
                                          {
                                            t = z_17;
                                            {
                                              ATerm c_18 = t;
                                              int d_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = i_27(s_15, q_15, r_15, t);
                                                  LocalPopChoice(d_18);
                                                }
                                              else
                                                {
                                                  t = c_18;
                                                  t = s_15;
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          o_15 = ATgetArgument(t, 0);
                                          p_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_18 = t;
                                            int f_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_11 = NULL,t_11 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                                                t = InsLayout_1_0(h_26, t);
                                                if(match_cons(t, sym__2))
                                                  {
                                                    r_11 = ATgetArgument(t, 0);
                                                    t_11 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, o_15, r_11), t_11);
                                                LocalPopChoice(f_18);
                                              }
                                            else
                                              {
                                                t = e_18;
                                                {
                                                  ATerm g_18 = t;
                                                  int h_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = i_27(s_15, q_15, r_15, t);
                                                      LocalPopChoice(h_18);
                                                    }
                                                  else
                                                    {
                                                      t = g_18;
                                                      t = s_15;
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              o_15 = ATgetArgument(t, 0);
                                              p_15 = ATgetArgument(t, 1);
                                              {
                                                ATerm i_18 = t;
                                                int j_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm o_13 = NULL,q_13 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                                                    t = InsLayout_1_0(h_26, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        o_13 = ATgetArgument(t, 0);
                                                        q_13 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, o_15, o_13), q_13);
                                                    LocalPopChoice(j_18);
                                                  }
                                                else
                                                  {
                                                    t = i_18;
                                                    {
                                                      ATerm k_18 = t;
                                                      int l_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = i_27(s_15, q_15, r_15, t);
                                                          LocalPopChoice(l_18);
                                                        }
                                                      else
                                                        {
                                                          t = k_18;
                                                          t = s_15;
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  o_15 = ATgetArgument(t, 0);
                                                  p_15 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm n_18 = t;
                                                    int o_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm z_15 = NULL,i_16 = NULL;
                                                        t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
                                                        t = InsLayout_1_0(h_26, t);
                                                        if(match_cons(t, sym__2))
                                                          {
                                                            z_15 = ATgetArgument(t, 0);
                                                            i_16 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, o_15, z_15), i_16);
                                                        LocalPopChoice(o_18);
                                                      }
                                                    else
                                                      {
                                                        t = n_18;
                                                        {
                                                          ATerm p_18 = t;
                                                          int q_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = i_27(s_15, q_15, r_15, t);
                                                              LocalPopChoice(q_18);
                                                            }
                                                          else
                                                            {
                                                              t = p_18;
                                                              t = s_15;
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm r_18 = t;
                                                  int s_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = i_27(s_15, q_15, r_15, t);
                                                      LocalPopChoice(s_18);
                                                    }
                                                  else
                                                    {
                                                      t = r_18;
                                                      t = s_15;
                                                    }
                                                }
                                            }
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
          t = s_15;
        }
      return(t);
    }
    t = h_26(t);
  }
  t_6 = t;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_6);
  o_6 = t;
  t = q_6;
  {
    ATerm t_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_18 = ATgetFirst((ATermList) t);
                ATerm x_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, q_6);
        LocalPopChoice(v_18);
      }
    else
      {
        t = t_18;
      }
  }
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_6, r_6);
  n_7 = t;
  t = SSLsetAnnotations(n_7, o_6);
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      {
        ATerm y_18 = ATgetArgument(t, 1);
        if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
          {
            n_6 = ATgetFirst((ATermList) y_18);
            {
              ATerm z_18 = (ATerm) ATgetNext((ATermList) y_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_6), m_6), l_6);
  t = filter_1_0(r_0, t);
  t = flat_list_0_0(t);
  o_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_25 = ATgetFirst((ATermList) t);
      l_25 = (ATerm) ATgetNext((ATermList) t);
      t = l_25;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_25;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), o_25);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), o_25);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm x_125 (ATerm), ATerm t)
{
  static ATerm m_27 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL;
        t = x_125(t);
        l_27 = t;
        t = (ATerm) ATinsert(ATempty, l_27);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm m_18 = NULL,u_18 = NULL;
          u_18 = t;
          t = SSL_explode_term(u_18);
          if(match_cons(t, sym__2))
            {
              ATerm c_19 = ATgetArgument(t, 0);
              m_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_18;
          t = foldr_3_0(b_1, conc_0_0, m_27, t);
        }
      }
    return(t);
  }
  t = m_27(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,q_8 = NULL;
  v_27 = t;
  if(match_cons(t, sym_amb_1))
    {
      u_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_27);
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, u_27);
  q_8 = t;
  t = SSLsetAnnotations(q_8, t_27);
  t = term_s_14;
  o_27 = t;
  t = (ATerm) ATinsert(ATempty, term_d_19);
  s_27 = t;
  t = SSL_printnl(o_27, s_27);
  t = term_y_14;
  n_27 = t;
  t = SSL_exit(n_27);
  t = (ATerm) ATinsert(ATempty, term_d_19);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_30;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_30 = ATgetFirst((ATermList) t);
          k_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_20 = NULL,j_20 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(i_30);
            b_20 = t;
            t = j_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_30;
            t = flat_list_0_0(t);
            j_20 = t;
            t = (ATerm) ATinsert(CheckATermList(j_20), j_30);
            t_8 = t;
            t = SSLsetAnnotations(t_8, b_20);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            {
              ATerm h_19 = t;
              int i_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,e_21 = NULL,v_8 = NULL;
                  t = SSLgetAnnotations(i_30);
                  a_21 = t;
                  t = j_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = j_30;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm j_19 = ATgetFirst((ATermList) t);
                          ATerm k_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = j_30;
                    }
                  t = (ATerm) ATinsert(CheckATermList(k_30), j_30);
                  v_8 = t;
                  t = SSLsetAnnotations(v_8, a_21);
                  e_21 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_20 = ATgetFirst((ATermList) t);
                      {
                        ATerm l_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = e_21;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm m_19 = ATgetFirst((ATermList) t);
                      y_20 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, z_20, y_20);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(i_19);
                }
              else
                {
                  t = h_19;
                  {
                    ATerm w_21 = NULL,z_21 = NULL,w_8 = NULL;
                    t = SSLgetAnnotations(i_30);
                    w_21 = t;
                    t = k_30;
                    t = flat_list_0_0(t);
                    z_21 = t;
                    t = (ATerm) ATinsert(CheckATermList(z_21), j_30);
                    w_8 = t;
                    t = SSLsetAnnotations(w_8, w_21);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      s_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
      {
        ATerm v_30 = NULL,x_30 = NULL;
        t = term_r_14;
        t = e_0(t);
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_30, x_30);
        t = index_0_0(t);
        v_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_30, v_30);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm z_30 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          s_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_r_14;
      t = e_0(t);
      z_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_30, z_30);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    t = bottomup_1_0(n_95, t);
    return(t);
  }
  t = SRTS_all(c_1, t);
  t = n_95(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  b_33 = t;
  if(match_cons(t, sym_Arg_1))
    {
      c_33 = ATgetArgument(t, 0);
      {
        ATerm k_22 = NULL,b_9 = NULL;
        t = SSLgetAnnotations(b_33);
        k_22 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, c_33);
        b_9 = t;
        t = SSLsetAnnotations(b_9, k_22);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          c_33 = ATgetArgument(t, 0);
          a_33 = ATgetArgument(t, 1);
          {
            ATerm y_22 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(b_33);
            y_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, c_33, a_33);
            d_9 = t;
            t = SSLsetAnnotations(d_9, y_22);
          }
        }
      else
        {
          ATerm u_23 = NULL,e_9 = NULL;
          if(match_cons(t, sym_S_1))
            {
              c_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_33);
          u_23 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, c_33);
          e_9 = t;
          t = SSLsetAnnotations(e_9, u_23);
        }
    }
  return(t);
}
static ATerm c_38 (ATerm d_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm e_34 = NULL,g_9 = NULL;
  t = SSLgetAnnotations(d_33);
  e_34 = t;
  t = k_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
  g_9 = t;
  t = SSLsetAnnotations(g_9, e_34);
  return(t);
}
static ATerm o_10 (ATerm r_21, ATerm q_21, ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,c_32 = NULL,f_9 = NULL;
  w_31 = t;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_31);
  y_31 = t;
  t = z_31;
  t = collect_p__1_0(d_1, t);
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_32, a_32);
  f_9 = t;
  t = SSLsetAnnotations(f_9, y_31);
  {
    static ATerm a_38 (ATerm t)
    {
      static ATerm d_38 (ATerm l_34, ATerm m_34, ATerm n_34, ATerm o_34, ATerm t)
      {
        ATerm r_34 = NULL,v_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, m_34, o_34);
        t = a_38(t);
        if(match_cons(t, sym__2))
          {
            r_34 = ATgetArgument(t, 0);
            v_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_34), (ATerm) ATmakeAppl(sym_Arg_1, l_34)), (ATerm) ATinsert(CheckATermList(v_34), n_34));
        return(t);
      }
      static ATerm f_38 (ATerm c_35, ATerm h_35, ATerm i_35, ATerm l_35, ATerm m_35, ATerm t)
      {
        ATerm y_35 = NULL,b_36 = NULL;
        t = h_35;
        if(((u_31 != NULL) && (u_31 != t)))
          _fail(t);
        else
          u_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_35, m_35);
        t = a_38(t);
        if(match_cons(t, sym__2))
          {
            y_35 = ATgetArgument(t, 0);
            b_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_35), (ATerm) ATmakeAppl(sym_Arg2_2, c_35, h_35)), (ATerm) ATinsert(CheckATermList(b_36), l_35));
        return(t);
      }
      static ATerm g_38 (ATerm f_36, ATerm h_36, ATerm i_36, ATerm t)
      {
        ATerm o_36 = NULL,r_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, h_36, i_36);
        t = a_38(t);
        if(match_cons(t, sym__2))
          {
            o_36 = ATgetArgument(t, 0);
            r_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_36), f_36), r_36);
        return(t);
      }
      ATerm y_36 = NULL,z_36 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,i_37 = NULL,l_37 = NULL,m_37 = NULL;
      b_37 = t;
      if(match_cons(t, sym__2))
        {
          c_37 = ATgetArgument(t, 0);
          i_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_37 = ATgetFirst((ATermList) t);
          m_37 = (ATerm) ATgetNext((ATermList) t);
          t = c_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_37 = ATgetFirst((ATermList) t);
              e_37 = (ATerm) ATgetNext((ATermList) t);
              t = d_37;
              if(match_cons(t, sym_Arg_1))
                {
                  y_36 = ATgetArgument(t, 0);
                  {
                    ATerm n_19 = t;
                    int o_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_38(b_37, c_37, i_37, t);
                        LocalPopChoice(o_19);
                      }
                    else
                      {
                        t = n_19;
                        {
                          ATerm p_19 = t;
                          int q_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_38(y_36, e_37, l_37, m_37, t);
                              LocalPopChoice(q_19);
                            }
                          else
                            {
                              t = p_19;
                              t = g_38(d_37, e_37, m_37, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      y_36 = ATgetArgument(t, 0);
                      z_36 = ATgetArgument(t, 1);
                      {
                        ATerm r_19 = t;
                        int s_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_38(b_37, c_37, i_37, t);
                            LocalPopChoice(s_19);
                          }
                        else
                          {
                            t = r_19;
                            {
                              ATerm t_19 = t;
                              int v_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_38(y_36, z_36, e_37, l_37, m_37, t);
                                  LocalPopChoice(v_19);
                                }
                              else
                                {
                                  t = t_19;
                                  t = g_38(d_37, e_37, m_37, t);
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
                          t = c_38(b_37, c_37, i_37, t);
                          LocalPopChoice(x_19);
                        }
                      else
                        {
                          t = w_19;
                          t = g_38(d_37, e_37, m_37, t);
                        }
                    }
                }
            }
          else
            {
              t = c_38(b_37, c_37, i_37, t);
            }
        }
      else
        {
          t = c_37;
          t = c_38(b_37, c_37, i_37, t);
        }
      return(t);
    }
    t = a_38(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_21, v_31);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  static ATerm p_39 (ATerm t)
  {
    ATerm h_39 = NULL,i_39 = NULL,k_39 = NULL;
    h_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_39;
      }
    else
      {
        ATerm p_24 = NULL,q_24 = NULL,s_24 = NULL,o_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_39 = ATgetFirst((ATermList) t);
            k_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_39;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_19 = ATgetFirst((ATermList) t);
            ATerm a_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_39);
        p_24 = t;
        t = term_r_14;
        t = d_126(t);
        {
          static ATerm e_1 (ATerm t)
          {
            ATerm c_20 = t;
            int d_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_20 = t;
                int f_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm f_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, i_39);
                      return(t);
                    }
                    t = Instantiate_1_0(f_1, t);
                    LocalPopChoice(f_20);
                  }
                else
                  {
                    t = e_20;
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
          t = bottomup_1_0(e_1, t);
        }
        s_24 = t;
        t = k_39;
        t = p_39(t);
        q_24 = t;
        t = (ATerm) ATinsert(CheckATermList(q_24), s_24);
        o_9 = t;
        t = SSLsetAnnotations(o_9, p_24);
      }
    return(t);
  }
  t = p_39(t);
  return(t);
}
static ATerm q_10 (ATerm g_24, ATerm h_24, ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm u_39 = NULL,w_39 = NULL,x_39 = NULL,i_40 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = not_null(w_39);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, e_24, (ATerm) ATinsert(ATempty, f_24));
  t = conc_0_0(t);
  x_39 = t;
  t = g_24;
  if(match_cons(t, sym_iter_1))
    {
      i_40 = ATgetArgument(t, 0);
      {
        ATerm f_25 = NULL,q_9 = NULL;
        t = SSLgetAnnotations(g_24);
        f_25 = t;
        t = i_40;
        u_39 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, i_40);
        q_9 = t;
        t = SSLsetAnnotations(q_9, f_25);
      }
    }
  else
    {
      ATerm q_25 = NULL,r_9 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          i_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_24);
      q_25 = t;
      t = i_40;
      u_39 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, i_40);
      r_9 = t;
      t = SSLsetAnnotations(r_9, q_25);
    }
  t = (ATerm) ATmakeAppl(sym__2, g_24, x_39);
  t = get_pp_entry_0_0(t);
  if(((w_39 != NULL) && (w_39 != t)))
    _fail(t);
  else
    w_39 = t;
  t = h_24;
  {
    static ATerm k_1 (ATerm t)
    {
      ATerm j_40 = NULL;
      j_40 = t;
      t = (ATerm) ATmakeAppl(sym__4, u_39, j_40, x_39, term_y_14);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  t = instantiate_list_1_0(n_1, t);
  return(t);
}
static ATerm x_42 (ATerm t_40, ATerm v_40, ATerm y_40, ATerm t)
{
  ATerm e_41 = NULL,v_9 = NULL;
  t = SSLgetAnnotations(y_40);
  e_41 = t;
  t = v_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_40), t_40);
  v_9 = t;
  t = SSLsetAnnotations(v_9, e_41);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  static ATerm t_42 (ATerm t)
  {
    static ATerm y_42 (ATerm l_41, ATerm m_41, ATerm n_41, ATerm o_41, ATerm t)
    {
      ATerm a_42 = NULL,b_42 = NULL,d_42 = NULL,w_9 = NULL;
      t = o_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm g_20 = ATgetFirst((ATermList) t);
          ATerm h_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_41);
      a_42 = t;
      t = term_r_14;
      t = f_126(t);
      {
        static ATerm o_1 (ATerm t)
        {
          ATerm i_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_20 = t;
              int m_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm p_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, m_41), l_41);
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
              t = i_20;
            }
          return(t);
        }
        t = bottomup_1_0(o_1, t);
      }
      d_42 = t;
      t = n_41;
      t = t_42(t);
      b_42 = t;
      t = (ATerm) ATinsert(CheckATermList(b_42), d_42);
      w_9 = t;
      t = SSLsetAnnotations(w_9, a_42);
      return(t);
    }
    ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,o_42 = NULL,p_42 = NULL;
    j_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_42 = ATgetFirst((ATermList) t);
            l_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_42;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_42 = ATgetFirst((ATermList) t);
            p_42 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm n_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_42(k_42, l_42, j_42, t);
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = n_20;
                  t = y_42(k_42, o_42, p_42, j_42, t);
                }
            }
          }
        else
          {
            t = x_42(k_42, l_42, j_42, t);
          }
      }
    return(t);
  }
  t = t_42(t);
  return(t);
}
static ATerm r_10 (ATerm v_46, ATerm w_46, ATerm t)
{
  t = SSL_mod(v_46, w_46);
  return(t);
}
static ATerm s_10 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm m_25, ATerm n_25, ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_43 = NULL,u_43 = NULL,y_43 = NULL,h_44 = NULL;
      t = term_r_20;
      y_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_25, term_r_20);
      t = r_10(m_25, y_43, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_r_14;
      t = p_93(t);
      t_43 = t;
      t = term_r_14;
      t = q_93(t);
      u_43 = t;
      t = (ATerm) ATmakeAppl(sym__4, t_43, n_25, u_43, term_r_20);
      t = symbol2abox_0_0(t);
      h_44 = t;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_44;
            {
              ATerm u_20 = t;
              if((PushChoice() == 0))
                {
                  ATerm x_25 = NULL;
                  x_25 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = x_25;
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
                      t = x_25;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_20;
                }
            }
            t = (ATerm) ATinsert(ATempty, h_44);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = h_44;
          }
      }
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm q_44 = NULL,r_44 = NULL,e_45 = NULL;
        t = term_r_14;
        t = o_93(t);
        q_44 = t;
        t = term_r_14;
        t = q_93(t);
        r_44 = t;
        t = (ATerm) ATmakeAppl(sym__4, q_44, n_25, r_44, term_y_14);
        t = symbol2abox_0_0(t);
        e_45 = t;
        {
          ATerm x_20 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_45;
              {
                ATerm c_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_26 = NULL;
                    f_26 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = f_26;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm d_21 = ATgetFirst((ATermList) t);
                            ATerm f_21 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = f_26;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_21;
                  }
              }
              t = (ATerm) ATinsert(ATempty, e_45);
              LocalPopChoice(b_21);
            }
          else
            {
              t = x_20;
              t = e_45;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm t)
{
  static ATerm t_45 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_104(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm k_45 = NULL,m_45 = NULL,n_45 = NULL,p_45 = NULL,r_45 = NULL,s_45 = NULL,e_10 = NULL;
          t = c_104(t);
          s_45 = t;
          if(match_cons(t, sym__2))
            {
              m_45 = ATgetArgument(t, 0);
              n_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_45);
          k_45 = t;
          t = m_45;
          t = e_104(t);
          p_45 = t;
          t = n_45;
          t = t_45(t);
          r_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_45, r_45);
          e_10 = t;
          t = SSLsetAnnotations(e_10, k_45);
          t = d_104(t);
        }
      }
    return(t);
  }
  t = t_45(t);
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
  ATerm a_46 = NULL,c_46 = NULL,f_46 = NULL,g_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      a_46 = ATgetArgument(t, 0);
      {
        ATerm o_21 = ATgetArgument(t, 1);
        if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
          {
            c_46 = ATgetFirst((ATermList) o_21);
            f_46 = (ATerm) ATgetNext((ATermList) o_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_y_14;
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_46, term_y_14);
  t = k_12(a_46, j_46, t);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_46, c_46), (ATerm) ATmakeAppl(sym__2, g_46, f_46));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL;
  if(match_cons(t, sym__2))
    {
      l_46 = ATgetArgument(t, 0);
      m_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_46), l_46);
  return(t);
}
ATerm nzip_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, u_45);
  t = genzip_4_0(q_1, r_1, s_1, n_104, t);
  return(t);
}
static ATerm w_10 (ATerm d_25, ATerm e_25, ATerm c_25, ATerm i_25, ATerm t)
{
  ATerm u_46 = NULL,z_46 = NULL,b_47 = NULL,c_47 = NULL,x_47 = NULL,y_47 = NULL;
  static ATerm q_2 (ATerm t)
  {
    t = not_null(b_47);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, c_25, (ATerm) ATinsert(ATempty, i_25));
  t = conc_0_0(t);
  c_47 = t;
  t = d_25;
  if(match_cons(t, sym_iter_sep_2))
    {
      x_47 = ATgetArgument(t, 0);
      y_47 = ATgetArgument(t, 1);
      {
        ATerm m_26 = NULL,h_10 = NULL;
        t = SSLgetAnnotations(d_25);
        m_26 = t;
        t = x_47;
        u_46 = t;
        t = y_47;
        z_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, x_47, y_47);
        h_10 = t;
        t = SSLsetAnnotations(h_10, m_26);
      }
    }
  else
    {
      ATerm c_27 = NULL,t_10 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          x_47 = ATgetArgument(t, 0);
          y_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_25);
      c_27 = t;
      t = x_47;
      u_46 = t;
      t = y_47;
      z_46 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, x_47, y_47);
      t_10 = t;
      t = SSLsetAnnotations(t_10, c_27);
    }
  t = (ATerm) ATmakeAppl(sym__2, d_25, c_47);
  t = get_pp_entry_0_0(t);
  if(((b_47 != NULL) && (b_47 != t)))
    _fail(t);
  else
    b_47 = t;
  t = e_25;
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm a_48 = NULL,b_48 = NULL;
      static ATerm z_1 (ATerm t)
      {
        t = u_46;
        return(t);
      }
      static ATerm a_2 (ATerm t)
      {
        t = z_46;
        return(t);
      }
      static ATerm e_2 (ATerm t)
      {
        t = c_47;
        return(t);
      }
      static ATerm p_2 (ATerm t)
      {
        t = i_25;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          a_48 = ATgetArgument(t, 0);
          b_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_10(z_1, a_2, e_2, p_2, a_48, b_48, t);
      return(t);
    }
    t = nzip_1_0(u_1, t);
  }
  t = instantiate_sep_list_1_0(q_2, t);
  return(t);
}
static ATerm y_10 (ATerm d_46, ATerm e_46, ATerm t)
{
  ATerm p_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_46, e_46);
      LocalPopChoice(s_21);
    }
  else
    {
      t = p_21;
      t = SSL_subtr(d_46, e_46);
    }
  return(t);
}
static ATerm z_10 (ATerm m_31, ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm i_48 = NULL,k_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_31, term_r_20);
  t = geq_0_0(t);
  t = term_y_14;
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_31, term_y_14);
  t = y_10(m_31, k_48, t);
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_48, l_31);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm r_48 = NULL,u_48 = NULL,w_48 = NULL;
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      {
        ATerm t_21 = ATgetArgument(t, 1);
        if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
          {
            u_48 = ATgetFirst((ATermList) t_21);
            w_48 = (ATerm) ATgetNext((ATermList) t_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_10(r_48, u_48, w_48, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm p_48 = NULL;
  t = repeat_2_0(r_2, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm u_21 = ATgetArgument(t, 0);
      if(((ATgetType(u_21) != AT_INT) || (ATgetInt((ATermInt) u_21) != 1)))
        _fail(t);
      {
        ATerm v_21 = ATgetArgument(t, 1);
        if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
          {
            p_48 = ATgetFirst((ATermList) v_21);
            {
              ATerm x_21 = (ATerm) ATgetNext((ATermList) v_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_48;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm y_21 = t;
  if((PushChoice() == 0))
    {
      ATerm k_69 = NULL,l_69 = NULL,n_70 = NULL,h_11 = NULL;
      n_70 = t;
      if(match_cons(t, sym_lit_1))
        {
          l_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_70);
      k_69 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, l_69);
      h_11 = t;
      t = SSLsetAnnotations(h_11, k_69);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_21;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_22 = t;
  if((PushChoice() == 0))
    {
      ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,j_11 = NULL;
      s_70 = t;
      if(match_cons(t, sym_lit_1))
        {
          r_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_70);
      q_70 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, r_70);
      j_11 = t;
      t = SSLsetAnnotations(j_11, q_70);
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
  ATerm f_67 = NULL,l_67 = NULL,m_67 = NULL,p_67 = NULL,r_67 = NULL,s_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,y_67 = NULL;
  r_67 = t;
  if(match_cons(t, sym__4))
    {
      s_67 = ATgetArgument(t, 0);
      v_67 = ATgetArgument(t, 1);
      w_67 = ATgetArgument(t, 2);
      y_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_67;
  if(match_cons(t, sym_seq_1))
    {
      u_67 = ATgetArgument(t, 0);
      {
        ATerm a_69 = NULL,f_69 = NULL,g_69 = NULL,i_69 = NULL,j_69 = NULL;
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
                  static ATerm a_3 (ATerm t)
                  {
                    t = not_null(f_69);
                    return(t);
                  }
                  t = Instantiate_1_0(a_3, t);
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
        t = v_67;
        if(match_cons(t, sym_appl_2))
          {
            ATerm j_22 = ATgetArgument(t, 0);
            p_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_67, (ATerm) ATinsert(ATempty, y_67));
        t = conc_0_0(t);
        j_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, u_67), j_69);
        t = get_pp_entry_0_0(t);
        a_69 = t;
        t = u_67;
        t = filter_1_0(s_2, t);
        g_69 = t;
        t = p_67;
        t = filter_1_0(t_2, t);
        i_69 = t;
        t = (ATerm) ATmakeAppl(sym__4, g_69, i_69, j_69, term_y_14);
        t = seq2abox_0_0(t);
        if(((f_69 != NULL) && (f_69 != t)))
          _fail(t);
        else
          f_69 = t;
        t = a_69;
        t = bottomup_1_0(u_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          u_67 = ATgetArgument(t, 0);
          f_67 = ATgetArgument(t, 1);
          {
            ATerm r_28 = NULL,u_28 = NULL,v_28 = NULL;
            static ATerm t_39 (ATerm t)
            {
              ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,j_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,p_29 = NULL,q_29 = NULL,v_29 = NULL,e_30 = NULL,p_30 = NULL,w_30 = NULL,a_31 = NULL,b_31 = NULL;
              if(match_cons(t, sym__4))
                {
                  p_29 = ATgetArgument(t, 0);
                  q_29 = ATgetArgument(t, 1);
                  a_31 = ATgetArgument(t, 2);
                  b_31 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = q_29;
              if(match_cons(t, sym_appl_2))
                {
                  v_29 = ATgetArgument(t, 0);
                  e_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_30;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_30 = ATgetFirst((ATermList) t);
                  w_30 = (ATerm) ATgetNext((ATermList) t);
                  t = w_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = v_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          y_28 = ATgetArgument(t, 0);
                          j_29 = ATgetArgument(t, 1);
                          n_29 = ATgetArgument(t, 2);
                          t = j_29;
                          if(match_cons(t, sym_alt_2))
                            {
                              l_29 = ATgetArgument(t, 0);
                              m_29 = ATgetArgument(t, 1);
                              t = y_28;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  z_28 = ATgetFirst((ATermList) t);
                                  a_29 = (ATerm) ATgetNext((ATermList) t);
                                  t = a_29;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = p_29;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          w_28 = ATgetArgument(t, 0);
                                          x_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm l_22 = t;
                                            int m_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_28;
                                                if((w_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = l_29;
                                                if((w_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = m_29;
                                                if((x_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_28), w_28, n_29), e_30), a_31, b_31);
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
                                                      ATerm t_31 = NULL,x_31 = NULL;
                                                      t = l_29;
                                                      if((w_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = m_29;
                                                      if((x_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = term_y_14;
                                                      x_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, b_31, term_y_14);
                                                      t = k_12(b_31, x_31, t);
                                                      t_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, x_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_28), x_28, n_29), e_30), a_31, t_31);
                                                      t = t_39(t);
                                                      LocalPopChoice(o_22);
                                                    }
                                                  else
                                                    {
                                                      t = n_22;
                                                      {
                                                        ATerm e_33 = NULL;
                                                        static ATerm b_3 (ATerm t)
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
                                                                    t = (ATerm) ATinsert(ATempty, not_null(u_28));
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
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, u_67, f_67), a_31);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((r_28 != NULL) && (r_28 != t)))
                                                          _fail(t);
                                                        else
                                                          r_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, p_29, p_30, a_31, term_y_14);
                                                        t = symbol2abox_0_0(t);
                                                        if(((u_28 != NULL) && (u_28 != t)))
                                                          _fail(t);
                                                        else
                                                          u_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, b_31, r_28);
                                                        t = index_0_0(t);
                                                        e_33 = t;
                                                        t = (ATerm) ATinsert(ATempty, e_33);
                                                        t = bottomup_1_0(b_3, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm t_33 = NULL;
                                          static ATerm d_3 (ATerm t)
                                          {
                                            ATerm t_22 = t;
                                            int u_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_22 = t;
                                                int w_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    static ATerm e_3 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(u_28));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(e_3, t);
                                                    LocalPopChoice(w_22);
                                                  }
                                                else
                                                  {
                                                    t = v_22;
                                                    t = flat_list_0_0(t);
                                                  }
                                                LocalPopChoice(u_22);
                                              }
                                            else
                                              {
                                                t = t_22;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, u_67, f_67), a_31);
                                          t = get_pp_entry_0_0(t);
                                          if(((r_28 != NULL) && (r_28 != t)))
                                            _fail(t);
                                          else
                                            r_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, p_29, p_30, a_31, term_y_14);
                                          t = symbol2abox_0_0(t);
                                          if(((u_28 != NULL) && (u_28 != t)))
                                            _fail(t);
                                          else
                                            u_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, b_31, r_28);
                                          t = index_0_0(t);
                                          t_33 = t;
                                          t = (ATerm) ATinsert(ATempty, t_33);
                                          t = bottomup_1_0(d_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm z_34 = NULL;
                                      static ATerm f_3 (ATerm t)
                                      {
                                        ATerm x_22 = t;
                                        int z_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm a_23 = t;
                                            int c_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                static ATerm g_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(u_28));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(g_3, t);
                                                LocalPopChoice(c_23);
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
                                            t = x_22;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, u_67, f_67), a_31);
                                      t = get_pp_entry_0_0(t);
                                      if(((r_28 != NULL) && (r_28 != t)))
                                        _fail(t);
                                      else
                                        r_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, p_29, p_30, a_31, term_y_14);
                                      t = symbol2abox_0_0(t);
                                      if(((u_28 != NULL) && (u_28 != t)))
                                        _fail(t);
                                      else
                                        u_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, b_31, r_28);
                                      t = index_0_0(t);
                                      z_34 = t;
                                      t = (ATerm) ATinsert(ATempty, z_34);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm q_35 = NULL;
                                  static ATerm h_3 (ATerm t)
                                  {
                                    ATerm g_23 = t;
                                    int m_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm n_23 = t;
                                        int o_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm i_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(u_28));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(i_3, t);
                                            LocalPopChoice(o_23);
                                          }
                                        else
                                          {
                                            t = n_23;
                                            t = flat_list_0_0(t);
                                          }
                                        LocalPopChoice(m_23);
                                      }
                                    else
                                      {
                                        t = g_23;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, u_67, f_67), a_31);
                                  t = get_pp_entry_0_0(t);
                                  if(((r_28 != NULL) && (r_28 != t)))
                                    _fail(t);
                                  else
                                    r_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, p_29, p_30, a_31, term_y_14);
                                  t = symbol2abox_0_0(t);
                                  if(((u_28 != NULL) && (u_28 != t)))
                                    _fail(t);
                                  else
                                    u_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, b_31, r_28);
                                  t = index_0_0(t);
                                  q_35 = t;
                                  t = (ATerm) ATinsert(ATempty, q_35);
                                  t = bottomup_1_0(h_3, t);
                                }
                            }
                          else
                            {
                              ATerm j_36 = NULL;
                              static ATerm j_3 (ATerm t)
                              {
                                ATerm p_23 = t;
                                int q_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_23 = t;
                                    int s_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        static ATerm k_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(u_28));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(k_3, t);
                                        LocalPopChoice(s_23);
                                      }
                                    else
                                      {
                                        t = r_23;
                                        t = flat_list_0_0(t);
                                      }
                                    LocalPopChoice(q_23);
                                  }
                                else
                                  {
                                    t = p_23;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, u_67, f_67), a_31);
                              t = get_pp_entry_0_0(t);
                              if(((r_28 != NULL) && (r_28 != t)))
                                _fail(t);
                              else
                                r_28 = t;
                              t = (ATerm) ATmakeAppl(sym__4, p_29, p_30, a_31, term_y_14);
                              t = symbol2abox_0_0(t);
                              if(((u_28 != NULL) && (u_28 != t)))
                                _fail(t);
                              else
                                u_28 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_31, r_28);
                              t = index_0_0(t);
                              j_36 = t;
                              t = (ATerm) ATinsert(ATempty, j_36);
                              t = bottomup_1_0(j_3, t);
                            }
                        }
                      else
                        {
                          ATerm g_37 = NULL;
                          static ATerm l_3 (ATerm t)
                          {
                            ATerm t_23 = t;
                            int v_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_23 = t;
                                int x_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    static ATerm n_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(u_28));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(n_3, t);
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
                                t = t_23;
                              }
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, u_67, f_67), a_31);
                          t = get_pp_entry_0_0(t);
                          if(((r_28 != NULL) && (r_28 != t)))
                            _fail(t);
                          else
                            r_28 = t;
                          t = (ATerm) ATmakeAppl(sym__4, p_29, p_30, a_31, term_y_14);
                          t = symbol2abox_0_0(t);
                          if(((u_28 != NULL) && (u_28 != t)))
                            _fail(t);
                          else
                            u_28 = t;
                          t = (ATerm) ATmakeAppl(sym__2, b_31, r_28);
                          t = index_0_0(t);
                          g_37 = t;
                          t = (ATerm) ATinsert(ATempty, g_37);
                          t = bottomup_1_0(l_3, t);
                        }
                    }
                  else
                    {
                      t = v_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          y_28 = ATgetArgument(t, 0);
                          j_29 = ATgetArgument(t, 1);
                          n_29 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = p_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          w_28 = ATgetArgument(t, 0);
                          x_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_28;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          z_28 = ATgetFirst((ATermList) t);
                          a_29 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = a_29;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = j_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          l_29 = ATgetArgument(t, 0);
                          m_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm y_23 = t;
                        int z_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = z_28;
                            if((w_28 != t))
                              {
                                _fail(t);
                              }
                            t = l_29;
                            if((w_28 != t))
                              {
                                _fail(t);
                              }
                            t = m_29;
                            if((x_28 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_28), w_28, n_29), e_30), a_31, b_31);
                            t = t_39(t);
                            LocalPopChoice(z_23);
                          }
                        else
                          {
                            t = y_23;
                            {
                              ATerm i_38 = NULL,j_38 = NULL;
                              t = l_29;
                              if((w_28 != t))
                                {
                                  _fail(t);
                                }
                              t = m_29;
                              if((x_28 != t))
                                {
                                  _fail(t);
                                }
                              t = term_y_14;
                              j_38 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_31, term_y_14);
                              t = k_12(b_31, j_38, t);
                              i_38 = t;
                              t = (ATerm) ATmakeAppl(sym__4, x_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_28), x_28, n_29), e_30), a_31, i_38);
                              t = t_39(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = v_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      y_28 = ATgetArgument(t, 0);
                      j_29 = ATgetArgument(t, 1);
                      n_29 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = p_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      w_28 = ATgetArgument(t, 0);
                      x_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_28;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_28 = ATgetFirst((ATermList) t);
                      a_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = a_29;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      l_29 = ATgetArgument(t, 0);
                      m_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_24 = t;
                    int b_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = z_28;
                        if((w_28 != t))
                          {
                            _fail(t);
                          }
                        t = l_29;
                        if((w_28 != t))
                          {
                            _fail(t);
                          }
                        t = m_29;
                        if((x_28 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_28), w_28, n_29), e_30), a_31, b_31);
                        t = t_39(t);
                        LocalPopChoice(b_24);
                      }
                    else
                      {
                        t = a_24;
                        {
                          ATerm r_39 = NULL,s_39 = NULL;
                          t = l_29;
                          if((w_28 != t))
                            {
                              _fail(t);
                            }
                          t = m_29;
                          if((x_28 != t))
                            {
                              _fail(t);
                            }
                          t = term_y_14;
                          s_39 = t;
                          t = (ATerm) ATmakeAppl(sym__2, b_31, term_y_14);
                          t = k_12(b_31, s_39, t);
                          r_39 = t;
                          t = (ATerm) ATmakeAppl(sym__4, x_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_28), x_28, n_29), e_30), a_31, r_39);
                          t = t_39(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, w_67, (ATerm) ATinsert(ATempty, y_67));
            t = conc_0_0(t);
            v_28 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, u_67, f_67), v_67, v_28, term_y_14);
            t = t_39(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              u_67 = ATgetArgument(t, 0);
              f_67 = ATgetArgument(t, 1);
              {
                ATerm i_71 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, u_67, f_67);
                i_71 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, u_67, f_67), v_67, w_67, y_67);
                t = w_10(i_71, v_67, w_67, y_67, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  u_67 = ATgetArgument(t, 0);
                  f_67 = ATgetArgument(t, 1);
                  {
                    ATerm o_71 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, u_67, f_67);
                    o_71 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, u_67, f_67), v_67, w_67, y_67);
                    t = w_10(o_71, v_67, w_67, y_67, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      u_67 = ATgetArgument(t, 0);
                      {
                        ATerm z_71 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, u_67);
                        z_71 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, u_67), v_67, w_67, y_67);
                        t = q_10(z_71, v_67, w_67, y_67, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          u_67 = ATgetArgument(t, 0);
                          {
                            ATerm n_72 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, u_67);
                            n_72 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, u_67), v_67, w_67, y_67);
                            t = q_10(n_72, v_67, w_67, y_67, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              u_67 = ATgetArgument(t, 0);
                              t = v_67;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm c_24 = ATgetArgument(t, 0);
                                  p_67 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = p_67;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  l_67 = ATgetFirst((ATermList) t);
                                  m_67 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm c_41 = NULL,h_41 = NULL,i_41 = NULL,k_41 = NULL,q_41 = NULL,r_41 = NULL;
                                    static ATerm o_3 (ATerm t)
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
                                                t = not_null(k_41);
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
                                    t = m_67;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, w_67, (ATerm) ATinsert(ATempty, y_67));
                                    t = conc_0_0(t);
                                    r_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, u_67), r_41);
                                    t = get_pp_entry_0_0(t);
                                    c_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, u_67, l_67, r_41, term_y_14);
                                    t = symbol2abox_0_0(t);
                                    h_41 = t;
                                    t = (ATerm) ATinsert(ATempty, h_41);
                                    q_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, c_41, (ATerm) ATinsert(ATempty, h_41));
                                    t = o_10(c_41, q_41, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        i_41 = ATgetArgument(t, 0);
                                        if(((k_41 != NULL) && (k_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          k_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = i_41;
                                    t = bottomup_1_0(o_3, t);
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
                              ATerm l_24 = t;
                              int m_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm r_24 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(m_24);
                                  {
                                    ATerm t_24 = t;
                                    int u_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = v_67;
                                        {
                                          ATerm v_24 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm w_42 = NULL;
                                              w_42 = t;
                                              t = SSL_is_string(w_42);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = v_24;
                                            }
                                        }
                                        t = v_67;
                                        {
                                          ATerm w_24 = t;
                                          int x_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm a_43 = NULL,b_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
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
                                                  g_43 = ATgetArgument(t, 1);
                                                  h_43 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = v_67;
                                              t = m_11(b_43, g_43, h_43, i_43, t);
                                              LocalPopChoice(x_24);
                                            }
                                          else
                                            {
                                              t = w_24;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(u_24);
                                      }
                                    else
                                      {
                                        t = t_24;
                                        t = SSL_is_string(v_67);
                                        t = (ATerm) ATmakeAppl(sym_S_1, v_67);
                                      }
                                  }
                                }
                              else
                                {
                                  t = l_24;
                                  {
                                    ATerm y_24 = t;
                                    int z_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm a_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(z_24);
                                        {
                                          ATerm k_44 = NULL,l_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, v_67);
                                          l_44 = t;
                                          t = SSL_implode_string(l_44);
                                          k_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, k_44);
                                        }
                                      }
                                    else
                                      {
                                        t = y_24;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            u_67 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, u_67);
                                      }
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
  ATerm i_74 = NULL,k_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,s_74 = NULL,t_74 = NULL,w_74 = NULL;
  if(match_cons(t, sym__4))
    {
      i_74 = ATgetArgument(t, 0);
      p_74 = ATgetArgument(t, 1);
      t_74 = ATgetArgument(t, 2);
      w_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = i_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_74;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_74 = ATgetFirst((ATermList) t);
          o_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_74;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_74 = ATgetFirst((ATermList) t);
          s_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_74;
      {
        ATerm g_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm p_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(k_25);
            t = k_74;
            {
              ATerm r_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm t_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_25);
                  {
                    ATerm u_25 = t;
                    int v_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, o_74, s_74, t_74, w_74);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(v_25);
                      }
                    else
                      {
                        t = u_25;
                        {
                          ATerm n_76 = NULL,o_76 = NULL,q_76 = NULL,r_76 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, k_74, q_74, t_74, w_74);
                          t = symbol2abox_0_0(t);
                          n_76 = t;
                          t = term_y_14;
                          r_76 = t;
                          t = (ATerm) ATmakeAppl(sym__2, w_74, term_y_14);
                          t = k_12(w_74, r_76, t);
                          q_76 = t;
                          t = (ATerm) ATmakeAppl(sym__4, o_74, s_74, t_74, q_76);
                          t = seq2abox_0_0(t);
                          o_76 = t;
                          t = (ATerm) ATinsert(CheckATermList(o_76), n_76);
                        }
                      }
                  }
                }
              else
                {
                  t = r_25;
                  {
                    ATerm d_77 = NULL,f_77 = NULL,h_77 = NULL,i_77 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, k_74, q_74, t_74, w_74);
                    t = symbol2abox_0_0(t);
                    d_77 = t;
                    t = term_y_14;
                    i_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_74, term_y_14);
                    t = k_12(w_74, i_77, t);
                    h_77 = t;
                    t = (ATerm) ATmakeAppl(sym__4, o_74, s_74, t_74, h_77);
                    t = seq2abox_0_0(t);
                    f_77 = t;
                    t = (ATerm) ATinsert(CheckATermList(f_77), d_77);
                  }
                }
            }
          }
        else
          {
            t = g_25;
            {
              ATerm a_78 = NULL,b_78 = NULL,d_78 = NULL,e_78 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, k_74, q_74, t_74, w_74);
              t = symbol2abox_0_0(t);
              a_78 = t;
              t = term_y_14;
              e_78 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_74, term_y_14);
              t = k_12(w_74, e_78, t);
              d_78 = t;
              t = (ATerm) ATmakeAppl(sym__4, o_74, s_74, t_74, d_78);
              t = seq2abox_0_0(t);
              b_78 = t;
              t = (ATerm) ATinsert(CheckATermList(b_78), a_78);
            }
          }
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  m_78 = t;
  t = term_y_25;
  p_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, m_78);
  t = m_12(p_78, m_78, t);
  if(match_cons(t, sym__2))
    {
      o_78 = ATgetArgument(t, 0);
      n_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_78;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(t_3, t);
  t = (ATerm) ATmakeAppl(sym__2, o_78, n_78);
  return(t);
}
static ATerm a_11 (ATerm z_63, ATerm y_63, ATerm t)
{
  ATerm w_78 = NULL,z_78 = NULL,c_79 = NULL;
  w_78 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      z_78 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_79 = NULL,i_79 = NULL;
            t = z_63;
            t = mk_key_0_0(t);
            f_79 = t;
            t = term_y_25;
            i_79 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_y_25, f_79);
            t = m_12(i_79, f_79, t);
            t = w_78;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = w_78;
            t = n_11(z_78, c_79, t);
          }
      }
    }
  else
    {
      ATerm s_79 = NULL,t_79 = NULL;
      t = z_63;
      t = mk_key_0_0(t);
      s_79 = t;
      t = term_y_25;
      t_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_25, s_79);
      t = m_12(t_79, s_79, t);
      t = w_78;
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm x_79 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  t = number_nonterminals_0_0(t);
  g_80 = t;
  t = make_0_0(t);
  x_79 = t;
  t = g_80;
  {
    static ATerm w_3 (ATerm t)
    {
      static ATerm x_3 (ATerm t)
      {
        ATerm h_80 = NULL;
        t = term_r_14;
        t = b_125(t);
        h_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_80, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(x_3, t);
      return(t);
    }
    t = map_1_0(w_3, t);
  }
  t = concat_0_0(t);
  e_80 = t;
  t = term_r_14;
  t = b_125(t);
  f_80 = t;
  t = (ATerm) ATinsert(CheckATermList(e_80), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, f_80), x_79));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm q_80 = NULL;
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
      ATerm e_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              c_81 = ATgetArgument(t, 0);
              {
                ATerm i_26 = ATgetArgument(t, 1);
              }
              e_81 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(g_26);
          {
            static ATerm z_3 (ATerm t)
            {
              t = not_null(q_80);
              return(t);
            }
            t = e_81;
            {
              static ATerm y_3 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((q_80 != NULL) && (q_80 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      q_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(y_3, t);
            }
            t = c_81;
            t = symbols2pp_entries_1_0(z_3, t);
          }
        }
      else
        {
          t = e_26;
          {
            ATerm h_81 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                c_81 = ATgetArgument(t, 0);
                d_81 = ATgetArgument(t, 1);
                e_81 = ATgetArgument(t, 2);
                f_81 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_26)), d_81), (ATerm) ATinsert(ATinsert(ATempty, term_k_26), (ATerm) ATmakeAppl(sym_lit_1, c_81)));
            t = concat_0_0(t);
            h_81 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, h_81, e_81, f_81);
            t = generate_pp_entries_0_0(t);
          }
        }
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_26 = t;
            if((PushChoice() == 0))
              {
                ATerm p_81 = NULL;
                p_81 = t;
                t = term_s_26;
                t = get_options_0_0(t);
                t = oncetd_1_0(b_4, t);
                t = p_81;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_26;
              }
            t = debug_1_0(c_4, t);
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm b_11 (ATerm n_43, ATerm o_43, ATerm t)
{
  t = SSL_mkterm(n_43, o_43);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL,q_92 = NULL,r_92 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      q_92 = ATgetArgument(t, 0);
      r_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_92;
  if(match_cons(t, sym_alt_2))
    {
      n_92 = ATgetArgument(t, 0);
      o_92 = ATgetArgument(t, 1);
      {
        ATerm v_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_92 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, n_92, o_92);
            t = flat_alt_0_0(t);
            v_92 = t;
            t = (ATerm) ATinsert(CheckATermList(v_92), q_92);
            LocalPopChoice(x_26);
          }
        else
          {
            t = v_26;
            t = (ATerm) ATinsert(ATinsert(ATempty, r_92), q_92);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, r_92), q_92);
    }
  return(t);
}
ATerm _2_0 (ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,p_11 = NULL;
  c_82 = t;
  if(match_cons(t, sym__2))
    {
      y_81 = ATgetArgument(t, 0);
      z_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_82);
  x_81 = t;
  t = y_81;
  t = z_72(t);
  a_82 = t;
  t = z_81;
  t = a_73(t);
  b_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_82, b_82);
  p_11 = t;
  t = SSLsetAnnotations(p_11, x_81);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL,k_82 = NULL,n_82 = NULL,o_82 = NULL;
  f_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_82;
    }
  else
    {
      ATerm s_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_82 = ATgetFirst((ATermList) t);
          k_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_82 = ATgetFirst((ATermList) t);
          o_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_82;
      t = pair_0_0(t);
      s_82 = t;
      t = (ATerm) ATinsert(CheckATermList(s_82), (ATerm) ATmakeAppl(sym__2, g_82, n_82));
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL,j_87 = NULL,q_12 = NULL;
  h_87 = t;
  if(match_cons(t, sym_lit_1))
    {
      g_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_87);
  f_87 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, g_87);
  q_12 = t;
  t = SSLsetAnnotations(q_12, f_87);
  if(match_cons(t, sym_lit_1))
    {
      j_87 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_26, (ATerm) ATmakeAppl(sym_S_1, j_87));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          j_87 = ATgetArgument(t, 0);
          {
            ATerm a_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, j_87);
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,b_13 = NULL,v_89 = NULL,d_89 = NULL,x_12 = NULL;
  b_89 = t;
  if(match_cons(t, sym__2))
    {
      x_88 = ATgetArgument(t, 0);
      y_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_89);
  w_88 = t;
  t = x_88;
  if(match_cons(t, sym_lit_1))
    {
      a_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_88);
  z_88 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, a_89);
  x_12 = t;
  t = SSLsetAnnotations(x_12, z_88);
  if(match_cons(t, sym_lit_1))
    {
      d_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_26, (ATerm) ATmakeAppl(sym_S_1, d_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          d_89 = ATgetArgument(t, 0);
          {
            ATerm b_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, d_89);
    }
  u_88 = t;
  t = y_88;
  t = _2_0(_id, z_4, t);
  if(match_cons(t, sym_lit_1))
    {
      v_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_26, (ATerm) ATmakeAppl(sym_S_1, v_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          v_89 = ATgetArgument(t, 0);
          {
            ATerm d_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, v_89);
    }
  v_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_88, v_88);
  b_13 = t;
  t = SSLsetAnnotations(b_13, w_88);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_j_27), (ATerm) ATinsert(ATinsert(ATempty, v_88), u_88));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm s_89 = NULL,t_89 = NULL;
  s_89 = t;
  if(match_cons(t, sym_iter_1))
    {
      t_89 = ATgetArgument(t, 0);
      {
        ATerm r_46 = NULL,y_12 = NULL;
        t = SSLgetAnnotations(s_89);
        r_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, t_89);
        y_12 = t;
        t = SSLsetAnnotations(y_12, r_46);
      }
    }
  else
    {
      ATerm f_47 = NULL,a_13 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          t_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_89);
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, t_89);
      a_13 = t;
      t = SSLsetAnnotations(a_13, f_47);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm a_90 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      a_90 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_26, (ATerm) ATmakeAppl(sym_S_1, a_90));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          a_90 = ATgetArgument(t, 0);
          {
            ATerm p_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, a_90);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm a_84 = NULL,e_84 = NULL,g_84 = NULL,n_84 = NULL,o_84 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,u_12 = NULL,v_86 = NULL,l_12 = NULL,p_86 = NULL,q_86 = NULL;
      t = reverse_acc_2_0(_id, h_4, t);
      d_85 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_84 = ATgetFirst((ATermList) t);
          w_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_85);
      u_84 = t;
      t = v_84;
      if(match_cons(t, sym__2))
        {
          a_85 = ATgetArgument(t, 0);
          b_85 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_84);
      z_84 = t;
      t = b_85;
      if(match_cons(t, sym_iter_1))
        {
          p_86 = ATgetArgument(t, 0);
          {
            ATerm p_44 = NULL,u_11 = NULL;
            t = SSLgetAnnotations(b_85);
            p_44 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, p_86);
            u_11 = t;
            t = SSLsetAnnotations(u_11, p_44);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              p_86 = ATgetArgument(t, 0);
              {
                ATerm z_44 = NULL,w_11 = NULL;
                t = SSLgetAnnotations(b_85);
                z_44 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, p_86);
                w_11 = t;
                t = SSLsetAnnotations(w_11, z_44);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  p_86 = ATgetArgument(t, 0);
                  q_86 = ATgetArgument(t, 1);
                  {
                    ATerm j_45 = NULL,x_11 = NULL;
                    t = SSLgetAnnotations(b_85);
                    j_45 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, p_86, q_86);
                    x_11 = t;
                    t = SSLsetAnnotations(x_11, j_45);
                  }
                }
              else
                {
                  ATerm h_46 = NULL,b_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      p_86 = ATgetArgument(t, 0);
                      q_86 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_85);
                  h_46 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, p_86, q_86);
                  b_12 = t;
                  t = SSLsetAnnotations(b_12, h_46);
                }
            }
        }
      c_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_85, c_85);
      l_12 = t;
      t = SSLsetAnnotations(l_12, z_84);
      if(match_cons(t, sym_lit_1))
        {
          v_86 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_26, (ATerm) ATmakeAppl(sym_S_1, v_86));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              v_86 = ATgetArgument(t, 0);
              {
                ATerm w_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, v_86);
        }
      x_84 = t;
      t = w_84;
      t = map_1_0(j_4, t);
      y_84 = t;
      t = (ATerm) ATinsert(CheckATermList(y_84), x_84);
      u_12 = t;
      t = SSLsetAnnotations(u_12, u_84);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_84 = ATgetFirst((ATermList) t);
          a_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_27 = t;
        if((PushChoice() == 0))
          {
            ATerm q_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,v_12 = NULL;
            z_87 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_87 = ATgetFirst((ATermList) t);
                y_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_87);
            q_87 = t;
            t = y_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_87), x_87);
            v_12 = t;
            t = SSLsetAnnotations(v_12, q_87);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_27;
          }
      }
      t = a_84;
      t = reverse_acc_2_0(_id, m_4, t);
      s_84 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_84), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, s_84)));
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,w_12 = NULL,o_88 = NULL;
            t = reverse_acc_2_0(_id, o_4, t);
            j_88 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_88 = ATgetFirst((ATermList) t);
                i_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_88);
            g_88 = t;
            t = h_88;
            if(match_cons(t, sym_lit_1))
              {
                o_88 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_26, (ATerm) ATmakeAppl(sym_S_1, o_88));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    o_88 = ATgetArgument(t, 0);
                    {
                      ATerm a_28 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, o_88);
              }
            o_84 = t;
            t = i_88;
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
            t = reverse_acc_2_0(_id, p_4, t);
            g_84 = t;
            t = (ATerm) ATinsert(CheckATermList(g_84), o_84);
            w_12 = t;
            t = SSLsetAnnotations(w_12, g_88);
            t = g_84;
            t = pair_0_0(t);
            t = map_1_0(v_4, t);
            n_84 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, o_84), n_84));
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            t = map_1_0(e_5, t);
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
      ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,y_13 = NULL;
      m_90 = t;
      if(match_cons(t, sym_lit_1))
        {
          l_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_90);
      k_90 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, l_90);
      y_13 = t;
      t = SSLsetAnnotations(y_13, k_90);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_28;
    }
  return(t);
}
static ATerm r_91 (ATerm r_90, ATerm s_90, ATerm t_90, ATerm t)
{
  ATerm x_90 = NULL,a_14 = NULL;
  t = SSLgetAnnotations(r_90);
  x_90 = t;
  t = t_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_90, t_90);
  a_14 = t;
  t = SSLsetAnnotations(a_14, x_90);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm f_125 (ATerm), ATerm t)
{
  ATerm q_90 = NULL;
  static ATerm q_91 (ATerm t)
  {
    ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
    b_91 = t;
    if(match_cons(t, sym__2))
      {
        c_91 = ATgetArgument(t, 0);
        d_91 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = d_91;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_91 = ATgetFirst((ATermList) t);
        f_91 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_91(b_91, c_91, d_91, t);
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              {
                ATerm i_28 = t;
                int j_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
                    t = e_91;
                    t = f_125(t);
                    t = term_y_14;
                    l_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_91, term_y_14);
                    t = k_12(c_91, l_91, t);
                    k_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_91, f_91);
                    t = q_91(t);
                    j_91 = t;
                    t = (ATerm) ATinsert(CheckATermList(j_91), (ATerm) ATmakeAppl(sym__2, c_91, e_91));
                    LocalPopChoice(j_28);
                  }
                else
                  {
                    t = i_28;
                    {
                      ATerm p_91 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, c_91, f_91);
                      t = q_91(t);
                      p_91 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_91), e_91);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = r_91(b_91, c_91, d_91, t);
      }
    return(t);
  }
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, q_90);
  t = q_91(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL;
  w_91 = t;
  {
    ATerm n_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm d_29 = ATgetArgument(t, 0);
            v_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(q_28);
        t = v_91;
      }
    else
      {
        t = n_28;
        t = w_91;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(g_5, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm i_92 = NULL;
  i_92 = t;
  {
    ATerm e_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_92;
        {
          ATerm r_29 = t;
          if((PushChoice() == 0))
            {
              ATerm w_47 = NULL;
              w_47 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = w_47;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm s_29 = ATgetFirst((ATermList) t);
                      ATerm t_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = w_47;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_29;
            }
        }
        t = (ATerm) ATinsert(ATempty, i_92);
        LocalPopChoice(o_29);
      }
    else
      {
        t = e_29;
        t = i_92;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(i_5, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  t_49 = t;
  if(match_cons(t, sym_Arg_1))
    {
      s_49 = ATgetArgument(t, 0);
      {
        ATerm u_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_50 = NULL,c_14 = NULL;
            t = SSLgetAnnotations(t_49);
            f_50 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, s_49);
            c_14 = t;
            t = SSLsetAnnotations(c_14, f_50);
            t = term_y_29;
            LocalPopChoice(w_29);
          }
        else
          {
            t = u_29;
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
ATerm symbol2abox_1_0 (ATerm c_125 (ATerm), ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL;
  static ATerm n_96 (ATerm t)
  {
    static ATerm p_96 (ATerm h_95, ATerm i_95, ATerm j_95, ATerm k_95, ATerm t)
    {
      ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
      t = SSL_explode_term(k_95);
      if(match_cons(t, sym__2))
        {
          t_95 = ATgetArgument(t, 0);
          u_95 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_95, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, j_95, t_95)));
      t = conc_0_0(t);
      p_95 = t;
      t = u_95;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      v_95 = t;
      t = make_0_0(t);
      q_95 = t;
      t = v_95;
      {
        static ATerm k_5 (ATerm t)
        {
          ATerm x_95 = NULL;
          x_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, p_95), x_95);
          t = n_96(t);
          return(t);
        }
        t = map_1_0(k_5, t);
      }
      t = concat_0_0(t);
      r_95 = t;
      t = (ATerm) ATinsert(CheckATermList(r_95), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, h_95, p_95), q_95));
      return(t);
    }
    ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL;
    if(match_cons(t, sym__2))
      {
        d_96 = ATgetArgument(t, 0);
        g_96 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_96;
    {
      ATerm c_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm f_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(d_30);
          t = (ATerm) ATempty;
        }
      else
        {
          t = c_30;
          if(match_cons(t, sym__2))
            {
              h_96 = ATgetArgument(t, 0);
              i_96 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_96;
          {
            ATerm l_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_sort_1))
                  {
                    ATerm r_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(o_30);
                t = d_96;
                {
                  ATerm t_30 = t;
                  int u_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm y_30 = ATgetArgument(t, 0);
                          ATerm c_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(u_30);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      t = t_30;
                      t = (ATerm) ATempty;
                    }
                }
              }
            else
              {
                t = l_30;
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
                      t = d_96;
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
                          b_96 = ATgetArgument(t, 0);
                          y_95 = ATgetArgument(t, 1);
                          t = d_96;
                          if(match_cons(t, sym__2))
                            {
                              e_96 = ATgetArgument(t, 0);
                              f_96 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = y_95;
                          if(match_cons(t, sym_alt_2))
                            {
                              z_95 = ATgetArgument(t, 0);
                              a_96 = ATgetArgument(t, 1);
                              {
                                ATerm n_31 = t;
                                int o_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,d_14 = NULL;
                                    t = e_96;
                                    if(((z_93 != NULL) && (z_93 != t)))
                                      _fail(t);
                                    else
                                      z_93 = t;
                                    t = f_96;
                                    if(((a_94 != NULL) && (a_94 != t)))
                                      _fail(t);
                                    else
                                      a_94 = t;
                                    t = h_96;
                                    if(((b_94 != NULL) && (b_94 != t)))
                                      _fail(t);
                                    else
                                      b_94 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, b_96, (ATerm) ATmakeAppl(sym_alt_2, z_95, a_96));
                                    t = flat_alt_0_0(t);
                                    f_49 = t;
                                    t = term_p_31;
                                    h_49 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_p_31, f_49);
                                    t = b_11(h_49, f_49, t);
                                    g_49 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_96, f_96), (ATerm) ATmakeAppl(sym__2, h_96, g_49));
                                    t = n_96(t);
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
                                    t = topdown_1_0(o_5, t);
                                    l_49 = t;
                                    t = (ATerm) ATinsert(CheckATermList(k_49), l_49);
                                    d_14 = t;
                                    t = SSLsetAnnotations(d_14, i_49);
                                    LocalPopChoice(o_31);
                                  }
                                else
                                  {
                                    t = n_31;
                                    t = p_96(e_96, f_96, h_96, i_96, t);
                                  }
                              }
                            }
                          else
                            {
                              t = p_96(e_96, f_96, h_96, i_96, t);
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_bracket_symbol_1))
                            {
                              b_96 = ATgetArgument(t, 0);
                              t = d_96;
                              if(match_cons(t, sym__2))
                                {
                                  e_96 = ATgetArgument(t, 0);
                                  f_96 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              {
                                ATerm q_31 = t;
                                int r_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_96, f_96), (ATerm) ATmakeAppl(sym__2, h_96, b_96));
                                    t = n_96(t);
                                    LocalPopChoice(r_31);
                                  }
                                else
                                  {
                                    t = q_31;
                                    t = p_96(e_96, f_96, h_96, i_96, t);
                                  }
                              }
                            }
                          else
                            {
                              t = d_96;
                              if(match_cons(t, sym__2))
                                {
                                  e_96 = ATgetArgument(t, 0);
                                  f_96 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = p_96(e_96, f_96, h_96, i_96, t);
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
  d_94 = t;
  t = term_r_14;
  t = c_125(t);
  c_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_94, d_94);
  t = n_96(t);
  return(t);
}
static ATerm u_98 (ATerm e_97, ATerm f_97, ATerm g_97, ATerm t)
{
  ATerm h_97 = NULL,j_97 = NULL;
  t = g_97;
  {
    ATerm s_31 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,l_50 = NULL;
        t = f_97;
        t = pp_table_get_0_0(t);
        l_50 = t;
        t = SSL_explode_term(l_50);
        if(match_cons(t, sym__2))
          {
            ATerm d_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_32 = ATgetArgument(t, 1);
              if(((ATgetType(e_32) == AT_LIST) && !(ATisEmpty(e_32))))
                {
                  ATerm f_32 = ATgetFirst((ATermList) e_32);
                  ATerm i_32 = (ATerm) ATgetNext((ATermList) e_32);
                  if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
                    {
                      k_50 = ATgetFirst((ATermList) i_32);
                      {
                        ATerm j_32 = (ATerm) ATgetNext((ATermList) i_32);
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
        LocalPopChoice(b_32);
      }
    else
      {
        t = s_31;
        {
          ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,m_50 = NULL,n_50 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,x_97 = NULL,k_14 = NULL;
          t = f_97;
          t = reverse_acc_2_0(_id, q_5, t);
          q_97 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_97 = ATgetFirst((ATermList) t);
              p_97 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_97);
          n_97 = t;
          t = p_97;
          t = reverse_acc_2_0(_id, r_5, t);
          h_97 = t;
          t = (ATerm) ATinsert(CheckATermList(h_97), o_97);
          k_14 = t;
          t = SSLsetAnnotations(k_14, n_97);
          t = h_97;
          t = pp_table_get_0_0(t);
          m_97 = t;
          t = SSL_explode_term(m_97);
          if(match_cons(t, sym__2))
            {
              ATerm k_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm l_32 = ATgetArgument(t, 1);
                if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
                  {
                    l_97 = ATgetFirst((ATermList) l_32);
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
          t = l_97;
          if(match_cons(t, sym_Path_2))
            {
              x_97 = ATgetArgument(t, 0);
              t_97 = ATgetArgument(t, 1);
              t = t_97;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_97 = ATgetFirst((ATermList) t);
                  v_97 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_97;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, x_97, (ATerm) ATinsert(ATempty, u_97));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  x_97 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, x_97, (ATerm) ATempty);
            }
          j_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_97, e_97);
          {
            static ATerm s_5 (ATerm t)
            {
              t = j_97;
              return(t);
            }
            t = symbol2abox_1_0(s_5, t);
          }
          t = map_1_0(v_5, t);
          t = f_97;
          t = pp_table_get_0_0(t);
          n_50 = t;
          t = SSL_explode_term(n_50);
          if(match_cons(t, sym__2))
            {
              ATerm p_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm q_32 = ATgetArgument(t, 1);
                if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
                  {
                    ATerm s_32 = ATgetFirst((ATermList) q_32);
                    ATerm u_32 = (ATerm) ATgetNext((ATermList) q_32);
                    if(((ATgetType(u_32) == AT_LIST) && !(ATisEmpty(u_32))))
                      {
                        m_50 = ATgetFirst((ATermList) u_32);
                        {
                          ATerm v_32 = (ATerm) ATgetNext((ATermList) u_32);
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
static ATerm v_98 (ATerm d_98, ATerm e_98, ATerm f_98, ATerm g_98, ATerm h_98, ATerm t)
{
  t = h_98;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL,p_50 = NULL;
        t = g_98;
        t = pp_table_get_0_0(t);
        p_50 = t;
        t = SSL_explode_term(p_50);
        if(match_cons(t, sym__2))
          {
            ATerm z_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_33 = ATgetArgument(t, 1);
              if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
                {
                  ATerm g_33 = ATgetFirst((ATermList) f_33);
                  ATerm h_33 = (ATerm) ATgetNext((ATermList) f_33);
                  if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
                    {
                      o_50 = ATgetFirst((ATermList) h_33);
                      {
                        ATerm i_33 = (ATerm) ATgetNext((ATermList) h_33);
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
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        {
          ATerm q_50 = NULL,t_50 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, d_98, e_98, f_98);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(w_5, t);
          t = g_98;
          t = pp_table_get_0_0(t);
          t_50 = t;
          t = SSL_explode_term(t_50);
          if(match_cons(t, sym__2))
            {
              ATerm j_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm m_33 = ATgetArgument(t, 1);
                if(((ATgetType(m_33) == AT_LIST) && !(ATisEmpty(m_33))))
                  {
                    ATerm n_33 = ATgetFirst((ATermList) m_33);
                    ATerm o_33 = (ATerm) ATgetNext((ATermList) m_33);
                    if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
                      {
                        q_50 = ATgetFirst((ATermList) o_33);
                        {
                          ATerm p_33 = (ATerm) ATgetNext((ATermList) o_33);
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
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      b_98 = ATgetArgument(t, 0);
      c_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(b_98, c_98, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      m_98 = ATgetArgument(t, 0);
      n_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(m_98, n_98, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL;
  o_98 = t;
  if(match_cons(t, sym__2))
    {
      p_98 = ATgetArgument(t, 0);
      t_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_98;
  if(match_cons(t, sym_prod_3))
    {
      q_98 = ATgetArgument(t, 0);
      r_98 = ATgetArgument(t, 1);
      s_98 = ATgetArgument(t, 2);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_98(p_98, t_98, o_98, t);
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = v_98(q_98, r_98, s_98, t_98, o_98, t);
          }
      }
    }
  else
    {
      t = u_98(p_98, t_98, o_98, t);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_33) != AT_INT) || (ATgetInt((ATermInt) s_33) != 34)))
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
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL;
  y_98 = t;
  t = SSL_explode_string(y_98);
  w_98 = t;
  {
    ATerm v_33 = t;
    if((PushChoice() == 0))
      {
        ATerm z_98 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_98 = ATgetFirst((ATermList) t);
            {
              ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = z_98;
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
  t = w_98;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_33)), w_98), (ATerm) ATinsert(ATempty, term_y_33));
  t = concat_0_0(t);
  x_98 = t;
  t = SSL_implode_string(x_98);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm b_99 = NULL,f_99 = NULL;
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm b_34 = ATgetArgument(t, 0);
          ATerm f_34 = ATgetArgument(t, 1);
          ATerm i_34 = ATgetArgument(t, 2);
          b_99 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(a_34);
      {
        ATerm h_99 = NULL;
        t = b_99;
        {
          static ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((h_99 != NULL) && (h_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(y_5, t);
        }
        t = not_null(h_99);
      }
    }
  else
    {
      t = z_33;
      {
        ATerm j_99 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm j_34 = ATgetArgument(t, 0);
            ATerm k_34 = ATgetArgument(t, 1);
            f_99 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_99;
        {
          static ATerm z_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((j_99 != NULL) && (j_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(z_5, t);
        }
        t = not_null(j_99);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL;
  if(match_cons(t, sym__2))
    {
      s_99 = ATgetArgument(t, 0);
      w_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_99;
  if(match_cons(t, sym_prod_fun_4))
    {
      t_99 = ATgetArgument(t, 0);
      u_99 = ATgetArgument(t, 1);
      v_99 = ATgetArgument(t, 2);
      p_99 = ATgetArgument(t, 3);
      t = p_99;
      if(match_cons(t, sym_attrs_1))
        {
          o_99 = ATgetArgument(t, 0);
          {
            ATerm c_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, o_99, w_99);
            t = conc_0_0(t);
            c_100 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, t_99, u_99, v_99, (ATerm) ATmakeAppl(sym_attrs_1, c_100));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, t_99, u_99, v_99, (ATerm) ATmakeAppl(sym_attrs_1, w_99));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          t_99 = ATgetArgument(t, 0);
          u_99 = ATgetArgument(t, 1);
          v_99 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_99;
      if(match_cons(t, sym_attrs_1))
        {
          q_99 = ATgetArgument(t, 0);
          {
            ATerm l_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, q_99, w_99);
            t = conc_0_0(t);
            l_100 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, t_99, u_99, (ATerm) ATmakeAppl(sym_attrs_1, l_100));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, t_99, u_99, (ATerm) ATmakeAppl(sym_attrs_1, w_99));
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL,m_14 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL;
      b_101 = t;
      if(match_int(t, 34))
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_y_33), term_u_34);
              LocalPopChoice(t_34);
            }
          else
            {
              t = s_34;
              t = (ATerm) ATinsert(ATempty, b_101);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm w_34 = t;
              int x_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_34), term_u_34);
                  LocalPopChoice(x_34);
                }
              else
                {
                  t = w_34;
                  t = (ATerm) ATinsert(ATempty, b_101);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_101 = ATgetFirst((ATermList) t);
                  d_101 = (ATerm) ATgetNext((ATermList) t);
                  t = c_101;
                  if(match_int(t, 34))
                    {
                      ATerm y_34 = t;
                      int a_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, b_101);
                          LocalPopChoice(a_35);
                        }
                      else
                        {
                          t = y_34;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(d_101), term_y_33), term_u_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 92))
                        {
                          ATerm b_35 = t;
                          int d_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, b_101);
                              LocalPopChoice(d_35);
                            }
                          else
                            {
                              t = b_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(d_101), term_u_34), term_u_34);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm e_35 = t;
                              int f_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, b_101);
                                  LocalPopChoice(f_35);
                                }
                              else
                                {
                                  t = e_35;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(d_101), term_g_35), term_u_34);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, b_101);
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, b_101);
                }
            }
        }
      a_101 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_100 = ATgetFirst((ATermList) t);
          y_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_101);
      w_100 = t;
      t = y_100;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      z_100 = t;
      t = (ATerm) ATinsert(CheckATermList(z_100), x_100);
      m_14 = t;
      t = SSLsetAnnotations(m_14, w_100);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
        f_102 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_102 = ATgetFirst((ATermList) t);
            e_102 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm u_51 = NULL,b_52 = NULL,n_14 = NULL;
              t = SSLgetAnnotations(f_102);
              u_51 = t;
              t = e_102;
              t = escape_chars_0_0(t);
              b_52 = t;
              t = (ATerm) ATinsert(CheckATermList(b_52), d_102);
              n_14 = t;
              t = SSLsetAnnotations(n_14, u_51);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_102;
          }
      }
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm q_52 = NULL,s_52 = NULL,t_52 = NULL;
  q_52 = t;
  if(match_int(t, 34))
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_y_33), term_u_34);
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          t = (ATerm) ATinsert(ATempty, q_52);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_u_34), term_u_34);
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              t = (ATerm) ATinsert(ATempty, q_52);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_52 = ATgetFirst((ATermList) t);
              t_52 = (ATerm) ATgetNext((ATermList) t);
              t = s_52;
              if(match_int(t, 34))
                {
                  ATerm p_35 = t;
                  int r_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, q_52);
                      LocalPopChoice(r_35);
                    }
                  else
                    {
                      t = p_35;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_52), term_y_33), term_u_34);
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
                          t = (ATerm) ATinsert(ATempty, q_52);
                          LocalPopChoice(t_35);
                        }
                      else
                        {
                          t = s_35;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_52), term_u_34), term_u_34);
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
                              t = (ATerm) ATinsert(ATempty, q_52);
                              LocalPopChoice(v_35);
                            }
                          else
                            {
                              t = u_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(t_52), term_g_35), term_u_34);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATinsert(ATempty, q_52);
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, q_52);
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
      ATerm j_103 = NULL,n_52 = NULL;
      j_103 = t;
      t = SSL_explode_string(j_103);
      t = map_1_0(a_6, t);
      t = concat_0_0(t);
      n_52 = t;
      t = SSL_implode_string(n_52);
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      {
        ATerm s_53 = NULL,t_53 = NULL;
        t_53 = t;
        t = SSL_explode_string(t_53);
        t = escape_chars_0_0(t);
        s_53 = t;
        t = SSL_implode_string(s_53);
      }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm z_35 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_35;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,e_54 = NULL,h_54 = NULL,k_54 = NULL,y_53 = NULL,z_53 = NULL,q_14 = NULL;
  t = filter_1_0(b_6, t);
  r_103 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_103 = ATgetFirst((ATermList) t);
      p_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_103);
  n_103 = t;
  t = SSL_explode_string(o_103);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_103 = ATgetFirst((ATermList) t);
      {
        ATerm a_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_103;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_103, term_e_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_g_36, q_103);
        t = leq_0_0(t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = (ATerm) ATmakeAppl(sym__2, q_103, term_k_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_l_36, q_103);
        t = leq_0_0(t);
      }
  }
  t = (ATerm) ATinsert(CheckATermList(p_103), o_103);
  q_14 = t;
  t = SSLsetAnnotations(q_14, n_103);
  z_53 = t;
  t = term_m_36;
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, z_53);
  t = f_11(y_53, z_53, t);
  m_103 = t;
  t = SSL_concat_strings(m_103);
  l_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_103, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_37), term_h_37), term_f_37), term_a_37), term_x_36), term_w_36), term_v_36), term_u_36), term_t_36), term_s_36), term_q_36), term_p_36), term_n_36));
  {
    ATerm k_37 = t;
    if((PushChoice() == 0))
      {
        ATerm s_103 = NULL,t_103 = NULL;
        if(match_cons(t, sym__2))
          {
            s_103 = ATgetArgument(t, 0);
            t_103 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_103;
        {
          static ATerm c_6 (ATerm t)
          {
            if((s_103 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(c_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, s_103, t_103);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_37;
      }
  }
  t = l_103;
  t = escape_0_0(t);
  h_54 = t;
  t = SSL_explode_string(h_54);
  k_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_33)), k_54), (ATerm) ATinsert(ATempty, term_y_33));
  t = concat_0_0(t);
  e_54 = t;
  t = SSL_implode_string(e_54);
  return(t);
}
static ATerm j_104 (ATerm w_103, ATerm t)
{
  ATerm x_103 = NULL;
  t = SSL_explode_term(w_103);
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_103;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_103 = NULL,a_104 = NULL,g_104 = NULL;
  g_104 = t;
  if(match_cons(t, sym__2))
    {
      z_103 = ATgetArgument(t, 0);
      a_104 = ATgetArgument(t, 1);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_6 (ATerm t)
            {
              t = a_104;
              return(t);
            }
            t = z_103;
            t = at_end_1_0(d_6, t);
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = j_104(g_104, t);
          }
      }
    }
  else
    {
      t = j_104(g_104, t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_37);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_37);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_37);
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
              t = (ATerm) ATinsert(ATempty, term_u_37);
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
                                    ATerm p_105 = NULL,q_105 = NULL;
                                    t = d_105;
                                    t = Sym2Strs_0_0(t);
                                    p_105 = t;
                                    t = e_105;
                                    t = Sym2Strs_0_0(t);
                                    q_105 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_37)), q_105), p_105);
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
                                        ATerm t_105 = NULL,u_105 = NULL;
                                        t = d_105;
                                        t = Sym2Strs_0_0(t);
                                        t_105 = t;
                                        t = e_105;
                                        t = Sym2Strs_0_0(t);
                                        u_105 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_37)), u_105), t_105);
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
                                            ATerm w_105 = NULL;
                                            t = d_105;
                                            t = Sym2Strs_0_0(t);
                                            w_105 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_37)), w_105);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = v_37;
                                          {
                                            ATerm b_38 = t;
                                            int e_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    d_105 = ATgetArgument(t, 0);
                                                    e_105 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm h_38 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(e_38);
                                                {
                                                  ATerm a_106 = NULL,b_106 = NULL;
                                                  t = d_105;
                                                  t = Sym2Strs_0_0(t);
                                                  a_106 = t;
                                                  t = e_105;
                                                  t = Sym2Strs_0_0(t);
                                                  b_106 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_37)), b_106), a_106);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = b_38;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    d_105 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_106 = NULL;
                                                      t = d_105;
                                                      t = Sym2Strs_0_0(t);
                                                      h_106 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, h_106), (ATerm) ATinsert(ATempty, term_k_38));
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
                                                          ATerm k_106 = NULL,l_106 = NULL;
                                                          t = d_105;
                                                          t = Sym2Strs_0_0(t);
                                                          k_106 = t;
                                                          t = e_105;
                                                          t = Sym2Strs_0_0(t);
                                                          l_106 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_106), (ATerm) ATinsert(ATempty, term_l_38)), k_106);
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
                                                              ATerm o_106 = NULL,p_106 = NULL;
                                                              t = d_105;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              o_106 = t;
                                                              t = e_105;
                                                              t = Sym2Strs_0_0(t);
                                                              p_106 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_106), (ATerm) ATinsert(ATempty, term_m_38)), o_106);
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
                                                                  ATerm s_106 = NULL,t_106 = NULL;
                                                                  t = d_105;
                                                                  t = Sym2Strs_0_0(t);
                                                                  s_106 = t;
                                                                  t = e_105;
                                                                  t = Sym2Strs_0_0(t);
                                                                  t_106 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_106), (ATerm) ATinsert(ATempty, term_o_38)), s_106);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    d_105 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm v_106 = NULL;
                                                                      t = d_105;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      v_106 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(v_106), term_p_38);
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
                                                                                  ATerm k_55 = NULL;
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
                                                                                  k_55 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, k_55);
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
  ATerm j_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL;
  s_112 = t;
  t = SSL_explode_string(s_112);
  j_112 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_112 = ATgetFirst((ATermList) t);
      {
        ATerm c_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_112;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = j_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_39 = ATgetFirst((ATermList) t);
      q_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_112;
  t = at_last_1_0(k_6, t);
  p_112 = t;
  t = SSL_implode_string(p_112);
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
      ATerm f_107 = NULL,g_107 = NULL;
      if(match_cons(t, sym__2))
        {
          f_107 = ATgetArgument(t, 0);
          g_107 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, f_107, g_107);
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(f_107, g_107);
            LocalPopChoice(g_39);
          }
        else
          {
            t = f_39;
            t = SSL_gtr(f_107, g_107);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, f_107, g_107);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_39;
    }
  return(t);
}
static ATerm r_107 (ATerm n_107, ATerm t)
{
  t = SSL_explode_string(n_107);
  {
    ATerm j_39 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(p_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_39;
      }
  }
  t = term_l_39;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_55 = NULL;
      x_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_55, term_o_39);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_39, x_55);
      t = leq_0_0(t);
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      {
        ATerm v_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_55 = NULL;
            y_55 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_55, term_e_36);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_g_36, y_55);
            t = leq_0_0(t);
            LocalPopChoice(y_39);
          }
        else
          {
            t = v_39;
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_56 = NULL;
                  a_56 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_56, term_k_36);
                  t = leq_0_0(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_l_36, a_56);
                  t = leq_0_0(t);
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_r_14;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm q_107 = NULL;
  q_107 = t;
  if(match_string(t, "|="))
    {
      ATerm b_40 = t;
      int c_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_107(q_107, t);
          LocalPopChoice(c_40);
        }
      else
        {
          t = b_40;
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
              t = r_107(q_107, t);
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
              int k_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_107(q_107, t);
                  LocalPopChoice(k_40);
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
                      t = r_107(q_107, t);
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
                          t = r_107(q_107, t);
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
                          int u_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = r_107(q_107, t);
                              LocalPopChoice(u_40);
                            }
                          else
                            {
                              t = s_40;
                              t = term_w_40;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm x_40 = t;
                              int z_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = r_107(q_107, t);
                                  LocalPopChoice(z_40);
                                }
                              else
                                {
                                  t = x_40;
                                  t = term_a_41;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm b_41 = t;
                                  int d_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = r_107(q_107, t);
                                      LocalPopChoice(d_41);
                                    }
                                  else
                                    {
                                      t = b_41;
                                      t = term_f_41;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm g_41 = t;
                                      int j_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = r_107(q_107, t);
                                          LocalPopChoice(j_41);
                                        }
                                      else
                                        {
                                          t = g_41;
                                          t = term_p_41;
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
                                              t = r_107(q_107, t);
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
                                              ATerm x_41 = t;
                                              int y_41 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = r_107(q_107, t);
                                                  LocalPopChoice(y_41);
                                                }
                                              else
                                                {
                                                  t = x_41;
                                                  t = term_z_41;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm c_42 = t;
                                                  int e_42 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = r_107(q_107, t);
                                                      LocalPopChoice(e_42);
                                                    }
                                                  else
                                                    {
                                                      t = c_42;
                                                      t = term_f_42;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm g_42 = t;
                                                      int h_42 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = r_107(q_107, t);
                                                          LocalPopChoice(h_42);
                                                        }
                                                      else
                                                        {
                                                          t = g_42;
                                                          t = term_i_42;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm m_42 = t;
                                                          int n_42 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = r_107(q_107, t);
                                                              LocalPopChoice(n_42);
                                                            }
                                                          else
                                                            {
                                                              t = m_42;
                                                              t = term_o_38;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm q_42 = t;
                                                              int r_42 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = r_107(q_107, t);
                                                                  LocalPopChoice(r_42);
                                                                }
                                                              else
                                                                {
                                                                  t = q_42;
                                                                  t = term_s_42;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm u_42 = t;
                                                                  int v_42 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = r_107(q_107, t);
                                                                      LocalPopChoice(v_42);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = u_42;
                                                                      t = term_s_42;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm z_42 = t;
                                                                      int j_43 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = r_107(q_107, t);
                                                                          LocalPopChoice(j_43);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_42;
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
                                                                              t = r_107(q_107, t);
                                                                              LocalPopChoice(m_43);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_43;
                                                                              t = term_p_43;
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
                                                                                  t = r_107(q_107, t);
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
                                                                                  ATerm v_43 = t;
                                                                                  int w_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = r_107(q_107, t);
                                                                                      LocalPopChoice(w_43);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_43;
                                                                                      t = term_x_43;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm z_43 = t;
                                                                                      int a_44 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = r_107(q_107, t);
                                                                                          LocalPopChoice(a_44);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_43;
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
                                                                                              t = r_107(q_107, t);
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
                                                                                                  t = r_107(q_107, t);
                                                                                                  LocalPopChoice(g_44);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = f_44;
                                                                                                  t = term_i_44;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm j_44 = t;
                                                                                                  int m_44 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = r_107(q_107, t);
                                                                                                      LocalPopChoice(m_44);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_44;
                                                                                                      t = term_n_44;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm o_44 = t;
                                                                                                      int s_44 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = r_107(q_107, t);
                                                                                                          LocalPopChoice(s_44);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = o_44;
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
                                                                                                              t = r_107(q_107, t);
                                                                                                              LocalPopChoice(v_44);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = u_44;
                                                                                                              t = term_w_44;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm x_44 = t;
                                                                                                              int y_44 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = r_107(q_107, t);
                                                                                                                  LocalPopChoice(y_44);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_44;
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
                                                                                                                      t = r_107(q_107, t);
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
                                                                                                                      ATerm f_45 = t;
                                                                                                                      int g_45 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = r_107(q_107, t);
                                                                                                                          LocalPopChoice(g_45);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = f_45;
                                                                                                                          t = term_l_38;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm h_45 = t;
                                                                                                                          int i_45 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = r_107(q_107, t);
                                                                                                                              LocalPopChoice(i_45);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_45;
                                                                                                                              t = term_l_45;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm o_45 = t;
                                                                                                                              int q_45 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = r_107(q_107, t);
                                                                                                                                  LocalPopChoice(q_45);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = o_45;
                                                                                                                                  t = term_v_45;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm w_45 = t;
                                                                                                                                  int z_45 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = r_107(q_107, t);
                                                                                                                                      LocalPopChoice(z_45);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = w_45;
                                                                                                                                      t = term_b_46;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm i_46 = t;
                                                                                                                                      int k_46 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = r_107(q_107, t);
                                                                                                                                          LocalPopChoice(k_46);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = i_46;
                                                                                                                                          t = term_n_46;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm o_46 = t;
                                                                                                                                          int p_46 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = r_107(q_107, t);
                                                                                                                                              LocalPopChoice(p_46);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = o_46;
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
                                                                                                                                                  t = r_107(q_107, t);
                                                                                                                                                  LocalPopChoice(t_46);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = s_46;
                                                                                                                                                  t = term_x_46;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm y_46 = t;
                                                                                                                                                  int a_47 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = r_107(q_107, t);
                                                                                                                                                      LocalPopChoice(a_47);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = y_46;
                                                                                                                                                      t = term_d_47;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm e_47 = t;
                                                                                                                                                      int g_47 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_107(q_107, t);
                                                                                                                                                          LocalPopChoice(g_47);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = e_47;
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
                                                                                                                                                              t = r_107(q_107, t);
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
                                                                                                                                                          t = r_107(q_107, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm f_11 (ATerm s_28, ATerm t_28, ATerm t)
{
  ATerm m_108 = NULL,n_108 = NULL;
  t = t_28;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_28;
    }
  else
    {
      ATerm h_56 = NULL,k_56 = NULL,e_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_108 = ATgetFirst((ATermList) t);
          n_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_28);
      h_56 = t;
      t = n_108;
      {
        static ATerm a_57 (ATerm t)
        {
          ATerm l_47 = t;
          int m_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_56 = NULL;
              l_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_56;
              LocalPopChoice(m_47);
            }
          else
            {
              t = l_47;
              {
                ATerm n_56 = NULL;
                t = Cons_2_0(_id, a_57, t);
                n_56 = t;
                t = (ATerm) ATinsert(CheckATermList(n_56), s_28);
              }
            }
          return(t);
        }
        t = a_57(t);
      }
      k_56 = t;
      t = (ATerm) ATinsert(CheckATermList(k_56), m_108);
      e_19 = t;
      t = SSLsetAnnotations(e_19, h_56);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_109 = ATgetFirst((ATermList) t);
      d_109 = (ATerm) ATgetNext((ATermList) t);
      t = d_109;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_109 = ATgetFirst((ATermList) t);
          b_109 = (ATerm) ATgetNext((ATermList) t);
          t = a_109;
          if(match_int(t, 34))
            {
              t = c_109;
              if(match_int(t, 92))
                {
                  ATerm n_47 = t;
                  int o_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_109 = NULL;
                      t = b_109;
                      t = De_Escape_0_0(t);
                      h_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_109), term_y_33);
                      LocalPopChoice(o_47);
                    }
                  else
                    {
                      t = n_47;
                      {
                        ATerm k_109 = NULL;
                        t = d_109;
                        t = De_Escape_0_0(t);
                        k_109 = t;
                        t = (ATerm) ATinsert(CheckATermList(k_109), c_109);
                      }
                    }
                }
              else
                {
                  ATerm n_109 = NULL;
                  t = d_109;
                  t = De_Escape_0_0(t);
                  n_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_109), c_109);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = c_109;
                  if(match_int(t, 92))
                    {
                      ATerm p_47 = t;
                      int q_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_109 = NULL;
                          t = b_109;
                          t = De_Escape_0_0(t);
                          p_109 = t;
                          t = (ATerm) ATinsert(CheckATermList(p_109), term_u_34);
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
                            t = (ATerm) ATinsert(CheckATermList(s_109), c_109);
                          }
                        }
                    }
                  else
                    {
                      ATerm v_109 = NULL;
                      t = d_109;
                      t = De_Escape_0_0(t);
                      v_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_109), c_109);
                    }
                }
              else
                {
                  ATerm y_109 = NULL;
                  t = d_109;
                  t = De_Escape_0_0(t);
                  y_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_109), c_109);
                }
            }
        }
      else
        {
          ATerm b_110 = NULL;
          t = d_109;
          t = De_Escape_0_0(t);
          b_110 = t;
          t = (ATerm) ATinsert(CheckATermList(b_110), c_109);
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
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL;
  k_110 = t;
  t = SSL_explode_string(k_110);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_110 = ATgetFirst((ATermList) t);
      o_110 = (ATerm) ATgetNext((ATermList) t);
      t = o_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_110 = ATgetFirst((ATermList) t);
          m_110 = (ATerm) ATgetNext((ATermList) t);
          t = l_110;
          if(match_int(t, 34))
            {
              t = n_110;
              if(match_int(t, 92))
                {
                  ATerm r_47 = t;
                  int s_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_110 = NULL;
                      t = m_110;
                      t = De_Escape_0_0(t);
                      r_110 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_110), term_y_33);
                      LocalPopChoice(s_47);
                    }
                  else
                    {
                      t = r_47;
                      {
                        ATerm u_110 = NULL;
                        t = o_110;
                        t = De_Escape_0_0(t);
                        u_110 = t;
                        t = (ATerm) ATinsert(CheckATermList(u_110), n_110);
                      }
                    }
                }
              else
                {
                  ATerm x_110 = NULL;
                  t = o_110;
                  t = De_Escape_0_0(t);
                  x_110 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_110), n_110);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = n_110;
                  if(match_int(t, 92))
                    {
                      ATerm t_47 = t;
                      int u_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_110 = NULL;
                          t = m_110;
                          t = De_Escape_0_0(t);
                          z_110 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_110), term_u_34);
                          LocalPopChoice(u_47);
                        }
                      else
                        {
                          t = t_47;
                          {
                            ATerm e_111 = NULL;
                            t = o_110;
                            t = De_Escape_0_0(t);
                            e_111 = t;
                            t = (ATerm) ATinsert(CheckATermList(e_111), n_110);
                          }
                        }
                    }
                  else
                    {
                      ATerm h_111 = NULL;
                      t = o_110;
                      t = De_Escape_0_0(t);
                      h_111 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_111), n_110);
                    }
                }
              else
                {
                  ATerm k_111 = NULL;
                  t = o_110;
                  t = De_Escape_0_0(t);
                  k_111 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_111), n_110);
                }
            }
        }
      else
        {
          ATerm n_111 = NULL;
          t = o_110;
          t = De_Escape_0_0(t);
          n_111 = t;
          t = (ATerm) ATinsert(CheckATermList(n_111), n_110);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  j_110 = t;
  t = SSL_implode_string(j_110);
  return(t);
}
ATerm list_ana_1_0 (ATerm q_126 (ATerm), ATerm t)
{
  static ATerm y_111 (ATerm t)
  {
    ATerm v_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_111 = NULL;
        t = q_126(t);
        t_111 = t;
        t = (ATerm) ATinsert(ATempty, t_111);
        LocalPopChoice(z_47);
      }
    else
      {
        t = v_47;
        {
          ATerm c_48 = t;
          int d_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_111 = NULL,h_57 = NULL;
              x_111 = t;
              t = SSL_explode_term(x_111);
              if(match_cons(t, sym__2))
                {
                  ATerm e_48 = ATgetArgument(t, 0);
                  h_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_57;
              t = filter_1_0(y_111, t);
              t = concat_0_0(t);
              LocalPopChoice(d_48);
            }
          else
            {
              t = c_48;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = y_111(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm d_112 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      d_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_112;
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        LocalPopChoice(g_48);
      }
    else
      {
        t = f_48;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm c_112 = NULL,k_57 = NULL,l_57 = NULL;
  t = list_ana_1_0(v_6, t);
  l_57 = t;
  t = term_m_36;
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, l_57);
  t = f_11(k_57, l_57, t);
  c_112 = t;
  t = SSL_concat_strings(c_112);
  {
    ATerm h_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(j_48);
      }
    else
      {
        t = h_48;
      }
  }
  return(t);
}
static ATerm y_113 (ATerm e_113, ATerm f_113, ATerm g_113, ATerm t)
{
  ATerm j_113 = NULL;
  t = g_113;
  {
    ATerm l_48 = t;
    int m_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_113;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        j_113 = t;
        LocalPopChoice(m_48);
      }
    else
      {
        t = l_48;
        {
          ATerm n_48 = t;
          int o_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_113 = NULL,m_113 = NULL;
              t = (ATerm) ATinsert(ATempty, f_113);
              t = syms2strs_0_0(t);
              l_113 = t;
              t = e_113;
              t = filter_1_0(lit2str_0_0, t);
              m_113 = t;
              t = filter_1_0(w_6, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_48 = ATgetFirst((ATermList) t);
                  ATerm s_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, l_113, m_113);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              j_113 = t;
              LocalPopChoice(o_48);
            }
          else
            {
              t = n_48;
              {
                ATerm t_48 = t;
                int v_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_113;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    j_113 = t;
                    LocalPopChoice(v_48);
                  }
                else
                  {
                    t = t_48;
                    {
                      ATerm o_113 = NULL,p_113 = NULL;
                      t = (ATerm) ATinsert(ATempty, f_113);
                      t = syms2strs_0_0(t);
                      o_113 = t;
                      t = term_r_14;
                      t = new_0_0(t);
                      p_113 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_113, (ATerm) ATinsert(ATinsert(ATempty, p_113), term_x_48));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      j_113 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = j_113;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm y_48 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_48;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
  r_113 = t;
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            s_113 = ATgetArgument(t, 0);
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
        LocalPopChoice(a_49);
        t = s_113;
        {
          ATerm e_49 = t;
          int n_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_57 = NULL,z_57 = NULL;
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
              t = SSL_explode_string(s_113);
              z_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_33)), z_57), (ATerm) ATinsert(ATempty, term_y_33));
              t = concat_0_0(t);
              t_57 = t;
              t = SSL_implode_string(t_57);
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
        t = z_48;
        if(match_cons(t, sym_prod_3))
          {
            s_113 = ATgetArgument(t, 0);
            t_113 = ATgetArgument(t, 1);
            {
              ATerm p_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_113;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm q_49 = t;
            int r_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_113(s_113, t_113, r_113, t);
                LocalPopChoice(r_49);
              }
            else
              {
                t = q_49;
                {
                  ATerm w_113 = NULL;
                  t = (ATerm) ATinsert(ATempty, t_113);
                  t = syms2strs_0_0(t);
                  w_113 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_113, (ATerm) ATinsert(ATempty, term_u_49));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = y_113(s_113, t_113, r_113, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL;
  d_116 = t;
  if(match_cons(t, sym_sort_1))
    {
      e_116 = ATgetArgument(t, 0);
      {
        ATerm e_58 = NULL,u_19 = NULL;
        t = SSLgetAnnotations(d_116);
        e_58 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, e_116);
        u_19 = t;
        t = SSLsetAnnotations(u_19, e_58);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          e_116 = ATgetArgument(t, 0);
          f_116 = ATgetArgument(t, 1);
          {
            ATerm l_59 = NULL,s_59 = NULL,u_59 = NULL,f_23 = NULL;
            t = SSLgetAnnotations(d_116);
            l_59 = t;
            t = e_116;
            t = syntaxless_sort_0_0(t);
            s_59 = t;
            t = f_116;
            t = syntaxless_sort_0_0(t);
            u_59 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, s_59, u_59);
            f_23 = t;
            t = SSLsetAnnotations(f_23, l_59);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              e_116 = ATgetArgument(t, 0);
              {
                ATerm e_60 = NULL,r_60 = NULL,h_23 = NULL;
                t = SSLgetAnnotations(d_116);
                e_60 = t;
                t = e_116;
                t = syntaxless_sort_0_0(t);
                r_60 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, r_60);
                h_23 = t;
                t = SSLsetAnnotations(h_23, e_60);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  e_116 = ATgetArgument(t, 0);
                  {
                    ATerm z_60 = NULL,f_61 = NULL,i_23 = NULL;
                    t = SSLgetAnnotations(d_116);
                    z_60 = t;
                    t = e_116;
                    t = syntaxless_sort_0_0(t);
                    f_61 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, f_61);
                    i_23 = t;
                    t = SSLsetAnnotations(i_23, z_60);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      e_116 = ATgetArgument(t, 0);
                      {
                        ATerm l_61 = NULL,q_61 = NULL,j_23 = NULL;
                        t = SSLgetAnnotations(d_116);
                        l_61 = t;
                        t = e_116;
                        t = syntaxless_sort_0_0(t);
                        q_61 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, q_61);
                        j_23 = t;
                        t = SSLsetAnnotations(j_23, l_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          e_116 = ATgetArgument(t, 0);
                          f_116 = ATgetArgument(t, 1);
                          {
                            ATerm a_62 = NULL,d_62 = NULL,k_23 = NULL;
                            t = SSLgetAnnotations(d_116);
                            a_62 = t;
                            t = e_116;
                            t = syntaxless_sort_0_0(t);
                            d_62 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, d_62, f_116);
                            k_23 = t;
                            t = SSLsetAnnotations(k_23, a_62);
                          }
                        }
                      else
                        {
                          ATerm l_62 = NULL,o_62 = NULL,l_23 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              e_116 = ATgetArgument(t, 0);
                              f_116 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(d_116);
                          l_62 = t;
                          t = e_116;
                          t = syntaxless_sort_0_0(t);
                          o_62 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, o_62, f_116);
                          l_23 = t;
                          t = SSLsetAnnotations(l_23, l_62);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL,o_24 = NULL,n_24 = NULL;
  b_117 = t;
  if(match_cons(t, sym_prod_3))
    {
      s_116 = ATgetArgument(t, 0);
      t_116 = ATgetArgument(t, 1);
      u_116 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_117);
  r_116 = t;
  t = s_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_116 = ATgetFirst((ATermList) t);
      y_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_116);
  w_116 = t;
  t = x_116;
  t = syntaxless_sort_0_0(t);
  z_116 = t;
  t = y_116;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_116), z_116);
  n_24 = t;
  t = SSLsetAnnotations(n_24, w_116);
  a_117 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, a_117, t_116, u_116);
  o_24 = t;
  t = SSLsetAnnotations(o_24, r_116);
  v_116 = t;
  t = term_v_49;
  t = get_options_0_0(t);
  t = oncetd_1_0(x_6, t);
  t = v_116;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm d_117 = NULL,h_117 = NULL;
  ATerm w_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm y_49 = ATgetArgument(t, 0);
          ATerm z_49 = ATgetArgument(t, 1);
          ATerm a_50 = ATgetArgument(t, 2);
          d_117 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(x_49);
      t = d_117;
      t = oncetd_1_0(z_6, t);
      t = term_r_14;
    }
  else
    {
      t = w_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm b_50 = ATgetArgument(t, 0);
          ATerm c_50 = ATgetArgument(t, 1);
          h_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_117;
      t = oncetd_1_0(e_7, t);
      t = term_r_14;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm l_117 = NULL,p_117 = NULL;
  ATerm d_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm g_50 = ATgetArgument(t, 0);
          ATerm h_50 = ATgetArgument(t, 1);
          ATerm i_50 = ATgetArgument(t, 2);
          l_117 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(e_50);
      t = l_117;
      t = oncetd_1_0(g_7, t);
      t = term_r_14;
    }
  else
    {
      t = d_50;
      if(match_cons(t, sym_prod_3))
        {
          ATerm j_50 = ATgetArgument(t, 0);
          ATerm r_50 = ATgetArgument(t, 1);
          p_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_117;
      t = oncetd_1_0(i_7, t);
      t = term_r_14;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm w_117 = NULL;
  w_117 = t;
  {
    ATerm s_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_62 = NULL;
        t = w_117;
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
        t = w_117;
        t = mk_constr_0_0(t);
        v_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_117, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, v_62)));
        t = add_attributes_0_0(t);
        LocalPopChoice(u_50);
      }
    else
      {
        t = s_50;
        {
          ATerm y_117 = NULL;
          static ATerm k_7 (ATerm t)
          {
            ATerm z_117 = NULL,a_118 = NULL,b_118 = NULL,r_26 = NULL;
            b_118 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm c_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_118);
            z_117 = t;
            t = not_null(y_117);
            t = uq2q_0_0(t);
            a_118 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, a_118);
            r_26 = t;
            t = SSLsetAnnotations(r_26, z_117);
            return(t);
          }
          t = w_117;
          t = get_constr_0_0(t);
          if(((y_117 != NULL) && (y_117 != t)))
            _fail(t);
          else
            y_117 = t;
          t = w_117;
          t = oncetd_1_0(k_7, t);
        }
      }
  }
  return(t);
}
static ATerm l_11 (ATerm d_22, ATerm e_22, ATerm c_22, ATerm b_22, ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL;
  ATerm d_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm r_7 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((d_118 != NULL) && (d_118 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              d_118 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = c_22;
      t = oncetd_1_0(r_7, t);
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
            ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,y_26 = NULL,w_26 = NULL;
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
            w_26 = t;
            t = SSLsetAnnotations(w_26, m_118);
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
              static ATerm s_7 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((d_118 != NULL) && (d_118 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      d_118 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(s_7, t);
            }
            k_118 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, h_118, i_118, k_118);
            y_26 = t;
            t = SSLsetAnnotations(y_26, g_118);
            LocalPopChoice(g_51);
          }
        else
          {
            t = f_51;
            t = term_h_51;
            d_118 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, d_22, e_22, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(d_118))))), (ATerm) ATinsert(ATempty, not_null(d_118)));
  t = get_pp_entry_0_0(t);
  e_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_118), e_118);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm i_51 = t;
  if((PushChoice() == 0))
    {
      ATerm x_118 = NULL,y_118 = NULL,z_118 = NULL,e_27 = NULL;
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
      e_27 = t;
      t = SSLsetAnnotations(e_27, x_118);
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
      ATerm a_119 = NULL,b_119 = NULL,c_119 = NULL,f_27 = NULL;
      c_119 = t;
      if(match_cons(t, sym_lit_1))
        {
          b_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_119);
      a_119 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, b_119);
      f_27 = t;
      t = SSLsetAnnotations(f_27, a_119);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_51;
    }
  return(t);
}
static ATerm m_11 (ATerm k_21, ATerm i_21, ATerm j_21, ATerm l_21, ATerm t)
{
  ATerm s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL;
  static ATerm v_7 (ATerm t)
  {
    ATerm k_51 = t;
    int l_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_51 = t;
        int n_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_7 (ATerm t)
            {
              t = not_null(u_118);
              return(t);
            }
            t = Instantiate_1_0(w_7, t);
            LocalPopChoice(n_51);
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
  t = l_11(k_21, i_21, j_21, l_21, t);
  if(match_cons(t, sym__2))
    {
      s_118 = ATgetArgument(t, 0);
      t_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_21;
  t = filter_1_0(t_7, t);
  v_118 = t;
  t = l_21;
  t = filter_1_0(u_7, t);
  w_118 = t;
  t = (ATerm) ATmakeAppl(sym__4, v_118, w_118, (ATerm)ATinsert(ATempty, s_118), term_y_14);
  t = seq2abox_0_0(t);
  if(((u_118 != NULL) && (u_118 != t)))
    _fail(t);
  else
    u_118 = t;
  t = t_118;
  t = bottomup_1_0(v_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL;
  v_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_119;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_119 = ATgetFirst((ATermList) t);
          x_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_51 = t;
        int p_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_63 = NULL,f_63 = NULL,g_63 = NULL,k_27 = NULL;
            t = SSLgetAnnotations(v_119);
            c_63 = t;
            t = w_119;
            t = f_109(t);
            f_63 = t;
            t = x_119;
            t = filter_1_0(f_109, t);
            g_63 = t;
            t = (ATerm) ATinsert(CheckATermList(g_63), f_63);
            k_27 = t;
            t = SSLsetAnnotations(k_27, c_63);
            LocalPopChoice(p_51);
          }
        else
          {
            t = o_51;
            t = x_119;
            t = filter_1_0(f_109, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  static ATerm x_7 (ATerm t)
  {
    t = topdown_1_0(m_95, t);
    return(t);
  }
  t = m_95(t);
  t = SRTS_all(x_7, t);
  return(t);
}
ATerm sometd_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  static ATerm a_120 (ATerm t)
  {
    ATerm q_51 = t;
    int r_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_97(t);
        LocalPopChoice(r_51);
      }
    else
      {
        t = q_51;
        t = SRTS_some(a_120, t);
      }
    return(t);
  }
  t = a_120(t);
  return(t);
}
ATerm repeat_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  static ATerm b_120 (ATerm t)
  {
    ATerm s_51 = t;
    int t_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_94(t);
        t = b_120(t);
        LocalPopChoice(t_51);
      }
    else
      {
        t = s_51;
        t = n_94(t);
      }
    return(t);
  }
  t = b_120(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  static ATerm p_120 (ATerm t)
  {
    ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL;
    o_120 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_120 = ATgetFirst((ATermList) t);
        n_120 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_63 = NULL,t_63 = NULL,d_28 = NULL;
          t = SSLgetAnnotations(o_120);
          q_63 = t;
          t = n_120;
          t = p_120(t);
          t_63 = t;
          t = (ATerm) ATinsert(CheckATermList(t_63), m_120);
          d_28 = t;
          t = SSLsetAnnotations(d_28, q_63);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_120;
        t = o_102(t);
      }
    return(t);
  }
  t = p_120(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_120 = NULL,t_120 = NULL,u_120 = NULL;
  s_120 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_120;
    }
  else
    {
      static ATerm y_7 (ATerm t)
      {
        t = not_null(u_120);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_120 = ATgetFirst((ATermList) t);
          if(((u_120 != NULL) && (u_120 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_120;
      t = at_end_1_0(y_7, t);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      o_64 = ATgetArgument(t, 0);
      p_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(o_64);
  q_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_64), term_w_51), q_64), term_v_51);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL;
  n_121 = t;
  if(match_cons(t, sym_Path1_1))
    {
      o_121 = ATgetArgument(t, 0);
      t = o_121;
    }
  else
    {
      ATerm m_64 = NULL,n_64 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          o_121 = ATgetArgument(t, 0);
          p_121 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_121;
      t = map_1_0(b_8, t);
      t = concat_0_0(t);
      m_64 = t;
      t = (ATerm) ATinsert(CheckATermList(m_64), o_121);
      n_64 = t;
      t = SSL_concat_strings(n_64);
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm h_122 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      h_122 = ATgetArgument(t, 0);
      {
        ATerm x_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_122;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm x_121 = NULL,y_121 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      x_121 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, x_121);
    }
  else
    {
      ATerm g_122 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          x_121 = ATgetArgument(t, 0);
          y_121 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_121;
      t = map_1_0(c_8, t);
      g_122 = t;
      t = (ATerm) ATinsert(CheckATermList(g_122), x_121);
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
  t = term_a_52;
  return(t);
}
static ATerm n_11 (ATerm w_63, ATerm x_63, ATerm t)
{
  ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL;
  t = w_63;
  t = mk_key_0_0(t);
  j_122 = t;
  t = term_y_25;
  k_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
  l_122 = t;
  t = SSL_table_put(k_122, j_122, l_122);
  t = w_63;
  t = path_to_string_0_0(t);
  i_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_122, x_63);
  t = if_verbose1_1_0(d_8, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm q_111 (ATerm), ATerm t)
{
  static ATerm c_123 (ATerm t)
  {
    ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL;
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_111(t);
        LocalPopChoice(d_52);
      }
    else
      {
        t = c_52;
      }
    b_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_122 = ATgetFirst((ATermList) t);
        a_123 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_65 = NULL,l_65 = NULL,p_28 = NULL;
          t = SSLgetAnnotations(b_123);
          e_65 = t;
          t = a_123;
          t = c_123(t);
          l_65 = t;
          t = (ATerm) ATinsert(CheckATermList(l_65), z_122);
          p_28 = t;
          t = SSLsetAnnotations(p_28, e_65);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_123;
      }
    return(t);
  }
  t = c_123(t);
  return(t);
}
ATerm at_last_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  static ATerm z_123 (ATerm t)
  {
    ATerm w_123 = NULL,x_123 = NULL,y_123 = NULL;
    w_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_123 = ATgetFirst((ATermList) t);
        y_123 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_52 = t;
      int f_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_65 = NULL,b_29 = NULL;
          t = SSLgetAnnotations(w_123);
          z_65 = t;
          t = y_123;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(y_123), x_123);
          b_29 = t;
          t = SSLsetAnnotations(b_29, z_65);
          t = z_102(t);
          LocalPopChoice(f_52);
        }
      else
        {
          t = e_52;
          {
            ATerm j_66 = NULL,m_66 = NULL,c_29 = NULL;
            t = SSLgetAnnotations(w_123);
            j_66 = t;
            t = y_123;
            t = z_123(t);
            m_66 = t;
            t = (ATerm) ATinsert(CheckATermList(m_66), x_123);
            c_29 = t;
            t = SSLsetAnnotations(c_29, j_66);
          }
        }
    }
    return(t);
  }
  t = z_123(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm f_124 = NULL,g_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_124 = ATgetFirst((ATermList) t);
      g_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_124;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_124;
    }
  else
    {
      t = g_124;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm o_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_52 = ATgetFirst((ATermList) t);
      o_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_124;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t)
{
  ATerm l_124 = NULL,m_124 = NULL,n_124 = NULL;
  l_124 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_124 = ATgetFirst((ATermList) t);
      {
        ATerm h_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_124;
  t = c_111(t);
  t = l_124;
  t = last_0_0(t);
  t = d_111(t);
  t = l_124;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_52 = ATgetFirst((ATermList) t);
      m_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_124;
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
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_69 = ATgetFirst((ATermList) t);
      c_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_69;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = c_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_69 = ATgetFirst((ATermList) t);
      e_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_69;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(e_69), term_y_33);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(e_69), term_u_34);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(e_69), term_j_52);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_69), term_k_52);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm s_127 = NULL,t_127 = NULL,u_127 = NULL;
  s_127 = t;
  if(match_cons(t, sym_Arg_1))
    {
      t_127 = ATgetArgument(t, 0);
      {
        ATerm t_66 = NULL,v_66 = NULL,f_29 = NULL;
        t = SSLgetAnnotations(s_127);
        t_66 = t;
        t = SSL_string_to_int(t_127);
        v_66 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, v_66);
        f_29 = t;
        t = SSLsetAnnotations(f_29, t_66);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          t_127 = ATgetArgument(t, 0);
          u_127 = ATgetArgument(t, 1);
          {
            ATerm j_67 = NULL,q_67 = NULL,t_67 = NULL,g_29 = NULL;
            t = SSLgetAnnotations(s_127);
            j_67 = t;
            t = SSL_string_to_int(t_127);
            q_67 = t;
            t = SSL_string_to_int(u_127);
            t_67 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, q_67, t_67);
            g_29 = t;
            t = SSLsetAnnotations(g_29, j_67);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              t_127 = ATgetArgument(t, 0);
              u_127 = ATgetArgument(t, 1);
              {
                ATerm j_68 = NULL,h_29 = NULL;
                t = SSLgetAnnotations(s_127);
                j_68 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, t_127, u_127);
                h_29 = t;
                t = SSLsetAnnotations(h_29, j_68);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  t_127 = ATgetArgument(t, 0);
                  {
                    ATerm s_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,i_29 = NULL;
                    t = SSLgetAnnotations(s_127);
                    s_68 = t;
                    t = SSL_explode_string(t_127);
                    t = unquote_chars_2_0(g_8, h_8, t);
                    x_68 = t;
                    t = SSL_implode_string(x_68);
                    w_68 = t;
                    t = SSL_explode_string(w_68);
                    t = unescape_chars_1_0(i_8, t);
                    v_68 = t;
                    t = SSL_implode_string(v_68);
                    u_68 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, u_68);
                    i_29 = t;
                    t = SSLsetAnnotations(i_29, s_68);
                  }
                }
              else
                {
                  ATerm u_69 = NULL,x_69 = NULL,k_29 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      t_127 = ATgetArgument(t, 0);
                      u_127 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_127);
                  u_69 = t;
                  t = SSL_string_to_int(t_127);
                  x_69 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, x_69, u_127);
                  k_29 = t;
                  t = SSLsetAnnotations(k_29, u_69);
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
static ATerm k_8 (ATerm t)
{
  ATerm e_128 = NULL,f_128 = NULL;
  t = topdown_1_0(m_8, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      e_128 = ATgetArgument(t, 0);
      f_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(e_128, f_128, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(m_52);
    }
  else
    {
      t = l_52;
    }
  return(t);
}
static ATerm v_11 (ATerm v_63, ATerm t)
{
  t = v_63;
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(k_8, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  static ATerm i_128 (ATerm t)
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_96(t);
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        t = SRTS_one(i_128, t);
      }
    return(t);
  }
  t = i_128(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm j_128 = NULL,k_128 = NULL;
  t = term_r_52;
  j_128 = t;
  t = term_u_52;
  k_128 = t;
  t = term_v_52;
  t = m_12(j_128, k_128, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm w_52 = t;
  int x_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL;
      t = term_y_52;
      t = get_options_0_0(t);
      t = oncetd_1_0(n_8, t);
      t = term_s_14;
      m_128 = t;
      t = (ATerm) ATinsert(ATempty, term_z_52);
      n_128 = t;
      t = SSL_printnl(m_128, n_128);
      t = term_y_14;
      l_128 = t;
      t = SSL_exit(l_128);
      t = (ATerm) ATinsert(ATempty, term_z_52);
      LocalPopChoice(x_52);
    }
  else
    {
      t = w_52;
      {
        ATerm p_128 = NULL,q_128 = NULL;
        t = term_s_14;
        p_128 = t;
        t = (ATerm) ATinsert(ATempty, term_a_53);
        q_128 = t;
        t = SSL_printnl(p_128, q_128);
        t = (ATerm) ATinsert(ATempty, term_a_53);
      }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,d_70 = NULL,e_70 = NULL;
  t = if_verbose1_1_0(r_8, t);
  t = ReadFromFile_0_0(t);
  x_128 = t;
  t = SSL_explode_term(x_128);
  if(match_cons(t, sym__2))
    {
      e_70 = ATgetArgument(t, 0);
      {
        ATerm b_53 = ATgetArgument(t, 1);
        if(((ATgetType(b_53) == AT_LIST) && !(ATisEmpty(b_53))))
          {
            d_70 = ATgetFirst((ATermList) b_53);
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
  t = e_70;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = d_70;
  if(match_cons(t, sym_PP_Table_1))
    {
      w_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(w_128, t);
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
  t = map_1_0(p_8, t);
  return(t);
}
static ATerm y_11 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_34, ATerm g_34, ATerm t)
{
  t = g_106(t);
  {
    static ATerm x_8 (ATerm t)
    {
      ATerm y_128 = NULL;
      y_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_34, y_128);
      t = f_106(t);
      return(t);
    }
    t = fetch_1_0(x_8, t);
  }
  t = g_34;
  return(t);
}
static ATerm z_11 (ATerm c_106 (ATerm), ATerm d_34, ATerm c_34, ATerm t)
{
  static ATerm o_129 (ATerm t)
  {
    ATerm j_129 = NULL,k_129 = NULL,l_129 = NULL;
    j_129 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_129 = ATgetFirst((ATermList) t);
            l_129 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_53 = t;
          int f_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_129;
              {
                static ATerm y_8 (ATerm t)
                {
                  t = c_34;
                  return(t);
                }
                t = y_11(c_106, y_8, k_129, l_129, t);
              }
              t = o_129(t);
              LocalPopChoice(f_53);
            }
          else
            {
              t = e_53;
              {
                ATerm l_70 = NULL,p_70 = NULL,x_29 = NULL;
                t = SSLgetAnnotations(j_129);
                l_70 = t;
                t = l_129;
                t = o_129(t);
                p_70 = t;
                t = (ATerm) ATinsert(CheckATermList(p_70), k_129);
                x_29 = t;
                t = SSLsetAnnotations(x_29, l_70);
              }
            }
        }
      }
    return(t);
  }
  t = d_34;
  t = o_129(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm t)
{
  ATerm r_129 = NULL,s_129 = NULL,t_129 = NULL;
  r_129 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_129;
      t = d_108(t);
    }
  else
    {
      ATerm w_129 = NULL,x_129 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_129 = ATgetFirst((ATermList) t);
          t_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_129;
      t = f_108(t);
      w_129 = t;
      t = t_129;
      t = foldr_3_0(d_108, e_108, f_108, t);
      x_129 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_129, x_129);
      t = e_108(t);
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t)
{
  ATerm g_53 = t;
  int h_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_130 = NULL;
      t = h_107(t);
      a_130 = t;
      t = (ATerm) ATinsert(ATempty, a_130);
      LocalPopChoice(h_53);
    }
  else
    {
      t = g_53;
      {
        ATerm b_71 = NULL,c_71 = NULL;
        static ATerm a_9 (ATerm t)
        {
          t = collect_om_2_0(h_107, i_107, t);
          return(t);
        }
        c_71 = t;
        t = SSL_explode_term(c_71);
        if(match_cons(t, sym__2))
          {
            ATerm i_53 = ATgetArgument(t, 0);
            b_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_71;
        t = foldr_3_0(z_8, i_107, a_9, t);
      }
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm k_130 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      k_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_130;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm l_130 = NULL,m_130 = NULL;
  if(match_cons(t, sym__2))
    {
      l_130 = ATgetArgument(t, 0);
      m_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(i_9, l_130, m_130, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm n_130 = NULL;
  if(match_cons(t, sym__2))
    {
      n_130 = ATgetArgument(t, 0);
      if((n_130 != ATgetArgument(t, 1)))
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
  ATerm p_130 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      p_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_130;
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
      ATerm r_130 = NULL,s_130 = NULL,t_130 = NULL,z_29 = NULL;
      t_130 = t;
      if(match_cons(t, sym_opt_1))
        {
          s_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_130);
      r_130 = t;
      t = s_130;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, s_130);
      z_29 = t;
      t = SSLsetAnnotations(z_29, r_130);
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
        ATerm u_130 = NULL,v_130 = NULL,w_130 = NULL,a_30 = NULL;
        w_130 = t;
        if(match_cons(t, sym_layout_1))
          {
            v_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_130);
        u_130 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, v_130);
        a_30 = t;
        t = SSLsetAnnotations(a_30, u_130);
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
static ATerm p_9 (ATerm t)
{
  ATerm j_131 = NULL,k_131 = NULL,l_131 = NULL,b_30 = NULL;
  l_131 = t;
  if(match_cons(t, sym_layout_1))
    {
      k_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_131);
  j_131 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, k_131);
  b_30 = t;
  t = SSLsetAnnotations(b_30, j_131);
  return(t);
}
static ATerm a_12 (ATerm u_26, ATerm t_26, ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL,j_130 = NULL;
  t = u_26;
  t = collect_om_2_0(c_9, h_9, t);
  t = reverse_acc_2_0(_id, j_9, t);
  t = read_pp_tables_0_0(t);
  t = t_26;
  t = repeat_2_0(k_9, _id, t);
  j_130 = t;
  t = topdown_1_0(m_9, t);
  {
    ATerm p_53 = t;
    int q_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL;
        z_130 = t;
        if(match_cons(t, sym_appl_2))
          {
            a_131 = ATgetArgument(t, 0);
            e_131 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_131;
        if(match_cons(t, sym_prod_3))
          {
            b_131 = ATgetArgument(t, 0);
            c_131 = ATgetArgument(t, 1);
            d_131 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = z_130;
        t = m_11(b_131, c_131, d_131, e_131, t);
        LocalPopChoice(q_53);
      }
    else
      {
        t = p_53;
        t = fatal_ambiguity_0_0(t);
      }
  }
  h_130 = t;
  t = j_130;
  t = collect_p__1_0(p_9, t);
  i_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_130, i_130);
  t = insert_layout_0_0(t);
  g_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, g_130);
  return(t);
}
static ATerm d_12 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm m_131 = NULL;
  t = SSL_fputc(c_43, d_43);
  m_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_131);
  return(t);
}
static ATerm e_12 (ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm n_131 = NULL;
  t = SSL_write_term_to_stream_text(k_28, l_28);
  n_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_131);
  return(t);
}
static ATerm g_12 (ATerm p_101 (ATerm), ATerm t_195, ATerm o_28, ATerm t)
{
  ATerm o_131 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_195, term_r_53);
  t = j_12(t);
  o_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_131, o_28);
  t = p_101(t);
  t = fclose_0_0(t);
  t = o_28;
  return(t);
}
static ATerm f_12 (ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm p_131 = NULL;
  t = SSL_write_term_to_stream_baf(g_28, h_28);
  p_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_131);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_53 = ATgetArgument(t, 0);
      if(match_cons(u_53, sym_Stream_1))
        {
          g_72 = ATgetArgument(u_53, 0);
        }
      else
        _fail(t);
      h_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(g_72, h_72, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm c_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_53 = ATgetArgument(t, 0);
      if(match_cons(v_53, sym_Stream_1))
        {
          j_73 = ATgetArgument(v_53, 0);
        }
      else
        _fail(t);
      k_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(j_73, k_73, t);
  c_73 = t;
  t = term_j_52;
  h_73 = t;
  t = c_73;
  if(match_cons(t, sym_Stream_1))
    {
      i_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_52, c_73);
  t = d_12(h_73, i_73, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL,w_131 = NULL,x_131 = NULL,z_131 = NULL,a_132 = NULL,b_132 = NULL,c_132 = NULL,d_132 = NULL,d_133 = NULL,e_133 = NULL,h_30 = NULL,g_30 = NULL;
  u_131 = t;
  if(match_cons(t, sym__2))
    {
      b_132 = ATgetArgument(t, 0);
      c_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_131);
  a_132 = t;
  t = b_132;
  {
    ATerm w_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_9 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_131 != NULL) && (t_131 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_9, t);
        LocalPopChoice(x_53);
      }
    else
      {
        t = w_53;
        t = term_a_54;
        t_131 = t;
      }
  }
  d_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_132, c_132);
  g_30 = t;
  t = SSLsetAnnotations(g_30, a_132);
  t = u_131;
  if(match_cons(t, sym__2))
    {
      w_131 = ATgetArgument(t, 0);
      x_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_131);
  v_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_131, (ATerm) ATmakeAppl(sym__2, not_null(t_131), x_131));
  h_30 = t;
  t = SSLsetAnnotations(h_30, v_131);
  z_131 = t;
  if(match_cons(t, sym__2))
    {
      d_133 = ATgetArgument(t, 0);
      e_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_54 = t;
    int c_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,f_72 = NULL,m_30 = NULL;
        t = SSLgetAnnotations(z_131);
        w_71 = t;
        t = d_133;
        t = fetch_1_0(t_9, t);
        a_72 = t;
        t = e_133;
        if(match_cons(t, sym__2))
          {
            c_72 = ATgetArgument(t, 0);
            f_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_12(u_9, c_72, f_72, t);
        b_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_72, b_72);
        m_30 = t;
        t = SSLsetAnnotations(m_30, w_71);
        LocalPopChoice(c_54);
      }
    else
      {
        t = b_54;
        {
          ATerm p_72 = NULL,t_72 = NULL,v_72 = NULL,b_73 = NULL,n_30 = NULL;
          t = SSLgetAnnotations(z_131);
          p_72 = t;
          t = e_133;
          if(match_cons(t, sym__2))
            {
              v_72 = ATgetArgument(t, 0);
              b_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_12(x_9, v_72, b_73, t);
          t_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_133, t_72);
          n_30 = t;
          t = SSLsetAnnotations(n_30, p_72);
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
ATerm apply_strategy_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL,k_133 = NULL,l_133 = NULL;
  l_133 = t;
  t = dtime_0_0(t);
  t = l_133;
  t = f_118(t);
  k_133 = t;
  t = dtime_0_0(t);
  h_133 = t;
  t = k_133;
  if(match_cons(t, sym__2))
    {
      i_133 = ATgetArgument(t, 0);
      j_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_133), (ATerm) ATmakeAppl(sym_Runtime_1, h_133)), j_133);
  return(t);
}
static ATerm z_133 (ATerm t_133, ATerm t)
{
  t = SSL_fclose(t_133);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_133 = NULL,x_133 = NULL;
  x_133 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_133 = ATgetArgument(t, 0);
      {
        ATerm d_54 = t;
        int f_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_133);
            LocalPopChoice(f_54);
          }
        else
          {
            t = d_54;
            t = z_133(x_133, t);
          }
      }
    }
  else
    {
      t = z_133(x_133, t);
    }
  return(t);
}
static ATerm h_12 (ATerm m_28, ATerm t)
{
  t = SSL_read_term_from_stream(m_28);
  return(t);
}
static ATerm i_12 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm a_134 = NULL;
  t = SSL_fopen(e_43, f_43);
  a_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_134);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_134 = NULL;
  t = SSL_stdin_stream();
  b_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_134);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_134 = NULL;
  t = SSL_stdout_stream();
  c_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_134);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_134 = NULL;
  t = SSL_stderr_stream();
  d_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_134);
  return(t);
}
static ATerm l_135 (ATerm j_134, ATerm t)
{
  ATerm k_134 = NULL;
  t = SSL_explode_term(j_134);
  if(match_cons(t, sym__2))
    {
      ATerm g_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_54 = ATgetArgument(t, 1);
        if(((ATgetType(i_54) == AT_LIST) && !(ATisEmpty(i_54))))
          {
            k_134 = ATgetFirst((ATermList) i_54);
            {
              ATerm j_54 = (ATerm) ATgetNext((ATermList) i_54);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_134;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_134;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_134;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_134;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_135 (ATerm n_134, ATerm o_134, ATerm p_134, ATerm t)
{
  ATerm q_134 = NULL,r_134 = NULL,s_134 = NULL,v_134 = NULL,g_32 = NULL;
  t = SSLgetAnnotations(p_134);
  s_134 = t;
  t = n_134;
  if(match_cons(t, sym_Path_1))
    {
      v_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_134, o_134);
  g_32 = t;
  t = SSLsetAnnotations(g_32, s_134);
  if(match_cons(t, sym__2))
    {
      q_134 = ATgetArgument(t, 0);
      r_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(q_134, r_134, t);
  return(t);
}
static ATerm n_135 (ATerm x_134, ATerm y_134, ATerm z_134, ATerm t)
{
  ATerm a_135 = NULL,b_135 = NULL,c_135 = NULL,f_135 = NULL,h_32 = NULL;
  t = SSLgetAnnotations(z_134);
  c_135 = t;
  t = SSL_is_string(x_134);
  f_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_135, y_134);
  h_32 = t;
  t = SSLsetAnnotations(h_32, c_135);
  if(match_cons(t, sym__2))
    {
      a_135 = ATgetArgument(t, 0);
      b_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(a_135, b_135, t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL;
  i_135 = t;
  if(match_cons(t, sym__2))
    {
      j_135 = ATgetArgument(t, 0);
      k_135 = ATgetArgument(t, 1);
      {
        ATerm l_54 = t;
        int m_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_135(i_135, t);
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
static ATerm y_9 (ATerm t)
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
      t = j_12(t);
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
      t = debug_1_0(y_9, t);
      _fail(t);
    }
  p_135 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_12(q_135, t);
  o_135 = t;
  t = p_135;
  t = fclose_0_0(t);
  t = o_135;
  return(t);
}
ATerm fetch_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  static ATerm p_136 (ATerm t)
  {
    ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
    m_136 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_136 = ATgetFirst((ATermList) t);
        o_136 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_54 = t;
      int v_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_73 = NULL,a_74 = NULL,n_32 = NULL;
          t = SSLgetAnnotations(m_136);
          x_73 = t;
          t = n_136;
          t = i_102(t);
          a_74 = t;
          t = (ATerm) ATinsert(CheckATermList(o_136), a_74);
          n_32 = t;
          t = SSLsetAnnotations(n_32, x_73);
          LocalPopChoice(v_54);
        }
      else
        {
          t = u_54;
          {
            ATerm m_74 = NULL,u_74 = NULL,o_32 = NULL;
            t = SSLgetAnnotations(m_136);
            m_74 = t;
            t = o_136;
            t = p_136(t);
            u_74 = t;
            t = (ATerm) ATinsert(CheckATermList(u_74), n_136);
            o_32 = t;
            t = SSLsetAnnotations(o_32, m_74);
          }
        }
    }
    return(t);
  }
  t = p_136(t);
  return(t);
}
static ATerm c_12 (ATerm v_41, ATerm w_41, ATerm t)
{
  t = SSL_strcat(v_41, w_41);
  return(t);
}
ATerm debug_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm s_136 = NULL,t_136 = NULL,u_136 = NULL,v_136 = NULL;
  s_136 = t;
  t = n_101(t);
  t_136 = t;
  t = term_s_14;
  u_136 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_136), t_136);
  v_136 = t;
  t = SSL_printnl(u_136, v_136);
  t = s_136;
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
      ATerm c_137 = NULL;
      c_137 = t;
      t = SSL_is_string(c_137);
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
              ATerm i_137 = NULL,j_137 = NULL,k_137 = NULL;
              i_137 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_137 = ATgetArgument(t, 0);
                  t = j_137;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_137 = ATgetArgument(t, 0);
                      t = j_137;
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
                      ATerm o_137 = NULL,p_137 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_137 = ATgetArgument(t, 0);
                          k_137 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_137;
                      t = eval_config_0_0(t);
                      o_137 = t;
                      t = k_137;
                      t = eval_config_0_0(t);
                      p_137 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_137, p_137);
                      t = c_12(o_137, p_137, t);
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
  ATerm t_137 = NULL,u_137 = NULL;
  t_137 = t;
  t = term_f_55;
  u_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_55, t_137);
  t = m_12(u_137, t_137, t);
  {
    ATerm g_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_137 = NULL,w_137 = NULL;
        t = eval_config_0_0(t);
        v_137 = t;
        t = term_f_55;
        w_137 = t;
        t = SSL_table_put(w_137, t_137, v_137);
        t = v_137;
        LocalPopChoice(h_55);
      }
    else
      {
        t = g_55;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  ATerm b_138 = NULL;
  b_138 = t;
  {
    ATerm i_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_138 = NULL;
        t = term_l_55;
        t = get_config_0_0(t);
        d_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_138, term_r_20);
        t = geq_0_0(t);
        t = b_138;
        t = o_116(t);
        LocalPopChoice(j_55);
      }
    else
      {
        t = i_55;
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
  t = o_12(j_138, i_138, t);
  t = h_138;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_n_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_10, c_10, d_10, t);
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
static ATerm j_10 (ATerm t)
{
  ATerm m_138 = NULL,n_138 = NULL;
  t = term_l_55;
  m_138 = t;
  t = term_o_55;
  n_138 = t;
  t = term_p_55;
  t = o_12(m_138, n_138, t);
  t = term_q_55;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_r_55;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL,q_138 = NULL;
  o_138 = t;
  t = SSL_string_to_int(o_138);
  p_138 = t;
  t = term_l_55;
  q_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_55, p_138);
  t = o_12(q_138, p_138, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_138);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_s_55;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm r_138 = NULL,s_138 = NULL;
  t = term_t_55;
  r_138 = t;
  t = term_r_14;
  s_138 = t;
  t = term_u_55;
  t = o_12(r_138, s_138, t);
  t = term_v_55;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_w_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_55 = t;
  int b_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_10, j_10, k_10, t);
      LocalPopChoice(b_56);
    }
  else
    {
      t = z_55;
      {
        ATerm c_56 = t;
        int d_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_10, p_10, u_10, t);
            LocalPopChoice(d_56);
          }
        else
          {
            t = c_56;
            t = Option_3_0(v_10, x_10, c_11, t);
          }
      }
    }
  return(t);
}
static ATerm o_12 (ATerm y_51, ATerm z_51, ATerm t)
{
  ATerm t_138 = NULL;
  t = term_f_55;
  t_138 = t;
  t = SSL_table_put(t_138, y_51, z_51);
  t = (ATerm) ATmakeAppl(sym__3, term_f_55, y_51, z_51);
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
  t = o_12(x_138, w_138, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_138);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_f_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_11, e_11, g_11, t);
  return(t);
}
static ATerm i_11 (ATerm t)
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
static ATerm k_11 (ATerm t)
{
  ATerm a_139 = NULL,b_139 = NULL;
  a_139 = t;
  t = term_g_56;
  b_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_56, a_139);
  t = o_12(b_139, a_139, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_139);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_i_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_11, k_11, o_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_14;
  t = whoami_0_0(t);
  c_139 = t;
  t = term_s_14;
  e_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_56), c_139);
  f_139 = t;
  t = SSL_printnl(e_139, f_139);
  t = term_y_14;
  d_139 = t;
  t = SSL_exit(d_139);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_56;
  t = get_config_0_0(t);
  return(t);
}
static ATerm k_12 (ATerm x_45, ATerm y_45, ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_45, y_45);
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      t = SSL_addr(x_45, y_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm t)
{
  ATerm h_139 = NULL,i_139 = NULL,j_139 = NULL;
  h_139 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_139;
      t = b_108(t);
    }
  else
    {
      ATerm m_139 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_139 = ATgetFirst((ATermList) t);
          j_139 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_139;
      t = foldr_2_0(b_108, c_108, t);
      m_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_139, m_139);
      t = c_108(t);
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
  ATerm e_76 = NULL,g_76 = NULL;
  if(match_cons(t, sym__2))
    {
      e_76 = ATgetArgument(t, 0);
      g_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(e_76, g_76, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_139 = NULL,u_75 = NULL,v_75 = NULL;
  t = times_0_0(t);
  v_75 = t;
  t = SSL_explode_term(v_75);
  if(match_cons(t, sym__2))
    {
      ATerm q_56 = ATgetArgument(t, 0);
      u_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_75;
  t = foldr_2_0(q_11, s_11, t);
  p_139 = t;
  t = SSL_TicksToSeconds(p_139);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_140 = NULL,b_140 = NULL,c_140 = NULL;
  a_140 = t;
  if(match_cons(t, sym__2))
    {
      b_140 = ATgetArgument(t, 0);
      c_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_140;
        if((b_140 != t))
          {
            _fail(t);
          }
        t = a_140;
        LocalPopChoice(s_56);
      }
    else
      {
        t = r_56;
        t = (ATerm) ATmakeAppl(sym__2, b_140, c_140);
        {
          ATerm t_56 = t;
          int u_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_140, c_140);
              LocalPopChoice(u_56);
            }
          else
            {
              t = t_56;
              t = SSL_gtr(b_140, c_140);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_140, c_140);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_116 (ATerm), ATerm t)
{
  ATerm g_140 = NULL;
  g_140 = t;
  {
    ATerm v_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_140 = NULL;
        t = term_l_55;
        t = get_config_0_0(t);
        i_140 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_140, term_y_14);
        t = geq_0_0(t);
        t = g_140;
        t = n_116(t);
        LocalPopChoice(w_56);
      }
    else
      {
        t = v_56;
        t = g_140;
      }
  }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm k_140 = NULL,l_140 = NULL,n_140 = NULL,o_140 = NULL;
  t = run_time_0_0(t);
  k_140 = t;
  t = term_r_14;
  t = whoami_0_0(t);
  l_140 = t;
  t = term_s_14;
  n_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_57), k_140), term_b_57), l_140);
  o_140 = t;
  t = SSL_printnl(n_140, o_140);
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_57), k_140), term_b_57), l_140));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_140 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_55;
  p_140 = t;
  t = SSL_exit(p_140);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm x_140 = NULL,y_140 = NULL;
  y_140 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_140;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_140 = ATgetArgument(t, 0);
          {
            ATerm j_77 = NULL,r_32 = NULL;
            t = SSLgetAnnotations(y_140);
            j_77 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_140);
            r_32 = t;
            t = SSLsetAnnotations(r_32, j_77);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_140;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm d_57 = t;
  int e_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_57;
      t = get_config_0_0(t);
      LocalPopChoice(e_57);
    }
  else
    {
      t = d_57;
      t = fetch_1_0(p_12, t);
    }
  t = d_119(t);
  return(t);
}
ATerm map_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  static ATerm o_141 (ATerm t)
  {
    ATerm l_141 = NULL,m_141 = NULL,n_141 = NULL;
    l_141 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_141;
      }
    else
      {
        ATerm s_77 = NULL,z_77 = NULL,h_78 = NULL,t_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_141 = ATgetFirst((ATermList) t);
            n_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_141);
        s_77 = t;
        t = m_141;
        t = y_101(t);
        z_77 = t;
        t = n_141;
        t = o_141(t);
        h_78 = t;
        t = (ATerm) ATinsert(CheckATermList(h_78), z_77);
        t_32 = t;
        t = SSLsetAnnotations(t_32, s_77);
      }
    return(t);
  }
  t = o_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_141 = NULL,s_141 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_141 = ATgetFirst((ATermList) t);
      s_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_141 = NULL,x_141 = NULL;
        static ATerm r_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_141)), not_null(x_141));
          return(t);
        }
        t = s_141;
        t = d_0(t);
        if(((w_141 != NULL) && (w_141 != t)))
          _fail(t);
        else
          w_141 = t;
        t = r_141;
        t = c_0(t);
        if(((x_141 != NULL) && (x_141 != t)))
          _fail(t);
        else
          x_141 = t;
        t = s_141;
        t = reverse_acc_2_0(c_0, r_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_14;
      t = d_0(t);
    }
  return(t);
}
static ATerm m_12 (ATerm p_58, ATerm q_58, ATerm t)
{
  t = SSL_table_get(p_58, q_58);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm b_142 = NULL,c_142 = NULL,d_142 = NULL,y_32 = NULL;
  d_142 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_142);
  b_142 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_142);
  y_32 = t;
  t = SSLsetAnnotations(y_32, b_142);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm f_142 = NULL;
  f_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_142), term_g_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_141 = NULL,a_142 = NULL;
  ATerm i_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_56;
      t = get_config_0_0(t);
      LocalPopChoice(j_57);
    }
  else
    {
      t = i_57;
      t = fetch_1_0(s_12, t);
    }
  t = term_m_57;
  t = echo_0_0(t);
  t = term_z_14;
  z_141 = t;
  t = term_a_15;
  a_142 = t;
  t = term_n_57;
  t = m_12(z_141, a_142, t);
  t = reverse_acc_2_0(_id, t_12, t);
  t = map_1_0(z_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_142 = NULL,i_142 = NULL,j_142 = NULL;
  h_142 = t;
  {
    ATerm o_57 = t;
    int p_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_142;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_57 = ATgetFirst((ATermList) t);
                ATerm r_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_142;
          }
        LocalPopChoice(p_57);
      }
    else
      {
        t = o_57;
        t = (ATerm) ATinsert(ATempty, h_142);
      }
  }
  i_142 = t;
  t = term_a_54;
  j_142 = t;
  t = SSL_printnl(j_142, i_142);
  t = h_142;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_56;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm n_142 = NULL,o_142 = NULL;
  t = term_s_57;
  n_142 = t;
  t = term_r_14;
  o_142 = t;
  t = term_u_57;
  t = o_12(n_142, o_142, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_v_57;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm p_142 = NULL,q_142 = NULL,r_142 = NULL,s_142 = NULL;
  t = term_s_57;
  r_142 = t;
  t = term_r_14;
  s_142 = t;
  t = term_u_57;
  t = o_12(r_142, s_142, t);
  t = term_w_57;
  p_142 = t;
  t = term_r_14;
  q_142 = t;
  t = term_x_57;
  t = o_12(p_142, q_142, t);
  t = term_y_57;
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
  int c_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_13, d_13, e_13, t);
      LocalPopChoice(c_58);
    }
  else
    {
      t = b_58;
      t = Option_3_0(f_13, g_13, h_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm t)
{
  ATerm t_142 = NULL,u_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL,y_142 = NULL,t_37 = NULL;
  y_142 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_142 = ATgetFirst((ATermList) t);
      v_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_142);
  t_142 = t;
  t = u_142;
  t = w_72(t);
  w_142 = t;
  t = v_142;
  t = x_72(t);
  x_142 = t;
  t = (ATerm) ATinsert(CheckATermList(x_142), w_142);
  t_37 = t;
  t = SSLsetAnnotations(t_37, t_142);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_121 (ATerm), ATerm t)
{
  ATerm d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,i_143 = NULL,j_143 = NULL,z_37 = NULL;
  d_143 = t;
  {
    ATerm d_58 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_58;
        t = g_121(t);
        LocalPopChoice(f_58);
      }
    else
      {
        t = d_58;
      }
  }
  t = d_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_143 = ATgetFirst((ATermList) t);
      g_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_143);
  e_143 = t;
  t = term_m_56;
  j_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_56, f_143);
  t = o_12(j_143, f_143, t);
  t = g_143;
  {
    static ATerm t_143 (ATerm t)
    {
      ATerm h_58 = t;
      int i_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_58 = t;
          int k_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_143 = NULL;
              m_143 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_143;
              LocalPopChoice(k_58);
            }
          else
            {
              t = j_58;
              t = g_121(t);
              t = Cons_2_0(_id, t_143, t);
            }
          LocalPopChoice(i_58);
        }
      else
        {
          t = h_58;
          {
            ATerm p_143 = NULL,q_143 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_143 = ATgetFirst((ATermList) t);
                q_143 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_143), (ATerm) ATmakeAppl(sym_Undefined_1, p_143));
          }
        }
      return(t);
    }
    t = t_143(t);
  }
  i_143 = t;
  t = (ATerm) ATinsert(CheckATermList(i_143), (ATerm) ATmakeAppl(sym_Program_1, f_143));
  z_37 = t;
  t = SSLsetAnnotations(z_37, e_143);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm f_144 = NULL;
  f_144 = t;
  if(match_string(t, "--help"))
    {
      t = f_144;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_144;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_144;
        }
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL;
  t = term_f_57;
  g_144 = t;
  t = term_r_14;
  h_144 = t;
  t = term_l_58;
  t = o_12(g_144, h_144, t);
  t = term_m_58;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_n_58;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  ATerm y_143 = NULL,z_143 = NULL,a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL,e_144 = NULL;
  a_144 = t;
  t = term_z_14;
  c_144 = t;
  t = term_a_15;
  d_144 = t;
  t = (ATerm) ATempty;
  e_144 = t;
  t = SSL_table_put(c_144, d_144, e_144);
  t = a_144;
  {
    static ATerm i_13 (ATerm t)
    {
      ATerm o_58 = t;
      int r_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_121(t);
          LocalPopChoice(r_58);
        }
      else
        {
          t = o_58;
          {
            ATerm s_58 = t;
            int t_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_13, k_13, l_13, t);
                LocalPopChoice(t_58);
              }
            else
              {
                t = s_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_13, t);
  }
  {
    ATerm u_58 = t;
    int v_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_144 = NULL;
        o_144 = t;
        {
          ATerm w_58 = t;
          int x_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_78 = NULL;
              t = o_144;
              {
                ATerm y_58 = t;
                int z_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_57;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_58);
                  }
                else
                  {
                    t = y_58;
                    t = fetch_1_0(m_13, t);
                  }
              }
              t = o_144;
              t = default_system_usage_0_0(t);
              t = term_o_55;
              t_78 = t;
              t = SSL_exit(t_78);
              LocalPopChoice(x_58);
            }
          else
            {
              t = w_58;
              {
                ATerm y_78 = NULL;
                t = term_s_57;
                t = get_config_0_0(t);
                t = o_144;
                t = default_system_about_0_0(t);
                t = term_o_55;
                y_78 = t;
                t = SSL_exit(y_78);
              }
            }
        }
        LocalPopChoice(v_58);
      }
    else
      {
        t = u_58;
        {
          ATerm a_59 = t;
          int b_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_144 = NULL,q_144 = NULL,r_144 = NULL;
              static ATerm n_13 (ATerm t)
              {
                ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL,n_38 = NULL;
                u_144 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_144 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_144);
                s_144 = t;
                t = t_144;
                if(((y_143 != NULL) && (y_143 != t)))
                  _fail(t);
                else
                  y_143 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_144);
                n_38 = t;
                t = SSLsetAnnotations(n_38, s_144);
                return(t);
              }
              t = fetch_1_0(n_13, t);
              t = term_s_14;
              q_144 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_143)), term_c_59);
              r_144 = t;
              t = SSL_printnl(q_144, r_144);
              t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_143)), term_c_59));
              t = default_system_usage_0_0(t);
              t = term_y_14;
              p_144 = t;
              t = SSL_exit(p_144);
              LocalPopChoice(b_59);
            }
          else
            {
              t = a_59;
            }
        }
      }
  }
  z_143 = t;
  t = term_z_14;
  b_144 = t;
  t = SSL_table_destroy(b_144);
  t = z_143;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm t)
{
  ATerm z_144 = NULL,a_145 = NULL,b_145 = NULL,c_145 = NULL;
  t = parse_options_1_0(f_119, t);
  z_144 = t;
  t = term_r_52;
  c_145 = t;
  t = SSL_table_create(c_145);
  t = term_r_52;
  a_145 = t;
  t = term_u_52;
  b_145 = t;
  t = SSL_table_put(a_145, b_145, z_144);
  t = z_144;
  t = h_119(t);
  {
    ATerm d_59 = t;
    int e_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_119, t);
        LocalPopChoice(e_59);
      }
    else
      {
        t = d_59;
        {
          ATerm f_59 = t;
          int g_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_119(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_59);
            }
          else
            {
              t = f_59;
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
  ATerm d_145 = NULL,e_145 = NULL;
  t = term_h_59;
  d_145 = t;
  t = term_r_14;
  e_145 = t;
  t = term_i_59;
  t = o_12(d_145, e_145, t);
  t = term_j_59;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_k_59;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm f_145 = NULL,g_145 = NULL,h_145 = NULL,i_145 = NULL;
  f_145 = t;
  t = term_m_56;
  t = get_config_0_0(t);
  g_145 = t;
  t = term_s_14;
  h_145 = t;
  t = (ATerm) ATinsert(ATempty, g_145);
  i_145 = t;
  t = SSL_printnl(h_145, i_145);
  t = f_145;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm t)
{
  static ATerm p_13 (ATerm t)
  {
    ATerm m_59 = t;
    int n_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_118(t);
        LocalPopChoice(n_59);
      }
    else
      {
        t = m_59;
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
                int r_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(r_59);
                  }
                else
                  {
                    t = q_59;
                    {
                      ATerm t_59 = t;
                      int v_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_13, u_13, v_13, t);
                          LocalPopChoice(v_59);
                        }
                      else
                        {
                          t = t_59;
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
    ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL;
    k_145 = t;
    {
      ATerm y_59 = t;
      int z_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_145 != NULL) && (j_145 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_145 = ATgetArgument(t, 0);
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
          j_145 = t;
        }
    }
    t = not_null(j_145);
    t = ReadFromFile_0_0(t);
    l_145 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_145, l_145);
    t = apply_strategy_1_0(o_118, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(p_13, q_118, r_13, s_13, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm m_145 = NULL,n_145 = NULL;
  if(match_cons(t, sym__2))
    {
      m_145 = ATgetArgument(t, 0);
      n_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(m_145, n_145, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm b_60 = t;
  int c_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_14, f_14, g_14, t);
      LocalPopChoice(c_60);
    }
  else
    {
      t = b_60;
      {
        ATerm d_60 = t;
        int f_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(h_14, i_14, j_14, t);
            LocalPopChoice(f_60);
          }
        else
          {
            t = d_60;
            t = ArgOption_3_0(l_14, o_14, p_14, t);
          }
      }
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_g_60;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_h_60;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_b_16;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_i_60;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm o_145 = NULL;
  o_145 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, o_145);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_j_60;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(z_13, b_14, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_PP_Table_1;
Symbol sym_layout_1;
Symbol sym_Verbose_0;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Path_1;
Symbol sym_Path_1;
Symbol sym_FILE_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_z_37;
ATerm term_u_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_y_35;
ATerm term_f_35;
ATerm term_s_34;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_e_33;
ATerm term_b_33;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_x_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_k_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_r_30;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_v_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_g_27;
ATerm term_q_26;
ATerm term_u_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_h_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_l_17;
ATerm term_y_16;
ATerm term_j_16;
ATerm term_c_16;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_r_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_SOpt_2, term_f_14, term_g_14);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_lit_1, term_t_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_lit_1, term_v_23);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_SOpt_2, term_n_24, term_o_24);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Arg_1, term_y_16);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm t);
ATerm split_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t);
static ATerm c_6 (ATerm f_21, ATerm t);
static ATerm c_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm n_36 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
ATerm crush_3_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm collect_p__1_0 (ATerm a_36 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm a_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm e_85 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_6 (ATerm d_10, ATerm c_10, ATerm t);
ATerm instantiate_list_1_0 (ATerm g_36 (ATerm), ATerm t);
static ATerm g_6 (ATerm s_12, ATerm t_12, ATerm q_12, ATerm r_12, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm i_36 (ATerm), ATerm t);
ATerm even_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_6 (ATerm t_34 (ATerm), ATerm u_34 (ATerm), ATerm v_34 (ATerm), ATerm w_34 (ATerm), ATerm y_13, ATerm z_13, ATerm t);
ATerm nzip_1_0 (ATerm g_92 (ATerm), ATerm t);
static ATerm i_6 (ATerm p_13, ATerm q_13, ATerm o_13, ATerm u_13, ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
static ATerm j_6 (ATerm f_18, ATerm e_18, ATerm t);
ATerm say_1_0 (ATerm m_84 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm j_35 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_108 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_90 (ATerm), ATerm t);
static ATerm e_52 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm y_34 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm c_90 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm number_node_1_0 (ATerm c_35 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm symbol2abox_1_0 (ATerm z_34 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
static ATerm b_65 (ATerm s_63, ATerm t_63, ATerm u_63, ATerm t);
static ATerm c_65 (ATerm k_64, ATerm l_64, ATerm m_64, ATerm n_64, ATerm o_64, ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm h_86 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm string_Hd_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm h_90 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
ATerm quote_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm s_90 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
static ATerm c_69 (ATerm y_68, ATerm t);
static ATerm m_10 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm m_89 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm t_36 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm g_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm p_6 (ATerm p_10, ATerm q_10, ATerm o_10, ATerm n_10, ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm q_6 (ATerm w_9, ATerm u_9, ATerm v_9, ATerm x_9, ATerm t);
ATerm filter_1_0 (ATerm i_98 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm r_86 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm y_87 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm r_6 (ATerm c_18, ATerm d_18, ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm s_6 (ATerm b_18, ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm l_109 (ATerm), ATerm t);
static ATerm x_11 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_84 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm d_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm collect_1_0 (ATerm x_95 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm u_6 (ATerm g_15, ATerm f_15, ATerm t);
ATerm iowrap_2_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm io_Asfix_2_abox_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm c_6 (ATerm f_21, ATerm t)
{
  ATerm b_10 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 = NULL;
      t = has_significant_layout_0_0(t);
      t = f_21;
      t = concat_strings_0_0(t);
      b_0 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, b_0)));
      LocalPopChoice(f_13);
    }
  else
    {
      t = b_10;
      {
        ATerm d_0 = NULL;
        t = f_21;
        t = concat_strings_0_0(t);
        d_0 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, d_0);
      }
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm i_13 = t;
  if((PushChoice() == 0))
    {
      ATerm s_0 = NULL;
      s_0 = t;
      if(match_int(t, 9))
        {
          t = s_0;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = s_0;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = s_0;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = s_0;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_13;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL;
  o_0 = t;
  {
    ATerm j_13 = t;
    if((PushChoice() == 0))
      {
        ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,g_0 = NULL;
        r_0 = t;
        if(match_cons(t, sym_layout_1))
          {
            q_0 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_0);
        p_0 = t;
        t = q_0;
        if(!(match_cons(t, sym_layout_place_holder_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_layout_1, q_0);
        g_0 = t;
        t = SSLsetAnnotations(g_0, p_0);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_13;
      }
  }
  if(match_cons(t, sym_layout_1))
    {
      m_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_0;
  t = concat_strings_0_0(t);
  t = explode_string_0_0(t);
  t = filter_1_0(c_0, t);
  {
    ATerm k_13 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_13;
      }
  }
  t = o_0;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm l_13 = t;
  if((PushChoice() == 0))
    {
      ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL,p_1 = NULL;
      v_0 = t;
      if(match_cons(t, sym_layout_1))
        {
          u_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_0);
      t_0 = t;
      t = u_0;
      if(!(match_cons(t, sym_layout_place_holder_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_layout_1, u_0);
      p_1 = t;
      t = SSLsetAnnotations(p_1, t_0);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_13;
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm InsLayout_1_0 (ATerm n_36 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm e_1 = NULL,g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
    ATerm s_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(Nil_0_0, _id, t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = s_13;
        {
          ATerm e_2 = NULL,h_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
          e_2 = t;
          if(match_cons(t, sym__2))
            {
              h_2 = ATgetArgument(t, 0);
              o_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_2;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_2 = ATgetFirst((ATermList) t);
              l_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_2;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATmakeAppl(sym__2, k_2, o_2);
              t = n_36(t);
              if(match_cons(t, sym__2))
                {
                  e_1 = ATgetArgument(t, 0);
                  l_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, e_1), l_1);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_2 = ATgetFirst((ATermList) t);
                  n_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, k_2, o_2);
              t = n_36(t);
              if(match_cons(t, sym__2))
                {
                  e_1 = ATgetArgument(t, 0);
                  {
                    ATerm a_14 = ATgetArgument(t, 1);
                    if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
                      {
                        g_1 = ATgetFirst((ATermList) a_14);
                        l_1 = (ATerm) ATgetNext((ATermList) a_14);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_2), m_2), l_1);
              t = p_2(t);
              if(match_cons(t, sym__2))
                {
                  ATerm b_14 = ATgetArgument(t, 0);
                  if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
                    {
                      i_1 = ATgetFirst((ATermList) b_14);
                      n_1 = (ATerm) ATgetNext((ATermList) b_14);
                    }
                  else
                    _fail(t);
                  m_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm c_14 = t;
                int d_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_0 = NULL,a_1 = NULL;
                    t = has_option_1_0(e_0, t);
                    t = g_1;
                    t = has_layout_0_0(t);
                    t = g_1;
                    if(match_cons(t, sym_layout_1))
                      {
                        a_1 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = c_6(a_1, t);
                    z_0 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_h_14), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_1))), z_0), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_1))))), m_1);
                    LocalPopChoice(d_14);
                  }
                else
                  {
                    t = c_14;
                    {
                      ATerm i_14 = t;
                      int j_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_1 = NULL,c_1 = NULL;
                          ATerm k_14 = t;
                          if((PushChoice() == 0))
                            {
                              t = has_option_1_0(f_0, t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = k_14;
                            }
                          t = g_1;
                          t = has_significant_layout_0_0(t);
                          t = g_1;
                          if(match_cons(t, sym_layout_1))
                            {
                              c_1 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = c_6(c_1, t);
                          b_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(n_1), i_1), b_1), e_1), m_1);
                          LocalPopChoice(j_14);
                        }
                      else
                        {
                          t = i_14;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(n_1), i_1), e_1), m_1);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = Cons_2_0(_id, _id, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = try_1_0(k_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm z_6 = NULL;
  t = is_list_0_0(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, z_6);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_14 = t;
      if((PushChoice() == 0))
        {
          ATerm c_7 = NULL,e_7 = NULL,f_7 = NULL,r_1 = NULL;
          f_7 = t;
          if(match_cons(t, sym_layout_1))
            {
              e_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_7);
          c_7 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, e_7);
          r_1 = t;
          t = SSLsetAnnotations(r_1, c_7);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_14;
        }
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm y_7 = NULL,z_7 = NULL;
        y_7 = t;
        if(match_cons(t, sym_layout_1))
          {
            z_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_9 = NULL,s_9 = NULL,s_1 = NULL;
              t = SSLgetAnnotations(y_7);
              s_9 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, z_7);
              s_1 = t;
              t = SSLsetAnnotations(s_1, s_9);
              t = has_option_1_0(n_0, t);
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  r_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_6(r_9, t);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              {
                ATerm g_10 = NULL,h_10 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(y_7);
                h_10 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, z_7);
                t_1 = t;
                t = SSLsetAnnotations(t_1, h_10);
                {
                  ATerm q_14 = t;
                  if((PushChoice() == 0))
                    {
                      t = has_option_1_0(w_0, t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = q_14;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    g_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = c_6(g_10, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  static ATerm h_0 (ATerm t);
  static ATerm h_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_3 != NULL) && (y_3 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_3 = ATgetFirst((ATermList) t);
        {
          ATerm r_14 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = Tl_0_0(t);
    return(t);
  }
  t = _2_0(_id, h_0, t);
  {
    static ATerm i_8 (ATerm t);
    static ATerm i_8 (ATerm t)
    {
      ATerm e_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
      ATerm s_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,d_6 = NULL;
          if(match_cons(t, sym__2))
            {
              y_5 = ATgetArgument(t, 0);
              d_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_5;
          if(match_cons(t, sym_H_2))
            {
              a_6 = ATgetArgument(t, 0);
              b_6 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
              t = InsLayout_1_0(i_8, t);
              if(match_cons(t, sym__2))
                {
                  h_4 = ATgetArgument(t, 0);
                  i_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, a_6, h_4), i_4);
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  a_6 = ATgetArgument(t, 0);
                  b_6 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
                  t = InsLayout_1_0(i_8, t);
                  if(match_cons(t, sym__2))
                    {
                      h_4 = ATgetArgument(t, 0);
                      i_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, a_6, h_4), i_4);
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      a_6 = ATgetArgument(t, 0);
                      b_6 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
                      t = InsLayout_1_0(i_8, t);
                      if(match_cons(t, sym__2))
                        {
                          h_4 = ATgetArgument(t, 0);
                          i_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, a_6, h_4), i_4);
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          a_6 = ATgetArgument(t, 0);
                          b_6 = ATgetArgument(t, 1);
                          w_5 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, w_5, d_6);
                          t = InsLayout_1_0(i_8, t);
                          if(match_cons(t, sym__2))
                            {
                              h_4 = ATgetArgument(t, 0);
                              i_4 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, a_6, b_6, h_4), i_4);
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              a_6 = ATgetArgument(t, 0);
                              b_6 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
                              t = InsLayout_1_0(i_8, t);
                              if(match_cons(t, sym__2))
                                {
                                  h_4 = ATgetArgument(t, 0);
                                  i_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, a_6, h_4), i_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  a_6 = ATgetArgument(t, 0);
                                  b_6 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
                                  t = InsLayout_1_0(i_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      e_4 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_14 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
                                  t = InsLayout_1_0(i_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      h_4 = ATgetArgument(t, 0);
                                      j_4 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, e_4, h_4), j_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      a_6 = ATgetArgument(t, 0);
                                      b_6 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
                                      t = InsLayout_1_0(i_8, t);
                                      if(match_cons(t, sym__2))
                                        {
                                          h_4 = ATgetArgument(t, 0);
                                          i_4 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, a_6, h_4), i_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          a_6 = ATgetArgument(t, 0);
                                          b_6 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
                                          t = InsLayout_1_0(i_8, t);
                                          if(match_cons(t, sym__2))
                                            {
                                              h_4 = ATgetArgument(t, 0);
                                              i_4 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, a_6, h_4), i_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              a_6 = ATgetArgument(t, 0);
                                              b_6 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
                                              t = InsLayout_1_0(i_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  h_4 = ATgetArgument(t, 0);
                                                  i_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, a_6, h_4), i_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  a_6 = ATgetArgument(t, 0);
                                                  b_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, b_6, d_6);
                                              t = InsLayout_1_0(i_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  h_4 = ATgetArgument(t, 0);
                                                  i_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, a_6, h_4), i_4);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          LocalPopChoice(u_14);
        }
      else
        {
          t = s_14;
          {
            ATerm w_14 = t;
            int x_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(i_0, _id, t);
                t = InsLayout_1_0(i_8, t);
                LocalPopChoice(x_14);
              }
            else
              {
                t = w_14;
              }
          }
        }
      return(t);
    }
    t = i_8(t);
  }
  t = _2_0(j_0, _id, t);
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      {
        ATerm y_14 = ATgetArgument(t, 1);
        if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
          {
            a_4 = ATgetFirst((ATermList) y_14);
            {
              ATerm r_15 = (ATerm) ATgetNext((ATermList) y_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_4), z_3), not_null(y_3));
  t = filter_1_0(l_0, t);
  t = flat_list_0_0(t);
  c_8 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_8 = ATgetFirst((ATermList) t);
      b_8 = (ATerm) ATgetNext((ATermList) t);
      t = b_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_8;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_h_14), c_8);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_h_14), c_8);
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm a_36 (ATerm), ATerm t)
{
  static ATerm x_8 (ATerm t);
  static ATerm x_8 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL;
        t = a_36(t);
        w_8 = t;
        t = (ATerm) ATinsert(ATempty, w_8);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = crush_3_0(x_0, conc_0_0, x_8, t);
      }
    return(t);
  }
  t = x_8(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm y_8 = NULL,a_9 = NULL,b_9 = NULL,x_1 = NULL;
  b_9 = t;
  if(match_cons(t, sym_amb_1))
    {
      a_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, a_9);
  x_1 = t;
  t = SSLsetAnnotations(x_1, y_8);
  t = (ATerm) ATinsert(ATempty, term_c_16);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            {
              ATerm h_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_9 = NULL,j_9 = NULL,k_9 = NULL;
                  t = Cons_2_0(is_list_0_0, _id, t);
                  k_9 = t;
                  t = Hd_0_0(t);
                  g_9 = t;
                  t = k_9;
                  t = Tl_0_0(t);
                  j_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_9, j_9);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm a_0 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      e_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
      {
        ATerm i_11 = NULL,j_11 = NULL;
        t = term_j_16;
        t = a_0(t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, j_11);
        t = index_0_0(t);
        i_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_11, i_11);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm m_11 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          e_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_j_16;
      t = a_0(t);
      m_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_11, m_11);
      t = index_0_0(t);
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = collect_p__1_0(d_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,m_16 = NULL;
  k_15 = t;
  if(match_cons(t, sym_Arg_1))
    {
      m_16 = ATgetArgument(t, 0);
      {
        ATerm s_10 = NULL,a_2 = NULL;
        t = SSLgetAnnotations(k_15);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, m_16);
        a_2 = t;
        t = SSLsetAnnotations(a_2, s_10);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          m_16 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
          {
            ATerm a_11 = NULL,b_2 = NULL;
            t = SSLgetAnnotations(k_15);
            a_11 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, m_16, j_15);
            b_2 = t;
            t = SSLsetAnnotations(b_2, a_11);
          }
        }
      else
        {
          ATerm s_11 = NULL,q_2 = NULL;
          if(match_cons(t, sym_S_1))
            {
              m_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_15);
          s_11 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, m_16);
          q_2 = t;
          t = SSLsetAnnotations(q_2, s_11);
        }
    }
  return(t);
}
static ATerm e_6 (ATerm d_10, ATerm c_10, ATerm t)
{
  ATerm p_12 = NULL,v_12 = NULL;
  t = _2_0(y_0, _id, t);
  {
    static ATerm h_21 (ATerm t);
    static ATerm h_21 (ATerm t)
    {
      ATerm x_16 = NULL,m_17 = NULL,w_17 = NULL,x_17 = NULL,l_18 = NULL;
      ATerm k_16 = t;
      int l_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(Nil_0_0, Nil_0_0, t);
          LocalPopChoice(l_16);
        }
      else
        {
          t = k_16;
          {
            static ATerm m_21 (ATerm k_19, ATerm l_19, ATerm m_19, ATerm t);
            static ATerm m_21 (ATerm k_19, ATerm l_19, ATerm m_19, ATerm t)
            {
              t = k_19;
              if(((l_18 != NULL) && (l_18 != t)))
                _fail(t);
              else
                l_18 = t;
              t = l_19;
              if(((x_16 != NULL) && (x_16 != t)))
                _fail(t);
              else
                x_16 = t;
              t = m_19;
              if(((w_17 != NULL) && (w_17 != t)))
                _fail(t);
              else
                w_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_19, m_19);
              t = h_21(t);
              if(match_cons(t, sym__2))
                {
                  if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    m_17 = ATgetArgument(t, 0);
                  if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    x_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_17), k_19), x_17);
              return(t);
            }
            ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,r_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,a_20 = NULL,e_20 = NULL;
            p_19 = t;
            if(match_cons(t, sym__2))
              {
                r_19 = ATgetArgument(t, 0);
                y_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_19;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_19 = ATgetFirst((ATermList) t);
                x_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_19;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_20 = ATgetFirst((ATermList) t);
                e_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_19;
            if(match_cons(t, sym_Arg_1))
              {
                n_19 = ATgetArgument(t, 0);
                {
                  ATerm n_16 = t;
                  int o_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_19;
                      if(((x_16 != NULL) && (x_16 != t)))
                        _fail(t);
                      else
                        x_16 = t;
                      t = e_20;
                      if(((w_17 != NULL) && (w_17 != t)))
                        _fail(t);
                      else
                        w_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_19, e_20);
                      t = h_21(t);
                      if(match_cons(t, sym__2))
                        {
                          if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            m_17 = ATgetArgument(t, 0);
                          if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            x_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_17), (ATerm) ATmakeAppl(sym_Arg_1, n_19)), (ATerm) ATinsert(CheckATermList(x_17), a_20));
                      LocalPopChoice(o_16);
                    }
                  else
                    {
                      t = n_16;
                      t = m_21(w_19, x_19, e_20, t);
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Arg2_2))
                  {
                    n_19 = ATgetArgument(t, 0);
                    o_19 = ATgetArgument(t, 1);
                    {
                      ATerm p_16 = t;
                      int r_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_19;
                          if(((p_12 != NULL) && (p_12 != t)))
                            _fail(t);
                          else
                            p_12 = t;
                          t = x_19;
                          if(((x_16 != NULL) && (x_16 != t)))
                            _fail(t);
                          else
                            x_16 = t;
                          t = e_20;
                          if(((w_17 != NULL) && (w_17 != t)))
                            _fail(t);
                          else
                            w_17 = t;
                          t = (ATerm) ATmakeAppl(sym__2, x_19, e_20);
                          t = h_21(t);
                          if(match_cons(t, sym__2))
                            {
                              if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                m_17 = ATgetArgument(t, 0);
                              if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                x_17 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_17), (ATerm) ATmakeAppl(sym_Arg2_2, n_19, o_19)), (ATerm) ATinsert(CheckATermList(x_17), a_20));
                          LocalPopChoice(r_16);
                        }
                      else
                        {
                          t = p_16;
                          t = m_21(w_19, x_19, e_20, t);
                        }
                    }
                  }
                else
                  {
                    t = m_21(w_19, x_19, e_20, t);
                  }
              }
          }
        }
      return(t);
    }
    t = h_21(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_10, v_12);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm g_36 (ATerm), ATerm t)
{
  static ATerm x_21 (ATerm t);
  static ATerm x_21 (ATerm t)
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        {
          ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
          static ATerm f_1 (ATerm t);
          static ATerm h_1 (ATerm t);
          static ATerm f_1 (ATerm t)
          {
            static ATerm j_1 (ATerm t);
            static ATerm j_1 (ATerm t)
            {
              static ATerm k_1 (ATerm t);
              static ATerm k_1 (ATerm t)
              {
                ATerm v_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm o_1 (ATerm t);
                    static ATerm o_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(t_21));
                      return(t);
                    }
                    t = Instantiate_1_0(o_1, t);
                    LocalPopChoice(w_16);
                  }
                else
                  {
                    t = v_16;
                    t = flat_list_0_0(t);
                  }
                return(t);
              }
              t = try_1_0(k_1, t);
              return(t);
            }
            t = term_j_16;
            t = g_36(t);
            t = bottomup_1_0(j_1, t);
            return(t);
          }
          static ATerm h_1 (ATerm t)
          {
            t = not_null(u_21);
            t = x_21(t);
            return(t);
          }
          s_21 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((t_21 != NULL) && (t_21 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                t_21 = ATgetFirst((ATermList) t);
              if(((u_21 != NULL) && (u_21 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                u_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_21;
          t = Cons_2_0(f_1, h_1, t);
        }
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
static ATerm g_6 (ATerm s_12, ATerm t_12, ATerm q_12, ATerm r_12, ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,f_22 = NULL,o_23 = NULL;
  static ATerm u_1 (ATerm t);
  static ATerm u_1 (ATerm t)
  {
    t = not_null(d_22);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATempty, r_12));
  t = conc_0_0(t);
  f_22 = t;
  t = s_12;
  if(match_cons(t, sym_iter_1))
    {
      o_23 = ATgetArgument(t, 0);
      {
        ATerm c_13 = NULL,m_4 = NULL;
        t = SSLgetAnnotations(s_12);
        c_13 = t;
        t = o_23;
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, o_23);
        m_4 = t;
        t = SSLsetAnnotations(m_4, c_13);
      }
    }
  else
    {
      ATerm g_13 = NULL,n_4 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          o_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_12);
      g_13 = t;
      t = o_23;
      c_22 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, o_23);
      n_4 = t;
      t = SSLsetAnnotations(n_4, g_13);
    }
  t = (ATerm) ATmakeAppl(sym__2, s_12, f_22);
  t = get_pp_entry_0_0(t);
  if(((d_22 != NULL) && (d_22 != t)))
    _fail(t);
  else
    d_22 = t;
  t = t_12;
  {
    static ATerm q_1 (ATerm t);
    static ATerm q_1 (ATerm t)
    {
      ATerm p_23 = NULL;
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym__4, c_22, p_23, f_22, term_y_16);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(q_1, t);
  }
  t = instantiate_list_1_0(u_1, t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm i_36 (ATerm), ATerm t)
{
  static ATerm i_25 (ATerm t);
  static ATerm i_25 (ATerm t)
  {
    ATerm z_16 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
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
              t = Cons_2_0(_id, Nil_0_0, t);
              LocalPopChoice(d_17);
            }
          else
            {
              t = c_17;
              {
                ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,e_25 = NULL,f_25 = NULL;
                static ATerm v_1 (ATerm t);
                static ATerm w_1 (ATerm t);
                static ATerm v_1 (ATerm t)
                {
                  static ATerm y_1 (ATerm t);
                  static ATerm y_1 (ATerm t)
                  {
                    static ATerm z_1 (ATerm t);
                    static ATerm z_1 (ATerm t)
                    {
                      ATerm e_17 = t;
                      int f_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          static ATerm c_2 (ATerm t);
                          static ATerm c_2 (ATerm t)
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(b_25));
                            return(t);
                          }
                          t = Instantiate_1_0(c_2, t);
                          LocalPopChoice(f_17);
                        }
                      else
                        {
                          t = e_17;
                          t = flat_list_0_0(t);
                        }
                      return(t);
                    }
                    t = try_1_0(z_1, t);
                    return(t);
                  }
                  t = term_j_16;
                  t = i_36(t);
                  t = bottomup_1_0(y_1, t);
                  return(t);
                }
                static ATerm w_1 (ATerm t)
                {
                  t = not_null(f_25);
                  t = i_25(t);
                  return(t);
                }
                a_25 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((b_25 != NULL) && (b_25 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      b_25 = ATgetFirst((ATermList) t);
                    c_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_25;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((e_25 != NULL) && (e_25 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      e_25 = ATgetFirst((ATermList) t);
                    if(((f_25 != NULL) && (f_25 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      f_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_25;
                t = Cons_2_0(v_1, w_1, t);
              }
            }
        }
      }
    return(t);
  }
  t = i_25(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  {
    ATerm g_17 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_17;
      }
  }
  t = (ATerm) ATinsert(ATempty, n_25);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  {
    ATerm h_17 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_17;
      }
  }
  t = (ATerm) ATinsert(ATempty, r_25);
  return(t);
}
static ATerm h_6 (ATerm t_34 (ATerm), ATerm u_34 (ATerm), ATerm v_34 (ATerm), ATerm w_34 (ATerm), ATerm y_13, ATerm z_13, ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL,l_25 = NULL;
      t = y_13;
      t = even_0_0(t);
      t = term_j_16;
      t = u_34(t);
      k_25 = t;
      t = term_j_16;
      t = v_34(t);
      l_25 = t;
      t = (ATerm) ATmakeAppl(sym__4, k_25, z_13, l_25, term_l_17);
      t = symbol2abox_0_0(t);
      t = try_1_0(d_2, t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm o_25 = NULL,q_25 = NULL;
        t = term_j_16;
        t = t_34(t);
        o_25 = t;
        t = term_j_16;
        t = v_34(t);
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym__4, o_25, z_13, q_25, term_y_16);
        t = symbol2abox_0_0(t);
        t = try_1_0(f_2, t);
      }
    }
  return(t);
}
static ATerm i_6 (ATerm p_13, ATerm q_13, ATerm o_13, ATerm u_13, ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,j_27 = NULL,p_27 = NULL;
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    t = not_null(a_26);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, o_13, (ATerm) ATinsert(ATempty, u_13));
  t = conc_0_0(t);
  b_26 = t;
  t = p_13;
  if(match_cons(t, sym_iter_sep_2))
    {
      j_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
      {
        ATerm m_13 = NULL,s_4 = NULL;
        t = SSLgetAnnotations(p_13);
        m_13 = t;
        t = j_27;
        y_25 = t;
        t = p_27;
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, j_27, p_27);
        s_4 = t;
        t = SSLsetAnnotations(s_4, m_13);
      }
    }
  else
    {
      ATerm e_14 = NULL,u_4 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          j_27 = ATgetArgument(t, 0);
          p_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_13);
      e_14 = t;
      t = j_27;
      y_25 = t;
      t = p_27;
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, j_27, p_27);
      u_4 = t;
      t = SSLsetAnnotations(u_4, e_14);
    }
  t = (ATerm) ATmakeAppl(sym__2, p_13, b_26);
  t = get_pp_entry_0_0(t);
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = q_13;
  {
    static ATerm g_2 (ATerm t);
    static ATerm g_2 (ATerm t)
    {
      ATerm r_27 = NULL,s_27 = NULL;
      static ATerm i_2 (ATerm t);
      static ATerm j_2 (ATerm t);
      static ATerm r_2 (ATerm t);
      static ATerm s_2 (ATerm t);
      static ATerm i_2 (ATerm t)
      {
        t = y_25;
        return(t);
      }
      static ATerm j_2 (ATerm t)
      {
        t = z_25;
        return(t);
      }
      static ATerm r_2 (ATerm t)
      {
        t = b_26;
        return(t);
      }
      static ATerm s_2 (ATerm t)
      {
        t = u_13;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          r_27 = ATgetArgument(t, 0);
          s_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_6(i_2, j_2, r_2, s_2, r_27, s_27, t);
      return(t);
    }
    t = nzip_1_0(g_2, t);
  }
  t = instantiate_sep_list_1_0(t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm n_17 = t;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,y_4 = NULL;
      d_42 = t;
      if(match_cons(t, sym_lit_1))
        {
          c_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_42);
      b_42 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, c_42);
      y_4 = t;
      t = SSLsetAnnotations(y_4, b_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_17;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm o_17 = t;
  if((PushChoice() == 0))
    {
      ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,z_4 = NULL;
      g_42 = t;
      if(match_cons(t, sym_lit_1))
        {
          f_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_42);
      e_42 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, f_42);
      z_4 = t;
      t = SSLsetAnnotations(z_4, e_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_17;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,x_40 = NULL,y_40 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,h_41 = NULL,i_41 = NULL;
  y_40 = t;
  if(match_cons(t, sym__4))
    {
      b_41 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
      h_41 = ATgetArgument(t, 2);
      i_41 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = b_41;
  if(match_cons(t, sym_seq_1))
    {
      c_41 = ATgetArgument(t, 0);
      {
        ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,x_41 = NULL,y_41 = NULL;
        static ATerm w_2 (ATerm t);
        static ATerm w_2 (ATerm t)
        {
          static ATerm x_2 (ATerm t);
          static ATerm x_2 (ATerm t)
          {
            ATerm p_17 = t;
            int q_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm y_2 (ATerm t);
                static ATerm y_2 (ATerm t)
                {
                  t = not_null(r_41);
                  return(t);
                }
                t = Instantiate_1_0(y_2, t);
                LocalPopChoice(q_17);
              }
            else
              {
                t = p_17;
                t = flat_list_0_0(t);
              }
            return(t);
          }
          t = try_1_0(x_2, t);
          return(t);
        }
        t = d_41;
        if(match_cons(t, sym_appl_2))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            x_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, i_41));
        t = conc_0_0(t);
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, c_41), y_41);
        t = get_pp_entry_0_0(t);
        q_41 = t;
        t = c_41;
        t = filter_1_0(u_2, t);
        s_41 = t;
        t = x_40;
        t = filter_1_0(v_2, t);
        x_41 = t;
        t = (ATerm) ATmakeAppl(sym__4, s_41, x_41, y_41, term_y_16);
        t = seq2abox_0_0(t);
        if(((r_41 != NULL) && (r_41 != t)))
          _fail(t);
        else
          r_41 = t;
        t = q_41;
        t = bottomup_1_0(w_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          c_41 = ATgetArgument(t, 0);
          o_40 = ATgetArgument(t, 1);
          {
            ATerm z_14 = NULL,b_15 = NULL,c_15 = NULL;
            static ATerm a_21 (ATerm t);
            static ATerm a_21 (ATerm t)
            {
              ATerm e_15 = NULL,h_15 = NULL,i_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
              if(match_cons(t, sym__4))
                {
                  s_15 = ATgetArgument(t, 0);
                  t_15 = ATgetArgument(t, 1);
                  y_15 = ATgetArgument(t, 2);
                  z_15 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = t_15;
              if(match_cons(t, sym_appl_2))
                {
                  u_15 = ATgetArgument(t, 0);
                  v_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_15;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_15 = ATgetFirst((ATermList) t);
                  x_15 = (ATerm) ATgetNext((ATermList) t);
                  t = x_15;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = u_15;
                      if(match_cons(t, sym_prod_3))
                        {
                          i_15 = ATgetArgument(t, 0);
                          n_15 = ATgetArgument(t, 1);
                          q_15 = ATgetArgument(t, 2);
                          t = n_15;
                          if(match_cons(t, sym_alt_2))
                            {
                              o_15 = ATgetArgument(t, 0);
                              p_15 = ATgetArgument(t, 1);
                              t = i_15;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  l_15 = ATgetFirst((ATermList) t);
                                  m_15 = (ATerm) ATgetNext((ATermList) t);
                                  t = m_15;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = s_15;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          e_15 = ATgetArgument(t, 0);
                                          h_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm t_17 = t;
                                            int u_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = l_15;
                                                if((e_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = o_15;
                                                if((e_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = p_15;
                                                if((h_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, e_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_15), e_15, q_15), v_15), y_15, z_15);
                                                t = a_21(t);
                                                LocalPopChoice(u_17);
                                              }
                                            else
                                              {
                                                t = t_17;
                                                {
                                                  ATerm v_17 = t;
                                                  int y_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_16 = NULL;
                                                      t = o_15;
                                                      if((e_15 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = p_15;
                                                      if((h_15 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym__2, z_15, term_y_16);
                                                      t = add_0_0(t);
                                                      q_16 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, h_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_15), h_15, q_15), v_15), y_15, q_16);
                                                      t = a_21(t);
                                                      LocalPopChoice(y_17);
                                                    }
                                                  else
                                                    {
                                                      t = v_17;
                                                      {
                                                        ATerm a_17 = NULL;
                                                        static ATerm z_2 (ATerm t);
                                                        static ATerm z_2 (ATerm t)
                                                        {
                                                          static ATerm a_3 (ATerm t);
                                                          static ATerm a_3 (ATerm t)
                                                          {
                                                            ATerm z_17 = t;
                                                            int a_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                static ATerm b_3 (ATerm t);
                                                                static ATerm b_3 (ATerm t)
                                                                {
                                                                  t = (ATerm) ATinsert(ATempty, not_null(b_15));
                                                                  return(t);
                                                                }
                                                                t = Instantiate_1_0(b_3, t);
                                                                LocalPopChoice(a_18);
                                                              }
                                                            else
                                                              {
                                                                t = z_17;
                                                                t = flat_list_0_0(t);
                                                              }
                                                            return(t);
                                                          }
                                                          t = try_1_0(a_3, t);
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), y_15);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((z_14 != NULL) && (z_14 != t)))
                                                          _fail(t);
                                                        else
                                                          z_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, s_15, w_15, y_15, term_y_16);
                                                        t = symbol2abox_0_0(t);
                                                        if(((b_15 != NULL) && (b_15 != t)))
                                                          _fail(t);
                                                        else
                                                          b_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, z_15, z_14);
                                                        t = index_0_0(t);
                                                        a_17 = t;
                                                        t = (ATerm) ATinsert(ATempty, a_17);
                                                        t = bottomup_1_0(z_2, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm i_17 = NULL;
                                          static ATerm c_3 (ATerm t);
                                          static ATerm c_3 (ATerm t)
                                          {
                                            static ATerm d_3 (ATerm t);
                                            static ATerm d_3 (ATerm t)
                                            {
                                              ATerm h_18 = t;
                                              int i_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  static ATerm e_3 (ATerm t);
                                                  static ATerm e_3 (ATerm t)
                                                  {
                                                    t = (ATerm) ATinsert(ATempty, not_null(b_15));
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(e_3, t);
                                                  LocalPopChoice(i_18);
                                                }
                                              else
                                                {
                                                  t = h_18;
                                                  t = flat_list_0_0(t);
                                                }
                                              return(t);
                                            }
                                            t = try_1_0(d_3, t);
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), y_15);
                                          t = get_pp_entry_0_0(t);
                                          if(((z_14 != NULL) && (z_14 != t)))
                                            _fail(t);
                                          else
                                            z_14 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, s_15, w_15, y_15, term_y_16);
                                          t = symbol2abox_0_0(t);
                                          if(((b_15 != NULL) && (b_15 != t)))
                                            _fail(t);
                                          else
                                            b_15 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, z_15, z_14);
                                          t = index_0_0(t);
                                          i_17 = t;
                                          t = (ATerm) ATinsert(ATempty, i_17);
                                          t = bottomup_1_0(c_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm r_17 = NULL;
                                      static ATerm f_3 (ATerm t);
                                      static ATerm f_3 (ATerm t)
                                      {
                                        static ATerm g_3 (ATerm t);
                                        static ATerm g_3 (ATerm t)
                                        {
                                          ATerm j_18 = t;
                                          int k_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm n_3 (ATerm t);
                                              static ATerm n_3 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, not_null(b_15));
                                                return(t);
                                              }
                                              t = Instantiate_1_0(n_3, t);
                                              LocalPopChoice(k_18);
                                            }
                                          else
                                            {
                                              t = j_18;
                                              t = flat_list_0_0(t);
                                            }
                                          return(t);
                                        }
                                        t = try_1_0(g_3, t);
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), y_15);
                                      t = get_pp_entry_0_0(t);
                                      if(((z_14 != NULL) && (z_14 != t)))
                                        _fail(t);
                                      else
                                        z_14 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, s_15, w_15, y_15, term_y_16);
                                      t = symbol2abox_0_0(t);
                                      if(((b_15 != NULL) && (b_15 != t)))
                                        _fail(t);
                                      else
                                        b_15 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, z_15, z_14);
                                      t = index_0_0(t);
                                      r_17 = t;
                                      t = (ATerm) ATinsert(ATempty, r_17);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm g_18 = NULL;
                                  static ATerm o_3 (ATerm t);
                                  static ATerm o_3 (ATerm t)
                                  {
                                    static ATerm p_3 (ATerm t);
                                    static ATerm p_3 (ATerm t)
                                    {
                                      ATerm m_18 = t;
                                      int n_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          static ATerm q_3 (ATerm t);
                                          static ATerm q_3 (ATerm t)
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(b_15));
                                            return(t);
                                          }
                                          t = Instantiate_1_0(q_3, t);
                                          LocalPopChoice(n_18);
                                        }
                                      else
                                        {
                                          t = m_18;
                                          t = flat_list_0_0(t);
                                        }
                                      return(t);
                                    }
                                    t = try_1_0(p_3, t);
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), y_15);
                                  t = get_pp_entry_0_0(t);
                                  if(((z_14 != NULL) && (z_14 != t)))
                                    _fail(t);
                                  else
                                    z_14 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, s_15, w_15, y_15, term_y_16);
                                  t = symbol2abox_0_0(t);
                                  if(((b_15 != NULL) && (b_15 != t)))
                                    _fail(t);
                                  else
                                    b_15 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, z_15, z_14);
                                  t = index_0_0(t);
                                  g_18 = t;
                                  t = (ATerm) ATinsert(ATempty, g_18);
                                  t = bottomup_1_0(o_3, t);
                                }
                            }
                          else
                            {
                              ATerm r_18 = NULL;
                              static ATerm r_3 (ATerm t);
                              static ATerm r_3 (ATerm t)
                              {
                                static ATerm s_3 (ATerm t);
                                static ATerm s_3 (ATerm t)
                                {
                                  ATerm o_18 = t;
                                  int p_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      static ATerm t_3 (ATerm t);
                                      static ATerm t_3 (ATerm t)
                                      {
                                        t = (ATerm) ATinsert(ATempty, not_null(b_15));
                                        return(t);
                                      }
                                      t = Instantiate_1_0(t_3, t);
                                      LocalPopChoice(p_18);
                                    }
                                  else
                                    {
                                      t = o_18;
                                      t = flat_list_0_0(t);
                                    }
                                  return(t);
                                }
                                t = try_1_0(s_3, t);
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), y_15);
                              t = get_pp_entry_0_0(t);
                              if(((z_14 != NULL) && (z_14 != t)))
                                _fail(t);
                              else
                                z_14 = t;
                              t = (ATerm) ATmakeAppl(sym__4, s_15, w_15, y_15, term_y_16);
                              t = symbol2abox_0_0(t);
                              if(((b_15 != NULL) && (b_15 != t)))
                                _fail(t);
                              else
                                b_15 = t;
                              t = (ATerm) ATmakeAppl(sym__2, z_15, z_14);
                              t = index_0_0(t);
                              r_18 = t;
                              t = (ATerm) ATinsert(ATempty, r_18);
                              t = bottomup_1_0(r_3, t);
                            }
                        }
                      else
                        {
                          ATerm b_19 = NULL;
                          static ATerm u_3 (ATerm t);
                          static ATerm u_3 (ATerm t)
                          {
                            static ATerm v_3 (ATerm t);
                            static ATerm v_3 (ATerm t)
                            {
                              ATerm q_18 = t;
                              int s_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  static ATerm w_3 (ATerm t);
                                  static ATerm w_3 (ATerm t)
                                  {
                                    t = (ATerm) ATinsert(ATempty, not_null(b_15));
                                    return(t);
                                  }
                                  t = Instantiate_1_0(w_3, t);
                                  LocalPopChoice(s_18);
                                }
                              else
                                {
                                  t = q_18;
                                  t = flat_list_0_0(t);
                                }
                              return(t);
                            }
                            t = try_1_0(v_3, t);
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), y_15);
                          t = get_pp_entry_0_0(t);
                          if(((z_14 != NULL) && (z_14 != t)))
                            _fail(t);
                          else
                            z_14 = t;
                          t = (ATerm) ATmakeAppl(sym__4, s_15, w_15, y_15, term_y_16);
                          t = symbol2abox_0_0(t);
                          if(((b_15 != NULL) && (b_15 != t)))
                            _fail(t);
                          else
                            b_15 = t;
                          t = (ATerm) ATmakeAppl(sym__2, z_15, z_14);
                          t = index_0_0(t);
                          b_19 = t;
                          t = (ATerm) ATinsert(ATempty, b_19);
                          t = bottomup_1_0(u_3, t);
                        }
                    }
                  else
                    {
                      t = u_15;
                      if(match_cons(t, sym_prod_3))
                        {
                          i_15 = ATgetArgument(t, 0);
                          n_15 = ATgetArgument(t, 1);
                          q_15 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = s_15;
                      if(match_cons(t, sym_alt_2))
                        {
                          e_15 = ATgetArgument(t, 0);
                          h_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_15;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          l_15 = ATgetFirst((ATermList) t);
                          m_15 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = m_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = n_15;
                      if(match_cons(t, sym_alt_2))
                        {
                          o_15 = ATgetArgument(t, 0);
                          p_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm t_18 = t;
                        int u_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = l_15;
                            if((e_15 != t))
                              {
                                _fail(t);
                              }
                            t = o_15;
                            if((e_15 != t))
                              {
                                _fail(t);
                              }
                            t = p_15;
                            if((h_15 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, e_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_15), e_15, q_15), v_15), y_15, z_15);
                            t = a_21(t);
                            LocalPopChoice(u_18);
                          }
                        else
                          {
                            t = t_18;
                            {
                              ATerm k_20 = NULL;
                              t = o_15;
                              if((e_15 != t))
                                {
                                  _fail(t);
                                }
                              t = p_15;
                              if((h_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym__2, z_15, term_y_16);
                              t = add_0_0(t);
                              k_20 = t;
                              t = (ATerm) ATmakeAppl(sym__4, h_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_15), h_15, q_15), v_15), y_15, k_20);
                              t = a_21(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = u_15;
                  if(match_cons(t, sym_prod_3))
                    {
                      i_15 = ATgetArgument(t, 0);
                      n_15 = ATgetArgument(t, 1);
                      q_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = s_15;
                  if(match_cons(t, sym_alt_2))
                    {
                      e_15 = ATgetArgument(t, 0);
                      h_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_15;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_15 = ATgetFirst((ATermList) t);
                      m_15 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = m_15;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_15;
                  if(match_cons(t, sym_alt_2))
                    {
                      o_15 = ATgetArgument(t, 0);
                      p_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_18 = t;
                    int w_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_15;
                        if((e_15 != t))
                          {
                            _fail(t);
                          }
                        t = o_15;
                        if((e_15 != t))
                          {
                            _fail(t);
                          }
                        t = p_15;
                        if((h_15 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, e_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_15), e_15, q_15), v_15), y_15, z_15);
                        t = a_21(t);
                        LocalPopChoice(w_18);
                      }
                    else
                      {
                        t = v_18;
                        {
                          ATerm z_20 = NULL;
                          t = o_15;
                          if((e_15 != t))
                            {
                              _fail(t);
                            }
                          t = p_15;
                          if((h_15 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym__2, z_15, term_y_16);
                          t = add_0_0(t);
                          z_20 = t;
                          t = (ATerm) ATmakeAppl(sym__4, h_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_15), h_15, q_15), v_15), y_15, z_20);
                          t = a_21(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, i_41));
            t = conc_0_0(t);
            c_15 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), d_41, c_15, term_y_16);
            t = a_21(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              c_41 = ATgetArgument(t, 0);
              o_40 = ATgetArgument(t, 1);
              {
                ATerm p_42 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, c_41, o_40);
                p_42 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, c_41, o_40), d_41, h_41, i_41);
                t = i_6(p_42, d_41, h_41, i_41, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  c_41 = ATgetArgument(t, 0);
                  o_40 = ATgetArgument(t, 1);
                  {
                    ATerm y_42 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, c_41, o_40);
                    y_42 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, c_41, o_40), d_41, h_41, i_41);
                    t = i_6(y_42, d_41, h_41, i_41, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      c_41 = ATgetArgument(t, 0);
                      {
                        ATerm n_43 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, c_41);
                        n_43 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, c_41), d_41, h_41, i_41);
                        t = g_6(n_43, d_41, h_41, i_41, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          c_41 = ATgetArgument(t, 0);
                          {
                            ATerm a_44 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, c_41);
                            a_44 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, c_41), d_41, h_41, i_41);
                            t = g_6(a_44, d_41, h_41, i_41, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              c_41 = ATgetArgument(t, 0);
                              t = d_41;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm x_18 = ATgetArgument(t, 0);
                                  x_40 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = x_40;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  p_40 = ATgetFirst((ATermList) t);
                                  q_40 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
                                    static ATerm x_3 (ATerm t);
                                    static ATerm x_3 (ATerm t)
                                    {
                                      static ATerm b_4 (ATerm t);
                                      static ATerm b_4 (ATerm t)
                                      {
                                        ATerm y_18 = t;
                                        int z_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm c_4 (ATerm t);
                                            static ATerm c_4 (ATerm t)
                                            {
                                              t = not_null(o_22);
                                              return(t);
                                            }
                                            t = Instantiate_1_0(c_4, t);
                                            LocalPopChoice(z_18);
                                          }
                                        else
                                          {
                                            t = y_18;
                                            t = flat_list_0_0(t);
                                          }
                                        return(t);
                                      }
                                      t = try_1_0(b_4, t);
                                      return(t);
                                    }
                                    t = q_40;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, i_41));
                                    t = conc_0_0(t);
                                    q_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, c_41), q_22);
                                    t = get_pp_entry_0_0(t);
                                    l_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, c_41, p_40, q_22, term_y_16);
                                    t = symbol2abox_0_0(t);
                                    m_22 = t;
                                    t = (ATerm) ATinsert(ATempty, m_22);
                                    p_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, l_22, (ATerm) ATinsert(ATempty, m_22));
                                    t = e_6(l_22, p_22, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        n_22 = ATgetArgument(t, 0);
                                        if(((o_22 != NULL) && (o_22 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          o_22 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = n_22;
                                    t = bottomup_1_0(x_3, t);
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
                              ATerm a_19 = t;
                              int c_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm d_19 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(c_19);
                                  {
                                    ATerm e_19 = t;
                                    int f_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = d_41;
                                        {
                                          ATerm g_19 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = is_string_0_0(t);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = g_19;
                                            }
                                        }
                                        t = d_41;
                                        {
                                          ATerm h_19 = t;
                                          int i_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  a_23 = ATgetArgument(t, 0);
                                                  e_23 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = a_23;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  b_23 = ATgetArgument(t, 0);
                                                  c_23 = ATgetArgument(t, 1);
                                                  d_23 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = d_41;
                                              t = q_6(b_23, c_23, d_23, e_23, t);
                                              LocalPopChoice(i_19);
                                            }
                                          else
                                            {
                                              t = h_19;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(f_19);
                                      }
                                    else
                                      {
                                        t = e_19;
                                        t = d_41;
                                        t = is_string_0_0(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, d_41);
                                      }
                                  }
                                }
                              else
                                {
                                  t = a_19;
                                  {
                                    ATerm j_19 = t;
                                    int q_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm s_19 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(q_19);
                                        {
                                          ATerm i_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, d_41);
                                          t = implode_string_0_0(t);
                                          i_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, i_44);
                                        }
                                      }
                                    else
                                      {
                                        t = j_19;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            c_41 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, c_41);
                                      }
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
  ATerm b_45 = NULL,c_45 = NULL,f_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,n_45 = NULL;
  if(match_cons(t, sym__4))
    {
      b_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
      k_45 = ATgetArgument(t, 2);
      n_45 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = b_45;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_45;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_45 = ATgetFirst((ATermList) t);
          f_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_45 = ATgetFirst((ATermList) t);
          j_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_45;
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm v_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(u_19);
            t = c_45;
            {
              ATerm z_19 = t;
              int b_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm c_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_20);
                  {
                    ATerm d_20 = t;
                    int f_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, f_45, j_45, k_45, n_45);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(f_20);
                      }
                    else
                      {
                        t = d_20;
                        {
                          ATerm k_46 = NULL,l_46 = NULL,n_46 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, c_45, i_45, k_45, n_45);
                          t = symbol2abox_0_0(t);
                          k_46 = t;
                          t = (ATerm) ATmakeAppl(sym__2, n_45, term_y_16);
                          t = add_0_0(t);
                          n_46 = t;
                          t = (ATerm) ATmakeAppl(sym__4, f_45, j_45, k_45, n_46);
                          t = seq2abox_0_0(t);
                          l_46 = t;
                          t = (ATerm) ATinsert(CheckATermList(l_46), k_46);
                        }
                      }
                  }
                }
              else
                {
                  t = z_19;
                  {
                    ATerm u_46 = NULL,v_46 = NULL,x_46 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, c_45, i_45, k_45, n_45);
                    t = symbol2abox_0_0(t);
                    u_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_45, term_y_16);
                    t = add_0_0(t);
                    x_46 = t;
                    t = (ATerm) ATmakeAppl(sym__4, f_45, j_45, k_45, x_46);
                    t = seq2abox_0_0(t);
                    v_46 = t;
                    t = (ATerm) ATinsert(CheckATermList(v_46), u_46);
                  }
                }
            }
          }
        else
          {
            t = t_19;
            {
              ATerm d_47 = NULL,e_47 = NULL,g_47 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, c_45, i_45, k_45, n_45);
              t = symbol2abox_0_0(t);
              d_47 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_45, term_y_16);
              t = add_0_0(t);
              g_47 = t;
              t = (ATerm) ATmakeAppl(sym__4, f_45, j_45, k_45, g_47);
              t = seq2abox_0_0(t);
              e_47 = t;
              t = (ATerm) ATinsert(CheckATermList(e_47), d_47);
            }
          }
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = debug_1_0(f_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, i_47);
  t = table_get_0_0(t);
  if(match_cons(t, sym__2))
    {
      k_47 = ATgetArgument(t, 0);
      j_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_47;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(d_4, t);
  t = (ATerm) ATmakeAppl(sym__2, k_47, j_47);
  return(t);
}
static ATerm j_6 (ATerm f_18, ATerm e_18, ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      n_47 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_47 = NULL;
            t = f_18;
            t = mk_key_0_0(t);
            q_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_h_20, q_47);
            t = table_get_0_0(t);
            t = m_47;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = m_47;
            t = r_6(n_47, o_47, t);
          }
      }
    }
  else
    {
      ATerm u_47 = NULL;
      t = f_18;
      t = mk_key_0_0(t);
      u_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_20, u_47);
      t = table_get_0_0(t);
      t = m_47;
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_47;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm f_48 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_47, z_47);
      t = separate_by_0_0(t);
      f_48 = t;
      t = (ATerm) ATinsert(CheckATermList(f_48), y_47);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm j_35 (ATerm), ATerm t)
{
  static ATerm k_4 (ATerm t);
  static ATerm k_4 (ATerm t)
  {
    ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
    t = term_j_16;
    t = pass_verbose_0_0(t);
    g_48 = t;
    t = term_j_16;
    t = j_35(t);
    t = map_1_0(xtc_find_0_0, t);
    i_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_20, i_48);
    t = add_arg_flags_0_0(t);
    h_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(g_4, k_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_20);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  t = xtc_transform_2_0(l_4, pass_verbose_0_0, t);
  t = xtc_transform_2_0(o_4, pass_verbose_0_0, t);
  t = xtc_ast2abox_1_0(p_4, t);
  t = xtc_transform_2_0(q_4, pass_verbose_0_0, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm l_48 = NULL;
  t = write_to_0_0(t);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_48;
  t = read_text_file_0_0(t);
  t = trim_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm m_48 = NULL;
  m_48 = t;
  if(match_int(t, 10))
    {
      t = m_48;
    }
  else
    {
      if(match_int(t, 13))
        {
          t = m_48;
        }
      else
        {
          if(match_int(t, 32))
            {
              t = m_48;
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 9)))
                _fail(t);
              t = m_48;
            }
        }
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_r_20;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(r_4, t);
  t = say_1_0(v_4, t);
  t = debug_1_0(w_4, t);
  return(t);
}
static ATerm e_52 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  t = h_49;
  t = fetch_1_0(x_4, t);
  t = h_49;
  {
    ATerm t_20 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, f_49, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, g_49)), (ATerm) ATmakeAppl(sym_attrs_1, h_49));
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm m_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  r_49 = t;
  if(match_cons(t, sym_prod_3))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
      u_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_49;
  if(match_cons(t, sym_attrs_1))
    {
      v_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_49;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_49;
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm w_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(v_20);
            t = s_49;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_49 = ATgetFirst((ATermList) t);
                o_49 = (ATerm) ATgetNext((ATermList) t);
                t = o_49;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = m_49;
                    {
                      ATerm x_20 = t;
                      int y_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm b_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(y_20);
                          {
                            ATerm c_21 = t;
                            int d_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(a_5, t);
                                t = r_49;
                                LocalPopChoice(d_21);
                              }
                            else
                              {
                                t = c_21;
                                {
                                  ATerm e_21 = t;
                                  int g_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_49;
                                      t = fetch_1_0(b_5, t);
                                      t = r_49;
                                      LocalPopChoice(g_21);
                                    }
                                  else
                                    {
                                      t = e_21;
                                      t = r_49;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = x_20;
                          {
                            ATerm i_21 = t;
                            int j_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(d_5, t);
                                t = r_49;
                                LocalPopChoice(j_21);
                              }
                            else
                              {
                                t = i_21;
                                {
                                  ATerm k_21 = t;
                                  int l_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_49;
                                      t = fetch_1_0(h_5, t);
                                      t = r_49;
                                      LocalPopChoice(l_21);
                                    }
                                  else
                                    {
                                      t = k_21;
                                      t = v_49;
                                      t = fetch_1_0(m_5, t);
                                      t = r_49;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = m_49;
                    {
                      ATerm n_21 = t;
                      int o_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(n_5, t);
                          t = r_49;
                          LocalPopChoice(o_21);
                        }
                      else
                        {
                          t = n_21;
                          {
                            ATerm p_21 = t;
                            int q_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(o_5, t);
                                t = r_49;
                                LocalPopChoice(q_21);
                              }
                            else
                              {
                                t = p_21;
                                t = v_49;
                                t = fetch_1_0(p_5, t);
                                t = r_49;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm r_21 = t;
                int v_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(q_5, t);
                    t = r_49;
                    LocalPopChoice(v_21);
                  }
                else
                  {
                    t = r_21;
                    {
                      ATerm w_21 = t;
                      int y_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(r_5, t);
                          t = r_49;
                          LocalPopChoice(y_21);
                        }
                      else
                        {
                          t = w_21;
                          t = v_49;
                          t = fetch_1_0(s_5, t);
                          t = r_49;
                        }
                    }
                  }
              }
          }
        else
          {
            t = u_20;
            if(match_cons(t, sym_cf_1))
              {
                p_49 = ATgetArgument(t, 0);
                t = p_49;
                if(match_cons(t, sym_sort_1))
                  {
                    q_49 = ATgetArgument(t, 0);
                    t = s_49;
                    {
                      ATerm z_21 = t;
                      int a_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(t_5, t);
                          t = r_49;
                          LocalPopChoice(a_22);
                        }
                      else
                        {
                          t = z_21;
                          {
                            ATerm b_22 = t;
                            int e_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(u_5, t);
                                t = r_49;
                                LocalPopChoice(e_22);
                              }
                            else
                              {
                                t = b_22;
                                {
                                  ATerm g_22 = t;
                                  int h_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = e_52(s_49, q_49, v_49, r_49, t);
                                      LocalPopChoice(h_22);
                                    }
                                  else
                                    {
                                      t = g_22;
                                      t = v_49;
                                      t = fetch_1_0(x_5, t);
                                      t = r_49;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = s_49;
                    {
                      ATerm i_22 = t;
                      int j_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(z_5, t);
                          t = r_49;
                          LocalPopChoice(j_22);
                        }
                      else
                        {
                          t = i_22;
                          {
                            ATerm k_22 = t;
                            int r_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(f_6, t);
                                t = r_49;
                                LocalPopChoice(r_22);
                              }
                            else
                              {
                                t = k_22;
                                t = v_49;
                                t = fetch_1_0(k_6, t);
                                t = r_49;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = s_49;
                {
                  ATerm s_22 = t;
                  int t_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_49;
                      t = fetch_1_0(l_6, t);
                      t = r_49;
                      LocalPopChoice(t_22);
                    }
                  else
                    {
                      t = s_22;
                      {
                        ATerm u_22 = t;
                        int v_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_49;
                            t = fetch_1_0(m_6, t);
                            t = r_49;
                            LocalPopChoice(v_22);
                          }
                        else
                          {
                            t = u_22;
                            t = v_49;
                            t = fetch_1_0(n_6, t);
                            t = r_49;
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
      t = t_49;
      if(match_cons(t, sym_cf_1))
        {
          p_49 = ATgetArgument(t, 0);
          t = p_49;
          if(match_cons(t, sym_sort_1))
            {
              q_49 = ATgetArgument(t, 0);
              t = s_49;
              {
                ATerm w_22 = t;
                int x_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(o_6, t);
                    t = r_49;
                    LocalPopChoice(x_22);
                  }
                else
                  {
                    t = w_22;
                    {
                      ATerm y_22 = t;
                      int z_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(t_6, t);
                          t = r_49;
                          LocalPopChoice(z_22);
                        }
                      else
                        {
                          t = y_22;
                          {
                            ATerm f_23 = t;
                            int g_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_52(s_49, q_49, v_49, r_49, t);
                                LocalPopChoice(g_23);
                              }
                            else
                              {
                                t = f_23;
                                t = v_49;
                                t = fetch_1_0(v_6, t);
                                t = r_49;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = s_49;
              {
                ATerm h_23 = t;
                int i_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(w_6, t);
                    t = r_49;
                    LocalPopChoice(i_23);
                  }
                else
                  {
                    t = h_23;
                    {
                      ATerm j_23 = t;
                      int k_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(x_6, t);
                          t = r_49;
                          LocalPopChoice(k_23);
                        }
                      else
                        {
                          t = j_23;
                          t = v_49;
                          t = fetch_1_0(y_6, t);
                          t = r_49;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = s_49;
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_49;
                t = fetch_1_0(a_7, t);
                t = r_49;
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                {
                  ATerm n_23 = t;
                  int q_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_49;
                      t = fetch_1_0(b_7, t);
                      t = r_49;
                      LocalPopChoice(q_23);
                    }
                  else
                    {
                      t = n_23;
                      t = v_49;
                      t = fetch_1_0(d_7, t);
                      t = r_49;
                    }
                }
              }
          }
        }
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm y_34 (ATerm), ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  t = number_nonterminals_0_0(t);
  i_52 = t;
  t = make_0_0(t);
  f_52 = t;
  t = i_52;
  {
    static ATerm g_7 (ATerm t);
    static ATerm g_7 (ATerm t)
    {
      static ATerm h_7 (ATerm t);
      static ATerm h_7 (ATerm t)
      {
        ATerm j_52 = NULL;
        t = term_j_16;
        t = y_34(t);
        j_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_52, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(h_7, t);
      return(t);
    }
    t = map_1_0(g_7, t);
  }
  t = concat_0_0(t);
  g_52 = t;
  t = term_j_16;
  t = y_34(t);
  h_52 = t;
  t = (ATerm) ATinsert(CheckATermList(g_52), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, h_52), f_52));
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,a_53 = NULL;
  if(match_cons(t, sym_term_1))
    {
      a_53 = ATgetArgument(t, 0);
      t = a_53;
      if(match_cons(t, sym_appl_2))
        {
          y_52 = ATgetArgument(t, 0);
          t_52 = ATgetArgument(t, 1);
          t = y_52;
          if(match_cons(t, sym_uqlit_1))
            {
              s_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_52;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
            _fail(t);
          t = t_52;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_52 = ATgetFirst((ATermList) t);
              x_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_52;
          if(match_cons(t, sym_fun_1))
            {
              v_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_52;
          if(match_cons(t, sym_qlit_1))
            {
              w_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_52;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_52;
          t = un_double_quote_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              y_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_52;
        }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          a_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_53;
    }
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(j_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm r_23 = t;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(p_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_23;
    }
  t = missing_constructor_warning_0_0(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
  o_53 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      p_53 = ATgetArgument(t, 0);
      q_53 = ATgetArgument(t, 1);
      r_53 = ATgetArgument(t, 2);
      n_53 = ATgetArgument(t, 3);
      {
        ATerm w_53 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_23)), q_53), (ATerm) ATinsert(ATinsert(ATempty, term_u_23), (ATerm) ATmakeAppl(sym_lit_1, p_53)));
        t = concat_0_0(t);
        w_53 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, w_53, r_53, n_53);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm x_23 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          p_53 = ATgetArgument(t, 0);
          {
            ATerm z_23 = ATgetArgument(t, 1);
          }
          r_53 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_53;
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = NULL;
            t = r_53;
            if(match_cons(t, sym_attrs_1))
              {
                y_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_23;
            t = get_cnstr_name_0_0(t);
            x_23 = t;
            LocalPopChoice(b_24);
            {
              static ATerm k_7 (ATerm t);
              static ATerm k_7 (ATerm t)
              {
                t = x_23;
                return(t);
              }
              t = p_53;
              t = symbols2pp_entries_1_0(k_7, t);
            }
          }
        else
          {
            t = a_24;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(d_24);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = c_24;
                  t = try_1_0(o_7, t);
                  t = (ATerm) ATempty;
                }
            }
          }
      }
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,i_54 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_54 = ATgetFirst((ATermList) t);
            c_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_54 = ATgetFirst((ATermList) t);
            e_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_54;
        t = pair_0_0(t);
        i_54 = t;
        t = (ATerm) ATinsert(CheckATermList(i_54), (ATerm) ATmakeAppl(sym__2, b_54, d_54));
      }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm k_56 = NULL;
  t = _2_0(_id, w_7, t);
  if(match_cons(t, sym_lit_1))
    {
      k_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_24, (ATerm) ATmakeAppl(sym_S_1, k_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          k_56 = ATgetArgument(t, 0);
          {
            ATerm i_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, k_56);
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = map_1_0(x_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
  g_56 = t;
  if(match_cons(t, sym_iter_1))
    {
      h_56 = ATgetArgument(t, 0);
      {
        ATerm e_24 = NULL,c_5 = NULL;
        t = SSLgetAnnotations(g_56);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, h_56);
        c_5 = t;
        t = SSLsetAnnotations(c_5, e_24);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          h_56 = ATgetArgument(t, 0);
          {
            ATerm l_24 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(g_56);
            l_24 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, h_56);
            e_5 = t;
            t = SSLsetAnnotations(e_5, l_24);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              h_56 = ATgetArgument(t, 0);
              i_56 = ATgetArgument(t, 1);
              {
                ATerm t_24 = NULL,f_5 = NULL;
                t = SSLgetAnnotations(g_56);
                t_24 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, h_56, i_56);
                f_5 = t;
                t = SSLsetAnnotations(f_5, t_24);
              }
            }
          else
            {
              ATerm w_25 = NULL,g_5 = NULL;
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  h_56 = ATgetArgument(t, 0);
                  i_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_56);
              w_25 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, h_56, i_56);
              g_5 = t;
              t = SSLsetAnnotations(g_5, w_25);
            }
        }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,s_56 = NULL,i_5 = NULL;
  q_56 = t;
  if(match_cons(t, sym_lit_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_56);
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, p_56);
  i_5 = t;
  t = SSLsetAnnotations(i_5, o_56);
  if(match_cons(t, sym_lit_1))
    {
      s_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_24, (ATerm) ATmakeAppl(sym_S_1, s_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          s_56 = ATgetArgument(t, 0);
          {
            ATerm j_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, s_56);
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  static ATerm g_8 (ATerm t);
  static ATerm h_8 (ATerm t);
  static ATerm g_8 (ATerm t)
  {
    ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,i_57 = NULL,j_5 = NULL;
    g_57 = t;
    if(match_cons(t, sym_lit_1))
      {
        f_57 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_57);
    e_57 = t;
    t = (ATerm) ATmakeAppl(sym_lit_1, f_57);
    j_5 = t;
    t = SSLsetAnnotations(j_5, e_57);
    if(match_cons(t, sym_lit_1))
      {
        i_57 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_24, (ATerm) ATmakeAppl(sym_S_1, i_57));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            i_57 = ATgetArgument(t, 0);
            {
              ATerm k_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, i_57);
      }
    if(((c_57 != NULL) && (c_57 != t)))
      _fail(t);
    else
      c_57 = t;
    return(t);
  }
  static ATerm h_8 (ATerm t)
  {
    ATerm a_58 = NULL;
    t = _2_0(_id, j_8, t);
    if(match_cons(t, sym_lit_1))
      {
        a_58 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_24, (ATerm) ATmakeAppl(sym_S_1, a_58));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            a_58 = ATgetArgument(t, 0);
            {
              ATerm m_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, a_58);
      }
    if(((d_57 != NULL) && (d_57 != t)))
      _fail(t);
    else
      d_57 = t;
    return(t);
  }
  t = _2_0(g_8, h_8, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_p_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_57)), not_null(c_57)));
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL;
  x_57 = t;
  if(match_cons(t, sym_iter_1))
    {
      y_57 = ATgetArgument(t, 0);
      {
        ATerm k_26 = NULL,k_5 = NULL;
        t = SSLgetAnnotations(x_57);
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, y_57);
        k_5 = t;
        t = SSLsetAnnotations(k_5, k_26);
      }
    }
  else
    {
      ATerm z_26 = NULL,l_5 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          y_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_57);
      z_26 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, y_57);
      l_5 = t;
      t = SSLsetAnnotations(l_5, z_26);
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm f_58 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      f_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_24, (ATerm) ATmakeAppl(sym_S_1, f_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_58 = ATgetArgument(t, 0);
          {
            ATerm q_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_58);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL;
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_55 = NULL;
      t = reverse_0_0(t);
      t = Cons_2_0(r_7, v_7, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_55 = ATgetFirst((ATermList) t);
          b_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_24 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, Nil_0_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_24;
          }
      }
      t = b_55;
      t = reverse_0_0(t);
      g_55 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, c_55), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, g_55)));
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_0_0(t);
            {
              static ATerm d_8 (ATerm t);
              static ATerm e_8 (ATerm t);
              static ATerm d_8 (ATerm t)
              {
                ATerm y_56 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    y_56 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_24, (ATerm) ATmakeAppl(sym_S_1, y_56));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        y_56 = ATgetArgument(t, 0);
                        {
                          ATerm x_24 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, y_56);
                  }
                if(((f_55 != NULL) && (f_55 != t)))
                  _fail(t);
                else
                  f_55 = t;
                return(t);
              }
              static ATerm e_8 (ATerm t)
              {
                ATerm y_24 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_24;
                  }
                t = reverse_0_0(t);
                if(((d_55 != NULL) && (d_55 != t)))
                  _fail(t);
                else
                  d_55 = t;
                return(t);
              }
              t = Cons_2_0(d_8, e_8, t);
            }
            t = not_null(d_55);
            t = pair_0_0(t);
            t = map_1_0(f_8, t);
            e_55 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_55)), e_55));
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = map_1_0(k_8, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm z_24 = t;
  if((PushChoice() == 0))
    {
      ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,v_5 = NULL;
      r_58 = t;
      if(match_cons(t, sym_lit_1))
        {
          q_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_58);
      p_58 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, q_58);
      v_5 = t;
      t = SSLsetAnnotations(v_5, p_58);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_24;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm number_node_1_0 (ATerm c_35 (ATerm), ATerm t)
{
  static ATerm j_59 (ATerm t);
  static ATerm j_59 (ATerm t)
  {
    ATerm d_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(_id, Nil_0_0, t);
        t = (ATerm) ATempty;
        LocalPopChoice(g_25);
      }
    else
      {
        t = d_25;
        {
          ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
          if(match_cons(t, sym__2))
            {
              c_59 = ATgetArgument(t, 0);
              d_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_59;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_59 = ATgetFirst((ATermList) t);
              f_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm h_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_59 = NULL,h_59 = NULL;
                t = e_59;
                t = c_35(t);
                t = (ATerm) ATmakeAppl(sym__2, c_59, term_y_16);
                t = add_0_0(t);
                h_59 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_59, f_59);
                t = j_59(t);
                g_59 = t;
                t = (ATerm) ATinsert(CheckATermList(g_59), (ATerm) ATmakeAppl(sym__2, c_59, e_59));
                LocalPopChoice(j_25);
              }
            else
              {
                t = h_25;
                {
                  ATerm i_59 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, c_59, f_59);
                  t = j_59(t);
                  i_59 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_59), e_59);
                }
              }
          }
        }
      }
    return(t);
  }
  t = split_2_0(l_8, _id, t);
  t = j_59(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = try_1_0(n_8, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm k_59 = NULL;
  if(match_cons(t, sym_label_2))
    {
      ATerm m_25 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_59;
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(m_8, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = try_1_0(r_8, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  {
    ATerm p_25 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_25;
      }
  }
  t = (ATerm) ATinsert(ATempty, l_59);
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(p_8, t);
  t = concat_0_0(t);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,r_59 = NULL,s_59 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      r_59 = ATgetArgument(t, 0);
      s_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_59;
  if(match_cons(t, sym_alt_2))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_59 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, o_59, p_59);
            t = flat_alt_0_0(t);
            w_59 = t;
            t = (ATerm) ATinsert(CheckATermList(w_59), r_59);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = (ATerm) ATinsert(ATinsert(ATempty, s_59), r_59);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, s_59), r_59);
    }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = topdown_1_0(z_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = try_1_0(c_9, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,i_7 = NULL;
  t_61 = t;
  if(match_cons(t, sym_Arg_1))
    {
      s_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_61);
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, s_61);
  i_7 = t;
  t = SSLsetAnnotations(i_7, r_61);
  t = term_u_25;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = _2_0(_id, e_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL;
  ATerm v_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          a_62 = ATgetArgument(t, 0);
          b_62 = ATgetArgument(t, 1);
          {
            ATerm c_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_25);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, a_62, b_62);
    }
  else
    {
      t = v_25;
      if(match_cons(t, sym_iter_n_2))
        {
          a_62 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, a_62);
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm z_34 (ATerm), ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  static ATerm j_63 (ATerm t);
  static ATerm j_63 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
        if(match_cons(t, sym__2))
          {
            b_61 = ATgetArgument(t, 0);
            e_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_61;
        {
          ATerm g_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lit_1))
                {
                  ATerm i_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(h_26);
              t = (ATerm) ATempty;
            }
          else
            {
              t = g_26;
              if(match_cons(t, sym__2))
                {
                  f_61 = ATgetArgument(t, 0);
                  h_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_61;
              {
                ATerm j_26 = t;
                int l_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm m_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_26);
                    t = (ATerm) ATempty;
                  }
                else
                  {
                    t = j_26;
                    {
                      ATerm n_26 = t;
                      int o_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm p_26 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_26);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = n_26;
                          {
                            ATerm p_61 = NULL,q_61 = NULL;
                            if(match_cons(t, sym_alt_2))
                              {
                                i_61 = ATgetArgument(t, 0);
                                j_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = b_61;
                            if(match_cons(t, sym__2))
                              {
                                c_61 = ATgetArgument(t, 0);
                                d_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = j_61;
                            if(match_cons(t, sym_alt_2))
                              {
                                k_61 = ATgetArgument(t, 0);
                                l_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = c_61;
                            if(((w_60 != NULL) && (w_60 != t)))
                              _fail(t);
                            else
                              w_60 = t;
                            t = d_61;
                            if(((x_60 != NULL) && (x_60 != t)))
                              _fail(t);
                            else
                              x_60 = t;
                            t = f_61;
                            if(((y_60 != NULL) && (y_60 != t)))
                              _fail(t);
                            else
                              y_60 = t;
                            t = (ATerm) ATmakeAppl(sym_alt_2, i_61, (ATerm) ATmakeAppl(sym_alt_2, k_61, l_61));
                            t = flat_alt_0_0(t);
                            p_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_q_26, p_61);
                            t = mkterm_0_0(t);
                            q_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_61, d_61), (ATerm) ATmakeAppl(sym__2, f_61, q_61));
                            t = j_63(t);
                            t = Cons_2_0(v_8, _id, t);
                          }
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm r_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(_id, d_9, t);
              t = j_63(t);
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              {
                static ATerm k_63 (ATerm f_62, ATerm g_62, ATerm h_62, ATerm i_62, ATerm j_62, ATerm t);
                static ATerm k_63 (ATerm f_62, ATerm g_62, ATerm h_62, ATerm i_62, ATerm j_62, ATerm t)
                {
                  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
                  t = SSL_explode_term(i_62);
                  if(match_cons(t, sym__2))
                    {
                      q_62 = ATgetArgument(t, 0);
                      r_62 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, g_62, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, h_62, q_62)));
                  t = conc_0_0(t);
                  m_62 = t;
                  t = r_62;
                  t = argument_list_0_0(t);
                  t = number_nonterminals_0_0(t);
                  s_62 = t;
                  t = make_0_0(t);
                  n_62 = t;
                  t = s_62;
                  {
                    static ATerm f_9 (ATerm t);
                    static ATerm f_9 (ATerm t)
                    {
                      ATerm u_62 = NULL;
                      u_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_62, m_62), u_62);
                      t = j_63(t);
                      return(t);
                    }
                    t = map_1_0(f_9, t);
                  }
                  t = concat_0_0(t);
                  o_62 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_62), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, f_62, m_62), n_62));
                  return(t);
                }
                ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
                x_62 = t;
                if(match_cons(t, sym__2))
                  {
                    y_62 = ATgetArgument(t, 0);
                    b_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_62;
                if(match_cons(t, sym__2))
                  {
                    z_62 = ATgetArgument(t, 0);
                    a_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_63;
                if(match_cons(t, sym__2))
                  {
                    c_63 = ATgetArgument(t, 0);
                    d_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_63;
                if(match_cons(t, sym_bracket_symbol_1))
                  {
                    w_62 = ATgetArgument(t, 0);
                    {
                      ATerm t_26 = t;
                      int u_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_62, a_63), (ATerm) ATmakeAppl(sym__2, c_63, w_62));
                          t = j_63(t);
                          LocalPopChoice(u_26);
                        }
                      else
                        {
                          t = t_26;
                          t = k_63(z_62, a_63, c_63, d_63, x_62, t);
                        }
                    }
                  }
                else
                  {
                    t = k_63(z_62, a_63, c_63, d_63, x_62, t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm u_8 (ATerm t);
  static ATerm u_8 (ATerm t)
  {
    t = term_j_16;
    t = z_34(t);
    return(t);
  }
  t = split_2_0(u_8, _id, t);
  t = j_63(t);
  return(t);
}
static ATerm b_65 (ATerm s_63, ATerm t_63, ATerm u_63, ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,y_63 = NULL;
  t = u_63;
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_63;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        {
          ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,e_64 = NULL;
          t = t_63;
          t = reverse_0_0(t);
          {
            static ATerm h_9 (ATerm t);
            static ATerm i_9 (ATerm t);
            static ATerm h_9 (ATerm t)
            {
              if(((w_63 != NULL) && (w_63 != t)))
                _fail(t);
              else
                w_63 = t;
              return(t);
            }
            static ATerm i_9 (ATerm t)
            {
              t = reverse_0_0(t);
              if(((v_63 != NULL) && (v_63 != t)))
                _fail(t);
              else
                v_63 = t;
              return(t);
            }
            t = Cons_2_0(h_9, i_9, t);
          }
          t = not_null(v_63);
          t = pp_table_get_0_0(t);
          t = Fst_0_0(t);
          if(match_cons(t, sym_Path_2))
            {
              e_64 = ATgetArgument(t, 0);
              a_64 = ATgetArgument(t, 1);
              t = a_64;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_64 = ATgetFirst((ATermList) t);
                  c_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_64;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, e_64, (ATerm) ATinsert(ATempty, b_64));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  e_64 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, e_64, (ATerm) ATempty);
            }
          y_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_63), s_63);
          {
            static ATerm l_9 (ATerm t);
            static ATerm l_9 (ATerm t)
            {
              t = y_63;
              return(t);
            }
            t = symbol2abox_1_0(l_9, t);
          }
          t = map_1_0(m_9, t);
          t = t_63;
          t = pp_table_get_0_0(t);
          t = Snd_0_0(t);
        }
      }
  }
  return(t);
}
static ATerm c_65 (ATerm k_64, ATerm l_64, ATerm m_64, ATerm n_64, ATerm o_64, ATerm t)
{
  t = o_64;
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATmakeAppl(sym_prod_3, k_64, l_64, m_64);
        t = generate_pp_entries_0_0(t);
        t = map_1_0(n_9, t);
        t = n_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
      }
  }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      i_64 = ATgetArgument(t, 0);
      j_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(i_64, j_64, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      t_64 = ATgetArgument(t, 0);
      u_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(t_64, u_64, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  v_64 = t;
  if(match_cons(t, sym__2))
    {
      w_64 = ATgetArgument(t, 0);
      a_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_64;
  if(match_cons(t, sym_prod_3))
    {
      x_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
      z_64 = ATgetArgument(t, 2);
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_65(w_64, a_65, v_64, t);
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            t = c_65(x_64, y_64, z_64, a_65, v_64, t);
          }
      }
    }
  else
    {
      t = b_65(w_64, a_65, v_64, t);
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(c_27) != AT_INT) || (ATgetInt((ATermInt) c_27) != 34)))
        _fail(t);
      {
        ATerm d_27 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(d_27) != AT_LIST) || !(ATisEmpty(d_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm d_65 = NULL;
  t = explode_string_0_0(t);
  d_65 = t;
  {
    ATerm e_27 = t;
    if((PushChoice() == 0))
      {
        t = Hd_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_27;
      }
  }
  t = d_65;
  {
    ATerm f_27 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(o_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_27;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_27)), d_65), (ATerm) ATinsert(ATempty, term_g_27));
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm f_65 = NULL,j_65 = NULL;
  ATerm h_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm l_27 = ATgetArgument(t, 0);
          ATerm n_27 = ATgetArgument(t, 1);
          ATerm o_27 = ATgetArgument(t, 2);
          f_65 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(k_27);
      {
        ATerm l_65 = NULL;
        t = f_65;
        {
          static ATerm p_9 (ATerm t);
          static ATerm p_9 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((l_65 != NULL) && (l_65 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_65 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(p_9, t);
        }
        t = not_null(l_65);
      }
    }
  else
    {
      t = h_27;
      {
        ATerm n_65 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm t_27 = ATgetArgument(t, 0);
            ATerm u_27 = ATgetArgument(t, 1);
            j_65 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_65;
        {
          static ATerm q_9 (ATerm t);
          static ATerm q_9 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((n_65 != NULL) && (n_65 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_65 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(q_9, t);
        }
        t = not_null(n_65);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
  if(match_cons(t, sym__2))
    {
      w_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_65;
  if(match_cons(t, sym_prod_fun_4))
    {
      x_65 = ATgetArgument(t, 0);
      y_65 = ATgetArgument(t, 1);
      z_65 = ATgetArgument(t, 2);
      t_65 = ATgetArgument(t, 3);
      t = t_65;
      if(match_cons(t, sym_attrs_1))
        {
          s_65 = ATgetArgument(t, 0);
          {
            ATerm g_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, s_65, a_66);
            t = conc_0_0(t);
            g_66 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, x_65, y_65, z_65, (ATerm) ATmakeAppl(sym_attrs_1, g_66));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, x_65, y_65, z_65, (ATerm) ATmakeAppl(sym_attrs_1, a_66));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          x_65 = ATgetArgument(t, 0);
          y_65 = ATgetArgument(t, 1);
          z_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_65;
      if(match_cons(t, sym_attrs_1))
        {
          u_65 = ATgetArgument(t, 0);
          {
            ATerm q_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, u_65, a_66);
            t = conc_0_0(t);
            q_66 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, x_65, y_65, (ATerm) ATmakeAppl(sym_attrs_1, q_66));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, x_65, y_65, (ATerm) ATmakeAppl(sym_attrs_1, a_66));
        }
    }
  return(t);
}
ATerm string_Hd_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = Hd_0_0(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm v_27 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_27;
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm w_66 = NULL;
  w_66 = t;
  t = string_Hd_0_0(t);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_upper_0_0(t);
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        t = is_lower_0_0(t);
      }
  }
  t = w_66;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm v_66 = NULL;
  t = filter_1_0(t_9, t);
  t = Cons_2_0(y_9, _id, t);
  t = separate_by_1_0(z_9, t);
  t = concat_strings_0_0(t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_66, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_28), term_o_28), term_m_28), term_l_28), term_k_28), term_j_28), term_i_28), term_h_28), term_e_28), term_d_28), term_b_28), term_a_28), term_z_27));
  {
    ATerm r_28 = t;
    if((PushChoice() == 0))
      {
        t = is_subterm_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_28;
      }
  }
  t = v_66;
  t = escape_0_0(t);
  t = quote_0_0(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_28);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_28);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_28);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  c_67 = t;
  if(match_cons(t, sym_cf_1))
    {
      a_67 = ATgetArgument(t, 0);
      t = a_67;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          a_67 = ATgetArgument(t, 0);
          t = a_67;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_w_28);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  a_67 = ATgetArgument(t, 0);
                  b_67 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(b_67), a_67);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      a_67 = ATgetArgument(t, 0);
                      t = a_67;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(a_10, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          a_67 = ATgetArgument(t, 0);
                          t = a_67;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(e_10, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              a_67 = ATgetArgument(t, 0);
                              t = a_67;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(f_10, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  a_67 = ATgetArgument(t, 0);
                                  b_67 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_67 = NULL,n_67 = NULL;
                                    t = a_67;
                                    t = Sym2Strs_0_0(t);
                                    m_67 = t;
                                    t = b_67;
                                    t = Sym2Strs_0_0(t);
                                    n_67 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_28)), n_67), m_67);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      a_67 = ATgetArgument(t, 0);
                                      b_67 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_67 = NULL,r_67 = NULL;
                                        t = a_67;
                                        t = Sym2Strs_0_0(t);
                                        q_67 = t;
                                        t = b_67;
                                        t = Sym2Strs_0_0(t);
                                        r_67 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_28)), r_67), q_67);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm y_28 = t;
                                      int z_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              a_67 = ATgetArgument(t, 0);
                                              {
                                                ATerm a_29 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(z_28);
                                          {
                                            ATerm t_67 = NULL;
                                            t = a_67;
                                            t = Sym2Strs_0_0(t);
                                            t_67 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_29)), t_67);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = y_28;
                                          {
                                            ATerm c_29 = t;
                                            int e_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    a_67 = ATgetArgument(t, 0);
                                                    b_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm g_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(e_29);
                                                {
                                                  ATerm x_67 = NULL,y_67 = NULL;
                                                  t = a_67;
                                                  t = Sym2Strs_0_0(t);
                                                  x_67 = t;
                                                  t = b_67;
                                                  t = Sym2Strs_0_0(t);
                                                  y_67 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_29)), y_67), x_67);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = c_29;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    a_67 = ATgetArgument(t, 0);
                                                    b_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm b_68 = NULL,c_68 = NULL;
                                                      t = a_67;
                                                      t = Sym2Strs_0_0(t);
                                                      b_68 = t;
                                                      t = b_67;
                                                      t = Sym2Strs_0_0(t);
                                                      c_68 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_68), (ATerm) ATinsert(ATempty, term_h_29)), b_68);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        a_67 = ATgetArgument(t, 0);
                                                        b_67 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_68 = NULL,g_68 = NULL;
                                                          t = a_67;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          f_68 = t;
                                                          t = b_67;
                                                          t = Sym2Strs_0_0(t);
                                                          g_68 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_68), (ATerm) ATinsert(ATempty, term_i_29)), f_68);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            a_67 = ATgetArgument(t, 0);
                                                            b_67 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm j_68 = NULL,k_68 = NULL;
                                                              t = a_67;
                                                              t = Sym2Strs_0_0(t);
                                                              j_68 = t;
                                                              t = b_67;
                                                              t = Sym2Strs_0_0(t);
                                                              k_68 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_68), (ATerm) ATinsert(ATempty, term_j_29)), j_68);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                a_67 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, a_67);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    a_67 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm o_68 = NULL;
                                                                      t = a_67;
                                                                      t = try_1_0(i_10, t);
                                                                      o_68 = t;
                                                                      t = (ATerm) ATinsert(ATempty, o_68);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm k_29 = t;
                                                                    int l_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            a_67 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm n_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(l_29);
                                                                        {
                                                                          ATerm q_68 = NULL;
                                                                          t = a_67;
                                                                          t = try_1_0(j_10, t);
                                                                          q_68 = t;
                                                                          t = (ATerm) ATinsert(ATempty, q_68);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_29;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_o_29);
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm k_10 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(k_10, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm quote_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  t = explode_string_0_0(t);
  m_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_27)), m_27), (ATerm) ATinsert(ATempty, term_g_27));
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_29 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_29) != AT_INT) || (ATgetInt((ATermInt) s_29) != 34)))
        _fail(t);
      {
        ATerm t_29 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(t_29) != AT_LIST) || !(ATisEmpty(t_29))))
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
  ATerm i_72 = NULL;
  t = explode_string_0_0(t);
  i_72 = t;
  t = Hd_0_0(t);
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = i_72;
  t = Tl_0_0(t);
  t = at_last_1_0(l_10, t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm c_69 (ATerm y_68, ATerm t)
{
  t = y_68;
  t = explode_string_0_0(t);
  {
    ATerm u_29 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(m_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_29;
      }
  }
  t = term_v_29;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_num_0_0(t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_upper_0_0(t);
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            {
              ATerm a_30 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_lower_0_0(t);
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = a_30;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_j_16;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm b_69 = NULL;
  b_69 = t;
  if(match_string(t, "|="))
    {
      ATerm c_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_69(b_69, t);
          LocalPopChoice(d_30);
        }
      else
        {
          t = c_30;
          t = term_e_30;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm f_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_69(b_69, t);
              LocalPopChoice(g_30);
            }
          else
            {
              t = f_30;
              t = term_h_30;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm j_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_69(b_69, t);
                  LocalPopChoice(k_30);
                }
              else
                {
                  t = j_30;
                  t = term_l_30;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm m_30 = t;
                  int n_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = c_69(b_69, t);
                      LocalPopChoice(n_30);
                    }
                  else
                    {
                      t = m_30;
                      t = term_o_30;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm p_30 = t;
                      int q_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_69(b_69, t);
                          LocalPopChoice(q_30);
                        }
                      else
                        {
                          t = p_30;
                          t = term_r_30;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm s_30 = t;
                          int t_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = c_69(b_69, t);
                              LocalPopChoice(t_30);
                            }
                          else
                            {
                              t = s_30;
                              t = term_v_30;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm w_30 = t;
                              int x_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = c_69(b_69, t);
                                  LocalPopChoice(x_30);
                                }
                              else
                                {
                                  t = w_30;
                                  t = term_y_30;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm z_30 = t;
                                  int a_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = c_69(b_69, t);
                                      LocalPopChoice(a_31);
                                    }
                                  else
                                    {
                                      t = z_30;
                                      t = term_b_31;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm c_31 = t;
                                      int d_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = c_69(b_69, t);
                                          LocalPopChoice(d_31);
                                        }
                                      else
                                        {
                                          t = c_31;
                                          t = term_e_31;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm f_31 = t;
                                          int g_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = c_69(b_69, t);
                                              LocalPopChoice(g_31);
                                            }
                                          else
                                            {
                                              t = f_31;
                                              t = term_h_31;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm i_31 = t;
                                              int j_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = c_69(b_69, t);
                                                  LocalPopChoice(j_31);
                                                }
                                              else
                                                {
                                                  t = i_31;
                                                  t = term_k_31;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm m_31 = t;
                                                  int n_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = c_69(b_69, t);
                                                      LocalPopChoice(n_31);
                                                    }
                                                  else
                                                    {
                                                      t = m_31;
                                                      t = term_o_31;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm p_31 = t;
                                                      int q_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_69(b_69, t);
                                                          LocalPopChoice(q_31);
                                                        }
                                                      else
                                                        {
                                                          t = p_31;
                                                          t = term_r_31;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm s_31 = t;
                                                          int t_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = c_69(b_69, t);
                                                              LocalPopChoice(t_31);
                                                            }
                                                          else
                                                            {
                                                              t = s_31;
                                                              t = term_j_29;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm u_31 = t;
                                                              int w_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = c_69(b_69, t);
                                                                  LocalPopChoice(w_31);
                                                                }
                                                              else
                                                                {
                                                                  t = u_31;
                                                                  t = term_x_31;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm y_31 = t;
                                                                  int a_32 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = c_69(b_69, t);
                                                                      LocalPopChoice(a_32);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_31;
                                                                      t = term_x_31;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm b_32 = t;
                                                                      int c_32 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = c_69(b_69, t);
                                                                          LocalPopChoice(c_32);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_32;
                                                                          t = term_d_32;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm e_32 = t;
                                                                          int f_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = c_69(b_69, t);
                                                                              LocalPopChoice(f_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_32;
                                                                              t = term_g_32;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm h_32 = t;
                                                                              int i_32 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = c_69(b_69, t);
                                                                                  LocalPopChoice(i_32);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_32;
                                                                                  t = term_j_32;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm k_32 = t;
                                                                                  int l_32 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = c_69(b_69, t);
                                                                                      LocalPopChoice(l_32);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_32;
                                                                                      t = term_m_32;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm n_32 = t;
                                                                                      int o_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = c_69(b_69, t);
                                                                                          LocalPopChoice(o_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_32;
                                                                                          t = term_p_32;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm r_32 = t;
                                                                                          int s_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = c_69(b_69, t);
                                                                                              LocalPopChoice(s_32);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_32;
                                                                                              t = term_t_32;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm u_32 = t;
                                                                                              int v_32 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = c_69(b_69, t);
                                                                                                  LocalPopChoice(v_32);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = u_32;
                                                                                                  t = term_w_32;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm x_32 = t;
                                                                                                  int z_32 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = c_69(b_69, t);
                                                                                                      LocalPopChoice(z_32);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = x_32;
                                                                                                      t = term_b_33;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm c_33 = t;
                                                                                                      int d_33 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = c_69(b_69, t);
                                                                                                          LocalPopChoice(d_33);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = c_33;
                                                                                                          t = term_e_33;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm f_33 = t;
                                                                                                          int g_33 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = c_69(b_69, t);
                                                                                                              LocalPopChoice(g_33);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = f_33;
                                                                                                              t = term_h_33;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm i_33 = t;
                                                                                                              int j_33 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = c_69(b_69, t);
                                                                                                                  LocalPopChoice(j_33);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_33;
                                                                                                                  t = term_k_33;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm l_33 = t;
                                                                                                                  int m_33 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = c_69(b_69, t);
                                                                                                                      LocalPopChoice(m_33);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = l_33;
                                                                                                                      t = term_n_33;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm o_33 = t;
                                                                                                                      int p_33 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = c_69(b_69, t);
                                                                                                                          LocalPopChoice(p_33);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = o_33;
                                                                                                                          t = term_h_29;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm q_33 = t;
                                                                                                                          int r_33 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = c_69(b_69, t);
                                                                                                                              LocalPopChoice(r_33);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_33;
                                                                                                                              t = term_s_33;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm t_33 = t;
                                                                                                                              int u_33 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = c_69(b_69, t);
                                                                                                                                  LocalPopChoice(u_33);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = t_33;
                                                                                                                                  t = term_w_33;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm x_33 = t;
                                                                                                                                  int y_33 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = c_69(b_69, t);
                                                                                                                                      LocalPopChoice(y_33);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = x_33;
                                                                                                                                      t = term_z_33;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm a_34 = t;
                                                                                                                                      int b_34 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = c_69(b_69, t);
                                                                                                                                          LocalPopChoice(b_34);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = a_34;
                                                                                                                                          t = term_c_34;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm d_34 = t;
                                                                                                                                          int e_34 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = c_69(b_69, t);
                                                                                                                                              LocalPopChoice(e_34);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = d_34;
                                                                                                                                              t = term_f_34;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm g_34 = t;
                                                                                                                                              int h_34 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = c_69(b_69, t);
                                                                                                                                                  LocalPopChoice(h_34);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = g_34;
                                                                                                                                                  t = term_i_34;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm j_34 = t;
                                                                                                                                                  int k_34 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = c_69(b_69, t);
                                                                                                                                                      LocalPopChoice(k_34);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_34;
                                                                                                                                                      t = term_l_34;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm m_34 = t;
                                                                                                                                                      int n_34 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = c_69(b_69, t);
                                                                                                                                                          LocalPopChoice(n_34);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = m_34;
                                                                                                                                                          t = term_o_34;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm p_34 = t;
                                                                                                                                                          int q_34 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = c_69(b_69, t);
                                                                                                                                                              LocalPopChoice(q_34);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = p_34;
                                                                                                                                                              t = term_s_34;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = c_69(b_69, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_69 = ATgetFirst((ATermList) t);
      n_69 = (ATerm) ATgetNext((ATermList) t);
      t = n_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_69 = ATgetFirst((ATermList) t);
          l_69 = (ATerm) ATgetNext((ATermList) t);
          t = k_69;
          if(match_int(t, 34))
            {
              t = m_69;
              if(match_int(t, 92))
                {
                  ATerm a_35 = t;
                  int b_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_69 = NULL;
                      t = l_69;
                      t = De_Escape_0_0(t);
                      q_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_69), term_g_27);
                      LocalPopChoice(b_35);
                    }
                  else
                    {
                      t = a_35;
                      {
                        ATerm v_69 = NULL;
                        t = n_69;
                        t = De_Escape_0_0(t);
                        v_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(v_69), m_69);
                      }
                    }
                }
              else
                {
                  ATerm y_69 = NULL;
                  t = n_69;
                  t = De_Escape_0_0(t);
                  y_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_69), m_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = m_69;
                  if(match_int(t, 92))
                    {
                      ATerm d_35 = t;
                      int e_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_70 = NULL;
                          t = l_69;
                          t = De_Escape_0_0(t);
                          a_70 = t;
                          t = (ATerm) ATinsert(CheckATermList(a_70), term_f_35);
                          LocalPopChoice(e_35);
                        }
                      else
                        {
                          t = d_35;
                          {
                            ATerm d_70 = NULL;
                            t = n_69;
                            t = De_Escape_0_0(t);
                            d_70 = t;
                            t = (ATerm) ATinsert(CheckATermList(d_70), m_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm g_70 = NULL;
                      t = n_69;
                      t = De_Escape_0_0(t);
                      g_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_70), m_69);
                    }
                }
              else
                {
                  ATerm j_70 = NULL;
                  t = n_69;
                  t = De_Escape_0_0(t);
                  j_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_70), m_69);
                }
            }
        }
      else
        {
          ATerm m_70 = NULL;
          t = n_69;
          t = De_Escape_0_0(t);
          m_70 = t;
          t = (ATerm) ATinsert(CheckATermList(m_70), m_69);
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
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_70 = ATgetFirst((ATermList) t);
      x_70 = (ATerm) ATgetNext((ATermList) t);
      t = x_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_70 = ATgetFirst((ATermList) t);
          v_70 = (ATerm) ATgetNext((ATermList) t);
          t = u_70;
          if(match_int(t, 34))
            {
              t = w_70;
              if(match_int(t, 92))
                {
                  ATerm g_35 = t;
                  int h_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_71 = NULL;
                      t = v_70;
                      t = De_Escape_0_0(t);
                      a_71 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_71), term_g_27);
                      LocalPopChoice(h_35);
                    }
                  else
                    {
                      t = g_35;
                      {
                        ATerm d_71 = NULL;
                        t = x_70;
                        t = De_Escape_0_0(t);
                        d_71 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_71), w_70);
                      }
                    }
                }
              else
                {
                  ATerm g_71 = NULL;
                  t = x_70;
                  t = De_Escape_0_0(t);
                  g_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(g_71), w_70);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = w_70;
                  if(match_int(t, 92))
                    {
                      ATerm i_35 = t;
                      int k_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_71 = NULL;
                          t = v_70;
                          t = De_Escape_0_0(t);
                          i_71 = t;
                          t = (ATerm) ATinsert(CheckATermList(i_71), term_f_35);
                          LocalPopChoice(k_35);
                        }
                      else
                        {
                          t = i_35;
                          {
                            ATerm l_71 = NULL;
                            t = x_70;
                            t = De_Escape_0_0(t);
                            l_71 = t;
                            t = (ATerm) ATinsert(CheckATermList(l_71), w_70);
                          }
                        }
                    }
                  else
                    {
                      ATerm o_71 = NULL;
                      t = x_70;
                      t = De_Escape_0_0(t);
                      o_71 = t;
                      t = (ATerm) ATinsert(CheckATermList(o_71), w_70);
                    }
                }
              else
                {
                  ATerm r_71 = NULL;
                  t = x_70;
                  t = De_Escape_0_0(t);
                  r_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_71), w_70);
                }
            }
        }
      else
        {
          ATerm u_71 = NULL;
          t = x_70;
          t = De_Escape_0_0(t);
          u_71 = t;
          t = (ATerm) ATinsert(CheckATermList(u_71), w_70);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  t = implode_string_0_0(t);
  return(t);
}
ATerm list_ana_1_0 (ATerm t_36 (ATerm), ATerm t)
{
  static ATerm b_72 (ATerm t);
  static ATerm b_72 (ATerm t)
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL;
        t = t_36(t);
        w_71 = t;
        t = (ATerm) ATinsert(ATempty, w_71);
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_72 = NULL,i_27 = NULL;
              a_72 = t;
              t = SSL_explode_term(a_72);
              if(match_cons(t, sym__2))
                {
                  ATerm p_35 = ATgetArgument(t, 0);
                  i_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_27;
              t = filter_1_0(b_72, t);
              t = concat_0_0(t);
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = b_72(t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm e_72 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      e_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_72;
  t = try_1_0(t_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  t = list_ana_1_0(r_10, t);
  t = separate_by_1_0(u_10, t);
  t = concat_strings_0_0(t);
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
      }
  }
  return(t);
}
static ATerm g_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t)
{
  ATerm r_72 = NULL;
  t = o_72;
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_72;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        r_72 = t;
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_72 = NULL,u_72 = NULL;
              t = (ATerm) ATinsert(ATempty, n_72);
              t = syms2strs_0_0(t);
              t_72 = t;
              t = m_72;
              t = filter_1_0(lit2str_0_0, t);
              u_72 = t;
              t = filter_1_0(v_10, t);
              t = Hd_0_0(t);
              t = (ATerm) ATmakeAppl(sym__2, t_72, u_72);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              r_72 = t;
              LocalPopChoice(v_35);
            }
          else
            {
              t = u_35;
              {
                ATerm w_35 = t;
                int x_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_72;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    r_72 = t;
                    LocalPopChoice(x_35);
                  }
                else
                  {
                    t = w_35;
                    {
                      ATerm v_72 = NULL,w_72 = NULL;
                      t = (ATerm) ATinsert(ATempty, n_72);
                      t = syms2strs_0_0(t);
                      v_72 = t;
                      t = term_j_16;
                      t = new_0_0(t);
                      w_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_72, (ATerm) ATinsert(ATinsert(ATempty, w_72), term_y_35));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      r_72 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = r_72;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm b_36 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_36;
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm d_73 = NULL;
  d_73 = t;
  {
    ATerm c_36 = t;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_36;
      }
  }
  t = d_73;
  t = quote_0_0(t);
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  y_72 = t;
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            z_72 = ATgetArgument(t, 0);
            {
              ATerm f_36 = ATgetArgument(t, 1);
            }
            {
              ATerm j_36 = ATgetArgument(t, 2);
            }
            {
              ATerm k_36 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_36);
        t = z_72;
        t = try_1_0(w_10, t);
      }
    else
      {
        t = d_36;
        if(match_cons(t, sym_prod_3))
          {
            z_72 = ATgetArgument(t, 0);
            a_73 = ATgetArgument(t, 1);
            {
              ATerm l_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_72;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm m_36 = t;
            int o_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_73(z_72, a_73, y_72, t);
                LocalPopChoice(o_36);
              }
            else
              {
                t = m_36;
                {
                  ATerm f_73 = NULL;
                  t = (ATerm) ATinsert(ATempty, a_73);
                  t = syms2strs_0_0(t);
                  f_73 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_73, (ATerm) ATinsert(ATempty, term_p_36));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = g_73(z_72, a_73, y_72, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  l_75 = t;
  if(match_cons(t, sym_sort_1))
    {
      m_75 = ATgetArgument(t, 0);
      {
        ATerm q_27 = NULL,l_7 = NULL;
        t = SSLgetAnnotations(l_75);
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, m_75);
        l_7 = t;
        t = SSLsetAnnotations(l_7, q_27);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          m_75 = ATgetArgument(t, 0);
          n_75 = ATgetArgument(t, 1);
          {
            ATerm c_28 = NULL,f_28 = NULL,g_28 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(l_75);
            c_28 = t;
            t = m_75;
            t = syntaxless_sort_0_0(t);
            f_28 = t;
            t = n_75;
            t = syntaxless_sort_0_0(t);
            g_28 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, f_28, g_28);
            m_7 = t;
            t = SSLsetAnnotations(m_7, c_28);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              m_75 = ATgetArgument(t, 0);
              {
                ATerm n_28 = NULL,p_28 = NULL,n_7 = NULL;
                t = SSLgetAnnotations(l_75);
                n_28 = t;
                t = m_75;
                t = syntaxless_sort_0_0(t);
                p_28 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, p_28);
                n_7 = t;
                t = SSLsetAnnotations(n_7, n_28);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  m_75 = ATgetArgument(t, 0);
                  {
                    ATerm v_28 = NULL,x_28 = NULL,q_7 = NULL;
                    t = SSLgetAnnotations(l_75);
                    v_28 = t;
                    t = m_75;
                    t = syntaxless_sort_0_0(t);
                    x_28 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, x_28);
                    q_7 = t;
                    t = SSLsetAnnotations(q_7, v_28);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      m_75 = ATgetArgument(t, 0);
                      {
                        ATerm d_29 = NULL,f_29 = NULL,s_7 = NULL;
                        t = SSLgetAnnotations(l_75);
                        d_29 = t;
                        t = m_75;
                        t = syntaxless_sort_0_0(t);
                        f_29 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, f_29);
                        s_7 = t;
                        t = SSLsetAnnotations(s_7, d_29);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          m_75 = ATgetArgument(t, 0);
                          n_75 = ATgetArgument(t, 1);
                          {
                            ATerm m_29 = NULL,p_29 = NULL,t_7 = NULL;
                            t = SSLgetAnnotations(l_75);
                            m_29 = t;
                            t = m_75;
                            t = syntaxless_sort_0_0(t);
                            p_29 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, p_29, n_75);
                            t_7 = t;
                            t = SSLsetAnnotations(t_7, m_29);
                          }
                        }
                      else
                        {
                          ATerm i_30 = NULL,u_30 = NULL,u_7 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              m_75 = ATgetArgument(t, 0);
                              n_75 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(l_75);
                          i_30 = t;
                          t = m_75;
                          t = syntaxless_sort_0_0(t);
                          u_30 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, u_30, n_75);
                          u_7 = t;
                          t = SSLsetAnnotations(u_7, i_30);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,o_8 = NULL;
  c_76 = t;
  if(match_cons(t, sym_prod_3))
    {
      x_75 = ATgetArgument(t, 0);
      y_75 = ATgetArgument(t, 1);
      z_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_76);
  w_75 = t;
  t = x_75;
  t = Cons_2_0(syntaxless_sort_0_0, Nil_0_0, t);
  a_76 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, a_76, y_75, z_75);
  o_8 = t;
  t = SSLsetAnnotations(o_8, w_75);
  b_76 = t;
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = has_option_1_0(x_10, t);
        LocalPopChoice(s_36);
      }
    else
      {
        t = r_36;
        t = term_u_36;
        t = get_config_0_0(t);
      }
  }
  t = b_76;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm e_76 = NULL,k_76 = NULL;
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm x_36 = ATgetArgument(t, 0);
          ATerm y_36 = ATgetArgument(t, 1);
          ATerm z_36 = ATgetArgument(t, 2);
          e_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(w_36);
      t = e_76;
      t = oncetd_1_0(y_10, t);
      t = term_j_16;
    }
  else
    {
      t = v_36;
      if(match_cons(t, sym_prod_3))
        {
          ATerm a_37 = ATgetArgument(t, 0);
          ATerm d_37 = ATgetArgument(t, 1);
          k_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_76;
      t = oncetd_1_0(z_10, t);
      t = term_j_16;
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm o_76 = NULL,s_76 = NULL;
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm g_37 = ATgetArgument(t, 0);
          ATerm h_37 = ATgetArgument(t, 1);
          ATerm i_37 = ATgetArgument(t, 2);
          o_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(f_37);
      t = o_76;
      t = oncetd_1_0(b_11, t);
      t = term_j_16;
    }
  else
    {
      t = e_37;
      if(match_cons(t, sym_prod_3))
        {
          ATerm j_37 = ATgetArgument(t, 0);
          ATerm k_37 = ATgetArgument(t, 1);
          s_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_76;
      t = oncetd_1_0(d_11, t);
      t = term_j_16;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm z_76 = NULL;
  z_76 = t;
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL;
        t = z_76;
        {
          ATerm n_37 = t;
          if((PushChoice() == 0))
            {
              ATerm o_37 = t;
              int p_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  LocalPopChoice(p_37);
                }
              else
                {
                  t = o_37;
                  {
                    ATerm q_37 = t;
                    int r_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        LocalPopChoice(r_37);
                      }
                    else
                      {
                        t = q_37;
                        {
                          ATerm s_37 = t;
                          int t_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(t_37);
                            }
                          else
                            {
                              t = s_37;
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
              t = n_37;
            }
        }
        t = z_76;
        t = mk_constr_0_0(t);
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_76, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, l_31))));
        t = add_attributes_0_0(t);
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        {
          ATerm b_77 = NULL;
          static ATerm f_11 (ATerm t);
          static ATerm f_11 (ATerm t)
          {
            ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,q_8 = NULL;
            e_77 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm u_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_77);
            c_77 = t;
            t = not_null(b_77);
            t = uq2q_0_0(t);
            d_77 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, d_77);
            q_8 = t;
            t = SSLsetAnnotations(q_8, c_77);
            return(t);
          }
          t = z_76;
          t = get_constr_0_0(t);
          if(((b_77 != NULL) && (b_77 != t)))
            _fail(t);
          else
            b_77 = t;
          t = z_76;
          t = oncetd_1_0(f_11, t);
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm p_10, ATerm q_10, ATerm o_10, ATerm n_10, ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm g_11 (ATerm t);
      static ATerm g_11 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((g_77 != NULL) && (g_77 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              g_77 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = o_10;
      t = oncetd_1_0(g_11, t);
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,t_8 = NULL,s_8 = NULL;
            t = q_10;
            if(match_cons(t, sym_sort_1))
              {
                p_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_10);
            o_77 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, p_77);
            s_8 = t;
            t = SSLsetAnnotations(s_8, o_77);
            t = (ATerm) ATmakeAppl(sym_prod_3, p_10, q_10, o_10);
            t = prodcons_0_0(t);
            n_77 = t;
            if(match_cons(t, sym_prod_3))
              {
                j_77 = ATgetArgument(t, 0);
                k_77 = ATgetArgument(t, 1);
                l_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_77);
            i_77 = t;
            t = l_77;
            {
              static ATerm h_11 (ATerm t);
              static ATerm h_11 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((g_77 != NULL) && (g_77 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      g_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(h_11, t);
            }
            m_77 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, j_77, k_77, m_77);
            t_8 = t;
            t = SSLsetAnnotations(t_8, i_77);
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
            t = term_z_37;
            g_77 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, p_10, q_10, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(g_77))))), (ATerm) ATinsert(ATempty, not_null(g_77)));
  t = get_pp_entry_0_0(t);
  h_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_77), h_77);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm a_38 = t;
  if((PushChoice() == 0))
    {
      ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,w_12 = NULL;
      x_77 = t;
      if(match_cons(t, sym_lit_1))
        {
          w_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_77);
      v_77 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, w_77);
      w_12 = t;
      t = SSLsetAnnotations(w_12, v_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_38;
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm b_38 = t;
  if((PushChoice() == 0))
    {
      ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL,y_12 = NULL;
      a_78 = t;
      if(match_cons(t, sym_lit_1))
        {
          z_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_78);
      y_77 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, z_77);
      y_12 = t;
      t = SSLsetAnnotations(y_12, y_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_38;
    }
  return(t);
}
static ATerm q_6 (ATerm w_9, ATerm u_9, ATerm v_9, ATerm x_9, ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
  static ATerm n_11 (ATerm t);
  static ATerm n_11 (ATerm t)
  {
    static ATerm o_11 (ATerm t);
    static ATerm o_11 (ATerm t)
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm p_11 (ATerm t);
          static ATerm p_11 (ATerm t)
          {
            t = not_null(s_77);
            return(t);
          }
          t = Instantiate_1_0(p_11, t);
          LocalPopChoice(d_38);
        }
      else
        {
          t = c_38;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(o_11, t);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, w_9, u_9, v_9), x_9);
  t = p_6(w_9, u_9, v_9, x_9, t);
  if(match_cons(t, sym__2))
    {
      q_77 = ATgetArgument(t, 0);
      r_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9;
  t = filter_1_0(k_11, t);
  t_77 = t;
  t = x_9;
  t = filter_1_0(l_11, t);
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym__4, t_77, u_77, (ATerm)ATinsert(ATempty, q_77), term_y_16);
  t = seq2abox_0_0(t);
  if(((s_77 != NULL) && (s_77 != t)))
    _fail(t);
  else
    s_77 = t;
  t = r_77;
  t = bottomup_1_0(n_11, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      n_78 = ATgetArgument(t, 0);
      o_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_78;
  t = int_to_string_0_0(t);
  p_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_78), term_f_38), p_78), term_e_38);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      d_78 = ATgetArgument(t, 0);
      t = d_78;
    }
  else
    {
      ATerm m_78 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          d_78 = ATgetArgument(t, 0);
          e_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_78;
      t = map_1_0(q_11, t);
      t = concat_0_0(t);
      m_78 = t;
      t = (ATerm) ATinsert(CheckATermList(m_78), d_78);
      t = concat_strings_0_0(t);
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm c_79 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      c_79 = ATgetArgument(t, 0);
      {
        ATerm g_38 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_79;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      s_78 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, s_78);
    }
  else
    {
      ATerm b_79 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          s_78 = ATgetArgument(t, 0);
          t_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_78;
      t = map_1_0(r_11, t);
      b_79 = t;
      t = (ATerm) ATinsert(CheckATermList(b_79), s_78);
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = debug_1_0(u_11, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_h_38;
  return(t);
}
static ATerm r_6 (ATerm c_18, ATerm d_18, ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  t = c_18;
  t = mk_key_0_0(t);
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_20, e_79, (ATerm) ATmakeAppl(sym__2, c_18, d_18));
  t = table_put_0_0(t);
  t = c_18;
  t = path_to_string_0_0(t);
  d_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_79, d_18);
  t = if_verbose1_1_0(t_11, t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL;
  v_80 = t;
  if(match_cons(t, sym_Arg_1))
    {
      w_80 = ATgetArgument(t, 0);
      {
        ATerm v_31 = NULL,z_31 = NULL,h_13 = NULL;
        t = SSLgetAnnotations(v_80);
        v_31 = t;
        t = w_80;
        t = string_to_int_0_0(t);
        z_31 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, z_31);
        h_13 = t;
        t = SSLsetAnnotations(h_13, v_31);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          w_80 = ATgetArgument(t, 0);
          x_80 = ATgetArgument(t, 1);
          {
            ATerm q_32 = NULL,y_32 = NULL,a_33 = NULL,n_13 = NULL;
            t = SSLgetAnnotations(v_80);
            q_32 = t;
            t = w_80;
            t = string_to_int_0_0(t);
            y_32 = t;
            t = x_80;
            t = string_to_int_0_0(t);
            a_33 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, y_32, a_33);
            n_13 = t;
            t = SSLsetAnnotations(n_13, q_32);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              w_80 = ATgetArgument(t, 0);
              x_80 = ATgetArgument(t, 1);
              {
                ATerm v_33 = NULL,t_13 = NULL;
                t = SSLgetAnnotations(v_80);
                v_33 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, w_80, x_80);
                t_13 = t;
                t = SSLsetAnnotations(t_13, v_33);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  w_80 = ATgetArgument(t, 0);
                  {
                    ATerm r_34 = NULL,x_34 = NULL,v_13 = NULL;
                    t = SSLgetAnnotations(v_80);
                    r_34 = t;
                    t = w_80;
                    t = un_double_quote_0_0(t);
                    t = unescape_0_0(t);
                    x_34 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, x_34);
                    v_13 = t;
                    t = SSLsetAnnotations(v_13, r_34);
                  }
                }
              else
                {
                  ATerm z_35 = NULL,h_36 = NULL,x_13 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      w_80 = ATgetArgument(t, 0);
                      x_80 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_80);
                  z_35 = t;
                  t = w_80;
                  t = string_to_int_0_0(t);
                  h_36 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, h_36, x_80);
                  x_13 = t;
                  t = SSLsetAnnotations(x_13, z_35);
                }
            }
        }
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL;
  t = topdown_1_0(w_11, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      d_81 = ATgetArgument(t, 0);
      e_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(d_81, e_81, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = try_1_0(MakePPTerm_0_0, t);
  return(t);
}
static ATerm s_6 (ATerm b_18, ATerm t)
{
  t = b_18;
  t = reverse_0_0(t);
  t = map_1_0(v_11, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(x_11, t);
      t = (ATerm) ATinsert(ATempty, term_l_38);
      t = fatal_error_0_0(t);
      LocalPopChoice(k_38);
    }
  else
    {
      t = j_38;
      t = (ATerm) ATinsert(ATempty, term_m_38);
      t = error_0_0(t);
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,b_37 = NULL,c_37 = NULL;
  t = if_verbose1_1_0(z_11, t);
  t = ReadFromFile_0_0(t);
  k_81 = t;
  t = SSL_explode_term(k_81);
  if(match_cons(t, sym__2))
    {
      c_37 = ATgetArgument(t, 0);
      {
        ATerm n_38 = ATgetArgument(t, 1);
        if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
          {
            b_37 = ATgetFirst((ATermList) n_38);
            {
              ATerm o_38 = (ATerm) ATgetNext((ATermList) n_38);
              if(((ATgetType(o_38) != AT_LIST) || !(ATisEmpty(o_38))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_37;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = b_37;
  if(match_cons(t, sym_PP_Table_1))
    {
      j_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(j_81, t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = debug_1_0(a_12, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm i_81 = NULL;
  i_81 = t;
  t = term_h_20;
  t = table_create_0_0(t);
  t = i_81;
  t = map_1_0(y_11, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm o_81 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      o_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_81;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = sometd_1_0(d_12, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm p_81 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      p_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_81;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = topdown_1_0(g_12, t);
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
        w_81 = t;
        if(match_cons(t, sym_appl_2))
          {
            x_81 = ATgetArgument(t, 0);
            b_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_81;
        if(match_cons(t, sym_prod_3))
          {
            y_81 = ATgetArgument(t, 0);
            z_81 = ATgetArgument(t, 1);
            a_82 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = w_81;
        t = q_6(y_81, z_81, a_82, b_82, t);
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        t = fatal_ambiguity_0_0(t);
      }
  }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = collect_p__1_0(j_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = try_1_0(h_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = is_list_0_0(t);
  t = filter_1_0(i_12, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm s_38 = t;
  if((PushChoice() == 0))
    {
      ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_14 = NULL;
      s_81 = t;
      if(match_cons(t, sym_opt_1))
        {
          r_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_81);
      q_81 = t;
      t = r_81;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, r_81);
      t_14 = t;
      t = SSLsetAnnotations(t_14, q_81);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_38;
    }
  {
    ATerm t_38 = t;
    if((PushChoice() == 0))
      {
        ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,a_15 = NULL;
        v_81 = t;
        if(match_cons(t, sym_layout_1))
          {
            u_81 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_81);
        t_81 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, u_81);
        a_15 = t;
        t = SSLsetAnnotations(a_15, t_81);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_38;
      }
  }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,d_15 = NULL;
  i_82 = t;
  if(match_cons(t, sym_layout_1))
    {
      h_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_82);
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, h_82);
  d_15 = t;
  t = SSLsetAnnotations(d_15, g_82);
  return(t);
}
static ATerm u_6 (ATerm g_15, ATerm f_15, ATerm t)
{
  static ATerm k_12 (ATerm t);
  static ATerm k_12 (ATerm t)
  {
    t = g_15;
    return(t);
  }
  t = g_15;
  t = collect_1_0(b_12, t);
  t = reverse_0_0(t);
  t = read_pp_tables_0_0(t);
  t = f_15;
  t = repeat_1_0(c_12, t);
  t = split_2_0(e_12, f_12, t);
  t = insert_layout_0_0(t);
  t = split_2_0(k_12, _id, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL;
  if(match_cons(t, sym__2))
    {
      k_82 = ATgetArgument(t, 0);
      l_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(k_82, l_82, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_12, o_12, u_12, t);
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(x_12, z_12, a_13, t);
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            t = ArgOption_3_0(b_13, d_13, e_13, t);
          }
      }
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm m_82 = NULL;
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, m_82);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_2_0(l_12, m_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

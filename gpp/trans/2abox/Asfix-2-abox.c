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
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Conservative_0;
Symbol sym_layout_place_holder_0;
Symbol sym_Injections_0;
Symbol sym_term_1;
Symbol sym_seq_1;
Symbol sym_bracket_symbol_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
ATerm term_s_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_z_35;
ATerm term_w_34;
ATerm term_r_34;
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
ATerm term_x_27;
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
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_o_17;
ATerm term_c_17;
ATerm term_o_16;
ATerm term_z_15;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_b_14;
ATerm term_q_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_SOpt_2, term_b_14, term_f_14);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
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
  term_u_25 = (ATerm) ATmakeAppl(sym_Arg_1, term_c_17);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
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
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
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
ATerm ArgOption_3_0 (ATerm o_3 (ATerm), ATerm p_3 (ATerm), ATerm q_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm n_3 (ATerm), ATerm t);
ATerm split_2_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm t);
static ATerm c_6 (ATerm o_21, ATerm t);
static ATerm c_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm w_36 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
ATerm crush_3_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm collect_p__1_0 (ATerm j_36 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm a_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm u_88 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_6 (ATerm m_10, ATerm l_10, ATerm t);
ATerm instantiate_list_1_0 (ATerm p_36 (ATerm), ATerm t);
static ATerm g_6 (ATerm b_13, ATerm c_13, ATerm z_12, ATerm a_13, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm r_36 (ATerm), ATerm t);
ATerm even_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_6 (ATerm d_35 (ATerm), ATerm e_35 (ATerm), ATerm f_35 (ATerm), ATerm g_35 (ATerm), ATerm h_14, ATerm i_14, ATerm t);
ATerm nzip_1_0 (ATerm w_95 (ATerm), ATerm t);
static ATerm i_6 (ATerm y_13, ATerm z_13, ATerm x_13, ATerm d_14, ATerm t);
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
static ATerm j_6 (ATerm o_18, ATerm n_18, ATerm t);
ATerm say_1_0 (ATerm c_88 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm k_100 (ATerm), ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm s_35 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_112 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_93 (ATerm), ATerm t);
static ATerm e_52 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
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
ATerm symbols2pp_entries_1_0 (ATerm i_35 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm s_93 (ATerm), ATerm t);
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
ATerm number_node_1_0 (ATerm m_35 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm symbol2abox_1_0 (ATerm j_35 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
static ATerm b_65 (ATerm r_63, ATerm s_63, ATerm t_63, ATerm t);
static ATerm c_65 (ATerm k_64, ATerm l_64, ATerm m_64, ATerm n_64, ATerm o_64, ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm x_89 (ATerm), ATerm t);
static ATerm q_9 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm string_Hd_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
ATerm quote_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm i_94 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
static ATerm c_69 (ATerm y_68, ATerm t);
static ATerm q_10 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm c_93 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm c_37 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm g_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t);
static ATerm u_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t);
static ATerm b_11 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm p_6 (ATerm y_10, ATerm z_10, ATerm x_10, ATerm w_10, ATerm t);
static ATerm k_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm q_6 (ATerm f_10, ATerm d_10, ATerm e_10, ATerm g_10, ATerm t);
ATerm filter_1_0 (ATerm y_101 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_108 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm t_88 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm h_90 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm o_91 (ATerm), ATerm t);
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
static ATerm r_6 (ATerm l_18, ATerm m_18, ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm s_6 (ATerm k_18, ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm n_113 (ATerm), ATerm t);
static ATerm x_11 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm o_88 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm f_109 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm collect_1_0 (ATerm n_99 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm u_6 (ATerm p_15, ATerm o_15, ATerm t);
ATerm iowrap_2_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm io_Asfix_2_abox_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm c_6 (ATerm o_21, ATerm t)
{
  ATerm n_9 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 = NULL;
      t = has_significant_layout_0_0(t);
      t = o_21;
      t = concat_strings_0_0(t);
      b_0 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, b_0)));
      LocalPopChoice(j_13);
    }
  else
    {
      t = n_9;
      {
        ATerm d_0 = NULL;
        t = o_21;
        t = concat_strings_0_0(t);
        d_0 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, d_0);
      }
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm l_13 = t;
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
      t = l_13;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm h_0 = NULL,m_0 = NULL;
  m_0 = t;
  {
    ATerm m_13 = t;
    if((PushChoice() == 0))
      {
        ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL,g_0 = NULL;
        r_0 = t;
        if(match_cons(t, sym_layout_1))
          {
            p_0 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_0);
        o_0 = t;
        t = p_0;
        if(!(match_cons(t, sym_layout_place_holder_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_layout_1, p_0);
        g_0 = t;
        t = SSLsetAnnotations(g_0, o_0);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_13;
      }
  }
  if(match_cons(t, sym_layout_1))
    {
      h_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_0;
  t = concat_strings_0_0(t);
  t = explode_string_0_0(t);
  t = filter_1_0(c_0, t);
  {
    ATerm n_13 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_13;
      }
  }
  t = m_0;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm p_13 = t;
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
      t = p_13;
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm InsLayout_1_0 (ATerm w_36 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm e_1 = NULL,g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(Nil_0_0, _id, t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
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
              t = w_36(t);
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
              t = w_36(t);
              if(match_cons(t, sym__2))
                {
                  e_1 = ATgetArgument(t, 0);
                  {
                    ATerm t_13 = ATgetArgument(t, 1);
                    if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
                      {
                        g_1 = ATgetFirst((ATermList) t_13);
                        l_1 = (ATerm) ATgetNext((ATermList) t_13);
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
                  ATerm v_13 = ATgetArgument(t, 0);
                  if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
                    {
                      i_1 = ATgetFirst((ATermList) v_13);
                      n_1 = (ATerm) ATgetNext((ATermList) v_13);
                    }
                  else
                    _fail(t);
                  m_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm w_13 = t;
                int a_14 = stack_ptr;
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
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_k_14), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_1))), z_0), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_1))))), m_1);
                    LocalPopChoice(a_14);
                  }
                else
                  {
                    t = w_13;
                    {
                      ATerm l_14 = t;
                      int n_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_1 = NULL,c_1 = NULL;
                          ATerm o_14 = t;
                          if((PushChoice() == 0))
                            {
                              t = has_option_1_0(f_0, t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = o_14;
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
                          LocalPopChoice(n_14);
                        }
                      else
                        {
                          t = l_14;
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
static ATerm j_0 (ATerm t)
{
  t = Cons_2_0(_id, _id, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = try_1_0(l_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm z_6 = NULL;
  t = is_list_0_0(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, z_6);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_14 = t;
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
          t = t_14;
        }
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
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
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,z_9 = NULL,s_1 = NULL;
              t = SSLgetAnnotations(y_7);
              z_9 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, z_7);
              s_1 = t;
              t = SSLsetAnnotations(s_1, z_9);
              t = has_option_1_0(q_0, t);
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  y_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_6(y_9, t);
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              {
                ATerm n_10 = NULL,o_10 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(y_7);
                o_10 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, z_7);
                t_1 = t;
                t = SSLsetAnnotations(t_1, o_10);
                {
                  ATerm w_14 = t;
                  if((PushChoice() == 0))
                    {
                      t = has_option_1_0(w_0, t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = w_14;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    n_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = c_6(n_10, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_3 != NULL) && (y_3 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_3 = ATgetFirst((ATermList) t);
        {
          ATerm x_14 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = Tl_0_0(t);
    return(t);
  }
  t = _2_0(_id, i_0, t);
  {
    static ATerm i_8 (ATerm t);
    static ATerm i_8 (ATerm t)
    {
      ATerm e_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
      ATerm y_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_5 = NULL,x_5 = NULL,z_5 = NULL,a_6 = NULL,d_6 = NULL;
          if(match_cons(t, sym__2))
            {
              x_5 = ATgetArgument(t, 0);
              d_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_5;
          if(match_cons(t, sym_H_2))
            {
              z_5 = ATgetArgument(t, 0);
              a_6 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
              t = InsLayout_1_0(i_8, t);
              if(match_cons(t, sym__2))
                {
                  h_4 = ATgetArgument(t, 0);
                  i_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, z_5, h_4), i_4);
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  z_5 = ATgetArgument(t, 0);
                  a_6 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
                  t = InsLayout_1_0(i_8, t);
                  if(match_cons(t, sym__2))
                    {
                      h_4 = ATgetArgument(t, 0);
                      i_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, z_5, h_4), i_4);
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      z_5 = ATgetArgument(t, 0);
                      a_6 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
                      t = InsLayout_1_0(i_8, t);
                      if(match_cons(t, sym__2))
                        {
                          h_4 = ATgetArgument(t, 0);
                          i_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, z_5, h_4), i_4);
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          z_5 = ATgetArgument(t, 0);
                          a_6 = ATgetArgument(t, 1);
                          v_5 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, v_5, d_6);
                          t = InsLayout_1_0(i_8, t);
                          if(match_cons(t, sym__2))
                            {
                              h_4 = ATgetArgument(t, 0);
                              i_4 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, z_5, a_6, h_4), i_4);
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              z_5 = ATgetArgument(t, 0);
                              a_6 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
                              t = InsLayout_1_0(i_8, t);
                              if(match_cons(t, sym__2))
                                {
                                  h_4 = ATgetArgument(t, 0);
                                  i_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, z_5, h_4), i_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  z_5 = ATgetArgument(t, 0);
                                  a_6 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym__2, z_5, d_6);
                                  t = InsLayout_1_0(i_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      e_4 = ATgetArgument(t, 0);
                                      {
                                        ATerm a_15 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
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
                                      z_5 = ATgetArgument(t, 0);
                                      a_6 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
                                      t = InsLayout_1_0(i_8, t);
                                      if(match_cons(t, sym__2))
                                        {
                                          h_4 = ATgetArgument(t, 0);
                                          i_4 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, z_5, h_4), i_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          z_5 = ATgetArgument(t, 0);
                                          a_6 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
                                          t = InsLayout_1_0(i_8, t);
                                          if(match_cons(t, sym__2))
                                            {
                                              h_4 = ATgetArgument(t, 0);
                                              i_4 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, z_5, h_4), i_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              z_5 = ATgetArgument(t, 0);
                                              a_6 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
                                              t = InsLayout_1_0(i_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  h_4 = ATgetArgument(t, 0);
                                                  i_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, z_5, h_4), i_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  z_5 = ATgetArgument(t, 0);
                                                  a_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
                                              t = InsLayout_1_0(i_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  h_4 = ATgetArgument(t, 0);
                                                  i_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, z_5, h_4), i_4);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          LocalPopChoice(z_14);
        }
      else
        {
          t = y_14;
          {
            ATerm b_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(j_0, _id, t);
                t = InsLayout_1_0(i_8, t);
                LocalPopChoice(d_15);
              }
            else
              {
                t = b_15;
              }
          }
        }
      return(t);
    }
    t = i_8(t);
  }
  t = _2_0(k_0, _id, t);
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      {
        ATerm e_15 = ATgetArgument(t, 1);
        if(((ATgetType(e_15) == AT_LIST) && !(ATisEmpty(e_15))))
          {
            a_4 = ATgetFirst((ATermList) e_15);
            {
              ATerm f_15 = (ATerm) ATgetNext((ATermList) e_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_4), z_3), not_null(y_3));
  t = filter_1_0(n_0, t);
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
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_k_14), c_8);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_k_14), c_8);
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm j_36 (ATerm), ATerm t)
{
  static ATerm x_8 (ATerm t);
  static ATerm x_8 (ATerm t)
  {
    ATerm g_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL;
        t = j_36(t);
        w_8 = t;
        t = (ATerm) ATinsert(ATempty, w_8);
        LocalPopChoice(v_15);
      }
    else
      {
        t = g_15;
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
  t = (ATerm) ATinsert(ATempty, term_z_15);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
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
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            {
              ATerm m_16 = t;
              int n_16 = stack_ptr;
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
                  LocalPopChoice(n_16);
                }
              else
                {
                  t = m_16;
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
  ATerm p_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      s_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
      {
        ATerm v_9 = NULL,k_10 = NULL;
        t = term_o_16;
        t = a_0(t);
        k_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, k_10);
        t = index_0_0(t);
        v_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_9, v_9);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm l_11 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          s_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_o_16;
      t = a_0(t);
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_9, l_11);
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
  ATerm j_14 = NULL,p_14 = NULL,q_14 = NULL;
  p_14 = t;
  if(match_cons(t, sym_Arg_1))
    {
      q_14 = ATgetArgument(t, 0);
      {
        ATerm v_10 = NULL,a_2 = NULL;
        t = SSLgetAnnotations(p_14);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, q_14);
        a_2 = t;
        t = SSLsetAnnotations(a_2, v_10);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          q_14 = ATgetArgument(t, 0);
          j_14 = ATgetArgument(t, 1);
          {
            ATerm h_11 = NULL,b_2 = NULL;
            t = SSLgetAnnotations(p_14);
            h_11 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, q_14, j_14);
            b_2 = t;
            t = SSLsetAnnotations(b_2, h_11);
          }
        }
      else
        {
          ATerm s_11 = NULL,q_2 = NULL;
          if(match_cons(t, sym_S_1))
            {
              q_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_14);
          s_11 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, q_14);
          q_2 = t;
          t = SSLsetAnnotations(q_2, s_11);
        }
    }
  return(t);
}
static ATerm e_6 (ATerm m_10, ATerm l_10, ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  t = _2_0(y_0, _id, t);
  {
    static ATerm f_20 (ATerm t);
    static ATerm f_20 (ATerm t)
    {
      ATerm c_15 = NULL,j_15 = NULL,m_15 = NULL,s_15 = NULL,v_16 = NULL;
      ATerm p_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(Nil_0_0, Nil_0_0, t);
          LocalPopChoice(q_16);
        }
      else
        {
          t = p_16;
          {
            static ATerm j_20 (ATerm i_19, ATerm l_19, ATerm m_19, ATerm t);
            static ATerm j_20 (ATerm i_19, ATerm l_19, ATerm m_19, ATerm t)
            {
              t = i_19;
              if(((v_16 != NULL) && (v_16 != t)))
                _fail(t);
              else
                v_16 = t;
              t = l_19;
              if(((c_15 != NULL) && (c_15 != t)))
                _fail(t);
              else
                c_15 = t;
              t = m_19;
              if(((m_15 != NULL) && (m_15 != t)))
                _fail(t);
              else
                m_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_19, m_19);
              t = f_20(t);
              if(match_cons(t, sym__2))
                {
                  if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_15 = ATgetArgument(t, 0);
                  if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    s_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_15), i_19), s_15);
              return(t);
            }
            ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,w_19 = NULL;
            p_19 = t;
            if(match_cons(t, sym__2))
              {
                q_19 = ATgetArgument(t, 0);
                t_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_19;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_19 = ATgetFirst((ATermList) t);
                s_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_19;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_19 = ATgetFirst((ATermList) t);
                w_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_19;
            if(match_cons(t, sym_Arg_1))
              {
                n_19 = ATgetArgument(t, 0);
                {
                  ATerm r_16 = t;
                  int s_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_19;
                      if(((c_15 != NULL) && (c_15 != t)))
                        _fail(t);
                      else
                        c_15 = t;
                      t = w_19;
                      if(((m_15 != NULL) && (m_15 != t)))
                        _fail(t);
                      else
                        m_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_19, w_19);
                      t = f_20(t);
                      if(match_cons(t, sym__2))
                        {
                          if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            j_15 = ATgetArgument(t, 0);
                          if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            s_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_15), (ATerm) ATmakeAppl(sym_Arg_1, n_19)), (ATerm) ATinsert(CheckATermList(s_15), u_19));
                      LocalPopChoice(s_16);
                    }
                  else
                    {
                      t = r_16;
                      t = j_20(r_19, s_19, w_19, t);
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
                      ATerm t_16 = t;
                      int u_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_19;
                          if(((c_12 != NULL) && (c_12 != t)))
                            _fail(t);
                          else
                            c_12 = t;
                          t = s_19;
                          if(((c_15 != NULL) && (c_15 != t)))
                            _fail(t);
                          else
                            c_15 = t;
                          t = w_19;
                          if(((m_15 != NULL) && (m_15 != t)))
                            _fail(t);
                          else
                            m_15 = t;
                          t = (ATerm) ATmakeAppl(sym__2, s_19, w_19);
                          t = f_20(t);
                          if(match_cons(t, sym__2))
                            {
                              if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                j_15 = ATgetArgument(t, 0);
                              if(((s_15 != NULL) && (s_15 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                s_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_15), (ATerm) ATmakeAppl(sym_Arg2_2, n_19, o_19)), (ATerm) ATinsert(CheckATermList(s_15), u_19));
                          LocalPopChoice(u_16);
                        }
                      else
                        {
                          t = t_16;
                          t = j_20(r_19, s_19, w_19, t);
                        }
                    }
                  }
                else
                  {
                    t = j_20(r_19, s_19, w_19, t);
                  }
              }
          }
        }
      return(t);
    }
    t = f_20(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_10, d_12);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm p_36 (ATerm), ATerm t)
{
  static ATerm v_21 (ATerm t);
  static ATerm v_21 (ATerm t)
  {
    ATerm x_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = x_16;
        {
          ATerm p_21 = NULL,q_21 = NULL,t_21 = NULL;
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
                ATerm a_17 = t;
                int b_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm o_1 (ATerm t);
                    static ATerm o_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(q_21));
                      return(t);
                    }
                    t = Instantiate_1_0(o_1, t);
                    LocalPopChoice(b_17);
                  }
                else
                  {
                    t = a_17;
                    t = flat_list_0_0(t);
                  }
                return(t);
              }
              t = try_1_0(k_1, t);
              return(t);
            }
            t = term_o_16;
            t = p_36(t);
            t = bottomup_1_0(j_1, t);
            return(t);
          }
          static ATerm h_1 (ATerm t)
          {
            t = not_null(t_21);
            t = v_21(t);
            return(t);
          }
          p_21 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((q_21 != NULL) && (q_21 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                q_21 = ATgetFirst((ATermList) t);
              if(((t_21 != NULL) && (t_21 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                t_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = p_21;
          t = Cons_2_0(f_1, h_1, t);
        }
      }
    return(t);
  }
  t = v_21(t);
  return(t);
}
static ATerm g_6 (ATerm b_13, ATerm c_13, ATerm z_12, ATerm a_13, ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,m_22 = NULL;
  static ATerm u_1 (ATerm t);
  static ATerm u_1 (ATerm t)
  {
    t = not_null(c_22);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, z_12, (ATerm) ATinsert(ATempty, a_13));
  t = conc_0_0(t);
  d_22 = t;
  t = b_13;
  if(match_cons(t, sym_iter_1))
    {
      m_22 = ATgetArgument(t, 0);
      {
        ATerm k_13 = NULL,m_4 = NULL;
        t = SSLgetAnnotations(b_13);
        k_13 = t;
        t = m_22;
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, m_22);
        m_4 = t;
        t = SSLsetAnnotations(m_4, k_13);
      }
    }
  else
    {
      ATerm o_13 = NULL,n_4 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          m_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_13);
      o_13 = t;
      t = m_22;
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, m_22);
      n_4 = t;
      t = SSLsetAnnotations(n_4, o_13);
    }
  t = (ATerm) ATmakeAppl(sym__2, b_13, d_22);
  t = get_pp_entry_0_0(t);
  if(((c_22 != NULL) && (c_22 != t)))
    _fail(t);
  else
    c_22 = t;
  t = c_13;
  {
    static ATerm q_1 (ATerm t);
    static ATerm q_1 (ATerm t)
    {
      ATerm o_22 = NULL;
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym__4, b_22, o_22, d_22, term_c_17);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(q_1, t);
  }
  t = instantiate_list_1_0(u_1, t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm r_36 (ATerm), ATerm t)
{
  static ATerm i_25 (ATerm t);
  static ATerm i_25 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        {
          ATerm f_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, Nil_0_0, t);
              LocalPopChoice(g_17);
            }
          else
            {
              t = f_17;
              {
                ATerm b_24 = NULL,b_25 = NULL,c_25 = NULL,e_25 = NULL,f_25 = NULL;
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
                      ATerm h_17 = t;
                      int j_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          static ATerm c_2 (ATerm t);
                          static ATerm c_2 (ATerm t)
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(b_25));
                            return(t);
                          }
                          t = Instantiate_1_0(c_2, t);
                          LocalPopChoice(j_17);
                        }
                      else
                        {
                          t = h_17;
                          t = flat_list_0_0(t);
                        }
                      return(t);
                    }
                    t = try_1_0(z_1, t);
                    return(t);
                  }
                  t = term_o_16;
                  t = r_36(t);
                  t = bottomup_1_0(y_1, t);
                  return(t);
                }
                static ATerm w_1 (ATerm t)
                {
                  t = not_null(f_25);
                  t = i_25(t);
                  return(t);
                }
                b_24 = t;
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
                t = b_24;
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
    ATerm k_17 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_17;
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
    ATerm l_17 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_17;
      }
  }
  t = (ATerm) ATinsert(ATempty, r_25);
  return(t);
}
static ATerm h_6 (ATerm d_35 (ATerm), ATerm e_35 (ATerm), ATerm f_35 (ATerm), ATerm g_35 (ATerm), ATerm h_14, ATerm i_14, ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL,l_25 = NULL;
      t = h_14;
      t = even_0_0(t);
      t = term_o_16;
      t = e_35(t);
      k_25 = t;
      t = term_o_16;
      t = f_35(t);
      l_25 = t;
      t = (ATerm) ATmakeAppl(sym__4, k_25, i_14, l_25, term_o_17);
      t = symbol2abox_0_0(t);
      t = try_1_0(d_2, t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm o_25 = NULL,q_25 = NULL;
        t = term_o_16;
        t = d_35(t);
        o_25 = t;
        t = term_o_16;
        t = f_35(t);
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym__4, o_25, i_14, q_25, term_c_17);
        t = symbol2abox_0_0(t);
        t = try_1_0(f_2, t);
      }
    }
  return(t);
}
static ATerm i_6 (ATerm y_13, ATerm z_13, ATerm x_13, ATerm d_14, ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,j_27 = NULL,q_27 = NULL;
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    t = not_null(a_26);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, x_13, (ATerm) ATinsert(ATempty, d_14));
  t = conc_0_0(t);
  b_26 = t;
  t = y_13;
  if(match_cons(t, sym_iter_sep_2))
    {
      j_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
      {
        ATerm u_13 = NULL,s_4 = NULL;
        t = SSLgetAnnotations(y_13);
        u_13 = t;
        t = j_27;
        y_25 = t;
        t = q_27;
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, j_27, q_27);
        s_4 = t;
        t = SSLsetAnnotations(s_4, u_13);
      }
    }
  else
    {
      ATerm m_14 = NULL,u_4 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          j_27 = ATgetArgument(t, 0);
          q_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_13);
      m_14 = t;
      t = j_27;
      y_25 = t;
      t = q_27;
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, j_27, q_27);
      u_4 = t;
      t = SSLsetAnnotations(u_4, m_14);
    }
  t = (ATerm) ATmakeAppl(sym__2, y_13, b_26);
  t = get_pp_entry_0_0(t);
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = z_13;
  {
    static ATerm g_2 (ATerm t);
    static ATerm g_2 (ATerm t)
    {
      ATerm s_27 = NULL,y_27 = NULL;
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
        t = d_14;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          s_27 = ATgetArgument(t, 0);
          y_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_6(i_2, j_2, r_2, s_2, s_27, y_27, t);
      return(t);
    }
    t = nzip_1_0(g_2, t);
  }
  t = instantiate_sep_list_1_0(t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm p_17 = t;
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
      t = p_17;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_17 = t;
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
      t = r_17;
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
        ATerm p_41 = NULL,q_41 = NULL,s_41 = NULL,x_41 = NULL,y_41 = NULL;
        static ATerm w_2 (ATerm t);
        static ATerm w_2 (ATerm t)
        {
          static ATerm x_2 (ATerm t);
          static ATerm x_2 (ATerm t)
          {
            ATerm s_17 = t;
            int t_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm y_2 (ATerm t);
                static ATerm y_2 (ATerm t)
                {
                  t = not_null(q_41);
                  return(t);
                }
                t = Instantiate_1_0(y_2, t);
                LocalPopChoice(t_17);
              }
            else
              {
                t = s_17;
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
            ATerm u_17 = ATgetArgument(t, 0);
            x_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, i_41));
        t = conc_0_0(t);
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, c_41), y_41);
        t = get_pp_entry_0_0(t);
        p_41 = t;
        t = c_41;
        t = filter_1_0(u_2, t);
        s_41 = t;
        t = x_40;
        t = filter_1_0(v_2, t);
        x_41 = t;
        t = (ATerm) ATmakeAppl(sym__4, s_41, x_41, y_41, term_c_17);
        t = seq2abox_0_0(t);
        if(((q_41 != NULL) && (q_41 != t)))
          _fail(t);
        else
          q_41 = t;
        t = p_41;
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
            ATerm h_15 = NULL,i_15 = NULL,k_15 = NULL;
            static ATerm h_21 (ATerm t);
            static ATerm h_21 (ATerm t)
            {
              ATerm l_15 = NULL,n_15 = NULL,q_15 = NULL,r_15 = NULL,t_15 = NULL,u_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
              if(match_cons(t, sym__4))
                {
                  a_16 = ATgetArgument(t, 0);
                  b_16 = ATgetArgument(t, 1);
                  g_16 = ATgetArgument(t, 2);
                  h_16 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = b_16;
              if(match_cons(t, sym_appl_2))
                {
                  c_16 = ATgetArgument(t, 0);
                  d_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_16;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_16 = ATgetFirst((ATermList) t);
                  f_16 = (ATerm) ATgetNext((ATermList) t);
                  t = f_16;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = c_16;
                      if(match_cons(t, sym_prod_3))
                        {
                          q_15 = ATgetArgument(t, 0);
                          u_15 = ATgetArgument(t, 1);
                          y_15 = ATgetArgument(t, 2);
                          t = u_15;
                          if(match_cons(t, sym_alt_2))
                            {
                              w_15 = ATgetArgument(t, 0);
                              x_15 = ATgetArgument(t, 1);
                              t = q_15;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  r_15 = ATgetFirst((ATermList) t);
                                  t_15 = (ATerm) ATgetNext((ATermList) t);
                                  t = t_15;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = a_16;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          l_15 = ATgetArgument(t, 0);
                                          n_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm v_17 = t;
                                            int w_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = r_15;
                                                if((l_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = w_15;
                                                if((l_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = x_15;
                                                if((n_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, l_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_15), l_15, y_15), d_16), g_16, h_16);
                                                t = h_21(t);
                                                LocalPopChoice(w_17);
                                              }
                                            else
                                              {
                                                t = v_17;
                                                {
                                                  ATerm x_17 = t;
                                                  int y_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_16 = NULL;
                                                      t = w_15;
                                                      if((l_15 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = x_15;
                                                      if((n_15 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym__2, h_16, term_c_17);
                                                      t = add_0_0(t);
                                                      y_16 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, n_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, r_15), n_15, y_15), d_16), g_16, y_16);
                                                      t = h_21(t);
                                                      LocalPopChoice(y_17);
                                                    }
                                                  else
                                                    {
                                                      t = x_17;
                                                      {
                                                        ATerm i_17 = NULL;
                                                        static ATerm z_2 (ATerm t);
                                                        static ATerm z_2 (ATerm t)
                                                        {
                                                          static ATerm a_3 (ATerm t);
                                                          static ATerm a_3 (ATerm t)
                                                          {
                                                            ATerm a_18 = t;
                                                            int b_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                static ATerm b_3 (ATerm t);
                                                                static ATerm b_3 (ATerm t)
                                                                {
                                                                  t = (ATerm) ATinsert(ATempty, not_null(i_15));
                                                                  return(t);
                                                                }
                                                                t = Instantiate_1_0(b_3, t);
                                                                LocalPopChoice(b_18);
                                                              }
                                                            else
                                                              {
                                                                t = a_18;
                                                                t = flat_list_0_0(t);
                                                              }
                                                            return(t);
                                                          }
                                                          t = try_1_0(a_3, t);
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), g_16);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((h_15 != NULL) && (h_15 != t)))
                                                          _fail(t);
                                                        else
                                                          h_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, a_16, e_16, g_16, term_c_17);
                                                        t = symbol2abox_0_0(t);
                                                        if(((i_15 != NULL) && (i_15 != t)))
                                                          _fail(t);
                                                        else
                                                          i_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, h_16, h_15);
                                                        t = index_0_0(t);
                                                        i_17 = t;
                                                        t = (ATerm) ATinsert(ATempty, i_17);
                                                        t = bottomup_1_0(z_2, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm q_17 = NULL;
                                          static ATerm c_3 (ATerm t);
                                          static ATerm c_3 (ATerm t)
                                          {
                                            static ATerm d_3 (ATerm t);
                                            static ATerm d_3 (ATerm t)
                                            {
                                              ATerm c_18 = t;
                                              int d_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  static ATerm e_3 (ATerm t);
                                                  static ATerm e_3 (ATerm t)
                                                  {
                                                    t = (ATerm) ATinsert(ATempty, not_null(i_15));
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(e_3, t);
                                                  LocalPopChoice(d_18);
                                                }
                                              else
                                                {
                                                  t = c_18;
                                                  t = flat_list_0_0(t);
                                                }
                                              return(t);
                                            }
                                            t = try_1_0(d_3, t);
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), g_16);
                                          t = get_pp_entry_0_0(t);
                                          if(((h_15 != NULL) && (h_15 != t)))
                                            _fail(t);
                                          else
                                            h_15 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, a_16, e_16, g_16, term_c_17);
                                          t = symbol2abox_0_0(t);
                                          if(((i_15 != NULL) && (i_15 != t)))
                                            _fail(t);
                                          else
                                            i_15 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, h_16, h_15);
                                          t = index_0_0(t);
                                          q_17 = t;
                                          t = (ATerm) ATinsert(ATempty, q_17);
                                          t = bottomup_1_0(c_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm z_17 = NULL;
                                      static ATerm f_3 (ATerm t);
                                      static ATerm f_3 (ATerm t)
                                      {
                                        static ATerm g_3 (ATerm t);
                                        static ATerm g_3 (ATerm t)
                                        {
                                          ATerm e_18 = t;
                                          int f_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm h_3 (ATerm t);
                                              static ATerm h_3 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, not_null(i_15));
                                                return(t);
                                              }
                                              t = Instantiate_1_0(h_3, t);
                                              LocalPopChoice(f_18);
                                            }
                                          else
                                            {
                                              t = e_18;
                                              t = flat_list_0_0(t);
                                            }
                                          return(t);
                                        }
                                        t = try_1_0(g_3, t);
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), g_16);
                                      t = get_pp_entry_0_0(t);
                                      if(((h_15 != NULL) && (h_15 != t)))
                                        _fail(t);
                                      else
                                        h_15 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, a_16, e_16, g_16, term_c_17);
                                      t = symbol2abox_0_0(t);
                                      if(((i_15 != NULL) && (i_15 != t)))
                                        _fail(t);
                                      else
                                        i_15 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, h_16, h_15);
                                      t = index_0_0(t);
                                      z_17 = t;
                                      t = (ATerm) ATinsert(ATempty, z_17);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm i_18 = NULL;
                                  static ATerm i_3 (ATerm t);
                                  static ATerm i_3 (ATerm t)
                                  {
                                    static ATerm j_3 (ATerm t);
                                    static ATerm j_3 (ATerm t)
                                    {
                                      ATerm g_18 = t;
                                      int h_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          static ATerm k_3 (ATerm t);
                                          static ATerm k_3 (ATerm t)
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(i_15));
                                            return(t);
                                          }
                                          t = Instantiate_1_0(k_3, t);
                                          LocalPopChoice(h_18);
                                        }
                                      else
                                        {
                                          t = g_18;
                                          t = flat_list_0_0(t);
                                        }
                                      return(t);
                                    }
                                    t = try_1_0(j_3, t);
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), g_16);
                                  t = get_pp_entry_0_0(t);
                                  if(((h_15 != NULL) && (h_15 != t)))
                                    _fail(t);
                                  else
                                    h_15 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, a_16, e_16, g_16, term_c_17);
                                  t = symbol2abox_0_0(t);
                                  if(((i_15 != NULL) && (i_15 != t)))
                                    _fail(t);
                                  else
                                    i_15 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, h_16, h_15);
                                  t = index_0_0(t);
                                  i_18 = t;
                                  t = (ATerm) ATinsert(ATempty, i_18);
                                  t = bottomup_1_0(i_3, t);
                                }
                            }
                          else
                            {
                              ATerm y_18 = NULL;
                              static ATerm r_3 (ATerm t);
                              static ATerm r_3 (ATerm t)
                              {
                                static ATerm s_3 (ATerm t);
                                static ATerm s_3 (ATerm t)
                                {
                                  ATerm j_18 = t;
                                  int p_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      static ATerm t_3 (ATerm t);
                                      static ATerm t_3 (ATerm t)
                                      {
                                        t = (ATerm) ATinsert(ATempty, not_null(i_15));
                                        return(t);
                                      }
                                      t = Instantiate_1_0(t_3, t);
                                      LocalPopChoice(p_18);
                                    }
                                  else
                                    {
                                      t = j_18;
                                      t = flat_list_0_0(t);
                                    }
                                  return(t);
                                }
                                t = try_1_0(s_3, t);
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), g_16);
                              t = get_pp_entry_0_0(t);
                              if(((h_15 != NULL) && (h_15 != t)))
                                _fail(t);
                              else
                                h_15 = t;
                              t = (ATerm) ATmakeAppl(sym__4, a_16, e_16, g_16, term_c_17);
                              t = symbol2abox_0_0(t);
                              if(((i_15 != NULL) && (i_15 != t)))
                                _fail(t);
                              else
                                i_15 = t;
                              t = (ATerm) ATmakeAppl(sym__2, h_16, h_15);
                              t = index_0_0(t);
                              y_18 = t;
                              t = (ATerm) ATinsert(ATempty, y_18);
                              t = bottomup_1_0(r_3, t);
                            }
                        }
                      else
                        {
                          ATerm j_19 = NULL;
                          static ATerm u_3 (ATerm t);
                          static ATerm u_3 (ATerm t)
                          {
                            static ATerm v_3 (ATerm t);
                            static ATerm v_3 (ATerm t)
                            {
                              ATerm q_18 = t;
                              int r_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  static ATerm w_3 (ATerm t);
                                  static ATerm w_3 (ATerm t)
                                  {
                                    t = (ATerm) ATinsert(ATempty, not_null(i_15));
                                    return(t);
                                  }
                                  t = Instantiate_1_0(w_3, t);
                                  LocalPopChoice(r_18);
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
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), g_16);
                          t = get_pp_entry_0_0(t);
                          if(((h_15 != NULL) && (h_15 != t)))
                            _fail(t);
                          else
                            h_15 = t;
                          t = (ATerm) ATmakeAppl(sym__4, a_16, e_16, g_16, term_c_17);
                          t = symbol2abox_0_0(t);
                          if(((i_15 != NULL) && (i_15 != t)))
                            _fail(t);
                          else
                            i_15 = t;
                          t = (ATerm) ATmakeAppl(sym__2, h_16, h_15);
                          t = index_0_0(t);
                          j_19 = t;
                          t = (ATerm) ATinsert(ATempty, j_19);
                          t = bottomup_1_0(u_3, t);
                        }
                    }
                  else
                    {
                      t = c_16;
                      if(match_cons(t, sym_prod_3))
                        {
                          q_15 = ATgetArgument(t, 0);
                          u_15 = ATgetArgument(t, 1);
                          y_15 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = a_16;
                      if(match_cons(t, sym_alt_2))
                        {
                          l_15 = ATgetArgument(t, 0);
                          n_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_15;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          r_15 = ATgetFirst((ATermList) t);
                          t_15 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = t_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = u_15;
                      if(match_cons(t, sym_alt_2))
                        {
                          w_15 = ATgetArgument(t, 0);
                          x_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm s_18 = t;
                        int t_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = r_15;
                            if((l_15 != t))
                              {
                                _fail(t);
                              }
                            t = w_15;
                            if((l_15 != t))
                              {
                                _fail(t);
                              }
                            t = x_15;
                            if((n_15 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, l_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_15), l_15, y_15), d_16), g_16, h_16);
                            t = h_21(t);
                            LocalPopChoice(t_18);
                          }
                        else
                          {
                            t = s_18;
                            {
                              ATerm r_20 = NULL;
                              t = w_15;
                              if((l_15 != t))
                                {
                                  _fail(t);
                                }
                              t = x_15;
                              if((n_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym__2, h_16, term_c_17);
                              t = add_0_0(t);
                              r_20 = t;
                              t = (ATerm) ATmakeAppl(sym__4, n_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, r_15), n_15, y_15), d_16), g_16, r_20);
                              t = h_21(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = c_16;
                  if(match_cons(t, sym_prod_3))
                    {
                      q_15 = ATgetArgument(t, 0);
                      u_15 = ATgetArgument(t, 1);
                      y_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = a_16;
                  if(match_cons(t, sym_alt_2))
                    {
                      l_15 = ATgetArgument(t, 0);
                      n_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_15;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_15 = ATgetFirst((ATermList) t);
                      t_15 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = t_15;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_15;
                  if(match_cons(t, sym_alt_2))
                    {
                      w_15 = ATgetArgument(t, 0);
                      x_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm u_18 = t;
                    int v_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_15;
                        if((l_15 != t))
                          {
                            _fail(t);
                          }
                        t = w_15;
                        if((l_15 != t))
                          {
                            _fail(t);
                          }
                        t = x_15;
                        if((n_15 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, l_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_15), l_15, y_15), d_16), g_16, h_16);
                        t = h_21(t);
                        LocalPopChoice(v_18);
                      }
                    else
                      {
                        t = u_18;
                        {
                          ATerm g_21 = NULL;
                          t = w_15;
                          if((l_15 != t))
                            {
                              _fail(t);
                            }
                          t = x_15;
                          if((n_15 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym__2, h_16, term_c_17);
                          t = add_0_0(t);
                          g_21 = t;
                          t = (ATerm) ATmakeAppl(sym__4, n_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, r_15), n_15, y_15), d_16), g_16, g_21);
                          t = h_21(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, i_41));
            t = conc_0_0(t);
            k_15 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), d_41, k_15, term_c_17);
            t = h_21(t);
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
                                  ATerm w_18 = ATgetArgument(t, 0);
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
                                    ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
                                    static ATerm x_3 (ATerm t);
                                    static ATerm x_3 (ATerm t)
                                    {
                                      static ATerm b_4 (ATerm t);
                                      static ATerm b_4 (ATerm t)
                                      {
                                        ATerm x_18 = t;
                                        int z_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm c_4 (ATerm t);
                                            static ATerm c_4 (ATerm t)
                                            {
                                              t = not_null(v_22);
                                              return(t);
                                            }
                                            t = Instantiate_1_0(c_4, t);
                                            LocalPopChoice(z_18);
                                          }
                                        else
                                          {
                                            t = x_18;
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
                                    x_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, c_41), x_22);
                                    t = get_pp_entry_0_0(t);
                                    s_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, c_41, p_40, x_22, term_c_17);
                                    t = symbol2abox_0_0(t);
                                    t_22 = t;
                                    t = (ATerm) ATinsert(ATempty, t_22);
                                    w_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, s_22, (ATerm) ATinsert(ATempty, t_22));
                                    t = e_6(s_22, w_22, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        u_22 = ATgetArgument(t, 0);
                                        if(((v_22 != NULL) && (v_22 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          v_22 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = u_22;
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
                              int b_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm c_19 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(b_19);
                                  {
                                    ATerm d_19 = t;
                                    int e_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = d_41;
                                        {
                                          ATerm f_19 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = is_string_0_0(t);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = f_19;
                                            }
                                        }
                                        t = d_41;
                                        {
                                          ATerm g_19 = t;
                                          int h_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  h_23 = ATgetArgument(t, 0);
                                                  l_23 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = h_23;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  i_23 = ATgetArgument(t, 0);
                                                  j_23 = ATgetArgument(t, 1);
                                                  k_23 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = d_41;
                                              t = q_6(i_23, j_23, k_23, l_23, t);
                                              LocalPopChoice(h_19);
                                            }
                                          else
                                            {
                                              t = g_19;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(e_19);
                                      }
                                    else
                                      {
                                        t = d_19;
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
                                    ATerm k_19 = t;
                                    int v_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm x_19 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(v_19);
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
                                        t = k_19;
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
  ATerm c_45 = NULL,d_45 = NULL,g_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,o_45 = NULL;
  if(match_cons(t, sym__4))
    {
      c_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
      l_45 = ATgetArgument(t, 2);
      o_45 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = c_45;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_45;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_45 = ATgetFirst((ATermList) t);
          g_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_45 = ATgetFirst((ATermList) t);
          k_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_45;
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm a_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(z_19);
            t = d_45;
            {
              ATerm b_20 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm d_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_20);
                  {
                    ATerm e_20 = t;
                    int g_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, g_45, k_45, l_45, o_45);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(g_20);
                      }
                    else
                      {
                        t = e_20;
                        {
                          ATerm l_46 = NULL,m_46 = NULL,o_46 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, d_45, j_45, l_45, o_45);
                          t = symbol2abox_0_0(t);
                          l_46 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_45, term_c_17);
                          t = add_0_0(t);
                          o_46 = t;
                          t = (ATerm) ATmakeAppl(sym__4, g_45, k_45, l_45, o_46);
                          t = seq2abox_0_0(t);
                          m_46 = t;
                          t = (ATerm) ATinsert(CheckATermList(m_46), l_46);
                        }
                      }
                  }
                }
              else
                {
                  t = b_20;
                  {
                    ATerm u_46 = NULL,v_46 = NULL,x_46 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, d_45, j_45, l_45, o_45);
                    t = symbol2abox_0_0(t);
                    u_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_45, term_c_17);
                    t = add_0_0(t);
                    x_46 = t;
                    t = (ATerm) ATmakeAppl(sym__4, g_45, k_45, l_45, x_46);
                    t = seq2abox_0_0(t);
                    v_46 = t;
                    t = (ATerm) ATinsert(CheckATermList(v_46), u_46);
                  }
                }
            }
          }
        else
          {
            t = y_19;
            {
              ATerm d_47 = NULL,e_47 = NULL,g_47 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, d_45, j_45, l_45, o_45);
              t = symbol2abox_0_0(t);
              d_47 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_45, term_c_17);
              t = add_0_0(t);
              g_47 = t;
              t = (ATerm) ATmakeAppl(sym__4, g_45, k_45, l_45, g_47);
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
  t = term_h_20;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, i_47);
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
static ATerm j_6 (ATerm o_18, ATerm n_18, ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      n_47 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_47 = NULL;
            t = o_18;
            t = mk_key_0_0(t);
            q_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_i_20, q_47);
            t = table_get_0_0(t);
            t = m_47;
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            t = m_47;
            t = r_6(n_47, o_47, t);
          }
      }
    }
  else
    {
      ATerm u_47 = NULL;
      t = o_18;
      t = mk_key_0_0(t);
      u_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_20, u_47);
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
  t = term_m_20;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm s_35 (ATerm), ATerm t)
{
  static ATerm k_4 (ATerm t);
  static ATerm k_4 (ATerm t)
  {
    ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
    t = term_o_16;
    t = pass_verbose_0_0(t);
    g_48 = t;
    t = term_o_16;
    t = s_35(t);
    t = map_1_0(xtc_find_0_0, t);
    i_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_20, i_48);
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
  t = term_o_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_20);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_s_20;
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
  t = term_t_20;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_u_20;
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
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
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
static ATerm l_5 (ATerm t)
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
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
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
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm y_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(x_20);
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
                      ATerm z_20 = t;
                      int a_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm b_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_21);
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
                                  int f_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_49;
                                      t = fetch_1_0(b_5, t);
                                      t = r_49;
                                      LocalPopChoice(f_21);
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
                          t = z_20;
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
                                      t = fetch_1_0(l_5, t);
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
                      ATerm m_21 = t;
                      int n_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(n_5, t);
                          t = r_49;
                          LocalPopChoice(n_21);
                        }
                      else
                        {
                          t = m_21;
                          {
                            ATerm r_21 = t;
                            int s_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(o_5, t);
                                t = r_49;
                                LocalPopChoice(s_21);
                              }
                            else
                              {
                                t = r_21;
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
                ATerm u_21 = t;
                int w_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(q_5, t);
                    t = r_49;
                    LocalPopChoice(w_21);
                  }
                else
                  {
                    t = u_21;
                    {
                      ATerm x_21 = t;
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
                          t = x_21;
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
            t = w_20;
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
                            ATerm e_22 = t;
                            int f_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(w_5, t);
                                t = r_49;
                                LocalPopChoice(f_22);
                              }
                            else
                              {
                                t = e_22;
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
                                      t = fetch_1_0(y_5, t);
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
                          t = fetch_1_0(b_6, t);
                          t = r_49;
                          LocalPopChoice(j_22);
                        }
                      else
                        {
                          t = i_22;
                          {
                            ATerm k_22 = t;
                            int l_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(f_6, t);
                                t = r_49;
                                LocalPopChoice(l_22);
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
                  ATerm n_22 = t;
                  int p_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_49;
                      t = fetch_1_0(l_6, t);
                      t = r_49;
                      LocalPopChoice(p_22);
                    }
                  else
                    {
                      t = n_22;
                      {
                        ATerm q_22 = t;
                        int r_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_49;
                            t = fetch_1_0(m_6, t);
                            t = r_49;
                            LocalPopChoice(r_22);
                          }
                        else
                          {
                            t = q_22;
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
                ATerm y_22 = t;
                int z_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(o_6, t);
                    t = r_49;
                    LocalPopChoice(z_22);
                  }
                else
                  {
                    t = y_22;
                    {
                      ATerm a_23 = t;
                      int b_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(t_6, t);
                          t = r_49;
                          LocalPopChoice(b_23);
                        }
                      else
                        {
                          t = a_23;
                          {
                            ATerm c_23 = t;
                            int d_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_52(s_49, q_49, v_49, r_49, t);
                                LocalPopChoice(d_23);
                              }
                            else
                              {
                                t = c_23;
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
                ATerm e_23 = t;
                int f_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(w_6, t);
                    t = r_49;
                    LocalPopChoice(f_23);
                  }
                else
                  {
                    t = e_23;
                    {
                      ATerm g_23 = t;
                      int m_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(x_6, t);
                          t = r_49;
                          LocalPopChoice(m_23);
                        }
                      else
                        {
                          t = g_23;
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
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_49;
                t = fetch_1_0(a_7, t);
                t = r_49;
                LocalPopChoice(o_23);
              }
            else
              {
                t = n_23;
                {
                  ATerm p_23 = t;
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
                      t = p_23;
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
ATerm symbols2pp_entries_1_0 (ATerm i_35 (ATerm), ATerm t)
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
        t = term_o_16;
        t = i_35(t);
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
  t = term_o_16;
  t = i_35(t);
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
      ATerm c_24 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          p_53 = ATgetArgument(t, 0);
          {
            ATerm x_23 = ATgetArgument(t, 1);
          }
          r_53 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_53;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_24 = NULL;
            t = r_53;
            if(match_cons(t, sym_attrs_1))
              {
                d_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_24;
            t = get_cnstr_name_0_0(t);
            c_24 = t;
            LocalPopChoice(z_23);
            {
              static ATerm k_7 (ATerm t);
              static ATerm k_7 (ATerm t)
              {
                t = c_24;
                return(t);
              }
              t = p_53;
              t = symbols2pp_entries_1_0(k_7, t);
            }
          }
        else
          {
            t = y_23;
            {
              ATerm a_24 = t;
              int e_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(e_24);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = a_24;
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
        ATerm j_24 = NULL,c_5 = NULL;
        t = SSLgetAnnotations(g_56);
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, h_56);
        c_5 = t;
        t = SSLsetAnnotations(c_5, j_24);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          h_56 = ATgetArgument(t, 0);
          {
            ATerm q_24 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(g_56);
            q_24 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, h_56);
            e_5 = t;
            t = SSLsetAnnotations(e_5, q_24);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              h_56 = ATgetArgument(t, 0);
              i_56 = ATgetArgument(t, 1);
              {
                ATerm y_24 = NULL,f_5 = NULL;
                t = SSLgetAnnotations(g_56);
                y_24 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, h_56, i_56);
                f_5 = t;
                t = SSLsetAnnotations(f_5, y_24);
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
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,s_56 = NULL,h_5 = NULL;
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
  h_5 = t;
  t = SSLsetAnnotations(h_5, o_56);
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
            ATerm k_24 = ATgetArgument(t, 1);
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
    ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,i_57 = NULL,i_5 = NULL;
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
    i_5 = t;
    t = SSLsetAnnotations(i_5, e_57);
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
              ATerm l_24 = ATgetArgument(t, 1);
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
        ATerm k_26 = NULL,j_5 = NULL;
        t = SSLgetAnnotations(x_57);
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, y_57);
        j_5 = t;
        t = SSLsetAnnotations(j_5, k_26);
      }
    }
  else
    {
      ATerm w_26 = NULL,k_5 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          y_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_57);
      w_26 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, y_57);
      k_5 = t;
      t = SSLsetAnnotations(k_5, w_26);
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
            ATerm r_24 = ATgetArgument(t, 1);
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
  ATerm s_24 = t;
  int t_24 = stack_ptr;
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
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
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
                ATerm z_24 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_24;
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
  ATerm a_25 = t;
  if((PushChoice() == 0))
    {
      ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,u_5 = NULL;
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
      u_5 = t;
      t = SSLsetAnnotations(u_5, p_58);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_25;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm number_node_1_0 (ATerm m_35 (ATerm), ATerm t)
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
                t = m_35(t);
                t = (ATerm) ATmakeAppl(sym__2, c_59, term_c_17);
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
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,i_7 = NULL;
  s_61 = t;
  if(match_cons(t, sym_Arg_1))
    {
      r_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_61);
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, r_61);
  i_7 = t;
  t = SSLsetAnnotations(i_7, q_61);
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
  ATerm y_61 = NULL,z_61 = NULL;
  ATerm v_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          y_61 = ATgetArgument(t, 0);
          z_61 = ATgetArgument(t, 1);
          {
            ATerm c_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_25);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, y_61, z_61);
    }
  else
    {
      t = v_25;
      if(match_cons(t, sym_iter_n_2))
        {
          y_61 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, y_61);
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm j_35 (ATerm), ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  static ATerm h_63 (ATerm t);
  static ATerm h_63 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL;
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
                  g_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_61;
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
                            ATerm o_61 = NULL,p_61 = NULL;
                            if(match_cons(t, sym_alt_2))
                              {
                                h_61 = ATgetArgument(t, 0);
                                i_61 = ATgetArgument(t, 1);
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
                            t = i_61;
                            if(match_cons(t, sym_alt_2))
                              {
                                j_61 = ATgetArgument(t, 0);
                                k_61 = ATgetArgument(t, 1);
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
                            t = (ATerm) ATmakeAppl(sym_alt_2, h_61, (ATerm) ATmakeAppl(sym_alt_2, j_61, k_61));
                            t = flat_alt_0_0(t);
                            o_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_q_26, o_61);
                            t = mkterm_0_0(t);
                            p_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_61, d_61), (ATerm) ATmakeAppl(sym__2, f_61, p_61));
                            t = h_63(t);
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
              t = h_63(t);
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              {
                static ATerm i_63 (ATerm e_62, ATerm f_62, ATerm g_62, ATerm h_62, ATerm i_62, ATerm t);
                static ATerm i_63 (ATerm e_62, ATerm f_62, ATerm g_62, ATerm h_62, ATerm i_62, ATerm t)
                {
                  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
                  t = SSL_explode_term(h_62);
                  if(match_cons(t, sym__2))
                    {
                      q_62 = ATgetArgument(t, 0);
                      r_62 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, f_62, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, g_62, q_62)));
                  t = conc_0_0(t);
                  l_62 = t;
                  t = r_62;
                  t = argument_list_0_0(t);
                  t = number_nonterminals_0_0(t);
                  s_62 = t;
                  t = make_0_0(t);
                  m_62 = t;
                  t = s_62;
                  {
                    static ATerm f_9 (ATerm t);
                    static ATerm f_9 (ATerm t)
                    {
                      ATerm u_62 = NULL;
                      u_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_62, l_62), u_62);
                      t = h_63(t);
                      return(t);
                    }
                    t = map_1_0(f_9, t);
                  }
                  t = concat_0_0(t);
                  n_62 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_62), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, e_62, l_62), m_62));
                  return(t);
                }
                ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
                w_62 = t;
                if(match_cons(t, sym__2))
                  {
                    x_62 = ATgetArgument(t, 0);
                    a_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_62;
                if(match_cons(t, sym__2))
                  {
                    y_62 = ATgetArgument(t, 0);
                    z_62 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_63;
                if(match_cons(t, sym__2))
                  {
                    b_63 = ATgetArgument(t, 0);
                    c_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_63;
                if(match_cons(t, sym_bracket_symbol_1))
                  {
                    v_62 = ATgetArgument(t, 0);
                    {
                      ATerm t_26 = t;
                      int u_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_62, z_62), (ATerm) ATmakeAppl(sym__2, b_63, v_62));
                          t = h_63(t);
                          LocalPopChoice(u_26);
                        }
                      else
                        {
                          t = t_26;
                          t = i_63(y_62, z_62, b_63, c_63, w_62, t);
                        }
                    }
                  }
                else
                  {
                    t = i_63(y_62, z_62, b_63, c_63, w_62, t);
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
    t = term_o_16;
    t = j_35(t);
    return(t);
  }
  t = split_2_0(u_8, _id, t);
  t = h_63(t);
  return(t);
}
static ATerm b_65 (ATerm r_63, ATerm s_63, ATerm t_63, ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,x_63 = NULL;
  t = t_63;
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_63;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        {
          ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,d_64 = NULL;
          t = s_63;
          t = reverse_0_0(t);
          {
            static ATerm h_9 (ATerm t);
            static ATerm i_9 (ATerm t);
            static ATerm h_9 (ATerm t)
            {
              if(((v_63 != NULL) && (v_63 != t)))
                _fail(t);
              else
                v_63 = t;
              return(t);
            }
            static ATerm i_9 (ATerm t)
            {
              t = reverse_0_0(t);
              if(((u_63 != NULL) && (u_63 != t)))
                _fail(t);
              else
                u_63 = t;
              return(t);
            }
            t = Cons_2_0(h_9, i_9, t);
          }
          t = not_null(u_63);
          t = pp_table_get_0_0(t);
          t = Fst_0_0(t);
          if(match_cons(t, sym_Path_2))
            {
              d_64 = ATgetArgument(t, 0);
              z_63 = ATgetArgument(t, 1);
              t = z_63;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_64 = ATgetFirst((ATermList) t);
                  b_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_64;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_64, (ATerm) ATinsert(ATempty, a_64));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  d_64 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_64, (ATerm) ATempty);
            }
          x_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_63), r_63);
          {
            static ATerm l_9 (ATerm t);
            static ATerm l_9 (ATerm t)
            {
              t = x_63;
              return(t);
            }
            t = symbol2abox_1_0(l_9, t);
          }
          t = map_1_0(m_9, t);
          t = s_63;
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
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATmakeAppl(sym_prod_3, k_64, l_64, m_64);
        t = generate_pp_entries_0_0(t);
        t = map_1_0(o_9, t);
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
static ATerm o_9 (ATerm t)
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
static ATerm q_9 (ATerm t)
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
        t = at_last_1_0(q_9, t);
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
          static ATerm r_9 (ATerm t);
          static ATerm r_9 (ATerm t)
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
          t = oncetd_1_0(r_9, t);
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
            ATerm r_27 = ATgetArgument(t, 0);
            ATerm t_27 = ATgetArgument(t, 1);
            j_65 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_65;
        {
          static ATerm t_9 (ATerm t);
          static ATerm t_9 (ATerm t)
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
          t = oncetd_1_0(t_9, t);
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
            ATerm p_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, u_65, a_66);
            t = conc_0_0(t);
            p_66 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, x_65, y_65, (ATerm) ATmakeAppl(sym_attrs_1, p_66));
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
static ATerm u_9 (ATerm t)
{
  ATerm u_27 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_27;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm v_66 = NULL;
  v_66 = t;
  t = string_Hd_0_0(t);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_upper_0_0(t);
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = is_lower_0_0(t);
      }
  }
  t = v_66;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm u_66 = NULL;
  t = filter_1_0(u_9, t);
  t = Cons_2_0(w_9, _id, t);
  t = separate_by_1_0(x_9, t);
  t = concat_strings_0_0(t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_66, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_28), term_o_28), term_m_28), term_l_28), term_k_28), term_j_28), term_i_28), term_h_28), term_e_28), term_d_28), term_b_28), term_a_28), term_z_27));
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
  t = u_66;
  t = escape_0_0(t);
  t = quote_0_0(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_28);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_28);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_28);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  b_67 = t;
  if(match_cons(t, sym_cf_1))
    {
      z_66 = ATgetArgument(t, 0);
      t = z_66;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          z_66 = ATgetArgument(t, 0);
          t = z_66;
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
                  z_66 = ATgetArgument(t, 0);
                  a_67 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(a_67), z_66);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      z_66 = ATgetArgument(t, 0);
                      t = z_66;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(a_10, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          z_66 = ATgetArgument(t, 0);
                          t = z_66;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(b_10, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              z_66 = ATgetArgument(t, 0);
                              t = z_66;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(c_10, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  z_66 = ATgetArgument(t, 0);
                                  a_67 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_67 = NULL,n_67 = NULL;
                                    t = z_66;
                                    t = Sym2Strs_0_0(t);
                                    m_67 = t;
                                    t = a_67;
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
                                      z_66 = ATgetArgument(t, 0);
                                      a_67 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_67 = NULL,r_67 = NULL;
                                        t = z_66;
                                        t = Sym2Strs_0_0(t);
                                        q_67 = t;
                                        t = a_67;
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
                                              z_66 = ATgetArgument(t, 0);
                                              {
                                                ATerm a_29 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(z_28);
                                          {
                                            ATerm t_67 = NULL;
                                            t = z_66;
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
                                                    z_66 = ATgetArgument(t, 0);
                                                    a_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm g_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(e_29);
                                                {
                                                  ATerm x_67 = NULL,y_67 = NULL;
                                                  t = z_66;
                                                  t = Sym2Strs_0_0(t);
                                                  x_67 = t;
                                                  t = a_67;
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
                                                    z_66 = ATgetArgument(t, 0);
                                                    a_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm b_68 = NULL,c_68 = NULL;
                                                      t = z_66;
                                                      t = Sym2Strs_0_0(t);
                                                      b_68 = t;
                                                      t = a_67;
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
                                                        z_66 = ATgetArgument(t, 0);
                                                        a_67 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_68 = NULL,g_68 = NULL;
                                                          t = z_66;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          f_68 = t;
                                                          t = a_67;
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
                                                            z_66 = ATgetArgument(t, 0);
                                                            a_67 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm j_68 = NULL,k_68 = NULL;
                                                              t = z_66;
                                                              t = Sym2Strs_0_0(t);
                                                              j_68 = t;
                                                              t = a_67;
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
                                                                z_66 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, z_66);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    z_66 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm n_68 = NULL;
                                                                      t = z_66;
                                                                      t = try_1_0(h_10, t);
                                                                      n_68 = t;
                                                                      t = (ATerm) ATinsert(ATempty, n_68);
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
                                                                            z_66 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm n_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(l_29);
                                                                        {
                                                                          ATerm p_68 = NULL;
                                                                          t = z_66;
                                                                          t = try_1_0(i_10, t);
                                                                          p_68 = t;
                                                                          t = (ATerm) ATinsert(ATempty, p_68);
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
static ATerm j_10 (ATerm t)
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
  t = map_1_0(j_10, t);
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
static ATerm p_10 (ATerm t)
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
  t = at_last_1_0(p_10, t);
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
        t = map_1_0(q_10, t);
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
static ATerm q_10 (ATerm t)
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
                  t = term_o_16;
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
                                                                                                                                                              t = term_r_34;
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
                  ATerm s_34 = t;
                  int t_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_69 = NULL;
                      t = l_69;
                      t = De_Escape_0_0(t);
                      q_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_69), term_g_27);
                      LocalPopChoice(t_34);
                    }
                  else
                    {
                      t = s_34;
                      {
                        ATerm t_69 = NULL;
                        t = n_69;
                        t = De_Escape_0_0(t);
                        t_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(t_69), m_69);
                      }
                    }
                }
              else
                {
                  ATerm w_69 = NULL;
                  t = n_69;
                  t = De_Escape_0_0(t);
                  w_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(w_69), m_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = m_69;
                  if(match_int(t, 92))
                    {
                      ATerm u_34 = t;
                      int v_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_69 = NULL;
                          t = l_69;
                          t = De_Escape_0_0(t);
                          y_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(y_69), term_w_34);
                          LocalPopChoice(v_34);
                        }
                      else
                        {
                          t = u_34;
                          {
                            ATerm b_70 = NULL;
                            t = n_69;
                            t = De_Escape_0_0(t);
                            b_70 = t;
                            t = (ATerm) ATinsert(CheckATermList(b_70), m_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm e_70 = NULL;
                      t = n_69;
                      t = De_Escape_0_0(t);
                      e_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_70), m_69);
                    }
                }
              else
                {
                  ATerm h_70 = NULL;
                  t = n_69;
                  t = De_Escape_0_0(t);
                  h_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_70), m_69);
                }
            }
        }
      else
        {
          ATerm k_70 = NULL;
          t = n_69;
          t = De_Escape_0_0(t);
          k_70 = t;
          t = (ATerm) ATinsert(CheckATermList(k_70), m_69);
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
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_70 = ATgetFirst((ATermList) t);
      v_70 = (ATerm) ATgetNext((ATermList) t);
      t = v_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_70 = ATgetFirst((ATermList) t);
          t_70 = (ATerm) ATgetNext((ATermList) t);
          t = s_70;
          if(match_int(t, 34))
            {
              t = u_70;
              if(match_int(t, 92))
                {
                  ATerm x_34 = t;
                  int z_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_70 = NULL;
                      t = t_70;
                      t = De_Escape_0_0(t);
                      y_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_70), term_g_27);
                      LocalPopChoice(z_34);
                    }
                  else
                    {
                      t = x_34;
                      {
                        ATerm b_71 = NULL;
                        t = v_70;
                        t = De_Escape_0_0(t);
                        b_71 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_71), u_70);
                      }
                    }
                }
              else
                {
                  ATerm e_71 = NULL;
                  t = v_70;
                  t = De_Escape_0_0(t);
                  e_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_71), u_70);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = u_70;
                  if(match_int(t, 92))
                    {
                      ATerm a_35 = t;
                      int c_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_71 = NULL;
                          t = t_70;
                          t = De_Escape_0_0(t);
                          h_71 = t;
                          t = (ATerm) ATinsert(CheckATermList(h_71), term_w_34);
                          LocalPopChoice(c_35);
                        }
                      else
                        {
                          t = a_35;
                          {
                            ATerm k_71 = NULL;
                            t = v_70;
                            t = De_Escape_0_0(t);
                            k_71 = t;
                            t = (ATerm) ATinsert(CheckATermList(k_71), u_70);
                          }
                        }
                    }
                  else
                    {
                      ATerm n_71 = NULL;
                      t = v_70;
                      t = De_Escape_0_0(t);
                      n_71 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_71), u_70);
                    }
                }
              else
                {
                  ATerm q_71 = NULL;
                  t = v_70;
                  t = De_Escape_0_0(t);
                  q_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_71), u_70);
                }
            }
        }
      else
        {
          ATerm u_71 = NULL;
          t = v_70;
          t = De_Escape_0_0(t);
          u_71 = t;
          t = (ATerm) ATinsert(CheckATermList(u_71), u_70);
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
ATerm list_ana_1_0 (ATerm c_37 (ATerm), ATerm t)
{
  static ATerm b_72 (ATerm t);
  static ATerm b_72 (ATerm t)
  {
    ATerm h_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL;
        t = c_37(t);
        w_71 = t;
        t = (ATerm) ATinsert(ATempty, w_71);
        LocalPopChoice(k_35);
      }
    else
      {
        t = h_35;
        {
          ATerm l_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_72 = NULL,i_27 = NULL;
              a_72 = t;
              t = SSL_explode_term(a_72);
              if(match_cons(t, sym__2))
                {
                  ATerm o_35 = ATgetArgument(t, 0);
                  i_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_27;
              t = filter_1_0(b_72, t);
              t = concat_0_0(t);
              LocalPopChoice(n_35);
            }
          else
            {
              t = l_35;
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
  t = try_1_0(s_10, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  t = list_ana_1_0(r_10, t);
  t = separate_by_1_0(t_10, t);
  t = concat_strings_0_0(t);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
      }
  }
  return(t);
}
static ATerm g_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t)
{
  ATerm r_72 = NULL;
  t = o_72;
  {
    ATerm r_35 = t;
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
        t = r_35;
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
              t = filter_1_0(u_10, t);
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
                      t = term_o_16;
                      t = new_0_0(t);
                      w_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_72, (ATerm) ATinsert(ATinsert(ATempty, w_72), term_z_35));
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
static ATerm u_10 (ATerm t)
{
  ATerm a_36 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_36;
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm d_73 = NULL;
  d_73 = t;
  {
    ATerm b_36 = t;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_36;
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
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            z_72 = ATgetArgument(t, 0);
            {
              ATerm e_36 = ATgetArgument(t, 1);
            }
            {
              ATerm f_36 = ATgetArgument(t, 2);
            }
            {
              ATerm g_36 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_36);
        t = z_72;
        t = try_1_0(a_11, t);
      }
    else
      {
        t = c_36;
        if(match_cons(t, sym_prod_3))
          {
            z_72 = ATgetArgument(t, 0);
            a_73 = ATgetArgument(t, 1);
            {
              ATerm h_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_72;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm i_36 = t;
            int k_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_73(z_72, a_73, y_72, t);
                LocalPopChoice(k_36);
              }
            else
              {
                t = i_36;
                {
                  ATerm f_73 = NULL;
                  t = (ATerm) ATinsert(ATempty, a_73);
                  t = syms2strs_0_0(t);
                  f_73 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_73, (ATerm) ATinsert(ATempty, term_l_36));
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
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
  n_75 = t;
  if(match_cons(t, sym_sort_1))
    {
      o_75 = ATgetArgument(t, 0);
      {
        ATerm p_27 = NULL,l_7 = NULL;
        t = SSLgetAnnotations(n_75);
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, o_75);
        l_7 = t;
        t = SSLsetAnnotations(l_7, p_27);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          o_75 = ATgetArgument(t, 0);
          p_75 = ATgetArgument(t, 1);
          {
            ATerm c_28 = NULL,f_28 = NULL,g_28 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(n_75);
            c_28 = t;
            t = o_75;
            t = syntaxless_sort_0_0(t);
            f_28 = t;
            t = p_75;
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
              o_75 = ATgetArgument(t, 0);
              {
                ATerm n_28 = NULL,p_28 = NULL,n_7 = NULL;
                t = SSLgetAnnotations(n_75);
                n_28 = t;
                t = o_75;
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
                  o_75 = ATgetArgument(t, 0);
                  {
                    ATerm v_28 = NULL,x_28 = NULL,q_7 = NULL;
                    t = SSLgetAnnotations(n_75);
                    v_28 = t;
                    t = o_75;
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
                      o_75 = ATgetArgument(t, 0);
                      {
                        ATerm d_29 = NULL,f_29 = NULL,s_7 = NULL;
                        t = SSLgetAnnotations(n_75);
                        d_29 = t;
                        t = o_75;
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
                          o_75 = ATgetArgument(t, 0);
                          p_75 = ATgetArgument(t, 1);
                          {
                            ATerm m_29 = NULL,p_29 = NULL,t_7 = NULL;
                            t = SSLgetAnnotations(n_75);
                            m_29 = t;
                            t = o_75;
                            t = syntaxless_sort_0_0(t);
                            p_29 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, p_29, p_75);
                            t_7 = t;
                            t = SSLsetAnnotations(t_7, m_29);
                          }
                        }
                      else
                        {
                          ATerm i_30 = NULL,u_30 = NULL,u_7 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              o_75 = ATgetArgument(t, 0);
                              p_75 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(n_75);
                          i_30 = t;
                          t = o_75;
                          t = syntaxless_sort_0_0(t);
                          u_30 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, u_30, p_75);
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
static ATerm b_11 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,o_8 = NULL;
  e_76 = t;
  if(match_cons(t, sym_prod_3))
    {
      z_75 = ATgetArgument(t, 0);
      a_76 = ATgetArgument(t, 1);
      b_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_76);
  y_75 = t;
  t = z_75;
  t = Cons_2_0(syntaxless_sort_0_0, Nil_0_0, t);
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, c_76, a_76, b_76);
  o_8 = t;
  t = SSLsetAnnotations(o_8, y_75);
  d_76 = t;
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = has_option_1_0(b_11, t);
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        t = term_s_36;
        t = get_config_0_0(t);
      }
  }
  t = d_76;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm g_76 = NULL,k_76 = NULL;
  ATerm t_36 = t;
  int u_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm v_36 = ATgetArgument(t, 0);
          ATerm x_36 = ATgetArgument(t, 1);
          ATerm y_36 = ATgetArgument(t, 2);
          g_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(u_36);
      t = g_76;
      t = oncetd_1_0(c_11, t);
      t = term_o_16;
    }
  else
    {
      t = t_36;
      if(match_cons(t, sym_prod_3))
        {
          ATerm z_36 = ATgetArgument(t, 0);
          ATerm b_37 = ATgetArgument(t, 1);
          k_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_76;
      t = oncetd_1_0(d_11, t);
      t = term_o_16;
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm f_11 (ATerm t)
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
      t = oncetd_1_0(e_11, t);
      t = term_o_16;
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
      t = oncetd_1_0(f_11, t);
      t = term_o_16;
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
          static ATerm g_11 (ATerm t);
          static ATerm g_11 (ATerm t)
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
          t = oncetd_1_0(g_11, t);
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm y_10, ATerm z_10, ATerm x_10, ATerm w_10, ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm i_11 (ATerm t);
      static ATerm i_11 (ATerm t)
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
      t = x_10;
      t = oncetd_1_0(i_11, t);
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
            t = z_10;
            if(match_cons(t, sym_sort_1))
              {
                p_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_10);
            o_77 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, p_77);
            s_8 = t;
            t = SSLsetAnnotations(s_8, o_77);
            t = (ATerm) ATmakeAppl(sym_prod_3, y_10, z_10, x_10);
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
              static ATerm j_11 (ATerm t);
              static ATerm j_11 (ATerm t)
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
              t = oncetd_1_0(j_11, t);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, y_10, z_10, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(g_77))))), (ATerm) ATinsert(ATempty, not_null(g_77)));
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
      ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,e_12 = NULL;
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
      e_12 = t;
      t = SSLsetAnnotations(e_12, v_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_38;
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm b_38 = t;
  if((PushChoice() == 0))
    {
      ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL,f_12 = NULL;
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
      f_12 = t;
      t = SSLsetAnnotations(f_12, y_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_38;
    }
  return(t);
}
static ATerm q_6 (ATerm f_10, ATerm d_10, ATerm e_10, ATerm g_10, ATerm t)
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
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, f_10, d_10, e_10), g_10);
  t = p_6(f_10, d_10, e_10, g_10, t);
  if(match_cons(t, sym__2))
    {
      q_77 = ATgetArgument(t, 0);
      r_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10;
  t = filter_1_0(k_11, t);
  t_77 = t;
  t = g_10;
  t = filter_1_0(m_11, t);
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym__4, t_77, u_77, (ATerm)ATinsert(ATempty, q_77), term_c_17);
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
static ATerm r_6 (ATerm l_18, ATerm m_18, ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  t = l_18;
  t = mk_key_0_0(t);
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_20, e_79, (ATerm) ATmakeAppl(sym__2, l_18, m_18));
  t = table_put_0_0(t);
  t = l_18;
  t = path_to_string_0_0(t);
  d_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_79, m_18);
  t = if_verbose1_1_0(t_11, t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
  x_80 = t;
  if(match_cons(t, sym_Arg_1))
    {
      y_80 = ATgetArgument(t, 0);
      {
        ATerm v_31 = NULL,z_31 = NULL,o_12 = NULL;
        t = SSLgetAnnotations(x_80);
        v_31 = t;
        t = y_80;
        t = string_to_int_0_0(t);
        z_31 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, z_31);
        o_12 = t;
        t = SSLsetAnnotations(o_12, v_31);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          y_80 = ATgetArgument(t, 0);
          z_80 = ATgetArgument(t, 1);
          {
            ATerm q_32 = NULL,y_32 = NULL,a_33 = NULL,t_12 = NULL;
            t = SSLgetAnnotations(x_80);
            q_32 = t;
            t = y_80;
            t = string_to_int_0_0(t);
            y_32 = t;
            t = z_80;
            t = string_to_int_0_0(t);
            a_33 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, y_32, a_33);
            t_12 = t;
            t = SSLsetAnnotations(t_12, q_32);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              y_80 = ATgetArgument(t, 0);
              z_80 = ATgetArgument(t, 1);
              {
                ATerm v_33 = NULL,y_12 = NULL;
                t = SSLgetAnnotations(x_80);
                v_33 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, y_80, z_80);
                y_12 = t;
                t = SSLsetAnnotations(y_12, v_33);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  y_80 = ATgetArgument(t, 0);
                  {
                    ATerm y_34 = NULL,b_35 = NULL,e_13 = NULL;
                    t = SSLgetAnnotations(x_80);
                    y_34 = t;
                    t = y_80;
                    t = un_double_quote_0_0(t);
                    t = unescape_0_0(t);
                    b_35 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, b_35);
                    e_13 = t;
                    t = SSLsetAnnotations(e_13, y_34);
                  }
                }
              else
                {
                  ATerm y_35 = NULL,q_36 = NULL,f_13 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      y_80 = ATgetArgument(t, 0);
                      z_80 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_80);
                  y_35 = t;
                  t = y_80;
                  t = string_to_int_0_0(t);
                  q_36 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, q_36, z_80);
                  f_13 = t;
                  t = SSLsetAnnotations(f_13, y_35);
                }
            }
        }
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL;
  t = topdown_1_0(w_11, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_81 = ATgetArgument(t, 0);
      g_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(f_81, g_81, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = try_1_0(MakePPTerm_0_0, t);
  return(t);
}
static ATerm s_6 (ATerm k_18, ATerm t)
{
  t = k_18;
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
  ATerm l_81 = NULL,m_81 = NULL,a_37 = NULL,d_37 = NULL;
  t = if_verbose1_1_0(z_11, t);
  t = ReadFromFile_0_0(t);
  m_81 = t;
  t = SSL_explode_term(m_81);
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      {
        ATerm n_38 = ATgetArgument(t, 1);
        if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
          {
            a_37 = ATgetFirst((ATermList) n_38);
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
  t = d_37;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = a_37;
  if(match_cons(t, sym_PP_Table_1))
    {
      l_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(l_81, t);
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
  ATerm k_81 = NULL;
  k_81 = t;
  t = term_i_20;
  t = table_create_0_0(t);
  t = k_81;
  t = map_1_0(y_11, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm q_81 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      q_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_81;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = sometd_1_0(h_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm r_81 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      r_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_81;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = topdown_1_0(k_12, t);
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL;
        y_81 = t;
        if(match_cons(t, sym_appl_2))
          {
            z_81 = ATgetArgument(t, 0);
            d_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_81;
        if(match_cons(t, sym_prod_3))
          {
            a_82 = ATgetArgument(t, 0);
            b_82 = ATgetArgument(t, 1);
            c_82 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = y_81;
        t = q_6(a_82, b_82, c_82, d_82, t);
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
static ATerm j_12 (ATerm t)
{
  t = collect_p__1_0(n_12, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = try_1_0(l_12, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = is_list_0_0(t);
  t = filter_1_0(m_12, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm s_38 = t;
  if((PushChoice() == 0))
    {
      ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL,c_14 = NULL;
      u_81 = t;
      if(match_cons(t, sym_opt_1))
        {
          t_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_81);
      s_81 = t;
      t = t_81;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, t_81);
      c_14 = t;
      t = SSLsetAnnotations(c_14, s_81);
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
        ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,e_14 = NULL;
        x_81 = t;
        if(match_cons(t, sym_layout_1))
          {
            w_81 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_81);
        v_81 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, w_81);
        e_14 = t;
        t = SSLsetAnnotations(e_14, v_81);
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
static ATerm n_12 (ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,g_14 = NULL;
  k_82 = t;
  if(match_cons(t, sym_layout_1))
    {
      j_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_82);
  i_82 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, j_82);
  g_14 = t;
  t = SSLsetAnnotations(g_14, i_82);
  return(t);
}
static ATerm u_6 (ATerm p_15, ATerm o_15, ATerm t)
{
  static ATerm p_12 (ATerm t);
  static ATerm p_12 (ATerm t)
  {
    t = p_15;
    return(t);
  }
  t = p_15;
  t = collect_1_0(b_12, t);
  t = reverse_0_0(t);
  t = read_pp_tables_0_0(t);
  t = o_15;
  t = repeat_1_0(g_12, t);
  t = split_2_0(i_12, j_12, t);
  t = insert_layout_0_0(t);
  t = split_2_0(p_12, _id, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL;
  if(match_cons(t, sym__2))
    {
      m_82 = ATgetArgument(t, 0);
      n_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(m_82, n_82, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_12, u_12, v_12, t);
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
            t = Option_3_0(w_12, x_12, d_13, t);
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            t = ArgOption_3_0(g_13, h_13, i_13, t);
          }
      }
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm o_82 = NULL;
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, o_82);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_2_0(q_12, r_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

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
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_o_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_y_37;
ATerm term_n_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_w_35;
ATerm term_v_34;
ATerm term_q_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_g_33;
ATerm term_c_33;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_f_32;
ATerm term_b_32;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_n_31;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_u_29;
ATerm term_m_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_a_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_f_27;
ATerm term_p_26;
ATerm term_t_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_k_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_m_17;
ATerm term_a_17;
ATerm term_g_16;
ATerm term_l_15;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_t_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_SOpt_2, term_d_14, term_h_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_lit_1, term_s_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_lit_1, term_u_23);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_SOpt_2, term_q_24, term_r_24);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Arg_1, term_a_17);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm split_2_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm t);
static ATerm b_6 (ATerm v_21, ATerm t);
static ATerm c_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm d_37 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
ATerm crush_3_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
ATerm collect_p__1_0 (ATerm q_36 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm a_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm c_93 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm d_6 (ATerm t_10, ATerm s_10, ATerm t);
ATerm instantiate_list_1_0 (ATerm w_36 (ATerm), ATerm t);
static ATerm f_6 (ATerm i_13, ATerm j_13, ATerm g_13, ATerm h_13, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm y_36 (ATerm), ATerm t);
ATerm even_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm g_6 (ATerm j_35 (ATerm), ATerm k_35 (ATerm), ATerm l_35 (ATerm), ATerm m_35 (ATerm), ATerm o_14, ATerm p_14, ATerm t);
ATerm nzip_1_0 (ATerm c_100 (ATerm), ATerm t);
static ATerm h_6 (ATerm f_14, ATerm g_14, ATerm e_14, ATerm k_14, ATerm t);
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
static ATerm i_6 (ATerm v_18, ATerm u_18, ATerm t);
ATerm say_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm q_104 (ATerm), ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm z_35 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_117 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_97 (ATerm), ATerm t);
static ATerm e_52 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm o_35 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm y_97 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
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
ATerm number_node_1_0 (ATerm s_35 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm symbol2abox_1_0 (ATerm p_35 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
static ATerm a_65 (ATerm p_63, ATerm q_63, ATerm r_63, ATerm t);
static ATerm b_65 (ATerm i_64, ATerm j_64, ATerm k_64, ATerm l_64, ATerm m_64, ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm f_94 (ATerm), ATerm t);
static ATerm r_9 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm string_Hd_0_0 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm d_98 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
ATerm quote_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm o_98 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
static ATerm b_69 (ATerm x_68, ATerm t);
static ATerm q_10 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm k_97 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm o_37 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm g_73 (ATerm l_72, ATerm m_72, ATerm n_72, ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm p_6 (ATerm f_11, ATerm g_11, ATerm e_11, ATerm d_11, ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm q_6 (ATerm m_10, ATerm k_10, ATerm l_10, ATerm n_10, ATerm t);
ATerm filter_1_0 (ATerm e_106 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_113 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm p_94 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm w_95 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm r_6 (ATerm s_18, ATerm t_18, ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm s_6 (ATerm r_18, ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm n_118 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm w_92 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm f_114 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_97 (ATerm), ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm collect_1_0 (ATerm t_103 (ATerm), ATerm t);
static ATerm f_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm u_6 (ATerm w_15, ATerm v_15, ATerm t);
ATerm ArgOption_3_0 (ATerm z_3 (ATerm), ATerm a_4 (ATerm), ATerm b_4 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm w_3 (ATerm), ATerm x_3 (ATerm), ATerm y_3 (ATerm), ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm Asfix_2_abox_options_0_0 (ATerm t);
ATerm io_wrap_2_0 (ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm t);
static ATerm d_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm v_21, ATerm t)
{
  ATerm n_9 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 = NULL;
      t = has_significant_layout_0_0(t);
      t = v_21;
      t = concat_strings_0_0(t);
      b_0 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, b_0)));
      LocalPopChoice(e_13);
    }
  else
    {
      t = n_9;
      {
        ATerm d_0 = NULL;
        t = v_21;
        t = concat_strings_0_0(t);
        d_0 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, d_0);
      }
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm k_13 = t;
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
      t = k_13;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm h_0 = NULL,m_0 = NULL;
  m_0 = t;
  {
    ATerm n_13 = t;
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
        t = n_13;
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
    ATerm o_13 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_13;
      }
  }
  t = m_0;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm r_13 = t;
  if((PushChoice() == 0))
    {
      ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL,o_0 = NULL;
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
      o_0 = t;
      t = SSLsetAnnotations(o_0, t_0);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_13;
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm InsLayout_1_0 (ATerm d_37 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm e_1 = NULL,g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(Nil_0_0, _id, t);
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
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
              t = d_37(t);
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
              t = d_37(t);
              if(match_cons(t, sym__2))
                {
                  e_1 = ATgetArgument(t, 0);
                  {
                    ATerm y_13 = ATgetArgument(t, 1);
                    if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
                      {
                        g_1 = ATgetFirst((ATermList) y_13);
                        l_1 = (ATerm) ATgetNext((ATermList) y_13);
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
                  ATerm z_13 = ATgetArgument(t, 0);
                  if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
                    {
                      i_1 = ATgetFirst((ATermList) z_13);
                      n_1 = (ATerm) ATgetNext((ATermList) z_13);
                    }
                  else
                    _fail(t);
                  m_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm a_14 = t;
                int b_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_1 = NULL,b_1 = NULL;
                    t = has_option_1_0(e_0, t);
                    t = g_1;
                    t = has_layout_0_0(t);
                    t = g_1;
                    if(match_cons(t, sym_layout_1))
                      {
                        b_1 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_6(b_1, t);
                    a_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_14), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_1))), a_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_1))))), m_1);
                    LocalPopChoice(b_14);
                  }
                else
                  {
                    t = a_14;
                    {
                      ATerm j_14 = t;
                      int m_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_1 = NULL,f_1 = NULL;
                          ATerm r_14 = t;
                          if((PushChoice() == 0))
                            {
                              t = has_option_1_0(f_0, t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = r_14;
                            }
                          t = g_1;
                          t = has_significant_layout_0_0(t);
                          t = g_1;
                          if(match_cons(t, sym_layout_1))
                            {
                              f_1 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = b_6(f_1, t);
                          c_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(n_1), i_1), c_1), e_1), m_1);
                          LocalPopChoice(m_14);
                        }
                      else
                        {
                          t = j_14;
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
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_14 = t;
      if((PushChoice() == 0))
        {
          ATerm c_7 = NULL,e_7 = NULL,f_7 = NULL,q_1 = NULL;
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
          q_1 = t;
          t = SSLsetAnnotations(q_1, c_7);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_14;
        }
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
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
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_10 = NULL,d_10 = NULL,r_1 = NULL;
              t = SSLgetAnnotations(y_7);
              d_10 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, z_7);
              r_1 = t;
              t = SSLsetAnnotations(r_1, d_10);
              t = has_option_1_0(w_0, t);
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  c_10 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_6(c_10, t);
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              {
                ATerm o_10 = NULL,p_10 = NULL,s_1 = NULL;
                t = SSLgetAnnotations(y_7);
                p_10 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, z_7);
                s_1 = t;
                t = SSLsetAnnotations(s_1, p_10);
                {
                  ATerm z_14 = t;
                  if((PushChoice() == 0))
                    {
                      t = has_option_1_0(x_0, t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = z_14;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    o_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_6(o_10, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_3 != NULL) && (s_3 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_3 = ATgetFirst((ATermList) t);
        {
          ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
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
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_5 = NULL,w_5 = NULL,z_5 = NULL,a_6 = NULL,c_6 = NULL;
          if(match_cons(t, sym__2))
            {
              w_5 = ATgetArgument(t, 0);
              c_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_5;
          if(match_cons(t, sym_H_2))
            {
              z_5 = ATgetArgument(t, 0);
              a_6 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
                  t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
                      t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
                          u_5 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, u_5, c_6);
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
                              t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
                                  t = (ATerm) ATmakeAppl(sym__2, z_5, c_6);
                                  t = InsLayout_1_0(i_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      e_4 = ATgetArgument(t, 0);
                                      {
                                        ATerm e_15 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
                                      t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
                                          t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
                                              t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
                                              t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
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
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          {
            ATerm f_15 = t;
            int g_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(j_0, _id, t);
                t = InsLayout_1_0(i_8, t);
                LocalPopChoice(g_15);
              }
            else
              {
                t = f_15;
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
      t_3 = ATgetArgument(t, 0);
      {
        ATerm h_15 = ATgetArgument(t, 1);
        if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
          {
            u_3 = ATgetFirst((ATermList) h_15);
            {
              ATerm i_15 = (ATerm) ATgetNext((ATermList) h_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_3), t_3), not_null(s_3));
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
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_14), c_8);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_14), c_8);
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm q_36 (ATerm), ATerm t)
{
  static ATerm x_8 (ATerm t);
  static ATerm x_8 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL;
        t = q_36(t);
        w_8 = t;
        t = (ATerm) ATinsert(ATempty, w_8);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = crush_3_0(y_0, conc_0_0, x_8, t);
      }
    return(t);
  }
  t = x_8(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm y_8 = NULL,a_9 = NULL,b_9 = NULL,w_1 = NULL;
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
  w_1 = t;
  t = SSLsetAnnotations(w_1, y_8);
  t = (ATerm) ATinsert(ATempty, term_l_15);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm o_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = o_15;
            {
              ATerm t_15 = t;
              int b_16 = stack_ptr;
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
                  LocalPopChoice(b_16);
                }
              else
                {
                  t = t_15;
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
        ATerm v_9 = NULL,w_9 = NULL;
        t = term_g_16;
        t = a_0(t);
        w_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, w_9);
        t = index_0_0(t);
        v_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_9, v_9);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm y_9 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          s_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_g_16;
      t = a_0(t);
      y_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_9, y_9);
      t = index_0_0(t);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = collect_p__1_0(d_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,x_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Arg_1))
    {
      x_13 = ATgetArgument(t, 0);
      {
        ATerm y_10 = NULL,y_1 = NULL;
        t = SSLgetAnnotations(q_13);
        y_10 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, x_13);
        y_1 = t;
        t = SSLsetAnnotations(y_1, y_10);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          x_13 = ATgetArgument(t, 0);
          p_13 = ATgetArgument(t, 1);
          {
            ATerm k_11 = NULL,a_2 = NULL;
            t = SSLgetAnnotations(q_13);
            k_11 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, x_13, p_13);
            a_2 = t;
            t = SSLsetAnnotations(a_2, k_11);
          }
        }
      else
        {
          ATerm t_11 = NULL,b_2 = NULL;
          if(match_cons(t, sym_S_1))
            {
              x_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_13);
          t_11 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, x_13);
          b_2 = t;
          t = SSLsetAnnotations(b_2, t_11);
        }
    }
  return(t);
}
static ATerm d_6 (ATerm t_10, ATerm s_10, ATerm t)
{
  ATerm z_11 = NULL,b_12 = NULL;
  t = _2_0(z_0, _id, t);
  {
    static ATerm a_20 (ATerm t);
    static ATerm a_20 (ATerm t)
    {
      ATerm l_14 = NULL,n_14 = NULL,q_14 = NULL,w_14 = NULL,a_15 = NULL;
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
            static ATerm d_20 (ATerm m_18, ATerm n_18, ATerm a_19, ATerm t);
            static ATerm d_20 (ATerm m_18, ATerm n_18, ATerm a_19, ATerm t)
            {
              t = m_18;
              if(((a_15 != NULL) && (a_15 != t)))
                _fail(t);
              else
                a_15 = t;
              t = n_18;
              if(((l_14 != NULL) && (l_14 != t)))
                _fail(t);
              else
                l_14 = t;
              t = a_19;
              if(((q_14 != NULL) && (q_14 != t)))
                _fail(t);
              else
                q_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_18, a_19);
              t = a_20(t);
              if(match_cons(t, sym__2))
                {
                  if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    n_14 = ATgetArgument(t, 0);
                  if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    w_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_14), m_18), w_14);
              return(t);
            }
            ATerm b_19 = NULL,d_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,s_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
            n_19 = t;
            if(match_cons(t, sym__2))
              {
                o_19 = ATgetArgument(t, 0);
                u_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_19;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_19 = ATgetFirst((ATermList) t);
                s_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_19;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_19 = ATgetFirst((ATermList) t);
                w_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_19;
            if(match_cons(t, sym_Arg_1))
              {
                b_19 = ATgetArgument(t, 0);
                {
                  ATerm r_16 = t;
                  int s_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_19;
                      if(((l_14 != NULL) && (l_14 != t)))
                        _fail(t);
                      else
                        l_14 = t;
                      t = w_19;
                      if(((q_14 != NULL) && (q_14 != t)))
                        _fail(t);
                      else
                        q_14 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_19, w_19);
                      t = a_20(t);
                      if(match_cons(t, sym__2))
                        {
                          if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            n_14 = ATgetArgument(t, 0);
                          if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            w_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_14), (ATerm) ATmakeAppl(sym_Arg_1, b_19)), (ATerm) ATinsert(CheckATermList(w_14), v_19));
                      LocalPopChoice(s_16);
                    }
                  else
                    {
                      t = r_16;
                      t = d_20(p_19, s_19, w_19, t);
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Arg2_2))
                  {
                    b_19 = ATgetArgument(t, 0);
                    d_19 = ATgetArgument(t, 1);
                    {
                      ATerm t_16 = t;
                      int u_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_19;
                          if(((z_11 != NULL) && (z_11 != t)))
                            _fail(t);
                          else
                            z_11 = t;
                          t = s_19;
                          if(((l_14 != NULL) && (l_14 != t)))
                            _fail(t);
                          else
                            l_14 = t;
                          t = w_19;
                          if(((q_14 != NULL) && (q_14 != t)))
                            _fail(t);
                          else
                            q_14 = t;
                          t = (ATerm) ATmakeAppl(sym__2, s_19, w_19);
                          t = a_20(t);
                          if(match_cons(t, sym__2))
                            {
                              if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                n_14 = ATgetArgument(t, 0);
                              if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                w_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_14), (ATerm) ATmakeAppl(sym_Arg2_2, b_19, d_19)), (ATerm) ATinsert(CheckATermList(w_14), v_19));
                          LocalPopChoice(u_16);
                        }
                      else
                        {
                          t = t_16;
                          t = d_20(p_19, s_19, w_19, t);
                        }
                    }
                  }
                else
                  {
                    t = d_20(p_19, s_19, w_19, t);
                  }
              }
          }
        }
      return(t);
    }
    t = a_20(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm v_16 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_10, b_12);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm w_36 (ATerm), ATerm t)
{
  static ATerm u_20 (ATerm t);
  static ATerm u_20 (ATerm t)
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        {
          ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
          static ATerm h_1 (ATerm t);
          static ATerm j_1 (ATerm t);
          static ATerm h_1 (ATerm t)
          {
            static ATerm k_1 (ATerm t);
            static ATerm k_1 (ATerm t)
            {
              static ATerm o_1 (ATerm t);
              static ATerm o_1 (ATerm t)
              {
                ATerm y_16 = t;
                int z_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm p_1 (ATerm t);
                    static ATerm p_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(n_20));
                      return(t);
                    }
                    t = Instantiate_1_0(p_1, t);
                    LocalPopChoice(z_16);
                  }
                else
                  {
                    t = y_16;
                    t = flat_list_0_0(t);
                  }
                return(t);
              }
              t = try_1_0(o_1, t);
              return(t);
            }
            t = term_g_16;
            t = w_36(t);
            t = bottomup_1_0(k_1, t);
            return(t);
          }
          static ATerm j_1 (ATerm t)
          {
            t = not_null(o_20);
            t = u_20(t);
            return(t);
          }
          m_20 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((n_20 != NULL) && (n_20 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                n_20 = ATgetFirst((ATermList) t);
              if(((o_20 != NULL) && (o_20 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                o_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_20;
          t = Cons_2_0(h_1, j_1, t);
        }
      }
    return(t);
  }
  t = u_20(t);
  return(t);
}
static ATerm f_6 (ATerm i_13, ATerm j_13, ATerm g_13, ATerm h_13, ATerm t)
{
  ATerm x_21 = NULL,a_22 = NULL,b_22 = NULL,n_22 = NULL;
  static ATerm u_1 (ATerm t);
  static ATerm u_1 (ATerm t)
  {
    t = not_null(a_22);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, g_13, (ATerm) ATinsert(ATempty, h_13));
  t = conc_0_0(t);
  b_22 = t;
  t = i_13;
  if(match_cons(t, sym_iter_1))
    {
      n_22 = ATgetArgument(t, 0);
      {
        ATerm s_13 = NULL,l_4 = NULL;
        t = SSLgetAnnotations(i_13);
        s_13 = t;
        t = n_22;
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, n_22);
        l_4 = t;
        t = SSLsetAnnotations(l_4, s_13);
      }
    }
  else
    {
      ATerm w_13 = NULL,m_4 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          n_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_13);
      w_13 = t;
      t = n_22;
      x_21 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, n_22);
      m_4 = t;
      t = SSLsetAnnotations(m_4, w_13);
    }
  t = (ATerm) ATmakeAppl(sym__2, i_13, b_22);
  t = get_pp_entry_0_0(t);
  if(((a_22 != NULL) && (a_22 != t)))
    _fail(t);
  else
    a_22 = t;
  t = j_13;
  {
    static ATerm t_1 (ATerm t);
    static ATerm t_1 (ATerm t)
    {
      ATerm o_22 = NULL;
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym__4, x_21, o_22, b_22, term_a_17);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(t_1, t);
  }
  t = instantiate_list_1_0(u_1, t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm y_36 (ATerm), ATerm t)
{
  static ATerm i_25 (ATerm t);
  static ATerm i_25 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, Nil_0_0, t);
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              {
                ATerm x_23 = NULL,c_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
                static ATerm v_1 (ATerm t);
                static ATerm x_1 (ATerm t);
                static ATerm v_1 (ATerm t)
                {
                  static ATerm z_1 (ATerm t);
                  static ATerm z_1 (ATerm t)
                  {
                    static ATerm c_2 (ATerm t);
                    static ATerm c_2 (ATerm t)
                    {
                      ATerm g_17 = t;
                      int h_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          static ATerm d_2 (ATerm t);
                          static ATerm d_2 (ATerm t)
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_24)), not_null(c_24));
                            return(t);
                          }
                          t = Instantiate_1_0(d_2, t);
                          LocalPopChoice(h_17);
                        }
                      else
                        {
                          t = g_17;
                          t = flat_list_0_0(t);
                        }
                      return(t);
                    }
                    t = try_1_0(c_2, t);
                    return(t);
                  }
                  t = term_g_16;
                  t = y_36(t);
                  t = bottomup_1_0(z_1, t);
                  return(t);
                }
                static ATerm x_1 (ATerm t)
                {
                  t = not_null(g_24);
                  t = i_25(t);
                  return(t);
                }
                x_23 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((c_24 != NULL) && (c_24 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      c_24 = ATgetFirst((ATermList) t);
                    e_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_24;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((f_24 != NULL) && (f_24 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      f_24 = ATgetFirst((ATermList) t);
                    if(((g_24 != NULL) && (g_24 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      g_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_23;
                t = Cons_2_0(v_1, x_1, t);
              }
            }
        }
      }
    return(t);
  }
  t = i_25(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  {
    ATerm i_17 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_17;
      }
  }
  t = (ATerm) ATinsert(ATempty, n_25);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  {
    ATerm j_17 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_17;
      }
  }
  t = (ATerm) ATinsert(ATempty, r_25);
  return(t);
}
static ATerm g_6 (ATerm j_35 (ATerm), ATerm k_35 (ATerm), ATerm l_35 (ATerm), ATerm m_35 (ATerm), ATerm o_14, ATerm p_14, ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL,l_25 = NULL;
      t = o_14;
      t = even_0_0(t);
      t = term_g_16;
      t = k_35(t);
      k_25 = t;
      t = term_g_16;
      t = l_35(t);
      l_25 = t;
      t = (ATerm) ATmakeAppl(sym__4, k_25, p_14, l_25, term_m_17);
      t = symbol2abox_0_0(t);
      t = try_1_0(f_2, t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm o_25 = NULL,q_25 = NULL;
        t = term_g_16;
        t = j_35(t);
        o_25 = t;
        t = term_g_16;
        t = l_35(t);
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym__4, o_25, p_14, q_25, term_a_17);
        t = symbol2abox_0_0(t);
        t = try_1_0(g_2, t);
      }
    }
  return(t);
}
static ATerm h_6 (ATerm f_14, ATerm g_14, ATerm e_14, ATerm k_14, ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,m_27 = NULL,q_27 = NULL;
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    t = not_null(a_26);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, e_14, (ATerm) ATinsert(ATempty, k_14));
  t = conc_0_0(t);
  b_26 = t;
  t = f_14;
  if(match_cons(t, sym_iter_sep_2))
    {
      m_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
      {
        ATerm c_14 = NULL,p_4 = NULL;
        t = SSLgetAnnotations(f_14);
        c_14 = t;
        t = m_27;
        y_25 = t;
        t = q_27;
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, m_27, q_27);
        p_4 = t;
        t = SSLsetAnnotations(p_4, c_14);
      }
    }
  else
    {
      ATerm u_14 = NULL,s_4 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          m_27 = ATgetArgument(t, 0);
          q_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_14);
      u_14 = t;
      t = m_27;
      y_25 = t;
      t = q_27;
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_27, q_27);
      s_4 = t;
      t = SSLsetAnnotations(s_4, u_14);
    }
  t = (ATerm) ATmakeAppl(sym__2, f_14, b_26);
  t = get_pp_entry_0_0(t);
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = g_14;
  {
    static ATerm i_2 (ATerm t);
    static ATerm i_2 (ATerm t)
    {
      ATerm s_27 = NULL,y_27 = NULL;
      static ATerm j_2 (ATerm t);
      static ATerm q_2 (ATerm t);
      static ATerm r_2 (ATerm t);
      static ATerm s_2 (ATerm t);
      static ATerm j_2 (ATerm t)
      {
        t = y_25;
        return(t);
      }
      static ATerm q_2 (ATerm t)
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
        t = k_14;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          s_27 = ATgetArgument(t, 0);
          y_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_6(j_2, q_2, r_2, s_2, s_27, y_27, t);
      return(t);
    }
    t = nzip_1_0(i_2, t);
  }
  t = instantiate_sep_list_1_0(t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm n_17 = t;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,x_4 = NULL;
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
      x_4 = t;
      t = SSLsetAnnotations(x_4, b_42);
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
      ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,y_4 = NULL;
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
      y_4 = t;
      t = SSLsetAnnotations(y_4, e_42);
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
        ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,w_41 = NULL,x_41 = NULL;
        static ATerm w_2 (ATerm t);
        static ATerm w_2 (ATerm t)
        {
          static ATerm x_2 (ATerm t);
          static ATerm x_2 (ATerm t)
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm y_2 (ATerm t);
                static ATerm y_2 (ATerm t)
                {
                  t = not_null(q_41);
                  return(t);
                }
                t = Instantiate_1_0(y_2, t);
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
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
        x_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, c_41), x_41);
        t = get_pp_entry_0_0(t);
        p_41 = t;
        t = c_41;
        t = filter_1_0(u_2, t);
        r_41 = t;
        t = x_40;
        t = filter_1_0(v_2, t);
        w_41 = t;
        t = (ATerm) ATmakeAppl(sym__4, r_41, w_41, x_41, term_a_17);
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
            ATerm p_15 = NULL,r_15 = NULL,s_15 = NULL;
            static ATerm o_21 (ATerm t);
            static ATerm o_21 (ATerm t)
            {
              ATerm u_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
              if(match_cons(t, sym__4))
                {
                  h_16 = ATgetArgument(t, 0);
                  i_16 = ATgetArgument(t, 1);
                  n_16 = ATgetArgument(t, 2);
                  o_16 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = i_16;
              if(match_cons(t, sym_appl_2))
                {
                  j_16 = ATgetArgument(t, 0);
                  k_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_16;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_16 = ATgetFirst((ATermList) t);
                  m_16 = (ATerm) ATgetNext((ATermList) t);
                  t = m_16;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = j_16;
                      if(match_cons(t, sym_prod_3))
                        {
                          y_15 = ATgetArgument(t, 0);
                          c_16 = ATgetArgument(t, 1);
                          f_16 = ATgetArgument(t, 2);
                          t = c_16;
                          if(match_cons(t, sym_alt_2))
                            {
                              d_16 = ATgetArgument(t, 0);
                              e_16 = ATgetArgument(t, 1);
                              t = y_15;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  z_15 = ATgetFirst((ATermList) t);
                                  a_16 = (ATerm) ATgetNext((ATermList) t);
                                  t = a_16;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = h_16;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          u_15 = ATgetArgument(t, 0);
                                          x_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm t_17 = t;
                                            int u_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_15;
                                                if((u_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = d_16;
                                                if((u_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = e_16;
                                                if((x_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, u_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, u_15), u_15, f_16), k_16), n_16, o_16);
                                                t = o_21(t);
                                                LocalPopChoice(u_17);
                                              }
                                            else
                                              {
                                                t = t_17;
                                                {
                                                  ATerm v_17 = t;
                                                  int w_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_17 = NULL;
                                                      t = d_16;
                                                      if((u_15 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = e_16;
                                                      if((x_15 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym__2, o_16, term_a_17);
                                                      t = add_0_0(t);
                                                      f_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, x_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_15), x_15, f_16), k_16), n_16, f_17);
                                                      t = o_21(t);
                                                      LocalPopChoice(w_17);
                                                    }
                                                  else
                                                    {
                                                      t = v_17;
                                                      {
                                                        ATerm p_17 = NULL;
                                                        static ATerm z_2 (ATerm t);
                                                        static ATerm z_2 (ATerm t)
                                                        {
                                                          static ATerm a_3 (ATerm t);
                                                          static ATerm a_3 (ATerm t)
                                                          {
                                                            ATerm y_17 = t;
                                                            int z_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                static ATerm b_3 (ATerm t);
                                                                static ATerm b_3 (ATerm t)
                                                                {
                                                                  t = (ATerm) ATinsert(ATempty, not_null(r_15));
                                                                  return(t);
                                                                }
                                                                t = Instantiate_1_0(b_3, t);
                                                                LocalPopChoice(z_17);
                                                              }
                                                            else
                                                              {
                                                                t = y_17;
                                                                t = flat_list_0_0(t);
                                                              }
                                                            return(t);
                                                          }
                                                          t = try_1_0(a_3, t);
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), n_16);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((p_15 != NULL) && (p_15 != t)))
                                                          _fail(t);
                                                        else
                                                          p_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, h_16, l_16, n_16, term_a_17);
                                                        t = symbol2abox_0_0(t);
                                                        if(((r_15 != NULL) && (r_15 != t)))
                                                          _fail(t);
                                                        else
                                                          r_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, o_16, p_15);
                                                        t = index_0_0(t);
                                                        p_17 = t;
                                                        t = (ATerm) ATinsert(ATempty, p_17);
                                                        t = bottomup_1_0(z_2, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm x_17 = NULL;
                                          static ATerm c_3 (ATerm t);
                                          static ATerm c_3 (ATerm t)
                                          {
                                            static ATerm d_3 (ATerm t);
                                            static ATerm d_3 (ATerm t)
                                            {
                                              ATerm a_18 = t;
                                              int b_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  static ATerm e_3 (ATerm t);
                                                  static ATerm e_3 (ATerm t)
                                                  {
                                                    t = (ATerm) ATinsert(ATempty, not_null(r_15));
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(e_3, t);
                                                  LocalPopChoice(b_18);
                                                }
                                              else
                                                {
                                                  t = a_18;
                                                  t = flat_list_0_0(t);
                                                }
                                              return(t);
                                            }
                                            t = try_1_0(d_3, t);
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), n_16);
                                          t = get_pp_entry_0_0(t);
                                          if(((p_15 != NULL) && (p_15 != t)))
                                            _fail(t);
                                          else
                                            p_15 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, h_16, l_16, n_16, term_a_17);
                                          t = symbol2abox_0_0(t);
                                          if(((r_15 != NULL) && (r_15 != t)))
                                            _fail(t);
                                          else
                                            r_15 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, o_16, p_15);
                                          t = index_0_0(t);
                                          x_17 = t;
                                          t = (ATerm) ATinsert(ATempty, x_17);
                                          t = bottomup_1_0(c_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm g_18 = NULL;
                                      static ATerm f_3 (ATerm t);
                                      static ATerm f_3 (ATerm t)
                                      {
                                        static ATerm g_3 (ATerm t);
                                        static ATerm g_3 (ATerm t)
                                        {
                                          ATerm c_18 = t;
                                          int d_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm h_3 (ATerm t);
                                              static ATerm h_3 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, not_null(r_15));
                                                return(t);
                                              }
                                              t = Instantiate_1_0(h_3, t);
                                              LocalPopChoice(d_18);
                                            }
                                          else
                                            {
                                              t = c_18;
                                              t = flat_list_0_0(t);
                                            }
                                          return(t);
                                        }
                                        t = try_1_0(g_3, t);
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), n_16);
                                      t = get_pp_entry_0_0(t);
                                      if(((p_15 != NULL) && (p_15 != t)))
                                        _fail(t);
                                      else
                                        p_15 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, h_16, l_16, n_16, term_a_17);
                                      t = symbol2abox_0_0(t);
                                      if(((r_15 != NULL) && (r_15 != t)))
                                        _fail(t);
                                      else
                                        r_15 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, o_16, p_15);
                                      t = index_0_0(t);
                                      g_18 = t;
                                      t = (ATerm) ATinsert(ATempty, g_18);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm q_18 = NULL;
                                  static ATerm i_3 (ATerm t);
                                  static ATerm i_3 (ATerm t)
                                  {
                                    static ATerm j_3 (ATerm t);
                                    static ATerm j_3 (ATerm t)
                                    {
                                      ATerm e_18 = t;
                                      int f_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          static ATerm k_3 (ATerm t);
                                          static ATerm k_3 (ATerm t)
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(r_15));
                                            return(t);
                                          }
                                          t = Instantiate_1_0(k_3, t);
                                          LocalPopChoice(f_18);
                                        }
                                      else
                                        {
                                          t = e_18;
                                          t = flat_list_0_0(t);
                                        }
                                      return(t);
                                    }
                                    t = try_1_0(j_3, t);
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), n_16);
                                  t = get_pp_entry_0_0(t);
                                  if(((p_15 != NULL) && (p_15 != t)))
                                    _fail(t);
                                  else
                                    p_15 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, h_16, l_16, n_16, term_a_17);
                                  t = symbol2abox_0_0(t);
                                  if(((r_15 != NULL) && (r_15 != t)))
                                    _fail(t);
                                  else
                                    r_15 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, o_16, p_15);
                                  t = index_0_0(t);
                                  q_18 = t;
                                  t = (ATerm) ATinsert(ATempty, q_18);
                                  t = bottomup_1_0(i_3, t);
                                }
                            }
                          else
                            {
                              ATerm g_19 = NULL;
                              static ATerm l_3 (ATerm t);
                              static ATerm l_3 (ATerm t)
                              {
                                static ATerm m_3 (ATerm t);
                                static ATerm m_3 (ATerm t)
                                {
                                  ATerm h_18 = t;
                                  int i_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      static ATerm n_3 (ATerm t);
                                      static ATerm n_3 (ATerm t)
                                      {
                                        t = (ATerm) ATinsert(ATempty, not_null(r_15));
                                        return(t);
                                      }
                                      t = Instantiate_1_0(n_3, t);
                                      LocalPopChoice(i_18);
                                    }
                                  else
                                    {
                                      t = h_18;
                                      t = flat_list_0_0(t);
                                    }
                                  return(t);
                                }
                                t = try_1_0(m_3, t);
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), n_16);
                              t = get_pp_entry_0_0(t);
                              if(((p_15 != NULL) && (p_15 != t)))
                                _fail(t);
                              else
                                p_15 = t;
                              t = (ATerm) ATmakeAppl(sym__4, h_16, l_16, n_16, term_a_17);
                              t = symbol2abox_0_0(t);
                              if(((r_15 != NULL) && (r_15 != t)))
                                _fail(t);
                              else
                                r_15 = t;
                              t = (ATerm) ATmakeAppl(sym__2, o_16, p_15);
                              t = index_0_0(t);
                              g_19 = t;
                              t = (ATerm) ATinsert(ATempty, g_19);
                              t = bottomup_1_0(l_3, t);
                            }
                        }
                      else
                        {
                          ATerm r_19 = NULL;
                          static ATerm o_3 (ATerm t);
                          static ATerm o_3 (ATerm t)
                          {
                            static ATerm p_3 (ATerm t);
                            static ATerm p_3 (ATerm t)
                            {
                              ATerm j_18 = t;
                              int k_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  static ATerm q_3 (ATerm t);
                                  static ATerm q_3 (ATerm t)
                                  {
                                    t = (ATerm) ATinsert(ATempty, not_null(r_15));
                                    return(t);
                                  }
                                  t = Instantiate_1_0(q_3, t);
                                  LocalPopChoice(k_18);
                                }
                              else
                                {
                                  t = j_18;
                                  t = flat_list_0_0(t);
                                }
                              return(t);
                            }
                            t = try_1_0(p_3, t);
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), n_16);
                          t = get_pp_entry_0_0(t);
                          if(((p_15 != NULL) && (p_15 != t)))
                            _fail(t);
                          else
                            p_15 = t;
                          t = (ATerm) ATmakeAppl(sym__4, h_16, l_16, n_16, term_a_17);
                          t = symbol2abox_0_0(t);
                          if(((r_15 != NULL) && (r_15 != t)))
                            _fail(t);
                          else
                            r_15 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_16, p_15);
                          t = index_0_0(t);
                          r_19 = t;
                          t = (ATerm) ATinsert(ATempty, r_19);
                          t = bottomup_1_0(o_3, t);
                        }
                    }
                  else
                    {
                      t = j_16;
                      if(match_cons(t, sym_prod_3))
                        {
                          y_15 = ATgetArgument(t, 0);
                          c_16 = ATgetArgument(t, 1);
                          f_16 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = h_16;
                      if(match_cons(t, sym_alt_2))
                        {
                          u_15 = ATgetArgument(t, 0);
                          x_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_15;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          z_15 = ATgetFirst((ATermList) t);
                          a_16 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = a_16;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = c_16;
                      if(match_cons(t, sym_alt_2))
                        {
                          d_16 = ATgetArgument(t, 0);
                          e_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm l_18 = t;
                        int o_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = z_15;
                            if((u_15 != t))
                              {
                                _fail(t);
                              }
                            t = d_16;
                            if((u_15 != t))
                              {
                                _fail(t);
                              }
                            t = e_16;
                            if((x_15 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, u_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, u_15), u_15, f_16), k_16), n_16, o_16);
                            t = o_21(t);
                            LocalPopChoice(o_18);
                          }
                        else
                          {
                            t = l_18;
                            {
                              ATerm y_20 = NULL;
                              t = d_16;
                              if((u_15 != t))
                                {
                                  _fail(t);
                                }
                              t = e_16;
                              if((x_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym__2, o_16, term_a_17);
                              t = add_0_0(t);
                              y_20 = t;
                              t = (ATerm) ATmakeAppl(sym__4, x_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_15), x_15, f_16), k_16), n_16, y_20);
                              t = o_21(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = j_16;
                  if(match_cons(t, sym_prod_3))
                    {
                      y_15 = ATgetArgument(t, 0);
                      c_16 = ATgetArgument(t, 1);
                      f_16 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = h_16;
                  if(match_cons(t, sym_alt_2))
                    {
                      u_15 = ATgetArgument(t, 0);
                      x_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_15;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_15 = ATgetFirst((ATermList) t);
                      a_16 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = a_16;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_16;
                  if(match_cons(t, sym_alt_2))
                    {
                      d_16 = ATgetArgument(t, 0);
                      e_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_18 = t;
                    int w_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = z_15;
                        if((u_15 != t))
                          {
                            _fail(t);
                          }
                        t = d_16;
                        if((u_15 != t))
                          {
                            _fail(t);
                          }
                        t = e_16;
                        if((x_15 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, u_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, u_15), u_15, f_16), k_16), n_16, o_16);
                        t = o_21(t);
                        LocalPopChoice(w_18);
                      }
                    else
                      {
                        t = p_18;
                        {
                          ATerm n_21 = NULL;
                          t = d_16;
                          if((u_15 != t))
                            {
                              _fail(t);
                            }
                          t = e_16;
                          if((x_15 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym__2, o_16, term_a_17);
                          t = add_0_0(t);
                          n_21 = t;
                          t = (ATerm) ATmakeAppl(sym__4, x_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_15), x_15, f_16), k_16), n_16, n_21);
                          t = o_21(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, i_41));
            t = conc_0_0(t);
            s_15 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, c_41, o_40), d_41, s_15, term_a_17);
            t = o_21(t);
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
                t = h_6(p_42, d_41, h_41, i_41, t);
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
                    t = h_6(y_42, d_41, h_41, i_41, t);
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
                        t = f_6(n_43, d_41, h_41, i_41, t);
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
                            t = f_6(a_44, d_41, h_41, i_41, t);
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
                                    ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,x_22 = NULL,b_23 = NULL,c_23 = NULL;
                                    static ATerm r_3 (ATerm t);
                                    static ATerm r_3 (ATerm t)
                                    {
                                      static ATerm v_3 (ATerm t);
                                      static ATerm v_3 (ATerm t)
                                      {
                                        ATerm y_18 = t;
                                        int z_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm c_4 (ATerm t);
                                            static ATerm c_4 (ATerm t)
                                            {
                                              t = not_null(x_22);
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
                                      t = try_1_0(v_3, t);
                                      return(t);
                                    }
                                    t = q_40;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, i_41));
                                    t = conc_0_0(t);
                                    c_23 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, c_41), c_23);
                                    t = get_pp_entry_0_0(t);
                                    t_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, c_41, p_40, c_23, term_a_17);
                                    t = symbol2abox_0_0(t);
                                    u_22 = t;
                                    t = (ATerm) ATinsert(ATempty, u_22);
                                    b_23 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, t_22, (ATerm) ATinsert(ATempty, u_22));
                                    t = d_6(t_22, b_23, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        v_22 = ATgetArgument(t, 0);
                                        if(((x_22 != NULL) && (x_22 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          x_22 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = v_22;
                                    t = bottomup_1_0(r_3, t);
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
                              ATerm c_19 = t;
                              int e_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm f_19 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(e_19);
                                  {
                                    ATerm h_19 = t;
                                    int i_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = d_41;
                                        {
                                          ATerm j_19 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = is_string_0_0(t);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = j_19;
                                            }
                                        }
                                        t = d_41;
                                        {
                                          ATerm k_19 = t;
                                          int l_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  m_23 = ATgetArgument(t, 0);
                                                  q_23 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = m_23;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  n_23 = ATgetArgument(t, 0);
                                                  o_23 = ATgetArgument(t, 1);
                                                  p_23 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = d_41;
                                              t = q_6(n_23, o_23, p_23, q_23, t);
                                              LocalPopChoice(l_19);
                                            }
                                          else
                                            {
                                              t = k_19;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(i_19);
                                      }
                                    else
                                      {
                                        t = h_19;
                                        t = d_41;
                                        t = is_string_0_0(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, d_41);
                                      }
                                  }
                                }
                              else
                                {
                                  t = c_19;
                                  {
                                    ATerm m_19 = t;
                                    int q_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm t_19 = ATgetArgument(t, 0);
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
                                        t = m_19;
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
  ATerm b_45 = NULL,c_45 = NULL,f_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,o_45 = NULL;
  if(match_cons(t, sym__4))
    {
      b_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
      k_45 = ATgetArgument(t, 2);
      o_45 = ATgetArgument(t, 3);
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
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm z_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(y_19);
            t = c_45;
            {
              ATerm b_20 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm e_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_20);
                  {
                    ATerm f_20 = t;
                    int g_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, f_45, j_45, k_45, o_45);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(g_20);
                      }
                    else
                      {
                        t = f_20;
                        {
                          ATerm l_46 = NULL,m_46 = NULL,o_46 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, c_45, i_45, k_45, o_45);
                          t = symbol2abox_0_0(t);
                          l_46 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_45, term_a_17);
                          t = add_0_0(t);
                          o_46 = t;
                          t = (ATerm) ATmakeAppl(sym__4, f_45, j_45, k_45, o_46);
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
                    t = (ATerm) ATmakeAppl(sym__4, c_45, i_45, k_45, o_45);
                    t = symbol2abox_0_0(t);
                    u_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_45, term_a_17);
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
            t = x_19;
            {
              ATerm d_47 = NULL,e_47 = NULL,g_47 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, c_45, i_45, k_45, o_45);
              t = symbol2abox_0_0(t);
              d_47 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_45, term_a_17);
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
static ATerm i_6 (ATerm v_18, ATerm u_18, ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      n_47 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_47 = NULL;
            t = v_18;
            t = mk_key_0_0(t);
            q_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_i_20, q_47);
            t = table_get_0_0(t);
            t = m_47;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = m_47;
            t = r_6(n_47, o_47, t);
          }
      }
    }
  else
    {
      ATerm u_47 = NULL;
      t = v_18;
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
  t = term_l_20;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm z_35 (ATerm), ATerm t)
{
  static ATerm k_4 (ATerm t);
  static ATerm k_4 (ATerm t)
  {
    ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
    t = term_g_16;
    t = pass_verbose_0_0(t);
    g_48 = t;
    t = term_g_16;
    t = z_35(t);
    t = map_1_0(xtc_find_0_0, t);
    i_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_20, i_48);
    t = add_arg_flags_0_0(t);
    h_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(g_4, k_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_q_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_r_20;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_20);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  t = xtc_transform_2_0(n_4, pass_verbose_0_0, t);
  t = xtc_transform_2_0(o_4, pass_verbose_0_0, t);
  t = xtc_ast2abox_1_0(q_4, t);
  t = xtc_transform_2_0(r_4, pass_verbose_0_0, t);
  return(t);
}
static ATerm t_4 (ATerm t)
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
  t = trim_1_0(u_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
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
  t = term_v_20;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(t_4, t);
  t = say_1_0(v_4, t);
  t = debug_1_0(w_4, t);
  return(t);
}
static ATerm e_52 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  t = h_49;
  t = fetch_1_0(z_4, t);
  t = h_49;
  {
    ATerm x_20 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, f_49, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, g_49)), (ATerm) ATmakeAppl(sym_attrs_1, h_49));
  return(t);
}
static ATerm z_4 (ATerm t)
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
static ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
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
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
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
static ATerm e_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
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
static ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
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
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
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
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
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
                      ATerm c_21 = t;
                      int d_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm e_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(d_21);
                          {
                            ATerm f_21 = t;
                            int g_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(a_5, t);
                                t = r_49;
                                LocalPopChoice(g_21);
                              }
                            else
                              {
                                t = f_21;
                                {
                                  ATerm h_21 = t;
                                  int i_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_49;
                                      t = fetch_1_0(d_5, t);
                                      t = r_49;
                                      LocalPopChoice(i_21);
                                    }
                                  else
                                    {
                                      t = h_21;
                                      t = r_49;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = c_21;
                          {
                            ATerm j_21 = t;
                            int k_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(k_5, t);
                                t = r_49;
                                LocalPopChoice(k_21);
                              }
                            else
                              {
                                t = j_21;
                                {
                                  ATerm l_21 = t;
                                  int m_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_49;
                                      t = fetch_1_0(l_5, t);
                                      t = r_49;
                                      LocalPopChoice(m_21);
                                    }
                                  else
                                    {
                                      t = l_21;
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
                      ATerm p_21 = t;
                      int q_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(n_5, t);
                          t = r_49;
                          LocalPopChoice(q_21);
                        }
                      else
                        {
                          t = p_21;
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
                ATerm t_21 = t;
                int u_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(q_5, t);
                    t = r_49;
                    LocalPopChoice(u_21);
                  }
                else
                  {
                    t = t_21;
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
                          t = fetch_1_0(t_5, t);
                          t = r_49;
                        }
                    }
                  }
              }
          }
        else
          {
            t = z_20;
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
                      int c_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(v_5, t);
                          t = r_49;
                          LocalPopChoice(c_22);
                        }
                      else
                        {
                          t = z_21;
                          {
                            ATerm d_22 = t;
                            int e_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_49;
                                t = fetch_1_0(x_5, t);
                                t = r_49;
                                LocalPopChoice(e_22);
                              }
                            else
                              {
                                t = d_22;
                                {
                                  ATerm f_22 = t;
                                  int g_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = e_52(s_49, q_49, v_49, r_49, t);
                                      LocalPopChoice(g_22);
                                    }
                                  else
                                    {
                                      t = f_22;
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
                      ATerm h_22 = t;
                      int i_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(e_6, t);
                          t = r_49;
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
                                t = v_49;
                                t = fetch_1_0(j_6, t);
                                t = r_49;
                                LocalPopChoice(k_22);
                              }
                            else
                              {
                                t = j_22;
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
                  ATerm l_22 = t;
                  int m_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_49;
                      t = fetch_1_0(l_6, t);
                      t = r_49;
                      LocalPopChoice(m_22);
                    }
                  else
                    {
                      t = l_22;
                      {
                        ATerm p_22 = t;
                        int q_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_49;
                            t = fetch_1_0(m_6, t);
                            t = r_49;
                            LocalPopChoice(q_22);
                          }
                        else
                          {
                            t = p_22;
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
                ATerm r_22 = t;
                int s_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(o_6, t);
                    t = r_49;
                    LocalPopChoice(s_22);
                  }
                else
                  {
                    t = r_22;
                    {
                      ATerm w_22 = t;
                      int y_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          t = fetch_1_0(v_6, t);
                          t = r_49;
                          LocalPopChoice(y_22);
                        }
                      else
                        {
                          t = w_22;
                          {
                            ATerm z_22 = t;
                            int a_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_52(s_49, q_49, v_49, r_49, t);
                                LocalPopChoice(a_23);
                              }
                            else
                              {
                                t = z_22;
                                t = v_49;
                                t = fetch_1_0(w_6, t);
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
                ATerm d_23 = t;
                int e_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_49;
                    t = fetch_1_0(x_6, t);
                    t = r_49;
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
                          t = v_49;
                          t = fetch_1_0(y_6, t);
                          t = r_49;
                          LocalPopChoice(g_23);
                        }
                      else
                        {
                          t = f_23;
                          t = v_49;
                          t = fetch_1_0(a_7, t);
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
            ATerm h_23 = t;
            int i_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_49;
                t = fetch_1_0(b_7, t);
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
                      t = fetch_1_0(d_7, t);
                      t = r_49;
                      LocalPopChoice(k_23);
                    }
                  else
                    {
                      t = j_23;
                      t = v_49;
                      t = fetch_1_0(g_7, t);
                      t = r_49;
                    }
                }
              }
          }
        }
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm o_35 (ATerm), ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  t = number_nonterminals_0_0(t);
  i_52 = t;
  t = make_0_0(t);
  f_52 = t;
  t = i_52;
  {
    static ATerm h_7 (ATerm t);
    static ATerm h_7 (ATerm t)
    {
      static ATerm i_7 (ATerm t);
      static ATerm i_7 (ATerm t)
      {
        ATerm j_52 = NULL;
        t = term_g_16;
        t = o_35(t);
        j_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_52, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(i_7, t);
      return(t);
    }
    t = map_1_0(h_7, t);
  }
  t = concat_0_0(t);
  g_52 = t;
  t = term_g_16;
  t = o_35(t);
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
static ATerm p_7 (ATerm t)
{
  ATerm l_23 = t;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(r_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_23;
    }
  t = missing_constructor_warning_0_0(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_r_23;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_23)), q_53), (ATerm) ATinsert(ATinsert(ATempty, term_t_23), (ATerm) ATmakeAppl(sym_lit_1, p_53)));
        t = concat_0_0(t);
        w_53 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, w_53, r_53, n_53);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm i_24 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          p_53 = ATgetArgument(t, 0);
          {
            ATerm w_23 = ATgetArgument(t, 1);
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
            ATerm j_24 = NULL;
            t = r_53;
            if(match_cons(t, sym_attrs_1))
              {
                j_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_24;
            t = get_cnstr_name_0_0(t);
            i_24 = t;
            LocalPopChoice(z_23);
            {
              static ATerm o_7 (ATerm t);
              static ATerm o_7 (ATerm t)
              {
                t = i_24;
                return(t);
              }
              t = p_53;
              t = symbols2pp_entries_1_0(o_7, t);
            }
          }
        else
          {
            t = y_23;
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(b_24);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = a_24;
                  t = try_1_0(p_7, t);
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
  ATerm d_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = d_24;
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
static ATerm u_7 (ATerm t)
{
  ATerm k_56 = NULL;
  t = _2_0(_id, w_7, t);
  if(match_cons(t, sym_lit_1))
    {
      k_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_24, (ATerm) ATmakeAppl(sym_S_1, k_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          k_56 = ATgetArgument(t, 0);
          {
            ATerm l_24 = ATgetArgument(t, 1);
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
        ATerm p_24 = NULL,b_5 = NULL;
        t = SSLgetAnnotations(g_56);
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, h_56);
        b_5 = t;
        t = SSLsetAnnotations(b_5, p_24);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          h_56 = ATgetArgument(t, 0);
          {
            ATerm w_24 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(g_56);
            w_24 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, h_56);
            c_5 = t;
            t = SSLsetAnnotations(c_5, w_24);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              h_56 = ATgetArgument(t, 0);
              i_56 = ATgetArgument(t, 1);
              {
                ATerm e_25 = NULL,e_5 = NULL;
                t = SSLgetAnnotations(g_56);
                e_25 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, h_56, i_56);
                e_5 = t;
                t = SSLsetAnnotations(e_5, e_25);
              }
            }
          else
            {
              ATerm x_25 = NULL,f_5 = NULL;
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  h_56 = ATgetArgument(t, 0);
                  i_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_56);
              x_25 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, h_56, i_56);
              f_5 = t;
              t = SSLsetAnnotations(f_5, x_25);
            }
        }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,s_56 = NULL,g_5 = NULL;
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
  g_5 = t;
  t = SSLsetAnnotations(g_5, o_56);
  if(match_cons(t, sym_lit_1))
    {
      s_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_24, (ATerm) ATmakeAppl(sym_S_1, s_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          s_56 = ATgetArgument(t, 0);
          {
            ATerm m_24 = ATgetArgument(t, 1);
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
    ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,i_57 = NULL,h_5 = NULL;
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
    h_5 = t;
    t = SSLsetAnnotations(h_5, e_57);
    if(match_cons(t, sym_lit_1))
      {
        i_57 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_24, (ATerm) ATmakeAppl(sym_S_1, i_57));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            i_57 = ATgetArgument(t, 0);
            {
              ATerm n_24 = ATgetArgument(t, 1);
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
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_24, (ATerm) ATmakeAppl(sym_S_1, a_58));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            a_58 = ATgetArgument(t, 0);
            {
              ATerm o_24 = ATgetArgument(t, 1);
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
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_s_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_57)), not_null(c_57)));
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
        ATerm m_26 = NULL,i_5 = NULL;
        t = SSLgetAnnotations(x_57);
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, y_57);
        i_5 = t;
        t = SSLsetAnnotations(i_5, m_26);
      }
    }
  else
    {
      ATerm x_26 = NULL,j_5 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          y_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_57);
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, y_57);
      j_5 = t;
      t = SSLsetAnnotations(j_5, x_26);
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm f_58 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      f_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_24, (ATerm) ATmakeAppl(sym_S_1, f_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_58 = ATgetArgument(t, 0);
          {
            ATerm t_24 = ATgetArgument(t, 1);
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
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_55 = NULL;
      t = reverse_0_0(t);
      t = Cons_2_0(u_7, v_7, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_55 = ATgetFirst((ATermList) t);
          b_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_24 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, Nil_0_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_24;
          }
      }
      t = b_55;
      t = reverse_0_0(t);
      g_55 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, c_55), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, g_55)));
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
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
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_24, (ATerm) ATmakeAppl(sym_S_1, y_56));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        y_56 = ATgetArgument(t, 0);
                        {
                          ATerm a_25 = ATgetArgument(t, 1);
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
                ATerm b_25 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_25;
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
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            t = map_1_0(k_8, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm c_25 = t;
  if((PushChoice() == 0))
    {
      ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_5 = NULL;
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
      s_5 = t;
      t = SSLsetAnnotations(s_5, p_58);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_25;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm number_node_1_0 (ATerm s_35 (ATerm), ATerm t)
{
  static ATerm j_59 (ATerm t);
  static ATerm j_59 (ATerm t)
  {
    ATerm d_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(_id, Nil_0_0, t);
        t = (ATerm) ATempty;
        LocalPopChoice(f_25);
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
            ATerm g_25 = t;
            int h_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_59 = NULL,h_59 = NULL;
                t = e_59;
                t = s_35(t);
                t = (ATerm) ATmakeAppl(sym__2, c_59, term_a_17);
                t = add_0_0(t);
                h_59 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_59, f_59);
                t = j_59(t);
                g_59 = t;
                t = (ATerm) ATinsert(CheckATermList(g_59), (ATerm) ATmakeAppl(sym__2, c_59, e_59));
                LocalPopChoice(h_25);
              }
            else
              {
                t = g_25;
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
  t = try_1_0(o_8, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm k_59 = NULL;
  if(match_cons(t, sym_label_2))
    {
      ATerm j_25 = ATgetArgument(t, 0);
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
static ATerm q_8 (ATerm t)
{
  t = try_1_0(t_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  {
    ATerm m_25 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_25;
      }
  }
  t = (ATerm) ATinsert(ATempty, l_59);
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(q_8, t);
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
        ATerm p_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_59 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, o_59, p_59);
            t = flat_alt_0_0(t);
            w_59 = t;
            t = (ATerm) ATinsert(CheckATermList(w_59), r_59);
            LocalPopChoice(s_25);
          }
        else
          {
            t = p_25;
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
static ATerm z_8 (ATerm t)
{
  t = topdown_1_0(c_9, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = try_1_0(d_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_6 = NULL;
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
  t_6 = t;
  t = SSLsetAnnotations(t_6, q_61);
  t = term_t_25;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = _2_0(_id, f_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          y_61 = ATgetArgument(t, 0);
          z_61 = ATgetArgument(t, 1);
          {
            ATerm w_25 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, y_61, z_61);
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_iter_n_2))
        {
          y_61 = ATgetArgument(t, 0);
          {
            ATerm c_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, y_61);
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm p_35 (ATerm), ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  static ATerm f_63 (ATerm t);
  static ATerm f_63 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
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
          ATerm f_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lit_1))
                {
                  ATerm h_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(g_26);
              t = (ATerm) ATempty;
            }
          else
            {
              t = f_26;
              if(match_cons(t, sym__2))
                {
                  f_61 = ATgetArgument(t, 0);
                  g_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_61;
              {
                ATerm i_26 = t;
                int j_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm k_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_26);
                    t = (ATerm) ATempty;
                  }
                else
                  {
                    t = i_26;
                    {
                      ATerm l_26 = t;
                      int n_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm o_26 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(n_26);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = l_26;
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
                            t = (ATerm) ATmakeAppl(sym__2, term_p_26, o_61);
                            t = mkterm_0_0(t);
                            p_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_61, d_61), (ATerm) ATmakeAppl(sym__2, f_61, p_61));
                            t = f_63(t);
                            t = Cons_2_0(z_8, _id, t);
                          }
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(_id, e_9, t);
              t = f_63(t);
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              {
                static ATerm g_63 (ATerm d_62, ATerm e_62, ATerm f_62, ATerm g_62, ATerm h_62, ATerm t);
                static ATerm g_63 (ATerm d_62, ATerm e_62, ATerm f_62, ATerm g_62, ATerm h_62, ATerm t)
                {
                  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
                  t = SSL_explode_term(g_62);
                  if(match_cons(t, sym__2))
                    {
                      o_62 = ATgetArgument(t, 0);
                      p_62 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, e_62, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, f_62, o_62)));
                  t = conc_0_0(t);
                  k_62 = t;
                  t = p_62;
                  t = argument_list_0_0(t);
                  t = number_nonterminals_0_0(t);
                  q_62 = t;
                  t = make_0_0(t);
                  l_62 = t;
                  t = q_62;
                  {
                    static ATerm h_9 (ATerm t);
                    static ATerm h_9 (ATerm t)
                    {
                      ATerm s_62 = NULL;
                      s_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_62, k_62), s_62);
                      t = f_63(t);
                      return(t);
                    }
                    t = map_1_0(h_9, t);
                  }
                  t = concat_0_0(t);
                  m_62 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_62), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, d_62, k_62), l_62));
                  return(t);
                }
                ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
                u_62 = t;
                if(match_cons(t, sym__2))
                  {
                    v_62 = ATgetArgument(t, 0);
                    y_62 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_62;
                if(match_cons(t, sym__2))
                  {
                    w_62 = ATgetArgument(t, 0);
                    x_62 = ATgetArgument(t, 1);
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
                t = a_63;
                if(match_cons(t, sym_bracket_symbol_1))
                  {
                    t_62 = ATgetArgument(t, 0);
                    {
                      ATerm s_26 = t;
                      int t_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_62, x_62), (ATerm) ATmakeAppl(sym__2, z_62, t_62));
                          t = f_63(t);
                          LocalPopChoice(t_26);
                        }
                      else
                        {
                          t = s_26;
                          t = g_63(w_62, x_62, z_62, a_63, u_62, t);
                        }
                    }
                  }
                else
                  {
                    t = g_63(w_62, x_62, z_62, a_63, u_62, t);
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
    t = term_g_16;
    t = p_35(t);
    return(t);
  }
  t = split_2_0(u_8, _id, t);
  t = f_63(t);
  return(t);
}
static ATerm a_65 (ATerm p_63, ATerm q_63, ATerm r_63, ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,v_63 = NULL;
  t = r_63;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_63;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        {
          ATerm x_63 = NULL,y_63 = NULL,a_64 = NULL,c_64 = NULL;
          t = q_63;
          t = reverse_0_0(t);
          {
            static ATerm i_9 (ATerm t);
            static ATerm l_9 (ATerm t);
            static ATerm i_9 (ATerm t)
            {
              if(((t_63 != NULL) && (t_63 != t)))
                _fail(t);
              else
                t_63 = t;
              return(t);
            }
            static ATerm l_9 (ATerm t)
            {
              t = reverse_0_0(t);
              if(((s_63 != NULL) && (s_63 != t)))
                _fail(t);
              else
                s_63 = t;
              return(t);
            }
            t = Cons_2_0(i_9, l_9, t);
          }
          t = not_null(s_63);
          t = pp_table_get_0_0(t);
          t = Fst_0_0(t);
          if(match_cons(t, sym_Path_2))
            {
              c_64 = ATgetArgument(t, 0);
              x_63 = ATgetArgument(t, 1);
              t = x_63;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_63 = ATgetFirst((ATermList) t);
                  a_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_64;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, c_64, (ATerm) ATinsert(ATempty, y_63));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  c_64 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, c_64, (ATerm) ATempty);
            }
          v_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_63), p_63);
          {
            static ATerm m_9 (ATerm t);
            static ATerm m_9 (ATerm t)
            {
              t = v_63;
              return(t);
            }
            t = symbol2abox_1_0(m_9, t);
          }
          t = map_1_0(o_9, t);
          t = q_63;
          t = pp_table_get_0_0(t);
          t = Snd_0_0(t);
        }
      }
  }
  return(t);
}
static ATerm b_65 (ATerm i_64, ATerm j_64, ATerm k_64, ATerm l_64, ATerm m_64, ATerm t)
{
  t = m_64;
  {
    ATerm w_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(y_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATmakeAppl(sym_prod_3, i_64, j_64, k_64);
        t = generate_pp_entries_0_0(t);
        t = map_1_0(q_9, t);
        t = l_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
      }
  }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      g_64 = ATgetArgument(t, 0);
      h_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(g_64, h_64, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      r_64 = ATgetArgument(t, 0);
      s_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(r_64, s_64, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,z_64 = NULL;
  t_64 = t;
  if(match_cons(t, sym__2))
    {
      u_64 = ATgetArgument(t, 0);
      z_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_64;
  if(match_cons(t, sym_prod_3))
    {
      v_64 = ATgetArgument(t, 0);
      w_64 = ATgetArgument(t, 1);
      x_64 = ATgetArgument(t, 2);
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_65(u_64, z_64, t_64, t);
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            t = b_65(v_64, w_64, x_64, z_64, t_64, t);
          }
      }
    }
  else
    {
      t = a_65(u_64, z_64, t_64, t);
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(b_27) != AT_INT) || (ATgetInt((ATermInt) b_27) != 34)))
        _fail(t);
      {
        ATerm c_27 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(c_27) != AT_LIST) || !(ATisEmpty(c_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm c_65 = NULL;
  t = explode_string_0_0(t);
  c_65 = t;
  {
    ATerm d_27 = t;
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
        t = d_27;
      }
  }
  t = c_65;
  {
    ATerm e_27 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(r_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_27;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_27)), c_65), (ATerm) ATinsert(ATempty, term_f_27));
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm e_65 = NULL,i_65 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm i_27 = ATgetArgument(t, 0);
          ATerm k_27 = ATgetArgument(t, 1);
          ATerm l_27 = ATgetArgument(t, 2);
          e_65 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(h_27);
      {
        ATerm l_65 = NULL;
        t = e_65;
        {
          static ATerm t_9 (ATerm t);
          static ATerm t_9 (ATerm t)
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
          t = oncetd_1_0(t_9, t);
        }
        t = not_null(l_65);
      }
    }
  else
    {
      t = g_27;
      {
        ATerm n_65 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm o_27 = ATgetArgument(t, 0);
            ATerm p_27 = ATgetArgument(t, 1);
            i_65 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = i_65;
        {
          static ATerm u_9 (ATerm t);
          static ATerm u_9 (ATerm t)
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
          t = oncetd_1_0(u_9, t);
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
static ATerm x_9 (ATerm t)
{
  ATerm t_27 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_27;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm v_66 = NULL;
  v_66 = t;
  t = string_Hd_0_0(t);
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_upper_0_0(t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = is_lower_0_0(t);
      }
  }
  t = v_66;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm u_66 = NULL;
  t = filter_1_0(x_9, t);
  t = Cons_2_0(z_9, _id, t);
  t = separate_by_1_0(a_10, t);
  t = concat_strings_0_0(t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_66, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_28), term_m_28), term_l_28), term_k_28), term_j_28), term_i_28), term_f_28), term_e_28), term_c_28), term_b_28), term_a_28), term_z_27), term_x_27));
  {
    ATerm p_28 = t;
    if((PushChoice() == 0))
      {
        t = is_subterm_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_28;
      }
  }
  t = u_66;
  t = escape_0_0(t);
  t = quote_0_0(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_28);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_28);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_28);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm h_10 (ATerm t)
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
              t = (ATerm) ATinsert(ATempty, term_u_28);
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
                      t = at_end_1_0(b_10, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          z_66 = ATgetArgument(t, 0);
                          t = z_66;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(e_10, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              z_66 = ATgetArgument(t, 0);
                              t = z_66;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(f_10, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  z_66 = ATgetArgument(t, 0);
                                  a_67 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_67 = NULL,m_67 = NULL;
                                    t = z_66;
                                    t = Sym2Strs_0_0(t);
                                    l_67 = t;
                                    t = a_67;
                                    t = Sym2Strs_0_0(t);
                                    m_67 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_28)), m_67), l_67);
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
                                        ATerm p_67 = NULL,q_67 = NULL;
                                        t = z_66;
                                        t = Sym2Strs_0_0(t);
                                        p_67 = t;
                                        t = a_67;
                                        t = Sym2Strs_0_0(t);
                                        q_67 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_28)), q_67), p_67);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm v_28 = t;
                                      int x_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              z_66 = ATgetArgument(t, 0);
                                              {
                                                ATerm z_28 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(x_28);
                                          {
                                            ATerm s_67 = NULL;
                                            t = z_66;
                                            t = Sym2Strs_0_0(t);
                                            s_67 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_29)), s_67);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = v_28;
                                          {
                                            ATerm b_29 = t;
                                            int c_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    z_66 = ATgetArgument(t, 0);
                                                    a_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(c_29);
                                                {
                                                  ATerm w_67 = NULL,x_67 = NULL;
                                                  t = z_66;
                                                  t = Sym2Strs_0_0(t);
                                                  w_67 = t;
                                                  t = a_67;
                                                  t = Sym2Strs_0_0(t);
                                                  x_67 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_29)), x_67), w_67);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = b_29;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    z_66 = ATgetArgument(t, 0);
                                                    a_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm a_68 = NULL,b_68 = NULL;
                                                      t = z_66;
                                                      t = Sym2Strs_0_0(t);
                                                      a_68 = t;
                                                      t = a_67;
                                                      t = Sym2Strs_0_0(t);
                                                      b_68 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_68), (ATerm) ATinsert(ATempty, term_f_29)), a_68);
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
                                                          ATerm e_68 = NULL,f_68 = NULL;
                                                          t = z_66;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          e_68 = t;
                                                          t = a_67;
                                                          t = Sym2Strs_0_0(t);
                                                          f_68 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_68), (ATerm) ATinsert(ATempty, term_h_29)), e_68);
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
                                                              ATerm i_68 = NULL,j_68 = NULL;
                                                              t = z_66;
                                                              t = Sym2Strs_0_0(t);
                                                              i_68 = t;
                                                              t = a_67;
                                                              t = Sym2Strs_0_0(t);
                                                              j_68 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_68), (ATerm) ATinsert(ATempty, term_i_29)), i_68);
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
                                                                      ATerm m_68 = NULL;
                                                                      t = z_66;
                                                                      t = try_1_0(g_10, t);
                                                                      m_68 = t;
                                                                      t = (ATerm) ATinsert(ATempty, m_68);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm j_29 = t;
                                                                    int k_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            z_66 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm l_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(k_29);
                                                                        {
                                                                          ATerm o_68 = NULL;
                                                                          t = z_66;
                                                                          t = try_1_0(h_10, t);
                                                                          o_68 = t;
                                                                          t = (ATerm) ATinsert(ATempty, o_68);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_29;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_m_29);
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm i_10 (ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(i_10, t);
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
  ATerm n_27 = NULL;
  t = explode_string_0_0(t);
  n_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_27)), n_27), (ATerm) ATinsert(ATempty, term_f_27));
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_29 = ATgetFirst((ATermList) t);
      if(((ATgetType(r_29) != AT_INT) || (ATgetInt((ATermInt) r_29) != 34)))
        _fail(t);
      {
        ATerm s_29 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(s_29) != AT_LIST) || !(ATisEmpty(s_29))))
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
  ATerm h_72 = NULL;
  t = explode_string_0_0(t);
  h_72 = t;
  t = Hd_0_0(t);
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = h_72;
  t = Tl_0_0(t);
  t = at_last_1_0(j_10, t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm b_69 (ATerm x_68, ATerm t)
{
  t = x_68;
  t = explode_string_0_0(t);
  {
    ATerm t_29 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(q_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_29;
      }
  }
  t = term_u_29;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_num_0_0(t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_upper_0_0(t);
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_lower_0_0(t);
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_g_16;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm a_69 = NULL;
  a_69 = t;
  if(match_string(t, "|="))
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_69(a_69, t);
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          t = term_d_30;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_69(a_69, t);
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              t = term_g_30;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm h_30 = t;
              int i_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_69(a_69, t);
                  LocalPopChoice(i_30);
                }
              else
                {
                  t = h_30;
                  t = term_k_30;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm l_30 = t;
                  int m_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_69(a_69, t);
                      LocalPopChoice(m_30);
                    }
                  else
                    {
                      t = l_30;
                      t = term_n_30;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm o_30 = t;
                      int p_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_69(a_69, t);
                          LocalPopChoice(p_30);
                        }
                      else
                        {
                          t = o_30;
                          t = term_q_30;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm r_30 = t;
                          int s_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = b_69(a_69, t);
                              LocalPopChoice(s_30);
                            }
                          else
                            {
                              t = r_30;
                              t = term_t_30;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm u_30 = t;
                              int w_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = b_69(a_69, t);
                                  LocalPopChoice(w_30);
                                }
                              else
                                {
                                  t = u_30;
                                  t = term_x_30;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm y_30 = t;
                                  int z_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = b_69(a_69, t);
                                      LocalPopChoice(z_30);
                                    }
                                  else
                                    {
                                      t = y_30;
                                      t = term_a_31;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm b_31 = t;
                                      int c_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = b_69(a_69, t);
                                          LocalPopChoice(c_31);
                                        }
                                      else
                                        {
                                          t = b_31;
                                          t = term_d_31;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm e_31 = t;
                                          int f_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = b_69(a_69, t);
                                              LocalPopChoice(f_31);
                                            }
                                          else
                                            {
                                              t = e_31;
                                              t = term_g_31;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm h_31 = t;
                                              int i_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = b_69(a_69, t);
                                                  LocalPopChoice(i_31);
                                                }
                                              else
                                                {
                                                  t = h_31;
                                                  t = term_j_31;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm k_31 = t;
                                                  int l_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = b_69(a_69, t);
                                                      LocalPopChoice(l_31);
                                                    }
                                                  else
                                                    {
                                                      t = k_31;
                                                      t = term_n_31;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm o_31 = t;
                                                      int p_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = b_69(a_69, t);
                                                          LocalPopChoice(p_31);
                                                        }
                                                      else
                                                        {
                                                          t = o_31;
                                                          t = term_q_31;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm r_31 = t;
                                                          int s_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = b_69(a_69, t);
                                                              LocalPopChoice(s_31);
                                                            }
                                                          else
                                                            {
                                                              t = r_31;
                                                              t = term_i_29;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm t_31 = t;
                                                              int u_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = b_69(a_69, t);
                                                                  LocalPopChoice(u_31);
                                                                }
                                                              else
                                                                {
                                                                  t = t_31;
                                                                  t = term_v_31;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm x_31 = t;
                                                                  int y_31 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = b_69(a_69, t);
                                                                      LocalPopChoice(y_31);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = x_31;
                                                                      t = term_v_31;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm z_31 = t;
                                                                      int a_32 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = b_69(a_69, t);
                                                                          LocalPopChoice(a_32);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_31;
                                                                          t = term_b_32;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm c_32 = t;
                                                                          int d_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = b_69(a_69, t);
                                                                              LocalPopChoice(d_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_32;
                                                                              t = term_f_32;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm g_32 = t;
                                                                              int h_32 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = b_69(a_69, t);
                                                                                  LocalPopChoice(h_32);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = g_32;
                                                                                  t = term_i_32;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm j_32 = t;
                                                                                  int k_32 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = b_69(a_69, t);
                                                                                      LocalPopChoice(k_32);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_32;
                                                                                      t = term_l_32;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm m_32 = t;
                                                                                      int n_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = b_69(a_69, t);
                                                                                          LocalPopChoice(n_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_32;
                                                                                          t = term_o_32;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm p_32 = t;
                                                                                          int q_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = b_69(a_69, t);
                                                                                              LocalPopChoice(q_32);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = p_32;
                                                                                              t = term_s_32;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm t_32 = t;
                                                                                              int u_32 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = b_69(a_69, t);
                                                                                                  LocalPopChoice(u_32);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = t_32;
                                                                                                  t = term_v_32;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm w_32 = t;
                                                                                                  int x_32 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = b_69(a_69, t);
                                                                                                      LocalPopChoice(x_32);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = w_32;
                                                                                                      t = term_y_32;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm z_32 = t;
                                                                                                      int b_33 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = b_69(a_69, t);
                                                                                                          LocalPopChoice(b_33);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = z_32;
                                                                                                          t = term_c_33;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm e_33 = t;
                                                                                                          int f_33 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = b_69(a_69, t);
                                                                                                              LocalPopChoice(f_33);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = e_33;
                                                                                                              t = term_g_33;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm h_33 = t;
                                                                                                              int i_33 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = b_69(a_69, t);
                                                                                                                  LocalPopChoice(i_33);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = h_33;
                                                                                                                  t = term_j_33;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm k_33 = t;
                                                                                                                  int l_33 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = b_69(a_69, t);
                                                                                                                      LocalPopChoice(l_33);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = k_33;
                                                                                                                      t = term_m_33;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm n_33 = t;
                                                                                                                      int o_33 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = b_69(a_69, t);
                                                                                                                          LocalPopChoice(o_33);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = n_33;
                                                                                                                          t = term_f_29;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm p_33 = t;
                                                                                                                          int q_33 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = b_69(a_69, t);
                                                                                                                              LocalPopChoice(q_33);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_33;
                                                                                                                              t = term_r_33;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm s_33 = t;
                                                                                                                              int t_33 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = b_69(a_69, t);
                                                                                                                                  LocalPopChoice(t_33);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = s_33;
                                                                                                                                  t = term_u_33;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm v_33 = t;
                                                                                                                                  int w_33 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = b_69(a_69, t);
                                                                                                                                      LocalPopChoice(w_33);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = v_33;
                                                                                                                                      t = term_x_33;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm y_33 = t;
                                                                                                                                      int z_33 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = b_69(a_69, t);
                                                                                                                                          LocalPopChoice(z_33);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = y_33;
                                                                                                                                          t = term_b_34;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm c_34 = t;
                                                                                                                                          int d_34 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = b_69(a_69, t);
                                                                                                                                              LocalPopChoice(d_34);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = c_34;
                                                                                                                                              t = term_e_34;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm f_34 = t;
                                                                                                                                              int g_34 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = b_69(a_69, t);
                                                                                                                                                  LocalPopChoice(g_34);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = f_34;
                                                                                                                                                  t = term_h_34;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm i_34 = t;
                                                                                                                                                  int j_34 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = b_69(a_69, t);
                                                                                                                                                      LocalPopChoice(j_34);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = i_34;
                                                                                                                                                      t = term_k_34;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm l_34 = t;
                                                                                                                                                      int m_34 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = b_69(a_69, t);
                                                                                                                                                          LocalPopChoice(m_34);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = l_34;
                                                                                                                                                          t = term_n_34;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm o_34 = t;
                                                                                                                                                          int p_34 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = b_69(a_69, t);
                                                                                                                                                              LocalPopChoice(p_34);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = o_34;
                                                                                                                                                              t = term_q_34;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = b_69(a_69, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_69 = ATgetFirst((ATermList) t);
      m_69 = (ATerm) ATgetNext((ATermList) t);
      t = m_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_69 = ATgetFirst((ATermList) t);
          k_69 = (ATerm) ATgetNext((ATermList) t);
          t = j_69;
          if(match_int(t, 34))
            {
              t = l_69;
              if(match_int(t, 92))
                {
                  ATerm r_34 = t;
                  int s_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_69 = NULL;
                      t = k_69;
                      t = De_Escape_0_0(t);
                      p_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_69), term_f_27);
                      LocalPopChoice(s_34);
                    }
                  else
                    {
                      t = r_34;
                      {
                        ATerm s_69 = NULL;
                        t = m_69;
                        t = De_Escape_0_0(t);
                        s_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(s_69), l_69);
                      }
                    }
                }
              else
                {
                  ATerm v_69 = NULL;
                  t = m_69;
                  t = De_Escape_0_0(t);
                  v_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_69), l_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = l_69;
                  if(match_int(t, 92))
                    {
                      ATerm t_34 = t;
                      int u_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_69 = NULL;
                          t = k_69;
                          t = De_Escape_0_0(t);
                          x_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(x_69), term_v_34);
                          LocalPopChoice(u_34);
                        }
                      else
                        {
                          t = t_34;
                          {
                            ATerm a_70 = NULL;
                            t = m_69;
                            t = De_Escape_0_0(t);
                            a_70 = t;
                            t = (ATerm) ATinsert(CheckATermList(a_70), l_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm d_70 = NULL;
                      t = m_69;
                      t = De_Escape_0_0(t);
                      d_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(d_70), l_69);
                    }
                }
              else
                {
                  ATerm h_70 = NULL;
                  t = m_69;
                  t = De_Escape_0_0(t);
                  h_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_70), l_69);
                }
            }
        }
      else
        {
          ATerm k_70 = NULL;
          t = m_69;
          t = De_Escape_0_0(t);
          k_70 = t;
          t = (ATerm) ATinsert(CheckATermList(k_70), l_69);
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
                  ATerm w_34 = t;
                  int x_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_70 = NULL;
                      t = t_70;
                      t = De_Escape_0_0(t);
                      y_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_70), term_f_27);
                      LocalPopChoice(x_34);
                    }
                  else
                    {
                      t = w_34;
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
                      ATerm y_34 = t;
                      int a_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_71 = NULL;
                          t = t_70;
                          t = De_Escape_0_0(t);
                          g_71 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_71), term_v_34);
                          LocalPopChoice(a_35);
                        }
                      else
                        {
                          t = y_34;
                          {
                            ATerm j_71 = NULL;
                            t = v_70;
                            t = De_Escape_0_0(t);
                            j_71 = t;
                            t = (ATerm) ATinsert(CheckATermList(j_71), u_70);
                          }
                        }
                    }
                  else
                    {
                      ATerm m_71 = NULL;
                      t = v_70;
                      t = De_Escape_0_0(t);
                      m_71 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_71), u_70);
                    }
                }
              else
                {
                  ATerm p_71 = NULL;
                  t = v_70;
                  t = De_Escape_0_0(t);
                  p_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_71), u_70);
                }
            }
        }
      else
        {
          ATerm s_71 = NULL;
          t = v_70;
          t = De_Escape_0_0(t);
          s_71 = t;
          t = (ATerm) ATinsert(CheckATermList(s_71), u_70);
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
ATerm list_ana_1_0 (ATerm o_37 (ATerm), ATerm t)
{
  static ATerm z_71 (ATerm t);
  static ATerm z_71 (ATerm t)
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_71 = NULL;
        t = o_37(t);
        u_71 = t;
        t = (ATerm) ATinsert(ATempty, u_71);
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_71 = NULL,j_27 = NULL;
              y_71 = t;
              t = SSL_explode_term(y_71);
              if(match_cons(t, sym__2))
                {
                  ATerm f_35 = ATgetArgument(t, 0);
                  j_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_27;
              t = filter_1_0(z_71, t);
              t = concat_0_0(t);
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = z_71(t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm d_72 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      d_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_72;
  t = try_1_0(u_10, t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  t = list_ana_1_0(r_10, t);
  t = separate_by_1_0(v_10, t);
  t = concat_strings_0_0(t);
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
      }
  }
  return(t);
}
static ATerm g_73 (ATerm l_72, ATerm m_72, ATerm n_72, ATerm t)
{
  ATerm r_72 = NULL;
  t = n_72;
  {
    ATerm n_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_72;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        r_72 = t;
        LocalPopChoice(q_35);
      }
    else
      {
        t = n_35;
        {
          ATerm r_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_72 = NULL,u_72 = NULL;
              t = (ATerm) ATinsert(ATempty, m_72);
              t = syms2strs_0_0(t);
              t_72 = t;
              t = l_72;
              t = filter_1_0(lit2str_0_0, t);
              u_72 = t;
              t = filter_1_0(w_10, t);
              t = Hd_0_0(t);
              t = (ATerm) ATmakeAppl(sym__2, t_72, u_72);
              t = conc_0_0(t);
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
                    t = l_72;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    r_72 = t;
                    LocalPopChoice(v_35);
                  }
                else
                  {
                    t = u_35;
                    {
                      ATerm v_72 = NULL,w_72 = NULL;
                      t = (ATerm) ATinsert(ATempty, m_72);
                      t = syms2strs_0_0(t);
                      v_72 = t;
                      t = term_g_16;
                      t = new_0_0(t);
                      w_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_72, (ATerm) ATinsert(ATinsert(ATempty, w_72), term_w_35));
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
static ATerm w_10 (ATerm t)
{
  ATerm x_35 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_35;
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm d_73 = NULL;
  d_73 = t;
  {
    ATerm y_35 = t;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_35;
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
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            z_72 = ATgetArgument(t, 0);
            {
              ATerm c_36 = ATgetArgument(t, 1);
            }
            {
              ATerm d_36 = ATgetArgument(t, 2);
            }
            {
              ATerm e_36 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_36);
        t = z_72;
        t = try_1_0(x_10, t);
      }
    else
      {
        t = a_36;
        if(match_cons(t, sym_prod_3))
          {
            z_72 = ATgetArgument(t, 0);
            a_73 = ATgetArgument(t, 1);
            {
              ATerm f_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_72;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm g_36 = t;
            int h_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_73(z_72, a_73, y_72, t);
                LocalPopChoice(h_36);
              }
            else
              {
                t = g_36;
                {
                  ATerm f_73 = NULL;
                  t = (ATerm) ATinsert(ATempty, a_73);
                  t = syms2strs_0_0(t);
                  f_73 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_73, (ATerm) ATinsert(ATempty, term_i_36));
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
        ATerm r_27 = NULL,k_7 = NULL;
        t = SSLgetAnnotations(l_75);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, m_75);
        k_7 = t;
        t = SSLsetAnnotations(k_7, r_27);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          m_75 = ATgetArgument(t, 0);
          n_75 = ATgetArgument(t, 1);
          {
            ATerm d_28 = NULL,g_28 = NULL,h_28 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(l_75);
            d_28 = t;
            t = m_75;
            t = syntaxless_sort_0_0(t);
            g_28 = t;
            t = n_75;
            t = syntaxless_sort_0_0(t);
            h_28 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, g_28, h_28);
            l_7 = t;
            t = SSLsetAnnotations(l_7, d_28);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              m_75 = ATgetArgument(t, 0);
              {
                ATerm o_28 = NULL,q_28 = NULL,m_7 = NULL;
                t = SSLgetAnnotations(l_75);
                o_28 = t;
                t = m_75;
                t = syntaxless_sort_0_0(t);
                q_28 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, q_28);
                m_7 = t;
                t = SSLsetAnnotations(m_7, o_28);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  m_75 = ATgetArgument(t, 0);
                  {
                    ATerm w_28 = NULL,y_28 = NULL,n_7 = NULL;
                    t = SSLgetAnnotations(l_75);
                    w_28 = t;
                    t = m_75;
                    t = syntaxless_sort_0_0(t);
                    y_28 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, y_28);
                    n_7 = t;
                    t = SSLsetAnnotations(n_7, w_28);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      m_75 = ATgetArgument(t, 0);
                      {
                        ATerm e_29 = NULL,g_29 = NULL,q_7 = NULL;
                        t = SSLgetAnnotations(l_75);
                        e_29 = t;
                        t = m_75;
                        t = syntaxless_sort_0_0(t);
                        g_29 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, g_29);
                        q_7 = t;
                        t = SSLsetAnnotations(q_7, e_29);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          m_75 = ATgetArgument(t, 0);
                          n_75 = ATgetArgument(t, 1);
                          {
                            ATerm n_29 = NULL,q_29 = NULL,s_7 = NULL;
                            t = SSLgetAnnotations(l_75);
                            n_29 = t;
                            t = m_75;
                            t = syntaxless_sort_0_0(t);
                            q_29 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_29, n_75);
                            s_7 = t;
                            t = SSLsetAnnotations(s_7, n_29);
                          }
                        }
                      else
                        {
                          ATerm j_30 = NULL,v_30 = NULL,t_7 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              m_75 = ATgetArgument(t, 0);
                              n_75 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(l_75);
                          j_30 = t;
                          t = m_75;
                          t = syntaxless_sort_0_0(t);
                          v_30 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, v_30, n_75);
                          t_7 = t;
                          t = SSLsetAnnotations(t_7, j_30);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_j_36;
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,n_8 = NULL;
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
  n_8 = t;
  t = SSLsetAnnotations(n_8, w_75);
  b_76 = t;
  {
    ATerm k_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = has_option_1_0(z_10, t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = k_36;
        t = term_n_36;
        t = get_config_0_0(t);
      }
  }
  t = b_76;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm e_76 = NULL,i_76 = NULL;
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm r_36 = ATgetArgument(t, 0);
          ATerm t_36 = ATgetArgument(t, 1);
          ATerm u_36 = ATgetArgument(t, 2);
          e_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(p_36);
      t = e_76;
      t = oncetd_1_0(a_11, t);
      t = term_g_16;
    }
  else
    {
      t = o_36;
      if(match_cons(t, sym_prod_3))
        {
          ATerm v_36 = ATgetArgument(t, 0);
          ATerm x_36 = ATgetArgument(t, 1);
          i_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_76;
      t = oncetd_1_0(b_11, t);
      t = term_g_16;
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm m_76 = NULL,q_76 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm b_37 = ATgetArgument(t, 0);
          ATerm c_37 = ATgetArgument(t, 1);
          ATerm e_37 = ATgetArgument(t, 2);
          m_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(a_37);
      t = m_76;
      t = oncetd_1_0(c_11, t);
      t = term_g_16;
    }
  else
    {
      t = z_36;
      if(match_cons(t, sym_prod_3))
        {
          ATerm g_37 = ATgetArgument(t, 0);
          ATerm h_37 = ATgetArgument(t, 1);
          q_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_76;
      t = oncetd_1_0(h_11, t);
      t = term_g_16;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm x_76 = NULL;
  x_76 = t;
  {
    ATerm i_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_31 = NULL;
        t = x_76;
        {
          ATerm l_37 = t;
          if((PushChoice() == 0))
            {
              ATerm m_37 = t;
              int n_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  LocalPopChoice(n_37);
                }
              else
                {
                  t = m_37;
                  {
                    ATerm p_37 = t;
                    int q_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        LocalPopChoice(q_37);
                      }
                    else
                      {
                        t = p_37;
                        {
                          ATerm r_37 = t;
                          int s_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(s_37);
                            }
                          else
                            {
                              t = r_37;
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
              t = l_37;
            }
        }
        t = x_76;
        t = mk_constr_0_0(t);
        m_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_76, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, m_31))));
        t = add_attributes_0_0(t);
        LocalPopChoice(k_37);
      }
    else
      {
        t = i_37;
        {
          ATerm z_76 = NULL;
          static ATerm i_11 (ATerm t);
          static ATerm i_11 (ATerm t)
          {
            ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,p_8 = NULL;
            c_77 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm t_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_77);
            a_77 = t;
            t = not_null(z_76);
            t = uq2q_0_0(t);
            b_77 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, b_77);
            p_8 = t;
            t = SSLsetAnnotations(p_8, a_77);
            return(t);
          }
          t = x_76;
          t = get_constr_0_0(t);
          if(((z_76 != NULL) && (z_76 != t)))
            _fail(t);
          else
            z_76 = t;
          t = x_76;
          t = oncetd_1_0(i_11, t);
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm f_11, ATerm g_11, ATerm e_11, ATerm d_11, ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL;
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm j_11 (ATerm t);
      static ATerm j_11 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((e_77 != NULL) && (e_77 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              e_77 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = e_11;
      t = oncetd_1_0(j_11, t);
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,s_8 = NULL,r_8 = NULL;
            t = g_11;
            if(match_cons(t, sym_sort_1))
              {
                n_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_11);
            m_77 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, n_77);
            r_8 = t;
            t = SSLsetAnnotations(r_8, m_77);
            t = (ATerm) ATmakeAppl(sym_prod_3, f_11, g_11, e_11);
            t = prodcons_0_0(t);
            l_77 = t;
            if(match_cons(t, sym_prod_3))
              {
                h_77 = ATgetArgument(t, 0);
                i_77 = ATgetArgument(t, 1);
                j_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_77);
            g_77 = t;
            t = j_77;
            {
              static ATerm l_11 (ATerm t);
              static ATerm l_11 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((e_77 != NULL) && (e_77 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(l_11, t);
            }
            k_77 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, h_77, i_77, k_77);
            s_8 = t;
            t = SSLsetAnnotations(s_8, g_77);
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            t = term_y_37;
            e_77 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, f_11, g_11, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(e_77))))), (ATerm) ATinsert(ATempty, not_null(e_77)));
  t = get_pp_entry_0_0(t);
  f_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_77), f_77);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm z_37 = t;
  if((PushChoice() == 0))
    {
      ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,v_8 = NULL;
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
      v_8 = t;
      t = SSLsetAnnotations(v_8, v_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_37;
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm a_38 = t;
  if((PushChoice() == 0))
    {
      ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL,c_12 = NULL;
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
      c_12 = t;
      t = SSLsetAnnotations(c_12, y_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_38;
    }
  return(t);
}
static ATerm q_6 (ATerm m_10, ATerm k_10, ATerm l_10, ATerm n_10, ATerm t)
{
  ATerm o_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
  static ATerm o_11 (ATerm t);
  static ATerm o_11 (ATerm t)
  {
    static ATerm p_11 (ATerm t);
    static ATerm p_11 (ATerm t)
    {
      ATerm b_38 = t;
      int c_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_11 (ATerm t);
          static ATerm q_11 (ATerm t)
          {
            t = not_null(s_77);
            return(t);
          }
          t = Instantiate_1_0(q_11, t);
          LocalPopChoice(c_38);
        }
      else
        {
          t = b_38;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(p_11, t);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, m_10, k_10, l_10), n_10);
  t = p_6(m_10, k_10, l_10, n_10, t);
  if(match_cons(t, sym__2))
    {
      o_77 = ATgetArgument(t, 0);
      r_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10;
  t = filter_1_0(m_11, t);
  t_77 = t;
  t = n_10;
  t = filter_1_0(n_11, t);
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym__4, t_77, u_77, (ATerm)ATinsert(ATempty, o_77), term_a_17);
  t = seq2abox_0_0(t);
  if(((s_77 != NULL) && (s_77 != t)))
    _fail(t);
  else
    s_77 = t;
  t = r_77;
  t = bottomup_1_0(o_11, t);
  return(t);
}
static ATerm r_11 (ATerm t)
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_78), term_e_38), p_78), term_d_38);
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
      t = map_1_0(r_11, t);
      t = concat_0_0(t);
      m_78 = t;
      t = (ATerm) ATinsert(CheckATermList(m_78), d_78);
      t = concat_strings_0_0(t);
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm c_79 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      c_79 = ATgetArgument(t, 0);
      {
        ATerm f_38 = ATgetArgument(t, 1);
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
      t = map_1_0(s_11, t);
      b_79 = t;
      t = (ATerm) ATinsert(CheckATermList(b_79), s_78);
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = debug_1_0(v_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm r_6 (ATerm s_18, ATerm t_18, ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  t = s_18;
  t = mk_key_0_0(t);
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_20, e_79, (ATerm) ATmakeAppl(sym__2, s_18, t_18));
  t = table_put_0_0(t);
  t = s_18;
  t = path_to_string_0_0(t);
  d_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_79, t_18);
  t = if_verbose1_1_0(u_11, t);
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
        ATerm w_31 = NULL,e_32 = NULL,g_12 = NULL;
        t = SSLgetAnnotations(v_80);
        w_31 = t;
        t = w_80;
        t = string_to_int_0_0(t);
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, e_32);
        g_12 = t;
        t = SSLsetAnnotations(g_12, w_31);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          w_80 = ATgetArgument(t, 0);
          x_80 = ATgetArgument(t, 1);
          {
            ATerm r_32 = NULL,a_33 = NULL,d_33 = NULL,h_12 = NULL;
            t = SSLgetAnnotations(v_80);
            r_32 = t;
            t = w_80;
            t = string_to_int_0_0(t);
            a_33 = t;
            t = x_80;
            t = string_to_int_0_0(t);
            d_33 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, a_33, d_33);
            h_12 = t;
            t = SSLsetAnnotations(h_12, r_32);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              w_80 = ATgetArgument(t, 0);
              x_80 = ATgetArgument(t, 1);
              {
                ATerm a_34 = NULL,j_12 = NULL;
                t = SSLgetAnnotations(v_80);
                a_34 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, w_80, x_80);
                j_12 = t;
                t = SSLsetAnnotations(j_12, a_34);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  w_80 = ATgetArgument(t, 0);
                  {
                    ATerm z_34 = NULL,i_35 = NULL,k_12 = NULL;
                    t = SSLgetAnnotations(v_80);
                    z_34 = t;
                    t = w_80;
                    t = un_double_quote_0_0(t);
                    t = unescape_0_0(t);
                    i_35 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, i_35);
                    k_12 = t;
                    t = SSLsetAnnotations(k_12, z_34);
                  }
                }
              else
                {
                  ATerm l_36 = NULL,s_36 = NULL,l_12 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      w_80 = ATgetArgument(t, 0);
                      x_80 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_80);
                  l_36 = t;
                  t = w_80;
                  t = string_to_int_0_0(t);
                  s_36 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, s_36, x_80);
                  l_12 = t;
                  t = SSLsetAnnotations(l_12, l_36);
                }
            }
        }
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL;
  t = topdown_1_0(x_11, t);
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
static ATerm x_11 (ATerm t)
{
  t = try_1_0(MakePPTerm_0_0, t);
  return(t);
}
static ATerm s_6 (ATerm r_18, ATerm t)
{
  t = r_18;
  t = reverse_0_0(t);
  t = map_1_0(w_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(y_11, t);
      t = (ATerm) ATinsert(ATempty, term_k_38);
      t = fatal_error_0_0(t);
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      t = (ATerm) ATinsert(ATempty, term_l_38);
      t = error_0_0(t);
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,f_37 = NULL,j_37 = NULL;
  t = if_verbose1_1_0(d_12, t);
  t = ReadFromFile_0_0(t);
  k_81 = t;
  t = SSL_explode_term(k_81);
  if(match_cons(t, sym__2))
    {
      j_37 = ATgetArgument(t, 0);
      {
        ATerm m_38 = ATgetArgument(t, 1);
        if(((ATgetType(m_38) == AT_LIST) && !(ATisEmpty(m_38))))
          {
            f_37 = ATgetFirst((ATermList) m_38);
            {
              ATerm n_38 = (ATerm) ATgetNext((ATermList) m_38);
              if(((ATgetType(n_38) != AT_LIST) || !(ATisEmpty(n_38))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_37;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = f_37;
  if(match_cons(t, sym_PP_Table_1))
    {
      j_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(j_81, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = debug_1_0(e_12, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm i_81 = NULL;
  i_81 = t;
  t = term_i_20;
  t = table_create_0_0(t);
  t = i_81;
  t = map_1_0(a_12, t);
  return(t);
}
static ATerm f_12 (ATerm t)
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
static ATerm i_12 (ATerm t)
{
  t = sometd_1_0(m_12, t);
  return(t);
}
static ATerm m_12 (ATerm t)
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
static ATerm n_12 (ATerm t)
{
  t = topdown_1_0(p_12, t);
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
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
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = fatal_ambiguity_0_0(t);
      }
  }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = collect_p__1_0(s_12, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = try_1_0(q_12, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = is_list_0_0(t);
  t = filter_1_0(r_12, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm r_38 = t;
  if((PushChoice() == 0))
    {
      ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,f_13 = NULL;
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
      f_13 = t;
      t = SSLsetAnnotations(f_13, q_81);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_38;
    }
  {
    ATerm s_38 = t;
    if((PushChoice() == 0))
      {
        ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,l_13 = NULL;
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
        l_13 = t;
        t = SSLsetAnnotations(l_13, t_81);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_38;
      }
  }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,m_13 = NULL;
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
  m_13 = t;
  t = SSLsetAnnotations(m_13, g_82);
  return(t);
}
static ATerm u_6 (ATerm w_15, ATerm v_15, ATerm t)
{
  static ATerm t_12 (ATerm t);
  static ATerm t_12 (ATerm t)
  {
    t = w_15;
    return(t);
  }
  t = w_15;
  t = collect_1_0(f_12, t);
  t = reverse_0_0(t);
  t = read_pp_tables_0_0(t);
  t = v_15;
  t = repeat_1_0(i_12, t);
  t = split_2_0(n_12, o_12, t);
  t = insert_layout_0_0(t);
  t = split_2_0(t_12, _id, t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm k_82 = NULL;
  k_82 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, k_82);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm Asfix_2_abox_options_0_0 (ATerm t)
{
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_12, v_12, w_12, t);
      LocalPopChoice(y_38);
    }
  else
    {
      t = x_38;
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(x_12, y_12, z_12, t);
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            t = ArgOption_3_0(a_13, b_13, c_13, t);
          }
      }
    }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL;
  if(match_cons(t, sym__2))
    {
      l_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(l_82, m_82, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_2_0(Asfix_2_abox_options_0_0, d_13, t);
  return(t);
}

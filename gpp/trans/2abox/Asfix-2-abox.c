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
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_q_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_a_38;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_z_35;
ATerm term_g_35;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_x_33;
ATerm term_t_33;
ATerm term_o_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_c_33;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_y_31;
ATerm term_s_31;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_s_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_w_29;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_c_29;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_r_28;
ATerm term_p_28;
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
ATerm term_h_27;
ATerm term_r_26;
ATerm term_v_25;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_i_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_o_17;
ATerm term_b_17;
ATerm term_l_16;
ATerm term_e_16;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_u_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_SOpt_2, term_f_14, term_g_14);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_lit_1, term_u_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_lit_1, term_w_23);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_SOpt_2, term_o_24, term_p_24);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Arg_1, term_b_17);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm t);
ATerm split_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
static ATerm d_6 (ATerm h_21, ATerm t);
static ATerm c_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm p_36 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
ATerm crush_3_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm collect_p__1_0 (ATerm c_36 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm a_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_6 (ATerm g_10, ATerm f_10, ATerm t);
ATerm instantiate_list_1_0 (ATerm i_36 (ATerm), ATerm t);
static ATerm h_6 (ATerm v_12, ATerm w_12, ATerm t_12, ATerm u_12, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm k_36 (ATerm), ATerm t);
ATerm even_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_6 (ATerm v_34 (ATerm), ATerm w_34 (ATerm), ATerm x_34 (ATerm), ATerm y_34 (ATerm), ATerm b_14, ATerm c_14, ATerm t);
ATerm nzip_1_0 (ATerm r_91 (ATerm), ATerm t);
static ATerm j_6 (ATerm s_13, ATerm t_13, ATerm r_13, ATerm x_13, ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
static ATerm k_6 (ATerm i_18, ATerm h_18, ATerm t);
ATerm say_1_0 (ATerm w_83 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm s_3 (ATerm), ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm l_35 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_106 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_89 (ATerm), ATerm t);
static ATerm f_52 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm j_49, ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm a_35 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm n_89 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm number_node_1_0 (ATerm e_35 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm symbol2abox_1_0 (ATerm b_35 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
static ATerm c_65 (ATerm t_63, ATerm u_63, ATerm v_63, ATerm t);
static ATerm d_65 (ATerm l_64, ATerm m_64, ATerm n_64, ATerm o_64, ATerm p_64, ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm r_85 (ATerm), ATerm t);
static ATerm q_9 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm string_Hd_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm s_89 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
ATerm quote_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm d_90 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
static ATerm f_69 (ATerm z_68, ATerm t);
static ATerm o_10 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm x_88 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm v_36 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm h_73 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm q_6 (ATerm s_10, ATerm t_10, ATerm r_10, ATerm q_10, ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm r_6 (ATerm z_9, ATerm x_9, ATerm y_9, ATerm a_10, ATerm t);
ATerm filter_1_0 (ATerm t_97 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm try_1_0 (ATerm w_102 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm b_86 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm i_87 (ATerm), ATerm t);
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
static ATerm s_6 (ATerm f_18, ATerm g_18, ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm t_6 (ATerm e_18, ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm p_107 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm i_84 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm collect_1_0 (ATerm i_95 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm v_6 (ATerm j_15, ATerm i_15, ATerm t);
ATerm iowrap_2_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm io_Asfix_2_abox_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm d_6 (ATerm h_21, ATerm t)
{
  ATerm o_9 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 = NULL;
      t = has_significant_layout_0_0(t);
      t = h_21;
      t = concat_strings_0_0(t);
      b_0 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, b_0)));
      LocalPopChoice(i_13);
    }
  else
    {
      t = o_9;
      {
        ATerm d_0 = NULL;
        t = h_21;
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
  ATerm m_0 = NULL,o_0 = NULL;
  o_0 = t;
  {
    ATerm m_13 = t;
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
        t = m_13;
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
  t = o_0;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm o_13 = t;
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
      t = o_13;
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm InsLayout_1_0 (ATerm p_36 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm e_1 = NULL,g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
    ATerm v_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(Nil_0_0, _id, t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = v_13;
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
              t = p_36(t);
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
              t = p_36(t);
              if(match_cons(t, sym__2))
                {
                  e_1 = ATgetArgument(t, 0);
                  {
                    ATerm z_13 = ATgetArgument(t, 1);
                    if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
                      {
                        g_1 = ATgetFirst((ATermList) z_13);
                        l_1 = (ATerm) ATgetNext((ATermList) z_13);
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
                  ATerm a_14 = ATgetArgument(t, 0);
                  if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
                    {
                      i_1 = ATgetFirst((ATermList) a_14);
                      n_1 = (ATerm) ATgetNext((ATermList) a_14);
                    }
                  else
                    _fail(t);
                  m_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm d_14 = t;
                int e_14 = stack_ptr;
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
                    t = d_6(a_1, t);
                    z_0 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_14), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_1))), z_0), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_1))))), m_1);
                    LocalPopChoice(e_14);
                  }
                else
                  {
                    t = d_14;
                    {
                      ATerm j_14 = t;
                      int k_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_1 = NULL,c_1 = NULL;
                          ATerm l_14 = t;
                          if((PushChoice() == 0))
                            {
                              t = has_option_1_0(f_0, t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = l_14;
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
                          t = d_6(c_1, t);
                          b_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(n_1), i_1), b_1), e_1), m_1);
                          LocalPopChoice(k_14);
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
  ATerm a_7 = NULL;
  t = is_list_0_0(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, a_7);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm m_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = t;
      if((PushChoice() == 0))
        {
          ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL,r_1 = NULL;
          g_7 = t;
          if(match_cons(t, sym_layout_1))
            {
              f_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_7);
          d_7 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, f_7);
          r_1 = t;
          t = SSLsetAnnotations(r_1, d_7);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_14;
        }
      LocalPopChoice(o_14);
    }
  else
    {
      t = m_14;
      {
        ATerm z_7 = NULL,a_8 = NULL;
        z_7 = t;
        if(match_cons(t, sym_layout_1))
          {
            a_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_9 = NULL,u_9 = NULL,s_1 = NULL;
              t = SSLgetAnnotations(z_7);
              u_9 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, a_8);
              s_1 = t;
              t = SSLsetAnnotations(s_1, u_9);
              t = has_option_1_0(n_0, t);
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  t_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = d_6(t_9, t);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              {
                ATerm i_10 = NULL,j_10 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(z_7);
                j_10 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, a_8);
                t_1 = t;
                t = SSLsetAnnotations(t_1, j_10);
                {
                  ATerm t_14 = t;
                  if((PushChoice() == 0))
                    {
                      t = has_option_1_0(w_0, t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = t_14;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    i_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_6(i_10, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  static ATerm h_0 (ATerm t);
  static ATerm h_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_3 != NULL) && (z_3 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_3 = ATgetFirst((ATermList) t);
        {
          ATerm u_14 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = Tl_0_0(t);
    return(t);
  }
  t = _2_0(_id, h_0, t);
  {
    static ATerm j_8 (ATerm t);
    static ATerm j_8 (ATerm t)
    {
      ATerm f_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
      ATerm v_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_5 = NULL,z_5 = NULL,b_6 = NULL,c_6 = NULL,e_6 = NULL;
          if(match_cons(t, sym__2))
            {
              z_5 = ATgetArgument(t, 0);
              e_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_5;
          if(match_cons(t, sym_H_2))
            {
              b_6 = ATgetArgument(t, 0);
              c_6 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
              t = InsLayout_1_0(j_8, t);
              if(match_cons(t, sym__2))
                {
                  i_4 = ATgetArgument(t, 0);
                  j_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, b_6, i_4), j_4);
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  b_6 = ATgetArgument(t, 0);
                  c_6 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
                  t = InsLayout_1_0(j_8, t);
                  if(match_cons(t, sym__2))
                    {
                      i_4 = ATgetArgument(t, 0);
                      j_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, b_6, i_4), j_4);
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      b_6 = ATgetArgument(t, 0);
                      c_6 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
                      t = InsLayout_1_0(j_8, t);
                      if(match_cons(t, sym__2))
                        {
                          i_4 = ATgetArgument(t, 0);
                          j_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, b_6, i_4), j_4);
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          b_6 = ATgetArgument(t, 0);
                          c_6 = ATgetArgument(t, 1);
                          x_5 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, x_5, e_6);
                          t = InsLayout_1_0(j_8, t);
                          if(match_cons(t, sym__2))
                            {
                              i_4 = ATgetArgument(t, 0);
                              j_4 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, b_6, c_6, i_4), j_4);
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              b_6 = ATgetArgument(t, 0);
                              c_6 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
                              t = InsLayout_1_0(j_8, t);
                              if(match_cons(t, sym__2))
                                {
                                  i_4 = ATgetArgument(t, 0);
                                  j_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, b_6, i_4), j_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  b_6 = ATgetArgument(t, 0);
                                  c_6 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym__2, b_6, e_6);
                                  t = InsLayout_1_0(j_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      f_4 = ATgetArgument(t, 0);
                                      {
                                        ATerm y_14 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
                                  t = InsLayout_1_0(j_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      i_4 = ATgetArgument(t, 0);
                                      k_4 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, f_4, i_4), k_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      b_6 = ATgetArgument(t, 0);
                                      c_6 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
                                      t = InsLayout_1_0(j_8, t);
                                      if(match_cons(t, sym__2))
                                        {
                                          i_4 = ATgetArgument(t, 0);
                                          j_4 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, b_6, i_4), j_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          b_6 = ATgetArgument(t, 0);
                                          c_6 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
                                          t = InsLayout_1_0(j_8, t);
                                          if(match_cons(t, sym__2))
                                            {
                                              i_4 = ATgetArgument(t, 0);
                                              j_4 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, b_6, i_4), j_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              b_6 = ATgetArgument(t, 0);
                                              c_6 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
                                              t = InsLayout_1_0(j_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  i_4 = ATgetArgument(t, 0);
                                                  j_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, b_6, i_4), j_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  b_6 = ATgetArgument(t, 0);
                                                  c_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, c_6, e_6);
                                              t = InsLayout_1_0(j_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  i_4 = ATgetArgument(t, 0);
                                                  j_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, b_6, i_4), j_4);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          LocalPopChoice(x_14);
        }
      else
        {
          t = v_14;
          {
            ATerm z_14 = t;
            int a_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(i_0, _id, t);
                t = InsLayout_1_0(j_8, t);
                LocalPopChoice(a_15);
              }
            else
              {
                t = z_14;
              }
          }
        }
      return(t);
    }
    t = j_8(t);
  }
  t = _2_0(j_0, _id, t);
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      {
        ATerm b_15 = ATgetArgument(t, 1);
        if(((ATgetType(b_15) == AT_LIST) && !(ATisEmpty(b_15))))
          {
            b_4 = ATgetFirst((ATermList) b_15);
            {
              ATerm n_15 = (ATerm) ATgetNext((ATermList) b_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_4), a_4), not_null(z_3));
  t = filter_1_0(l_0, t);
  t = flat_list_0_0(t);
  d_8 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_8 = ATgetFirst((ATermList) t);
      c_8 = (ATerm) ATgetNext((ATermList) t);
      t = c_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_8;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_14), d_8);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_14), d_8);
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm c_36 (ATerm), ATerm t)
{
  static ATerm y_8 (ATerm t);
  static ATerm y_8 (ATerm t)
  {
    ATerm u_15 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_8 = NULL;
        t = c_36(t);
        x_8 = t;
        t = (ATerm) ATinsert(ATempty, x_8);
        LocalPopChoice(d_16);
      }
    else
      {
        t = u_15;
        t = crush_3_0(x_0, conc_0_0, y_8, t);
      }
    return(t);
  }
  t = y_8(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm z_8 = NULL,b_9 = NULL,c_9 = NULL,x_1 = NULL;
  c_9 = t;
  if(match_cons(t, sym_amb_1))
    {
      b_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_9);
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, b_9);
  x_1 = t;
  t = SSLsetAnnotations(x_1, z_8);
  t = (ATerm) ATinsert(ATempty, term_e_16);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
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
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm j_16 = t;
              int k_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_9 = NULL,k_9 = NULL,l_9 = NULL;
                  t = Cons_2_0(is_list_0_0, _id, t);
                  l_9 = t;
                  t = Hd_0_0(t);
                  h_9 = t;
                  t = l_9;
                  t = Tl_0_0(t);
                  k_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_9, k_9);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(k_16);
                }
              else
                {
                  t = j_16;
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
  ATerm e_10 = NULL,f_11 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      f_11 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
      {
        ATerm i_11 = NULL,k_11 = NULL;
        t = term_l_16;
        t = a_0(t);
        k_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, k_11);
        t = index_0_0(t);
        i_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, i_11);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm m_11 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          f_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_l_16;
      t = a_0(t);
      m_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_11, m_11);
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
  ATerm d_15 = NULL,g_15 = NULL,m_15 = NULL;
  g_15 = t;
  if(match_cons(t, sym_Arg_1))
    {
      m_15 = ATgetArgument(t, 0);
      {
        ATerm u_10 = NULL,a_2 = NULL;
        t = SSLgetAnnotations(g_15);
        u_10 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, m_15);
        a_2 = t;
        t = SSLsetAnnotations(a_2, u_10);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          m_15 = ATgetArgument(t, 0);
          d_15 = ATgetArgument(t, 1);
          {
            ATerm c_11 = NULL,b_2 = NULL;
            t = SSLgetAnnotations(g_15);
            c_11 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, m_15, d_15);
            b_2 = t;
            t = SSLsetAnnotations(b_2, c_11);
          }
        }
      else
        {
          ATerm t_11 = NULL,q_2 = NULL;
          if(match_cons(t, sym_S_1))
            {
              m_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_15);
          t_11 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, m_15);
          q_2 = t;
          t = SSLsetAnnotations(q_2, t_11);
        }
    }
  return(t);
}
static ATerm f_6 (ATerm g_10, ATerm f_10, ATerm t)
{
  ATerm i_12 = NULL,n_12 = NULL;
  t = _2_0(y_0, _id, t);
  {
    static ATerm i_21 (ATerm t);
    static ATerm i_21 (ATerm t)
    {
      ATerm q_16 = NULL,y_16 = NULL,a_17 = NULL,p_17 = NULL,a_18 = NULL;
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(Nil_0_0, Nil_0_0, t);
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          {
            static ATerm n_21 (ATerm l_19, ATerm m_19, ATerm n_19, ATerm t);
            static ATerm n_21 (ATerm l_19, ATerm m_19, ATerm n_19, ATerm t)
            {
              t = l_19;
              if(((a_18 != NULL) && (a_18 != t)))
                _fail(t);
              else
                a_18 = t;
              t = m_19;
              if(((q_16 != NULL) && (q_16 != t)))
                _fail(t);
              else
                q_16 = t;
              t = n_19;
              if(((a_17 != NULL) && (a_17 != t)))
                _fail(t);
              else
                a_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_19, n_19);
              t = i_21(t);
              if(match_cons(t, sym__2))
                {
                  if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_16 = ATgetArgument(t, 0);
                  if(((p_17 != NULL) && (p_17 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    p_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_16), l_19), p_17);
              return(t);
            }
            ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,c_20 = NULL;
            q_19 = t;
            if(match_cons(t, sym__2))
              {
                r_19 = ATgetArgument(t, 0);
                z_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_19;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_19 = ATgetFirst((ATermList) t);
                y_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_19;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_20 = ATgetFirst((ATermList) t);
                c_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_19;
            if(match_cons(t, sym_Arg_1))
              {
                o_19 = ATgetArgument(t, 0);
                {
                  ATerm o_16 = t;
                  int p_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = y_19;
                      if(((q_16 != NULL) && (q_16 != t)))
                        _fail(t);
                      else
                        q_16 = t;
                      t = c_20;
                      if(((a_17 != NULL) && (a_17 != t)))
                        _fail(t);
                      else
                        a_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_19, c_20);
                      t = i_21(t);
                      if(match_cons(t, sym__2))
                        {
                          if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            y_16 = ATgetArgument(t, 0);
                          if(((p_17 != NULL) && (p_17 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            p_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_16), (ATerm) ATmakeAppl(sym_Arg_1, o_19)), (ATerm) ATinsert(CheckATermList(p_17), a_20));
                      LocalPopChoice(p_16);
                    }
                  else
                    {
                      t = o_16;
                      t = n_21(s_19, y_19, c_20, t);
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Arg2_2))
                  {
                    o_19 = ATgetArgument(t, 0);
                    p_19 = ATgetArgument(t, 1);
                    {
                      ATerm r_16 = t;
                      int s_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_19;
                          if(((i_12 != NULL) && (i_12 != t)))
                            _fail(t);
                          else
                            i_12 = t;
                          t = y_19;
                          if(((q_16 != NULL) && (q_16 != t)))
                            _fail(t);
                          else
                            q_16 = t;
                          t = c_20;
                          if(((a_17 != NULL) && (a_17 != t)))
                            _fail(t);
                          else
                            a_17 = t;
                          t = (ATerm) ATmakeAppl(sym__2, y_19, c_20);
                          t = i_21(t);
                          if(match_cons(t, sym__2))
                            {
                              if(((y_16 != NULL) && (y_16 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                y_16 = ATgetArgument(t, 0);
                              if(((p_17 != NULL) && (p_17 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                p_17 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_16), (ATerm) ATmakeAppl(sym_Arg2_2, o_19, p_19)), (ATerm) ATinsert(CheckATermList(p_17), a_20));
                          LocalPopChoice(s_16);
                        }
                      else
                        {
                          t = r_16;
                          t = n_21(s_19, y_19, c_20, t);
                        }
                    }
                  }
                else
                  {
                    t = n_21(s_19, y_19, c_20, t);
                  }
              }
          }
        }
      return(t);
    }
    t = i_21(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_10, n_12);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm i_36 (ATerm), ATerm t)
{
  static ATerm y_21 (ATerm t);
  static ATerm y_21 (ATerm t)
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
          ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
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
                ATerm x_16 = t;
                int z_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm o_1 (ATerm t);
                    static ATerm o_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(u_21));
                      return(t);
                    }
                    t = Instantiate_1_0(o_1, t);
                    LocalPopChoice(z_16);
                  }
                else
                  {
                    t = x_16;
                    t = flat_list_0_0(t);
                  }
                return(t);
              }
              t = try_1_0(k_1, t);
              return(t);
            }
            t = term_l_16;
            t = i_36(t);
            t = bottomup_1_0(j_1, t);
            return(t);
          }
          static ATerm h_1 (ATerm t)
          {
            t = not_null(v_21);
            t = y_21(t);
            return(t);
          }
          t_21 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((u_21 != NULL) && (u_21 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                u_21 = ATgetFirst((ATermList) t);
              if(((v_21 != NULL) && (v_21 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                v_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_21;
          t = Cons_2_0(f_1, h_1, t);
        }
      }
    return(t);
  }
  t = y_21(t);
  return(t);
}
static ATerm h_6 (ATerm v_12, ATerm w_12, ATerm t_12, ATerm u_12, ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,p_23 = NULL;
  static ATerm u_1 (ATerm t);
  static ATerm u_1 (ATerm t)
  {
    t = not_null(e_22);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, t_12, (ATerm) ATinsert(ATempty, u_12));
  t = conc_0_0(t);
  f_22 = t;
  t = v_12;
  if(match_cons(t, sym_iter_1))
    {
      p_23 = ATgetArgument(t, 0);
      {
        ATerm f_13 = NULL,n_4 = NULL;
        t = SSLgetAnnotations(v_12);
        f_13 = t;
        t = p_23;
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, p_23);
        n_4 = t;
        t = SSLsetAnnotations(n_4, f_13);
      }
    }
  else
    {
      ATerm j_13 = NULL,o_4 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          p_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_12);
      j_13 = t;
      t = p_23;
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, p_23);
      o_4 = t;
      t = SSLsetAnnotations(o_4, j_13);
    }
  t = (ATerm) ATmakeAppl(sym__2, v_12, f_22);
  t = get_pp_entry_0_0(t);
  if(((e_22 != NULL) && (e_22 != t)))
    _fail(t);
  else
    e_22 = t;
  t = w_12;
  {
    static ATerm q_1 (ATerm t);
    static ATerm q_1 (ATerm t)
    {
      ATerm q_23 = NULL;
      q_23 = t;
      t = (ATerm) ATmakeAppl(sym__4, d_22, q_23, f_22, term_b_17);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(q_1, t);
  }
  t = instantiate_list_1_0(u_1, t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm k_36 (ATerm), ATerm t)
{
  static ATerm j_25 (ATerm t);
  static ATerm j_25 (ATerm t)
  {
    ATerm c_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = c_17;
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
                ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,f_25 = NULL,g_25 = NULL;
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
                      int i_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          static ATerm c_2 (ATerm t);
                          static ATerm c_2 (ATerm t)
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_25)), not_null(c_25));
                            return(t);
                          }
                          t = Instantiate_1_0(c_2, t);
                          LocalPopChoice(i_17);
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
                  t = term_l_16;
                  t = k_36(t);
                  t = bottomup_1_0(y_1, t);
                  return(t);
                }
                static ATerm w_1 (ATerm t)
                {
                  t = not_null(g_25);
                  t = j_25(t);
                  return(t);
                }
                b_25 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((c_25 != NULL) && (c_25 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      c_25 = ATgetFirst((ATermList) t);
                    d_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_25;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((f_25 != NULL) && (f_25 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      f_25 = ATgetFirst((ATermList) t);
                    if(((g_25 != NULL) && (g_25 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      g_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_25;
                t = Cons_2_0(v_1, w_1, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
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
  t = (ATerm) ATinsert(ATempty, o_25);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
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
  t = (ATerm) ATinsert(ATempty, s_25);
  return(t);
}
static ATerm i_6 (ATerm v_34 (ATerm), ATerm w_34 (ATerm), ATerm x_34 (ATerm), ATerm y_34 (ATerm), ATerm b_14, ATerm c_14, ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_25 = NULL,m_25 = NULL;
      t = b_14;
      t = even_0_0(t);
      t = term_l_16;
      t = w_34(t);
      l_25 = t;
      t = term_l_16;
      t = x_34(t);
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym__4, l_25, c_14, m_25, term_o_17);
      t = symbol2abox_0_0(t);
      t = try_1_0(d_2, t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm p_25 = NULL,r_25 = NULL;
        t = term_l_16;
        t = v_34(t);
        p_25 = t;
        t = term_l_16;
        t = x_34(t);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__4, p_25, c_14, r_25, term_b_17);
        t = symbol2abox_0_0(t);
        t = try_1_0(f_2, t);
      }
    }
  return(t);
}
static ATerm j_6 (ATerm s_13, ATerm t_13, ATerm r_13, ATerm x_13, ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,k_27 = NULL,r_27 = NULL;
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    t = not_null(b_26);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, r_13, (ATerm) ATinsert(ATempty, x_13));
  t = conc_0_0(t);
  c_26 = t;
  t = s_13;
  if(match_cons(t, sym_iter_sep_2))
    {
      k_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
      {
        ATerm p_13 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(s_13);
        p_13 = t;
        t = k_27;
        z_25 = t;
        t = r_27;
        a_26 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, k_27, r_27);
        t_4 = t;
        t = SSLsetAnnotations(t_4, p_13);
      }
    }
  else
    {
      ATerm h_14 = NULL,v_4 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          k_27 = ATgetArgument(t, 0);
          r_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_13);
      h_14 = t;
      t = k_27;
      z_25 = t;
      t = r_27;
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, k_27, r_27);
      v_4 = t;
      t = SSLsetAnnotations(v_4, h_14);
    }
  t = (ATerm) ATmakeAppl(sym__2, s_13, c_26);
  t = get_pp_entry_0_0(t);
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  t = t_13;
  {
    static ATerm g_2 (ATerm t);
    static ATerm g_2 (ATerm t)
    {
      ATerm t_27 = NULL,u_27 = NULL;
      static ATerm i_2 (ATerm t);
      static ATerm j_2 (ATerm t);
      static ATerm r_2 (ATerm t);
      static ATerm s_2 (ATerm t);
      static ATerm i_2 (ATerm t)
      {
        t = z_25;
        return(t);
      }
      static ATerm j_2 (ATerm t)
      {
        t = a_26;
        return(t);
      }
      static ATerm r_2 (ATerm t)
      {
        t = c_26;
        return(t);
      }
      static ATerm s_2 (ATerm t)
      {
        t = x_13;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          t_27 = ATgetArgument(t, 0);
          u_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_6(i_2, j_2, r_2, s_2, t_27, u_27, t);
      return(t);
    }
    t = nzip_1_0(g_2, t);
  }
  t = instantiate_sep_list_1_0(t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm q_17 = t;
  if((PushChoice() == 0))
    {
      ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,z_4 = NULL;
      e_42 = t;
      if(match_cons(t, sym_lit_1))
        {
          d_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_42);
      c_42 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, d_42);
      z_4 = t;
      t = SSLsetAnnotations(z_4, c_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_17;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_17 = t;
  if((PushChoice() == 0))
    {
      ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,a_5 = NULL;
      h_42 = t;
      if(match_cons(t, sym_lit_1))
        {
          g_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_42);
      f_42 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, g_42);
      a_5 = t;
      t = SSLsetAnnotations(a_5, f_42);
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
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,z_40 = NULL,a_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,j_41 = NULL,k_41 = NULL;
  a_41 = t;
  if(match_cons(t, sym__4))
    {
      d_41 = ATgetArgument(t, 0);
      f_41 = ATgetArgument(t, 1);
      j_41 = ATgetArgument(t, 2);
      k_41 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_41;
  if(match_cons(t, sym_seq_1))
    {
      e_41 = ATgetArgument(t, 0);
      {
        ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,y_41 = NULL,z_41 = NULL;
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
                  t = not_null(s_41);
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
        t = f_41;
        if(match_cons(t, sym_appl_2))
          {
            ATerm v_17 = ATgetArgument(t, 0);
            z_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_41, (ATerm) ATinsert(ATempty, k_41));
        t = conc_0_0(t);
        z_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, e_41), z_41);
        t = get_pp_entry_0_0(t);
        r_41 = t;
        t = e_41;
        t = filter_1_0(u_2, t);
        t_41 = t;
        t = z_40;
        t = filter_1_0(v_2, t);
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym__4, t_41, y_41, z_41, term_b_17);
        t = seq2abox_0_0(t);
        if(((s_41 != NULL) && (s_41 != t)))
          _fail(t);
        else
          s_41 = t;
        t = r_41;
        t = bottomup_1_0(w_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          e_41 = ATgetArgument(t, 0);
          p_40 = ATgetArgument(t, 1);
          {
            ATerm c_15 = NULL,e_15 = NULL,f_15 = NULL;
            static ATerm c_21 (ATerm t);
            static ATerm c_21 (ATerm t)
            {
              ATerm h_15 = NULL,k_15 = NULL,l_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
              if(match_cons(t, sym__4))
                {
                  v_15 = ATgetArgument(t, 0);
                  w_15 = ATgetArgument(t, 1);
                  b_16 = ATgetArgument(t, 2);
                  c_16 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = w_15;
              if(match_cons(t, sym_appl_2))
                {
                  x_15 = ATgetArgument(t, 0);
                  y_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_15;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_15 = ATgetFirst((ATermList) t);
                  a_16 = (ATerm) ATgetNext((ATermList) t);
                  t = a_16;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = x_15;
                      if(match_cons(t, sym_prod_3))
                        {
                          l_15 = ATgetArgument(t, 0);
                          q_15 = ATgetArgument(t, 1);
                          t_15 = ATgetArgument(t, 2);
                          t = q_15;
                          if(match_cons(t, sym_alt_2))
                            {
                              r_15 = ATgetArgument(t, 0);
                              s_15 = ATgetArgument(t, 1);
                              t = l_15;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  o_15 = ATgetFirst((ATermList) t);
                                  p_15 = (ATerm) ATgetNext((ATermList) t);
                                  t = p_15;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = v_15;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          h_15 = ATgetArgument(t, 0);
                                          k_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm w_17 = t;
                                            int x_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_15;
                                                if((h_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = r_15;
                                                if((h_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = s_15;
                                                if((k_15 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, h_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, h_15), h_15, t_15), y_15), b_16, c_16);
                                                t = c_21(t);
                                                LocalPopChoice(x_17);
                                              }
                                            else
                                              {
                                                t = w_17;
                                                {
                                                  ATerm y_17 = t;
                                                  int z_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_16 = NULL;
                                                      t = r_15;
                                                      if((h_15 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = s_15;
                                                      if((k_15 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym__2, c_16, term_b_17);
                                                      t = add_0_0(t);
                                                      t_16 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, k_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, o_15), k_15, t_15), y_15), b_16, t_16);
                                                      t = c_21(t);
                                                      LocalPopChoice(z_17);
                                                    }
                                                  else
                                                    {
                                                      t = y_17;
                                                      {
                                                        ATerm d_17 = NULL;
                                                        static ATerm z_2 (ATerm t);
                                                        static ATerm z_2 (ATerm t)
                                                        {
                                                          static ATerm a_3 (ATerm t);
                                                          static ATerm a_3 (ATerm t)
                                                          {
                                                            ATerm b_18 = t;
                                                            int c_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                static ATerm b_3 (ATerm t);
                                                                static ATerm b_3 (ATerm t)
                                                                {
                                                                  t = (ATerm) ATinsert(ATempty, not_null(e_15));
                                                                  return(t);
                                                                }
                                                                t = Instantiate_1_0(b_3, t);
                                                                LocalPopChoice(c_18);
                                                              }
                                                            else
                                                              {
                                                                t = b_18;
                                                                t = flat_list_0_0(t);
                                                              }
                                                            return(t);
                                                          }
                                                          t = try_1_0(a_3, t);
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, e_41, p_40), b_16);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((c_15 != NULL) && (c_15 != t)))
                                                          _fail(t);
                                                        else
                                                          c_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, v_15, z_15, b_16, term_b_17);
                                                        t = symbol2abox_0_0(t);
                                                        if(((e_15 != NULL) && (e_15 != t)))
                                                          _fail(t);
                                                        else
                                                          e_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, c_16, c_15);
                                                        t = index_0_0(t);
                                                        d_17 = t;
                                                        t = (ATerm) ATinsert(ATempty, d_17);
                                                        t = bottomup_1_0(z_2, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm l_17 = NULL;
                                          static ATerm c_3 (ATerm t);
                                          static ATerm c_3 (ATerm t)
                                          {
                                            static ATerm d_3 (ATerm t);
                                            static ATerm d_3 (ATerm t)
                                            {
                                              ATerm d_18 = t;
                                              int k_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  static ATerm e_3 (ATerm t);
                                                  static ATerm e_3 (ATerm t)
                                                  {
                                                    t = (ATerm) ATinsert(ATempty, not_null(e_15));
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(e_3, t);
                                                  LocalPopChoice(k_18);
                                                }
                                              else
                                                {
                                                  t = d_18;
                                                  t = flat_list_0_0(t);
                                                }
                                              return(t);
                                            }
                                            t = try_1_0(d_3, t);
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, e_41, p_40), b_16);
                                          t = get_pp_entry_0_0(t);
                                          if(((c_15 != NULL) && (c_15 != t)))
                                            _fail(t);
                                          else
                                            c_15 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, v_15, z_15, b_16, term_b_17);
                                          t = symbol2abox_0_0(t);
                                          if(((e_15 != NULL) && (e_15 != t)))
                                            _fail(t);
                                          else
                                            e_15 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, c_16, c_15);
                                          t = index_0_0(t);
                                          l_17 = t;
                                          t = (ATerm) ATinsert(ATempty, l_17);
                                          t = bottomup_1_0(c_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm u_17 = NULL;
                                      static ATerm f_3 (ATerm t);
                                      static ATerm f_3 (ATerm t)
                                      {
                                        static ATerm g_3 (ATerm t);
                                        static ATerm g_3 (ATerm t)
                                        {
                                          ATerm l_18 = t;
                                          int m_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm n_3 (ATerm t);
                                              static ATerm n_3 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, not_null(e_15));
                                                return(t);
                                              }
                                              t = Instantiate_1_0(n_3, t);
                                              LocalPopChoice(m_18);
                                            }
                                          else
                                            {
                                              t = l_18;
                                              t = flat_list_0_0(t);
                                            }
                                          return(t);
                                        }
                                        t = try_1_0(g_3, t);
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, e_41, p_40), b_16);
                                      t = get_pp_entry_0_0(t);
                                      if(((c_15 != NULL) && (c_15 != t)))
                                        _fail(t);
                                      else
                                        c_15 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, v_15, z_15, b_16, term_b_17);
                                      t = symbol2abox_0_0(t);
                                      if(((e_15 != NULL) && (e_15 != t)))
                                        _fail(t);
                                      else
                                        e_15 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, c_16, c_15);
                                      t = index_0_0(t);
                                      u_17 = t;
                                      t = (ATerm) ATinsert(ATempty, u_17);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm j_18 = NULL;
                                  static ATerm o_3 (ATerm t);
                                  static ATerm o_3 (ATerm t)
                                  {
                                    static ATerm p_3 (ATerm t);
                                    static ATerm p_3 (ATerm t)
                                    {
                                      ATerm n_18 = t;
                                      int o_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          static ATerm q_3 (ATerm t);
                                          static ATerm q_3 (ATerm t)
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(e_15));
                                            return(t);
                                          }
                                          t = Instantiate_1_0(q_3, t);
                                          LocalPopChoice(o_18);
                                        }
                                      else
                                        {
                                          t = n_18;
                                          t = flat_list_0_0(t);
                                        }
                                      return(t);
                                    }
                                    t = try_1_0(p_3, t);
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, e_41, p_40), b_16);
                                  t = get_pp_entry_0_0(t);
                                  if(((c_15 != NULL) && (c_15 != t)))
                                    _fail(t);
                                  else
                                    c_15 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, v_15, z_15, b_16, term_b_17);
                                  t = symbol2abox_0_0(t);
                                  if(((e_15 != NULL) && (e_15 != t)))
                                    _fail(t);
                                  else
                                    e_15 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, c_16, c_15);
                                  t = index_0_0(t);
                                  j_18 = t;
                                  t = (ATerm) ATinsert(ATempty, j_18);
                                  t = bottomup_1_0(o_3, t);
                                }
                            }
                          else
                            {
                              ATerm u_18 = NULL;
                              static ATerm r_3 (ATerm t);
                              static ATerm r_3 (ATerm t)
                              {
                                static ATerm t_3 (ATerm t);
                                static ATerm t_3 (ATerm t)
                                {
                                  ATerm p_18 = t;
                                  int q_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      static ATerm u_3 (ATerm t);
                                      static ATerm u_3 (ATerm t)
                                      {
                                        t = (ATerm) ATinsert(ATempty, not_null(e_15));
                                        return(t);
                                      }
                                      t = Instantiate_1_0(u_3, t);
                                      LocalPopChoice(q_18);
                                    }
                                  else
                                    {
                                      t = p_18;
                                      t = flat_list_0_0(t);
                                    }
                                  return(t);
                                }
                                t = try_1_0(t_3, t);
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, e_41, p_40), b_16);
                              t = get_pp_entry_0_0(t);
                              if(((c_15 != NULL) && (c_15 != t)))
                                _fail(t);
                              else
                                c_15 = t;
                              t = (ATerm) ATmakeAppl(sym__4, v_15, z_15, b_16, term_b_17);
                              t = symbol2abox_0_0(t);
                              if(((e_15 != NULL) && (e_15 != t)))
                                _fail(t);
                              else
                                e_15 = t;
                              t = (ATerm) ATmakeAppl(sym__2, c_16, c_15);
                              t = index_0_0(t);
                              u_18 = t;
                              t = (ATerm) ATinsert(ATempty, u_18);
                              t = bottomup_1_0(r_3, t);
                            }
                        }
                      else
                        {
                          ATerm e_19 = NULL;
                          static ATerm v_3 (ATerm t);
                          static ATerm v_3 (ATerm t)
                          {
                            static ATerm w_3 (ATerm t);
                            static ATerm w_3 (ATerm t)
                            {
                              ATerm r_18 = t;
                              int s_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  static ATerm x_3 (ATerm t);
                                  static ATerm x_3 (ATerm t)
                                  {
                                    t = (ATerm) ATinsert(ATempty, not_null(e_15));
                                    return(t);
                                  }
                                  t = Instantiate_1_0(x_3, t);
                                  LocalPopChoice(s_18);
                                }
                              else
                                {
                                  t = r_18;
                                  t = flat_list_0_0(t);
                                }
                              return(t);
                            }
                            t = try_1_0(w_3, t);
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, e_41, p_40), b_16);
                          t = get_pp_entry_0_0(t);
                          if(((c_15 != NULL) && (c_15 != t)))
                            _fail(t);
                          else
                            c_15 = t;
                          t = (ATerm) ATmakeAppl(sym__4, v_15, z_15, b_16, term_b_17);
                          t = symbol2abox_0_0(t);
                          if(((e_15 != NULL) && (e_15 != t)))
                            _fail(t);
                          else
                            e_15 = t;
                          t = (ATerm) ATmakeAppl(sym__2, c_16, c_15);
                          t = index_0_0(t);
                          e_19 = t;
                          t = (ATerm) ATinsert(ATempty, e_19);
                          t = bottomup_1_0(v_3, t);
                        }
                    }
                  else
                    {
                      t = x_15;
                      if(match_cons(t, sym_prod_3))
                        {
                          l_15 = ATgetArgument(t, 0);
                          q_15 = ATgetArgument(t, 1);
                          t_15 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = v_15;
                      if(match_cons(t, sym_alt_2))
                        {
                          h_15 = ATgetArgument(t, 0);
                          k_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_15;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          o_15 = ATgetFirst((ATermList) t);
                          p_15 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = p_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = q_15;
                      if(match_cons(t, sym_alt_2))
                        {
                          r_15 = ATgetArgument(t, 0);
                          s_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm t_18 = t;
                        int v_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = o_15;
                            if((h_15 != t))
                              {
                                _fail(t);
                              }
                            t = r_15;
                            if((h_15 != t))
                              {
                                _fail(t);
                              }
                            t = s_15;
                            if((k_15 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, h_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, h_15), h_15, t_15), y_15), b_16, c_16);
                            t = c_21(t);
                            LocalPopChoice(v_18);
                          }
                        else
                          {
                            t = t_18;
                            {
                              ATerm m_20 = NULL;
                              t = r_15;
                              if((h_15 != t))
                                {
                                  _fail(t);
                                }
                              t = s_15;
                              if((k_15 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym__2, c_16, term_b_17);
                              t = add_0_0(t);
                              m_20 = t;
                              t = (ATerm) ATmakeAppl(sym__4, k_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, o_15), k_15, t_15), y_15), b_16, m_20);
                              t = c_21(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = x_15;
                  if(match_cons(t, sym_prod_3))
                    {
                      l_15 = ATgetArgument(t, 0);
                      q_15 = ATgetArgument(t, 1);
                      t_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = v_15;
                  if(match_cons(t, sym_alt_2))
                    {
                      h_15 = ATgetArgument(t, 0);
                      k_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_15;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_15 = ATgetFirst((ATermList) t);
                      p_15 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = p_15;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_15;
                  if(match_cons(t, sym_alt_2))
                    {
                      r_15 = ATgetArgument(t, 0);
                      s_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_15;
                        if((h_15 != t))
                          {
                            _fail(t);
                          }
                        t = r_15;
                        if((h_15 != t))
                          {
                            _fail(t);
                          }
                        t = s_15;
                        if((k_15 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, h_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, h_15), h_15, t_15), y_15), b_16, c_16);
                        t = c_21(t);
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
                        {
                          ATerm b_21 = NULL;
                          t = r_15;
                          if((h_15 != t))
                            {
                              _fail(t);
                            }
                          t = s_15;
                          if((k_15 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym__2, c_16, term_b_17);
                          t = add_0_0(t);
                          b_21 = t;
                          t = (ATerm) ATmakeAppl(sym__4, k_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, o_15), k_15, t_15), y_15), b_16, b_21);
                          t = c_21(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, j_41, (ATerm) ATinsert(ATempty, k_41));
            t = conc_0_0(t);
            f_15 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, e_41, p_40), f_41, f_15, term_b_17);
            t = c_21(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              e_41 = ATgetArgument(t, 0);
              p_40 = ATgetArgument(t, 1);
              {
                ATerm q_42 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, e_41, p_40);
                q_42 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, e_41, p_40), f_41, j_41, k_41);
                t = j_6(q_42, f_41, j_41, k_41, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  e_41 = ATgetArgument(t, 0);
                  p_40 = ATgetArgument(t, 1);
                  {
                    ATerm z_42 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, e_41, p_40);
                    z_42 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, e_41, p_40), f_41, j_41, k_41);
                    t = j_6(z_42, f_41, j_41, k_41, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      e_41 = ATgetArgument(t, 0);
                      {
                        ATerm o_43 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, e_41);
                        o_43 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, e_41), f_41, j_41, k_41);
                        t = h_6(o_43, f_41, j_41, k_41, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          e_41 = ATgetArgument(t, 0);
                          {
                            ATerm b_44 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, e_41);
                            b_44 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, e_41), f_41, j_41, k_41);
                            t = h_6(b_44, f_41, j_41, k_41, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              e_41 = ATgetArgument(t, 0);
                              t = f_41;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm y_18 = ATgetArgument(t, 0);
                                  z_40 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = z_40;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  q_40 = ATgetFirst((ATermList) t);
                                  r_40 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
                                    static ATerm y_3 (ATerm t);
                                    static ATerm y_3 (ATerm t)
                                    {
                                      static ATerm c_4 (ATerm t);
                                      static ATerm c_4 (ATerm t)
                                      {
                                        ATerm z_18 = t;
                                        int a_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm d_4 (ATerm t);
                                            static ATerm d_4 (ATerm t)
                                            {
                                              t = not_null(q_22);
                                              return(t);
                                            }
                                            t = Instantiate_1_0(d_4, t);
                                            LocalPopChoice(a_19);
                                          }
                                        else
                                          {
                                            t = z_18;
                                            t = flat_list_0_0(t);
                                          }
                                        return(t);
                                      }
                                      t = try_1_0(c_4, t);
                                      return(t);
                                    }
                                    t = r_40;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, j_41, (ATerm) ATinsert(ATempty, k_41));
                                    t = conc_0_0(t);
                                    s_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, e_41), s_22);
                                    t = get_pp_entry_0_0(t);
                                    n_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, e_41, q_40, s_22, term_b_17);
                                    t = symbol2abox_0_0(t);
                                    o_22 = t;
                                    t = (ATerm) ATinsert(ATempty, o_22);
                                    r_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, n_22, (ATerm) ATinsert(ATempty, o_22));
                                    t = f_6(n_22, r_22, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        p_22 = ATgetArgument(t, 0);
                                        if(((q_22 != NULL) && (q_22 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          q_22 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = p_22;
                                    t = bottomup_1_0(y_3, t);
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
                              ATerm b_19 = t;
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
                                    ATerm f_19 = t;
                                    int g_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_41;
                                        {
                                          ATerm h_19 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = is_string_0_0(t);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = h_19;
                                            }
                                        }
                                        t = f_41;
                                        {
                                          ATerm i_19 = t;
                                          int j_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  c_23 = ATgetArgument(t, 0);
                                                  g_23 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = c_23;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  d_23 = ATgetArgument(t, 0);
                                                  e_23 = ATgetArgument(t, 1);
                                                  f_23 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = f_41;
                                              t = r_6(d_23, e_23, f_23, g_23, t);
                                              LocalPopChoice(j_19);
                                            }
                                          else
                                            {
                                              t = i_19;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(g_19);
                                      }
                                    else
                                      {
                                        t = f_19;
                                        t = f_41;
                                        t = is_string_0_0(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, f_41);
                                      }
                                  }
                                }
                              else
                                {
                                  t = b_19;
                                  {
                                    ATerm k_19 = t;
                                    int t_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm u_19 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(t_19);
                                        {
                                          ATerm j_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, f_41);
                                          t = implode_string_0_0(t);
                                          j_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, j_44);
                                        }
                                      }
                                    else
                                      {
                                        t = k_19;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            e_41 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, e_41);
                                      }
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
  ATerm d_45 = NULL,e_45 = NULL,h_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,p_45 = NULL;
  if(match_cons(t, sym__4))
    {
      d_45 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
      m_45 = ATgetArgument(t, 2);
      p_45 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_45;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_45;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_45 = ATgetFirst((ATermList) t);
          h_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_45 = ATgetFirst((ATermList) t);
          l_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_45;
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm x_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(w_19);
            t = e_45;
            {
              ATerm b_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm e_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_20);
                  {
                    ATerm f_20 = t;
                    int g_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, h_45, l_45, m_45, p_45);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(g_20);
                      }
                    else
                      {
                        t = f_20;
                        {
                          ATerm m_46 = NULL,n_46 = NULL,p_46 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, e_45, k_45, m_45, p_45);
                          t = symbol2abox_0_0(t);
                          m_46 = t;
                          t = (ATerm) ATmakeAppl(sym__2, p_45, term_b_17);
                          t = add_0_0(t);
                          p_46 = t;
                          t = (ATerm) ATmakeAppl(sym__4, h_45, l_45, m_45, p_46);
                          t = seq2abox_0_0(t);
                          n_46 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_46), m_46);
                        }
                      }
                  }
                }
              else
                {
                  t = b_20;
                  {
                    ATerm v_46 = NULL,w_46 = NULL,y_46 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, e_45, k_45, m_45, p_45);
                    t = symbol2abox_0_0(t);
                    v_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_45, term_b_17);
                    t = add_0_0(t);
                    y_46 = t;
                    t = (ATerm) ATmakeAppl(sym__4, h_45, l_45, m_45, y_46);
                    t = seq2abox_0_0(t);
                    w_46 = t;
                    t = (ATerm) ATinsert(CheckATermList(w_46), v_46);
                  }
                }
            }
          }
        else
          {
            t = v_19;
            {
              ATerm e_47 = NULL,f_47 = NULL,h_47 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, e_45, k_45, m_45, p_45);
              t = symbol2abox_0_0(t);
              e_47 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_45, term_b_17);
              t = add_0_0(t);
              h_47 = t;
              t = (ATerm) ATmakeAppl(sym__4, h_45, l_45, m_45, h_47);
              t = seq2abox_0_0(t);
              f_47 = t;
              t = (ATerm) ATinsert(CheckATermList(f_47), e_47);
            }
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = debug_1_0(g_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, j_47);
  t = table_get_0_0(t);
  if(match_cons(t, sym__2))
    {
      l_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_47;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(e_4, t);
  t = (ATerm) ATmakeAppl(sym__2, l_47, k_47);
  return(t);
}
static ATerm k_6 (ATerm i_18, ATerm h_18, ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      o_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_47 = NULL;
            t = i_18;
            t = mk_key_0_0(t);
            r_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_i_20, r_47);
            t = table_get_0_0(t);
            t = n_47;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = n_47;
            t = s_6(o_47, p_47, t);
          }
      }
    }
  else
    {
      ATerm v_47 = NULL;
      t = i_18;
      t = mk_key_0_0(t);
      v_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_20, v_47);
      t = table_get_0_0(t);
      t = n_47;
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  if(match_cons(t, sym__2))
    {
      z_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_48;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm g_48 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_47, a_48);
      t = separate_by_0_0(t);
      g_48 = t;
      t = (ATerm) ATinsert(CheckATermList(g_48), z_47);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm l_35 (ATerm), ATerm t)
{
  static ATerm l_4 (ATerm t);
  static ATerm l_4 (ATerm t)
  {
    ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
    t = term_l_16;
    t = pass_verbose_0_0(t);
    h_48 = t;
    t = term_l_16;
    t = l_35(t);
    t = map_1_0(xtc_find_0_0, t);
    j_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_20, j_48);
    t = add_arg_flags_0_0(t);
    i_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_48, i_48);
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(h_4, l_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_20);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  t = xtc_transform_2_0(m_4, pass_verbose_0_0, t);
  t = xtc_transform_2_0(p_4, pass_verbose_0_0, t);
  t = xtc_ast2abox_1_0(q_4, t);
  t = xtc_transform_2_0(r_4, pass_verbose_0_0, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm m_48 = NULL;
  t = write_to_0_0(t);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      m_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_48;
  t = read_text_file_0_0(t);
  t = trim_1_0(u_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm n_48 = NULL;
  n_48 = t;
  if(match_int(t, 10))
    {
      t = n_48;
    }
  else
    {
      if(match_int(t, 13))
        {
          t = n_48;
        }
      else
        {
          if(match_int(t, 32))
            {
              t = n_48;
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 9)))
                _fail(t);
              t = n_48;
            }
        }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(s_4, t);
  t = say_1_0(w_4, t);
  t = debug_1_0(x_4, t);
  return(t);
}
static ATerm f_52 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm j_49, ATerm t)
{
  t = i_49;
  t = fetch_1_0(y_4, t);
  t = i_49;
  {
    ATerm u_20 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, g_49, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, h_49)), (ATerm) ATmakeAppl(sym_attrs_1, i_49));
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
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
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
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
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
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
static ATerm u_5 (ATerm t)
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
static ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
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
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
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
static ATerm z_6 (ATerm t)
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
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm n_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
  s_49 = t;
  if(match_cons(t, sym_prod_3))
    {
      t_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
      v_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_49;
  if(match_cons(t, sym_attrs_1))
    {
      w_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_49;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_49;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm x_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(w_20);
            t = t_49;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_49 = ATgetFirst((ATermList) t);
                p_49 = (ATerm) ATgetNext((ATermList) t);
                t = p_49;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = n_49;
                    {
                      ATerm y_20 = t;
                      int z_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm a_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_20);
                          {
                            ATerm d_21 = t;
                            int e_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_49;
                                t = fetch_1_0(b_5, t);
                                t = s_49;
                                LocalPopChoice(e_21);
                              }
                            else
                              {
                                t = d_21;
                                {
                                  ATerm f_21 = t;
                                  int g_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = w_49;
                                      t = fetch_1_0(c_5, t);
                                      t = s_49;
                                      LocalPopChoice(g_21);
                                    }
                                  else
                                    {
                                      t = f_21;
                                      t = s_49;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = y_20;
                          {
                            ATerm j_21 = t;
                            int k_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_49;
                                t = fetch_1_0(e_5, t);
                                t = s_49;
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
                                      t = w_49;
                                      t = fetch_1_0(k_5, t);
                                      t = s_49;
                                      LocalPopChoice(m_21);
                                    }
                                  else
                                    {
                                      t = l_21;
                                      t = w_49;
                                      t = fetch_1_0(n_5, t);
                                      t = s_49;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = n_49;
                    {
                      ATerm o_21 = t;
                      int p_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_49;
                          t = fetch_1_0(o_5, t);
                          t = s_49;
                          LocalPopChoice(p_21);
                        }
                      else
                        {
                          t = o_21;
                          {
                            ATerm q_21 = t;
                            int r_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_49;
                                t = fetch_1_0(p_5, t);
                                t = s_49;
                                LocalPopChoice(r_21);
                              }
                            else
                              {
                                t = q_21;
                                t = w_49;
                                t = fetch_1_0(q_5, t);
                                t = s_49;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm s_21 = t;
                int w_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_49;
                    t = fetch_1_0(r_5, t);
                    t = s_49;
                    LocalPopChoice(w_21);
                  }
                else
                  {
                    t = s_21;
                    {
                      ATerm x_21 = t;
                      int z_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_49;
                          t = fetch_1_0(s_5, t);
                          t = s_49;
                          LocalPopChoice(z_21);
                        }
                      else
                        {
                          t = x_21;
                          t = w_49;
                          t = fetch_1_0(t_5, t);
                          t = s_49;
                        }
                    }
                  }
              }
          }
        else
          {
            t = v_20;
            if(match_cons(t, sym_cf_1))
              {
                q_49 = ATgetArgument(t, 0);
                t = q_49;
                if(match_cons(t, sym_sort_1))
                  {
                    r_49 = ATgetArgument(t, 0);
                    t = t_49;
                    {
                      ATerm a_22 = t;
                      int b_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_49;
                          t = fetch_1_0(u_5, t);
                          t = s_49;
                          LocalPopChoice(b_22);
                        }
                      else
                        {
                          t = a_22;
                          {
                            ATerm c_22 = t;
                            int g_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_49;
                                t = fetch_1_0(w_5, t);
                                t = s_49;
                                LocalPopChoice(g_22);
                              }
                            else
                              {
                                t = c_22;
                                {
                                  ATerm h_22 = t;
                                  int i_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = f_52(t_49, r_49, w_49, s_49, t);
                                      LocalPopChoice(i_22);
                                    }
                                  else
                                    {
                                      t = h_22;
                                      t = w_49;
                                      t = fetch_1_0(y_5, t);
                                      t = s_49;
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
                    {
                      ATerm j_22 = t;
                      int k_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_49;
                          t = fetch_1_0(a_6, t);
                          t = s_49;
                          LocalPopChoice(k_22);
                        }
                      else
                        {
                          t = j_22;
                          {
                            ATerm l_22 = t;
                            int m_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_49;
                                t = fetch_1_0(g_6, t);
                                t = s_49;
                                LocalPopChoice(m_22);
                              }
                            else
                              {
                                t = l_22;
                                t = w_49;
                                t = fetch_1_0(l_6, t);
                                t = s_49;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = t_49;
                {
                  ATerm t_22 = t;
                  int u_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_49;
                      t = fetch_1_0(m_6, t);
                      t = s_49;
                      LocalPopChoice(u_22);
                    }
                  else
                    {
                      t = t_22;
                      {
                        ATerm v_22 = t;
                        int w_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_49;
                            t = fetch_1_0(n_6, t);
                            t = s_49;
                            LocalPopChoice(w_22);
                          }
                        else
                          {
                            t = v_22;
                            t = w_49;
                            t = fetch_1_0(o_6, t);
                            t = s_49;
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
      t = u_49;
      if(match_cons(t, sym_cf_1))
        {
          q_49 = ATgetArgument(t, 0);
          t = q_49;
          if(match_cons(t, sym_sort_1))
            {
              r_49 = ATgetArgument(t, 0);
              t = t_49;
              {
                ATerm x_22 = t;
                int y_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_49;
                    t = fetch_1_0(p_6, t);
                    t = s_49;
                    LocalPopChoice(y_22);
                  }
                else
                  {
                    t = x_22;
                    {
                      ATerm z_22 = t;
                      int a_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_49;
                          t = fetch_1_0(u_6, t);
                          t = s_49;
                          LocalPopChoice(a_23);
                        }
                      else
                        {
                          t = z_22;
                          {
                            ATerm b_23 = t;
                            int h_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = f_52(t_49, r_49, w_49, s_49, t);
                                LocalPopChoice(h_23);
                              }
                            else
                              {
                                t = b_23;
                                t = w_49;
                                t = fetch_1_0(w_6, t);
                                t = s_49;
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
              {
                ATerm i_23 = t;
                int j_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_49;
                    t = fetch_1_0(x_6, t);
                    t = s_49;
                    LocalPopChoice(j_23);
                  }
                else
                  {
                    t = i_23;
                    {
                      ATerm k_23 = t;
                      int l_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_49;
                          t = fetch_1_0(y_6, t);
                          t = s_49;
                          LocalPopChoice(l_23);
                        }
                      else
                        {
                          t = k_23;
                          t = w_49;
                          t = fetch_1_0(z_6, t);
                          t = s_49;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = t_49;
          {
            ATerm m_23 = t;
            int n_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_49;
                t = fetch_1_0(b_7, t);
                t = s_49;
                LocalPopChoice(n_23);
              }
            else
              {
                t = m_23;
                {
                  ATerm o_23 = t;
                  int r_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_49;
                      t = fetch_1_0(c_7, t);
                      t = s_49;
                      LocalPopChoice(r_23);
                    }
                  else
                    {
                      t = o_23;
                      t = w_49;
                      t = fetch_1_0(e_7, t);
                      t = s_49;
                    }
                }
              }
          }
        }
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm a_35 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
  t = number_nonterminals_0_0(t);
  j_52 = t;
  t = make_0_0(t);
  g_52 = t;
  t = j_52;
  {
    static ATerm h_7 (ATerm t);
    static ATerm h_7 (ATerm t)
    {
      static ATerm i_7 (ATerm t);
      static ATerm i_7 (ATerm t)
      {
        ATerm k_52 = NULL;
        t = term_l_16;
        t = a_35(t);
        k_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_52, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(i_7, t);
      return(t);
    }
    t = map_1_0(h_7, t);
  }
  t = concat_0_0(t);
  h_52 = t;
  t = term_l_16;
  t = a_35(t);
  i_52 = t;
  t = (ATerm) ATinsert(CheckATermList(h_52), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, i_52), g_52));
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,b_53 = NULL;
  if(match_cons(t, sym_term_1))
    {
      b_53 = ATgetArgument(t, 0);
      t = b_53;
      if(match_cons(t, sym_appl_2))
        {
          z_52 = ATgetArgument(t, 0);
          u_52 = ATgetArgument(t, 1);
          t = z_52;
          if(match_cons(t, sym_uqlit_1))
            {
              t_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_52;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
            _fail(t);
          t = u_52;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_52 = ATgetFirst((ATermList) t);
              y_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_52;
          if(match_cons(t, sym_fun_1))
            {
              w_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_52;
          if(match_cons(t, sym_qlit_1))
            {
              x_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_52;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_52;
          t = un_double_quote_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              z_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_52;
        }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          b_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_53;
    }
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(k_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm s_23 = t;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(q_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_23;
    }
  t = missing_constructor_warning_0_0(t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
  p_53 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      q_53 = ATgetArgument(t, 0);
      r_53 = ATgetArgument(t, 1);
      s_53 = ATgetArgument(t, 2);
      o_53 = ATgetArgument(t, 3);
      {
        ATerm x_53 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_23)), r_53), (ATerm) ATinsert(ATinsert(ATempty, term_v_23), (ATerm) ATmakeAppl(sym_lit_1, q_53)));
        t = concat_0_0(t);
        x_53 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, x_53, s_53, o_53);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm y_23 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          q_53 = ATgetArgument(t, 0);
          {
            ATerm a_24 = ATgetArgument(t, 1);
          }
          s_53 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_53;
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_23 = NULL;
            t = s_53;
            if(match_cons(t, sym_attrs_1))
              {
                z_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_23;
            t = get_cnstr_name_0_0(t);
            y_23 = t;
            LocalPopChoice(c_24);
            {
              static ATerm l_7 (ATerm t);
              static ATerm l_7 (ATerm t)
              {
                t = y_23;
                return(t);
              }
              t = q_53;
              t = symbols2pp_entries_1_0(l_7, t);
            }
          }
        else
          {
            t = b_24;
            {
              ATerm d_24 = t;
              int e_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(e_24);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = d_24;
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
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,j_54 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_54 = ATgetFirst((ATermList) t);
            d_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_54 = ATgetFirst((ATermList) t);
            f_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_54;
        t = pair_0_0(t);
        j_54 = t;
        t = (ATerm) ATinsert(CheckATermList(j_54), (ATerm) ATmakeAppl(sym__2, c_54, e_54));
      }
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm l_56 = NULL;
  t = _2_0(_id, x_7, t);
  if(match_cons(t, sym_lit_1))
    {
      l_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_i_24, (ATerm) ATmakeAppl(sym_S_1, l_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          l_56 = ATgetArgument(t, 0);
          {
            ATerm j_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, l_56);
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = map_1_0(y_7, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  if(match_cons(t, sym_iter_1))
    {
      i_56 = ATgetArgument(t, 0);
      {
        ATerm f_24 = NULL,d_5 = NULL;
        t = SSLgetAnnotations(h_56);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, i_56);
        d_5 = t;
        t = SSLsetAnnotations(d_5, f_24);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          i_56 = ATgetArgument(t, 0);
          {
            ATerm m_24 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(h_56);
            m_24 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, i_56);
            f_5 = t;
            t = SSLsetAnnotations(f_5, m_24);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              i_56 = ATgetArgument(t, 0);
              j_56 = ATgetArgument(t, 1);
              {
                ATerm u_24 = NULL,g_5 = NULL;
                t = SSLgetAnnotations(h_56);
                u_24 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, i_56, j_56);
                g_5 = t;
                t = SSLsetAnnotations(g_5, u_24);
              }
            }
          else
            {
              ATerm x_25 = NULL,h_5 = NULL;
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  i_56 = ATgetArgument(t, 0);
                  j_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_56);
              x_25 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, i_56, j_56);
              h_5 = t;
              t = SSLsetAnnotations(h_5, x_25);
            }
        }
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,t_56 = NULL,i_5 = NULL;
  r_56 = t;
  if(match_cons(t, sym_lit_1))
    {
      q_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_56);
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, q_56);
  i_5 = t;
  t = SSLsetAnnotations(i_5, p_56);
  if(match_cons(t, sym_lit_1))
    {
      t_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_i_24, (ATerm) ATmakeAppl(sym_S_1, t_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          t_56 = ATgetArgument(t, 0);
          {
            ATerm k_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, t_56);
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL;
  static ATerm h_8 (ATerm t);
  static ATerm i_8 (ATerm t);
  static ATerm h_8 (ATerm t)
  {
    ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,j_57 = NULL,j_5 = NULL;
    h_57 = t;
    if(match_cons(t, sym_lit_1))
      {
        g_57 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_57);
    f_57 = t;
    t = (ATerm) ATmakeAppl(sym_lit_1, g_57);
    j_5 = t;
    t = SSLsetAnnotations(j_5, f_57);
    if(match_cons(t, sym_lit_1))
      {
        j_57 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_i_24, (ATerm) ATmakeAppl(sym_S_1, j_57));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            j_57 = ATgetArgument(t, 0);
            {
              ATerm l_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, j_57);
      }
    if(((d_57 != NULL) && (d_57 != t)))
      _fail(t);
    else
      d_57 = t;
    return(t);
  }
  static ATerm i_8 (ATerm t)
  {
    ATerm b_58 = NULL;
    t = _2_0(_id, k_8, t);
    if(match_cons(t, sym_lit_1))
      {
        b_58 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_i_24, (ATerm) ATmakeAppl(sym_S_1, b_58));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            b_58 = ATgetArgument(t, 0);
            {
              ATerm n_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, b_58);
      }
    if(((e_57 != NULL) && (e_57 != t)))
      _fail(t);
    else
      e_57 = t;
    return(t);
  }
  t = _2_0(h_8, i_8, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_q_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_57)), not_null(d_57)));
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  y_57 = t;
  if(match_cons(t, sym_iter_1))
    {
      z_57 = ATgetArgument(t, 0);
      {
        ATerm l_26 = NULL,l_5 = NULL;
        t = SSLgetAnnotations(y_57);
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, z_57);
        l_5 = t;
        t = SSLsetAnnotations(l_5, l_26);
      }
    }
  else
    {
      ATerm a_27 = NULL,m_5 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          z_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_57);
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, z_57);
      m_5 = t;
      t = SSLsetAnnotations(m_5, a_27);
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm g_58 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      g_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_i_24, (ATerm) ATmakeAppl(sym_S_1, g_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          g_58 = ATgetArgument(t, 0);
          {
            ATerm r_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, g_58);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_55 = NULL;
      t = reverse_0_0(t);
      t = Cons_2_0(s_7, w_7, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_55 = ATgetFirst((ATermList) t);
          c_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_24 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, Nil_0_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_24;
          }
      }
      t = c_55;
      t = reverse_0_0(t);
      h_55 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, d_55), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, h_55)));
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_0_0(t);
            {
              static ATerm e_8 (ATerm t);
              static ATerm f_8 (ATerm t);
              static ATerm e_8 (ATerm t)
              {
                ATerm z_56 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    z_56 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_i_24, (ATerm) ATmakeAppl(sym_S_1, z_56));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        z_56 = ATgetArgument(t, 0);
                        {
                          ATerm y_24 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, z_56);
                  }
                if(((g_55 != NULL) && (g_55 != t)))
                  _fail(t);
                else
                  g_55 = t;
                return(t);
              }
              static ATerm f_8 (ATerm t)
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
                if(((e_55 != NULL) && (e_55 != t)))
                  _fail(t);
                else
                  e_55 = t;
                return(t);
              }
              t = Cons_2_0(e_8, f_8, t);
            }
            t = not_null(e_55);
            t = pair_0_0(t);
            t = map_1_0(g_8, t);
            f_55 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_55)), f_55));
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = map_1_0(l_8, t);
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
      ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,v_5 = NULL;
      s_58 = t;
      if(match_cons(t, sym_lit_1))
        {
          r_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_58);
      q_58 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, r_58);
      v_5 = t;
      t = SSLsetAnnotations(v_5, q_58);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_25;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm number_node_1_0 (ATerm e_35 (ATerm), ATerm t)
{
  static ATerm k_59 (ATerm t);
  static ATerm k_59 (ATerm t)
  {
    ATerm e_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(_id, Nil_0_0, t);
        t = (ATerm) ATempty;
        LocalPopChoice(h_25);
      }
    else
      {
        t = e_25;
        {
          ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
          if(match_cons(t, sym__2))
            {
              d_59 = ATgetArgument(t, 0);
              e_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_59;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_59 = ATgetFirst((ATermList) t);
              g_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm i_25 = t;
            int k_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_59 = NULL,i_59 = NULL;
                t = f_59;
                t = e_35(t);
                t = (ATerm) ATmakeAppl(sym__2, d_59, term_b_17);
                t = add_0_0(t);
                i_59 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_59, g_59);
                t = k_59(t);
                h_59 = t;
                t = (ATerm) ATinsert(CheckATermList(h_59), (ATerm) ATmakeAppl(sym__2, d_59, f_59));
                LocalPopChoice(k_25);
              }
            else
              {
                t = i_25;
                {
                  ATerm j_59 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, d_59, g_59);
                  t = k_59(t);
                  j_59 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_59), f_59);
                }
              }
          }
        }
      }
    return(t);
  }
  t = split_2_0(m_8, _id, t);
  t = k_59(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = try_1_0(o_8, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm l_59 = NULL;
  if(match_cons(t, sym_label_2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      l_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_59;
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(n_8, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = try_1_0(s_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm m_59 = NULL;
  m_59 = t;
  {
    ATerm q_25 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_25;
      }
  }
  t = (ATerm) ATinsert(ATempty, m_59);
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
  ATerm p_59 = NULL,q_59 = NULL,s_59 = NULL,t_59 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      s_59 = ATgetArgument(t, 0);
      t_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_59;
  if(match_cons(t, sym_alt_2))
    {
      p_59 = ATgetArgument(t, 0);
      q_59 = ATgetArgument(t, 1);
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_59 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, p_59, q_59);
            t = flat_alt_0_0(t);
            x_59 = t;
            t = (ATerm) ATinsert(CheckATermList(x_59), s_59);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = (ATerm) ATinsert(ATinsert(ATempty, t_59), s_59);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, t_59), s_59);
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = topdown_1_0(a_9, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = try_1_0(d_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,j_7 = NULL;
  v_61 = t;
  if(match_cons(t, sym_Arg_1))
    {
      u_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_61);
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, u_61);
  j_7 = t;
  t = SSLsetAnnotations(j_7, t_61);
  t = term_v_25;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = _2_0(_id, f_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  ATerm w_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          b_62 = ATgetArgument(t, 0);
          c_62 = ATgetArgument(t, 1);
          {
            ATerm d_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_25);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, b_62, c_62);
    }
  else
    {
      t = w_25;
      if(match_cons(t, sym_iter_n_2))
        {
          b_62 = ATgetArgument(t, 0);
          {
            ATerm e_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, b_62);
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm b_35 (ATerm), ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL;
  static ATerm k_63 (ATerm t);
  static ATerm k_63 (ATerm t)
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_61 = NULL,d_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL;
        if(match_cons(t, sym__2))
          {
            c_61 = ATgetArgument(t, 0);
            g_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_61;
        {
          ATerm h_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lit_1))
                {
                  ATerm j_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(i_26);
              t = (ATerm) ATempty;
            }
          else
            {
              t = h_26;
              if(match_cons(t, sym__2))
                {
                  h_61 = ATgetArgument(t, 0);
                  i_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_61;
              {
                ATerm k_26 = t;
                int m_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm n_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_26);
                    t = (ATerm) ATempty;
                  }
                else
                  {
                    t = k_26;
                    {
                      ATerm o_26 = t;
                      int p_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm q_26 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_26);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = o_26;
                          {
                            ATerm r_61 = NULL,s_61 = NULL;
                            if(match_cons(t, sym_alt_2))
                              {
                                j_61 = ATgetArgument(t, 0);
                                k_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = c_61;
                            if(match_cons(t, sym__2))
                              {
                                d_61 = ATgetArgument(t, 0);
                                f_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = k_61;
                            if(match_cons(t, sym_alt_2))
                              {
                                l_61 = ATgetArgument(t, 0);
                                m_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
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
                            t = h_61;
                            if(((z_60 != NULL) && (z_60 != t)))
                              _fail(t);
                            else
                              z_60 = t;
                            t = (ATerm) ATmakeAppl(sym_alt_2, j_61, (ATerm) ATmakeAppl(sym_alt_2, l_61, m_61));
                            t = flat_alt_0_0(t);
                            r_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_r_26, r_61);
                            t = mkterm_0_0(t);
                            s_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_61, f_61), (ATerm) ATmakeAppl(sym__2, h_61, s_61));
                            t = k_63(t);
                            t = Cons_2_0(w_8, _id, t);
                          }
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(_id, e_9, t);
              t = k_63(t);
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              {
                static ATerm l_63 (ATerm g_62, ATerm h_62, ATerm i_62, ATerm j_62, ATerm k_62, ATerm t);
                static ATerm l_63 (ATerm g_62, ATerm h_62, ATerm i_62, ATerm j_62, ATerm k_62, ATerm t)
                {
                  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,r_62 = NULL,s_62 = NULL,u_62 = NULL;
                  t = SSL_explode_term(j_62);
                  if(match_cons(t, sym__2))
                    {
                      r_62 = ATgetArgument(t, 0);
                      s_62 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, h_62, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, i_62, r_62)));
                  t = conc_0_0(t);
                  n_62 = t;
                  t = s_62;
                  t = argument_list_0_0(t);
                  t = number_nonterminals_0_0(t);
                  u_62 = t;
                  t = make_0_0(t);
                  o_62 = t;
                  t = u_62;
                  {
                    static ATerm g_9 (ATerm t);
                    static ATerm g_9 (ATerm t)
                    {
                      ATerm w_62 = NULL;
                      w_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_62, n_62), w_62);
                      t = k_63(t);
                      return(t);
                    }
                    t = map_1_0(g_9, t);
                  }
                  t = concat_0_0(t);
                  p_62 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_62), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, g_62, n_62), o_62));
                  return(t);
                }
                ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL;
                y_62 = t;
                if(match_cons(t, sym__2))
                  {
                    z_62 = ATgetArgument(t, 0);
                    c_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_62;
                if(match_cons(t, sym__2))
                  {
                    a_63 = ATgetArgument(t, 0);
                    b_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_63;
                if(match_cons(t, sym__2))
                  {
                    d_63 = ATgetArgument(t, 0);
                    e_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_63;
                if(match_cons(t, sym_bracket_symbol_1))
                  {
                    x_62 = ATgetArgument(t, 0);
                    {
                      ATerm u_26 = t;
                      int v_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_63, b_63), (ATerm) ATmakeAppl(sym__2, d_63, x_62));
                          t = k_63(t);
                          LocalPopChoice(v_26);
                        }
                      else
                        {
                          t = u_26;
                          t = l_63(a_63, b_63, d_63, e_63, y_62, t);
                        }
                    }
                  }
                else
                  {
                    t = l_63(a_63, b_63, d_63, e_63, y_62, t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    t = term_l_16;
    t = b_35(t);
    return(t);
  }
  t = split_2_0(v_8, _id, t);
  t = k_63(t);
  return(t);
}
static ATerm c_65 (ATerm t_63, ATerm u_63, ATerm v_63, ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,z_63 = NULL;
  t = v_63;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_63;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        {
          ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,f_64 = NULL;
          t = u_63;
          t = reverse_0_0(t);
          {
            static ATerm i_9 (ATerm t);
            static ATerm j_9 (ATerm t);
            static ATerm i_9 (ATerm t)
            {
              if(((x_63 != NULL) && (x_63 != t)))
                _fail(t);
              else
                x_63 = t;
              return(t);
            }
            static ATerm j_9 (ATerm t)
            {
              t = reverse_0_0(t);
              if(((w_63 != NULL) && (w_63 != t)))
                _fail(t);
              else
                w_63 = t;
              return(t);
            }
            t = Cons_2_0(i_9, j_9, t);
          }
          t = not_null(w_63);
          t = pp_table_get_0_0(t);
          t = Fst_0_0(t);
          if(match_cons(t, sym_Path_2))
            {
              f_64 = ATgetArgument(t, 0);
              b_64 = ATgetArgument(t, 1);
              t = b_64;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_64 = ATgetFirst((ATermList) t);
                  d_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_64;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, f_64, (ATerm) ATinsert(ATempty, c_64));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  f_64 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, f_64, (ATerm) ATempty);
            }
          z_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_63), t_63);
          {
            static ATerm m_9 (ATerm t);
            static ATerm m_9 (ATerm t)
            {
              t = z_63;
              return(t);
            }
            t = symbol2abox_1_0(m_9, t);
          }
          t = map_1_0(n_9, t);
          t = u_63;
          t = pp_table_get_0_0(t);
          t = Snd_0_0(t);
        }
      }
  }
  return(t);
}
static ATerm d_65 (ATerm l_64, ATerm m_64, ATerm n_64, ATerm o_64, ATerm p_64, ATerm t)
{
  t = p_64;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATmakeAppl(sym_prod_3, l_64, m_64, n_64);
        t = generate_pp_entries_0_0(t);
        t = map_1_0(p_9, t);
        t = o_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
      }
  }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      j_64 = ATgetArgument(t, 0);
      k_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(j_64, k_64, t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      u_64 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(u_64, v_64, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  w_64 = t;
  if(match_cons(t, sym__2))
    {
      x_64 = ATgetArgument(t, 0);
      b_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_64;
  if(match_cons(t, sym_prod_3))
    {
      y_64 = ATgetArgument(t, 0);
      z_64 = ATgetArgument(t, 1);
      a_65 = ATgetArgument(t, 2);
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_65(x_64, b_65, w_64, t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = d_65(y_64, z_64, a_65, b_65, w_64, t);
          }
      }
    }
  else
    {
      t = c_65(x_64, b_65, w_64, t);
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(d_27) != AT_INT) || (ATgetInt((ATermInt) d_27) != 34)))
        _fail(t);
      {
        ATerm e_27 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(e_27) != AT_LIST) || !(ATisEmpty(e_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm e_65 = NULL;
  t = explode_string_0_0(t);
  e_65 = t;
  {
    ATerm f_27 = t;
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
        t = f_27;
      }
  }
  t = e_65;
  {
    ATerm g_27 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(q_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_27;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_27)), e_65), (ATerm) ATinsert(ATempty, term_h_27));
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm g_65 = NULL,k_65 = NULL;
  ATerm i_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm m_27 = ATgetArgument(t, 0);
          ATerm o_27 = ATgetArgument(t, 1);
          ATerm p_27 = ATgetArgument(t, 2);
          g_65 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(l_27);
      {
        ATerm m_65 = NULL;
        t = g_65;
        {
          static ATerm r_9 (ATerm t);
          static ATerm r_9 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((m_65 != NULL) && (m_65 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_65 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(r_9, t);
        }
        t = not_null(m_65);
      }
    }
  else
    {
      t = i_27;
      {
        ATerm o_65 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm s_27 = ATgetArgument(t, 0);
            ATerm v_27 = ATgetArgument(t, 1);
            k_65 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_65;
        {
          static ATerm s_9 (ATerm t);
          static ATerm s_9 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((o_65 != NULL) && (o_65 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_65 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(s_9, t);
        }
        t = not_null(o_65);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL;
  if(match_cons(t, sym__2))
    {
      x_65 = ATgetArgument(t, 0);
      b_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_65;
  if(match_cons(t, sym_prod_fun_4))
    {
      y_65 = ATgetArgument(t, 0);
      z_65 = ATgetArgument(t, 1);
      a_66 = ATgetArgument(t, 2);
      u_65 = ATgetArgument(t, 3);
      t = u_65;
      if(match_cons(t, sym_attrs_1))
        {
          t_65 = ATgetArgument(t, 0);
          {
            ATerm i_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, t_65, b_66);
            t = conc_0_0(t);
            i_66 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, y_65, z_65, a_66, (ATerm) ATmakeAppl(sym_attrs_1, i_66));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, y_65, z_65, a_66, (ATerm) ATmakeAppl(sym_attrs_1, b_66));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          y_65 = ATgetArgument(t, 0);
          z_65 = ATgetArgument(t, 1);
          a_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_66;
      if(match_cons(t, sym_attrs_1))
        {
          v_65 = ATgetArgument(t, 0);
          {
            ATerm r_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, v_65, b_66);
            t = conc_0_0(t);
            r_66 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, y_65, z_65, (ATerm) ATmakeAppl(sym_attrs_1, r_66));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, y_65, z_65, (ATerm) ATmakeAppl(sym_attrs_1, b_66));
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
static ATerm v_9 (ATerm t)
{
  ATerm w_27 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_27;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm x_66 = NULL;
  x_66 = t;
  t = string_Hd_0_0(t);
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_upper_0_0(t);
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = is_lower_0_0(t);
      }
  }
  t = x_66;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm w_66 = NULL;
  t = filter_1_0(v_9, t);
  t = Cons_2_0(w_9, _id, t);
  t = separate_by_1_0(b_10, t);
  t = concat_strings_0_0(t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_66, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), term_p_28), term_n_28), term_m_28), term_l_28), term_k_28), term_j_28), term_i_28), term_f_28), term_e_28), term_c_28), term_b_28), term_a_28));
  {
    ATerm s_28 = t;
    if((PushChoice() == 0))
      {
        t = is_subterm_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_28;
      }
  }
  t = w_66;
  t = escape_0_0(t);
  t = quote_0_0(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_28);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_28);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_28);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
  d_67 = t;
  if(match_cons(t, sym_cf_1))
    {
      b_67 = ATgetArgument(t, 0);
      t = b_67;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          b_67 = ATgetArgument(t, 0);
          t = b_67;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_x_28);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  b_67 = ATgetArgument(t, 0);
                  c_67 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(c_67), b_67);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      b_67 = ATgetArgument(t, 0);
                      t = b_67;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(c_10, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          b_67 = ATgetArgument(t, 0);
                          t = b_67;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(d_10, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              b_67 = ATgetArgument(t, 0);
                              t = b_67;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(h_10, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  b_67 = ATgetArgument(t, 0);
                                  c_67 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_67 = NULL,o_67 = NULL;
                                    t = b_67;
                                    t = Sym2Strs_0_0(t);
                                    n_67 = t;
                                    t = c_67;
                                    t = Sym2Strs_0_0(t);
                                    o_67 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_28)), o_67), n_67);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      b_67 = ATgetArgument(t, 0);
                                      c_67 = ATgetArgument(t, 1);
                                      {
                                        ATerm r_67 = NULL,s_67 = NULL;
                                        t = b_67;
                                        t = Sym2Strs_0_0(t);
                                        r_67 = t;
                                        t = c_67;
                                        t = Sym2Strs_0_0(t);
                                        s_67 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_28)), s_67), r_67);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm z_28 = t;
                                      int a_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              b_67 = ATgetArgument(t, 0);
                                              {
                                                ATerm b_29 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(a_29);
                                          {
                                            ATerm v_67 = NULL;
                                            t = b_67;
                                            t = Sym2Strs_0_0(t);
                                            v_67 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_29)), v_67);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = z_28;
                                          {
                                            ATerm d_29 = t;
                                            int f_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    b_67 = ATgetArgument(t, 0);
                                                    c_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm h_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(f_29);
                                                {
                                                  ATerm z_67 = NULL,a_68 = NULL;
                                                  t = b_67;
                                                  t = Sym2Strs_0_0(t);
                                                  z_67 = t;
                                                  t = c_67;
                                                  t = Sym2Strs_0_0(t);
                                                  a_68 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_29)), a_68), z_67);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = d_29;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    b_67 = ATgetArgument(t, 0);
                                                    c_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_68 = NULL,e_68 = NULL;
                                                      t = b_67;
                                                      t = Sym2Strs_0_0(t);
                                                      d_68 = t;
                                                      t = c_67;
                                                      t = Sym2Strs_0_0(t);
                                                      e_68 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_68), (ATerm) ATinsert(ATempty, term_i_29)), d_68);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        b_67 = ATgetArgument(t, 0);
                                                        c_67 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_68 = NULL,i_68 = NULL;
                                                          t = b_67;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          h_68 = t;
                                                          t = c_67;
                                                          t = Sym2Strs_0_0(t);
                                                          i_68 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_68), (ATerm) ATinsert(ATempty, term_j_29)), h_68);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            b_67 = ATgetArgument(t, 0);
                                                            c_67 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_68 = NULL,m_68 = NULL;
                                                              t = b_67;
                                                              t = Sym2Strs_0_0(t);
                                                              l_68 = t;
                                                              t = c_67;
                                                              t = Sym2Strs_0_0(t);
                                                              m_68 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_68), (ATerm) ATinsert(ATempty, term_k_29)), l_68);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                b_67 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, b_67);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    b_67 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm p_68 = NULL;
                                                                      t = b_67;
                                                                      t = try_1_0(k_10, t);
                                                                      p_68 = t;
                                                                      t = (ATerm) ATinsert(ATempty, p_68);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm l_29 = t;
                                                                    int m_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            b_67 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm o_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(m_29);
                                                                        {
                                                                          ATerm r_68 = NULL;
                                                                          t = b_67;
                                                                          t = try_1_0(l_10, t);
                                                                          r_68 = t;
                                                                          t = (ATerm) ATinsert(ATempty, r_68);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_29;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_p_29);
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm m_10 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(m_10, t);
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_27)), n_27), (ATerm) ATinsert(ATempty, term_h_27));
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_29 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_29) != AT_INT) || (ATgetInt((ATermInt) t_29) != 34)))
        _fail(t);
      {
        ATerm u_29 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(u_29) != AT_LIST) || !(ATisEmpty(u_29))))
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
  ATerm j_72 = NULL;
  t = explode_string_0_0(t);
  j_72 = t;
  t = Hd_0_0(t);
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = j_72;
  t = Tl_0_0(t);
  t = at_last_1_0(n_10, t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm f_69 (ATerm z_68, ATerm t)
{
  t = z_68;
  t = explode_string_0_0(t);
  {
    ATerm v_29 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(o_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_29;
      }
  }
  t = term_w_29;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_num_0_0(t);
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
            t = is_upper_0_0(t);
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_lower_0_0(t);
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_l_16;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm e_69 = NULL;
  e_69 = t;
  if(match_string(t, "|="))
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_69(e_69, t);
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          t = term_f_30;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_69(e_69, t);
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              t = term_i_30;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm k_30 = t;
              int l_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_69(e_69, t);
                  LocalPopChoice(l_30);
                }
              else
                {
                  t = k_30;
                  t = term_m_30;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm n_30 = t;
                  int o_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_69(e_69, t);
                      LocalPopChoice(o_30);
                    }
                  else
                    {
                      t = n_30;
                      t = term_p_30;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm q_30 = t;
                      int r_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_69(e_69, t);
                          LocalPopChoice(r_30);
                        }
                      else
                        {
                          t = q_30;
                          t = term_s_30;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm t_30 = t;
                          int u_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_69(e_69, t);
                              LocalPopChoice(u_30);
                            }
                          else
                            {
                              t = t_30;
                              t = term_w_30;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm x_30 = t;
                              int y_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_69(e_69, t);
                                  LocalPopChoice(y_30);
                                }
                              else
                                {
                                  t = x_30;
                                  t = term_z_30;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm a_31 = t;
                                  int b_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = f_69(e_69, t);
                                      LocalPopChoice(b_31);
                                    }
                                  else
                                    {
                                      t = a_31;
                                      t = term_c_31;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm d_31 = t;
                                      int e_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = f_69(e_69, t);
                                          LocalPopChoice(e_31);
                                        }
                                      else
                                        {
                                          t = d_31;
                                          t = term_f_31;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm g_31 = t;
                                          int h_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = f_69(e_69, t);
                                              LocalPopChoice(h_31);
                                            }
                                          else
                                            {
                                              t = g_31;
                                              t = term_i_31;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm j_31 = t;
                                              int k_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = f_69(e_69, t);
                                                  LocalPopChoice(k_31);
                                                }
                                              else
                                                {
                                                  t = j_31;
                                                  t = term_l_31;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm n_31 = t;
                                                  int o_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = f_69(e_69, t);
                                                      LocalPopChoice(o_31);
                                                    }
                                                  else
                                                    {
                                                      t = n_31;
                                                      t = term_p_31;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm q_31 = t;
                                                      int r_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = f_69(e_69, t);
                                                          LocalPopChoice(r_31);
                                                        }
                                                      else
                                                        {
                                                          t = q_31;
                                                          t = term_s_31;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm t_31 = t;
                                                          int u_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = f_69(e_69, t);
                                                              LocalPopChoice(u_31);
                                                            }
                                                          else
                                                            {
                                                              t = t_31;
                                                              t = term_k_29;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm v_31 = t;
                                                              int x_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = f_69(e_69, t);
                                                                  LocalPopChoice(x_31);
                                                                }
                                                              else
                                                                {
                                                                  t = v_31;
                                                                  t = term_y_31;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm z_31 = t;
                                                                  int b_32 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = f_69(e_69, t);
                                                                      LocalPopChoice(b_32);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_31;
                                                                      t = term_y_31;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm c_32 = t;
                                                                      int d_32 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = f_69(e_69, t);
                                                                          LocalPopChoice(d_32);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_32;
                                                                          t = term_e_32;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm f_32 = t;
                                                                          int g_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = f_69(e_69, t);
                                                                              LocalPopChoice(g_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_32;
                                                                              t = term_h_32;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm i_32 = t;
                                                                              int j_32 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = f_69(e_69, t);
                                                                                  LocalPopChoice(j_32);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = i_32;
                                                                                  t = term_k_32;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm l_32 = t;
                                                                                  int m_32 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = f_69(e_69, t);
                                                                                      LocalPopChoice(m_32);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_32;
                                                                                      t = term_n_32;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm o_32 = t;
                                                                                      int p_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = f_69(e_69, t);
                                                                                          LocalPopChoice(p_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_32;
                                                                                          t = term_q_32;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm s_32 = t;
                                                                                          int t_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = f_69(e_69, t);
                                                                                              LocalPopChoice(t_32);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_32;
                                                                                              t = term_u_32;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm v_32 = t;
                                                                                              int w_32 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = f_69(e_69, t);
                                                                                                  LocalPopChoice(w_32);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_32;
                                                                                                  t = term_x_32;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm y_32 = t;
                                                                                                  int a_33 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = f_69(e_69, t);
                                                                                                      LocalPopChoice(a_33);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_32;
                                                                                                      t = term_c_33;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm d_33 = t;
                                                                                                      int e_33 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = f_69(e_69, t);
                                                                                                          LocalPopChoice(e_33);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = d_33;
                                                                                                          t = term_f_33;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm g_33 = t;
                                                                                                          int h_33 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = f_69(e_69, t);
                                                                                                              LocalPopChoice(h_33);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = g_33;
                                                                                                              t = term_i_33;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm j_33 = t;
                                                                                                              int k_33 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = f_69(e_69, t);
                                                                                                                  LocalPopChoice(k_33);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_33;
                                                                                                                  t = term_l_33;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm m_33 = t;
                                                                                                                  int n_33 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = f_69(e_69, t);
                                                                                                                      LocalPopChoice(n_33);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = m_33;
                                                                                                                      t = term_o_33;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm p_33 = t;
                                                                                                                      int q_33 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = f_69(e_69, t);
                                                                                                                          LocalPopChoice(q_33);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = p_33;
                                                                                                                          t = term_i_29;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm r_33 = t;
                                                                                                                          int s_33 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = f_69(e_69, t);
                                                                                                                              LocalPopChoice(s_33);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_33;
                                                                                                                              t = term_t_33;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm u_33 = t;
                                                                                                                              int v_33 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = f_69(e_69, t);
                                                                                                                                  LocalPopChoice(v_33);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = u_33;
                                                                                                                                  t = term_x_33;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm y_33 = t;
                                                                                                                                  int z_33 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = f_69(e_69, t);
                                                                                                                                      LocalPopChoice(z_33);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = y_33;
                                                                                                                                      t = term_a_34;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm b_34 = t;
                                                                                                                                      int c_34 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = f_69(e_69, t);
                                                                                                                                          LocalPopChoice(c_34);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_34;
                                                                                                                                          t = term_d_34;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm e_34 = t;
                                                                                                                                          int f_34 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = f_69(e_69, t);
                                                                                                                                              LocalPopChoice(f_34);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = e_34;
                                                                                                                                              t = term_g_34;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm h_34 = t;
                                                                                                                                              int i_34 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = f_69(e_69, t);
                                                                                                                                                  LocalPopChoice(i_34);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = h_34;
                                                                                                                                                  t = term_j_34;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm k_34 = t;
                                                                                                                                                  int l_34 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = f_69(e_69, t);
                                                                                                                                                      LocalPopChoice(l_34);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = k_34;
                                                                                                                                                      t = term_m_34;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm n_34 = t;
                                                                                                                                                      int o_34 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = f_69(e_69, t);
                                                                                                                                                          LocalPopChoice(o_34);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = n_34;
                                                                                                                                                          t = term_p_34;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm q_34 = t;
                                                                                                                                                          int r_34 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = f_69(e_69, t);
                                                                                                                                                              LocalPopChoice(r_34);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = q_34;
                                                                                                                                                              t = term_s_34;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = f_69(e_69, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_69 = ATgetFirst((ATermList) t);
      q_69 = (ATerm) ATgetNext((ATermList) t);
      t = q_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_69 = ATgetFirst((ATermList) t);
          o_69 = (ATerm) ATgetNext((ATermList) t);
          t = n_69;
          if(match_int(t, 34))
            {
              t = p_69;
              if(match_int(t, 92))
                {
                  ATerm u_34 = t;
                  int c_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_69 = NULL;
                      t = o_69;
                      t = De_Escape_0_0(t);
                      t_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(t_69), term_h_27);
                      LocalPopChoice(c_35);
                    }
                  else
                    {
                      t = u_34;
                      {
                        ATerm w_69 = NULL;
                        t = q_69;
                        t = De_Escape_0_0(t);
                        w_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(w_69), p_69);
                      }
                    }
                }
              else
                {
                  ATerm z_69 = NULL;
                  t = q_69;
                  t = De_Escape_0_0(t);
                  z_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(z_69), p_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = p_69;
                  if(match_int(t, 92))
                    {
                      ATerm d_35 = t;
                      int f_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_70 = NULL;
                          t = o_69;
                          t = De_Escape_0_0(t);
                          b_70 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_70), term_g_35);
                          LocalPopChoice(f_35);
                        }
                      else
                        {
                          t = d_35;
                          {
                            ATerm e_70 = NULL;
                            t = q_69;
                            t = De_Escape_0_0(t);
                            e_70 = t;
                            t = (ATerm) ATinsert(CheckATermList(e_70), p_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm h_70 = NULL;
                      t = q_69;
                      t = De_Escape_0_0(t);
                      h_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_70), p_69);
                    }
                }
              else
                {
                  ATerm k_70 = NULL;
                  t = q_69;
                  t = De_Escape_0_0(t);
                  k_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_70), p_69);
                }
            }
        }
      else
        {
          ATerm n_70 = NULL;
          t = q_69;
          t = De_Escape_0_0(t);
          n_70 = t;
          t = (ATerm) ATinsert(CheckATermList(n_70), p_69);
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
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_70 = ATgetFirst((ATermList) t);
      y_70 = (ATerm) ATgetNext((ATermList) t);
      t = y_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_70 = ATgetFirst((ATermList) t);
          w_70 = (ATerm) ATgetNext((ATermList) t);
          t = v_70;
          if(match_int(t, 34))
            {
              t = x_70;
              if(match_int(t, 92))
                {
                  ATerm h_35 = t;
                  int i_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_71 = NULL;
                      t = w_70;
                      t = De_Escape_0_0(t);
                      b_71 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_71), term_h_27);
                      LocalPopChoice(i_35);
                    }
                  else
                    {
                      t = h_35;
                      {
                        ATerm e_71 = NULL;
                        t = y_70;
                        t = De_Escape_0_0(t);
                        e_71 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_71), x_70);
                      }
                    }
                }
              else
                {
                  ATerm h_71 = NULL;
                  t = y_70;
                  t = De_Escape_0_0(t);
                  h_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_71), x_70);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = x_70;
                  if(match_int(t, 92))
                    {
                      ATerm j_35 = t;
                      int k_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_71 = NULL;
                          t = w_70;
                          t = De_Escape_0_0(t);
                          j_71 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_71), term_g_35);
                          LocalPopChoice(k_35);
                        }
                      else
                        {
                          t = j_35;
                          {
                            ATerm m_71 = NULL;
                            t = y_70;
                            t = De_Escape_0_0(t);
                            m_71 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_71), x_70);
                          }
                        }
                    }
                  else
                    {
                      ATerm p_71 = NULL;
                      t = y_70;
                      t = De_Escape_0_0(t);
                      p_71 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_71), x_70);
                    }
                }
              else
                {
                  ATerm s_71 = NULL;
                  t = y_70;
                  t = De_Escape_0_0(t);
                  s_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_71), x_70);
                }
            }
        }
      else
        {
          ATerm v_71 = NULL;
          t = y_70;
          t = De_Escape_0_0(t);
          v_71 = t;
          t = (ATerm) ATinsert(CheckATermList(v_71), x_70);
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
ATerm list_ana_1_0 (ATerm v_36 (ATerm), ATerm t)
{
  static ATerm c_72 (ATerm t);
  static ATerm c_72 (ATerm t)
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_71 = NULL;
        t = v_36(t);
        x_71 = t;
        t = (ATerm) ATinsert(ATempty, x_71);
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        {
          ATerm o_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_72 = NULL,j_27 = NULL;
              b_72 = t;
              t = SSL_explode_term(b_72);
              if(match_cons(t, sym__2))
                {
                  ATerm q_35 = ATgetArgument(t, 0);
                  j_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_27;
              t = filter_1_0(c_72, t);
              t = concat_0_0(t);
              LocalPopChoice(p_35);
            }
          else
            {
              t = o_35;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = c_72(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm f_72 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      f_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_72;
  t = try_1_0(v_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  t = list_ana_1_0(p_10, t);
  t = separate_by_1_0(w_10, t);
  t = concat_strings_0_0(t);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
      }
  }
  return(t);
}
static ATerm h_73 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t)
{
  ATerm s_72 = NULL;
  t = p_72;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_72;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        s_72 = t;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_72 = NULL,v_72 = NULL;
              t = (ATerm) ATinsert(ATempty, o_72);
              t = syms2strs_0_0(t);
              u_72 = t;
              t = n_72;
              t = filter_1_0(lit2str_0_0, t);
              v_72 = t;
              t = filter_1_0(x_10, t);
              t = Hd_0_0(t);
              t = (ATerm) ATmakeAppl(sym__2, u_72, v_72);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              s_72 = t;
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              {
                ATerm x_35 = t;
                int y_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_72;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    s_72 = t;
                    LocalPopChoice(y_35);
                  }
                else
                  {
                    t = x_35;
                    {
                      ATerm w_72 = NULL,x_72 = NULL;
                      t = (ATerm) ATinsert(ATempty, o_72);
                      t = syms2strs_0_0(t);
                      w_72 = t;
                      t = term_l_16;
                      t = new_0_0(t);
                      x_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_72, (ATerm) ATinsert(ATinsert(ATempty, x_72), term_z_35));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      s_72 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = s_72;
  return(t);
}
static ATerm x_10 (ATerm t)
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
static ATerm y_10 (ATerm t)
{
  ATerm e_73 = NULL;
  e_73 = t;
  {
    ATerm d_36 = t;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_36;
      }
  }
  t = e_73;
  t = quote_0_0(t);
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL;
  z_72 = t;
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            a_73 = ATgetArgument(t, 0);
            {
              ATerm g_36 = ATgetArgument(t, 1);
            }
            {
              ATerm h_36 = ATgetArgument(t, 2);
            }
            {
              ATerm l_36 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_36);
        t = a_73;
        t = try_1_0(y_10, t);
      }
    else
      {
        t = e_36;
        if(match_cons(t, sym_prod_3))
          {
            a_73 = ATgetArgument(t, 0);
            b_73 = ATgetArgument(t, 1);
            {
              ATerm m_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_73;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm n_36 = t;
            int o_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_73(a_73, b_73, z_72, t);
                LocalPopChoice(o_36);
              }
            else
              {
                t = n_36;
                {
                  ATerm g_73 = NULL;
                  t = (ATerm) ATinsert(ATempty, b_73);
                  t = syms2strs_0_0(t);
                  g_73 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_73, (ATerm) ATinsert(ATempty, term_q_36));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = h_73(a_73, b_73, z_72, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
  m_75 = t;
  if(match_cons(t, sym_sort_1))
    {
      n_75 = ATgetArgument(t, 0);
      {
        ATerm q_27 = NULL,m_7 = NULL;
        t = SSLgetAnnotations(m_75);
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, n_75);
        m_7 = t;
        t = SSLsetAnnotations(m_7, q_27);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          n_75 = ATgetArgument(t, 0);
          o_75 = ATgetArgument(t, 1);
          {
            ATerm d_28 = NULL,g_28 = NULL,h_28 = NULL,n_7 = NULL;
            t = SSLgetAnnotations(m_75);
            d_28 = t;
            t = n_75;
            t = syntaxless_sort_0_0(t);
            g_28 = t;
            t = o_75;
            t = syntaxless_sort_0_0(t);
            h_28 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, g_28, h_28);
            n_7 = t;
            t = SSLsetAnnotations(n_7, d_28);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              n_75 = ATgetArgument(t, 0);
              {
                ATerm o_28 = NULL,q_28 = NULL,o_7 = NULL;
                t = SSLgetAnnotations(m_75);
                o_28 = t;
                t = n_75;
                t = syntaxless_sort_0_0(t);
                q_28 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, q_28);
                o_7 = t;
                t = SSLsetAnnotations(o_7, o_28);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  n_75 = ATgetArgument(t, 0);
                  {
                    ATerm w_28 = NULL,y_28 = NULL,r_7 = NULL;
                    t = SSLgetAnnotations(m_75);
                    w_28 = t;
                    t = n_75;
                    t = syntaxless_sort_0_0(t);
                    y_28 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, y_28);
                    r_7 = t;
                    t = SSLsetAnnotations(r_7, w_28);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      n_75 = ATgetArgument(t, 0);
                      {
                        ATerm e_29 = NULL,g_29 = NULL,t_7 = NULL;
                        t = SSLgetAnnotations(m_75);
                        e_29 = t;
                        t = n_75;
                        t = syntaxless_sort_0_0(t);
                        g_29 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, g_29);
                        t_7 = t;
                        t = SSLsetAnnotations(t_7, e_29);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          n_75 = ATgetArgument(t, 0);
                          o_75 = ATgetArgument(t, 1);
                          {
                            ATerm n_29 = NULL,q_29 = NULL,u_7 = NULL;
                            t = SSLgetAnnotations(m_75);
                            n_29 = t;
                            t = n_75;
                            t = syntaxless_sort_0_0(t);
                            q_29 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_29, o_75);
                            u_7 = t;
                            t = SSLsetAnnotations(u_7, n_29);
                          }
                        }
                      else
                        {
                          ATerm j_30 = NULL,v_30 = NULL,v_7 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              n_75 = ATgetArgument(t, 0);
                              o_75 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(m_75);
                          j_30 = t;
                          t = n_75;
                          t = syntaxless_sort_0_0(t);
                          v_30 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, v_30, o_75);
                          v_7 = t;
                          t = SSLsetAnnotations(v_7, j_30);
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
  t = term_r_36;
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,p_8 = NULL;
  f_76 = t;
  if(match_cons(t, sym_prod_3))
    {
      a_76 = ATgetArgument(t, 0);
      b_76 = ATgetArgument(t, 1);
      c_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_76);
  z_75 = t;
  t = a_76;
  t = Cons_2_0(syntaxless_sort_0_0, Nil_0_0, t);
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, d_76, b_76, c_76);
  p_8 = t;
  t = SSLsetAnnotations(p_8, z_75);
  e_76 = t;
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = has_option_1_0(z_10, t);
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = term_u_36;
        t = get_config_0_0(t);
      }
  }
  t = e_76;
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
  ATerm h_76 = NULL,l_76 = NULL;
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm y_36 = ATgetArgument(t, 0);
          ATerm z_36 = ATgetArgument(t, 1);
          ATerm a_37 = ATgetArgument(t, 2);
          h_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(x_36);
      t = h_76;
      t = oncetd_1_0(a_11, t);
      t = term_l_16;
    }
  else
    {
      t = w_36;
      if(match_cons(t, sym_prod_3))
        {
          ATerm b_37 = ATgetArgument(t, 0);
          ATerm e_37 = ATgetArgument(t, 1);
          l_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_76;
      t = oncetd_1_0(b_11, t);
      t = term_l_16;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm p_76 = NULL,t_76 = NULL;
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm h_37 = ATgetArgument(t, 0);
          ATerm i_37 = ATgetArgument(t, 1);
          ATerm j_37 = ATgetArgument(t, 2);
          p_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(g_37);
      t = p_76;
      t = oncetd_1_0(d_11, t);
      t = term_l_16;
    }
  else
    {
      t = f_37;
      if(match_cons(t, sym_prod_3))
        {
          ATerm k_37 = ATgetArgument(t, 0);
          ATerm l_37 = ATgetArgument(t, 1);
          t_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_76;
      t = oncetd_1_0(e_11, t);
      t = term_l_16;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm a_77 = NULL;
  a_77 = t;
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_31 = NULL;
        t = a_77;
        {
          ATerm o_37 = t;
          if((PushChoice() == 0))
            {
              ATerm p_37 = t;
              int q_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
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
                        t = is_bracket_0_0(t);
                        LocalPopChoice(s_37);
                      }
                    else
                      {
                        t = r_37;
                        {
                          ATerm t_37 = t;
                          int u_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(u_37);
                            }
                          else
                            {
                              t = t_37;
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
              t = o_37;
            }
        }
        t = a_77;
        t = mk_constr_0_0(t);
        m_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_77, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, m_31))));
        t = add_attributes_0_0(t);
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        {
          ATerm c_77 = NULL;
          static ATerm g_11 (ATerm t);
          static ATerm g_11 (ATerm t)
          {
            ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,r_8 = NULL;
            f_77 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm v_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_77);
            d_77 = t;
            t = not_null(c_77);
            t = uq2q_0_0(t);
            e_77 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, e_77);
            r_8 = t;
            t = SSLsetAnnotations(r_8, d_77);
            return(t);
          }
          t = a_77;
          t = get_constr_0_0(t);
          if(((c_77 != NULL) && (c_77 != t)))
            _fail(t);
          else
            c_77 = t;
          t = a_77;
          t = oncetd_1_0(g_11, t);
        }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm s_10, ATerm t_10, ATerm r_10, ATerm q_10, ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL;
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm h_11 (ATerm t);
      static ATerm h_11 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((h_77 != NULL) && (h_77 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              h_77 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = r_10;
      t = oncetd_1_0(h_11, t);
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
      {
        ATerm y_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,u_8 = NULL,t_8 = NULL;
            t = t_10;
            if(match_cons(t, sym_sort_1))
              {
                q_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_10);
            p_77 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, q_77);
            t_8 = t;
            t = SSLsetAnnotations(t_8, p_77);
            t = (ATerm) ATmakeAppl(sym_prod_3, s_10, t_10, r_10);
            t = prodcons_0_0(t);
            o_77 = t;
            if(match_cons(t, sym_prod_3))
              {
                k_77 = ATgetArgument(t, 0);
                l_77 = ATgetArgument(t, 1);
                m_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_77);
            j_77 = t;
            t = m_77;
            {
              static ATerm j_11 (ATerm t);
              static ATerm j_11 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((h_77 != NULL) && (h_77 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      h_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(j_11, t);
            }
            n_77 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, k_77, l_77, n_77);
            u_8 = t;
            t = SSLsetAnnotations(u_8, j_77);
            LocalPopChoice(z_37);
          }
        else
          {
            t = y_37;
            t = term_a_38;
            h_77 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, s_10, t_10, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(h_77))))), (ATerm) ATinsert(ATempty, not_null(h_77)));
  t = get_pp_entry_0_0(t);
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_77), i_77);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm b_38 = t;
  if((PushChoice() == 0))
    {
      ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,s_12 = NULL;
      y_77 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_77);
      w_77 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_77);
      s_12 = t;
      t = SSLsetAnnotations(s_12, w_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_38;
    }
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm c_38 = t;
  if((PushChoice() == 0))
    {
      ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,y_12 = NULL;
      b_78 = t;
      if(match_cons(t, sym_lit_1))
        {
          a_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_78);
      z_77 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, a_78);
      y_12 = t;
      t = SSLsetAnnotations(y_12, z_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_38;
    }
  return(t);
}
static ATerm r_6 (ATerm z_9, ATerm x_9, ATerm y_9, ATerm a_10, ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL;
  static ATerm o_11 (ATerm t);
  static ATerm o_11 (ATerm t)
  {
    static ATerm p_11 (ATerm t);
    static ATerm p_11 (ATerm t)
    {
      ATerm d_38 = t;
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_11 (ATerm t);
          static ATerm q_11 (ATerm t)
          {
            t = not_null(t_77);
            return(t);
          }
          t = Instantiate_1_0(q_11, t);
          LocalPopChoice(e_38);
        }
      else
        {
          t = d_38;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(p_11, t);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, z_9, x_9, y_9), a_10);
  t = q_6(z_9, x_9, y_9, a_10, t);
  if(match_cons(t, sym__2))
    {
      r_77 = ATgetArgument(t, 0);
      s_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9;
  t = filter_1_0(l_11, t);
  u_77 = t;
  t = a_10;
  t = filter_1_0(n_11, t);
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__4, u_77, v_77, (ATerm)ATinsert(ATempty, r_77), term_b_17);
  t = seq2abox_0_0(t);
  if(((t_77 != NULL) && (t_77 != t)))
    _fail(t);
  else
    t_77 = t;
  t = s_77;
  t = bottomup_1_0(o_11, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_78;
  t = int_to_string_0_0(t);
  q_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_78), term_g_38), q_78), term_f_38);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      e_78 = ATgetArgument(t, 0);
      t = e_78;
    }
  else
    {
      ATerm n_78 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          e_78 = ATgetArgument(t, 0);
          f_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_78;
      t = map_1_0(r_11, t);
      t = concat_0_0(t);
      n_78 = t;
      t = (ATerm) ATinsert(CheckATermList(n_78), e_78);
      t = concat_strings_0_0(t);
    }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm d_79 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      d_79 = ATgetArgument(t, 0);
      {
        ATerm h_38 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_79;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      t_78 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, t_78);
    }
  else
    {
      ATerm c_79 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          t_78 = ATgetArgument(t, 0);
          u_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_78;
      t = map_1_0(s_11, t);
      c_79 = t;
      t = (ATerm) ATinsert(CheckATermList(c_79), t_78);
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
  t = term_i_38;
  return(t);
}
static ATerm s_6 (ATerm f_18, ATerm g_18, ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL;
  t = f_18;
  t = mk_key_0_0(t);
  f_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_20, f_79, (ATerm) ATmakeAppl(sym__2, f_18, g_18));
  t = table_put_0_0(t);
  t = f_18;
  t = path_to_string_0_0(t);
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_79, g_18);
  t = if_verbose1_1_0(u_11, t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  if(match_cons(t, sym_Arg_1))
    {
      x_80 = ATgetArgument(t, 0);
      {
        ATerm w_31 = NULL,a_32 = NULL,c_13 = NULL;
        t = SSLgetAnnotations(w_80);
        w_31 = t;
        t = x_80;
        t = string_to_int_0_0(t);
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, a_32);
        c_13 = t;
        t = SSLsetAnnotations(c_13, w_31);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          x_80 = ATgetArgument(t, 0);
          y_80 = ATgetArgument(t, 1);
          {
            ATerm r_32 = NULL,z_32 = NULL,b_33 = NULL,d_13 = NULL;
            t = SSLgetAnnotations(w_80);
            r_32 = t;
            t = x_80;
            t = string_to_int_0_0(t);
            z_32 = t;
            t = y_80;
            t = string_to_int_0_0(t);
            b_33 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, z_32, b_33);
            d_13 = t;
            t = SSLsetAnnotations(d_13, r_32);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              x_80 = ATgetArgument(t, 0);
              y_80 = ATgetArgument(t, 1);
              {
                ATerm w_33 = NULL,k_13 = NULL;
                t = SSLgetAnnotations(w_80);
                w_33 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, x_80, y_80);
                k_13 = t;
                t = SSLsetAnnotations(k_13, w_33);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  x_80 = ATgetArgument(t, 0);
                  {
                    ATerm t_34 = NULL,z_34 = NULL,q_13 = NULL;
                    t = SSLgetAnnotations(w_80);
                    t_34 = t;
                    t = x_80;
                    t = un_double_quote_0_0(t);
                    t = unescape_0_0(t);
                    z_34 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, z_34);
                    q_13 = t;
                    t = SSLsetAnnotations(q_13, t_34);
                  }
                }
              else
                {
                  ATerm a_36 = NULL,j_36 = NULL,w_13 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      x_80 = ATgetArgument(t, 0);
                      y_80 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_80);
                  a_36 = t;
                  t = x_80;
                  t = string_to_int_0_0(t);
                  j_36 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, j_36, y_80);
                  w_13 = t;
                  t = SSLsetAnnotations(w_13, a_36);
                }
            }
        }
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL;
  t = topdown_1_0(x_11, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      e_81 = ATgetArgument(t, 0);
      f_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(e_81, f_81, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = try_1_0(MakePPTerm_0_0, t);
  return(t);
}
static ATerm t_6 (ATerm e_18, ATerm t)
{
  t = e_18;
  t = reverse_0_0(t);
  t = map_1_0(w_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_j_38;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(y_11, t);
      t = (ATerm) ATinsert(ATempty, term_m_38);
      t = fatal_error_0_0(t);
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      t = (ATerm) ATinsert(ATempty, term_n_38);
      t = error_0_0(t);
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,c_37 = NULL,d_37 = NULL;
  t = if_verbose1_1_0(a_12, t);
  t = ReadFromFile_0_0(t);
  l_81 = t;
  t = SSL_explode_term(l_81);
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      {
        ATerm o_38 = ATgetArgument(t, 1);
        if(((ATgetType(o_38) == AT_LIST) && !(ATisEmpty(o_38))))
          {
            c_37 = ATgetFirst((ATermList) o_38);
            {
              ATerm p_38 = (ATerm) ATgetNext((ATermList) o_38);
              if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
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
  t = c_37;
  if(match_cons(t, sym_PP_Table_1))
    {
      k_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(k_81, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = debug_1_0(b_12, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm j_81 = NULL;
  j_81 = t;
  t = term_i_20;
  t = table_create_0_0(t);
  t = j_81;
  t = map_1_0(z_11, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm p_81 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      p_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_81;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = sometd_1_0(e_12, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm q_81 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      q_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_81;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = topdown_1_0(h_12, t);
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL;
        x_81 = t;
        if(match_cons(t, sym_appl_2))
          {
            y_81 = ATgetArgument(t, 0);
            c_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_81;
        if(match_cons(t, sym_prod_3))
          {
            z_81 = ATgetArgument(t, 0);
            a_82 = ATgetArgument(t, 1);
            b_82 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = x_81;
        t = r_6(z_81, a_82, b_82, c_82, t);
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = fatal_ambiguity_0_0(t);
      }
  }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = collect_p__1_0(l_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = try_1_0(j_12, t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = is_list_0_0(t);
  t = filter_1_0(k_12, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm t_38 = t;
  if((PushChoice() == 0))
    {
      ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,n_14 = NULL;
      t_81 = t;
      if(match_cons(t, sym_opt_1))
        {
          s_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_81);
      r_81 = t;
      t = s_81;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, s_81);
      n_14 = t;
      t = SSLsetAnnotations(n_14, r_81);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_38;
    }
  {
    ATerm u_38 = t;
    if((PushChoice() == 0))
      {
        ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,q_14 = NULL;
        w_81 = t;
        if(match_cons(t, sym_layout_1))
          {
            v_81 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_81);
        u_81 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, v_81);
        q_14 = t;
        t = SSLsetAnnotations(q_14, u_81);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_38;
      }
  }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL,w_14 = NULL;
  j_82 = t;
  if(match_cons(t, sym_layout_1))
    {
      i_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_82);
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, i_82);
  w_14 = t;
  t = SSLsetAnnotations(w_14, h_82);
  return(t);
}
static ATerm v_6 (ATerm j_15, ATerm i_15, ATerm t)
{
  static ATerm m_12 (ATerm t);
  static ATerm m_12 (ATerm t)
  {
    t = j_15;
    return(t);
  }
  t = j_15;
  t = collect_1_0(c_12, t);
  t = reverse_0_0(t);
  t = read_pp_tables_0_0(t);
  t = i_15;
  t = repeat_1_0(d_12, t);
  t = split_2_0(f_12, g_12, t);
  t = insert_layout_0_0(t);
  t = split_2_0(m_12, _id, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL;
  if(match_cons(t, sym__2))
    {
      l_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(l_82, m_82, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_12, r_12, x_12, t);
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm x_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(z_12, a_13, b_13, t);
            LocalPopChoice(y_38);
          }
        else
          {
            t = x_38;
            t = ArgOption_3_0(e_13, g_13, h_13, t);
          }
      }
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm n_82 = NULL;
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, n_82);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_2_0(o_12, p_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Ins_1;
static Symbol sym_Conc_2;
static Symbol sym_Conc_3;
static Symbol sym_Snoc_2;
static Symbol sym_seq_1;
static Symbol sym_ToTerm_1;
static Symbol sym_ToStrategy_1;
static Symbol sym_ToBuild_1;
static Symbol sym_layout_1;
static Symbol sym_meta_listvar_1;
static Symbol sym_meta_var_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Conc_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Conc_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_parsetree_2;
static Symbol sym_amb_1;
static Symbol sym_lit_1;
static Symbol sym_appl_2;
static Symbol sym_prod_3;
static Symbol sym_attrs_1;
static Symbol sym_no_attrs_0;
static Symbol sym_bracket_0;
static Symbol sym_term_1;
static Symbol sym_cons_1;
static Symbol sym_layout_0;
static Symbol sym_varsym_1;
static Symbol sym_func_2;
static Symbol sym_iter_sep_n_3;
static Symbol sym_iter_n_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_1;
static Symbol sym_iter_1;
static Symbol sym_sort_1;
static Symbol sym_seq_2;
static Symbol sym_alt_2;
static Symbol sym_opt_1;
static Symbol sym_lex_1;
static Symbol sym_cf_1;
static Symbol sym_lit_1;
static Symbol sym_empty_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Conc_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Conc_2;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_alt_2;
static Symbol sym_seq_2;
static Symbol sym_label_2;
static Symbol sym_lit_1;
static Symbol sym_sort_1;
static Symbol sym_alt_2;
static Symbol sym_func_2;
static Symbol sym_pair_2;
static Symbol sym_iter_sep_n_3;
static Symbol sym_iter_n_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_1;
static Symbol sym_iter_1;
static Symbol sym_opt_1;
static Symbol sym_seq_2;
static Symbol sym_empty_0;
static Symbol sym_layout_0;
static Symbol sym_varsym_1;
static Symbol sym_lex_1;
static Symbol sym_cf_1;
static Symbol sym_prod_3;
static Symbol sym_no_attrs_0;
static Symbol sym_attrs_1;
static Symbol sym_bracket_0;
static Symbol sym_term_1;
static Symbol sym_appl_2;
static void init_module_constructors (void)
{
  sym_Ins_1 = ATmakeSymbol("Ins", 1, ATfalse);
  ATprotectSymbol(sym_Ins_1);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Conc_3 = ATmakeSymbol("Conc", 3, ATfalse);
  ATprotectSymbol(sym_Conc_3);
  sym_Snoc_2 = ATmakeSymbol("Snoc", 2, ATfalse);
  ATprotectSymbol(sym_Snoc_2);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
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
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
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
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
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
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
}
static ATerm term_f_34;
static ATerm term_e_34;
static ATerm term_d_34;
static ATerm term_c_34;
static ATerm term_b_34;
static ATerm term_a_34;
static ATerm term_z_33;
static ATerm term_y_33;
static ATerm term_w_33;
static ATerm term_v_33;
static ATerm term_u_33;
static ATerm term_t_33;
static ATerm term_p_33;
static ATerm term_o_33;
static ATerm term_n_33;
static ATerm term_k_33;
static ATerm term_j_33;
static ATerm term_f_33;
static ATerm term_e_33;
static ATerm term_d_33;
static ATerm term_z_32;
static ATerm term_y_32;
static ATerm term_n_30;
static ATerm term_u_29;
static ATerm term_s_29;
static ATerm term_m_29;
static ATerm term_l_29;
static ATerm term_k_29;
static ATerm term_g_29;
static ATerm term_c_29;
static ATerm term_b_29;
static ATerm term_a_29;
static ATerm term_y_28;
static ATerm term_w_28;
static ATerm term_v_28;
static ATerm term_u_28;
static ATerm term_s_28;
static ATerm term_r_28;
static ATerm term_o_28;
static ATerm term_n_28;
static ATerm term_c_28;
static ATerm term_l_27;
static ATerm term_i_27;
static ATerm term_l_23;
static ATerm term_c_23;
static ATerm term_h_22;
static ATerm term_a_22;
static ATerm term_y_21;
static ATerm term_u_13;
static ATerm term_a_13;
static ATerm term_b_11;
static ATerm term_p_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm annotation_2_0 (ATerm y_30 (ATerm), ATerm z_30 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm y_20 (ATerm), ATerm z_20 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm skip_concrete_1_0 (ATerm a_31 (ATerm), ATerm t);
ATerm list_1_0 (ATerm r_101 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm b_0 (ATerm), ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplNamedCons_1_0 (ATerm j_30 (ATerm), ATerm t);
ATerm ReplCons_1_0 (ATerm q_30 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
ATerm is_asfix_list_0_0 (ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm c_31 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm f_93 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_95 (ATerm), ATerm t);
ATerm add_0_0 (ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm f_55 (ATerm d_49, ATerm f_49, ATerm g_49, ATerm h_49, ATerm t);
static ATerm g_55 (ATerm g_50, ATerm h_50, ATerm i_50, ATerm j_50, ATerm t);
static ATerm h_55 (ATerm k_51, ATerm l_51, ATerm m_51, ATerm n_51, ATerm t);
static ATerm i_55 (ATerm e_54, ATerm f_54, ATerm g_54, ATerm h_54, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm d_95 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm Conc_2_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_96 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm h_67 (ATerm y_63, ATerm t);
static ATerm i_67 (ATerm k_65, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm n_102 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_102 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm p_73 (ATerm k_72, ATerm l_72, ATerm m_72, ATerm t);
static ATerm q_73 (ATerm v_72, ATerm w_72, ATerm x_72, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_101 (ATerm), ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm implode_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm implode_options_0_0 (ATerm t);
ATerm io_wrap_2_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm p_21 = NULL,t_21 = NULL,z_21 = NULL,d_0 = NULL;
  z_21 = t;
  if(match_cons(t, sym_cons_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_21);
  p_21 = t;
  t = t_21;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, t_21);
  d_0 = t;
  t = SSLsetAnnotations(d_0, p_21);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm n_6 = t;
  if((PushChoice() == 0))
    {
      ATerm q_24 = NULL,r_24 = NULL,t_24 = NULL;
      r_24 = t;
      if(match_cons(t, sym_appl_2))
        {
          t_24 = ATgetArgument(t, 0);
          q_24 = ATgetArgument(t, 1);
          {
            ATerm m_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,e_2 = NULL,d_2 = NULL,o_10 = NULL;
            t = SSLgetAnnotations(r_24);
            m_9 = t;
            t = t_24;
            if(match_cons(t, sym_prod_3))
              {
                r_9 = ATgetArgument(t, 0);
                s_9 = ATgetArgument(t, 1);
                t_9 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_24);
            q_9 = t;
            t = s_9;
            if(match_cons(t, sym_cf_1))
              {
                o_10 = ATgetArgument(t, 0);
                {
                  ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_2 = NULL,y_1 = NULL;
                  t = SSLgetAnnotations(s_9);
                  v_10 = t;
                  t = o_10;
                  if(match_cons(t, sym_opt_1))
                    {
                      y_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_10);
                  x_10 = t;
                  t = y_10;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, y_10);
                  y_1 = t;
                  t = SSLsetAnnotations(y_1, x_10);
                  z_10 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, z_10);
                  a_2 = t;
                  t = SSLsetAnnotations(a_2, v_10);
                }
              }
            else
              {
                ATerm c_11 = NULL,b_2 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    o_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_9);
                c_11 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, o_10);
                b_2 = t;
                t = SSLsetAnnotations(b_2, c_11);
              }
            u_9 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, r_9, u_9, t_9);
            d_2 = t;
            t = SSLsetAnnotations(d_2, q_9);
            v_9 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, v_9, q_24);
            e_2 = t;
            t = SSLsetAnnotations(e_2, m_9);
          }
        }
      else
        {
          ATerm h_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,h_2 = NULL,f_2 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              t_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_24);
          h_11 = t;
          t = t_24;
          if(match_cons(t, sym_opt_1))
            {
              k_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_24);
          j_11 = t;
          t = k_11;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, k_11);
          f_2 = t;
          t = SSLsetAnnotations(f_2, j_11);
          l_11 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, l_11);
          h_2 = t;
          t = SSLsetAnnotations(h_2, h_11);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_6;
    }
  {
    ATerm o_6 = t;
    if((PushChoice() == 0))
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,b_25 = NULL,c_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,l_2 = NULL,k_2 = NULL;
        i_25 = t;
        if(match_cons(t, sym_appl_2))
          {
            v_24 = ATgetArgument(t, 0);
            w_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_25);
        u_24 = t;
        t = v_24;
        if(match_cons(t, sym_prod_3))
          {
            c_25 = ATgetArgument(t, 0);
            e_25 = ATgetArgument(t, 1);
            f_25 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_24);
        b_25 = t;
        t = e_25;
        t = oncetd_1_0(e_0, t);
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, c_25, g_25, f_25);
        k_2 = t;
        t = SSLsetAnnotations(k_2, b_25);
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, h_25, w_24);
        l_2 = t;
        t = SSLsetAnnotations(l_2, u_24);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_6;
      }
  }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,j_2 = NULL;
  l_25 = t;
  if(match_cons(t, sym_lex_1))
    {
      k_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, k_25);
  j_2 = t;
  t = SSLsetAnnotations(j_2, j_25);
  return(t);
}
ATerm annotation_2_0 (ATerm y_30 (ATerm), ATerm z_30 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,z_19 = NULL,a_20 = NULL,e_20 = NULL,g_20 = NULL,k_20 = NULL,w_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,e_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,n_21 = NULL,n_0 = NULL,l_0 = NULL,g_0 = NULL;
  n_21 = t;
  if(match_cons(t, sym_appl_2))
    {
      g_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_21);
  e_20 = t;
  t = g_20;
  if(match_cons(t, sym_prod_3))
    {
      a_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
      c_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  w_20 = t;
  t = c_21;
  if(match_cons(t, sym_attrs_1))
    {
      i_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_21);
  h_21 = t;
  t = i_21;
  t = oncetd_1_0(a_0, t);
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, j_21);
  g_0 = t;
  t = SSLsetAnnotations(g_0, h_21);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, a_21, b_21, k_21);
  l_0 = t;
  t = SSLsetAnnotations(l_0, w_20);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, e_21, k_20);
  n_0 = t;
  t = SSLsetAnnotations(n_0, e_20);
  t = k_20;
  t = filter_1_0(c_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_19 = ATgetFirst((ATermList) t);
      u_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_19;
  t = z_30(t);
  v_19 = t;
  t = u_19;
  t = y_30(t);
  w_19 = t;
  t = term_p_6;
  z_19 = t;
  t = (ATerm) ATinsert(CheckATermList(w_19), v_19);
  a_20 = t;
  t = SSL_mkterm(z_19, a_20);
  return(t);
}
ATerm appl_2_0 (ATerm y_20 (ATerm), ATerm z_20 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,c_7 = NULL;
  v_25 = t;
  if(match_cons(t, sym_appl_2))
    {
      r_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_25);
  q_25 = t;
  t = r_25;
  t = y_20(t);
  t_25 = t;
  t = s_25;
  t = z_20(t);
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, t_25, u_25);
  c_7 = t;
  t = SSLsetAnnotations(c_7, q_25);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,d_28 = NULL,e_28 = NULL,g_28 = NULL,p_7 = NULL,n_7 = NULL;
  g_28 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
      y_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_28);
  u_27 = t;
  t = x_27;
  if(match_cons(t, sym_cf_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_27);
  z_27 = t;
  t = a_28;
  t = oncetd_1_0(j_0, t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, d_28);
  n_7 = t;
  t = SSLsetAnnotations(n_7, z_27);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, v_27, e_28, y_27);
  p_7 = t;
  t = SSLsetAnnotations(p_7, u_27);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,l_28 = NULL,m_7 = NULL;
  l_28 = t;
  if(match_cons(t, sym_sort_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, j_28);
  m_7 = t;
  t = SSLsetAnnotations(m_7, i_28);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,n_12 = NULL,r_7 = NULL;
  n_12 = t;
  if(match_cons(t, sym_varsym_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, j_12);
  r_7 = t;
  t = SSLsetAnnotations(r_7, i_12);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,q_13 = NULL,w_7 = NULL;
  q_13 = t;
  if(match_cons(t, sym_cons_1))
    {
      n_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_13);
  m_13 = t;
  t = n_13;
  if(match_string(t, "FromTerm"))
    {
      t = n_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("FromApp", 0, ATtrue)))
        _fail(t);
      t = n_13;
    }
  t = (ATerm) ATmakeAppl(sym_cons_1, n_13);
  w_7 = t;
  t = SSLsetAnnotations(w_7, m_13);
  return(t);
}
ATerm skip_concrete_1_0 (ATerm a_31 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,s_26 = NULL,t_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,q_7 = NULL,l_7 = NULL,j_7 = NULL,f_7 = NULL,e_7 = NULL;
  static ATerm s_31 (ATerm t);
  static ATerm s_31 (ATerm t)
  {
    static ATerm o_0 (ATerm t);
    static ATerm o_0 (ATerm t)
    {
      ATerm q_6 = t;
      int r_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
          p_31 = t;
          if(match_cons(t, sym_appl_2))
            {
              q_31 = ATgetArgument(t, 0);
              r_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm s_6 = t;
            int u_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_11 = NULL,y_11 = NULL,z_11 = NULL,c_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,v_7 = NULL,s_7 = NULL;
                t = SSLgetAnnotations(p_31);
                t_11 = t;
                t = q_31;
                if(match_cons(t, sym_prod_3))
                  {
                    z_11 = ATgetArgument(t, 0);
                    c_12 = ATgetArgument(t, 1);
                    e_12 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_31);
                y_11 = t;
                t = z_11;
                t = SRTS_one(p_0, t);
                f_12 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, f_12, c_12, e_12);
                s_7 = t;
                t = SSLsetAnnotations(s_7, y_11);
                g_12 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, g_12, r_31);
                v_7 = t;
                t = SSLsetAnnotations(v_7, t_11);
                t = a_31(t);
                LocalPopChoice(u_6);
              }
            else
              {
                t = s_6;
                {
                  ATerm x_12 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,d_8 = NULL,c_8 = NULL,y_7 = NULL;
                  t = SSLgetAnnotations(p_31);
                  x_12 = t;
                  t = q_31;
                  if(match_cons(t, sym_prod_3))
                    {
                      c_13 = ATgetArgument(t, 0);
                      d_13 = ATgetArgument(t, 1);
                      e_13 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_31);
                  b_13 = t;
                  t = e_13;
                  if(match_cons(t, sym_attrs_1))
                    {
                      i_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_13);
                  h_13 = t;
                  t = i_13;
                  t = oncetd_1_0(q_0, t);
                  j_13 = t;
                  t = (ATerm) ATmakeAppl(sym_attrs_1, j_13);
                  y_7 = t;
                  t = SSLsetAnnotations(y_7, h_13);
                  k_13 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, c_13, d_13, k_13);
                  c_8 = t;
                  t = SSLsetAnnotations(c_8, b_13);
                  g_13 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, g_13, r_31);
                  d_8 = t;
                  t = SSLsetAnnotations(d_8, x_12);
                  t = a_31(t);
                }
              }
          }
          LocalPopChoice(r_6);
        }
      else
        {
          t = q_6;
          t = annotation_2_0(a_31, s_31, t);
        }
      return(t);
    }
    t = alltd_1_0(o_0, t);
    return(t);
  }
  c_27 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  e_26 = t;
  t = f_26;
  if(match_cons(t, sym_prod_3))
    {
      j_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
      l_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_26);
  i_26 = t;
  t = k_26;
  if(match_cons(t, sym_cf_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_26);
  t_26 = t;
  t = x_26;
  if(match_cons(t, sym_sort_1))
    {
      a_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_26);
  z_26 = t;
  t = a_27;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, a_27);
  e_7 = t;
  t = SSLsetAnnotations(e_7, z_26);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, b_27);
  f_7 = t;
  t = SSLsetAnnotations(f_7, t_26);
  y_26 = t;
  t = l_26;
  if(match_cons(t, sym_attrs_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  n_26 = t;
  t = o_26;
  {
    static ATerm f_0 (ATerm t);
    static ATerm f_0 (ATerm t)
    {
      ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,m_27 = NULL,o_27 = NULL,p_27 = NULL,h_7 = NULL,g_7 = NULL;
      p_27 = t;
      if(match_cons(t, sym_term_1))
        {
          g_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_27);
      f_27 = t;
      t = g_27;
      if(match_cons(t, sym_cons_1))
        {
          m_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_27);
      h_27 = t;
      t = m_27;
      if(((c_26 != NULL) && (c_26 != t)))
        _fail(t);
      else
        c_26 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, m_27);
      g_7 = t;
      t = SSLsetAnnotations(g_7, h_27);
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, o_27);
      h_7 = t;
      t = SSLsetAnnotations(h_7, f_27);
      return(t);
    }
    t = SRTS_one(f_0, t);
  }
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, p_26);
  j_7 = t;
  t = SSLsetAnnotations(j_7, n_26);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, j_26, y_26, s_26);
  l_7 = t;
  t = SSLsetAnnotations(l_7, i_26);
  m_26 = t;
  t = g_26;
  {
    static ATerm h_0 (ATerm t);
    static ATerm h_0 (ATerm t)
    {
      t = appl_2_0(i_0, _id, t);
      if(((d_26 != NULL) && (d_26 != t)))
        _fail(t);
      else
        d_26 = t;
      return(t);
    }
    t = oncetd_1_0(h_0, t);
  }
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, m_26, h_26);
  q_7 = t;
  t = SSLsetAnnotations(q_7, e_26);
  t = not_null(c_26);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(d_26));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(d_26));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(d_26));
        }
    }
  t = s_31(t);
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm s_0 = NULL,u_0 = NULL,w_0 = NULL,y_0 = NULL,a_1 = NULL,c_1 = NULL,e_1 = NULL,f_1 = NULL,h_1 = NULL;
  s_0 = t;
  if(match_cons(t, sym_prod_3))
    {
      u_0 = ATgetArgument(t, 0);
      f_1 = ATgetArgument(t, 1);
      {
        ATerm w_6 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = u_0;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_6 = ATgetFirst((ATermList) t);
      w_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_0;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_6 = ATgetFirst((ATermList) t);
      y_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_0;
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_7 = ATgetFirst((ATermList) t);
            a_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_7);
        t = a_1;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_1;
            {
              ATerm d_7 = t;
              int o_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm t_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_7);
                  t = s_0;
                }
              else
                {
                  t = d_7;
                  if(match_cons(t, sym_cf_1))
                    {
                      h_1 = ATgetArgument(t, 0);
                      t = h_1;
                      {
                        ATerm u_7 = t;
                        int x_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm a_8 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(x_7);
                            t = s_0;
                          }
                        else
                          {
                            t = u_7;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm b_8 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_0;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm e_8 = ATgetArgument(t, 0);
                          ATerm f_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_0;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_8 = ATgetFirst((ATermList) t);
                c_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_8 = ATgetFirst((ATermList) t);
                e_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_1;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_1;
            if(match_cons(t, sym_cf_1))
              {
                h_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_1;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm i_8 = ATgetArgument(t, 0);
                ATerm j_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_0;
          }
      }
    else
      {
        t = z_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_1;
        if(match_cons(t, sym_iter_1))
          {
            ATerm k_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_0;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm b_0 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_appl_2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_2 = ATgetFirst((ATermList) t);
      t_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_2 = ATgetFirst((ATermList) t);
      v_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_2 = ATgetFirst((ATermList) t);
      o_2 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL;
        t = o_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_2;
        t = is_conc_0_0(t);
        t = s_2;
        t = b_0(t);
        a_3 = t;
        t = u_2;
        t = b_0(t);
        b_3 = t;
        t = n_2;
        t = b_0(t);
        d_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_3, (ATerm) ATinsert(CheckATermList(d_3), b_3));
        t = conc_0_0(t);
      }
    }
  else
    {
      ATerm k_0 = NULL,m_0 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_2;
      t = is_conc_0_0(t);
      t = s_2;
      t = b_0(t);
      k_0 = t;
      t = u_2;
      t = b_0(t);
      m_0 = t;
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_0;
            {
              ATerm n_8 = t;
              int o_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Nil_0_0(t);
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = n_8;
                  t = Cons_2_0(_id, _id, t);
                }
            }
            t = (ATerm) ATmakeAppl(sym__2, k_0, m_0);
            t = conc_0_0(t);
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            t = (ATerm) ATmakeAppl(sym_Conc_2, k_0, m_0);
          }
      }
    }
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,v_3 = NULL,w_3 = NULL;
  o_3 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
      {
        ATerm p_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_3 = ATgetFirst((ATermList) t);
      s_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = t_3;
  if(match_cons(t, sym_iter_1))
    {
      v_3 = ATgetArgument(t, 0);
      t = v_3;
      if((q_3 != t))
        {
          _fail(t);
        }
      t = o_3;
    }
  else
    {
      ATerm q_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              v_3 = ATgetArgument(t, 0);
              {
                ATerm v_8 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(s_8);
          t = v_3;
          if((q_3 != t))
            {
              _fail(t);
            }
          t = o_3;
        }
      else
        {
          t = q_8;
          if(match_cons(t, sym_cf_1))
            {
              v_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_3;
          if(match_cons(t, sym_cf_1))
            {
              r_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_3;
          if(match_cons(t, sym_iter_1))
            {
              w_3 = ATgetArgument(t, 0);
              t = w_3;
              if((r_3 != t))
                {
                  _fail(t);
                }
              t = o_3;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  w_3 = ATgetArgument(t, 0);
                  {
                    ATerm w_8 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = w_3;
              if((r_3 != t))
                {
                  _fail(t);
                }
              t = o_3;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm a_5 = NULL,c_5 = NULL,e_5 = NULL,g_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_prod_3))
    {
      c_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
      {
        ATerm x_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_5;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm c_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_8);
        t = a_5;
      }
    else
      {
        t = y_8;
        {
          ATerm d_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm h_9 = ATgetArgument(t, 0);
                  ATerm i_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(f_9);
              t = a_5;
            }
          else
            {
              t = d_9;
              if(match_cons(t, sym_cf_1))
                {
                  g_5 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_5;
              {
                ATerm j_9 = t;
                int o_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm p_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_9);
                    t = a_5;
                  }
                else
                  {
                    t = j_9;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm w_9 = ATgetArgument(t, 0);
                        ATerm z_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_5;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplNamedCons_1_0 (ATerm j_30 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,a_6 = NULL,c_6 = NULL;
  v_5 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_5);
  q_5 = t;
  t = s_5;
  if(match_cons(t, sym_prod_3))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      ATerm b_10 = ATgetArgument(t, 1);
      a_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_6;
  {
    static ATerm r_0 (ATerm t);
    static ATerm r_0 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((c_6 != NULL) && (c_6 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(r_0, t);
  }
  t = n_5;
  t = map_1_0(j_30, t);
  t_5 = t;
  t = SSL_mkterm(not_null(c_6), t_5);
  u_5 = t;
  t = SSLsetAnnotations(u_5, q_5);
  return(t);
}
ATerm ReplCons_1_0 (ATerm q_30 (ATerm), ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1_0(q_30, t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 = NULL,t_8 = NULL,u_8 = NULL,a_9 = NULL,b_9 = NULL;
            r_8 = t;
            if(match_cons(t, sym_appl_2))
              {
                t_8 = ATgetArgument(t, 0);
                u_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_8;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                ATerm q_10 = t;
                int r_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_8;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(r_10);
                  }
                else
                  {
                    t = q_10;
                    {
                      ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
                      t = t_8;
                      if(match_cons(t, sym_prod_3))
                        {
                          q_1 = ATgetArgument(t, 0);
                          r_1 = ATgetArgument(t, 1);
                          {
                            ATerm s_10 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = q_1;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = r_1;
                      {
                        ATerm t_10 = t;
                        int u_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm w_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(u_10);
                            t = t_8;
                          }
                        else
                          {
                            t = t_10;
                            if(match_cons(t, sym_cf_1))
                              {
                                s_1 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_1;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm a_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_8;
                          }
                      }
                      t = term_b_11;
                    }
                  }
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_9 = ATgetFirst((ATermList) t);
                    b_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_9;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                {
                  ATerm d_11 = t;
                  int e_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_9 = NULL;
                      t = t_8;
                      t = is_ins_0_0(t);
                      t = a_9;
                      t = q_30(t);
                      k_9 = t;
                      t = (ATerm) ATinsert(ATempty, k_9);
                      LocalPopChoice(e_11);
                    }
                  else
                    {
                      t = d_11;
                      {
                        ATerm c_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
                        t = t_8;
                        if(match_cons(t, sym_prod_3))
                          {
                            g_3 = ATgetArgument(t, 0);
                            k_3 = ATgetArgument(t, 1);
                            {
                              ATerm f_11 = ATgetArgument(t, 2);
                            }
                          }
                        else
                          _fail(t);
                        t = g_3;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            h_3 = ATgetFirst((ATermList) t);
                            j_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = j_3;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = k_3;
                        if(match_cons(t, sym_opt_1))
                          {
                            l_3 = ATgetArgument(t, 0);
                            t = l_3;
                            if((h_3 != t))
                              {
                                _fail(t);
                              }
                            t = t_8;
                          }
                        else
                          {
                            if(match_cons(t, sym_cf_1))
                              {
                                l_3 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = h_3;
                            if(match_cons(t, sym_cf_1))
                              {
                                i_3 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_3;
                            if(match_cons(t, sym_opt_1))
                              {
                                m_3 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = m_3;
                            if((i_3 != t))
                              {
                                _fail(t);
                              }
                            t = t_8;
                          }
                        t = a_9;
                        t = q_30(t);
                        c_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Some_1, c_3);
                      }
                    }
                }
              }
            LocalPopChoice(n_10);
          }
        else
          {
            t = e_10;
            t = ReplConsConc_1_0(q_30, t);
          }
      }
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm g_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_7 = NULL,k_7 = NULL;
      k_7 = t;
      if(match_cons(t, sym_lit_1))
        {
          i_7 = ATgetArgument(t, 0);
          {
            ATerm z_7 = NULL,x_9 = NULL;
            t = SSLgetAnnotations(k_7);
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, i_7);
            x_9 = t;
            t = SSLsetAnnotations(x_9, z_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = k_7;
        }
      LocalPopChoice(i_11);
    }
  else
    {
      t = g_11;
      t = is_asfix_list_0_0(t);
    }
  return(t);
}
ATerm is_asfix_list_0_0 (ATerm t)
{
  ATerm r_15 = NULL,t_15 = NULL,y_15 = NULL;
  t_15 = t;
  if(match_cons(t, sym_iter_1))
    {
      y_15 = ATgetArgument(t, 0);
      {
        ATerm u_4 = NULL,e_9 = NULL;
        t = SSLgetAnnotations(t_15);
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, y_15);
        e_9 = t;
        t = SSLsetAnnotations(e_9, u_4);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_sep_2))
        {
          y_15 = ATgetArgument(t, 0);
          r_15 = ATgetArgument(t, 1);
          {
            ATerm h_5 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(t_15);
            h_5 = t;
            t = (ATerm) ATmakeAppl(sym_iter_sep_2, y_15, r_15);
            g_9 = t;
            t = SSLsetAnnotations(g_9, h_5);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              y_15 = ATgetArgument(t, 0);
              {
                ATerm b_6 = NULL,l_9 = NULL;
                t = SSLgetAnnotations(t_15);
                b_6 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, y_15);
                l_9 = t;
                t = SSLsetAnnotations(l_9, b_6);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  y_15 = ATgetArgument(t, 0);
                  r_15 = ATgetArgument(t, 1);
                  {
                    ATerm k_6 = NULL,n_9 = NULL;
                    t = SSLgetAnnotations(t_15);
                    k_6 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, y_15, r_15);
                    n_9 = t;
                    t = SSLsetAnnotations(n_9, k_6);
                  }
                }
              else
                {
                  ATerm t_6 = NULL,v_6 = NULL,y_9 = NULL;
                  if(match_cons(t, sym_seq_1))
                    {
                      y_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_15);
                  t_6 = t;
                  t = y_15;
                  t = list_1_0(t_0, t);
                  v_6 = t;
                  t = (ATerm) ATmakeAppl(sym_seq_1, v_6);
                  y_9 = t;
                  t = SSLsetAnnotations(y_9, t_6);
                }
            }
        }
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      q_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_17;
  if(match_cons(t, sym_prod_3))
    {
      r_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
      {
        ATerm m_11 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = r_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_17 = ATgetFirst((ATermList) t);
      m_17 = (ATerm) ATgetNext((ATermList) t);
      t = m_17;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_17;
      if(match_cons(t, sym_opt_1))
        {
          t_17 = ATgetArgument(t, 0);
          t = w_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_17 = ATgetFirst((ATermList) t);
              o_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_17;
          if((k_17 != t))
            {
              _fail(t);
            }
          t = is_asfix_list_0_0(t);
          t = n_17;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              t_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_17;
          if(match_cons(t, sym_cf_1))
            {
              l_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_17;
          if(match_cons(t, sym_opt_1))
            {
              u_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_17 = ATgetFirst((ATermList) t);
              o_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_17;
          if((l_17 != t))
            {
              _fail(t);
            }
          t = is_asfix_list_0_0(t);
          t = n_17;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_17;
      if(match_cons(t, sym_opt_1))
        {
          t_17 = ATgetArgument(t, 0);
          t = w_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_17;
          t = is_asfix_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              t_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_17;
          if(match_cons(t, sym_opt_1))
            {
              u_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_17;
          t = is_asfix_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm n_11 = t;
  if((PushChoice() == 0))
    {
      ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
      l_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          m_19 = ATgetArgument(t, 0);
          k_19 = ATgetArgument(t, 1);
          {
            ATerm f_21 = NULL,m_21 = NULL,o_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,u_21 = NULL,j_10 = NULL,i_10 = NULL,p_22 = NULL;
            t = SSLgetAnnotations(l_19);
            f_21 = t;
            t = m_19;
            if(match_cons(t, sym_prod_3))
              {
                o_21 = ATgetArgument(t, 0);
                q_21 = ATgetArgument(t, 1);
                r_21 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_19);
            m_21 = t;
            t = q_21;
            if(match_cons(t, sym_cf_1))
              {
                p_22 = ATgetArgument(t, 0);
                {
                  ATerm b_23 = NULL,d_23 = NULL,e_23 = NULL,h_23 = NULL,g_10 = NULL,f_10 = NULL;
                  t = SSLgetAnnotations(q_21);
                  b_23 = t;
                  t = p_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      e_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_22);
                  d_23 = t;
                  t = e_23;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, e_23);
                  f_10 = t;
                  t = SSLsetAnnotations(f_10, d_23);
                  h_23 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, h_23);
                  g_10 = t;
                  t = SSLsetAnnotations(g_10, b_23);
                }
              }
            else
              {
                ATerm m_23 = NULL,h_10 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    p_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_21);
                m_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, p_22);
                h_10 = t;
                t = SSLsetAnnotations(h_10, m_23);
              }
            s_21 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, o_21, s_21, r_21);
            i_10 = t;
            t = SSLsetAnnotations(i_10, m_21);
            u_21 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, u_21, k_19);
            j_10 = t;
            t = SSLsetAnnotations(j_10, f_21);
          }
        }
      else
        {
          ATerm t_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,l_10 = NULL,k_10 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              m_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_19);
          t_23 = t;
          t = m_19;
          if(match_cons(t, sym_opt_1))
            {
              w_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_19);
          v_23 = t;
          t = w_23;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, w_23);
          k_10 = t;
          t = SSLsetAnnotations(k_10, v_23);
          x_23 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, x_23);
          l_10 = t;
          t = SSLsetAnnotations(l_10, t_23);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_11;
    }
  return(t);
}
ATerm implodeAsfix_1_0 (ATerm c_31 (ATerm), ATerm t)
{
  ATerm n_32 = NULL;
  static ATerm a_37 (ATerm t);
  static ATerm a_37 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_36 = NULL,n_36 = NULL,p_36 = NULL;
              n_36 = t;
              if(match_cons(t, sym_appl_2))
                {
                  p_36 = ATgetArgument(t, 0);
                  k_36 = ATgetArgument(t, 1);
                  {
                    ATerm s_11 = t;
                    int u_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_36;
                        t = c_31(t);
                        t = n_36;
                        t = skip_concrete_1_0(a_37, t);
                        LocalPopChoice(u_11);
                      }
                    else
                      {
                        t = s_11;
                        {
                          ATerm f_17 = NULL,i_17 = NULL,m_10 = NULL;
                          t = SSLgetAnnotations(n_36);
                          f_17 = t;
                          t = k_36;
                          t = filter_1_0(v_0, t);
                          i_17 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, p_36, i_17);
                          m_10 = t;
                          t = SSLsetAnnotations(m_10, f_17);
                          {
                            ATerm v_11 = t;
                            int w_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = a_37(t);
                                LocalPopChoice(w_11);
                              }
                            else
                              {
                                t = v_11;
                                {
                                  ATerm x_11 = t;
                                  int a_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ReplCons_1_0(a_37, t);
                                      LocalPopChoice(a_12);
                                    }
                                  else
                                    {
                                      t = x_11;
                                      {
                                        ATerm b_12 = t;
                                        int d_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                o_19 = ATgetArgument(t, 0);
                                                p_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = p_19;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                q_19 = ATgetFirst((ATermList) t);
                                                r_19 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = r_19;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = o_19;
                                            t = injection_0_0(t);
                                            t = q_19;
                                            t = a_37(t);
                                            LocalPopChoice(d_12);
                                          }
                                        else
                                          {
                                            t = b_12;
                                            {
                                              ATerm h_12 = t;
                                              int k_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Tuple_0_0(t);
                                                  t = a_37(t);
                                                  LocalPopChoice(k_12);
                                                }
                                              else
                                                {
                                                  t = h_12;
                                                  t = FlatAlt_0_0(t);
                                                  t = a_37(t);
                                                }
                                            }
                                          }
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
                  if(match_cons(t, sym_amb_1))
                    {
                      p_36 = ATgetArgument(t, 0);
                      {
                        ATerm l_12 = t;
                        int o_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_36;
                            t = c_31(t);
                            t = n_36;
                            t = skip_concrete_1_0(a_37, t);
                            LocalPopChoice(o_12);
                          }
                        else
                          {
                            t = l_12;
                            {
                              ATerm s_24 = NULL,y_24 = NULL,p_10 = NULL;
                              t = SSLgetAnnotations(n_36);
                              s_24 = t;
                              t = p_36;
                              t = list_1_0(a_37, t);
                              y_24 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, y_24);
                              p_10 = t;
                              t = SSLsetAnnotations(p_10, s_24);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = n_36;
                      t = c_31(t);
                      t = n_36;
                      t = skip_concrete_1_0(a_37, t);
                    }
                }
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              t = SRTS_all(a_37, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      n_32 = ATgetArgument(t, 0);
      {
        ATerm p_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_32;
  t = a_37(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,v_38 = NULL,y_38 = NULL,k_39 = NULL;
  s_38 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_38 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_38;
  if(match_cons(t, sym_prod_3))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
      {
        ATerm s_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_38;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm z_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_12);
        {
          ATerm z_25 = NULL;
          t = term_a_13;
          z_25 = t;
          t = SSL_mkterm(z_25, k_39);
        }
      }
    else
      {
        t = v_12;
        {
          ATerm v_26 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              y_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_38;
          if(match_cons(t, sym_seq_1))
            {
              ATerm l_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_a_13;
          v_26 = t;
          t = SSL_mkterm(v_26, k_39);
        }
      }
  }
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,p_40 = NULL,q_40 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
  static ATerm a_44 (ATerm t);
  static ATerm a_44 (ATerm t)
  {
    ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
    if(match_cons(t, sym__2))
      {
        f_43 = ATgetArgument(t, 0);
        i_43 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = f_43;
    if(match_cons(t, sym_alt_2))
      {
        g_43 = ATgetArgument(t, 0);
        h_43 = ATgetArgument(t, 1);
        {
          ATerm p_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_43;
              if(((m_40 != NULL) && (m_40 != t)))
                _fail(t);
              else
                m_40 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, i_43, not_null(q_40));
              LocalPopChoice(r_13);
            }
          else
            {
              t = p_13;
              {
                ATerm s_13 = t;
                int t_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_43;
                    if(((m_40 != NULL) && (m_40 != t)))
                      _fail(t);
                    else
                      m_40 = t;
                    t = h_43;
                    if(((p_40 != NULL) && (p_40 != t)))
                      _fail(t);
                    else
                      p_40 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, i_43, not_null(q_40));
                    LocalPopChoice(t_13);
                  }
                else
                  {
                    t = s_13;
                    {
                      ATerm p_43 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, i_43, term_u_13);
                      t = add_0_0(t);
                      p_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_43, p_43);
                      t = a_44(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = f_43;
        if(((m_40 != NULL) && (m_40 != t)))
          _fail(t);
        else
          m_40 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, i_43, not_null(q_40));
      }
    return(t);
  }
  b_43 = t;
  if(match_cons(t, sym_appl_2))
    {
      c_43 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_27 = NULL,f_28 = NULL,h_28 = NULL,k_28 = NULL,m_28 = NULL,p_28 = NULL,q_28 = NULL,t_28 = NULL,x_28 = NULL,z_28 = NULL,u_12 = NULL,t_12 = NULL,r_12 = NULL;
        t = SSLgetAnnotations(b_43);
        w_27 = t;
        t = c_43;
        if(match_cons(t, sym_prod_3))
          {
            h_28 = ATgetArgument(t, 0);
            k_28 = ATgetArgument(t, 1);
            m_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_43);
        f_28 = t;
        t = h_28;
        {
          static ATerm x_0 (ATerm t);
          static ATerm x_0 (ATerm t)
          {
            ATerm q_29 = NULL,r_29 = NULL;
            r_29 = t;
            if(match_cons(t, sym_cf_1))
              {
                q_29 = ATgetArgument(t, 0);
                {
                  ATerm x_13 = t;
                  int y_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_30 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(r_29);
                      b_30 = t;
                      t = q_29;
                      if(((m_40 != NULL) && (m_40 != t)))
                        _fail(t);
                      else
                        m_40 = t;
                      t = (ATerm) ATmakeAppl(sym_cf_1, q_29);
                      m_12 = t;
                      t = SSLsetAnnotations(m_12, b_30);
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = x_13;
                      t = r_29;
                      if(((m_40 != NULL) && (m_40 != t)))
                        _fail(t);
                      else
                        m_40 = t;
                      t = r_29;
                    }
                }
              }
            else
              {
                t = r_29;
                if(((m_40 != NULL) && (m_40 != t)))
                  _fail(t);
                else
                  m_40 = t;
                t = r_29;
              }
            return(t);
          }
          t = Cons_2_0(x_0, Nil_0_0, t);
        }
        p_28 = t;
        t = k_28;
        if(match_cons(t, sym_cf_1))
          {
            x_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_28);
        t_28 = t;
        t = x_28;
        if(match_cons(t, sym_alt_2))
          {
            k_40 = ATgetArgument(t, 0);
            l_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, x_28);
        r_12 = t;
        t = SSLsetAnnotations(r_12, t_28);
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, p_28, z_28, m_28);
        t_12 = t;
        t = SSLsetAnnotations(t_12, f_28);
        q_28 = t;
        t = d_43;
        if(((q_40 != NULL) && (q_40 != t)))
          _fail(t);
        else
          q_40 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, q_28, d_43);
        u_12 = t;
        t = SSLsetAnnotations(u_12, w_27);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm s_30 = NULL,v_30 = NULL,b_31 = NULL,d_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,t_31 = NULL,v_31 = NULL,w_31 = NULL,o_13 = NULL,f_13 = NULL,y_12 = NULL;
          t = SSLgetAnnotations(b_43);
          s_30 = t;
          t = c_43;
          if(match_cons(t, sym_prod_3))
            {
              b_31 = ATgetArgument(t, 0);
              d_31 = ATgetArgument(t, 1);
              k_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_43);
          v_30 = t;
          t = b_31;
          {
            static ATerm z_0 (ATerm t);
            static ATerm z_0 (ATerm t)
            {
              if(((m_40 != NULL) && (m_40 != t)))
                _fail(t);
              else
                m_40 = t;
              return(t);
            }
            t = Cons_2_0(z_0, Nil_0_0, t);
          }
          l_31 = t;
          t = d_31;
          if(match_cons(t, sym_lex_1))
            {
              v_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_31);
          t_31 = t;
          t = v_31;
          if(match_cons(t, sym_alt_2))
            {
              k_40 = ATgetArgument(t, 0);
              l_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, v_31);
          y_12 = t;
          t = SSLsetAnnotations(y_12, t_31);
          w_31 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, l_31, w_31, k_31);
          f_13 = t;
          t = SSLsetAnnotations(f_13, v_30);
          m_31 = t;
          t = d_43;
          if(((q_40 != NULL) && (q_40 != t)))
            _fail(t);
          else
            q_40 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, m_31, d_43);
          o_13 = t;
          t = SSLsetAnnotations(o_13, s_30);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, k_40, l_40), term_u_13);
  t = a_44(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm p_45 = NULL,v_45 = NULL,w_45 = NULL;
  p_45 = t;
  if(match_cons(t, sym_sort_1))
    {
      v_45 = ATgetArgument(t, 0);
      {
        ATerm e_32 = NULL,b_14 = NULL;
        t = SSLgetAnnotations(p_45);
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, v_45);
        b_14 = t;
        t = SSLsetAnnotations(b_14, e_32);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          v_45 = ATgetArgument(t, 0);
          {
            ATerm l_32 = NULL,o_32 = NULL,c_14 = NULL;
            t = SSLgetAnnotations(p_45);
            l_32 = t;
            t = v_45;
            t = injective_alt_0_0(t);
            o_32 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, o_32);
            c_14 = t;
            t = SSLsetAnnotations(c_14, l_32);
          }
        }
      else
        {
          ATerm b_33 = NULL,h_33 = NULL,i_33 = NULL,d_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              v_45 = ATgetArgument(t, 0);
              w_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_45);
          b_33 = t;
          t = v_45;
          t = injective_alt_0_0(t);
          h_33 = t;
          t = w_45;
          t = injective_alt_0_0(t);
          i_33 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, h_33, i_33);
          d_14 = t;
          t = SSLsetAnnotations(d_14, b_33);
        }
    }
  return(t);
}
static ATerm f_55 (ATerm d_49, ATerm f_49, ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm i_49 = NULL,u_49 = NULL,v_49 = NULL,j_14 = NULL;
  t = SSLgetAnnotations(h_49);
  i_49 = t;
  t = d_49;
  t = Cons_2_0(b_1, Nil_0_0, t);
  u_49 = t;
  t = g_49;
  {
    ATerm z_13 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(d_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_13;
      }
  }
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, u_49, f_49, v_49);
  j_14 = t;
  t = SSLsetAnnotations(j_14, i_49);
  return(t);
}
static ATerm g_55 (ATerm g_50, ATerm h_50, ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm k_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,o_14 = NULL;
  t = SSLgetAnnotations(j_50);
  k_50 = t;
  t = g_50;
  t = Cons_2_0(g_1, Nil_0_0, t);
  o_50 = t;
  t = h_50;
  t = injective_alt_0_0(t);
  p_50 = t;
  t = i_50;
  {
    ATerm a_14 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(i_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_14;
      }
  }
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, o_50, p_50, q_50);
  o_14 = t;
  t = SSLsetAnnotations(o_14, k_50);
  return(t);
}
static ATerm h_55 (ATerm k_51, ATerm l_51, ATerm m_51, ATerm n_51, ATerm t)
{
  ATerm o_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,a_15 = NULL;
  t = SSLgetAnnotations(n_51);
  o_51 = t;
  t = k_51;
  t = Cons_2_0(j_1, Nil_0_0, t);
  s_51 = t;
  t = l_51;
  {
    static ATerm l_55 (ATerm t);
    static ATerm l_55 (ATerm t)
    {
      ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
      y_53 = t;
      if(match_cons(t, sym_sort_1))
        {
          z_53 = ATgetArgument(t, 0);
          {
            ATerm o_35 = NULL,q_14 = NULL;
            t = SSLgetAnnotations(y_53);
            o_35 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, z_53);
            q_14 = t;
            t = SSLsetAnnotations(q_14, o_35);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              z_53 = ATgetArgument(t, 0);
              {
                ATerm g_36 = NULL,m_36 = NULL,r_14 = NULL;
                t = SSLgetAnnotations(y_53);
                g_36 = t;
                t = z_53;
                t = l_55(t);
                m_36 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, m_36);
                r_14 = t;
                t = SSLsetAnnotations(r_14, g_36);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  z_53 = ATgetArgument(t, 0);
                  {
                    ATerm u_36 = NULL,x_36 = NULL,s_14 = NULL;
                    t = SSLgetAnnotations(y_53);
                    u_36 = t;
                    t = z_53;
                    t = l_55(t);
                    x_36 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, x_36);
                    s_14 = t;
                    t = SSLsetAnnotations(s_14, u_36);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      z_53 = ATgetArgument(t, 0);
                      {
                        ATerm m_37 = NULL,o_37 = NULL,t_14 = NULL;
                        t = SSLgetAnnotations(y_53);
                        m_37 = t;
                        t = z_53;
                        t = l_55(t);
                        o_37 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, o_37);
                        t_14 = t;
                        t = SSLsetAnnotations(t_14, m_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          z_53 = ATgetArgument(t, 0);
                          {
                            ATerm u_37 = NULL,x_37 = NULL,u_14 = NULL;
                            t = SSLgetAnnotations(y_53);
                            u_37 = t;
                            t = z_53;
                            t = l_55(t);
                            x_37 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, x_37);
                            u_14 = t;
                            t = SSLsetAnnotations(u_14, u_37);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              z_53 = ATgetArgument(t, 0);
                              a_54 = ATgetArgument(t, 1);
                              {
                                ATerm g_38 = NULL,j_38 = NULL,o_38 = NULL,p_38 = NULL,r_38 = NULL,w_14 = NULL,v_14 = NULL;
                                t = SSLgetAnnotations(y_53);
                                g_38 = t;
                                t = z_53;
                                t = l_55(t);
                                j_38 = t;
                                t = a_54;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    p_38 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(a_54);
                                o_38 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, p_38);
                                v_14 = t;
                                t = SSLsetAnnotations(v_14, o_38);
                                r_38 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_sep_2, j_38, r_38);
                                w_14 = t;
                                t = SSLsetAnnotations(w_14, g_38);
                              }
                            }
                          else
                            {
                              ATerm g_39 = NULL,j_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,y_14 = NULL,x_14 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  z_53 = ATgetArgument(t, 0);
                                  a_54 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(y_53);
                              g_39 = t;
                              t = z_53;
                              t = l_55(t);
                              j_39 = t;
                              t = a_54;
                              if(match_cons(t, sym_lit_1))
                                {
                                  m_39 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(a_54);
                              l_39 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, m_39);
                              x_14 = t;
                              t = SSLsetAnnotations(x_14, l_39);
                              n_39 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, j_39, n_39);
                              y_14 = t;
                              t = SSLsetAnnotations(y_14, g_39);
                            }
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = l_55(t);
  }
  t_51 = t;
  t = m_51;
  {
    ATerm e_14 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(k_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_14;
      }
  }
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, s_51, t_51, u_51);
  a_15 = t;
  t = SSLsetAnnotations(a_15, o_51);
  return(t);
}
static ATerm i_55 (ATerm e_54, ATerm f_54, ATerm g_54, ATerm h_54, ATerm t)
{
  ATerm i_54 = NULL,m_54 = NULL,b_15 = NULL;
  t = SSLgetAnnotations(h_54);
  i_54 = t;
  t = g_54;
  t = oncetd_1_0(l_1, t);
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, e_54, f_54, m_54);
  b_15 = t;
  t = SSLsetAnnotations(b_15, i_54);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm x_49 = NULL,a_50 = NULL,c_50 = NULL,h_14 = NULL;
  c_50 = t;
  if(match_cons(t, sym_varsym_1))
    {
      a_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_50);
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, a_50);
  h_14 = t;
  t = SSLsetAnnotations(h_14, x_49);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,i_14 = NULL;
  f_50 = t;
  if(match_cons(t, sym_cons_1))
    {
      e_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_50);
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, e_50);
  i_14 = t;
  t = SSLsetAnnotations(i_14, d_50);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL;
  f_51 = t;
  if(match_cons(t, sym_sort_1))
    {
      g_51 = ATgetArgument(t, 0);
      {
        ATerm x_33 = NULL,k_14 = NULL;
        t = SSLgetAnnotations(f_51);
        x_33 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, g_51);
        k_14 = t;
        t = SSLsetAnnotations(k_14, x_33);
      }
    }
  else
    {
      ATerm h_34 = NULL,d_35 = NULL,e_35 = NULL,g_35 = NULL,m_14 = NULL,l_14 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          g_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_51);
      h_34 = t;
      t = g_51;
      if(match_cons(t, sym_sort_1))
        {
          e_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_51);
      d_35 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, e_35);
      l_14 = t;
      t = SSLsetAnnotations(l_14, d_35);
      g_35 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, g_35);
      m_14 = t;
      t = SSLsetAnnotations(m_14, h_34);
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,n_14 = NULL;
  j_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      i_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_51);
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, i_51);
  n_14 = t;
  t = SSLsetAnnotations(n_14, h_51);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm f_14 = t;
  if((PushChoice() == 0))
    {
      ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,p_14 = NULL;
      y_51 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_51);
      w_51 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_51);
      p_14 = t;
      t = SSLsetAnnotations(p_14, w_51);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_14;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,z_14 = NULL;
  d_54 = t;
  if(match_cons(t, sym_cons_1))
    {
      c_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_54);
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, c_54);
  z_14 = t;
  t = SSLsetAnnotations(z_14, b_54);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm o_54 = NULL;
  o_54 = t;
  if(match_string(t, "bracket"))
    {
      t = o_54;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = o_54;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
  x_54 = t;
  if(match_cons(t, sym_prod_3))
    {
      y_54 = ATgetArgument(t, 0);
      z_54 = ATgetArgument(t, 1);
      b_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_55;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = z_54;
      if(match_cons(t, sym_cf_1))
        {
          a_55 = ATgetArgument(t, 0);
          t = a_55;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              w_54 = ATgetArgument(t, 0);
              q_54 = ATgetArgument(t, 1);
              t = y_54;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_54 = ATgetFirst((ATermList) t);
                  v_54 = (ATerm) ATgetNext((ATermList) t);
                  t = v_54;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = r_54;
                      if(match_cons(t, sym_cf_1))
                        {
                          s_54 = ATgetArgument(t, 0);
                          t = s_54;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              t_54 = ATgetArgument(t, 0);
                              p_54 = ATgetArgument(t, 1);
                              {
                                ATerm g_14 = t;
                                int c_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = f_55(y_54, z_54, b_55, x_54, t);
                                    LocalPopChoice(c_15);
                                  }
                                else
                                  {
                                    t = g_14;
                                    {
                                      ATerm d_15 = t;
                                      int e_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = g_55(y_54, z_54, b_55, x_54, t);
                                          LocalPopChoice(e_15);
                                        }
                                      else
                                        {
                                          t = d_15;
                                          {
                                            ATerm f_15 = t;
                                            int g_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_55(y_54, z_54, b_55, x_54, t);
                                                LocalPopChoice(g_15);
                                              }
                                            else
                                              {
                                                t = f_15;
                                                {
                                                  ATerm h_15 = t;
                                                  int i_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = w_54;
                                                      if((t_54 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = q_54;
                                                      if((p_54 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = x_54;
                                                      LocalPopChoice(i_15);
                                                    }
                                                  else
                                                    {
                                                      t = h_15;
                                                      t = i_55(y_54, z_54, b_55, x_54, t);
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
                              ATerm j_15 = t;
                              int k_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_55(y_54, z_54, b_55, x_54, t);
                                  LocalPopChoice(k_15);
                                }
                              else
                                {
                                  t = j_15;
                                  {
                                    ATerm l_15 = t;
                                    int m_15 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = g_55(y_54, z_54, b_55, x_54, t);
                                        LocalPopChoice(m_15);
                                      }
                                    else
                                      {
                                        t = l_15;
                                        {
                                          ATerm n_15 = t;
                                          int o_15 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_55(y_54, z_54, b_55, x_54, t);
                                              LocalPopChoice(o_15);
                                            }
                                          else
                                            {
                                              t = n_15;
                                              t = i_55(y_54, z_54, b_55, x_54, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm p_15 = t;
                          int q_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_55(y_54, z_54, b_55, x_54, t);
                              LocalPopChoice(q_15);
                            }
                          else
                            {
                              t = p_15;
                              {
                                ATerm s_15 = t;
                                int u_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = g_55(y_54, z_54, b_55, x_54, t);
                                    LocalPopChoice(u_15);
                                  }
                                else
                                  {
                                    t = s_15;
                                    {
                                      ATerm v_15 = t;
                                      int w_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = h_55(y_54, z_54, b_55, x_54, t);
                                          LocalPopChoice(w_15);
                                        }
                                      else
                                        {
                                          t = v_15;
                                          t = i_55(y_54, z_54, b_55, x_54, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = r_54;
                      {
                        ATerm x_15 = t;
                        int z_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_55(y_54, z_54, b_55, x_54, t);
                            LocalPopChoice(z_15);
                          }
                        else
                          {
                            t = x_15;
                            {
                              ATerm b_16 = t;
                              int e_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = g_55(y_54, z_54, b_55, x_54, t);
                                  LocalPopChoice(e_16);
                                }
                              else
                                {
                                  t = b_16;
                                  {
                                    ATerm f_16 = t;
                                    int g_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = h_55(y_54, z_54, b_55, x_54, t);
                                        LocalPopChoice(g_16);
                                      }
                                    else
                                      {
                                        t = f_16;
                                        t = i_55(y_54, z_54, b_55, x_54, t);
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
                  ATerm i_16 = t;
                  int a_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_55(y_54, z_54, b_55, x_54, t);
                      LocalPopChoice(a_17);
                    }
                  else
                    {
                      t = i_16;
                      {
                        ATerm b_17 = t;
                        int c_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = g_55(y_54, z_54, b_55, x_54, t);
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
                                  t = h_55(y_54, z_54, b_55, x_54, t);
                                  LocalPopChoice(e_17);
                                }
                              else
                                {
                                  t = d_17;
                                  t = i_55(y_54, z_54, b_55, x_54, t);
                                }
                            }
                          }
                      }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_iter_star_1))
                {
                  w_54 = ATgetArgument(t, 0);
                  t = y_54;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_54 = ATgetFirst((ATermList) t);
                      v_54 = (ATerm) ATgetNext((ATermList) t);
                      t = v_54;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = r_54;
                          if(match_cons(t, sym_cf_1))
                            {
                              s_54 = ATgetArgument(t, 0);
                              t = s_54;
                              if(match_cons(t, sym_iter_1))
                                {
                                  t_54 = ATgetArgument(t, 0);
                                  {
                                    ATerm g_17 = t;
                                    int h_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_55(y_54, z_54, b_55, x_54, t);
                                        LocalPopChoice(h_17);
                                      }
                                    else
                                      {
                                        t = g_17;
                                        {
                                          ATerm j_17 = t;
                                          int p_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = g_55(y_54, z_54, b_55, x_54, t);
                                              LocalPopChoice(p_17);
                                            }
                                          else
                                            {
                                              t = j_17;
                                              {
                                                ATerm v_17 = t;
                                                int x_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = h_55(y_54, z_54, b_55, x_54, t);
                                                    LocalPopChoice(x_17);
                                                  }
                                                else
                                                  {
                                                    t = v_17;
                                                    {
                                                      ATerm y_17 = t;
                                                      int z_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = w_54;
                                                          if((t_54 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = x_54;
                                                          LocalPopChoice(z_17);
                                                        }
                                                      else
                                                        {
                                                          t = y_17;
                                                          t = i_55(y_54, z_54, b_55, x_54, t);
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
                                  ATerm a_18 = t;
                                  int b_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = f_55(y_54, z_54, b_55, x_54, t);
                                      LocalPopChoice(b_18);
                                    }
                                  else
                                    {
                                      t = a_18;
                                      {
                                        ATerm c_18 = t;
                                        int d_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = g_55(y_54, z_54, b_55, x_54, t);
                                            LocalPopChoice(d_18);
                                          }
                                        else
                                          {
                                            t = c_18;
                                            {
                                              ATerm e_18 = t;
                                              int f_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = h_55(y_54, z_54, b_55, x_54, t);
                                                  LocalPopChoice(f_18);
                                                }
                                              else
                                                {
                                                  t = e_18;
                                                  t = i_55(y_54, z_54, b_55, x_54, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm g_18 = t;
                              int h_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_55(y_54, z_54, b_55, x_54, t);
                                  LocalPopChoice(h_18);
                                }
                              else
                                {
                                  t = g_18;
                                  {
                                    ATerm i_18 = t;
                                    int j_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = g_55(y_54, z_54, b_55, x_54, t);
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
                                              t = h_55(y_54, z_54, b_55, x_54, t);
                                              LocalPopChoice(l_18);
                                            }
                                          else
                                            {
                                              t = k_18;
                                              t = i_55(y_54, z_54, b_55, x_54, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = r_54;
                          {
                            ATerm m_18 = t;
                            int n_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = f_55(y_54, z_54, b_55, x_54, t);
                                LocalPopChoice(n_18);
                              }
                            else
                              {
                                t = m_18;
                                {
                                  ATerm o_18 = t;
                                  int p_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = g_55(y_54, z_54, b_55, x_54, t);
                                      LocalPopChoice(p_18);
                                    }
                                  else
                                    {
                                      t = o_18;
                                      {
                                        ATerm q_18 = t;
                                        int r_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_55(y_54, z_54, b_55, x_54, t);
                                            LocalPopChoice(r_18);
                                          }
                                        else
                                          {
                                            t = q_18;
                                            t = i_55(y_54, z_54, b_55, x_54, t);
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
                      ATerm s_18 = t;
                      int t_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_55(y_54, z_54, b_55, x_54, t);
                          LocalPopChoice(t_18);
                        }
                      else
                        {
                          t = s_18;
                          {
                            ATerm u_18 = t;
                            int v_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = g_55(y_54, z_54, b_55, x_54, t);
                                LocalPopChoice(v_18);
                              }
                            else
                              {
                                t = u_18;
                                {
                                  ATerm w_18 = t;
                                  int x_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_55(y_54, z_54, b_55, x_54, t);
                                      LocalPopChoice(x_18);
                                    }
                                  else
                                    {
                                      t = w_18;
                                      t = i_55(y_54, z_54, b_55, x_54, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = y_54;
                  {
                    ATerm y_18 = t;
                    int z_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_55(y_54, z_54, b_55, x_54, t);
                        LocalPopChoice(z_18);
                      }
                    else
                      {
                        t = y_18;
                        {
                          ATerm a_19 = t;
                          int b_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_55(y_54, z_54, b_55, x_54, t);
                              LocalPopChoice(b_19);
                            }
                          else
                            {
                              t = a_19;
                              {
                                ATerm c_19 = t;
                                int d_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_55(y_54, z_54, b_55, x_54, t);
                                    LocalPopChoice(d_19);
                                  }
                                else
                                  {
                                    t = c_19;
                                    t = i_55(y_54, z_54, b_55, x_54, t);
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
          if(match_cons(t, sym_sort_1))
            {
              a_55 = ATgetArgument(t, 0);
              t = a_55;
              if(match_string(t, "<START>"))
                {
                  t = y_54;
                  {
                    ATerm e_19 = t;
                    int f_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_55(y_54, z_54, b_55, x_54, t);
                        LocalPopChoice(f_19);
                      }
                    else
                      {
                        t = e_19;
                        {
                          ATerm g_19 = t;
                          int h_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_55(y_54, z_54, b_55, x_54, t);
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
                                    t = h_55(y_54, z_54, b_55, x_54, t);
                                    LocalPopChoice(j_19);
                                  }
                                else
                                  {
                                    t = i_19;
                                    {
                                      ATerm n_19 = t;
                                      int t_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = i_55(y_54, z_54, b_55, x_54, t);
                                          LocalPopChoice(t_19);
                                        }
                                      else
                                        {
                                          t = n_19;
                                          t = x_54;
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
                  t = y_54;
                  {
                    ATerm x_19 = t;
                    int y_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_55(y_54, z_54, b_55, x_54, t);
                        LocalPopChoice(y_19);
                      }
                    else
                      {
                        t = x_19;
                        {
                          ATerm b_20 = t;
                          int c_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = g_55(y_54, z_54, b_55, x_54, t);
                              LocalPopChoice(c_20);
                            }
                          else
                            {
                              t = b_20;
                              {
                                ATerm d_20 = t;
                                int f_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_55(y_54, z_54, b_55, x_54, t);
                                    LocalPopChoice(f_20);
                                  }
                                else
                                  {
                                    t = d_20;
                                    t = i_55(y_54, z_54, b_55, x_54, t);
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
              t = y_54;
              {
                ATerm h_20 = t;
                int i_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_55(y_54, z_54, b_55, x_54, t);
                    LocalPopChoice(i_20);
                  }
                else
                  {
                    t = h_20;
                    {
                      ATerm j_20 = t;
                      int l_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_55(y_54, z_54, b_55, x_54, t);
                          LocalPopChoice(l_20);
                        }
                      else
                        {
                          t = j_20;
                          {
                            ATerm m_20 = t;
                            int n_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_55(y_54, z_54, b_55, x_54, t);
                                LocalPopChoice(n_20);
                              }
                            else
                              {
                                t = m_20;
                                t = i_55(y_54, z_54, b_55, x_54, t);
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
      t = y_54;
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_55(y_54, z_54, b_55, x_54, t);
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            {
              ATerm q_20 = t;
              int r_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_55(y_54, z_54, b_55, x_54, t);
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
                        t = h_55(y_54, z_54, b_55, x_54, t);
                        LocalPopChoice(t_20);
                      }
                    else
                      {
                        t = s_20;
                        t = i_55(y_54, z_54, b_55, x_54, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      c_56 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
      t = c_56;
      if(match_cons(t, sym_Ins_1))
        {
          z_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_55 = ATgetFirst((ATermList) t);
          x_55 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_55), y_55), z_55);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              y_55 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, y_55), z_55);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, z_55);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          c_56 = ATgetArgument(t, 0);
          d_56 = ATgetArgument(t, 1);
          e_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_56), (ATerm) ATinsert(ATempty, d_56)), c_56);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      w_56 = ATgetArgument(t, 0);
      z_56 = ATgetArgument(t, 1);
      t = z_56;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_56;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = w_56;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  x_56 = ATgetArgument(t, 0);
                  y_56 = ATgetArgument(t, 1);
                  t = w_56;
                }
              else
                {
                  t = w_56;
                }
            }
        }
      else
        {
          t = w_56;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = z_56;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  x_56 = ATgetArgument(t, 0);
                  y_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, x_56, (ATerm) ATmakeAppl(sym_Conc_2, y_56, z_56));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          w_56 = ATgetArgument(t, 0);
          z_56 = ATgetArgument(t, 1);
          u_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_56;
      if(match_cons(t, sym_Conc_3))
        {
          x_56 = ATgetArgument(t, 0);
          y_56 = ATgetArgument(t, 1);
          t_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, x_56, y_56, (ATerm) ATmakeAppl(sym_Conc_3, t_56, z_56, u_56));
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_57 = NULL,y_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_57 = ATgetFirst((ATermList) t);
          y_57 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, x_57), y_57);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              x_57 = ATgetArgument(t, 0);
              y_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, x_57, (ATerm) ATmakeAppl(sym_Ins_1, y_57));
        }
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm x_20 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = x_20;
            t = Conc_2_0(n_1, _id, t);
          }
      }
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_58 = ATgetFirst((ATermList) t);
      f_58 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, e_58), f_58);
    }
  else
    {
      if(match_cons(t, sym_Snoc_2))
        {
          e_58 = ATgetArgument(t, 0);
          f_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_2, e_58, (ATerm) ATmakeAppl(sym_Ins_1, f_58));
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm g_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CTC2_0_0(t);
      t = Cons_2_0(conc_to_cons_0_0, _id, t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = g_21;
      {
        ATerm o_58 = NULL;
        if(match_cons(t, sym_Ins_1))
          {
            o_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, o_58);
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_1_0(m_1, t);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2_0(_id, conc_to_cons_0_0, t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
  }
  t = try_1_0(o_1, t);
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm t_59 = NULL,v_59 = NULL,x_59 = NULL,z_59 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      c_60 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
      {
        ATerm x_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_60 = ATgetFirst((ATermList) t);
      f_60 = (ATerm) ATgetNext((ATermList) t);
      t = f_60;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_60;
          if(match_cons(t, sym_opt_1))
            {
              h_60 = ATgetArgument(t, 0);
              t = h_60;
              if((d_60 != t))
                {
                  _fail(t);
                }
              t = term_y_21;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  h_60 = ATgetArgument(t, 0);
                  t = d_60;
                  if(match_cons(t, sym_cf_1))
                    {
                      e_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = h_60;
                  if(match_cons(t, sym_opt_1))
                    {
                      i_60 = ATgetArgument(t, 0);
                      t = i_60;
                      if((e_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_y_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          i_60 = ATgetArgument(t, 0);
                          t = i_60;
                          if((e_60 != t))
                            {
                              _fail(t);
                            }
                          t = term_a_22;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              i_60 = ATgetArgument(t, 0);
                              {
                                ATerm b_22 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = i_60;
                          if((e_60 != t))
                            {
                              _fail(t);
                            }
                          t = term_a_22;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      h_60 = ATgetArgument(t, 0);
                      t = h_60;
                      if((d_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_a_22;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          h_60 = ATgetArgument(t, 0);
                          {
                            ATerm c_22 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = h_60;
                      if((d_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_a_22;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_22 = ATgetFirst((ATermList) t);
              t_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_59;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = g_60;
              {
                ATerm e_22 = t;
                int f_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm g_22 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(f_22);
                    t = term_h_22;
                  }
                else
                  {
                    t = e_22;
                    if(match_cons(t, sym_cf_1))
                      {
                        h_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = h_60;
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm i_22 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_h_22;
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_22 = ATgetFirst((ATermList) t);
                  v_59 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_59;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_60;
                  {
                    ATerm k_22 = t;
                    int l_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm m_22 = ATgetArgument(t, 0);
                            ATerm n_22 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_22);
                        t = term_h_22;
                      }
                    else
                      {
                        t = k_22;
                        if(match_cons(t, sym_cf_1))
                          {
                            h_60 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = h_60;
                        {
                          ATerm o_22 = t;
                          int q_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_1))
                                {
                                  ATerm r_22 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(q_22);
                              t = term_h_22;
                            }
                          else
                            {
                              t = o_22;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm s_22 = ATgetArgument(t, 0);
                                  ATerm t_22 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = term_h_22;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm u_22 = ATgetFirst((ATermList) t);
                      x_59 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = x_59;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm v_22 = ATgetFirst((ATermList) t);
                      z_59 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = z_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_60;
                  if(match_cons(t, sym_cf_1))
                    {
                      h_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = h_60;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm w_22 = ATgetArgument(t, 0);
                      ATerm x_22 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_h_22;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_60;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm a_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(z_22);
            t = term_c_23;
          }
        else
          {
            t = y_22;
            if(match_cons(t, sym_cf_1))
              {
                h_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_60;
            if(match_cons(t, sym_opt_1))
              {
                ATerm f_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_c_23;
          }
      }
    }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      x_60 = ATgetArgument(t, 0);
      y_60 = ATgetArgument(t, 1);
      {
        ATerm g_23 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = x_60;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_60;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm k_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_23);
        t = term_l_23;
      }
    else
      {
        t = i_23;
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm p_23 = ATgetArgument(t, 0);
                  ATerm q_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(o_23);
              t = term_l_23;
            }
          else
            {
              t = n_23;
              if(match_cons(t, sym_cf_1))
                {
                  z_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_60;
              {
                ATerm r_23 = t;
                int s_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm u_23 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_23);
                    t = term_l_23;
                  }
                else
                  {
                    t = r_23;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm y_23 = ATgetArgument(t, 0);
                        ATerm z_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_l_23;
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = try_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,y_61 = NULL,z_61 = NULL,a_16 = NULL;
  k_61 = t;
  if(match_cons(t, sym_appl_2))
    {
      h_61 = ATgetArgument(t, 0);
      i_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_61);
  g_61 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, h_61, i_61);
  a_16 = t;
  t = SSLsetAnnotations(a_16, g_61);
  j_61 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_61 = ATgetArgument(t, 0);
      z_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_61;
        t = ConstrNil_0_0(t);
        t = (ATerm) ATempty;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm y_39 = NULL;
          t = y_61;
          {
            ATerm c_24 = t;
            int d_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_40 = NULL,e_40 = NULL;
                if(match_cons(t, sym_prod_3))
                  {
                    ATerm e_24 = ATgetArgument(t, 0);
                    ATerm f_24 = ATgetArgument(t, 1);
                    c_40 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = c_40;
                {
                  static ATerm u_1 (ATerm t);
                  static ATerm u_1 (ATerm t)
                  {
                    if(match_cons(t, sym_cons_1))
                      {
                        if(((e_40 != NULL) && (e_40 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1_0(u_1, t);
                }
                t = not_null(e_40);
                LocalPopChoice(d_24);
              }
            else
              {
                t = c_24;
                t = Constr1_0_0(t);
              }
          }
          y_39 = t;
          t = SSL_mkterm(y_39, z_61);
        }
      }
  }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(p_1, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
static ATerm h_67 (ATerm y_63, ATerm t)
{
  static ATerm j_67 (ATerm t);
  static ATerm j_67 (ATerm t)
  {
    ATerm z_63 = NULL,a_64 = NULL,d_64 = NULL,e_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,s_64 = NULL,t_64 = NULL;
    z_63 = t;
    if(match_cons(t, sym_appl_2))
      {
        a_64 = ATgetArgument(t, 0);
        i_64 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = a_64;
    if(match_cons(t, sym_prod_3))
      {
        ATerm g_24 = ATgetArgument(t, 0);
        d_64 = ATgetArgument(t, 1);
        {
          ATerm h_24 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = d_64;
    if(match_cons(t, sym_cf_1))
      {
        e_64 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_64;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm i_24 = ATgetArgument(t, 0);
        ATerm j_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_64;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_64 = ATgetFirst((ATermList) t);
        k_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = k_64;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, j_64);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_64 = ATgetFirst((ATermList) t);
            m_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_64;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_64 = ATgetFirst((ATermList) t);
            o_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_64;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm z_64 = NULL,a_65 = NULL;
            t = j_64;
            t = j_67(t);
            z_64 = t;
            t = n_64;
            t = j_67(t);
            a_65 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_65), (ATerm) ATinsert(ATempty, l_64)), z_64);
            t = concat_0_0(t);
          }
        else
          {
            ATerm i_65 = NULL,j_65 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_64 = ATgetFirst((ATermList) t);
                q_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_64;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_64 = ATgetFirst((ATermList) t);
                t_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_64;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_64;
            t = j_67(t);
            i_65 = t;
            t = s_64;
            t = j_67(t);
            j_65 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_65), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_64), n_64), l_64)), i_65);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = y_63;
  t = j_67(t);
  return(t);
}
static ATerm i_67 (ATerm k_65, ATerm t)
{
  static ATerm k_67 (ATerm t);
  static ATerm k_67 (ATerm t)
  {
    ATerm l_65 = NULL,m_65 = NULL,o_65 = NULL,p_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,y_65 = NULL,z_65 = NULL;
    l_65 = t;
    if(match_cons(t, sym_appl_2))
      {
        m_65 = ATgetArgument(t, 0);
        s_65 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = m_65;
    if(match_cons(t, sym_prod_3))
      {
        ATerm k_24 = ATgetArgument(t, 0);
        o_65 = ATgetArgument(t, 1);
        {
          ATerm l_24 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = o_65;
    if(match_cons(t, sym_cf_1))
      {
        p_65 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = p_65;
    if(match_cons(t, sym_iter_1))
      {
        ATerm m_24 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = s_65;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_65 = ATgetFirst((ATermList) t);
        u_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = u_65;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, t_65);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_65 = ATgetFirst((ATermList) t);
            w_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_65;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm e_66 = NULL,f_66 = NULL;
            t = t_65;
            t = k_67(t);
            e_66 = t;
            t = v_65;
            t = k_67(t);
            f_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, f_66), e_66);
            t = concat_0_0(t);
          }
        else
          {
            ATerm k_66 = NULL,l_66 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_65 = ATgetFirst((ATermList) t);
                z_65 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_65;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_65;
            t = k_67(t);
            k_66 = t;
            t = y_65;
            t = k_67(t);
            l_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_66), (ATerm) ATinsert(ATempty, v_65)), k_66);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = k_65;
  t = k_67(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  p_66 = t;
  if(match_cons(t, sym_appl_2))
    {
      q_66 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_66;
  if(match_cons(t, sym_prod_3))
    {
      r_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
      {
        ATerm n_24 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = w_66;
  if(match_cons(t, sym_cf_1))
    {
      x_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_66;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm x_24 = ATgetArgument(t, 0);
            ATerm z_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_24);
        t = a_67;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_67 = ATgetFirst((ATermList) t);
            c_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_67;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_66;
            {
              ATerm a_25 = t;
              int d_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_67(p_66, t);
                  LocalPopChoice(d_25);
                }
              else
                {
                  t = a_25;
                  t = (ATerm) ATinsert(ATempty, b_67);
                }
            }
          }
        else
          {
            t = r_66;
            t = h_67(p_66, t);
          }
      }
    else
      {
        t = o_24;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm o_25 = ATgetArgument(t, 0);
                  ATerm p_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(n_25);
              t = r_66;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = a_67;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_66 = ATgetFirst((ATermList) t);
                      v_66 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = s_66;
                  if(match_cons(t, sym_cf_1))
                    {
                      t_66 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_66;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm w_25 = ATgetArgument(t, 0);
                      ATerm x_25 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_66;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_67;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_67 = ATgetFirst((ATermList) t);
                      c_67 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_67;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_67;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = m_25;
              {
                ATerm y_25 = t;
                int a_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm b_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_26);
                    t = a_67;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        b_67 = ATgetFirst((ATermList) t);
                        c_67 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = c_67;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = r_66;
                        {
                          ATerm q_26 = t;
                          int r_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_67(p_66, t);
                              LocalPopChoice(r_26);
                            }
                          else
                            {
                              t = q_26;
                              t = (ATerm) ATinsert(ATempty, b_67);
                            }
                        }
                      }
                    else
                      {
                        t = r_66;
                        t = i_67(p_66, t);
                      }
                  }
                else
                  {
                    t = y_25;
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm u_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_66;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = a_67;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            s_66 = ATgetFirst((ATermList) t);
                            v_66 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = s_66;
                        if(match_cons(t, sym_cf_1))
                          {
                            t_66 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = t_66;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm w_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = v_66;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = a_67;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            b_67 = ATgetFirst((ATermList) t);
                            c_67 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = c_67;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = b_67;
                        t = FlatList_0_0(t);
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
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_67 = ATgetFirst((ATermList) t);
      v_67 = (ATerm) ATgetNext((ATermList) t);
      t = v_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_67 = ATgetFirst((ATermList) t);
          t_67 = (ATerm) ATgetNext((ATermList) t);
          t = s_67;
          if(match_int(t, 34))
            {
              t = u_67;
              if(match_int(t, 92))
                {
                  ATerm d_27 = t;
                  int e_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_67 = NULL;
                      t = t_67;
                      t = De_Escape_0_0(t);
                      y_67 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_67), term_i_27);
                      LocalPopChoice(e_27);
                    }
                  else
                    {
                      t = d_27;
                      {
                        ATerm b_68 = NULL;
                        t = v_67;
                        t = De_Escape_0_0(t);
                        b_68 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_68), u_67);
                      }
                    }
                }
              else
                {
                  ATerm e_68 = NULL;
                  t = v_67;
                  t = De_Escape_0_0(t);
                  e_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_68), u_67);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = u_67;
                  if(match_int(t, 92))
                    {
                      ATerm j_27 = t;
                      int k_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_68 = NULL;
                          t = t_67;
                          t = De_Escape_0_0(t);
                          g_68 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_68), term_l_27);
                          LocalPopChoice(k_27);
                        }
                      else
                        {
                          t = j_27;
                          {
                            ATerm j_68 = NULL;
                            t = v_67;
                            t = De_Escape_0_0(t);
                            j_68 = t;
                            t = (ATerm) ATinsert(CheckATermList(j_68), u_67);
                          }
                        }
                    }
                  else
                    {
                      ATerm m_68 = NULL;
                      t = v_67;
                      t = De_Escape_0_0(t);
                      m_68 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_68), u_67);
                    }
                }
              else
                {
                  ATerm p_68 = NULL;
                  t = v_67;
                  t = De_Escape_0_0(t);
                  p_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_68), u_67);
                }
            }
        }
      else
        {
          ATerm s_68 = NULL;
          t = v_67;
          t = De_Escape_0_0(t);
          s_68 = t;
          t = (ATerm) ATinsert(CheckATermList(s_68), u_67);
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
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_69 = ATgetFirst((ATermList) t);
      d_69 = (ATerm) ATgetNext((ATermList) t);
      t = d_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_69 = ATgetFirst((ATermList) t);
          b_69 = (ATerm) ATgetNext((ATermList) t);
          t = a_69;
          if(match_int(t, 34))
            {
              t = c_69;
              if(match_int(t, 92))
                {
                  ATerm n_27 = t;
                  int q_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_69 = NULL;
                      t = b_69;
                      t = De_Escape_0_0(t);
                      g_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_69), term_i_27);
                      LocalPopChoice(q_27);
                    }
                  else
                    {
                      t = n_27;
                      {
                        ATerm j_69 = NULL;
                        t = d_69;
                        t = De_Escape_0_0(t);
                        j_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_69), c_69);
                      }
                    }
                }
              else
                {
                  ATerm m_69 = NULL;
                  t = d_69;
                  t = De_Escape_0_0(t);
                  m_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_69), c_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = c_69;
                  if(match_int(t, 92))
                    {
                      ATerm r_27 = t;
                      int s_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_69 = NULL;
                          t = b_69;
                          t = De_Escape_0_0(t);
                          o_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(o_69), term_l_27);
                          LocalPopChoice(s_27);
                        }
                      else
                        {
                          t = r_27;
                          {
                            ATerm r_69 = NULL;
                            t = d_69;
                            t = De_Escape_0_0(t);
                            r_69 = t;
                            t = (ATerm) ATinsert(CheckATermList(r_69), c_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm u_69 = NULL;
                      t = d_69;
                      t = De_Escape_0_0(t);
                      u_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(u_69), c_69);
                    }
                }
              else
                {
                  ATerm x_69 = NULL;
                  t = d_69;
                  t = De_Escape_0_0(t);
                  x_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_69), c_69);
                }
            }
        }
      else
        {
          ATerm a_70 = NULL;
          t = d_69;
          t = De_Escape_0_0(t);
          a_70 = t;
          t = (ATerm) ATinsert(CheckATermList(a_70), c_69);
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
static ATerm v_1 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_27) != AT_INT) || (ATgetInt((ATermInt) t_27) != 34)))
        _fail(t);
      {
        ATerm b_28 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(b_28) != AT_LIST) || !(ATisEmpty(b_28))))
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
  ATerm b_70 = NULL;
  t = explode_string_0_0(t);
  b_70 = t;
  t = Hd_0_0(t);
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = b_70;
  t = Tl_0_0(t);
  t = at_last_1_0(v_1, t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_28);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_n_28);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_28);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL;
  g_70 = t;
  if(match_cons(t, sym_cf_1))
    {
      e_70 = ATgetArgument(t, 0);
      {
        ATerm i_70 = NULL;
        t = e_70;
        t = PpSym_0_0(t);
        i_70 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_28)), i_70), (ATerm) ATinsert(ATempty, term_r_28));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          e_70 = ATgetArgument(t, 0);
          {
            ATerm k_70 = NULL;
            t = e_70;
            t = PpSym_0_0(t);
            k_70 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_28)), k_70), (ATerm) ATinsert(ATempty, term_r_28));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_v_28);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  e_70 = ATgetArgument(t, 0);
                  f_70 = ATgetArgument(t, 1);
                  {
                    ATerm n_70 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(f_70), e_70);
                    t = map_1_0(PpSym_0_0, t);
                    n_70 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_28)), n_70), (ATerm) ATinsert(ATempty, term_w_28));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      e_70 = ATgetArgument(t, 0);
                      t = e_70;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(w_1, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          e_70 = ATgetArgument(t, 0);
                          t = e_70;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(x_1, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              e_70 = ATgetArgument(t, 0);
                              t = e_70;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(z_1, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  e_70 = ATgetArgument(t, 0);
                                  f_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm t_70 = NULL,u_70 = NULL;
                                    t = e_70;
                                    t = PpSym_0_0(t);
                                    t_70 = t;
                                    t = f_70;
                                    t = PpSym_0_0(t);
                                    u_70 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_29)), u_70), t_70), (ATerm) ATinsert(ATempty, term_a_29));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      e_70 = ATgetArgument(t, 0);
                                      f_70 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_70 = NULL,y_70 = NULL;
                                        t = e_70;
                                        t = PpSym_0_0(t);
                                        x_70 = t;
                                        t = f_70;
                                        t = PpSym_0_0(t);
                                        y_70 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_29)), y_70), x_70), (ATerm) ATinsert(ATempty, term_a_29));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm d_29 = t;
                                      int e_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              e_70 = ATgetArgument(t, 0);
                                              {
                                                ATerm f_29 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(e_29);
                                          {
                                            ATerm a_71 = NULL;
                                            t = e_70;
                                            t = PpSym_0_0(t);
                                            a_71 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_29)), a_71);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = d_29;
                                          {
                                            ATerm h_29 = t;
                                            int i_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    e_70 = ATgetArgument(t, 0);
                                                    f_70 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(i_29);
                                                {
                                                  ATerm e_71 = NULL,g_71 = NULL;
                                                  t = e_70;
                                                  t = PpSym_0_0(t);
                                                  e_71 = t;
                                                  t = f_70;
                                                  t = PpSym_0_0(t);
                                                  g_71 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_29)), g_71), e_71);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = h_29;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    e_70 = ATgetArgument(t, 0);
                                                    f_70 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_71 = NULL,k_71 = NULL;
                                                      t = e_70;
                                                      t = PpSym_0_0(t);
                                                      j_71 = t;
                                                      t = f_70;
                                                      t = PpSym_0_0(t);
                                                      k_71 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_71), (ATerm) ATinsert(ATempty, term_k_29)), j_71);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        e_70 = ATgetArgument(t, 0);
                                                        f_70 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_71 = NULL,o_71 = NULL;
                                                          t = e_70;
                                                          t = filter_1_0(PpSym_0_0, t);
                                                          t = concat_0_0(t);
                                                          n_71 = t;
                                                          t = f_70;
                                                          t = PpSym_0_0(t);
                                                          o_71 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_71), (ATerm) ATinsert(ATempty, term_l_29)), n_71);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            e_70 = ATgetArgument(t, 0);
                                                            f_70 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_71 = NULL,t_71 = NULL;
                                                              t = e_70;
                                                              t = PpSym_0_0(t);
                                                              s_71 = t;
                                                              t = f_70;
                                                              t = PpSym_0_0(t);
                                                              t_71 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_71), (ATerm) ATinsert(ATempty, term_m_29)), s_71);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                e_70 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, e_70);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    e_70 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm w_71 = NULL;
                                                                      t = e_70;
                                                                      t = try_1_0(c_2, t);
                                                                      w_71 = t;
                                                                      t = (ATerm) ATinsert(ATempty, w_71);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm n_29 = t;
                                                                    int o_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            e_70 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm p_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(o_29);
                                                                        {
                                                                          ATerm y_71 = NULL;
                                                                          t = e_70;
                                                                          t = try_1_0(g_2, t);
                                                                          y_71 = t;
                                                                          t = (ATerm) ATinsert(ATempty, y_71);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_29;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_s_29);
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm p_73 (ATerm k_72, ATerm l_72, ATerm m_72, ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
  t = k_72;
  if(match_cons(t, sym_cf_1))
    {
      r_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_72;
  {
    ATerm t_29 = t;
    if((PushChoice() == 0))
      {
        ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,c_16 = NULL;
        u_72 = t;
        if(match_cons(t, sym_sort_1))
          {
            t_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_72);
        s_72 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, t_72);
        c_16 = t;
        t = SSLsetAnnotations(c_16, s_72);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_29;
      }
  }
  t = PpSym_0_0(t);
  q_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_29)), q_72), (ATerm) ATinsert(ATempty, term_u_29));
  t = concat_0_0(t);
  t = concat_strings_0_0(t);
  p_72 = t;
  t = SSL_mkterm(p_72, l_72);
  return(t);
}
static ATerm q_73 (ATerm v_72, ATerm w_72, ATerm x_72, ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,d_16 = NULL;
  t = v_72;
  if(match_cons(t, sym_cf_1))
    {
      c_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_73;
  if(match_cons(t, sym_sort_1))
    {
      e_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_73);
  d_73 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, e_73);
  d_16 = t;
  t = SSLsetAnnotations(d_16, d_73);
  t = PpSym_0_0(t);
  t = concat_strings_0_0(t);
  b_73 = t;
  t = SSL_mkterm(b_73, w_72);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,i_73 = NULL,j_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  f_73 = t;
  if(match_cons(t, sym_appl_2))
    {
      g_73 = ATgetArgument(t, 0);
      l_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_73;
  if(match_cons(t, sym_prod_3))
    {
      ATerm v_29 = ATgetArgument(t, 0);
      i_73 = ATgetArgument(t, 1);
      {
        ATerm w_29 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = l_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_73 = ATgetFirst((ATermList) t);
      n_73 = (ATerm) ATgetNext((ATermList) t);
      t = n_73;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = i_73;
          if(match_cons(t, sym_sort_1))
            {
              j_73 = ATgetArgument(t, 0);
              t = j_73;
              if(match_string(t, "<START>"))
                {
                  ATerm x_29 = t;
                  int y_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_73(i_73, l_73, f_73, t);
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
                            t = q_73(i_73, l_73, f_73, t);
                            LocalPopChoice(a_30);
                          }
                        else
                          {
                            t = z_29;
                            t = m_73;
                          }
                      }
                    }
                }
              else
                {
                  ATerm c_30 = t;
                  int d_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_73(i_73, l_73, f_73, t);
                      LocalPopChoice(d_30);
                    }
                  else
                    {
                      t = c_30;
                      t = q_73(i_73, l_73, f_73, t);
                    }
                }
            }
          else
            {
              ATerm e_30 = t;
              int f_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_73(i_73, l_73, f_73, t);
                  LocalPopChoice(f_30);
                }
              else
                {
                  t = e_30;
                  t = q_73(i_73, l_73, f_73, t);
                }
            }
        }
      else
        {
          t = i_73;
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_73(i_73, l_73, f_73, t);
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
                t = q_73(i_73, l_73, f_73, t);
              }
          }
        }
    }
  else
    {
      t = i_73;
      {
        ATerm i_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_73(i_73, l_73, f_73, t);
            LocalPopChoice(k_30);
          }
        else
          {
            t = i_30;
            t = q_73(i_73, l_73, f_73, t);
          }
      }
    }
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm z_73 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      z_73 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_73;
  if(match_cons(t, sym_prod_3))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      c_74 = ATgetArgument(t, 1);
      {
        ATerm m_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_74;
  if(match_cons(t, sym_cf_1))
    {
      d_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_74;
  if(match_cons(t, sym_layout_0))
    {
      t = g_74;
      t = concat_strings_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          e_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_74;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = g_74;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_n_30;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_74 = ATgetFirst((ATermList) t);
              i_74 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_74;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, h_74));
        }
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL;
  p_74 = t;
  if(match_cons(t, sym_appl_2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      ATerm p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_74 = t;
  t = SSLgetAnnotations(p_74);
  o_74 = t;
  t = q_74;
  {
    static ATerm h_75 (ATerm t);
    static ATerm h_75 (ATerm t)
    {
      ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
      e_75 = t;
      if(match_cons(t, sym_appl_2))
        {
          c_75 = ATgetArgument(t, 0);
          d_75 = ATgetArgument(t, 1);
          {
            ATerm r_30 = t;
            int t_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_40 = NULL,r_40 = NULL,u_40 = NULL,h_16 = NULL;
                t = SSLgetAnnotations(e_75);
                r_40 = t;
                t = d_75;
                t = map_1_0(h_75, t);
                u_40 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, c_75, u_40);
                h_16 = t;
                t = SSLsetAnnotations(h_16, r_40);
                if(match_cons(t, sym_appl_2))
                  {
                    ATerm u_30 = ATgetArgument(t, 0);
                    o_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_40;
                t = concat_0_0(t);
                LocalPopChoice(t_30);
              }
            else
              {
                t = r_30;
                t = (ATerm) ATinsert(ATempty, e_75);
              }
          }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, e_75);
        }
      return(t);
    }
    t = h_75(t);
  }
  t = implode_string_0_0(t);
  n_74 = t;
  t = SSLsetAnnotations(n_74, o_74);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm z_75 = NULL,b_76 = NULL,c_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL;
  f_76 = t;
  if(match_cons(t, sym_appl_2))
    {
      g_76 = ATgetArgument(t, 0);
      {
        ATerm w_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_76;
  if(match_cons(t, sym_prod_3))
    {
      h_76 = ATgetArgument(t, 0);
      i_76 = ATgetArgument(t, 1);
      {
        ATerm x_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_76;
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm g_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_31);
        t = h_76;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_75 = ATgetFirst((ATermList) t);
            b_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_75;
        if(match_cons(t, sym_lex_1))
          {
            ATerm h_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_76;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_76;
        t = yield_0_0(t);
      }
    else
      {
        t = e_31;
        {
          ATerm i_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm n_31 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(j_31);
              t = f_76;
              t = yield_0_0(t);
            }
          else
            {
              t = i_31;
              {
                ATerm o_31 = t;
                int u_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm x_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_31);
                    {
                      ATerm m_76 = NULL;
                      t = f_76;
                      t = yield_0_0(t);
                      m_76 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, m_76);
                    }
                  }
                else
                  {
                    t = o_31;
                    if(match_cons(t, sym_varsym_1))
                      {
                        j_76 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = j_76;
                    if(match_cons(t, sym_cf_1))
                      {
                        c_76 = ATgetArgument(t, 0);
                        t = c_76;
                        {
                          ATerm y_31 = t;
                          int z_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm a_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_31);
                              t = h_76;
                              {
                                ATerm b_32 = t;
                                int c_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_76 = NULL;
                                    t = f_76;
                                    t = yield_0_0(t);
                                    n_76 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, n_76);
                                    LocalPopChoice(c_32);
                                  }
                                else
                                  {
                                    t = b_32;
                                    {
                                      ATerm o_76 = NULL;
                                      t = f_76;
                                      t = yield_0_0(t);
                                      o_76 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, o_76);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = y_31;
                              {
                                ATerm d_32 = t;
                                int f_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm g_32 = ATgetArgument(t, 0);
                                        ATerm h_32 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(f_32);
                                    t = h_76;
                                    {
                                      ATerm i_32 = t;
                                      int j_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_76 = NULL;
                                          t = f_76;
                                          t = yield_0_0(t);
                                          p_76 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, p_76);
                                          LocalPopChoice(j_32);
                                        }
                                      else
                                        {
                                          t = i_32;
                                          {
                                            ATerm q_76 = NULL;
                                            t = f_76;
                                            t = yield_0_0(t);
                                            q_76 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, q_76);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = d_32;
                                    {
                                      ATerm k_32 = t;
                                      int m_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm p_32 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(m_32);
                                          t = h_76;
                                          {
                                            ATerm q_32 = t;
                                            int r_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_76 = NULL;
                                                t = f_76;
                                                t = yield_0_0(t);
                                                r_76 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, r_76);
                                                LocalPopChoice(r_32);
                                              }
                                            else
                                              {
                                                t = q_32;
                                                {
                                                  ATerm s_76 = NULL;
                                                  t = f_76;
                                                  t = yield_0_0(t);
                                                  s_76 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, s_76);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = k_32;
                                          {
                                            ATerm s_32 = t;
                                            int t_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm u_32 = ATgetArgument(t, 0);
                                                    ATerm v_32 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(t_32);
                                                t = h_76;
                                                {
                                                  ATerm w_32 = t;
                                                  int x_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_76 = NULL;
                                                      t = f_76;
                                                      t = yield_0_0(t);
                                                      t_76 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, t_76);
                                                      LocalPopChoice(x_32);
                                                    }
                                                  else
                                                    {
                                                      t = w_32;
                                                      {
                                                        ATerm u_76 = NULL;
                                                        t = f_76;
                                                        t = yield_0_0(t);
                                                        u_76 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, u_76);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = s_32;
                                                {
                                                  ATerm v_76 = NULL;
                                                  t = f_76;
                                                  t = yield_0_0(t);
                                                  v_76 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, v_76);
                                                }
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
                        ATerm w_76 = NULL;
                        t = f_76;
                        t = yield_0_0(t);
                        w_76 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, w_76);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm h_77 = NULL;
  h_77 = t;
  t = term_y_32;
  t = get_config_0_0(t);
  t = h_77;
  t = downup2_2_0(m_2, w_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = try_1_0(implode_lexical_0_0, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = try_1_0(flat_layout_0_0, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm i_77 = NULL;
  i_77 = t;
  t = term_z_32;
  t = get_config_0_0(t);
  t = i_77;
  t = topdown_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = try_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,y_16 = NULL,q_16 = NULL;
  t_77 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_77 = ATgetArgument(t, 0);
      l_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_77);
  j_77 = t;
  t = k_77;
  if(match_cons(t, sym_prod_3))
    {
      o_77 = ATgetArgument(t, 0);
      p_77 = ATgetArgument(t, 1);
      q_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_77);
  n_77 = t;
  t = o_77;
  t = filter_1_0(e_3, t);
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, r_77, p_77, q_77);
  q_16 = t;
  t = SSLsetAnnotations(q_16, n_77);
  s_77 = t;
  t = l_77;
  t = filter_1_0(f_3, t);
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, s_77, m_77);
  y_16 = t;
  t = SSLsetAnnotations(y_16, j_77);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm a_33 = t;
  if((PushChoice() == 0))
    {
      ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
      a_79 = t;
      if(match_cons(t, sym_appl_2))
        {
          b_79 = ATgetArgument(t, 0);
          z_78 = ATgetArgument(t, 1);
          {
            ATerm k_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,w_41 = NULL,x_41 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,m_16 = NULL,l_16 = NULL,k_16 = NULL,j_16 = NULL;
            t = SSLgetAnnotations(a_79);
            k_41 = t;
            t = b_79;
            if(match_cons(t, sym_prod_3))
              {
                o_41 = ATgetArgument(t, 0);
                q_41 = ATgetArgument(t, 1);
                r_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_79);
            n_41 = t;
            t = q_41;
            if(match_cons(t, sym_cf_1))
              {
                w_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_41);
            t_41 = t;
            t = w_41;
            if(match_cons(t, sym_opt_1))
              {
                t_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_41);
            s_43 = t;
            t = t_43;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, t_43);
            j_16 = t;
            t = SSLsetAnnotations(j_16, s_43);
            u_43 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, u_43);
            k_16 = t;
            t = SSLsetAnnotations(k_16, t_41);
            x_41 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, o_41, x_41, r_41);
            l_16 = t;
            t = SSLsetAnnotations(l_16, n_41);
            s_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, s_41, z_78);
            m_16 = t;
            t = SSLsetAnnotations(m_16, k_41);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              b_79 = ATgetArgument(t, 0);
              {
                ATerm f_44 = NULL,h_44 = NULL,m_44 = NULL,n_44 = NULL,o_16 = NULL,n_16 = NULL;
                t = SSLgetAnnotations(a_79);
                f_44 = t;
                t = b_79;
                if(match_cons(t, sym_opt_1))
                  {
                    m_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_79);
                h_44 = t;
                t = m_44;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, m_44);
                n_16 = t;
                t = SSLsetAnnotations(n_16, h_44);
                n_44 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, n_44);
                o_16 = t;
                t = SSLsetAnnotations(o_16, f_44);
              }
            }
          else
            {
              ATerm b_45 = NULL,p_16 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  b_79 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_79);
              b_45 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, b_79);
              p_16 = t;
              t = SSLsetAnnotations(p_16, b_45);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_33;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm c_33 = t;
  if((PushChoice() == 0))
    {
      ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
      i_80 = t;
      if(match_cons(t, sym_appl_2))
        {
          j_80 = ATgetArgument(t, 0);
          h_80 = ATgetArgument(t, 1);
          {
            ATerm s_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,u_16 = NULL,t_16 = NULL,s_16 = NULL,r_16 = NULL;
            t = SSLgetAnnotations(i_80);
            s_45 = t;
            t = j_80;
            if(match_cons(t, sym_prod_3))
              {
                a_46 = ATgetArgument(t, 0);
                b_46 = ATgetArgument(t, 1);
                c_46 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_80);
            z_45 = t;
            t = b_46;
            if(match_cons(t, sym_cf_1))
              {
                h_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_46);
            g_46 = t;
            t = h_46;
            if(match_cons(t, sym_opt_1))
              {
                k_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_46);
            j_46 = t;
            t = k_46;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, k_46);
            r_16 = t;
            t = SSLsetAnnotations(r_16, j_46);
            l_46 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, l_46);
            s_16 = t;
            t = SSLsetAnnotations(s_16, g_46);
            i_46 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, a_46, i_46, c_46);
            t_16 = t;
            t = SSLsetAnnotations(t_16, z_45);
            f_46 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, f_46, h_80);
            u_16 = t;
            t = SSLsetAnnotations(u_16, s_45);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              j_80 = ATgetArgument(t, 0);
              {
                ATerm s_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,w_16 = NULL,v_16 = NULL;
                t = SSLgetAnnotations(i_80);
                s_46 = t;
                t = j_80;
                if(match_cons(t, sym_opt_1))
                  {
                    v_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_80);
                u_46 = t;
                t = v_46;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, v_46);
                v_16 = t;
                t = SSLsetAnnotations(v_16, u_46);
                w_46 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, w_46);
                w_16 = t;
                t = SSLsetAnnotations(w_16, s_46);
              }
            }
          else
            {
              ATerm c_47 = NULL,x_16 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  j_80 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_80);
              c_47 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, j_80);
              x_16 = t;
              t = SSLsetAnnotations(x_16, c_47);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_33;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm k_80 = NULL;
  k_80 = t;
  t = term_d_33;
  t = get_config_0_0(t);
  t = k_80;
  t = topdown_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = repeat_1_0(ApplToSort_0_0, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm l_80 = NULL;
  l_80 = t;
  t = term_e_33;
  t = get_config_0_0(t);
  t = l_80;
  t = topdown_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = try_1_0(FlatList_0_0, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm m_80 = NULL;
  m_80 = t;
  t = term_f_33;
  t = get_config_0_0(t);
  t = m_80;
  t = topdown_1_0(a_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = try_1_0(b_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = is_list_0_0(t);
  t = filter_1_0(c_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm g_33 = t;
  if((PushChoice() == 0))
    {
      ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,z_16 = NULL;
      p_80 = t;
      if(match_cons(t, sym_lit_1))
        {
          o_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_80);
      n_80 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, o_80);
      z_16 = t;
      t = SSLsetAnnotations(z_16, n_80);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_33;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm q_80 = NULL;
  q_80 = t;
  t = term_j_33;
  t = get_config_0_0(t);
  t = q_80;
  t = replace_appl_0_0(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm r_80 = NULL;
  r_80 = t;
  t = term_k_33;
  t = get_config_0_0(t);
  t = r_80;
  t = bottomup_1_0(f_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = try_1_0(g_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      s_80 = ATgetArgument(t, 0);
      {
        ATerm l_33 = ATgetArgument(t, 1);
        if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
          {
            t_80 = ATgetFirst((ATermList) l_33);
            {
              ATerm m_33 = (ATerm) ATgetNext((ATermList) l_33);
              if(((ATgetType(m_33) != AT_LIST) || !(ATisEmpty(m_33))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_80;
  t = injection_0_0(t);
  t = t_80;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm u_80 = NULL;
  u_80 = t;
  t = term_n_33;
  t = get_config_0_0(t);
  t = u_80;
  t = topdown_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = try_1_0(FlatAlt_0_0, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_80 = NULL;
  v_80 = t;
  t = term_o_33;
  t = get_config_0_0(t);
  t = v_80;
  t = topdown_1_0(n_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = try_1_0(Tuple_0_0, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL;
  w_80 = t;
  t = term_p_33;
  t = get_config_0_0(t);
  t = w_80;
  if(match_cons(t, sym_parsetree_2))
    {
      x_80 = ATgetArgument(t, 0);
      {
        ATerm q_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_80;
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm g_77 = NULL;
  static ATerm p_4 (ATerm t);
  static ATerm p_4 (ATerm t)
  {
    if(((g_77 != NULL) && (g_77 != t)))
      _fail(t);
    else
      g_77 = t;
    {
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_33;
          t = get_config_0_0(t);
          t = g_77;
          LocalPopChoice(s_33);
          t = implodeAsfix_1_0(_id, t);
        }
      else
        {
          t = r_33;
          t = implodeAsfix_1_0(_fail, t);
        }
    }
    return(t);
  }
  if(((g_77 != NULL) && (g_77 != t)))
    _fail(t);
  else
    g_77 = t;
  t = try_1_0(i_2, t);
  t = try_1_0(x_2, t);
  t = try_1_0(n_3, t);
  t = try_1_0(x_3, t);
  t = try_1_0(z_3, t);
  t = try_1_0(d_4, t);
  t = try_1_0(e_4, t);
  t = try_1_0(h_4, t);
  t = try_1_0(m_4, t);
  t = try_1_0(o_4, t);
  t = try_1_0(p_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_81 = NULL;
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_32, f_81);
  t = set_config_0_0(t);
  t = f_81;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_u_33;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm g_81 = NULL;
  g_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, g_81);
  t = set_config_0_0(t);
  t = g_81;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_v_33;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm h_81 = NULL;
  h_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_33, h_81);
  t = set_config_0_0(t);
  t = h_81;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_w_33;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_81 = NULL;
  i_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_33, i_81);
  t = set_config_0_0(t);
  t = i_81;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_y_33;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm j_81 = NULL;
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_33, j_81);
  t = set_config_0_0(t);
  t = j_81;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm k_81 = NULL;
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, k_81);
  t = set_config_0_0(t);
  t = k_81;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm l_81 = NULL;
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_33, l_81);
  t = set_config_0_0(t);
  t = l_81;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm m_81 = NULL;
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_33, m_81);
  t = set_config_0_0(t);
  t = m_81;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm r_81 = NULL;
  r_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, r_81);
  t = set_config_0_0(t);
  t = r_81;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_d_34;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm s_81 = NULL;
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, s_81);
  t = set_config_0_0(t);
  t = s_81;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_e_34;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--concrete", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm t_81 = NULL;
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_33, t_81);
  t = set_config_0_0(t);
  t = t_81;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm g_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, s_4, t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = g_34;
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(t_4, v_4, w_4, t);
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            {
              ATerm l_34 = t;
              int m_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_4, y_4, z_4, t);
                  LocalPopChoice(m_34);
                }
              else
                {
                  t = l_34;
                  {
                    ATerm n_34 = t;
                    int o_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(b_5, d_5, f_5, t);
                        LocalPopChoice(o_34);
                      }
                    else
                      {
                        t = n_34;
                        {
                          ATerm p_34 = t;
                          int q_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(i_5, j_5, k_5, t);
                              LocalPopChoice(q_34);
                            }
                          else
                            {
                              t = p_34;
                              {
                                ATerm r_34 = t;
                                int s_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(l_5, m_5, o_5, t);
                                    LocalPopChoice(s_34);
                                  }
                                else
                                  {
                                    t = r_34;
                                    {
                                      ATerm t_34 = t;
                                      int u_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(p_5, r_5, w_5, t);
                                          LocalPopChoice(u_34);
                                        }
                                      else
                                        {
                                          t = t_34;
                                          {
                                            ATerm v_34 = t;
                                            int w_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(x_5, y_5, z_5, t);
                                                LocalPopChoice(w_34);
                                              }
                                            else
                                              {
                                                t = v_34;
                                                {
                                                  ATerm x_34 = t;
                                                  int y_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(d_6, e_6, f_6, t);
                                                      LocalPopChoice(y_34);
                                                    }
                                                  else
                                                    {
                                                      t = x_34;
                                                      {
                                                        ATerm z_34 = t;
                                                        int a_35 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(g_6, h_6, i_6, t);
                                                            LocalPopChoice(a_35);
                                                          }
                                                        else
                                                          {
                                                            t = z_34;
                                                            t = Option_3_0(j_6, l_6, m_6, t);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_2_0(implode_options_0_0, implode_0_0, t);
  return(t);
}

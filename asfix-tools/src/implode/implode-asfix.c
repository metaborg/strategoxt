#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Ins_1;
Symbol sym_Conc_2;
Symbol sym_Conc_3;
Symbol sym_Snoc_2;
Symbol sym_seq_1;
Symbol sym_ToTerm_1;
Symbol sym_ToStrategy_1;
Symbol sym_ToBuild_1;
Symbol sym_layout_1;
Symbol sym_meta_listvar_1;
Symbol sym_meta_var_1;
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
Symbol sym_Conc_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_layout_0;
Symbol sym_varsym_1;
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
Symbol sym_Conc_2;
Symbol sym_alt_2;
Symbol sym_seq_2;
Symbol sym_label_2;
Symbol sym_lit_1;
Symbol sym_sort_1;
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
Symbol sym_varsym_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_prod_3;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_appl_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
}
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_n_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_o_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_h_27;
ATerm term_s_26;
ATerm term_i_26;
ATerm term_s_23;
ATerm term_k_23;
ATerm term_d_22;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_n_13;
ATerm term_b_13;
ATerm term_r_10;
ATerm term_l_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm annotation_2_0 (ATerm h_23 (ATerm), ATerm i_23 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm t_87 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm c_17 (ATerm), ATerm d_17 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm skip_concrete_1_0 (ATerm j_23 (ATerm), ATerm t);
ATerm list_1_0 (ATerm t_90 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm a_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm s_22 (ATerm), ATerm d_10, ATerm c_10, ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplCons_1_0 (ATerm z_22 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
ATerm is_asfix_list_0_0 (ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm l_23 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm k_104 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_86 (ATerm), ATerm t);
ATerm add_0_0 (ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm i_55 (ATerm n_49, ATerm o_49, ATerm p_49, ATerm r_49, ATerm t);
static ATerm j_55 (ATerm j_50, ATerm k_50, ATerm l_50, ATerm m_50, ATerm t);
static ATerm k_55 (ATerm o_51, ATerm p_51, ATerm q_51, ATerm r_51, ATerm t);
static ATerm l_55 (ATerm i_54, ATerm j_54, ATerm k_54, ATerm l_54, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm c_86 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm Conc_2_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm f_87 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_99 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm l_67 (ATerm e_64, ATerm t);
static ATerm m_67 (ATerm o_65, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm r_91 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm g_91 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm q_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t);
static ATerm r_73 (ATerm x_72, ATerm y_72, ATerm z_72, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_1_0 (ATerm w_88 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_90 (ATerm), ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm implode_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm implode_options_0_0 (ATerm t);
ATerm io_wrap_2_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,d_0 = NULL;
  i_22 = t;
  if(match_cons(t, sym_cons_1))
    {
      h_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_22);
  g_22 = t;
  t = h_22;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, h_22);
  d_0 = t;
  t = SSLsetAnnotations(d_0, g_22);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm j_6 = t;
  if((PushChoice() == 0))
    {
      ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
      q_25 = t;
      if(match_cons(t, sym_appl_2))
        {
          r_25 = ATgetArgument(t, 0);
          p_25 = ATgetArgument(t, 1);
          {
            ATerm o_8 = NULL,r_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,h_2 = NULL,f_2 = NULL,l_9 = NULL;
            t = SSLgetAnnotations(q_25);
            o_8 = t;
            t = r_25;
            if(match_cons(t, sym_prod_3))
              {
                v_8 = ATgetArgument(t, 0);
                w_8 = ATgetArgument(t, 1);
                x_8 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_25);
            r_8 = t;
            t = w_8;
            if(match_cons(t, sym_cf_1))
              {
                l_9 = ATgetArgument(t, 0);
                {
                  ATerm w_9 = NULL,y_9 = NULL,b_10 = NULL,f_10 = NULL,c_2 = NULL,b_2 = NULL;
                  t = SSLgetAnnotations(w_8);
                  w_9 = t;
                  t = l_9;
                  if(match_cons(t, sym_opt_1))
                    {
                      b_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_9);
                  y_9 = t;
                  t = b_10;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, b_10);
                  b_2 = t;
                  t = SSLsetAnnotations(b_2, y_9);
                  f_10 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, f_10);
                  c_2 = t;
                  t = SSLsetAnnotations(c_2, w_9);
                }
              }
            else
              {
                ATerm n_10 = NULL,d_2 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    l_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_8);
                n_10 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, l_9);
                d_2 = t;
                t = SSLsetAnnotations(d_2, n_10);
              }
            y_8 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, v_8, y_8, x_8);
            f_2 = t;
            t = SSLsetAnnotations(f_2, r_8);
            z_8 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, z_8, p_25);
            h_2 = t;
            t = SSLsetAnnotations(h_2, o_8);
          }
        }
      else
        {
          ATerm t_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,j_2 = NULL,i_2 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              r_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_25);
          t_10 = t;
          t = r_25;
          if(match_cons(t, sym_opt_1))
            {
              w_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_25);
          v_10 = t;
          t = w_10;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, w_10);
          i_2 = t;
          t = SSLsetAnnotations(i_2, v_10);
          x_10 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, x_10);
          j_2 = t;
          t = SSLsetAnnotations(j_2, t_10);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_6;
    }
  {
    ATerm k_6 = t;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,m_2 = NULL,l_2 = NULL;
        b_26 = t;
        if(match_cons(t, sym_appl_2))
          {
            t_25 = ATgetArgument(t, 0);
            u_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_26);
        s_25 = t;
        t = t_25;
        if(match_cons(t, sym_prod_3))
          {
            w_25 = ATgetArgument(t, 0);
            x_25 = ATgetArgument(t, 1);
            y_25 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_25);
        v_25 = t;
        t = x_25;
        t = oncetd_1_0(e_0, t);
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, w_25, z_25, y_25);
        l_2 = t;
        t = SSLsetAnnotations(l_2, v_25);
        a_26 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, a_26, u_25);
        m_2 = t;
        t = SSLsetAnnotations(m_2, s_25);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_6;
      }
  }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,k_2 = NULL;
  e_26 = t;
  if(match_cons(t, sym_lex_1))
    {
      d_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_26);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, d_26);
  k_2 = t;
  t = SSLsetAnnotations(k_2, c_26);
  return(t);
}
ATerm annotation_2_0 (ATerm h_23 (ATerm), ATerm i_23 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,x_20 = NULL,z_20 = NULL,d_21 = NULL,r_21 = NULL,s_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,y_21 = NULL,c_22 = NULL,f_22 = NULL,o_0 = NULL,l_0 = NULL,g_0 = NULL;
  f_22 = t;
  if(match_cons(t, sym_appl_2))
    {
      u_20 = ATgetArgument(t, 0);
      x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  t_20 = t;
  t = u_20;
  if(match_cons(t, sym_prod_3))
    {
      d_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
      s_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_20);
  z_20 = t;
  t = s_21;
  if(match_cons(t, sym_attrs_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_21);
  v_21 = t;
  t = w_21;
  t = oncetd_1_0(b_0, t);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, y_21);
  g_0 = t;
  t = SSLsetAnnotations(g_0, v_21);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, d_21, r_21, c_22);
  l_0 = t;
  t = SSLsetAnnotations(l_0, z_20);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, u_21, x_20);
  o_0 = t;
  t = SSLsetAnnotations(o_0, t_20);
  t = x_20;
  t = filter_1_0(c_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_20;
  t = i_23(t);
  o_20 = t;
  t = n_20;
  t = h_23(t);
  p_20 = t;
  t = term_l_6;
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), o_20);
  s_20 = t;
  t = SSL_mkterm(q_20, s_20);
  return(t);
}
ATerm appl_2_0 (ATerm c_17 (ATerm), ATerm d_17 (ATerm), ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,y_6 = NULL;
  o_26 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_26);
  j_26 = t;
  t = k_26;
  t = c_17(t);
  m_26 = t;
  t = l_26;
  t = d_17(t);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, m_26, n_26);
  y_6 = t;
  t = SSLsetAnnotations(y_6, j_26);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm t_28 = NULL,v_28 = NULL,y_28 = NULL,a_29 = NULL,b_29 = NULL,d_29 = NULL,f_29 = NULL,g_29 = NULL,j_29 = NULL,k_7 = NULL,j_7 = NULL;
  j_29 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
      a_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_29);
  t_28 = t;
  t = y_28;
  if(match_cons(t, sym_cf_1))
    {
      d_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_28);
  b_29 = t;
  t = d_29;
  t = oncetd_1_0(j_0, t);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, f_29);
  j_7 = t;
  t = SSLsetAnnotations(j_7, b_29);
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, v_28, g_29, a_29);
  k_7 = t;
  t = SSLsetAnnotations(k_7, t_28);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm k_29 = NULL,m_29 = NULL,n_29 = NULL,i_7 = NULL;
  n_29 = t;
  if(match_cons(t, sym_sort_1))
    {
      m_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_29);
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, m_29);
  i_7 = t;
  t = SSLsetAnnotations(i_7, k_29);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,q_7 = NULL;
  z_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      y_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_11);
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, y_11);
  q_7 = t;
  t = SSLsetAnnotations(q_7, x_11);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,v_7 = NULL;
  z_12 = t;
  if(match_cons(t, sym_cons_1))
    {
      y_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  x_12 = t;
  t = y_12;
  if(match_string(t, "FromTerm"))
    {
      t = y_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("FromApp", 0, ATtrue)))
        _fail(t);
      t = y_12;
    }
  t = (ATerm) ATmakeAppl(sym_cons_1, y_12);
  v_7 = t;
  t = SSLsetAnnotations(v_7, x_12);
  return(t);
}
ATerm skip_concrete_1_0 (ATerm j_23 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,d_27 = NULL,e_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,x_27 = NULL,z_27 = NULL,a_28 = NULL,f_28 = NULL,g_28 = NULL,p_7 = NULL,h_7 = NULL,f_7 = NULL,b_7 = NULL,a_7 = NULL;
  static ATerm y_31 (ATerm t);
  static ATerm y_31 (ATerm t)
  {
    static ATerm n_0 (ATerm t);
    static ATerm n_0 (ATerm t)
    {
      ATerm m_6 = t;
      int n_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
          v_31 = t;
          if(match_cons(t, sym_appl_2))
            {
              w_31 = ATgetArgument(t, 0);
              x_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm o_6 = t;
            int q_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_7 = NULL,r_7 = NULL;
                t = SSLgetAnnotations(v_31);
                h_11 = t;
                t = w_31;
                if(match_cons(t, sym_prod_3))
                  {
                    o_11 = ATgetArgument(t, 0);
                    p_11 = ATgetArgument(t, 1);
                    q_11 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_31);
                n_11 = t;
                t = o_11;
                t = SRTS_one(p_0, t);
                r_11 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, r_11, p_11, q_11);
                r_7 = t;
                t = SSLsetAnnotations(r_7, n_11);
                s_11 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, s_11, x_31);
                t_7 = t;
                t = SSLsetAnnotations(t_7, h_11);
                t = j_23(t);
                LocalPopChoice(q_6);
              }
            else
              {
                t = o_6;
                {
                  ATerm g_12 = NULL,j_12 = NULL,k_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,r_12 = NULL,t_12 = NULL,u_12 = NULL,b_8 = NULL,a_8 = NULL,y_7 = NULL;
                  t = SSLgetAnnotations(v_31);
                  g_12 = t;
                  t = w_31;
                  if(match_cons(t, sym_prod_3))
                    {
                      k_12 = ATgetArgument(t, 0);
                      m_12 = ATgetArgument(t, 1);
                      n_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_31);
                  j_12 = t;
                  t = n_12;
                  if(match_cons(t, sym_attrs_1))
                    {
                      r_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_12);
                  p_12 = t;
                  t = r_12;
                  t = oncetd_1_0(q_0, t);
                  t_12 = t;
                  t = (ATerm) ATmakeAppl(sym_attrs_1, t_12);
                  y_7 = t;
                  t = SSLsetAnnotations(y_7, p_12);
                  u_12 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, k_12, m_12, u_12);
                  a_8 = t;
                  t = SSLsetAnnotations(a_8, j_12);
                  o_12 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, o_12, x_31);
                  b_8 = t;
                  t = SSLsetAnnotations(b_8, g_12);
                  t = j_23(t);
                }
              }
          }
          LocalPopChoice(n_6);
        }
      else
        {
          t = m_6;
          t = annotation_2_0(j_23, y_31, t);
        }
      return(t);
    }
    t = alltd_1_0(n_0, t);
    return(t);
  }
  g_28 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_28);
  x_26 = t;
  t = y_26;
  if(match_cons(t, sym_prod_3))
    {
      e_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
      j_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  d_27 = t;
  t = i_27;
  if(match_cons(t, sym_cf_1))
    {
      s_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_27);
  r_27 = t;
  t = s_27;
  if(match_cons(t, sym_sort_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  z_27 = t;
  t = a_28;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, a_28);
  a_7 = t;
  t = SSLsetAnnotations(a_7, z_27);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, f_28);
  b_7 = t;
  t = SSLsetAnnotations(b_7, r_27);
  x_27 = t;
  t = j_27;
  if(match_cons(t, sym_attrs_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_27);
  l_27 = t;
  t = m_27;
  {
    static ATerm f_0 (ATerm t);
    static ATerm f_0 (ATerm t)
    {
      ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,o_28 = NULL,p_28 = NULL,d_7 = NULL,c_7 = NULL;
      p_28 = t;
      if(match_cons(t, sym_term_1))
        {
          j_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_28);
      i_28 = t;
      t = j_28;
      if(match_cons(t, sym_cons_1))
        {
          l_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_28);
      k_28 = t;
      t = l_28;
      if(((v_26 != NULL) && (v_26 != t)))
        _fail(t);
      else
        v_26 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, l_28);
      c_7 = t;
      t = SSLsetAnnotations(c_7, k_28);
      o_28 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, o_28);
      d_7 = t;
      t = SSLsetAnnotations(d_7, i_28);
      return(t);
    }
    t = SRTS_one(f_0, t);
  }
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, n_27);
  f_7 = t;
  t = SSLsetAnnotations(f_7, l_27);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, e_27, x_27, q_27);
  h_7 = t;
  t = SSLsetAnnotations(h_7, d_27);
  k_27 = t;
  t = z_26;
  {
    static ATerm h_0 (ATerm t);
    static ATerm h_0 (ATerm t)
    {
      t = appl_2_0(i_0, _id, t);
      if(((w_26 != NULL) && (w_26 != t)))
        _fail(t);
      else
        w_26 = t;
      return(t);
    }
    t = oncetd_1_0(h_0, t);
  }
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, k_27, a_27);
  p_7 = t;
  t = SSLsetAnnotations(p_7, x_26);
  t = not_null(v_26);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(w_26));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(w_26));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(w_26));
        }
    }
  t = y_31(t);
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,b_1 = NULL,e_1 = NULL,g_1 = NULL,i_1 = NULL,l_1 = NULL;
  u_0 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_0 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
      {
        ATerm s_6 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_0;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_6 = ATgetFirst((ATermList) t);
      x_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_0;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_6 = ATgetFirst((ATermList) t);
      z_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_0;
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_6 = ATgetFirst((ATermList) t);
            b_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_6);
        t = b_1;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_1;
            {
              ATerm z_6 = t;
              int l_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm m_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_7);
                  t = u_0;
                }
              else
                {
                  t = z_6;
                  if(match_cons(t, sym_cf_1))
                    {
                      l_1 = ATgetArgument(t, 0);
                      t = l_1;
                      {
                        ATerm n_7 = t;
                        int o_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm u_7 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(o_7);
                            t = u_0;
                          }
                        else
                          {
                            t = n_7;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm w_7 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = u_0;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm x_7 = ATgetArgument(t, 0);
                          ATerm z_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_0;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_8 = ATgetFirst((ATermList) t);
                e_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_8 = ATgetFirst((ATermList) t);
                g_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_1;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_1;
            if(match_cons(t, sym_cf_1))
              {
                l_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_1;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm e_8 = ATgetArgument(t, 0);
                ATerm f_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_0;
          }
      }
    else
      {
        t = v_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_1;
        if(match_cons(t, sym_iter_1))
          {
            ATerm g_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_0;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm a_0 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_appl_2))
    {
      r_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_2 = ATgetFirst((ATermList) t);
      u_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_2 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_2 = ATgetFirst((ATermList) t);
      p_2 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL;
        t = p_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_2;
        t = is_conc_0_0(t);
        t = t_2;
        t = a_0(t);
        c_3 = t;
        t = v_2;
        t = a_0(t);
        d_3 = t;
        t = o_2;
        t = a_0(t);
        e_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_3, (ATerm) ATinsert(CheckATermList(e_3), d_3));
        t = conc_0_0(t);
      }
    }
  else
    {
      ATerm k_0 = NULL,m_0 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_2;
      t = is_conc_0_0(t);
      t = t_2;
      t = a_0(t);
      k_0 = t;
      t = v_2;
      t = a_0(t);
      m_0 = t;
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_0;
            {
              ATerm j_8 = t;
              int k_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Nil_0_0(t);
                  LocalPopChoice(k_8);
                }
              else
                {
                  t = j_8;
                  t = Cons_2_0(_id, _id, t);
                }
            }
            t = (ATerm) ATmakeAppl(sym__2, k_0, m_0);
            t = conc_0_0(t);
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            t = (ATerm) ATmakeAppl(sym_Conc_2, k_0, m_0);
          }
      }
    }
  return(t);
}
static ATerm m_5 (ATerm s_22 (ATerm), ATerm d_10, ATerm c_10, ATerm t)
{
  ATerm r_5 = NULL,w_5 = NULL,y_5 = NULL;
  t = d_10;
  if(match_cons(t, sym_prod_3))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      ATerm m_8 = ATgetArgument(t, 1);
      w_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_5;
  {
    static ATerm r_0 (ATerm t);
    static ATerm r_0 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((y_5 != NULL) && (y_5 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(r_0, t);
  }
  t = c_10;
  t = map_1_0(s_22, t);
  r_5 = t;
  t = SSL_mkterm(not_null(y_5), r_5);
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  s_3 = t;
  if(match_cons(t, sym_prod_3))
    {
      t_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
      {
        ATerm n_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = t_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_3 = ATgetFirst((ATermList) t);
      w_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_3;
  if(match_cons(t, sym_iter_1))
    {
      y_3 = ATgetArgument(t, 0);
      t = y_3;
      if((u_3 != t))
        {
          _fail(t);
        }
      t = s_3;
    }
  else
    {
      ATerm p_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              y_3 = ATgetArgument(t, 0);
              {
                ATerm s_8 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(q_8);
          t = y_3;
          if((u_3 != t))
            {
              _fail(t);
            }
          t = s_3;
        }
      else
        {
          t = p_8;
          if(match_cons(t, sym_cf_1))
            {
              y_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_3;
          if(match_cons(t, sym_cf_1))
            {
              v_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_3;
          if(match_cons(t, sym_iter_1))
            {
              z_3 = ATgetArgument(t, 0);
              t = z_3;
              if((v_3 != t))
                {
                  _fail(t);
                }
              t = s_3;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  z_3 = ATgetArgument(t, 0);
                  {
                    ATerm t_8 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = z_3;
              if((v_3 != t))
                {
                  _fail(t);
                }
              t = s_3;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm f_5 = NULL,h_5 = NULL,i_5 = NULL,l_5 = NULL;
  f_5 = t;
  if(match_cons(t, sym_prod_3))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
      {
        ATerm u_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = h_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = i_5;
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm c_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_9);
        t = f_5;
      }
    else
      {
        t = a_9;
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm f_9 = ATgetArgument(t, 0);
                  ATerm k_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(e_9);
              t = f_5;
            }
          else
            {
              t = d_9;
              if(match_cons(t, sym_cf_1))
                {
                  l_5 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_5;
              {
                ATerm o_9 = t;
                int p_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm q_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_9);
                    t = f_5;
                  }
                else
                  {
                    t = o_9;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm r_9 = ATgetArgument(t, 0);
                        ATerm s_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = f_5;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm z_22 (ATerm), ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 = NULL,i_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
      h_10 = t;
      if(match_cons(t, sym_appl_2))
        {
          i_10 = ATgetArgument(t, 0);
          k_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm v_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_10;
              t = m_5(z_22, i_10, k_10, t);
              LocalPopChoice(x_9);
            }
          else
            {
              t = v_9;
              {
                ATerm z_9 = t;
                int a_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(a_10);
                  }
                else
                  {
                    t = z_9;
                    {
                      ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
                      t = i_10;
                      if(match_cons(t, sym_prod_3))
                        {
                          q_1 = ATgetArgument(t, 0);
                          r_1 = ATgetArgument(t, 1);
                          {
                            ATerm g_10 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = q_1;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = r_1;
                      {
                        ATerm j_10 = t;
                        int o_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm p_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(o_10);
                            t = i_10;
                          }
                        else
                          {
                            t = j_10;
                            if(match_cons(t, sym_cf_1))
                              {
                                s_1 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_1;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm q_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = i_10;
                          }
                      }
                      t = term_r_10;
                    }
                  }
              }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_10 = ATgetFirst((ATermList) t);
              m_10 = (ATerm) ATgetNext((ATermList) t);
              t = m_10;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm s_10 = t;
                  int u_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_10;
                      t = m_5(z_22, i_10, k_10, t);
                      LocalPopChoice(u_10);
                    }
                  else
                    {
                      t = s_10;
                      {
                        ATerm y_10 = t;
                        int z_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_11 = NULL;
                            t = i_10;
                            t = is_ins_0_0(t);
                            t = l_10;
                            t = z_22(t);
                            t_11 = t;
                            t = (ATerm) ATinsert(ATempty, t_11);
                            LocalPopChoice(z_10);
                          }
                        else
                          {
                            t = y_10;
                            {
                              ATerm g_2 = NULL,g_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
                              t = i_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  g_3 = ATgetArgument(t, 0);
                                  n_3 = ATgetArgument(t, 1);
                                  {
                                    ATerm a_11 = ATgetArgument(t, 2);
                                  }
                                }
                              else
                                _fail(t);
                              t = g_3;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  k_3 = ATgetFirst((ATermList) t);
                                  m_3 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = m_3;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = n_3;
                              if(match_cons(t, sym_opt_1))
                                {
                                  o_3 = ATgetArgument(t, 0);
                                  t = o_3;
                                  if((k_3 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = i_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      o_3 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_3;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      l_3 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = o_3;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      p_3 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_3;
                                  if((l_3 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = i_10;
                                }
                              t = l_10;
                              t = z_22(t);
                              g_2 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, g_2);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = h_10;
                  t = m_5(z_22, i_10, k_10, t);
                }
            }
          else
            {
              t = h_10;
              t = m_5(z_22, i_10, k_10, t);
            }
        }
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = ReplConsConc_1_0(z_22, t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_7 = NULL,g_7 = NULL;
      g_7 = t;
      if(match_cons(t, sym_lit_1))
        {
          e_7 = ATgetArgument(t, 0);
          {
            ATerm s_7 = NULL,m_9 = NULL;
            t = SSLgetAnnotations(g_7);
            s_7 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, e_7);
            m_9 = t;
            t = SSLsetAnnotations(m_9, s_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = g_7;
        }
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      t = is_asfix_list_0_0(t);
    }
  return(t);
}
ATerm is_asfix_list_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym_iter_1))
    {
      l_17 = ATgetArgument(t, 0);
      {
        ATerm u_4 = NULL,g_9 = NULL;
        t = SSLgetAnnotations(k_17);
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, l_17);
        g_9 = t;
        t = SSLsetAnnotations(g_9, u_4);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_sep_2))
        {
          l_17 = ATgetArgument(t, 0);
          j_17 = ATgetArgument(t, 1);
          {
            ATerm c_5 = NULL,h_9 = NULL;
            t = SSLgetAnnotations(k_17);
            c_5 = t;
            t = (ATerm) ATmakeAppl(sym_iter_sep_2, l_17, j_17);
            h_9 = t;
            t = SSLsetAnnotations(h_9, c_5);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              l_17 = ATgetArgument(t, 0);
              {
                ATerm x_5 = NULL,i_9 = NULL;
                t = SSLgetAnnotations(k_17);
                x_5 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, l_17);
                i_9 = t;
                t = SSLsetAnnotations(i_9, x_5);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  l_17 = ATgetArgument(t, 0);
                  j_17 = ATgetArgument(t, 1);
                  {
                    ATerm g_6 = NULL,j_9 = NULL;
                    t = SSLgetAnnotations(k_17);
                    g_6 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, l_17, j_17);
                    j_9 = t;
                    t = SSLsetAnnotations(j_9, g_6);
                  }
                }
              else
                {
                  ATerm p_6 = NULL,r_6 = NULL,n_9 = NULL;
                  if(match_cons(t, sym_seq_1))
                    {
                      l_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_17);
                  p_6 = t;
                  t = l_17;
                  t = list_1_0(s_0, t);
                  r_6 = t;
                  t = (ATerm) ATmakeAppl(sym_seq_1, r_6);
                  n_9 = t;
                  t = SSLsetAnnotations(n_9, p_6);
                }
            }
        }
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,s_18 = NULL,t_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      s_18 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_18;
  if(match_cons(t, sym_prod_3))
    {
      t_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
      {
        ATerm d_11 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = t_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_18 = ATgetFirst((ATermList) t);
      o_18 = (ATerm) ATgetNext((ATermList) t);
      t = o_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_19;
      if(match_cons(t, sym_opt_1))
        {
          b_19 = ATgetArgument(t, 0);
          t = e_19;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_18 = ATgetFirst((ATermList) t);
              q_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_18;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_19;
          if((m_18 != t))
            {
              _fail(t);
            }
          t = is_asfix_list_0_0(t);
          t = p_18;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              b_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_18;
          if(match_cons(t, sym_cf_1))
            {
              n_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_19;
          if(match_cons(t, sym_opt_1))
            {
              c_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_19;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_18 = ATgetFirst((ATermList) t);
              q_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_18;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_19;
          if((n_18 != t))
            {
              _fail(t);
            }
          t = is_asfix_list_0_0(t);
          t = p_18;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_19;
      if(match_cons(t, sym_opt_1))
        {
          b_19 = ATgetArgument(t, 0);
          t = e_19;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_19;
          t = is_asfix_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              b_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_19;
          if(match_cons(t, sym_opt_1))
            {
              c_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_19;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_19;
          t = is_asfix_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm e_11 = t;
  if((PushChoice() == 0))
    {
      ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
      t_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          u_19 = ATgetArgument(t, 0);
          s_19 = ATgetArgument(t, 1);
          {
            ATerm i_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,f_13 = NULL,e_13 = NULL,p_22 = NULL;
            t = SSLgetAnnotations(t_19);
            i_21 = t;
            t = u_19;
            if(match_cons(t, sym_prod_3))
              {
                m_21 = ATgetArgument(t, 0);
                n_21 = ATgetArgument(t, 1);
                o_21 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_19);
            l_21 = t;
            t = n_21;
            if(match_cons(t, sym_cf_1))
              {
                p_22 = ATgetArgument(t, 0);
                {
                  ATerm b_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,s_12 = NULL,e_10 = NULL;
                  t = SSLgetAnnotations(n_21);
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
                  e_10 = t;
                  t = SSLsetAnnotations(e_10, d_23);
                  f_23 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, f_23);
                  s_12 = t;
                  t = SSLsetAnnotations(s_12, b_23);
                }
              }
            else
              {
                ATerm m_23 = NULL,w_12 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    p_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_21);
                m_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, p_22);
                w_12 = t;
                t = SSLsetAnnotations(w_12, m_23);
              }
            p_21 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, m_21, p_21, o_21);
            e_13 = t;
            t = SSLsetAnnotations(e_13, l_21);
            q_21 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, q_21, s_19);
            f_13 = t;
            t = SSLsetAnnotations(f_13, i_21);
          }
        }
      else
        {
          ATerm u_23 = NULL,x_23 = NULL,z_23 = NULL,a_24 = NULL,h_13 = NULL,g_13 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              u_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_19);
          u_23 = t;
          t = u_19;
          if(match_cons(t, sym_opt_1))
            {
              z_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_19);
          x_23 = t;
          t = z_23;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, z_23);
          g_13 = t;
          t = SSLsetAnnotations(g_13, x_23);
          a_24 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, a_24);
          h_13 = t;
          t = SSLsetAnnotations(h_13, u_23);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_11;
    }
  return(t);
}
ATerm implodeAsfix_1_0 (ATerm l_23 (ATerm), ATerm t)
{
  ATerm z_32 = NULL;
  static ATerm i_37 (ATerm t);
  static ATerm i_37 (ATerm t)
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_36 = NULL,b_37 = NULL,c_37 = NULL;
              b_37 = t;
              if(match_cons(t, sym_appl_2))
                {
                  c_37 = ATgetArgument(t, 0);
                  z_36 = ATgetArgument(t, 1);
                  {
                    ATerm k_11 = t;
                    int l_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = b_37;
                        t = l_23(t);
                        t = b_37;
                        t = skip_concrete_1_0(i_37, t);
                        LocalPopChoice(l_11);
                      }
                    else
                      {
                        t = k_11;
                        {
                          ATerm v_16 = NULL,a_17 = NULL,i_13 = NULL;
                          t = SSLgetAnnotations(b_37);
                          v_16 = t;
                          t = z_36;
                          t = filter_1_0(t_0, t);
                          a_17 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, c_37, a_17);
                          i_13 = t;
                          t = SSLsetAnnotations(i_13, v_16);
                          {
                            ATerm m_11 = t;
                            int u_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = i_37(t);
                                LocalPopChoice(u_11);
                              }
                            else
                              {
                                t = m_11;
                                {
                                  ATerm v_11 = t;
                                  int w_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ReplCons_1_0(i_37, t);
                                      LocalPopChoice(w_11);
                                    }
                                  else
                                    {
                                      t = v_11;
                                      {
                                        ATerm a_12 = t;
                                        int b_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                w_19 = ATgetArgument(t, 0);
                                                x_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = x_19;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                y_19 = ATgetFirst((ATermList) t);
                                                z_19 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = z_19;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = w_19;
                                            t = injection_0_0(t);
                                            t = y_19;
                                            t = i_37(t);
                                            LocalPopChoice(b_12);
                                          }
                                        else
                                          {
                                            t = a_12;
                                            {
                                              ATerm c_12 = t;
                                              int d_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Tuple_0_0(t);
                                                  t = i_37(t);
                                                  LocalPopChoice(d_12);
                                                }
                                              else
                                                {
                                                  t = c_12;
                                                  t = FlatAlt_0_0(t);
                                                  t = i_37(t);
                                                }
                                            }
                                          }
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
                      c_37 = ATgetArgument(t, 0);
                      {
                        ATerm e_12 = t;
                        int f_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = b_37;
                            t = l_23(t);
                            t = b_37;
                            t = skip_concrete_1_0(i_37, t);
                            LocalPopChoice(f_12);
                          }
                        else
                          {
                            t = e_12;
                            {
                              ATerm h_24 = NULL,n_24 = NULL,j_13 = NULL;
                              t = SSLgetAnnotations(b_37);
                              h_24 = t;
                              t = c_37;
                              t = list_1_0(i_37, t);
                              n_24 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, n_24);
                              j_13 = t;
                              t = SSLsetAnnotations(j_13, h_24);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = b_37;
                      t = l_23(t);
                      t = b_37;
                      t = skip_concrete_1_0(i_37, t);
                    }
                }
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              t = SRTS_all(i_37, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      z_32 = ATgetArgument(t, 0);
      {
        ATerm h_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_32;
  t = i_37(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm k_39 = NULL,q_39 = NULL,s_39 = NULL,t_39 = NULL,y_39 = NULL;
  k_39 = t;
  if(match_cons(t, sym_appl_2))
    {
      q_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_39;
  if(match_cons(t, sym_prod_3))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
      {
        ATerm l_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_39;
  {
    ATerm q_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm a_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_12);
        {
          ATerm h_25 = NULL;
          t = term_b_13;
          h_25 = t;
          t = SSL_mkterm(h_25, y_39);
        }
      }
    else
      {
        t = q_12;
        {
          ATerm r_26 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              t_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_39;
          if(match_cons(t, sym_seq_1))
            {
              ATerm c_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_b_13;
          r_26 = t;
          t = SSL_mkterm(r_26, y_39);
        }
      }
  }
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,b_41 = NULL,d_41 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  static ATerm h_44 (ATerm t);
  static ATerm h_44 (ATerm t)
  {
    ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL;
    if(match_cons(t, sym__2))
      {
        j_43 = ATgetArgument(t, 0);
        m_43 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_43;
    if(match_cons(t, sym_alt_2))
      {
        k_43 = ATgetArgument(t, 0);
        l_43 = ATgetArgument(t, 1);
        {
          ATerm d_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_43;
              if(((y_40 != NULL) && (y_40 != t)))
                _fail(t);
              else
                y_40 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, m_43, not_null(d_41));
              LocalPopChoice(k_13);
            }
          else
            {
              t = d_13;
              {
                ATerm l_13 = t;
                int m_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_43;
                    if(((y_40 != NULL) && (y_40 != t)))
                      _fail(t);
                    else
                      y_40 = t;
                    t = l_43;
                    if(((b_41 != NULL) && (b_41 != t)))
                      _fail(t);
                    else
                      b_41 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, m_43, not_null(d_41));
                    LocalPopChoice(m_13);
                  }
                else
                  {
                    t = l_13;
                    {
                      ATerm y_43 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, m_43, term_n_13);
                      t = add_0_0(t);
                      y_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_43, y_43);
                      t = h_44(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = j_43;
        if(((y_40 != NULL) && (y_40 != t)))
          _fail(t);
        else
          y_40 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, m_43, not_null(d_41));
      }
    return(t);
  }
  f_43 = t;
  if(match_cons(t, sym_appl_2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,h_28 = NULL,m_28 = NULL,n_28 = NULL,q_28 = NULL,r_28 = NULL,w_13 = NULL,v_13 = NULL,u_13 = NULL;
        t = SSLgetAnnotations(f_43);
        v_27 = t;
        t = g_43;
        if(match_cons(t, sym_prod_3))
          {
            c_28 = ATgetArgument(t, 0);
            d_28 = ATgetArgument(t, 1);
            e_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_43);
        b_28 = t;
        t = c_28;
        {
          static ATerm w_0 (ATerm t);
          static ATerm w_0 (ATerm t)
          {
            ATerm e_29 = NULL,h_29 = NULL;
            h_29 = t;
            if(match_cons(t, sym_cf_1))
              {
                e_29 = ATgetArgument(t, 0);
                {
                  ATerm q_13 = t;
                  int r_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_29 = NULL,t_13 = NULL;
                      t = SSLgetAnnotations(h_29);
                      z_29 = t;
                      t = e_29;
                      if(((y_40 != NULL) && (y_40 != t)))
                        _fail(t);
                      else
                        y_40 = t;
                      t = (ATerm) ATmakeAppl(sym_cf_1, e_29);
                      t_13 = t;
                      t = SSLsetAnnotations(t_13, z_29);
                      LocalPopChoice(r_13);
                    }
                  else
                    {
                      t = q_13;
                      t = h_29;
                      if(((y_40 != NULL) && (y_40 != t)))
                        _fail(t);
                      else
                        y_40 = t;
                      t = h_29;
                    }
                }
              }
            else
              {
                t = h_29;
                if(((y_40 != NULL) && (y_40 != t)))
                  _fail(t);
                else
                  y_40 = t;
                t = h_29;
              }
            return(t);
          }
          t = Cons_2_0(w_0, Nil_0_0, t);
        }
        h_28 = t;
        t = d_28;
        if(match_cons(t, sym_cf_1))
          {
            q_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_28);
        n_28 = t;
        t = q_28;
        if(match_cons(t, sym_alt_2))
          {
            w_40 = ATgetArgument(t, 0);
            x_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, q_28);
        u_13 = t;
        t = SSLsetAnnotations(u_13, n_28);
        r_28 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, h_28, r_28, e_28);
        v_13 = t;
        t = SSLsetAnnotations(v_13, b_28);
        m_28 = t;
        t = h_43;
        if(((d_41 != NULL) && (d_41 != t)))
          _fail(t);
        else
          d_41 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, m_28, h_43);
        w_13 = t;
        t = SSLsetAnnotations(w_13, v_27);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm n_30 = NULL,q_30 = NULL,i_31 = NULL,j_31 = NULL,q_31 = NULL,s_31 = NULL,t_31 = NULL,z_31 = NULL,c_32 = NULL,d_32 = NULL,z_13 = NULL,y_13 = NULL,x_13 = NULL;
          t = SSLgetAnnotations(f_43);
          n_30 = t;
          t = g_43;
          if(match_cons(t, sym_prod_3))
            {
              i_31 = ATgetArgument(t, 0);
              j_31 = ATgetArgument(t, 1);
              q_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_43);
          q_30 = t;
          t = i_31;
          {
            static ATerm y_0 (ATerm t);
            static ATerm y_0 (ATerm t)
            {
              if(((y_40 != NULL) && (y_40 != t)))
                _fail(t);
              else
                y_40 = t;
              return(t);
            }
            t = Cons_2_0(y_0, Nil_0_0, t);
          }
          s_31 = t;
          t = j_31;
          if(match_cons(t, sym_lex_1))
            {
              c_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_31);
          z_31 = t;
          t = c_32;
          if(match_cons(t, sym_alt_2))
            {
              w_40 = ATgetArgument(t, 0);
              x_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, c_32);
          x_13 = t;
          t = SSLsetAnnotations(x_13, z_31);
          d_32 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, s_31, d_32, q_31);
          y_13 = t;
          t = SSLsetAnnotations(y_13, q_30);
          t_31 = t;
          t = h_43;
          if(((d_41 != NULL) && (d_41 != t)))
            _fail(t);
          else
            d_41 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, t_31, h_43);
          z_13 = t;
          t = SSLsetAnnotations(z_13, n_30);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, w_40, x_40), term_n_13);
  t = h_44(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
  d_46 = t;
  if(match_cons(t, sym_sort_1))
    {
      e_46 = ATgetArgument(t, 0);
      {
        ATerm k_32 = NULL,h_14 = NULL;
        t = SSLgetAnnotations(d_46);
        k_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, e_46);
        h_14 = t;
        t = SSLsetAnnotations(h_14, k_32);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          e_46 = ATgetArgument(t, 0);
          {
            ATerm r_32 = NULL,t_32 = NULL,i_14 = NULL;
            t = SSLgetAnnotations(d_46);
            r_32 = t;
            t = e_46;
            t = injective_alt_0_0(t);
            t_32 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, t_32);
            i_14 = t;
            t = SSLsetAnnotations(i_14, r_32);
          }
        }
      else
        {
          ATerm c_33 = NULL,h_33 = NULL,m_33 = NULL,j_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              e_46 = ATgetArgument(t, 0);
              f_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_46);
          c_33 = t;
          t = e_46;
          t = injective_alt_0_0(t);
          h_33 = t;
          t = f_46;
          t = injective_alt_0_0(t);
          m_33 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, h_33, m_33);
          j_14 = t;
          t = SSLsetAnnotations(j_14, c_33);
        }
    }
  return(t);
}
static ATerm i_55 (ATerm n_49, ATerm o_49, ATerm p_49, ATerm r_49, ATerm t)
{
  ATerm t_49 = NULL,z_49 = NULL,a_50 = NULL,p_14 = NULL;
  t = SSLgetAnnotations(r_49);
  t_49 = t;
  t = n_49;
  t = Cons_2_0(a_1, Nil_0_0, t);
  z_49 = t;
  t = p_49;
  {
    ATerm s_13 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(c_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_13;
      }
  }
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, z_49, o_49, a_50);
  p_14 = t;
  t = SSLsetAnnotations(p_14, t_49);
  return(t);
}
static ATerm j_55 (ATerm j_50, ATerm k_50, ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm n_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_14 = NULL;
  t = SSLgetAnnotations(m_50);
  n_50 = t;
  t = j_50;
  t = Cons_2_0(d_1, Nil_0_0, t);
  r_50 = t;
  t = k_50;
  t = injective_alt_0_0(t);
  s_50 = t;
  t = l_50;
  {
    ATerm a_14 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(f_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_14;
      }
  }
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, r_50, s_50, t_50);
  u_14 = t;
  t = SSLsetAnnotations(u_14, n_50);
  return(t);
}
static ATerm k_55 (ATerm o_51, ATerm p_51, ATerm q_51, ATerm r_51, ATerm t)
{
  ATerm s_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,g_15 = NULL;
  t = SSLgetAnnotations(r_51);
  s_51 = t;
  t = o_51;
  t = Cons_2_0(h_1, Nil_0_0, t);
  w_51 = t;
  t = p_51;
  {
    static ATerm o_55 (ATerm t);
    static ATerm o_55 (ATerm t)
    {
      ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
      c_54 = t;
      if(match_cons(t, sym_sort_1))
        {
          d_54 = ATgetArgument(t, 0);
          {
            ATerm m_35 = NULL,w_14 = NULL;
            t = SSLgetAnnotations(c_54);
            m_35 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, d_54);
            w_14 = t;
            t = SSLsetAnnotations(w_14, m_35);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              d_54 = ATgetArgument(t, 0);
              {
                ATerm j_36 = NULL,m_36 = NULL,x_14 = NULL;
                t = SSLgetAnnotations(c_54);
                j_36 = t;
                t = d_54;
                t = o_55(t);
                m_36 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, m_36);
                x_14 = t;
                t = SSLsetAnnotations(x_14, j_36);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  d_54 = ATgetArgument(t, 0);
                  {
                    ATerm x_36 = NULL,a_37 = NULL,y_14 = NULL;
                    t = SSLgetAnnotations(c_54);
                    x_36 = t;
                    t = d_54;
                    t = o_55(t);
                    a_37 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, a_37);
                    y_14 = t;
                    t = SSLsetAnnotations(y_14, x_36);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      d_54 = ATgetArgument(t, 0);
                      {
                        ATerm n_37 = NULL,t_37 = NULL,z_14 = NULL;
                        t = SSLgetAnnotations(c_54);
                        n_37 = t;
                        t = d_54;
                        t = o_55(t);
                        t_37 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, t_37);
                        z_14 = t;
                        t = SSLsetAnnotations(z_14, n_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          d_54 = ATgetArgument(t, 0);
                          {
                            ATerm a_38 = NULL,c_38 = NULL,a_15 = NULL;
                            t = SSLgetAnnotations(c_54);
                            a_38 = t;
                            t = d_54;
                            t = o_55(t);
                            c_38 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, c_38);
                            a_15 = t;
                            t = SSLsetAnnotations(a_15, a_38);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              d_54 = ATgetArgument(t, 0);
                              e_54 = ATgetArgument(t, 1);
                              {
                                ATerm j_38 = NULL,m_38 = NULL,r_38 = NULL,s_38 = NULL,u_38 = NULL,c_15 = NULL,b_15 = NULL;
                                t = SSLgetAnnotations(c_54);
                                j_38 = t;
                                t = d_54;
                                t = o_55(t);
                                m_38 = t;
                                t = e_54;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    s_38 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(e_54);
                                r_38 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, s_38);
                                b_15 = t;
                                t = SSLsetAnnotations(b_15, r_38);
                                u_38 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_sep_2, m_38, u_38);
                                c_15 = t;
                                t = SSLsetAnnotations(c_15, j_38);
                              }
                            }
                          else
                            {
                              ATerm e_39 = NULL,i_39 = NULL,j_39 = NULL,l_39 = NULL,m_39 = NULL,e_15 = NULL,d_15 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  d_54 = ATgetArgument(t, 0);
                                  e_54 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(c_54);
                              e_39 = t;
                              t = d_54;
                              t = o_55(t);
                              i_39 = t;
                              t = e_54;
                              if(match_cons(t, sym_lit_1))
                                {
                                  l_39 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_54);
                              j_39 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, l_39);
                              d_15 = t;
                              t = SSLsetAnnotations(d_15, j_39);
                              m_39 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, i_39, m_39);
                              e_15 = t;
                              t = SSLsetAnnotations(e_15, e_39);
                            }
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = o_55(t);
  }
  x_51 = t;
  t = q_51;
  {
    ATerm b_14 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(j_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_14;
      }
  }
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, w_51, x_51, y_51);
  g_15 = t;
  t = SSLsetAnnotations(g_15, s_51);
  return(t);
}
static ATerm l_55 (ATerm i_54, ATerm j_54, ATerm k_54, ATerm l_54, ATerm t)
{
  ATerm m_54 = NULL,q_54 = NULL,h_15 = NULL;
  t = SSLgetAnnotations(l_54);
  m_54 = t;
  t = k_54;
  t = oncetd_1_0(k_1, t);
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, i_54, j_54, q_54);
  h_15 = t;
  t = SSLsetAnnotations(h_15, m_54);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,n_14 = NULL;
  e_50 = t;
  if(match_cons(t, sym_varsym_1))
    {
      d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_50);
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, d_50);
  n_14 = t;
  t = SSLsetAnnotations(n_14, c_50);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,i_50 = NULL,o_14 = NULL;
  i_50 = t;
  if(match_cons(t, sym_cons_1))
    {
      g_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_50);
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, g_50);
  o_14 = t;
  t = SSLsetAnnotations(o_14, f_50);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  j_51 = t;
  if(match_cons(t, sym_sort_1))
    {
      k_51 = ATgetArgument(t, 0);
      {
        ATerm v_33 = NULL,q_14 = NULL;
        t = SSLgetAnnotations(j_51);
        v_33 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, k_51);
        q_14 = t;
        t = SSLsetAnnotations(q_14, v_33);
      }
    }
  else
    {
      ATerm z_34 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,s_14 = NULL,r_14 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          k_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_51);
      z_34 = t;
      t = k_51;
      if(match_cons(t, sym_sort_1))
        {
          e_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_51);
      d_35 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, e_35);
      r_14 = t;
      t = SSLsetAnnotations(r_14, d_35);
      f_35 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, f_35);
      s_14 = t;
      t = SSLsetAnnotations(s_14, z_34);
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,t_14 = NULL;
  n_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_51);
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, m_51);
  t_14 = t;
  t = SSLsetAnnotations(t_14, l_51);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm c_14 = t;
  if((PushChoice() == 0))
    {
      ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,v_14 = NULL;
      c_52 = t;
      if(match_cons(t, sym_lit_1))
        {
          b_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_52);
      a_52 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, b_52);
      v_14 = t;
      t = SSLsetAnnotations(v_14, a_52);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_14;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,f_15 = NULL;
  h_54 = t;
  if(match_cons(t, sym_cons_1))
    {
      g_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_54);
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, g_54);
  f_15 = t;
  t = SSLsetAnnotations(f_15, f_54);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  if(match_string(t, "bracket"))
    {
      t = s_54;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = s_54;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  a_55 = t;
  if(match_cons(t, sym_prod_3))
    {
      b_55 = ATgetArgument(t, 0);
      c_55 = ATgetArgument(t, 1);
      e_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_55;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = c_55;
      if(match_cons(t, sym_cf_1))
        {
          d_55 = ATgetArgument(t, 0);
          t = d_55;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              z_54 = ATgetArgument(t, 0);
              u_54 = ATgetArgument(t, 1);
              t = b_55;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_54 = ATgetFirst((ATermList) t);
                  y_54 = (ATerm) ATgetNext((ATermList) t);
                  t = y_54;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = v_54;
                      if(match_cons(t, sym_cf_1))
                        {
                          w_54 = ATgetArgument(t, 0);
                          t = w_54;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              x_54 = ATgetArgument(t, 0);
                              t_54 = ATgetArgument(t, 1);
                              {
                                ATerm d_14 = t;
                                int e_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = i_55(b_55, c_55, e_55, a_55, t);
                                    LocalPopChoice(e_14);
                                  }
                                else
                                  {
                                    t = d_14;
                                    {
                                      ATerm f_14 = t;
                                      int g_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = j_55(b_55, c_55, e_55, a_55, t);
                                          LocalPopChoice(g_14);
                                        }
                                      else
                                        {
                                          t = f_14;
                                          {
                                            ATerm k_14 = t;
                                            int l_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = k_55(b_55, c_55, e_55, a_55, t);
                                                LocalPopChoice(l_14);
                                              }
                                            else
                                              {
                                                t = k_14;
                                                {
                                                  ATerm m_14 = t;
                                                  int i_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = z_54;
                                                      if((x_54 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = u_54;
                                                      if((t_54 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = a_55;
                                                      LocalPopChoice(i_15);
                                                    }
                                                  else
                                                    {
                                                      t = m_14;
                                                      t = l_55(b_55, c_55, e_55, a_55, t);
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
                                  t = i_55(b_55, c_55, e_55, a_55, t);
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
                                        t = j_55(b_55, c_55, e_55, a_55, t);
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
                                              t = k_55(b_55, c_55, e_55, a_55, t);
                                              LocalPopChoice(o_15);
                                            }
                                          else
                                            {
                                              t = n_15;
                                              t = l_55(b_55, c_55, e_55, a_55, t);
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
                              t = i_55(b_55, c_55, e_55, a_55, t);
                              LocalPopChoice(q_15);
                            }
                          else
                            {
                              t = p_15;
                              {
                                ATerm r_15 = t;
                                int s_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = j_55(b_55, c_55, e_55, a_55, t);
                                    LocalPopChoice(s_15);
                                  }
                                else
                                  {
                                    t = r_15;
                                    {
                                      ATerm t_15 = t;
                                      int u_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = k_55(b_55, c_55, e_55, a_55, t);
                                          LocalPopChoice(u_15);
                                        }
                                      else
                                        {
                                          t = t_15;
                                          t = l_55(b_55, c_55, e_55, a_55, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = v_54;
                      {
                        ATerm v_15 = t;
                        int w_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = i_55(b_55, c_55, e_55, a_55, t);
                            LocalPopChoice(w_15);
                          }
                        else
                          {
                            t = v_15;
                            {
                              ATerm x_15 = t;
                              int y_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_55(b_55, c_55, e_55, a_55, t);
                                  LocalPopChoice(y_15);
                                }
                              else
                                {
                                  t = x_15;
                                  {
                                    ATerm z_15 = t;
                                    int a_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = k_55(b_55, c_55, e_55, a_55, t);
                                        LocalPopChoice(a_16);
                                      }
                                    else
                                      {
                                        t = z_15;
                                        t = l_55(b_55, c_55, e_55, a_55, t);
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
                  ATerm b_16 = t;
                  int c_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_55(b_55, c_55, e_55, a_55, t);
                      LocalPopChoice(c_16);
                    }
                  else
                    {
                      t = b_16;
                      {
                        ATerm e_16 = t;
                        int h_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_55(b_55, c_55, e_55, a_55, t);
                            LocalPopChoice(h_16);
                          }
                        else
                          {
                            t = e_16;
                            {
                              ATerm i_16 = t;
                              int k_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = k_55(b_55, c_55, e_55, a_55, t);
                                  LocalPopChoice(k_16);
                                }
                              else
                                {
                                  t = i_16;
                                  t = l_55(b_55, c_55, e_55, a_55, t);
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
                  z_54 = ATgetArgument(t, 0);
                  t = b_55;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_54 = ATgetFirst((ATermList) t);
                      y_54 = (ATerm) ATgetNext((ATermList) t);
                      t = y_54;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = v_54;
                          if(match_cons(t, sym_cf_1))
                            {
                              w_54 = ATgetArgument(t, 0);
                              t = w_54;
                              if(match_cons(t, sym_iter_1))
                                {
                                  x_54 = ATgetArgument(t, 0);
                                  {
                                    ATerm r_16 = t;
                                    int s_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = i_55(b_55, c_55, e_55, a_55, t);
                                        LocalPopChoice(s_16);
                                      }
                                    else
                                      {
                                        t = r_16;
                                        {
                                          ATerm t_16 = t;
                                          int y_16 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_55(b_55, c_55, e_55, a_55, t);
                                              LocalPopChoice(y_16);
                                            }
                                          else
                                            {
                                              t = t_16;
                                              {
                                                ATerm z_16 = t;
                                                int b_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = k_55(b_55, c_55, e_55, a_55, t);
                                                    LocalPopChoice(b_17);
                                                  }
                                                else
                                                  {
                                                    t = z_16;
                                                    {
                                                      ATerm g_17 = t;
                                                      int m_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = z_54;
                                                          if((x_54 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = a_55;
                                                          LocalPopChoice(m_17);
                                                        }
                                                      else
                                                        {
                                                          t = g_17;
                                                          t = l_55(b_55, c_55, e_55, a_55, t);
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
                                  ATerm r_17 = t;
                                  int s_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_55(b_55, c_55, e_55, a_55, t);
                                      LocalPopChoice(s_17);
                                    }
                                  else
                                    {
                                      t = r_17;
                                      {
                                        ATerm t_17 = t;
                                        int u_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_55(b_55, c_55, e_55, a_55, t);
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
                                                  t = k_55(b_55, c_55, e_55, a_55, t);
                                                  LocalPopChoice(w_17);
                                                }
                                              else
                                                {
                                                  t = v_17;
                                                  t = l_55(b_55, c_55, e_55, a_55, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm x_17 = t;
                              int y_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_55(b_55, c_55, e_55, a_55, t);
                                  LocalPopChoice(y_17);
                                }
                              else
                                {
                                  t = x_17;
                                  {
                                    ATerm z_17 = t;
                                    int a_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = j_55(b_55, c_55, e_55, a_55, t);
                                        LocalPopChoice(a_18);
                                      }
                                    else
                                      {
                                        t = z_17;
                                        {
                                          ATerm b_18 = t;
                                          int c_18 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = k_55(b_55, c_55, e_55, a_55, t);
                                              LocalPopChoice(c_18);
                                            }
                                          else
                                            {
                                              t = b_18;
                                              t = l_55(b_55, c_55, e_55, a_55, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = v_54;
                          {
                            ATerm d_18 = t;
                            int e_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_55(b_55, c_55, e_55, a_55, t);
                                LocalPopChoice(e_18);
                              }
                            else
                              {
                                t = d_18;
                                {
                                  ATerm f_18 = t;
                                  int g_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_55(b_55, c_55, e_55, a_55, t);
                                      LocalPopChoice(g_18);
                                    }
                                  else
                                    {
                                      t = f_18;
                                      {
                                        ATerm h_18 = t;
                                        int i_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = k_55(b_55, c_55, e_55, a_55, t);
                                            LocalPopChoice(i_18);
                                          }
                                        else
                                          {
                                            t = h_18;
                                            t = l_55(b_55, c_55, e_55, a_55, t);
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
                      ATerm j_18 = t;
                      int k_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_55(b_55, c_55, e_55, a_55, t);
                          LocalPopChoice(k_18);
                        }
                      else
                        {
                          t = j_18;
                          {
                            ATerm l_18 = t;
                            int r_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_55(b_55, c_55, e_55, a_55, t);
                                LocalPopChoice(r_18);
                              }
                            else
                              {
                                t = l_18;
                                {
                                  ATerm u_18 = t;
                                  int v_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = k_55(b_55, c_55, e_55, a_55, t);
                                      LocalPopChoice(v_18);
                                    }
                                  else
                                    {
                                      t = u_18;
                                      t = l_55(b_55, c_55, e_55, a_55, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = b_55;
                  {
                    ATerm w_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_55(b_55, c_55, e_55, a_55, t);
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
                        {
                          ATerm y_18 = t;
                          int z_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_55(b_55, c_55, e_55, a_55, t);
                              LocalPopChoice(z_18);
                            }
                          else
                            {
                              t = y_18;
                              {
                                ATerm d_19 = t;
                                int f_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_55(b_55, c_55, e_55, a_55, t);
                                    LocalPopChoice(f_19);
                                  }
                                else
                                  {
                                    t = d_19;
                                    t = l_55(b_55, c_55, e_55, a_55, t);
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
              d_55 = ATgetArgument(t, 0);
              t = d_55;
              if(match_string(t, "<START>"))
                {
                  t = b_55;
                  {
                    ATerm g_19 = t;
                    int h_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_55(b_55, c_55, e_55, a_55, t);
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
                              t = j_55(b_55, c_55, e_55, a_55, t);
                              LocalPopChoice(j_19);
                            }
                          else
                            {
                              t = i_19;
                              {
                                ATerm k_19 = t;
                                int l_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_55(b_55, c_55, e_55, a_55, t);
                                    LocalPopChoice(l_19);
                                  }
                                else
                                  {
                                    t = k_19;
                                    {
                                      ATerm m_19 = t;
                                      int n_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = l_55(b_55, c_55, e_55, a_55, t);
                                          LocalPopChoice(n_19);
                                        }
                                      else
                                        {
                                          t = m_19;
                                          t = a_55;
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
                  t = b_55;
                  {
                    ATerm o_19 = t;
                    int p_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_55(b_55, c_55, e_55, a_55, t);
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
                              t = j_55(b_55, c_55, e_55, a_55, t);
                              LocalPopChoice(r_19);
                            }
                          else
                            {
                              t = q_19;
                              {
                                ATerm v_19 = t;
                                int a_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_55(b_55, c_55, e_55, a_55, t);
                                    LocalPopChoice(a_20);
                                  }
                                else
                                  {
                                    t = v_19;
                                    t = l_55(b_55, c_55, e_55, a_55, t);
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
              t = b_55;
              {
                ATerm b_20 = t;
                int c_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_55(b_55, c_55, e_55, a_55, t);
                    LocalPopChoice(c_20);
                  }
                else
                  {
                    t = b_20;
                    {
                      ATerm d_20 = t;
                      int e_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_55(b_55, c_55, e_55, a_55, t);
                          LocalPopChoice(e_20);
                        }
                      else
                        {
                          t = d_20;
                          {
                            ATerm f_20 = t;
                            int g_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_55(b_55, c_55, e_55, a_55, t);
                                LocalPopChoice(g_20);
                              }
                            else
                              {
                                t = f_20;
                                t = l_55(b_55, c_55, e_55, a_55, t);
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
      t = b_55;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_55(b_55, c_55, e_55, a_55, t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm k_20 = t;
              int l_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_55(b_55, c_55, e_55, a_55, t);
                  LocalPopChoice(l_20);
                }
              else
                {
                  t = k_20;
                  {
                    ATerm m_20 = t;
                    int r_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_55(b_55, c_55, e_55, a_55, t);
                        LocalPopChoice(r_20);
                      }
                    else
                      {
                        t = m_20;
                        t = l_55(b_55, c_55, e_55, a_55, t);
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
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      d_56 = ATgetArgument(t, 0);
      e_56 = ATgetArgument(t, 1);
      t = d_56;
      if(match_cons(t, sym_Ins_1))
        {
          b_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_56 = ATgetFirst((ATermList) t);
          z_55 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_55), a_56), b_56);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              a_56 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, a_56), b_56);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, b_56);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          d_56 = ATgetArgument(t, 0);
          e_56 = ATgetArgument(t, 1);
          f_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_56), (ATerm) ATinsert(ATempty, e_56)), d_56);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      y_56 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
      t = b_57;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_56;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = y_56;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  z_56 = ATgetArgument(t, 0);
                  a_57 = ATgetArgument(t, 1);
                  t = y_56;
                }
              else
                {
                  t = y_56;
                }
            }
        }
      else
        {
          t = y_56;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = b_57;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  z_56 = ATgetArgument(t, 0);
                  a_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, z_56, (ATerm) ATmakeAppl(sym_Conc_2, a_57, b_57));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          y_56 = ATgetArgument(t, 0);
          b_57 = ATgetArgument(t, 1);
          w_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_56;
      if(match_cons(t, sym_Conc_3))
        {
          z_56 = ATgetArgument(t, 0);
          a_57 = ATgetArgument(t, 1);
          v_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, z_56, a_57, (ATerm) ATmakeAppl(sym_Conc_3, v_56, b_57, w_56));
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_58 = NULL,c_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_58 = ATgetFirst((ATermList) t);
          c_58 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, b_58), c_58);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              b_58 = ATgetArgument(t, 0);
              c_58 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, b_58, (ATerm) ATmakeAppl(sym_Ins_1, c_58));
        }
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm y_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = y_20;
            t = Conc_2_0(n_1, _id, t);
          }
      }
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_58 = ATgetFirst((ATermList) t);
      j_58 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, i_58), j_58);
    }
  else
    {
      if(match_cons(t, sym_Snoc_2))
        {
          i_58 = ATgetArgument(t, 0);
          j_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_2, i_58, (ATerm) ATmakeAppl(sym_Ins_1, j_58));
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CTC2_0_0(t);
      t = Cons_2_0(conc_to_cons_0_0, _id, t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm t_58 = NULL;
        if(match_cons(t, sym_Ins_1))
          {
            t_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, t_58);
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_1_0(m_1, t);
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2_0(_id, conc_to_cons_0_0, t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
  }
  t = try_1_0(o_1, t);
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm a_60 = NULL,c_60 = NULL,e_60 = NULL,g_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      j_60 = ATgetArgument(t, 0);
      n_60 = ATgetArgument(t, 1);
      {
        ATerm g_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_60 = ATgetFirst((ATermList) t);
      m_60 = (ATerm) ATgetNext((ATermList) t);
      t = m_60;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_60;
          if(match_cons(t, sym_opt_1))
            {
              o_60 = ATgetArgument(t, 0);
              t = o_60;
              if((k_60 != t))
                {
                  _fail(t);
                }
              t = term_h_21;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  o_60 = ATgetArgument(t, 0);
                  t = k_60;
                  if(match_cons(t, sym_cf_1))
                    {
                      l_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_60;
                  if(match_cons(t, sym_opt_1))
                    {
                      p_60 = ATgetArgument(t, 0);
                      t = p_60;
                      if((l_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_h_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          p_60 = ATgetArgument(t, 0);
                          t = p_60;
                          if((l_60 != t))
                            {
                              _fail(t);
                            }
                          t = term_j_21;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              p_60 = ATgetArgument(t, 0);
                              {
                                ATerm k_21 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = p_60;
                          if((l_60 != t))
                            {
                              _fail(t);
                            }
                          t = term_j_21;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      o_60 = ATgetArgument(t, 0);
                      t = o_60;
                      if((k_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_j_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          o_60 = ATgetArgument(t, 0);
                          {
                            ATerm t_21 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = o_60;
                      if((k_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_j_21;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_21 = ATgetFirst((ATermList) t);
              a_60 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_60;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = n_60;
              {
                ATerm z_21 = t;
                int a_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm b_22 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_22);
                    t = term_d_22;
                  }
                else
                  {
                    t = z_21;
                    if(match_cons(t, sym_cf_1))
                      {
                        o_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = o_60;
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm e_22 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_d_22;
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_22 = ATgetFirst((ATermList) t);
                  c_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_60;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = n_60;
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
                        t = term_d_22;
                      }
                    else
                      {
                        t = k_22;
                        if(match_cons(t, sym_cf_1))
                          {
                            o_60 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = o_60;
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
                              t = term_d_22;
                            }
                          else
                            {
                              t = o_22;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm t_22 = ATgetArgument(t, 0);
                                  ATerm u_22 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = term_d_22;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm v_22 = ATgetFirst((ATermList) t);
                      e_60 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_60;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm w_22 = ATgetFirst((ATermList) t);
                      g_60 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_60;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_60;
                  if(match_cons(t, sym_cf_1))
                    {
                      o_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_60;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm x_22 = ATgetArgument(t, 0);
                      ATerm y_22 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_d_22;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_60;
      {
        ATerm a_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm g_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(c_23);
            t = term_k_23;
          }
        else
          {
            t = a_23;
            if(match_cons(t, sym_cf_1))
              {
                o_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_60;
            if(match_cons(t, sym_opt_1))
              {
                ATerm n_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_k_23;
          }
      }
    }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      e_61 = ATgetArgument(t, 0);
      f_61 = ATgetArgument(t, 1);
      {
        ATerm o_23 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_61;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_61;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm r_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_23);
        t = term_s_23;
      }
    else
      {
        t = p_23;
        {
          ATerm t_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm w_23 = ATgetArgument(t, 0);
                  ATerm y_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(v_23);
              t = term_s_23;
            }
          else
            {
              t = t_23;
              if(match_cons(t, sym_cf_1))
                {
                  g_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_61;
              {
                ATerm b_24 = t;
                int c_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm d_24 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_24);
                    t = term_s_23;
                  }
                else
                  {
                    t = b_24;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm e_24 = ATgetArgument(t, 0);
                        ATerm f_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_s_23;
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
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,e_62 = NULL,f_62 = NULL,d_16 = NULL;
  r_61 = t;
  if(match_cons(t, sym_appl_2))
    {
      o_61 = ATgetArgument(t, 0);
      p_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_61);
  n_61 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, o_61, p_61);
  d_16 = t;
  t = SSLsetAnnotations(d_16, n_61);
  q_61 = t;
  if(match_cons(t, sym_appl_2))
    {
      e_62 = ATgetArgument(t, 0);
      f_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_62;
        t = ConstrNil_0_0(t);
        t = (ATerm) ATempty;
        LocalPopChoice(i_24);
      }
    else
      {
        t = g_24;
        {
          ATerm c_40 = NULL;
          t = e_62;
          {
            ATerm j_24 = t;
            int k_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_40 = NULL,k_40 = NULL;
                if(match_cons(t, sym_prod_3))
                  {
                    ATerm l_24 = ATgetArgument(t, 0);
                    ATerm m_24 = ATgetArgument(t, 1);
                    i_40 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = i_40;
                {
                  static ATerm u_1 (ATerm t);
                  static ATerm u_1 (ATerm t)
                  {
                    if(match_cons(t, sym_cons_1))
                      {
                        if(((k_40 != NULL) && (k_40 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          k_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1_0(u_1, t);
                }
                t = not_null(k_40);
                LocalPopChoice(k_24);
              }
            else
              {
                t = j_24;
                t = Constr1_0_0(t);
              }
          }
          c_40 = t;
          t = SSL_mkterm(c_40, f_62);
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
static ATerm l_67 (ATerm e_64, ATerm t)
{
  static ATerm n_67 (ATerm t);
  static ATerm n_67 (ATerm t)
  {
    ATerm f_64 = NULL,g_64 = NULL,i_64 = NULL,k_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
    f_64 = t;
    if(match_cons(t, sym_appl_2))
      {
        g_64 = ATgetArgument(t, 0);
        o_64 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_64;
    if(match_cons(t, sym_prod_3))
      {
        ATerm o_24 = ATgetArgument(t, 0);
        i_64 = ATgetArgument(t, 1);
        {
          ATerm p_24 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = i_64;
    if(match_cons(t, sym_cf_1))
      {
        k_64 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = k_64;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm q_24 = ATgetArgument(t, 0);
        ATerm r_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_64;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_64 = ATgetFirst((ATermList) t);
        q_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = q_64;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, p_64);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_64 = ATgetFirst((ATermList) t);
            s_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_64;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_64 = ATgetFirst((ATermList) t);
            u_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_64;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm e_65 = NULL,f_65 = NULL;
            t = p_64;
            t = n_67(t);
            e_65 = t;
            t = t_64;
            t = n_67(t);
            f_65 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_65), (ATerm) ATinsert(ATempty, r_64)), e_65);
            t = concat_0_0(t);
          }
        else
          {
            ATerm m_65 = NULL,n_65 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_64 = ATgetFirst((ATermList) t);
                w_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_64;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_64 = ATgetFirst((ATermList) t);
                y_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_64;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_64;
            t = n_67(t);
            m_65 = t;
            t = x_64;
            t = n_67(t);
            n_65 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_65), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_64), t_64), r_64)), m_65);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = e_64;
  t = n_67(t);
  return(t);
}
static ATerm m_67 (ATerm o_65, ATerm t)
{
  static ATerm o_67 (ATerm t);
  static ATerm o_67 (ATerm t)
  {
    ATerm p_65 = NULL,r_65 = NULL,t_65 = NULL,u_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,d_66 = NULL,e_66 = NULL;
    p_65 = t;
    if(match_cons(t, sym_appl_2))
      {
        r_65 = ATgetArgument(t, 0);
        x_65 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_65;
    if(match_cons(t, sym_prod_3))
      {
        ATerm s_24 = ATgetArgument(t, 0);
        t_65 = ATgetArgument(t, 1);
        {
          ATerm t_24 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = t_65;
    if(match_cons(t, sym_cf_1))
      {
        u_65 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = u_65;
    if(match_cons(t, sym_iter_1))
      {
        ATerm u_24 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = x_65;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_65 = ATgetFirst((ATermList) t);
        z_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = z_65;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, y_65);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_66 = ATgetFirst((ATermList) t);
            b_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_66;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm j_66 = NULL,k_66 = NULL;
            t = y_65;
            t = o_67(t);
            j_66 = t;
            t = a_66;
            t = o_67(t);
            k_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, k_66), j_66);
            t = concat_0_0(t);
          }
        else
          {
            ATerm p_66 = NULL,q_66 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_66 = ATgetFirst((ATermList) t);
                e_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_66;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_65;
            t = o_67(t);
            p_66 = t;
            t = d_66;
            t = o_67(t);
            q_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_66), (ATerm) ATinsert(ATempty, a_66)), p_66);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = o_65;
  t = o_67(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL;
  t_66 = t;
  if(match_cons(t, sym_appl_2))
    {
      u_66 = ATgetArgument(t, 0);
      e_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_66;
  if(match_cons(t, sym_prod_3))
    {
      v_66 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
      {
        ATerm v_24 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_67;
  if(match_cons(t, sym_cf_1))
    {
      b_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_67;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm y_24 = ATgetArgument(t, 0);
            ATerm z_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_24);
        t = e_67;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_67 = ATgetFirst((ATermList) t);
            g_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_67;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_66;
            {
              ATerm a_25 = t;
              int b_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_67(t_66, t);
                  LocalPopChoice(b_25);
                }
              else
                {
                  t = a_25;
                  t = (ATerm) ATinsert(ATempty, f_67);
                }
            }
          }
        else
          {
            t = v_66;
            t = l_67(t_66, t);
          }
      }
    else
      {
        t = w_24;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm e_25 = ATgetArgument(t, 0);
                  ATerm f_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(d_25);
              t = v_66;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_67;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_66 = ATgetFirst((ATermList) t);
                      z_66 = (ATerm) ATgetNext((ATermList) t);
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
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm g_25 = ATgetArgument(t, 0);
                      ATerm i_25 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_66;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_67;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_67 = ATgetFirst((ATermList) t);
                      g_67 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_67;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_67;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = c_25;
              {
                ATerm j_25 = t;
                int k_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm l_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_25);
                    t = e_67;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        f_67 = ATgetFirst((ATermList) t);
                        g_67 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = g_67;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = v_66;
                        {
                          ATerm m_25 = t;
                          int n_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = m_67(t_66, t);
                              LocalPopChoice(n_25);
                            }
                          else
                            {
                              t = m_25;
                              t = (ATerm) ATinsert(ATempty, f_67);
                            }
                        }
                      }
                    else
                      {
                        t = v_66;
                        t = m_67(t_66, t);
                      }
                  }
                else
                  {
                    t = j_25;
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm o_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_66;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = e_67;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            w_66 = ATgetFirst((ATermList) t);
                            z_66 = (ATerm) ATgetNext((ATermList) t);
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
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm f_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = z_66;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = e_67;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            f_67 = ATgetFirst((ATermList) t);
                            g_67 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = g_67;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = f_67;
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
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_67 = ATgetFirst((ATermList) t);
      z_67 = (ATerm) ATgetNext((ATermList) t);
      t = z_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_67 = ATgetFirst((ATermList) t);
          x_67 = (ATerm) ATgetNext((ATermList) t);
          t = w_67;
          if(match_int(t, 34))
            {
              t = y_67;
              if(match_int(t, 92))
                {
                  ATerm g_26 = t;
                  int h_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_68 = NULL;
                      t = x_67;
                      t = De_Escape_0_0(t);
                      c_68 = t;
                      t = (ATerm) ATinsert(CheckATermList(c_68), term_i_26);
                      LocalPopChoice(h_26);
                    }
                  else
                    {
                      t = g_26;
                      {
                        ATerm f_68 = NULL;
                        t = z_67;
                        t = De_Escape_0_0(t);
                        f_68 = t;
                        t = (ATerm) ATinsert(CheckATermList(f_68), y_67);
                      }
                    }
                }
              else
                {
                  ATerm i_68 = NULL;
                  t = z_67;
                  t = De_Escape_0_0(t);
                  i_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_68), y_67);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = y_67;
                  if(match_int(t, 92))
                    {
                      ATerm p_26 = t;
                      int q_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_68 = NULL;
                          t = x_67;
                          t = De_Escape_0_0(t);
                          k_68 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_68), term_s_26);
                          LocalPopChoice(q_26);
                        }
                      else
                        {
                          t = p_26;
                          {
                            ATerm n_68 = NULL;
                            t = z_67;
                            t = De_Escape_0_0(t);
                            n_68 = t;
                            t = (ATerm) ATinsert(CheckATermList(n_68), y_67);
                          }
                        }
                    }
                  else
                    {
                      ATerm q_68 = NULL;
                      t = z_67;
                      t = De_Escape_0_0(t);
                      q_68 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_68), y_67);
                    }
                }
              else
                {
                  ATerm t_68 = NULL;
                  t = z_67;
                  t = De_Escape_0_0(t);
                  t_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_68), y_67);
                }
            }
        }
      else
        {
          ATerm w_68 = NULL;
          t = z_67;
          t = De_Escape_0_0(t);
          w_68 = t;
          t = (ATerm) ATinsert(CheckATermList(w_68), y_67);
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
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_69 = ATgetFirst((ATermList) t);
      h_69 = (ATerm) ATgetNext((ATermList) t);
      t = h_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_69 = ATgetFirst((ATermList) t);
          f_69 = (ATerm) ATgetNext((ATermList) t);
          t = e_69;
          if(match_int(t, 34))
            {
              t = g_69;
              if(match_int(t, 92))
                {
                  ATerm t_26 = t;
                  int u_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_69 = NULL;
                      t = f_69;
                      t = De_Escape_0_0(t);
                      k_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_69), term_i_26);
                      LocalPopChoice(u_26);
                    }
                  else
                    {
                      t = t_26;
                      {
                        ATerm n_69 = NULL;
                        t = h_69;
                        t = De_Escape_0_0(t);
                        n_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_69), g_69);
                      }
                    }
                }
              else
                {
                  ATerm q_69 = NULL;
                  t = h_69;
                  t = De_Escape_0_0(t);
                  q_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_69), g_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = g_69;
                  if(match_int(t, 92))
                    {
                      ATerm b_27 = t;
                      int c_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_69 = NULL;
                          t = f_69;
                          t = De_Escape_0_0(t);
                          s_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(s_69), term_s_26);
                          LocalPopChoice(c_27);
                        }
                      else
                        {
                          t = b_27;
                          {
                            ATerm v_69 = NULL;
                            t = h_69;
                            t = De_Escape_0_0(t);
                            v_69 = t;
                            t = (ATerm) ATinsert(CheckATermList(v_69), g_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm y_69 = NULL;
                      t = h_69;
                      t = De_Escape_0_0(t);
                      y_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_69), g_69);
                    }
                }
              else
                {
                  ATerm b_70 = NULL;
                  t = h_69;
                  t = De_Escape_0_0(t);
                  b_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_70), g_69);
                }
            }
        }
      else
        {
          ATerm e_70 = NULL;
          t = h_69;
          t = De_Escape_0_0(t);
          e_70 = t;
          t = (ATerm) ATinsert(CheckATermList(e_70), g_69);
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
      ATerm f_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(f_27) != AT_INT) || (ATgetInt((ATermInt) f_27) != 34)))
        _fail(t);
      {
        ATerm g_27 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
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
  ATerm f_70 = NULL;
  t = explode_string_0_0(t);
  f_70 = t;
  t = Hd_0_0(t);
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = f_70;
  t = Tl_0_0(t);
  t = at_last_1_0(v_1, t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_27);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_27);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_27);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
  k_70 = t;
  if(match_cons(t, sym_cf_1))
    {
      i_70 = ATgetArgument(t, 0);
      {
        ATerm m_70 = NULL;
        t = i_70;
        t = PpSym_0_0(t);
        m_70 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_27)), m_70), (ATerm) ATinsert(ATempty, term_t_27));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          i_70 = ATgetArgument(t, 0);
          {
            ATerm o_70 = NULL;
            t = i_70;
            t = PpSym_0_0(t);
            o_70 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_27)), o_70), (ATerm) ATinsert(ATempty, term_t_27));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_y_27);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  i_70 = ATgetArgument(t, 0);
                  j_70 = ATgetArgument(t, 1);
                  {
                    ATerm r_70 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(j_70), i_70);
                    t = map_1_0(PpSym_0_0, t);
                    r_70 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_28)), r_70), (ATerm) ATinsert(ATempty, term_s_28));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      i_70 = ATgetArgument(t, 0);
                      t = i_70;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(w_1, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          i_70 = ATgetArgument(t, 0);
                          t = i_70;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(x_1, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              i_70 = ATgetArgument(t, 0);
                              t = i_70;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(y_1, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  i_70 = ATgetArgument(t, 0);
                                  j_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_70 = NULL,y_70 = NULL;
                                    t = i_70;
                                    t = PpSym_0_0(t);
                                    x_70 = t;
                                    t = j_70;
                                    t = PpSym_0_0(t);
                                    y_70 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_28)), y_70), x_70), (ATerm) ATinsert(ATempty, term_w_28));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      i_70 = ATgetArgument(t, 0);
                                      j_70 = ATgetArgument(t, 1);
                                      {
                                        ATerm b_71 = NULL,c_71 = NULL;
                                        t = i_70;
                                        t = PpSym_0_0(t);
                                        b_71 = t;
                                        t = j_70;
                                        t = PpSym_0_0(t);
                                        c_71 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_28)), c_71), b_71), (ATerm) ATinsert(ATempty, term_w_28));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm c_29 = t;
                                      int i_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              i_70 = ATgetArgument(t, 0);
                                              {
                                                ATerm l_29 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(i_29);
                                          {
                                            ATerm e_71 = NULL;
                                            t = i_70;
                                            t = PpSym_0_0(t);
                                            e_71 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_29)), e_71);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = c_29;
                                          {
                                            ATerm p_29 = t;
                                            int q_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    i_70 = ATgetArgument(t, 0);
                                                    j_70 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(q_29);
                                                {
                                                  ATerm i_71 = NULL,j_71 = NULL;
                                                  t = i_70;
                                                  t = PpSym_0_0(t);
                                                  i_71 = t;
                                                  t = j_70;
                                                  t = PpSym_0_0(t);
                                                  j_71 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_29)), j_71), i_71);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = p_29;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    i_70 = ATgetArgument(t, 0);
                                                    j_70 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm m_71 = NULL,n_71 = NULL;
                                                      t = i_70;
                                                      t = PpSym_0_0(t);
                                                      m_71 = t;
                                                      t = j_70;
                                                      t = PpSym_0_0(t);
                                                      n_71 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_71), (ATerm) ATinsert(ATempty, term_s_29)), m_71);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        i_70 = ATgetArgument(t, 0);
                                                        j_70 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_71 = NULL,r_71 = NULL;
                                                          t = i_70;
                                                          t = filter_1_0(PpSym_0_0, t);
                                                          t = concat_0_0(t);
                                                          q_71 = t;
                                                          t = j_70;
                                                          t = PpSym_0_0(t);
                                                          r_71 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_71), (ATerm) ATinsert(ATempty, term_t_29)), q_71);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            i_70 = ATgetArgument(t, 0);
                                                            j_70 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_71 = NULL,v_71 = NULL;
                                                              t = i_70;
                                                              t = PpSym_0_0(t);
                                                              u_71 = t;
                                                              t = j_70;
                                                              t = PpSym_0_0(t);
                                                              v_71 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_71), (ATerm) ATinsert(ATempty, term_u_29)), u_71);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                i_70 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, i_70);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    i_70 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm y_71 = NULL;
                                                                      t = i_70;
                                                                      t = try_1_0(z_1, t);
                                                                      y_71 = t;
                                                                      t = (ATerm) ATinsert(ATempty, y_71);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm v_29 = t;
                                                                    int w_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            i_70 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm x_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(w_29);
                                                                        {
                                                                          ATerm a_72 = NULL;
                                                                          t = i_70;
                                                                          t = try_1_0(a_2, t);
                                                                          a_72 = t;
                                                                          t = (ATerm) ATinsert(ATempty, a_72);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_29;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_y_29);
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm q_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
  t = m_72;
  if(match_cons(t, sym_cf_1))
    {
      t_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_72;
  {
    ATerm a_30 = t;
    if((PushChoice() == 0))
      {
        ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,f_16 = NULL;
        w_72 = t;
        if(match_cons(t, sym_sort_1))
          {
            v_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_72);
        u_72 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, v_72);
        f_16 = t;
        t = SSLsetAnnotations(f_16, u_72);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_30;
      }
  }
  t = PpSym_0_0(t);
  s_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_30)), s_72), (ATerm) ATinsert(ATempty, term_b_30));
  t = concat_0_0(t);
  t = concat_strings_0_0(t);
  r_72 = t;
  t = SSL_mkterm(r_72, n_72);
  return(t);
}
static ATerm r_73 (ATerm x_72, ATerm y_72, ATerm z_72, ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_16 = NULL;
  t = x_72;
  if(match_cons(t, sym_cf_1))
    {
      d_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_73;
  if(match_cons(t, sym_sort_1))
    {
      f_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_73);
  e_73 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, f_73);
  g_16 = t;
  t = SSLsetAnnotations(g_16, e_73);
  t = PpSym_0_0(t);
  t = concat_strings_0_0(t);
  c_73 = t;
  t = SSL_mkterm(c_73, y_72);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,j_73 = NULL,k_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL;
  g_73 = t;
  if(match_cons(t, sym_appl_2))
    {
      h_73 = ATgetArgument(t, 0);
      m_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_73;
  if(match_cons(t, sym_prod_3))
    {
      ATerm c_30 = ATgetArgument(t, 0);
      j_73 = ATgetArgument(t, 1);
      {
        ATerm d_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = m_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_73 = ATgetFirst((ATermList) t);
      o_73 = (ATerm) ATgetNext((ATermList) t);
      t = o_73;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_73;
          if(match_cons(t, sym_sort_1))
            {
              k_73 = ATgetArgument(t, 0);
              t = k_73;
              if(match_string(t, "<START>"))
                {
                  ATerm e_30 = t;
                  int f_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_73(j_73, m_73, g_73, t);
                      LocalPopChoice(f_30);
                    }
                  else
                    {
                      t = e_30;
                      {
                        ATerm g_30 = t;
                        int h_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = r_73(j_73, m_73, g_73, t);
                            LocalPopChoice(h_30);
                          }
                        else
                          {
                            t = g_30;
                            t = n_73;
                          }
                      }
                    }
                }
              else
                {
                  ATerm i_30 = t;
                  int j_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_73(j_73, m_73, g_73, t);
                      LocalPopChoice(j_30);
                    }
                  else
                    {
                      t = i_30;
                      t = r_73(j_73, m_73, g_73, t);
                    }
                }
            }
          else
            {
              ATerm k_30 = t;
              int l_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_73(j_73, m_73, g_73, t);
                  LocalPopChoice(l_30);
                }
              else
                {
                  t = k_30;
                  t = r_73(j_73, m_73, g_73, t);
                }
            }
        }
      else
        {
          t = j_73;
          {
            ATerm m_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = q_73(j_73, m_73, g_73, t);
                LocalPopChoice(o_30);
              }
            else
              {
                t = m_30;
                t = r_73(j_73, m_73, g_73, t);
              }
          }
        }
    }
  else
    {
      t = j_73;
      {
        ATerm p_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_73(j_73, m_73, g_73, t);
            LocalPopChoice(r_30);
          }
        else
          {
            t = p_30;
            t = r_73(j_73, m_73, g_73, t);
          }
      }
    }
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm a_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      a_74 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_74;
  if(match_cons(t, sym_prod_3))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      c_74 = ATgetArgument(t, 1);
      {
        ATerm t_30 = ATgetArgument(t, 2);
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
          t = term_u_30;
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
  static ATerm d_75 (ATerm t);
  static ATerm d_75 (ATerm t)
  {
    ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
    a_75 = t;
    if(match_cons(t, sym_appl_2))
      {
        y_74 = ATgetArgument(t, 0);
        z_74 = ATgetArgument(t, 1);
        {
          ATerm v_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_40 = NULL,s_40 = NULL,v_40 = NULL,j_16 = NULL;
              t = SSLgetAnnotations(a_75);
              s_40 = t;
              t = z_74;
              t = map_1_0(d_75, t);
              v_40 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, y_74, v_40);
              j_16 = t;
              t = SSLsetAnnotations(j_16, s_40);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm x_30 = ATgetArgument(t, 0);
                  r_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_40;
              t = concat_0_0(t);
              LocalPopChoice(w_30);
            }
          else
            {
              t = v_30;
              t = (ATerm) ATinsert(ATempty, a_75);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, a_75);
      }
    return(t);
  }
  t = d_75(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm v_75 = NULL,x_75 = NULL,y_75 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL;
  b_76 = t;
  if(match_cons(t, sym_appl_2))
    {
      c_76 = ATgetArgument(t, 0);
      {
        ATerm y_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_76;
  if(match_cons(t, sym_prod_3))
    {
      d_76 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
      {
        ATerm z_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_76;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm c_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_31);
        t = d_76;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_75 = ATgetFirst((ATermList) t);
            x_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_75;
        if(match_cons(t, sym_lex_1))
          {
            ATerm d_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_76;
        t = yield_0_0(t);
      }
    else
      {
        t = a_31;
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm g_31 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(f_31);
              t = b_76;
              t = yield_0_0(t);
            }
          else
            {
              t = e_31;
              {
                ATerm h_31 = t;
                int k_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm l_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_31);
                    {
                      ATerm i_76 = NULL;
                      t = b_76;
                      t = yield_0_0(t);
                      i_76 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, i_76);
                    }
                  }
                else
                  {
                    t = h_31;
                    if(match_cons(t, sym_varsym_1))
                      {
                        f_76 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = f_76;
                    if(match_cons(t, sym_cf_1))
                      {
                        y_75 = ATgetArgument(t, 0);
                        t = y_75;
                        {
                          ATerm m_31 = t;
                          int n_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm o_31 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_31);
                              t = d_76;
                              {
                                ATerm p_31 = t;
                                int r_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_76 = NULL;
                                    t = b_76;
                                    t = yield_0_0(t);
                                    j_76 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, j_76);
                                    LocalPopChoice(r_31);
                                  }
                                else
                                  {
                                    t = p_31;
                                    {
                                      ATerm k_76 = NULL;
                                      t = b_76;
                                      t = yield_0_0(t);
                                      k_76 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, k_76);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = m_31;
                              {
                                ATerm u_31 = t;
                                int a_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm b_32 = ATgetArgument(t, 0);
                                        ATerm e_32 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(a_32);
                                    t = d_76;
                                    {
                                      ATerm f_32 = t;
                                      int g_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_76 = NULL;
                                          t = b_76;
                                          t = yield_0_0(t);
                                          l_76 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, l_76);
                                          LocalPopChoice(g_32);
                                        }
                                      else
                                        {
                                          t = f_32;
                                          {
                                            ATerm m_76 = NULL;
                                            t = b_76;
                                            t = yield_0_0(t);
                                            m_76 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, m_76);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = u_31;
                                    {
                                      ATerm h_32 = t;
                                      int i_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm j_32 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(i_32);
                                          t = d_76;
                                          {
                                            ATerm l_32 = t;
                                            int m_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm n_76 = NULL;
                                                t = b_76;
                                                t = yield_0_0(t);
                                                n_76 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, n_76);
                                                LocalPopChoice(m_32);
                                              }
                                            else
                                              {
                                                t = l_32;
                                                {
                                                  ATerm o_76 = NULL;
                                                  t = b_76;
                                                  t = yield_0_0(t);
                                                  o_76 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, o_76);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = h_32;
                                          {
                                            ATerm n_32 = t;
                                            int o_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm p_32 = ATgetArgument(t, 0);
                                                    ATerm q_32 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(o_32);
                                                t = d_76;
                                                {
                                                  ATerm s_32 = t;
                                                  int u_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_76 = NULL;
                                                      t = b_76;
                                                      t = yield_0_0(t);
                                                      p_76 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, p_76);
                                                      LocalPopChoice(u_32);
                                                    }
                                                  else
                                                    {
                                                      t = s_32;
                                                      {
                                                        ATerm q_76 = NULL;
                                                        t = b_76;
                                                        t = yield_0_0(t);
                                                        q_76 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, q_76);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = n_32;
                                                {
                                                  ATerm r_76 = NULL;
                                                  t = b_76;
                                                  t = yield_0_0(t);
                                                  r_76 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, r_76);
                                                }
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
                        ATerm s_76 = NULL;
                        t = b_76;
                        t = yield_0_0(t);
                        s_76 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, s_76);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm d_77 = NULL;
  d_77 = t;
  t = term_v_32;
  t = get_config_0_0(t);
  t = d_77;
  t = downup2_2_0(n_2, x_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = try_1_0(implode_lexical_0_0, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = try_1_0(flat_layout_0_0, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm i_77 = NULL;
  i_77 = t;
  t = term_w_32;
  t = get_config_0_0(t);
  t = i_77;
  t = topdown_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = try_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,p_17 = NULL,w_16 = NULL;
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
  t = filter_1_0(b_3, t);
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, r_77, p_77, q_77);
  w_16 = t;
  t = SSLsetAnnotations(w_16, n_77);
  s_77 = t;
  t = l_77;
  t = filter_1_0(f_3, t);
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, s_77, m_77);
  p_17 = t;
  t = SSLsetAnnotations(p_17, j_77);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm x_32 = t;
  if((PushChoice() == 0))
    {
      ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
      a_79 = t;
      if(match_cons(t, sym_appl_2))
        {
          b_79 = ATgetArgument(t, 0);
          z_78 = ATgetArgument(t, 1);
          {
            ATerm j_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,t_41 = NULL,u_41 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,u_43 = NULL,v_43 = NULL,o_16 = NULL,n_16 = NULL,m_16 = NULL,l_16 = NULL;
            t = SSLgetAnnotations(a_79);
            j_41 = t;
            t = b_79;
            if(match_cons(t, sym_prod_3))
              {
                o_41 = ATgetArgument(t, 0);
                p_41 = ATgetArgument(t, 1);
                q_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_79);
            n_41 = t;
            t = p_41;
            if(match_cons(t, sym_cf_1))
              {
                p_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_41);
            u_41 = t;
            t = p_43;
            if(match_cons(t, sym_opt_1))
              {
                u_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_43);
            r_43 = t;
            t = u_43;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, u_43);
            l_16 = t;
            t = SSLsetAnnotations(l_16, r_43);
            v_43 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, v_43);
            m_16 = t;
            t = SSLsetAnnotations(m_16, u_41);
            q_43 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, o_41, q_43, q_41);
            n_16 = t;
            t = SSLsetAnnotations(n_16, n_41);
            t_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, t_41, z_78);
            o_16 = t;
            t = SSLsetAnnotations(o_16, j_41);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              b_79 = ATgetArgument(t, 0);
              {
                ATerm l_44 = NULL,n_44 = NULL,s_44 = NULL,t_44 = NULL,q_16 = NULL,p_16 = NULL;
                t = SSLgetAnnotations(a_79);
                l_44 = t;
                t = b_79;
                if(match_cons(t, sym_opt_1))
                  {
                    s_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_79);
                n_44 = t;
                t = s_44;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, s_44);
                p_16 = t;
                t = SSLsetAnnotations(p_16, n_44);
                t_44 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, t_44);
                q_16 = t;
                t = SSLsetAnnotations(q_16, l_44);
              }
            }
          else
            {
              ATerm f_45 = NULL,u_16 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  b_79 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_79);
              f_45 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, b_79);
              u_16 = t;
              t = SSLsetAnnotations(u_16, f_45);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_32;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm y_32 = t;
  if((PushChoice() == 0))
    {
      ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
      i_80 = t;
      if(match_cons(t, sym_appl_2))
        {
          j_80 = ATgetArgument(t, 0);
          h_80 = ATgetArgument(t, 1);
          {
            ATerm r_45 = NULL,y_45 = NULL,z_45 = NULL,c_46 = NULL,h_46 = NULL,i_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,h_17 = NULL,f_17 = NULL,e_17 = NULL,x_16 = NULL;
            t = SSLgetAnnotations(i_80);
            r_45 = t;
            t = j_80;
            if(match_cons(t, sym_prod_3))
              {
                z_45 = ATgetArgument(t, 0);
                c_46 = ATgetArgument(t, 1);
                h_46 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_80);
            y_45 = t;
            t = c_46;
            if(match_cons(t, sym_cf_1))
              {
                m_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_46);
            l_46 = t;
            t = m_46;
            if(match_cons(t, sym_opt_1))
              {
                q_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_46);
            p_46 = t;
            t = q_46;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, q_46);
            x_16 = t;
            t = SSLsetAnnotations(x_16, p_46);
            r_46 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, r_46);
            e_17 = t;
            t = SSLsetAnnotations(e_17, l_46);
            n_46 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, z_45, n_46, h_46);
            f_17 = t;
            t = SSLsetAnnotations(f_17, y_45);
            i_46 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, i_46, h_80);
            h_17 = t;
            t = SSLsetAnnotations(h_17, r_45);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              j_80 = ATgetArgument(t, 0);
              {
                ATerm y_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,n_17 = NULL,i_17 = NULL;
                t = SSLgetAnnotations(i_80);
                y_46 = t;
                t = j_80;
                if(match_cons(t, sym_opt_1))
                  {
                    b_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_80);
                a_47 = t;
                t = b_47;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, b_47);
                i_17 = t;
                t = SSLsetAnnotations(i_17, a_47);
                c_47 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, c_47);
                n_17 = t;
                t = SSLsetAnnotations(n_17, y_46);
              }
            }
          else
            {
              ATerm i_47 = NULL,o_17 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  j_80 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_80);
              i_47 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, j_80);
              o_17 = t;
              t = SSLsetAnnotations(o_17, i_47);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_32;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_80 = NULL;
  k_80 = t;
  t = term_a_33;
  t = get_config_0_0(t);
  t = k_80;
  t = topdown_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = repeat_1_0(ApplToSort_0_0, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm l_80 = NULL;
  l_80 = t;
  t = term_b_33;
  t = get_config_0_0(t);
  t = l_80;
  t = topdown_1_0(b_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = try_1_0(FlatList_0_0, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm m_80 = NULL;
  m_80 = t;
  t = term_d_33;
  t = get_config_0_0(t);
  t = m_80;
  t = topdown_1_0(d_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = try_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = is_list_0_0(t);
  t = filter_1_0(f_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm e_33 = t;
  if((PushChoice() == 0))
    {
      ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,q_17 = NULL;
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
      q_17 = t;
      t = SSLsetAnnotations(q_17, n_80);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_33;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm q_80 = NULL;
  q_80 = t;
  t = term_f_33;
  t = get_config_0_0(t);
  t = q_80;
  t = replace_appl_0_0(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm r_80 = NULL;
  r_80 = t;
  t = term_g_33;
  t = get_config_0_0(t);
  t = r_80;
  t = bottomup_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = try_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      s_80 = ATgetArgument(t, 0);
      {
        ATerm i_33 = ATgetArgument(t, 1);
        if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
          {
            t_80 = ATgetFirst((ATermList) i_33);
            {
              ATerm j_33 = (ATerm) ATgetNext((ATermList) i_33);
              if(((ATgetType(j_33) != AT_LIST) || !(ATisEmpty(j_33))))
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
static ATerm k_4 (ATerm t)
{
  ATerm u_80 = NULL;
  u_80 = t;
  t = term_k_33;
  t = get_config_0_0(t);
  t = u_80;
  t = topdown_1_0(l_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = try_1_0(FlatAlt_0_0, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_80 = NULL;
  v_80 = t;
  t = term_l_33;
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
  t = term_n_33;
  t = get_config_0_0(t);
  t = w_80;
  if(match_cons(t, sym_parsetree_2))
    {
      x_80 = ATgetArgument(t, 0);
      {
        ATerm o_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_80;
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm c_77 = NULL;
  static ATerm p_4 (ATerm t);
  static ATerm p_4 (ATerm t)
  {
    if(((c_77 != NULL) && (c_77 != t)))
      _fail(t);
    else
      c_77 = t;
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_33;
          t = get_config_0_0(t);
          t = c_77;
          LocalPopChoice(q_33);
          t = implodeAsfix_1_0(_id, t);
        }
      else
        {
          t = p_33;
          t = implodeAsfix_1_0(_fail, t);
        }
    }
    return(t);
  }
  if(((c_77 != NULL) && (c_77 != t)))
    _fail(t);
  else
    c_77 = t;
  t = try_1_0(e_2, t);
  t = try_1_0(y_2, t);
  t = try_1_0(q_3, t);
  t = try_1_0(a_4, t);
  t = try_1_0(c_4, t);
  t = try_1_0(g_4, t);
  t = try_1_0(h_4, t);
  t = try_1_0(k_4, t);
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
  t = (ATerm) ATmakeAppl(sym__2, term_v_32, f_81);
  t = set_config_0_0(t);
  t = f_81;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_s_33;
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
  t = (ATerm) ATmakeAppl(sym__2, term_w_32, g_81);
  t = set_config_0_0(t);
  t = g_81;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_t_33;
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
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, h_81);
  t = set_config_0_0(t);
  t = h_81;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_u_33;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm i_81 = NULL;
  i_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_33, i_81);
  t = set_config_0_0(t);
  t = i_81;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_w_33;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_81 = NULL;
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_33, j_81);
  t = set_config_0_0(t);
  t = j_81;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_x_33;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm k_81 = NULL;
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_33, k_81);
  t = set_config_0_0(t);
  t = k_81;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_y_33;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm l_81 = NULL;
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, l_81);
  t = set_config_0_0(t);
  t = l_81;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm m_81 = NULL;
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, m_81);
  t = set_config_0_0(t);
  t = m_81;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm n_81 = NULL;
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_33, n_81);
  t = set_config_0_0(t);
  t = n_81;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm o_81 = NULL;
  o_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_33, o_81);
  t = set_config_0_0(t);
  t = o_81;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--concrete", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm p_81 = NULL;
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_33, p_81);
  t = set_config_0_0(t);
  t = p_81;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, s_4, t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(t_4, v_4, w_4, t);
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            {
              ATerm i_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_4, y_4, z_4, t);
                  LocalPopChoice(j_34);
                }
              else
                {
                  t = i_34;
                  {
                    ATerm k_34 = t;
                    int l_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_5, b_5, d_5, t);
                        LocalPopChoice(l_34);
                      }
                    else
                      {
                        t = k_34;
                        {
                          ATerm m_34 = t;
                          int n_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(e_5, g_5, j_5, t);
                              LocalPopChoice(n_34);
                            }
                          else
                            {
                              t = m_34;
                              {
                                ATerm o_34 = t;
                                int p_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(k_5, n_5, o_5, t);
                                    LocalPopChoice(p_34);
                                  }
                                else
                                  {
                                    t = o_34;
                                    {
                                      ATerm q_34 = t;
                                      int r_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(p_5, q_5, s_5, t);
                                          LocalPopChoice(r_34);
                                        }
                                      else
                                        {
                                          t = q_34;
                                          {
                                            ATerm s_34 = t;
                                            int t_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(t_5, u_5, v_5, t);
                                                LocalPopChoice(t_34);
                                              }
                                            else
                                              {
                                                t = s_34;
                                                {
                                                  ATerm u_34 = t;
                                                  int v_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(z_5, a_6, b_6, t);
                                                      LocalPopChoice(v_34);
                                                    }
                                                  else
                                                    {
                                                      t = u_34;
                                                      {
                                                        ATerm w_34 = t;
                                                        int x_34 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(c_6, d_6, e_6, t);
                                                            LocalPopChoice(x_34);
                                                          }
                                                        else
                                                          {
                                                            t = w_34;
                                                            t = Option_3_0(f_6, h_6, i_6, t);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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

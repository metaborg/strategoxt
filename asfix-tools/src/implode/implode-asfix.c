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
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_y_30;
ATerm term_b_30;
ATerm term_z_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_y_27;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_t_23;
ATerm term_l_23;
ATerm term_h_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_u_13;
ATerm term_h_13;
ATerm term_o_10;
ATerm term_p_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
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
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
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
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm annotation_2_0 (ATerm i_23 (ATerm), ATerm j_23 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm v_86 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm c_17 (ATerm), ATerm d_17 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm skip_concrete_1_0 (ATerm k_23 (ATerm), ATerm t);
ATerm list_1_0 (ATerm u_89 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm a_0 (ATerm), ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplNamedCons_1_0 (ATerm t_22 (ATerm), ATerm t);
ATerm ReplCons_1_0 (ATerm a_23 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
ATerm is_asfix_list_0_0 (ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm m_23 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm add_0_0 (ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm i_55 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm j_55 (ATerm h_50, ATerm i_50, ATerm j_50, ATerm k_50, ATerm t);
static ATerm k_55 (ATerm m_51, ATerm n_51, ATerm o_51, ATerm p_51, ATerm t);
static ATerm l_55 (ATerm i_54, ATerm j_54, ATerm k_54, ATerm l_54, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm e_85 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm Conc_2_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_98 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm k_67 (ATerm e_64, ATerm t);
static ATerm l_67 (ATerm n_65, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm s_90 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm h_90 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm r_73 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t);
static ATerm s_73 (ATerm y_72, ATerm z_72, ATerm a_73, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_1_0 (ATerm y_87 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm x_3 (ATerm t);
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
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm implode_options_0_0 (ATerm t);
ATerm io_wrap_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL,d_0 = NULL;
  a_22 = t;
  if(match_cons(t, sym_cons_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_22);
  w_21 = t;
  t = z_21;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, z_21);
  d_0 = t;
  t = SSLsetAnnotations(d_0, w_21);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm n_6 = t;
  if((PushChoice() == 0))
    {
      ATerm h_25 = NULL,i_25 = NULL,k_25 = NULL;
      i_25 = t;
      if(match_cons(t, sym_appl_2))
        {
          k_25 = ATgetArgument(t, 0);
          h_25 = ATgetArgument(t, 1);
          {
            ATerm q_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,z_8 = NULL,f_2 = NULL,e_2 = NULL,q_9 = NULL;
            t = SSLgetAnnotations(i_25);
            q_8 = t;
            t = k_25;
            if(match_cons(t, sym_prod_3))
              {
                u_8 = ATgetArgument(t, 0);
                v_8 = ATgetArgument(t, 1);
                w_8 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_25);
            t_8 = t;
            t = v_8;
            if(match_cons(t, sym_cf_1))
              {
                q_9 = ATgetArgument(t, 0);
                {
                  ATerm z_9 = NULL,b_10 = NULL,d_10 = NULL,e_10 = NULL,b_2 = NULL,a_2 = NULL;
                  t = SSLgetAnnotations(v_8);
                  z_9 = t;
                  t = q_9;
                  if(match_cons(t, sym_opt_1))
                    {
                      d_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_9);
                  b_10 = t;
                  t = d_10;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, d_10);
                  a_2 = t;
                  t = SSLsetAnnotations(a_2, b_10);
                  e_10 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, e_10);
                  b_2 = t;
                  t = SSLsetAnnotations(b_2, z_9);
                }
              }
            else
              {
                ATerm j_10 = NULL,d_2 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    q_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_8);
                j_10 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, q_9);
                d_2 = t;
                t = SSLsetAnnotations(d_2, j_10);
              }
            x_8 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, u_8, x_8, w_8);
            e_2 = t;
            t = SSLsetAnnotations(e_2, t_8);
            z_8 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, z_8, h_25);
            f_2 = t;
            t = SSLsetAnnotations(f_2, q_8);
          }
        }
      else
        {
          ATerm p_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,i_2 = NULL,g_2 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              k_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_25);
          p_10 = t;
          t = k_25;
          if(match_cons(t, sym_opt_1))
            {
              t_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_25);
          s_10 = t;
          t = t_10;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, t_10);
          g_2 = t;
          t = SSLsetAnnotations(g_2, s_10);
          u_10 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, u_10);
          i_2 = t;
          t = SSLsetAnnotations(i_2, p_10);
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
        ATerm m_25 = NULL,n_25 = NULL,r_25 = NULL,s_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,m_2 = NULL,l_2 = NULL;
        z_25 = t;
        if(match_cons(t, sym_appl_2))
          {
            n_25 = ATgetArgument(t, 0);
            r_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_25);
        m_25 = t;
        t = n_25;
        if(match_cons(t, sym_prod_3))
          {
            u_25 = ATgetArgument(t, 0);
            v_25 = ATgetArgument(t, 1);
            w_25 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_25);
        s_25 = t;
        t = v_25;
        t = oncetd_1_0(e_0, t);
        x_25 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, u_25, x_25, w_25);
        l_2 = t;
        t = SSLsetAnnotations(l_2, s_25);
        y_25 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, y_25, r_25);
        m_2 = t;
        t = SSLsetAnnotations(m_2, m_25);
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
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,k_2 = NULL;
  c_26 = t;
  if(match_cons(t, sym_lex_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, b_26);
  k_2 = t;
  t = SSLsetAnnotations(k_2, a_26);
  return(t);
}
ATerm annotation_2_0 (ATerm i_23 (ATerm), ATerm j_23 (ATerm), ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,a_20 = NULL,b_20 = NULL,f_20 = NULL,i_20 = NULL,m_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,c_21 = NULL,e_21 = NULL,i_21 = NULL,v_21 = NULL,o_0 = NULL,l_0 = NULL,g_0 = NULL;
  v_21 = t;
  if(match_cons(t, sym_appl_2))
    {
      m_20 = ATgetArgument(t, 0);
      s_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_21);
  i_20 = t;
  t = m_20;
  if(match_cons(t, sym_prod_3))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
      x_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_20);
  t_20 = t;
  t = x_20;
  if(match_cons(t, sym_attrs_1))
    {
      c_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_20);
  z_20 = t;
  t = c_21;
  t = oncetd_1_0(b_0, t);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, e_21);
  g_0 = t;
  t = SSLsetAnnotations(g_0, z_20);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, u_20, v_20, i_21);
  l_0 = t;
  t = SSLsetAnnotations(l_0, t_20);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, y_20, s_20);
  o_0 = t;
  t = SSLsetAnnotations(o_0, i_20);
  t = s_20;
  t = filter_1_0(c_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_19 = ATgetFirst((ATermList) t);
      w_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_19;
  t = j_23(t);
  x_19 = t;
  t = w_19;
  t = i_23(t);
  a_20 = t;
  t = term_p_6;
  b_20 = t;
  t = (ATerm) ATinsert(CheckATermList(a_20), x_19);
  f_20 = t;
  t = SSL_mkterm(b_20, f_20);
  return(t);
}
ATerm appl_2_0 (ATerm c_17 (ATerm), ATerm d_17 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,c_7 = NULL;
  m_26 = t;
  if(match_cons(t, sym_appl_2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_26);
  h_26 = t;
  t = i_26;
  t = c_17(t);
  k_26 = t;
  t = j_26;
  t = d_17(t);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, k_26, l_26);
  c_7 = t;
  t = SSLsetAnnotations(c_7, h_26);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm l_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,t_28 = NULL,u_28 = NULL,y_28 = NULL,a_29 = NULL,q_7 = NULL,o_7 = NULL;
  a_29 = t;
  if(match_cons(t, sym_prod_3))
    {
      n_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
      p_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_29);
  l_28 = t;
  t = o_28;
  if(match_cons(t, sym_cf_1))
    {
      t_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_28);
  q_28 = t;
  t = t_28;
  t = oncetd_1_0(j_0, t);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, u_28);
  o_7 = t;
  t = SSLsetAnnotations(o_7, q_28);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, n_28, y_28, p_28);
  q_7 = t;
  t = SSLsetAnnotations(q_7, l_28);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm c_29 = NULL,e_29 = NULL,f_29 = NULL,n_7 = NULL;
  f_29 = t;
  if(match_cons(t, sym_sort_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_29);
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, e_29);
  n_7 = t;
  t = SSLsetAnnotations(n_7, c_29);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,w_11 = NULL,u_7 = NULL;
  w_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_11);
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, s_11);
  u_7 = t;
  t = SSLsetAnnotations(u_7, r_11);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,c_8 = NULL;
  t_12 = t;
  if(match_cons(t, sym_cons_1))
    {
      s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_12);
  r_12 = t;
  t = s_12;
  if(match_string(t, "FromTerm"))
    {
      t = s_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("FromApp", 0, ATtrue)))
        _fail(t);
      t = s_12;
    }
  t = (ATerm) ATmakeAppl(sym_cons_1, s_12);
  c_8 = t;
  t = SSLsetAnnotations(c_8, r_12);
  return(t);
}
ATerm skip_concrete_1_0 (ATerm k_23 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,i_27 = NULL,j_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,v_27 = NULL,t_7 = NULL,l_7 = NULL,k_7 = NULL,f_7 = NULL,e_7 = NULL;
  static ATerm t_31 (ATerm t);
  static ATerm t_31 (ATerm t)
  {
    static ATerm n_0 (ATerm t);
    static ATerm n_0 (ATerm t)
    {
      ATerm q_6 = t;
      int r_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
          q_31 = t;
          if(match_cons(t, sym_appl_2))
            {
              r_31 = ATgetArgument(t, 0);
              s_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm s_6 = t;
            int u_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_11 = NULL,h_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,b_8 = NULL,v_7 = NULL;
                t = SSLgetAnnotations(q_31);
                e_11 = t;
                t = r_31;
                if(match_cons(t, sym_prod_3))
                  {
                    l_11 = ATgetArgument(t, 0);
                    m_11 = ATgetArgument(t, 1);
                    n_11 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_31);
                h_11 = t;
                t = l_11;
                t = SRTS_one(p_0, t);
                o_11 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, o_11, m_11, n_11);
                v_7 = t;
                t = SSLsetAnnotations(v_7, h_11);
                p_11 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, p_11, s_31);
                b_8 = t;
                t = SSLsetAnnotations(b_8, e_11);
                t = k_23(t);
                LocalPopChoice(u_6);
              }
            else
              {
                t = s_6;
                {
                  ATerm d_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,f_8 = NULL,e_8 = NULL,d_8 = NULL;
                  t = SSLgetAnnotations(q_31);
                  d_12 = t;
                  t = r_31;
                  if(match_cons(t, sym_prod_3))
                    {
                      h_12 = ATgetArgument(t, 0);
                      i_12 = ATgetArgument(t, 1);
                      j_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_31);
                  g_12 = t;
                  t = j_12;
                  if(match_cons(t, sym_attrs_1))
                    {
                      n_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_12);
                  m_12 = t;
                  t = n_12;
                  t = oncetd_1_0(q_0, t);
                  o_12 = t;
                  t = (ATerm) ATmakeAppl(sym_attrs_1, o_12);
                  d_8 = t;
                  t = SSLsetAnnotations(d_8, m_12);
                  p_12 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, h_12, i_12, p_12);
                  e_8 = t;
                  t = SSLsetAnnotations(e_8, g_12);
                  k_12 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, k_12, s_31);
                  f_8 = t;
                  t = SSLsetAnnotations(f_8, d_12);
                  t = k_23(t);
                }
              }
          }
          LocalPopChoice(r_6);
        }
      else
        {
          t = q_6;
          t = annotation_2_0(k_23, t_31, t);
        }
      return(t);
    }
    t = alltd_1_0(n_0, t);
    return(t);
  }
  v_27 = t;
  if(match_cons(t, sym_appl_2))
    {
      w_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_27);
  v_26 = t;
  t = w_26;
  if(match_cons(t, sym_prod_3))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      c_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_26);
  z_26 = t;
  t = b_27;
  if(match_cons(t, sym_cf_1))
    {
      o_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_27);
  n_27 = t;
  t = o_27;
  if(match_cons(t, sym_sort_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_27);
  q_27 = t;
  t = r_27;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, r_27);
  e_7 = t;
  t = SSLsetAnnotations(e_7, q_27);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, s_27);
  f_7 = t;
  t = SSLsetAnnotations(f_7, n_27);
  p_27 = t;
  t = c_27;
  if(match_cons(t, sym_attrs_1))
    {
      f_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  e_27 = t;
  t = f_27;
  {
    static ATerm f_0 (ATerm t);
    static ATerm f_0 (ATerm t)
    {
      ATerm w_27 = NULL,x_27 = NULL,c_28 = NULL,e_28 = NULL,f_28 = NULL,k_28 = NULL,j_7 = NULL,g_7 = NULL;
      k_28 = t;
      if(match_cons(t, sym_term_1))
        {
          x_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_28);
      w_27 = t;
      t = x_27;
      if(match_cons(t, sym_cons_1))
        {
          e_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_27);
      c_28 = t;
      t = e_28;
      if(((t_26 != NULL) && (t_26 != t)))
        _fail(t);
      else
        t_26 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, e_28);
      g_7 = t;
      t = SSLsetAnnotations(g_7, c_28);
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, f_28);
      j_7 = t;
      t = SSLsetAnnotations(j_7, w_27);
      return(t);
    }
    t = SRTS_one(f_0, t);
  }
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, i_27);
  k_7 = t;
  t = SSLsetAnnotations(k_7, e_27);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, a_27, p_27, j_27);
  l_7 = t;
  t = SSLsetAnnotations(l_7, z_26);
  d_27 = t;
  t = x_26;
  {
    static ATerm h_0 (ATerm t);
    static ATerm h_0 (ATerm t)
    {
      t = appl_2_0(i_0, _id, t);
      if(((u_26 != NULL) && (u_26 != t)))
        _fail(t);
      else
        u_26 = t;
      return(t);
    }
    t = oncetd_1_0(h_0, t);
  }
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, d_27, y_26);
  t_7 = t;
  t = SSLsetAnnotations(t_7, v_26);
  t = not_null(t_26);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(u_26));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(u_26));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(u_26));
        }
    }
  t = t_31(t);
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,b_1 = NULL,d_1 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL;
  u_0 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_0 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
      {
        ATerm w_6 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_0;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_6 = ATgetFirst((ATermList) t);
      x_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_0;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_6 = ATgetFirst((ATermList) t);
      z_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_0;
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_7 = ATgetFirst((ATermList) t);
            b_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_7);
        t = b_1;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_1;
            {
              ATerm d_7 = t;
              int m_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm p_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_7);
                  t = u_0;
                }
              else
                {
                  t = d_7;
                  if(match_cons(t, sym_cf_1))
                    {
                      i_1 = ATgetArgument(t, 0);
                      t = i_1;
                      {
                        ATerm r_7 = t;
                        int s_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm x_7 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(s_7);
                            t = u_0;
                          }
                        else
                          {
                            t = r_7;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm y_7 = ATgetArgument(t, 0);
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
                          ATerm z_7 = ATgetArgument(t, 0);
                          ATerm a_8 = ATgetArgument(t, 1);
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
                ATerm g_8 = ATgetFirst((ATermList) t);
                d_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_8 = ATgetFirst((ATermList) t);
                f_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_1;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_1;
            if(match_cons(t, sym_cf_1))
              {
                i_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_1;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm i_8 = ATgetArgument(t, 0);
                ATerm j_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_0;
          }
      }
    else
      {
        t = z_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_1;
        if(match_cons(t, sym_iter_1))
          {
            ATerm k_8 = ATgetArgument(t, 0);
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
        ATerm b_3 = NULL,c_3 = NULL,e_3 = NULL;
        t = p_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_2;
        t = is_conc_0_0(t);
        t = t_2;
        t = a_0(t);
        b_3 = t;
        t = v_2;
        t = a_0(t);
        c_3 = t;
        t = o_2;
        t = a_0(t);
        e_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(CheckATermList(e_3), c_3));
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
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  s_3 = t;
  if(match_cons(t, sym_prod_3))
    {
      t_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
      {
        ATerm p_8 = ATgetArgument(t, 2);
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
  t = y_3;
  if(match_cons(t, sym_iter_1))
    {
      z_3 = ATgetArgument(t, 0);
      t = z_3;
      if((u_3 != t))
        {
          _fail(t);
        }
      t = s_3;
    }
  else
    {
      ATerm r_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              z_3 = ATgetArgument(t, 0);
              {
                ATerm y_8 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(s_8);
          t = z_3;
          if((u_3 != t))
            {
              _fail(t);
            }
          t = s_3;
        }
      else
        {
          t = r_8;
          if(match_cons(t, sym_cf_1))
            {
              z_3 = ATgetArgument(t, 0);
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
          t = z_3;
          if(match_cons(t, sym_iter_1))
            {
              a_4 = ATgetArgument(t, 0);
              t = a_4;
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
                  a_4 = ATgetArgument(t, 0);
                  {
                    ATerm a_9 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = a_4;
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
  ATerm c_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym_prod_3))
    {
      e_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
      {
        ATerm b_9 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = g_5;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm e_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_9);
        t = c_5;
      }
    else
      {
        t = c_9;
        {
          ATerm f_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm h_9 = ATgetArgument(t, 0);
                  ATerm i_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(g_9);
              t = c_5;
            }
          else
            {
              t = f_9;
              if(match_cons(t, sym_cf_1))
                {
                  i_5 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_5;
              {
                ATerm j_9 = t;
                int p_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm s_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_9);
                    t = c_5;
                  }
                else
                  {
                    t = j_9;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm t_9 = ATgetArgument(t, 0);
                        ATerm u_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = c_5;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplNamedCons_1_0 (ATerm t_22 (ATerm), ATerm t)
{
  ATerm q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,z_5 = NULL,c_6 = NULL,d_6 = NULL;
  z_5 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_5);
  s_5 = t;
  t = t_5;
  if(match_cons(t, sym_prod_3))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      ATerm w_9 = ATgetArgument(t, 1);
      c_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_6;
  {
    static ATerm r_0 (ATerm t);
    static ATerm r_0 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((d_6 != NULL) && (d_6 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(r_0, t);
  }
  t = q_5;
  t = map_1_0(t_22, t);
  u_5 = t;
  t = SSL_mkterm(not_null(d_6), u_5);
  v_5 = t;
  t = SSLsetAnnotations(v_5, s_5);
  return(t);
}
ATerm ReplCons_1_0 (ATerm a_23 (ATerm), ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1_0(a_23, t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm a_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_10 = NULL,z_10 = NULL,a_11 = NULL,d_11 = NULL,i_11 = NULL;
            q_10 = t;
            if(match_cons(t, sym_appl_2))
              {
                z_10 = ATgetArgument(t, 0);
                a_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_11;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                ATerm f_10 = t;
                int g_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(g_10);
                  }
                else
                  {
                    t = f_10;
                    {
                      ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
                      t = z_10;
                      if(match_cons(t, sym_prod_3))
                        {
                          q_1 = ATgetArgument(t, 0);
                          r_1 = ATgetArgument(t, 1);
                          {
                            ATerm h_10 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = q_1;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = r_1;
                      {
                        ATerm i_10 = t;
                        int l_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm m_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(l_10);
                            t = z_10;
                          }
                        else
                          {
                            t = i_10;
                            if(match_cons(t, sym_cf_1))
                              {
                                s_1 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_1;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm n_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = z_10;
                          }
                      }
                      t = term_o_10;
                    }
                  }
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_11 = ATgetFirst((ATermList) t);
                    i_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_11;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                {
                  ATerm r_10 = t;
                  int v_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_11 = NULL;
                      t = z_10;
                      t = is_ins_0_0(t);
                      t = d_11;
                      t = a_23(t);
                      u_11 = t;
                      t = (ATerm) ATinsert(ATempty, u_11);
                      LocalPopChoice(v_10);
                    }
                  else
                    {
                      t = r_10;
                      {
                        ATerm j_2 = NULL,g_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
                        t = z_10;
                        if(match_cons(t, sym_prod_3))
                          {
                            g_3 = ATgetArgument(t, 0);
                            n_3 = ATgetArgument(t, 1);
                            {
                              ATerm w_10 = ATgetArgument(t, 2);
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
                            t = z_10;
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
                            t = z_10;
                          }
                        t = d_11;
                        t = a_23(t);
                        j_2 = t;
                        t = (ATerm) ATmakeAppl(sym_Some_1, j_2);
                      }
                    }
                }
              }
            LocalPopChoice(c_10);
          }
        else
          {
            t = a_10;
            t = ReplConsConc_1_0(a_23, t);
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 = NULL,i_7 = NULL;
      i_7 = t;
      if(match_cons(t, sym_lit_1))
        {
          h_7 = ATgetArgument(t, 0);
          {
            ATerm w_7 = NULL,o_9 = NULL;
            t = SSLgetAnnotations(i_7);
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, h_7);
            o_9 = t;
            t = SSLsetAnnotations(o_9, w_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = i_7;
        }
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      t = is_asfix_list_0_0(t);
    }
  return(t);
}
ATerm is_asfix_list_0_0 (ATerm t)
{
  ATerm z_16 = NULL,b_17 = NULL,e_17 = NULL;
  b_17 = t;
  if(match_cons(t, sym_iter_1))
    {
      e_17 = ATgetArgument(t, 0);
      {
        ATerm u_4 = NULL,k_9 = NULL;
        t = SSLgetAnnotations(b_17);
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, e_17);
        k_9 = t;
        t = SSLsetAnnotations(k_9, u_4);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_sep_2))
        {
          e_17 = ATgetArgument(t, 0);
          z_16 = ATgetArgument(t, 1);
          {
            ATerm f_5 = NULL,l_9 = NULL;
            t = SSLgetAnnotations(b_17);
            f_5 = t;
            t = (ATerm) ATmakeAppl(sym_iter_sep_2, e_17, z_16);
            l_9 = t;
            t = SSLsetAnnotations(l_9, f_5);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              e_17 = ATgetArgument(t, 0);
              {
                ATerm y_5 = NULL,m_9 = NULL;
                t = SSLgetAnnotations(b_17);
                y_5 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, e_17);
                m_9 = t;
                t = SSLsetAnnotations(m_9, y_5);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  e_17 = ATgetArgument(t, 0);
                  z_16 = ATgetArgument(t, 1);
                  {
                    ATerm k_6 = NULL,n_9 = NULL;
                    t = SSLgetAnnotations(b_17);
                    k_6 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, e_17, z_16);
                    n_9 = t;
                    t = SSLsetAnnotations(n_9, k_6);
                  }
                }
              else
                {
                  ATerm t_6 = NULL,v_6 = NULL,r_9 = NULL;
                  if(match_cons(t, sym_seq_1))
                    {
                      e_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_17);
                  t_6 = t;
                  t = e_17;
                  t = list_1_0(s_0, t);
                  v_6 = t;
                  t = (ATerm) ATmakeAppl(sym_seq_1, v_6);
                  r_9 = t;
                  t = SSLsetAnnotations(r_9, t_6);
                }
            }
        }
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm i_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,w_18 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      q_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_18;
  if(match_cons(t, sym_prod_3))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
      {
        ATerm b_11 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = r_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_18 = ATgetFirst((ATermList) t);
      m_18 = (ATerm) ATgetNext((ATermList) t);
      t = m_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_18;
      if(match_cons(t, sym_opt_1))
        {
          t_18 = ATgetArgument(t, 0);
          t = w_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_18 = ATgetFirst((ATermList) t);
              o_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_18;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_18;
          if((i_18 != t))
            {
              _fail(t);
            }
          t = is_asfix_list_0_0(t);
          t = n_18;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              t_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_18;
          if(match_cons(t, sym_cf_1))
            {
              l_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_18;
          if(match_cons(t, sym_opt_1))
            {
              u_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_18 = ATgetFirst((ATermList) t);
              o_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_18;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_18;
          if((l_18 != t))
            {
              _fail(t);
            }
          t = is_asfix_list_0_0(t);
          t = n_18;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_18;
      if(match_cons(t, sym_opt_1))
        {
          t_18 = ATgetArgument(t, 0);
          t = w_18;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_18;
          t = is_asfix_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              t_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_18;
          if(match_cons(t, sym_opt_1))
            {
              u_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_18;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_18;
          t = is_asfix_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm c_11 = t;
  if((PushChoice() == 0))
    {
      ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
      n_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          o_19 = ATgetArgument(t, 0);
          m_19 = ATgetArgument(t, 1);
          {
            ATerm j_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,z_12 = NULL,y_12 = NULL,o_22 = NULL;
            t = SSLgetAnnotations(n_19);
            j_21 = t;
            t = o_19;
            if(match_cons(t, sym_prod_3))
              {
                n_21 = ATgetArgument(t, 0);
                o_21 = ATgetArgument(t, 1);
                p_21 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_19);
            m_21 = t;
            t = o_21;
            if(match_cons(t, sym_cf_1))
              {
                o_22 = ATgetArgument(t, 0);
                {
                  ATerm y_22 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,v_11 = NULL,k_10 = NULL;
                  t = SSLgetAnnotations(o_21);
                  y_22 = t;
                  t = o_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      c_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_22);
                  b_23 = t;
                  t = c_23;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, c_23);
                  k_10 = t;
                  t = SSLsetAnnotations(k_10, b_23);
                  d_23 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, d_23);
                  v_11 = t;
                  t = SSLsetAnnotations(v_11, y_22);
                }
              }
            else
              {
                ATerm g_23 = NULL,l_12 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    o_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_21);
                g_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, o_22);
                l_12 = t;
                t = SSLsetAnnotations(l_12, g_23);
              }
            q_21 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, n_21, q_21, p_21);
            y_12 = t;
            t = SSLsetAnnotations(y_12, m_21);
            r_21 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, r_21, m_19);
            z_12 = t;
            t = SSLsetAnnotations(z_12, j_21);
          }
        }
      else
        {
          ATerm s_23 = NULL,w_23 = NULL,x_23 = NULL,z_23 = NULL,b_13 = NULL,a_13 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              o_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_19);
          s_23 = t;
          t = o_19;
          if(match_cons(t, sym_opt_1))
            {
              x_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_19);
          w_23 = t;
          t = x_23;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, x_23);
          a_13 = t;
          t = SSLsetAnnotations(a_13, w_23);
          z_23 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, z_23);
          b_13 = t;
          t = SSLsetAnnotations(b_13, s_23);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_11;
    }
  return(t);
}
ATerm implodeAsfix_1_0 (ATerm m_23 (ATerm), ATerm t)
{
  ATerm p_32 = NULL;
  static ATerm b_37 (ATerm t);
  static ATerm b_37 (ATerm t)
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
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_36 = NULL,p_36 = NULL,v_36 = NULL;
              p_36 = t;
              if(match_cons(t, sym_appl_2))
                {
                  v_36 = ATgetArgument(t, 0);
                  n_36 = ATgetArgument(t, 1);
                  {
                    ATerm q_11 = t;
                    int t_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = p_36;
                        t = m_23(t);
                        t = p_36;
                        t = skip_concrete_1_0(b_37, t);
                        LocalPopChoice(t_11);
                      }
                    else
                      {
                        t = q_11;
                        {
                          ATerm v_16 = NULL,y_16 = NULL,c_13 = NULL;
                          t = SSLgetAnnotations(p_36);
                          v_16 = t;
                          t = n_36;
                          t = filter_1_0(t_0, t);
                          y_16 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, v_36, y_16);
                          c_13 = t;
                          t = SSLsetAnnotations(c_13, v_16);
                          {
                            ATerm x_11 = t;
                            int y_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = b_37(t);
                                LocalPopChoice(y_11);
                              }
                            else
                              {
                                t = x_11;
                                {
                                  ATerm z_11 = t;
                                  int a_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ReplCons_1_0(b_37, t);
                                      LocalPopChoice(a_12);
                                    }
                                  else
                                    {
                                      t = z_11;
                                      {
                                        ATerm b_12 = t;
                                        int c_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                q_19 = ATgetArgument(t, 0);
                                                r_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = r_19;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                s_19 = ATgetFirst((ATermList) t);
                                                t_19 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = t_19;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = q_19;
                                            t = injection_0_0(t);
                                            t = s_19;
                                            t = b_37(t);
                                            LocalPopChoice(c_12);
                                          }
                                        else
                                          {
                                            t = b_12;
                                            {
                                              ATerm e_12 = t;
                                              int f_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Tuple_0_0(t);
                                                  t = b_37(t);
                                                  LocalPopChoice(f_12);
                                                }
                                              else
                                                {
                                                  t = e_12;
                                                  t = FlatAlt_0_0(t);
                                                  t = b_37(t);
                                                }
                                            }
                                          }
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
                      v_36 = ATgetArgument(t, 0);
                      {
                        ATerm q_12 = t;
                        int u_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = p_36;
                            t = m_23(t);
                            t = p_36;
                            t = skip_concrete_1_0(b_37, t);
                            LocalPopChoice(u_12);
                          }
                        else
                          {
                            t = q_12;
                            {
                              ATerm i_24 = NULL,k_24 = NULL,d_13 = NULL;
                              t = SSLgetAnnotations(p_36);
                              i_24 = t;
                              t = v_36;
                              t = list_1_0(b_37, t);
                              k_24 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, k_24);
                              d_13 = t;
                              t = SSLsetAnnotations(d_13, i_24);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = p_36;
                      t = m_23(t);
                      t = p_36;
                      t = skip_concrete_1_0(b_37, t);
                    }
                }
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              t = SRTS_all(b_37, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      p_32 = ATgetArgument(t, 0);
      {
        ATerm v_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_32;
  t = b_37(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,z_38 = NULL,b_39 = NULL,q_39 = NULL;
  t_38 = t;
  if(match_cons(t, sym_appl_2))
    {
      u_38 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_38;
  if(match_cons(t, sym_prod_3))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
      {
        ATerm x_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_38;
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm g_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_13);
        {
          ATerm b_25 = NULL;
          t = term_h_13;
          b_25 = t;
          t = SSL_mkterm(b_25, q_39);
        }
      }
    else
      {
        t = e_13;
        {
          ATerm q_25 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              b_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_39;
          if(match_cons(t, sym_seq_1))
            {
              ATerm i_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_h_13;
          q_25 = t;
          t = SSL_mkterm(q_25, q_39);
        }
      }
  }
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,t_40 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  static ATerm e_44 (ATerm t);
  static ATerm e_44 (ATerm t)
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
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_43;
              if(((p_40 != NULL) && (p_40 != t)))
                _fail(t);
              else
                p_40 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, m_43, not_null(t_40));
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              {
                ATerm l_13 = t;
                int m_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_43;
                    if(((p_40 != NULL) && (p_40 != t)))
                      _fail(t);
                    else
                      p_40 = t;
                    t = l_43;
                    if(((q_40 != NULL) && (q_40 != t)))
                      _fail(t);
                    else
                      q_40 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, m_43, not_null(t_40));
                    LocalPopChoice(m_13);
                  }
                else
                  {
                    t = l_13;
                    {
                      ATerm t_43 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, m_43, term_u_13);
                      t = add_0_0(t);
                      t_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_43, t_43);
                      t = e_44(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = j_43;
        if(((p_40 != NULL) && (p_40 != t)))
          _fail(t);
        else
          p_40 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, m_43, not_null(t_40));
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
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,d_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,m_28 = NULL,q_13 = NULL,p_13 = NULL,o_13 = NULL;
        t = SSLgetAnnotations(f_43);
        t_27 = t;
        t = g_43;
        if(match_cons(t, sym_prod_3))
          {
            a_28 = ATgetArgument(t, 0);
            b_28 = ATgetArgument(t, 1);
            d_28 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_43);
        z_27 = t;
        t = a_28;
        {
          static ATerm w_0 (ATerm t);
          static ATerm w_0 (ATerm t)
          {
            ATerm b_29 = NULL,d_29 = NULL;
            d_29 = t;
            if(match_cons(t, sym_cf_1))
              {
                b_29 = ATgetArgument(t, 0);
                {
                  ATerm x_13 = t;
                  int y_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_29 = NULL,n_13 = NULL;
                      t = SSLgetAnnotations(d_29);
                      v_29 = t;
                      t = b_29;
                      if(((p_40 != NULL) && (p_40 != t)))
                        _fail(t);
                      else
                        p_40 = t;
                      t = (ATerm) ATmakeAppl(sym_cf_1, b_29);
                      n_13 = t;
                      t = SSLsetAnnotations(n_13, v_29);
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = x_13;
                      t = d_29;
                      if(((p_40 != NULL) && (p_40 != t)))
                        _fail(t);
                      else
                        p_40 = t;
                      t = d_29;
                    }
                }
              }
            else
              {
                t = d_29;
                if(((p_40 != NULL) && (p_40 != t)))
                  _fail(t);
                else
                  p_40 = t;
                t = d_29;
              }
            return(t);
          }
          t = Cons_2_0(w_0, Nil_0_0, t);
        }
        g_28 = t;
        t = b_28;
        if(match_cons(t, sym_cf_1))
          {
            j_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_28);
        i_28 = t;
        t = j_28;
        if(match_cons(t, sym_alt_2))
          {
            n_40 = ATgetArgument(t, 0);
            o_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, j_28);
        o_13 = t;
        t = SSLsetAnnotations(o_13, i_28);
        m_28 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, g_28, m_28, d_28);
        p_13 = t;
        t = SSLsetAnnotations(p_13, z_27);
        h_28 = t;
        t = h_43;
        if(((t_40 != NULL) && (t_40 != t)))
          _fail(t);
        else
          t_40 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, h_28, h_43);
        q_13 = t;
        t = SSLsetAnnotations(q_13, t_27);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm n_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,m_31 = NULL,n_31 = NULL,u_31 = NULL,w_31 = NULL,t_13 = NULL,s_13 = NULL,r_13 = NULL;
          t = SSLgetAnnotations(f_43);
          n_30 = t;
          t = g_43;
          if(match_cons(t, sym_prod_3))
            {
              s_30 = ATgetArgument(t, 0);
              t_30 = ATgetArgument(t, 1);
              u_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_43);
          r_30 = t;
          t = s_30;
          {
            static ATerm y_0 (ATerm t);
            static ATerm y_0 (ATerm t)
            {
              if(((p_40 != NULL) && (p_40 != t)))
                _fail(t);
              else
                p_40 = t;
              return(t);
            }
            t = Cons_2_0(y_0, Nil_0_0, t);
          }
          v_30 = t;
          t = t_30;
          if(match_cons(t, sym_lex_1))
            {
              u_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_30);
          n_31 = t;
          t = u_31;
          if(match_cons(t, sym_alt_2))
            {
              n_40 = ATgetArgument(t, 0);
              o_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, u_31);
          r_13 = t;
          t = SSLsetAnnotations(r_13, n_31);
          w_31 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, v_30, w_31, u_30);
          s_13 = t;
          t = SSLsetAnnotations(s_13, r_30);
          m_31 = t;
          t = h_43;
          if(((t_40 != NULL) && (t_40 != t)))
            _fail(t);
          else
            t_40 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, m_31, h_43);
          t_13 = t;
          t = SSLsetAnnotations(t_13, n_30);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, n_40, o_40), term_u_13);
  t = e_44(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,a_46 = NULL;
  t_45 = t;
  if(match_cons(t, sym_sort_1))
    {
      u_45 = ATgetArgument(t, 0);
      {
        ATerm e_32 = NULL,b_14 = NULL;
        t = SSLgetAnnotations(t_45);
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, u_45);
        b_14 = t;
        t = SSLsetAnnotations(b_14, e_32);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          u_45 = ATgetArgument(t, 0);
          {
            ATerm l_32 = NULL,n_32 = NULL,c_14 = NULL;
            t = SSLgetAnnotations(t_45);
            l_32 = t;
            t = u_45;
            t = injective_alt_0_0(t);
            n_32 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, n_32);
            c_14 = t;
            t = SSLsetAnnotations(c_14, l_32);
          }
        }
      else
        {
          ATerm a_33 = NULL,g_33 = NULL,h_33 = NULL,d_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              u_45 = ATgetArgument(t, 0);
              a_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_45);
          a_33 = t;
          t = u_45;
          t = injective_alt_0_0(t);
          g_33 = t;
          t = a_46;
          t = injective_alt_0_0(t);
          h_33 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, g_33, h_33);
          d_14 = t;
          t = SSLsetAnnotations(d_14, a_33);
        }
    }
  return(t);
}
static ATerm i_55 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm l_49 = NULL,v_49 = NULL,w_49 = NULL,j_14 = NULL;
  t = SSLgetAnnotations(i_49);
  l_49 = t;
  t = f_49;
  t = Cons_2_0(a_1, Nil_0_0, t);
  v_49 = t;
  t = h_49;
  {
    ATerm z_13 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(c_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_13;
      }
  }
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, v_49, g_49, w_49);
  j_14 = t;
  t = SSLsetAnnotations(j_14, l_49);
  return(t);
}
static ATerm j_55 (ATerm h_50, ATerm i_50, ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm l_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,o_14 = NULL;
  t = SSLgetAnnotations(k_50);
  l_50 = t;
  t = h_50;
  t = Cons_2_0(e_1, Nil_0_0, t);
  p_50 = t;
  t = i_50;
  t = injective_alt_0_0(t);
  q_50 = t;
  t = j_50;
  {
    ATerm a_14 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(g_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_14;
      }
  }
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, p_50, q_50, r_50);
  o_14 = t;
  t = SSLsetAnnotations(o_14, l_50);
  return(t);
}
static ATerm k_55 (ATerm m_51, ATerm n_51, ATerm o_51, ATerm p_51, ATerm t)
{
  ATerm q_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,a_15 = NULL;
  t = SSLgetAnnotations(p_51);
  q_51 = t;
  t = m_51;
  t = Cons_2_0(j_1, Nil_0_0, t);
  u_51 = t;
  t = n_51;
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
            ATerm n_35 = NULL,q_14 = NULL;
            t = SSLgetAnnotations(c_54);
            n_35 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, d_54);
            q_14 = t;
            t = SSLsetAnnotations(q_14, n_35);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              d_54 = ATgetArgument(t, 0);
              {
                ATerm e_36 = NULL,l_36 = NULL,r_14 = NULL;
                t = SSLgetAnnotations(c_54);
                e_36 = t;
                t = d_54;
                t = o_55(t);
                l_36 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, l_36);
                r_14 = t;
                t = SSLsetAnnotations(r_14, e_36);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  d_54 = ATgetArgument(t, 0);
                  {
                    ATerm t_36 = NULL,w_36 = NULL,s_14 = NULL;
                    t = SSLgetAnnotations(c_54);
                    t_36 = t;
                    t = d_54;
                    t = o_55(t);
                    w_36 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, w_36);
                    s_14 = t;
                    t = SSLsetAnnotations(s_14, t_36);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      d_54 = ATgetArgument(t, 0);
                      {
                        ATerm l_37 = NULL,o_37 = NULL,t_14 = NULL;
                        t = SSLgetAnnotations(c_54);
                        l_37 = t;
                        t = d_54;
                        t = o_55(t);
                        o_37 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, o_37);
                        t_14 = t;
                        t = SSLsetAnnotations(t_14, l_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          d_54 = ATgetArgument(t, 0);
                          {
                            ATerm u_37 = NULL,w_37 = NULL,u_14 = NULL;
                            t = SSLgetAnnotations(c_54);
                            u_37 = t;
                            t = d_54;
                            t = o_55(t);
                            w_37 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, w_37);
                            u_14 = t;
                            t = SSLsetAnnotations(u_14, u_37);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              d_54 = ATgetArgument(t, 0);
                              e_54 = ATgetArgument(t, 1);
                              {
                                ATerm f_38 = NULL,i_38 = NULL,j_38 = NULL,o_38 = NULL,p_38 = NULL,w_14 = NULL,v_14 = NULL;
                                t = SSLgetAnnotations(c_54);
                                f_38 = t;
                                t = d_54;
                                t = o_55(t);
                                i_38 = t;
                                t = e_54;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    o_38 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(e_54);
                                j_38 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, o_38);
                                v_14 = t;
                                t = SSLsetAnnotations(v_14, j_38);
                                p_38 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_sep_2, i_38, p_38);
                                w_14 = t;
                                t = SSLsetAnnotations(w_14, f_38);
                              }
                            }
                          else
                            {
                              ATerm e_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,m_39 = NULL,y_14 = NULL,x_14 = NULL;
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
                                  k_39 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_54);
                              j_39 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, k_39);
                              x_14 = t;
                              t = SSLsetAnnotations(x_14, j_39);
                              m_39 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, i_39, m_39);
                              y_14 = t;
                              t = SSLsetAnnotations(y_14, e_39);
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
  v_51 = t;
  t = o_51;
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
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, u_51, v_51, w_51);
  a_15 = t;
  t = SSLsetAnnotations(a_15, q_51);
  return(t);
}
static ATerm l_55 (ATerm i_54, ATerm j_54, ATerm k_54, ATerm l_54, ATerm t)
{
  ATerm m_54 = NULL,q_54 = NULL,b_15 = NULL;
  t = SSLgetAnnotations(l_54);
  m_54 = t;
  t = k_54;
  t = oncetd_1_0(l_1, t);
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, i_54, j_54, q_54);
  b_15 = t;
  t = SSLsetAnnotations(b_15, m_54);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm a_50 = NULL,c_50 = NULL,d_50 = NULL,h_14 = NULL;
  d_50 = t;
  if(match_cons(t, sym_varsym_1))
    {
      c_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_50);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, c_50);
  h_14 = t;
  t = SSLsetAnnotations(h_14, a_50);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,i_14 = NULL;
  g_50 = t;
  if(match_cons(t, sym_cons_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_50);
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, f_50);
  i_14 = t;
  t = SSLsetAnnotations(i_14, e_50);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  h_51 = t;
  if(match_cons(t, sym_sort_1))
    {
      i_51 = ATgetArgument(t, 0);
      {
        ATerm w_33 = NULL,k_14 = NULL;
        t = SSLgetAnnotations(h_51);
        w_33 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, i_51);
        k_14 = t;
        t = SSLsetAnnotations(k_14, w_33);
      }
    }
  else
    {
      ATerm g_34 = NULL,k_34 = NULL,d_35 = NULL,e_35 = NULL,m_14 = NULL,l_14 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          i_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_51);
      g_34 = t;
      t = i_51;
      if(match_cons(t, sym_sort_1))
        {
          d_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_51);
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, d_35);
      l_14 = t;
      t = SSLsetAnnotations(l_14, k_34);
      e_35 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, e_35);
      m_14 = t;
      t = SSLsetAnnotations(m_14, g_34);
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,n_14 = NULL;
  l_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      k_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_51);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, k_51);
  n_14 = t;
  t = SSLsetAnnotations(n_14, j_51);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm f_14 = t;
  if((PushChoice() == 0))
    {
      ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,p_14 = NULL;
      b_52 = t;
      if(match_cons(t, sym_lit_1))
        {
          a_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_52);
      z_51 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, a_52);
      p_14 = t;
      t = SSLsetAnnotations(p_14, z_51);
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
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,z_14 = NULL;
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
  z_14 = t;
  t = SSLsetAnnotations(z_14, f_54);
  return(t);
}
static ATerm l_1 (ATerm t)
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
                                ATerm g_14 = t;
                                int c_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = i_55(b_55, c_55, e_55, a_55, t);
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
                                          t = j_55(b_55, c_55, e_55, a_55, t);
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
                                                t = k_55(b_55, c_55, e_55, a_55, t);
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
                                                      t = h_15;
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
                              ATerm y_15 = t;
                              int b_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_55(b_55, c_55, e_55, a_55, t);
                                  LocalPopChoice(b_16);
                                }
                              else
                                {
                                  t = y_15;
                                  {
                                    ATerm c_16 = t;
                                    int e_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = k_55(b_55, c_55, e_55, a_55, t);
                                        LocalPopChoice(e_16);
                                      }
                                    else
                                      {
                                        t = c_16;
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
                  ATerm q_16 = t;
                  int r_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_55(b_55, c_55, e_55, a_55, t);
                      LocalPopChoice(r_16);
                    }
                  else
                    {
                      t = q_16;
                      {
                        ATerm t_16 = t;
                        int w_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_55(b_55, c_55, e_55, a_55, t);
                            LocalPopChoice(w_16);
                          }
                        else
                          {
                            t = t_16;
                            {
                              ATerm x_16 = t;
                              int a_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = k_55(b_55, c_55, e_55, a_55, t);
                                  LocalPopChoice(a_17);
                                }
                              else
                                {
                                  t = x_16;
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
                                    ATerm f_17 = t;
                                    int j_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = i_55(b_55, c_55, e_55, a_55, t);
                                        LocalPopChoice(j_17);
                                      }
                                    else
                                      {
                                        t = f_17;
                                        {
                                          ATerm l_17 = t;
                                          int m_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_55(b_55, c_55, e_55, a_55, t);
                                              LocalPopChoice(m_17);
                                            }
                                          else
                                            {
                                              t = l_17;
                                              {
                                                ATerm n_17 = t;
                                                int o_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = k_55(b_55, c_55, e_55, a_55, t);
                                                    LocalPopChoice(o_17);
                                                  }
                                                else
                                                  {
                                                    t = n_17;
                                                    {
                                                      ATerm p_17 = t;
                                                      int q_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = z_54;
                                                          if((x_54 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = a_55;
                                                          LocalPopChoice(q_17);
                                                        }
                                                      else
                                                        {
                                                          t = p_17;
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
                                        int j_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = k_55(b_55, c_55, e_55, a_55, t);
                                            LocalPopChoice(j_18);
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
                      ATerm k_18 = t;
                      int p_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_55(b_55, c_55, e_55, a_55, t);
                          LocalPopChoice(p_18);
                        }
                      else
                        {
                          t = k_18;
                          {
                            ATerm v_18 = t;
                            int x_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_55(b_55, c_55, e_55, a_55, t);
                                LocalPopChoice(x_18);
                              }
                            else
                              {
                                t = v_18;
                                {
                                  ATerm y_18 = t;
                                  int z_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = k_55(b_55, c_55, e_55, a_55, t);
                                      LocalPopChoice(z_18);
                                    }
                                  else
                                    {
                                      t = y_18;
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
                    ATerm a_19 = t;
                    int b_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_55(b_55, c_55, e_55, a_55, t);
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
                              t = j_55(b_55, c_55, e_55, a_55, t);
                              LocalPopChoice(d_19);
                            }
                          else
                            {
                              t = c_19;
                              {
                                ATerm e_19 = t;
                                int f_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_55(b_55, c_55, e_55, a_55, t);
                                    LocalPopChoice(f_19);
                                  }
                                else
                                  {
                                    t = e_19;
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
                                      ATerm p_19 = t;
                                      int u_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = l_55(b_55, c_55, e_55, a_55, t);
                                          LocalPopChoice(u_19);
                                        }
                                      else
                                        {
                                          t = p_19;
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
                    ATerm y_19 = t;
                    int z_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_55(b_55, c_55, e_55, a_55, t);
                        LocalPopChoice(z_19);
                      }
                    else
                      {
                        t = y_19;
                        {
                          ATerm c_20 = t;
                          int d_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_55(b_55, c_55, e_55, a_55, t);
                              LocalPopChoice(d_20);
                            }
                          else
                            {
                              t = c_20;
                              {
                                ATerm e_20 = t;
                                int g_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_55(b_55, c_55, e_55, a_55, t);
                                    LocalPopChoice(g_20);
                                  }
                                else
                                  {
                                    t = e_20;
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
                ATerm h_20 = t;
                int j_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_55(b_55, c_55, e_55, a_55, t);
                    LocalPopChoice(j_20);
                  }
                else
                  {
                    t = h_20;
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
                            ATerm n_20 = t;
                            int o_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_55(b_55, c_55, e_55, a_55, t);
                                LocalPopChoice(o_20);
                              }
                            else
                              {
                                t = n_20;
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
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_55(b_55, c_55, e_55, a_55, t);
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm r_20 = t;
              int w_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_55(b_55, c_55, e_55, a_55, t);
                  LocalPopChoice(w_20);
                }
              else
                {
                  t = r_20;
                  {
                    ATerm a_21 = t;
                    int b_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_55(b_55, c_55, e_55, a_55, t);
                        LocalPopChoice(b_21);
                      }
                    else
                      {
                        t = a_21;
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
  ATerm u_56 = NULL,v_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,b_57 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      x_56 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
      t = b_57;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = x_56;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = x_56;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  y_56 = ATgetArgument(t, 0);
                  z_56 = ATgetArgument(t, 1);
                  t = x_56;
                }
              else
                {
                  t = x_56;
                }
            }
        }
      else
        {
          t = x_56;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = b_57;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  y_56 = ATgetArgument(t, 0);
                  z_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, y_56, (ATerm) ATmakeAppl(sym_Conc_2, z_56, b_57));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          x_56 = ATgetArgument(t, 0);
          b_57 = ATgetArgument(t, 1);
          v_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_56;
      if(match_cons(t, sym_Conc_3))
        {
          y_56 = ATgetArgument(t, 0);
          z_56 = ATgetArgument(t, 1);
          u_56 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, y_56, z_56, (ATerm) ATmakeAppl(sym_Conc_3, u_56, b_57, v_56));
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm d_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_57 = NULL,a_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_57 = ATgetFirst((ATermList) t);
          a_58 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, z_57), a_58);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              z_57 = ATgetArgument(t, 0);
              a_58 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, z_57, (ATerm) ATmakeAppl(sym_Ins_1, a_58));
        }
      LocalPopChoice(f_21);
    }
  else
    {
      t = d_21;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = Conc_2_0(n_1, _id, t);
          }
      }
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_58 = ATgetFirst((ATermList) t);
      h_58 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, g_58), h_58);
    }
  else
    {
      if(match_cons(t, sym_Snoc_2))
        {
          g_58 = ATgetArgument(t, 0);
          h_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_2, g_58, (ATerm) ATmakeAppl(sym_Ins_1, h_58));
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CTC2_0_0(t);
      t = Cons_2_0(conc_to_cons_0_0, _id, t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm r_58 = NULL;
        if(match_cons(t, sym_Ins_1))
          {
            r_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATempty, r_58);
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_1_0(m_1, t);
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2_0(_id, conc_to_cons_0_0, t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
  }
  t = try_1_0(o_1, t);
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm y_59 = NULL,a_60 = NULL,c_60 = NULL,e_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      h_60 = ATgetArgument(t, 0);
      l_60 = ATgetArgument(t, 1);
      {
        ATerm u_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = h_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_60 = ATgetFirst((ATermList) t);
      k_60 = (ATerm) ATgetNext((ATermList) t);
      t = k_60;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = l_60;
          if(match_cons(t, sym_opt_1))
            {
              m_60 = ATgetArgument(t, 0);
              t = m_60;
              if((i_60 != t))
                {
                  _fail(t);
                }
              t = term_x_21;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  m_60 = ATgetArgument(t, 0);
                  t = i_60;
                  if(match_cons(t, sym_cf_1))
                    {
                      j_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_60;
                  if(match_cons(t, sym_opt_1))
                    {
                      n_60 = ATgetArgument(t, 0);
                      t = n_60;
                      if((j_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_x_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          n_60 = ATgetArgument(t, 0);
                          t = n_60;
                          if((j_60 != t))
                            {
                              _fail(t);
                            }
                          t = term_y_21;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              n_60 = ATgetArgument(t, 0);
                              {
                                ATerm b_22 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = n_60;
                          if((j_60 != t))
                            {
                              _fail(t);
                            }
                          t = term_y_21;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      m_60 = ATgetArgument(t, 0);
                      t = m_60;
                      if((i_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_y_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          m_60 = ATgetArgument(t, 0);
                          {
                            ATerm c_22 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = m_60;
                      if((i_60 != t))
                        {
                          _fail(t);
                        }
                      t = term_y_21;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_22 = ATgetFirst((ATermList) t);
              y_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_59;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = l_60;
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
                        m_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_60;
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
                  a_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_60;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = l_60;
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
                            m_60 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = m_60;
                        {
                          ATerm p_22 = t;
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
                              t = p_22;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm s_22 = ATgetArgument(t, 0);
                                  ATerm u_22 = ATgetArgument(t, 1);
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
                      ATerm v_22 = ATgetFirst((ATermList) t);
                      c_60 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_60;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm w_22 = ATgetFirst((ATermList) t);
                      e_60 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_60;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = l_60;
                  if(match_cons(t, sym_cf_1))
                    {
                      m_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_60;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm x_22 = ATgetArgument(t, 0);
                      ATerm z_22 = ATgetArgument(t, 1);
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
      t = l_60;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm h_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(f_23);
            t = term_l_23;
          }
        else
          {
            t = e_23;
            if(match_cons(t, sym_cf_1))
              {
                m_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_60;
            if(match_cons(t, sym_opt_1))
              {
                ATerm n_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_l_23;
          }
      }
    }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,g_61 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      d_61 = ATgetArgument(t, 0);
      e_61 = ATgetArgument(t, 1);
      {
        ATerm o_23 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_61;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_61;
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
        t = term_t_23;
      }
    else
      {
        t = p_23;
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm y_23 = ATgetArgument(t, 0);
                  ATerm a_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(v_23);
              t = term_t_23;
            }
          else
            {
              t = u_23;
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
                    t = term_t_23;
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
                    t = term_t_23;
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
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,f_62 = NULL,g_62 = NULL,x_15 = NULL;
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
  x_15 = t;
  t = SSLsetAnnotations(x_15, n_61);
  q_61 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_62 = ATgetArgument(t, 0);
      g_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_62;
        t = ConstrNil_0_0(t);
        t = (ATerm) ATempty;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm y_39 = NULL;
          t = f_62;
          {
            ATerm j_24 = t;
            int l_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_40 = NULL,e_40 = NULL;
                if(match_cons(t, sym_prod_3))
                  {
                    ATerm m_24 = ATgetArgument(t, 0);
                    ATerm n_24 = ATgetArgument(t, 1);
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
                LocalPopChoice(l_24);
              }
            else
              {
                t = j_24;
                t = Constr1_0_0(t);
              }
          }
          y_39 = t;
          t = SSL_mkterm(y_39, g_62);
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
static ATerm k_67 (ATerm e_64, ATerm t)
{
  static ATerm m_67 (ATerm t);
  static ATerm m_67 (ATerm t)
  {
    ATerm f_64 = NULL,g_64 = NULL,i_64 = NULL,j_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
    f_64 = t;
    if(match_cons(t, sym_appl_2))
      {
        g_64 = ATgetArgument(t, 0);
        n_64 = ATgetArgument(t, 1);
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
        j_64 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = j_64;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm q_24 = ATgetArgument(t, 0);
        ATerm r_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = n_64;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_64 = ATgetFirst((ATermList) t);
        p_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = p_64;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, o_64);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_64 = ATgetFirst((ATermList) t);
            r_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_64;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_64 = ATgetFirst((ATermList) t);
            t_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_64;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm d_65 = NULL,e_65 = NULL;
            t = o_64;
            t = m_67(t);
            d_65 = t;
            t = s_64;
            t = m_67(t);
            e_65 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_65), (ATerm) ATinsert(ATempty, q_64)), d_65);
            t = concat_0_0(t);
          }
        else
          {
            ATerm l_65 = NULL,m_65 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_64 = ATgetFirst((ATermList) t);
                v_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_64;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_64 = ATgetFirst((ATermList) t);
                x_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_64;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_64;
            t = m_67(t);
            l_65 = t;
            t = w_64;
            t = m_67(t);
            m_65 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_65), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_64), s_64), q_64)), l_65);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = e_64;
  t = m_67(t);
  return(t);
}
static ATerm l_67 (ATerm n_65, ATerm t)
{
  static ATerm n_67 (ATerm t);
  static ATerm n_67 (ATerm t)
  {
    ATerm o_65 = NULL,p_65 = NULL,r_65 = NULL,s_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
    o_65 = t;
    if(match_cons(t, sym_appl_2))
      {
        p_65 = ATgetArgument(t, 0);
        v_65 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_65;
    if(match_cons(t, sym_prod_3))
      {
        ATerm s_24 = ATgetArgument(t, 0);
        r_65 = ATgetArgument(t, 1);
        {
          ATerm t_24 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = r_65;
    if(match_cons(t, sym_cf_1))
      {
        s_65 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = s_65;
    if(match_cons(t, sym_iter_1))
      {
        ATerm u_24 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = v_65;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_65 = ATgetFirst((ATermList) t);
        x_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = x_65;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, w_65);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_65 = ATgetFirst((ATermList) t);
            a_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_66;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm h_66 = NULL,i_66 = NULL;
            t = w_65;
            t = n_67(t);
            h_66 = t;
            t = z_65;
            t = n_67(t);
            i_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, i_66), h_66);
            t = concat_0_0(t);
          }
        else
          {
            ATerm o_66 = NULL,p_66 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_66 = ATgetFirst((ATermList) t);
                c_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_66;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_65;
            t = n_67(t);
            o_66 = t;
            t = b_66;
            t = n_67(t);
            p_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_66), (ATerm) ATinsert(ATempty, z_65)), o_66);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = n_65;
  t = n_67(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
  s_66 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_66 = ATgetArgument(t, 0);
      d_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_66;
  if(match_cons(t, sym_prod_3))
    {
      u_66 = ATgetArgument(t, 0);
      z_66 = ATgetArgument(t, 1);
      {
        ATerm v_24 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_66;
  if(match_cons(t, sym_cf_1))
    {
      a_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_67;
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
        t = d_67;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_67 = ATgetFirst((ATermList) t);
            f_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_67;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_66;
            {
              ATerm a_25 = t;
              int c_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_67(s_66, t);
                  LocalPopChoice(c_25);
                }
              else
                {
                  t = a_25;
                  t = (ATerm) ATinsert(ATempty, e_67);
                }
            }
          }
        else
          {
            t = u_66;
            t = k_67(s_66, t);
          }
      }
    else
      {
        t = w_24;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm f_25 = ATgetArgument(t, 0);
                  ATerm g_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(e_25);
              t = u_66;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = d_67;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_66 = ATgetFirst((ATermList) t);
                      y_66 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = v_66;
                  if(match_cons(t, sym_cf_1))
                    {
                      w_66 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_66;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm j_25 = ATgetArgument(t, 0);
                      ATerm l_25 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_66;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_67;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_67 = ATgetFirst((ATermList) t);
                      f_67 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = f_67;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_67;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = d_25;
              {
                ATerm o_25 = t;
                int p_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm t_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_25);
                    t = d_67;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        e_67 = ATgetFirst((ATermList) t);
                        f_67 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = f_67;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = u_66;
                        {
                          ATerm d_26 = t;
                          int e_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = l_67(s_66, t);
                              LocalPopChoice(e_26);
                            }
                          else
                            {
                              t = d_26;
                              t = (ATerm) ATinsert(ATempty, e_67);
                            }
                        }
                      }
                    else
                      {
                        t = u_66;
                        t = l_67(s_66, t);
                      }
                  }
                else
                  {
                    t = o_25;
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm f_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = u_66;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = d_67;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            v_66 = ATgetFirst((ATermList) t);
                            y_66 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = v_66;
                        if(match_cons(t, sym_cf_1))
                          {
                            w_66 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = w_66;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm g_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = y_66;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = d_67;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            e_67 = ATgetFirst((ATermList) t);
                            f_67 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = f_67;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = e_67;
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
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_67 = ATgetFirst((ATermList) t);
      y_67 = (ATerm) ATgetNext((ATermList) t);
      t = y_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_67 = ATgetFirst((ATermList) t);
          w_67 = (ATerm) ATgetNext((ATermList) t);
          t = v_67;
          if(match_int(t, 34))
            {
              t = x_67;
              if(match_int(t, 92))
                {
                  ATerm n_26 = t;
                  int o_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_68 = NULL;
                      t = w_67;
                      t = De_Escape_0_0(t);
                      b_68 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_68), term_p_26);
                      LocalPopChoice(o_26);
                    }
                  else
                    {
                      t = n_26;
                      {
                        ATerm e_68 = NULL;
                        t = y_67;
                        t = De_Escape_0_0(t);
                        e_68 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_68), x_67);
                      }
                    }
                }
              else
                {
                  ATerm i_68 = NULL;
                  t = y_67;
                  t = De_Escape_0_0(t);
                  i_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_68), x_67);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = x_67;
                  if(match_int(t, 92))
                    {
                      ATerm q_26 = t;
                      int r_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_68 = NULL;
                          t = w_67;
                          t = De_Escape_0_0(t);
                          k_68 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_68), term_s_26);
                          LocalPopChoice(r_26);
                        }
                      else
                        {
                          t = q_26;
                          {
                            ATerm n_68 = NULL;
                            t = y_67;
                            t = De_Escape_0_0(t);
                            n_68 = t;
                            t = (ATerm) ATinsert(CheckATermList(n_68), x_67);
                          }
                        }
                    }
                  else
                    {
                      ATerm q_68 = NULL;
                      t = y_67;
                      t = De_Escape_0_0(t);
                      q_68 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_68), x_67);
                    }
                }
              else
                {
                  ATerm u_68 = NULL;
                  t = y_67;
                  t = De_Escape_0_0(t);
                  u_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_68), x_67);
                }
            }
        }
      else
        {
          ATerm x_68 = NULL;
          t = y_67;
          t = De_Escape_0_0(t);
          x_68 = t;
          t = (ATerm) ATinsert(CheckATermList(x_68), x_67);
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
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_69 = ATgetFirst((ATermList) t);
      i_69 = (ATerm) ATgetNext((ATermList) t);
      t = i_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_69 = ATgetFirst((ATermList) t);
          g_69 = (ATerm) ATgetNext((ATermList) t);
          t = f_69;
          if(match_int(t, 34))
            {
              t = h_69;
              if(match_int(t, 92))
                {
                  ATerm g_27 = t;
                  int h_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_69 = NULL;
                      t = g_69;
                      t = De_Escape_0_0(t);
                      l_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_69), term_p_26);
                      LocalPopChoice(h_27);
                    }
                  else
                    {
                      t = g_27;
                      {
                        ATerm o_69 = NULL;
                        t = i_69;
                        t = De_Escape_0_0(t);
                        o_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_69), h_69);
                      }
                    }
                }
              else
                {
                  ATerm r_69 = NULL;
                  t = i_69;
                  t = De_Escape_0_0(t);
                  r_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_69), h_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = h_69;
                  if(match_int(t, 92))
                    {
                      ATerm k_27 = t;
                      int l_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_69 = NULL;
                          t = g_69;
                          t = De_Escape_0_0(t);
                          t_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(t_69), term_s_26);
                          LocalPopChoice(l_27);
                        }
                      else
                        {
                          t = k_27;
                          {
                            ATerm w_69 = NULL;
                            t = i_69;
                            t = De_Escape_0_0(t);
                            w_69 = t;
                            t = (ATerm) ATinsert(CheckATermList(w_69), h_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm z_69 = NULL;
                      t = i_69;
                      t = De_Escape_0_0(t);
                      z_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_69), h_69);
                    }
                }
              else
                {
                  ATerm c_70 = NULL;
                  t = i_69;
                  t = De_Escape_0_0(t);
                  c_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(c_70), h_69);
                }
            }
        }
      else
        {
          ATerm f_70 = NULL;
          t = i_69;
          t = De_Escape_0_0(t);
          f_70 = t;
          t = (ATerm) ATinsert(CheckATermList(f_70), h_69);
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
      ATerm m_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_27) != AT_INT) || (ATgetInt((ATermInt) m_27) != 34)))
        _fail(t);
      {
        ATerm u_27 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(u_27) != AT_LIST) || !(ATisEmpty(u_27))))
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
  ATerm g_70 = NULL;
  t = explode_string_0_0(t);
  g_70 = t;
  t = Hd_0_0(t);
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = g_70;
  t = Tl_0_0(t);
  t = at_last_1_0(v_1, t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_y_27);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_28);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_28);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
  l_70 = t;
  if(match_cons(t, sym_cf_1))
    {
      j_70 = ATgetArgument(t, 0);
      {
        ATerm n_70 = NULL;
        t = j_70;
        t = PpSym_0_0(t);
        n_70 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_28)), n_70), (ATerm) ATinsert(ATempty, term_v_28));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          j_70 = ATgetArgument(t, 0);
          {
            ATerm p_70 = NULL;
            t = j_70;
            t = PpSym_0_0(t);
            p_70 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_28)), p_70), (ATerm) ATinsert(ATempty, term_v_28));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_z_28);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  j_70 = ATgetArgument(t, 0);
                  k_70 = ATgetArgument(t, 1);
                  {
                    ATerm s_70 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(k_70), j_70);
                    t = map_1_0(PpSym_0_0, t);
                    s_70 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_29)), s_70), (ATerm) ATinsert(ATempty, term_g_29));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      j_70 = ATgetArgument(t, 0);
                      t = j_70;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(w_1, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          j_70 = ATgetArgument(t, 0);
                          t = j_70;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(x_1, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              j_70 = ATgetArgument(t, 0);
                              t = j_70;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(y_1, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  j_70 = ATgetArgument(t, 0);
                                  k_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_70 = NULL,z_70 = NULL;
                                    t = j_70;
                                    t = PpSym_0_0(t);
                                    y_70 = t;
                                    t = k_70;
                                    t = PpSym_0_0(t);
                                    z_70 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_29)), z_70), y_70), (ATerm) ATinsert(ATempty, term_i_29));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      j_70 = ATgetArgument(t, 0);
                                      k_70 = ATgetArgument(t, 1);
                                      {
                                        ATerm c_71 = NULL,d_71 = NULL;
                                        t = j_70;
                                        t = PpSym_0_0(t);
                                        c_71 = t;
                                        t = k_70;
                                        t = PpSym_0_0(t);
                                        d_71 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_29)), d_71), c_71), (ATerm) ATinsert(ATempty, term_i_29));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm l_29 = t;
                                      int m_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              j_70 = ATgetArgument(t, 0);
                                              {
                                                ATerm n_29 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(m_29);
                                          {
                                            ATerm f_71 = NULL;
                                            t = j_70;
                                            t = PpSym_0_0(t);
                                            f_71 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_29)), f_71);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = l_29;
                                          {
                                            ATerm p_29 = t;
                                            int q_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    j_70 = ATgetArgument(t, 0);
                                                    k_70 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(q_29);
                                                {
                                                  ATerm j_71 = NULL,k_71 = NULL;
                                                  t = j_70;
                                                  t = PpSym_0_0(t);
                                                  j_71 = t;
                                                  t = k_70;
                                                  t = PpSym_0_0(t);
                                                  k_71 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_29)), k_71), j_71);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = p_29;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    j_70 = ATgetArgument(t, 0);
                                                    k_70 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_71 = NULL,o_71 = NULL;
                                                      t = j_70;
                                                      t = PpSym_0_0(t);
                                                      n_71 = t;
                                                      t = k_70;
                                                      t = PpSym_0_0(t);
                                                      o_71 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_71), (ATerm) ATinsert(ATempty, term_s_29)), n_71);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        j_70 = ATgetArgument(t, 0);
                                                        k_70 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_71 = NULL,s_71 = NULL;
                                                          t = j_70;
                                                          t = filter_1_0(PpSym_0_0, t);
                                                          t = concat_0_0(t);
                                                          r_71 = t;
                                                          t = k_70;
                                                          t = PpSym_0_0(t);
                                                          s_71 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_71), (ATerm) ATinsert(ATempty, term_t_29)), r_71);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            j_70 = ATgetArgument(t, 0);
                                                            k_70 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm v_71 = NULL,w_71 = NULL;
                                                              t = j_70;
                                                              t = PpSym_0_0(t);
                                                              v_71 = t;
                                                              t = k_70;
                                                              t = PpSym_0_0(t);
                                                              w_71 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_71), (ATerm) ATinsert(ATempty, term_u_29)), v_71);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                j_70 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, j_70);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    j_70 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm z_71 = NULL;
                                                                      t = j_70;
                                                                      t = try_1_0(z_1, t);
                                                                      z_71 = t;
                                                                      t = (ATerm) ATinsert(ATempty, z_71);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm w_29 = t;
                                                                    int x_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            j_70 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm y_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(x_29);
                                                                        {
                                                                          ATerm b_72 = NULL;
                                                                          t = j_70;
                                                                          t = try_1_0(c_2, t);
                                                                          b_72 = t;
                                                                          t = (ATerm) ATinsert(ATempty, b_72);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_29;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_z_29);
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm r_73 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  t = n_72;
  if(match_cons(t, sym_cf_1))
    {
      u_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_72;
  {
    ATerm a_30 = t;
    if((PushChoice() == 0))
      {
        ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,z_15 = NULL;
        x_72 = t;
        if(match_cons(t, sym_sort_1))
          {
            w_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_72);
        v_72 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, w_72);
        z_15 = t;
        t = SSLsetAnnotations(z_15, v_72);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_30;
      }
  }
  t = PpSym_0_0(t);
  t_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_30)), t_72), (ATerm) ATinsert(ATempty, term_b_30));
  t = concat_0_0(t);
  t = concat_strings_0_0(t);
  s_72 = t;
  t = SSL_mkterm(s_72, o_72);
  return(t);
}
static ATerm s_73 (ATerm y_72, ATerm z_72, ATerm a_73, ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,a_16 = NULL;
  t = y_72;
  if(match_cons(t, sym_cf_1))
    {
      e_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_73;
  if(match_cons(t, sym_sort_1))
    {
      g_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_73);
  f_73 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, g_73);
  a_16 = t;
  t = SSLsetAnnotations(a_16, f_73);
  t = PpSym_0_0(t);
  t = concat_strings_0_0(t);
  d_73 = t;
  t = SSL_mkterm(d_73, z_72);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,k_73 = NULL,l_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL;
  h_73 = t;
  if(match_cons(t, sym_appl_2))
    {
      i_73 = ATgetArgument(t, 0);
      n_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_73;
  if(match_cons(t, sym_prod_3))
    {
      ATerm c_30 = ATgetArgument(t, 0);
      k_73 = ATgetArgument(t, 1);
      {
        ATerm d_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_73 = ATgetFirst((ATermList) t);
      p_73 = (ATerm) ATgetNext((ATermList) t);
      t = p_73;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_73;
          if(match_cons(t, sym_sort_1))
            {
              l_73 = ATgetArgument(t, 0);
              t = l_73;
              if(match_string(t, "<START>"))
                {
                  ATerm e_30 = t;
                  int f_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_73(k_73, n_73, h_73, t);
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
                            t = s_73(k_73, n_73, h_73, t);
                            LocalPopChoice(h_30);
                          }
                        else
                          {
                            t = g_30;
                            t = o_73;
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
                      t = r_73(k_73, n_73, h_73, t);
                      LocalPopChoice(j_30);
                    }
                  else
                    {
                      t = i_30;
                      t = s_73(k_73, n_73, h_73, t);
                    }
                }
            }
          else
            {
              ATerm k_30 = t;
              int l_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_73(k_73, n_73, h_73, t);
                  LocalPopChoice(l_30);
                }
              else
                {
                  t = k_30;
                  t = s_73(k_73, n_73, h_73, t);
                }
            }
        }
      else
        {
          t = k_73;
          {
            ATerm m_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_73(k_73, n_73, h_73, t);
                LocalPopChoice(o_30);
              }
            else
              {
                t = m_30;
                t = s_73(k_73, n_73, h_73, t);
              }
          }
        }
    }
  else
    {
      t = k_73;
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_73(k_73, n_73, h_73, t);
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            t = s_73(k_73, n_73, h_73, t);
          }
      }
    }
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm b_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      b_74 = ATgetArgument(t, 0);
      h_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_74;
  if(match_cons(t, sym_prod_3))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      d_74 = ATgetArgument(t, 1);
      {
        ATerm x_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_74;
  if(match_cons(t, sym_cf_1))
    {
      e_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_74;
  if(match_cons(t, sym_layout_0))
    {
      t = h_74;
      t = concat_strings_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          f_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_74;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = h_74;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_y_30;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_74 = ATgetFirst((ATermList) t);
              j_74 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_74;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, i_74));
        }
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL;
  q_74 = t;
  if(match_cons(t, sym_appl_2))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      ATerm a_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  r_74 = t;
  t = SSLgetAnnotations(q_74);
  p_74 = t;
  t = r_74;
  {
    static ATerm i_75 (ATerm t);
    static ATerm i_75 (ATerm t)
    {
      ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
      f_75 = t;
      if(match_cons(t, sym_appl_2))
        {
          d_75 = ATgetArgument(t, 0);
          e_75 = ATgetArgument(t, 1);
          {
            ATerm b_31 = t;
            int c_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_40 = NULL,m_40 = NULL,v_40 = NULL,d_16 = NULL;
                t = SSLgetAnnotations(f_75);
                m_40 = t;
                t = e_75;
                t = map_1_0(i_75, t);
                v_40 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, d_75, v_40);
                d_16 = t;
                t = SSLsetAnnotations(d_16, m_40);
                if(match_cons(t, sym_appl_2))
                  {
                    ATerm d_31 = ATgetArgument(t, 0);
                    l_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_40;
                t = concat_0_0(t);
                LocalPopChoice(c_31);
              }
            else
              {
                t = b_31;
                t = (ATerm) ATinsert(ATempty, f_75);
              }
          }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, f_75);
        }
      return(t);
    }
    t = i_75(t);
  }
  t = implode_string_0_0(t);
  o_74 = t;
  t = SSLsetAnnotations(o_74, p_74);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm a_76 = NULL,c_76 = NULL,d_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL;
  k_76 = t;
  if(match_cons(t, sym_appl_2))
    {
      l_76 = ATgetArgument(t, 0);
      {
        ATerm e_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_76;
  if(match_cons(t, sym_prod_3))
    {
      m_76 = ATgetArgument(t, 0);
      n_76 = ATgetArgument(t, 1);
      {
        ATerm f_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_76;
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm i_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_31);
        t = m_76;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_76 = ATgetFirst((ATermList) t);
            c_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_76;
        if(match_cons(t, sym_lex_1))
          {
            ATerm j_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_76;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_76;
        t = yield_0_0(t);
      }
    else
      {
        t = g_31;
        {
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm o_31 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(l_31);
              t = k_76;
              t = yield_0_0(t);
            }
          else
            {
              t = k_31;
              {
                ATerm p_31 = t;
                int v_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm x_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(v_31);
                    {
                      ATerm r_76 = NULL;
                      t = k_76;
                      t = yield_0_0(t);
                      r_76 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, r_76);
                    }
                  }
                else
                  {
                    t = p_31;
                    if(match_cons(t, sym_varsym_1))
                      {
                        o_76 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = o_76;
                    if(match_cons(t, sym_cf_1))
                      {
                        d_76 = ATgetArgument(t, 0);
                        t = d_76;
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
                              t = m_76;
                              {
                                ATerm b_32 = t;
                                int c_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_76 = NULL;
                                    t = k_76;
                                    t = yield_0_0(t);
                                    s_76 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, s_76);
                                    LocalPopChoice(c_32);
                                  }
                                else
                                  {
                                    t = b_32;
                                    {
                                      ATerm t_76 = NULL;
                                      t = k_76;
                                      t = yield_0_0(t);
                                      t_76 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, t_76);
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
                                    t = m_76;
                                    {
                                      ATerm i_32 = t;
                                      int j_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_76 = NULL;
                                          t = k_76;
                                          t = yield_0_0(t);
                                          u_76 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, u_76);
                                          LocalPopChoice(j_32);
                                        }
                                      else
                                        {
                                          t = i_32;
                                          {
                                            ATerm v_76 = NULL;
                                            t = k_76;
                                            t = yield_0_0(t);
                                            v_76 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, v_76);
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
                                              ATerm o_32 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(m_32);
                                          t = m_76;
                                          {
                                            ATerm q_32 = t;
                                            int r_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm w_76 = NULL;
                                                t = k_76;
                                                t = yield_0_0(t);
                                                w_76 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, w_76);
                                                LocalPopChoice(r_32);
                                              }
                                            else
                                              {
                                                t = q_32;
                                                {
                                                  ATerm x_76 = NULL;
                                                  t = k_76;
                                                  t = yield_0_0(t);
                                                  x_76 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, x_76);
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
                                                t = m_76;
                                                {
                                                  ATerm w_32 = t;
                                                  int x_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_76 = NULL;
                                                      t = k_76;
                                                      t = yield_0_0(t);
                                                      y_76 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, y_76);
                                                      LocalPopChoice(x_32);
                                                    }
                                                  else
                                                    {
                                                      t = w_32;
                                                      {
                                                        ATerm z_76 = NULL;
                                                        t = k_76;
                                                        t = yield_0_0(t);
                                                        z_76 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, z_76);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = s_32;
                                                {
                                                  ATerm a_77 = NULL;
                                                  t = k_76;
                                                  t = yield_0_0(t);
                                                  a_77 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, a_77);
                                                }
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
                        ATerm b_77 = NULL;
                        t = k_76;
                        t = yield_0_0(t);
                        b_77 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, b_77);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm m_77 = NULL;
  m_77 = t;
  t = term_y_32;
  t = get_config_0_0(t);
  t = m_77;
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
  ATerm n_77 = NULL;
  n_77 = t;
  t = term_z_32;
  t = get_config_0_0(t);
  t = n_77;
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
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,i_17 = NULL,m_16 = NULL;
  y_77 = t;
  if(match_cons(t, sym_appl_2))
    {
      p_77 = ATgetArgument(t, 0);
      q_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_77);
  o_77 = t;
  t = p_77;
  if(match_cons(t, sym_prod_3))
    {
      t_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
      v_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_77);
  s_77 = t;
  t = t_77;
  t = filter_1_0(d_3, t);
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, w_77, u_77, v_77);
  m_16 = t;
  t = SSLsetAnnotations(m_16, s_77);
  x_77 = t;
  t = q_77;
  t = filter_1_0(f_3, t);
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, x_77, r_77);
  i_17 = t;
  t = SSLsetAnnotations(i_17, o_77);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm b_33 = t;
  if((PushChoice() == 0))
    {
      ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
      f_79 = t;
      if(match_cons(t, sym_appl_2))
        {
          g_79 = ATgetArgument(t, 0);
          e_79 = ATgetArgument(t, 1);
          {
            ATerm k_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,b_42 = NULL,i_16 = NULL,h_16 = NULL,g_16 = NULL,f_16 = NULL;
            t = SSLgetAnnotations(f_79);
            k_41 = t;
            t = g_79;
            if(match_cons(t, sym_prod_3))
              {
                p_41 = ATgetArgument(t, 0);
                q_41 = ATgetArgument(t, 1);
                r_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_79);
            o_41 = t;
            t = q_41;
            if(match_cons(t, sym_cf_1))
              {
                v_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_41);
            t_41 = t;
            t = v_41;
            if(match_cons(t, sym_opt_1))
              {
                y_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_41);
            x_41 = t;
            t = y_41;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, y_41);
            f_16 = t;
            t = SSLsetAnnotations(f_16, x_41);
            b_42 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, b_42);
            g_16 = t;
            t = SSLsetAnnotations(g_16, t_41);
            w_41 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, p_41, w_41, r_41);
            h_16 = t;
            t = SSLsetAnnotations(h_16, o_41);
            s_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, s_41, e_79);
            i_16 = t;
            t = SSLsetAnnotations(i_16, k_41);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              g_79 = ATgetArgument(t, 0);
              {
                ATerm f_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_16 = NULL,j_16 = NULL;
                t = SSLgetAnnotations(f_79);
                f_44 = t;
                t = g_79;
                if(match_cons(t, sym_opt_1))
                  {
                    i_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_79);
                h_44 = t;
                t = i_44;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, i_44);
                j_16 = t;
                t = SSLsetAnnotations(j_16, h_44);
                j_44 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, j_44);
                k_16 = t;
                t = SSLsetAnnotations(k_16, f_44);
              }
            }
          else
            {
              ATerm b_45 = NULL,l_16 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  g_79 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_79);
              b_45 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, g_79);
              l_16 = t;
              t = SSLsetAnnotations(l_16, b_45);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_33;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm c_33 = t;
  if((PushChoice() == 0))
    {
      ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
      n_80 = t;
      if(match_cons(t, sym_appl_2))
        {
          o_80 = ATgetArgument(t, 0);
          m_80 = ATgetArgument(t, 1);
          {
            ATerm r_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,s_16 = NULL,p_16 = NULL,o_16 = NULL,n_16 = NULL;
            t = SSLgetAnnotations(n_80);
            r_45 = t;
            t = o_80;
            if(match_cons(t, sym_prod_3))
              {
                x_45 = ATgetArgument(t, 0);
                y_45 = ATgetArgument(t, 1);
                z_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_80);
            w_45 = t;
            t = y_45;
            if(match_cons(t, sym_cf_1))
              {
                g_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_45);
            f_46 = t;
            t = g_46;
            if(match_cons(t, sym_opt_1))
              {
                k_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_46);
            j_46 = t;
            t = k_46;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, k_46);
            n_16 = t;
            t = SSLsetAnnotations(n_16, j_46);
            l_46 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, l_46);
            o_16 = t;
            t = SSLsetAnnotations(o_16, f_46);
            h_46 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, x_45, h_46, z_45);
            p_16 = t;
            t = SSLsetAnnotations(p_16, w_45);
            e_46 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, e_46, m_80);
            s_16 = t;
            t = SSLsetAnnotations(s_16, r_45);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              o_80 = ATgetArgument(t, 0);
              {
                ATerm s_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,g_17 = NULL,u_16 = NULL;
                t = SSLgetAnnotations(n_80);
                s_46 = t;
                t = o_80;
                if(match_cons(t, sym_opt_1))
                  {
                    v_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_80);
                u_46 = t;
                t = v_46;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, v_46);
                u_16 = t;
                t = SSLsetAnnotations(u_16, u_46);
                w_46 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, w_46);
                g_17 = t;
                t = SSLsetAnnotations(g_17, s_46);
              }
            }
          else
            {
              ATerm c_47 = NULL,h_17 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  o_80 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_80);
              c_47 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, o_80);
              h_17 = t;
              t = SSLsetAnnotations(h_17, c_47);
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
static ATerm q_3 (ATerm t)
{
  ATerm p_80 = NULL;
  p_80 = t;
  t = term_d_33;
  t = get_config_0_0(t);
  t = p_80;
  t = topdown_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = repeat_1_0(ApplToSort_0_0, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_80 = NULL;
  q_80 = t;
  t = term_e_33;
  t = get_config_0_0(t);
  t = q_80;
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
  ATerm r_80 = NULL;
  r_80 = t;
  t = term_f_33;
  t = get_config_0_0(t);
  t = r_80;
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
  ATerm i_33 = t;
  if((PushChoice() == 0))
    {
      ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,k_17 = NULL;
      u_80 = t;
      if(match_cons(t, sym_lit_1))
        {
          t_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_80);
      s_80 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, t_80);
      k_17 = t;
      t = SSLsetAnnotations(k_17, s_80);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_33;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm v_80 = NULL;
  v_80 = t;
  t = term_j_33;
  t = get_config_0_0(t);
  t = v_80;
  t = replace_appl_0_0(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm w_80 = NULL;
  w_80 = t;
  t = term_k_33;
  t = get_config_0_0(t);
  t = w_80;
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
  ATerm x_80 = NULL,y_80 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      x_80 = ATgetArgument(t, 0);
      {
        ATerm l_33 = ATgetArgument(t, 1);
        if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
          {
            y_80 = ATgetFirst((ATermList) l_33);
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
  t = x_80;
  t = injection_0_0(t);
  t = y_80;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm z_80 = NULL;
  z_80 = t;
  t = term_n_33;
  t = get_config_0_0(t);
  t = z_80;
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
  ATerm a_81 = NULL;
  a_81 = t;
  t = term_o_33;
  t = get_config_0_0(t);
  t = a_81;
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
  ATerm b_81 = NULL,c_81 = NULL;
  b_81 = t;
  t = term_p_33;
  t = get_config_0_0(t);
  t = b_81;
  if(match_cons(t, sym_parsetree_2))
    {
      c_81 = ATgetArgument(t, 0);
      {
        ATerm q_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_81;
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm l_77 = NULL;
  static ATerm p_4 (ATerm t);
  static ATerm p_4 (ATerm t)
  {
    if(((l_77 != NULL) && (l_77 != t)))
      _fail(t);
    else
      l_77 = t;
    {
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_33;
          t = get_config_0_0(t);
          t = l_77;
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
  if(((l_77 != NULL) && (l_77 != t)))
    _fail(t);
  else
    l_77 = t;
  t = try_1_0(h_2, t);
  t = try_1_0(y_2, t);
  t = try_1_0(q_3, t);
  t = try_1_0(x_3, t);
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
  ATerm k_81 = NULL;
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_32, k_81);
  t = set_config_0_0(t);
  t = k_81;
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
  ATerm l_81 = NULL;
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, l_81);
  t = set_config_0_0(t);
  t = l_81;
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
  ATerm m_81 = NULL;
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_33, m_81);
  t = set_config_0_0(t);
  t = m_81;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_x_33;
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
  ATerm n_81 = NULL;
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_33, n_81);
  t = set_config_0_0(t);
  t = n_81;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_y_33;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm o_81 = NULL;
  o_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_33, o_81);
  t = set_config_0_0(t);
  t = o_81;
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
  ATerm p_81 = NULL;
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, p_81);
  t = set_config_0_0(t);
  t = p_81;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm q_81 = NULL;
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_33, q_81);
  t = set_config_0_0(t);
  t = q_81;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm r_81 = NULL;
  r_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_33, r_81);
  t = set_config_0_0(t);
  t = r_81;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm s_81 = NULL;
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, s_81);
  t = set_config_0_0(t);
  t = s_81;
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
  ATerm t_81 = NULL;
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, t_81);
  t = set_config_0_0(t);
  t = t_81;
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
  ATerm u_81 = NULL;
  u_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_33, u_81);
  t = set_config_0_0(t);
  t = u_81;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, s_4, t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm j_34 = t;
        int l_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(t_4, v_4, w_4, t);
            LocalPopChoice(l_34);
          }
        else
          {
            t = j_34;
            {
              ATerm m_34 = t;
              int n_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_4, y_4, z_4, t);
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
                        t = Option_3_0(a_5, b_5, d_5, t);
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
                              t = Option_3_0(h_5, j_5, k_5, t);
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
                                    t = Option_3_0(l_5, m_5, n_5, t);
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
                                          t = Option_3_0(o_5, p_5, r_5, t);
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
                                                t = Option_3_0(w_5, x_5, a_6, t);
                                                LocalPopChoice(x_34);
                                              }
                                            else
                                              {
                                                t = w_34;
                                                {
                                                  ATerm y_34 = t;
                                                  int z_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(b_6, e_6, f_6, t);
                                                      LocalPopChoice(z_34);
                                                    }
                                                  else
                                                    {
                                                      t = y_34;
                                                      {
                                                        ATerm a_35 = t;
                                                        int b_35 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(g_6, h_6, i_6, t);
                                                            LocalPopChoice(b_35);
                                                          }
                                                        else
                                                          {
                                                            t = a_35;
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

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
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
static Symbol sym_Path_1;
static Symbol sym_Path_1;
static Symbol sym_Silent_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
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
static Symbol sym_Path_1;
static Symbol sym_Path_1;
static Symbol sym_Silent_0;
static Symbol sym_FILE_1;
static Symbol sym_iter_sep_n_2;
static Symbol sym_iter_n_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_selector_2;
static Symbol sym_Path_2;
static Symbol sym_Path1_1;
static Symbol sym_PP_Entry_2;
static Symbol sym_PP_Table_1;
static Symbol sym_KW_0;
static Symbol sym_VS_0;
static Symbol sym_SOpt_2;
static Symbol sym_Arg_1;
static Symbol sym_FBOX_2;
static Symbol sym_V_2;
static Symbol sym_H_2;
static Symbol sym_S_1;
static Symbol sym_lit_1;
static Symbol sym_appl_2;
static Symbol sym_prod_3;
static Symbol sym_attrs_1;
static Symbol sym_reject_0;
static Symbol sym_bracket_0;
static Symbol sym_term_1;
static Symbol sym_cons_1;
static Symbol sym_char_class_1;
static Symbol sym_iter_sep_n_3;
static Symbol sym_iter_n_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_1;
static Symbol sym_iter_1;
static Symbol sym_sort_1;
static Symbol sym_alt_2;
static Symbol sym_cf_1;
static Symbol sym_lit_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_alt_2;
static Symbol sym_char_class_1;
static Symbol sym_label_2;
static Symbol sym_lit_1;
static Symbol sym_sort_1;
static Symbol sym_char_class_1;
static Symbol sym_alt_2;
static Symbol sym_iter_sep_n_3;
static Symbol sym_iter_n_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_1;
static Symbol sym_iter_1;
static Symbol sym_cf_1;
static Symbol sym_prod_fun_4;
static Symbol sym_prod_3;
static Symbol sym_attrs_1;
static Symbol sym_reject_0;
static Symbol sym_bracket_0;
static Symbol sym_term_1;
static Symbol sym_context_free_syntax_1;
static Symbol sym_appl_2;
static Symbol sym_fun_1;
static Symbol sym_uqlit_1;
static Symbol sym_qlit_1;
static Symbol sym_bracket_symbol_1;
static void init_module_constructors (void)
{
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_iter_sep_n_2 = ATmakeSymbol("iter-sep-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_2);
  sym_iter_n_1 = ATmakeSymbol("iter-n", 1, ATfalse);
  ATprotectSymbol(sym_iter_n_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
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
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
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
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
  ATprotectSymbol(sym_fun_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
}
static ATerm term_t_11;
static ATerm term_q_10;
static ATerm term_p_10;
static ATerm term_o_10;
static ATerm term_l_10;
static ATerm term_k_10;
static ATerm term_c_9;
static ATerm term_b_9;
static ATerm term_a_9;
static ATerm term_p_8;
static ATerm term_g_8;
static ATerm term_k_7;
static ATerm term_j_7;
static ATerm term_t_4;
static ATerm term_s_4;
static ATerm term_r_4;
static ATerm term_q_4;
static ATerm term_p_4;
static ATerm term_o_4;
static ATerm term_n_4;
static ATerm term_m_4;
static ATerm term_k_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Arg_1, term_j_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_SOpt_2, term_a_9, term_b_9);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_lit_1, term_l_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_lit_1, term_p_10);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm double_quote_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm try_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm l_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm m_100 (ATerm), ATerm t);
ATerm say_1_0 (ATerm a_100 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm j_107 (ATerm), ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm y_26 (ATerm), ATerm t);
static ATerm d_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_5 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm w_119 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm e_101 (ATerm), ATerm t);
static ATerm v_7 (ATerm v_2, ATerm w_2, ATerm x_2, ATerm y_2, ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm symbol2abox_1_0 (ATerm c_26 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm _2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t);
ATerm split_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
ATerm number_node_1_0 (ATerm l_26 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm b_26 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm g_101 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm collect_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm p_23 (ATerm a_22, ATerm b_22, ATerm t);
static ATerm q_23 (ATerm g_22, ATerm h_22, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
ATerm io_wrap_1_0 (ATerm j_121 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL;
  if(match_cons(t, sym__2))
    {
      l_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_0;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm w_0 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_0, m_0);
      t = separate_by_0_0(t);
      w_0 = t;
      t = (ATerm) ATinsert(CheckATermList(w_0), l_0);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_k_4;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm y_26 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL;
    t = term_m_4;
    t = pass_verbose_0_0(t);
    x_0 = t;
    t = term_m_4;
    t = y_26(t);
    t = map_1_0(xtc_find_0_0, t);
    z_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_4, z_0);
    t = add_arg_flags_0_0(t);
    y_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_0, y_0);
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(a_0, c_0, t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_o_4;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_p_4;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_4);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_r_4;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  t = xtc_transform_2_0(d_0, pass_verbose_0_0, t);
  t = xtc_transform_2_0(h_0, pass_verbose_0_0, t);
  t = xtc_ast2abox_1_0(i_0, t);
  t = xtc_transform_2_0(j_0, pass_verbose_0_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm d_1 = NULL;
  t = write_to_0_0(t);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      d_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_1;
  t = read_text_file_0_0(t);
  t = trim_1_0(o_0, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  if(match_int(t, 10))
    {
      t = e_1;
    }
  else
    {
      if(match_int(t, 13))
        {
          t = e_1;
        }
      else
        {
          if(match_int(t, 32))
            {
              t = e_1;
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 9)))
                _fail(t);
              t = e_1;
            }
        }
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_s_4;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_t_4;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(k_0, t);
  t = say_1_0(p_0, t);
  t = debug_1_0(r_0, t);
  return(t);
}
static ATerm v_7 (ATerm v_2, ATerm w_2, ATerm x_2, ATerm y_2, ATerm t)
{
  t = x_2;
  t = fetch_1_0(t_0, t);
  t = x_2;
  {
    ATerm u_4 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_4;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, v_2, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, w_2)), (ATerm) ATmakeAppl(sym_attrs_1, x_2));
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,w_3 = NULL;
  q_3 = t;
  if(match_cons(t, sym_prod_3))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
      t_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_3;
  if(match_cons(t, sym_attrs_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_3;
      {
        ATerm v_4 = t;
        int w_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm x_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(w_4);
            t = r_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_3 = ATgetFirst((ATermList) t);
                i_3 = (ATerm) ATgetNext((ATermList) t);
                t = i_3;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = g_3;
                    {
                      ATerm y_4 = t;
                      int z_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm a_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_4);
                          {
                            ATerm b_5 = t;
                            int c_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_3;
                                t = fetch_1_0(u_0, t);
                                t = q_3;
                                LocalPopChoice(c_5);
                              }
                            else
                              {
                                t = b_5;
                                {
                                  ATerm d_5 = t;
                                  int e_5 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = w_3;
                                      t = fetch_1_0(a_1, t);
                                      t = q_3;
                                      LocalPopChoice(e_5);
                                    }
                                  else
                                    {
                                      t = d_5;
                                      t = q_3;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = y_4;
                          {
                            ATerm f_5 = t;
                            int g_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_3;
                                t = fetch_1_0(b_1, t);
                                t = q_3;
                                LocalPopChoice(g_5);
                              }
                            else
                              {
                                t = f_5;
                                {
                                  ATerm h_5 = t;
                                  int i_5 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = w_3;
                                      t = fetch_1_0(c_1, t);
                                      t = q_3;
                                      LocalPopChoice(i_5);
                                    }
                                  else
                                    {
                                      t = h_5;
                                      t = w_3;
                                      t = fetch_1_0(f_1, t);
                                      t = q_3;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = g_3;
                    {
                      ATerm j_5 = t;
                      int k_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_3;
                          t = fetch_1_0(g_1, t);
                          t = q_3;
                          LocalPopChoice(k_5);
                        }
                      else
                        {
                          t = j_5;
                          {
                            ATerm l_5 = t;
                            int m_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_3;
                                t = fetch_1_0(h_1, t);
                                t = q_3;
                                LocalPopChoice(m_5);
                              }
                            else
                              {
                                t = l_5;
                                t = w_3;
                                t = fetch_1_0(i_1, t);
                                t = q_3;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm o_5 = t;
                int p_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_3;
                    t = fetch_1_0(j_1, t);
                    t = q_3;
                    LocalPopChoice(p_5);
                  }
                else
                  {
                    t = o_5;
                    {
                      ATerm q_5 = t;
                      int r_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_3;
                          t = fetch_1_0(l_1, t);
                          t = q_3;
                          LocalPopChoice(r_5);
                        }
                      else
                        {
                          t = q_5;
                          t = w_3;
                          t = fetch_1_0(m_1, t);
                          t = q_3;
                        }
                    }
                  }
              }
          }
        else
          {
            t = v_4;
            if(match_cons(t, sym_cf_1))
              {
                n_3 = ATgetArgument(t, 0);
                t = n_3;
                if(match_cons(t, sym_sort_1))
                  {
                    o_3 = ATgetArgument(t, 0);
                    t = r_3;
                    {
                      ATerm s_5 = t;
                      int t_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_3;
                          t = fetch_1_0(n_1, t);
                          t = q_3;
                          LocalPopChoice(t_5);
                        }
                      else
                        {
                          t = s_5;
                          {
                            ATerm v_5 = t;
                            int w_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_3;
                                t = fetch_1_0(o_1, t);
                                t = q_3;
                                LocalPopChoice(w_5);
                              }
                            else
                              {
                                t = v_5;
                                {
                                  ATerm x_5 = t;
                                  int y_5 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_7(r_3, o_3, w_3, q_3, t);
                                      LocalPopChoice(y_5);
                                    }
                                  else
                                    {
                                      t = x_5;
                                      t = w_3;
                                      t = fetch_1_0(p_1, t);
                                      t = q_3;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = r_3;
                    {
                      ATerm z_5 = t;
                      int b_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_3;
                          t = fetch_1_0(q_1, t);
                          t = q_3;
                          LocalPopChoice(b_6);
                        }
                      else
                        {
                          t = z_5;
                          {
                            ATerm c_6 = t;
                            int d_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_3;
                                t = fetch_1_0(r_1, t);
                                t = q_3;
                                LocalPopChoice(d_6);
                              }
                            else
                              {
                                t = c_6;
                                t = w_3;
                                t = fetch_1_0(s_1, t);
                                t = q_3;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = r_3;
                {
                  ATerm e_6 = t;
                  int f_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_3;
                      t = fetch_1_0(t_1, t);
                      t = q_3;
                      LocalPopChoice(f_6);
                    }
                  else
                    {
                      t = e_6;
                      {
                        ATerm g_6 = t;
                        int h_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_3;
                            t = fetch_1_0(v_1, t);
                            t = q_3;
                            LocalPopChoice(h_6);
                          }
                        else
                          {
                            t = g_6;
                            t = w_3;
                            t = fetch_1_0(w_1, t);
                            t = q_3;
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
      t = s_3;
      if(match_cons(t, sym_cf_1))
        {
          n_3 = ATgetArgument(t, 0);
          t = n_3;
          if(match_cons(t, sym_sort_1))
            {
              o_3 = ATgetArgument(t, 0);
              t = r_3;
              {
                ATerm i_6 = t;
                int k_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_3;
                    t = fetch_1_0(x_1, t);
                    t = q_3;
                    LocalPopChoice(k_6);
                  }
                else
                  {
                    t = i_6;
                    {
                      ATerm o_6 = t;
                      int p_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_3;
                          t = fetch_1_0(y_1, t);
                          t = q_3;
                          LocalPopChoice(p_6);
                        }
                      else
                        {
                          t = o_6;
                          {
                            ATerm q_6 = t;
                            int r_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_7(r_3, o_3, w_3, q_3, t);
                                LocalPopChoice(r_6);
                              }
                            else
                              {
                                t = q_6;
                                t = w_3;
                                t = fetch_1_0(z_1, t);
                                t = q_3;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = r_3;
              {
                ATerm u_6 = t;
                int z_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_3;
                    t = fetch_1_0(a_2, t);
                    t = q_3;
                    LocalPopChoice(z_6);
                  }
                else
                  {
                    t = u_6;
                    {
                      ATerm a_7 = t;
                      int b_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_3;
                          t = fetch_1_0(b_2, t);
                          t = q_3;
                          LocalPopChoice(b_7);
                        }
                      else
                        {
                          t = a_7;
                          t = w_3;
                          t = fetch_1_0(c_2, t);
                          t = q_3;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = r_3;
          {
            ATerm c_7 = t;
            int d_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_3;
                t = fetch_1_0(e_2, t);
                t = q_3;
                LocalPopChoice(d_7);
              }
            else
              {
                t = c_7;
                {
                  ATerm e_7 = t;
                  int f_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_3;
                      t = fetch_1_0(f_2, t);
                      t = q_3;
                      LocalPopChoice(f_7);
                    }
                  else
                    {
                      t = e_7;
                      t = w_3;
                      t = fetch_1_0(g_2, t);
                      t = q_3;
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
  t = try_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  {
    ATerm g_7 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_7;
      }
  }
  t = (ATerm) ATinsert(ATempty, w_7);
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(h_2, t);
  t = concat_0_0(t);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,c_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      c_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8;
  if(match_cons(t, sym_alt_2))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, z_7, a_8);
            t = flat_alt_0_0(t);
            i_8 = t;
            t = (ATerm) ATinsert(CheckATermList(i_8), c_8);
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, e_8), c_8);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, e_8), c_8);
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = topdown_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = try_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,b_0 = NULL;
  g_10 = t;
  if(match_cons(t, sym_Arg_1))
    {
      f_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_10);
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, f_10);
  b_0 = t;
  t = SSLsetAnnotations(b_0, e_10);
  t = term_k_7;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = _2_0(_id, p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          m_10 = ATgetArgument(t, 0);
          n_10 = ATgetArgument(t, 1);
          {
            ATerm n_7 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_7);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, m_10, n_10);
    }
  else
    {
      t = l_7;
      if(match_cons(t, sym_iter_n_2))
        {
          m_10 = ATgetArgument(t, 0);
          {
            ATerm o_7 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, m_10);
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm c_26 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  static ATerm v_11 (ATerm t);
  static ATerm v_11 (ATerm t)
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
        if(match_cons(t, sym__2))
          {
            p_9 = ATgetArgument(t, 0);
            s_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_9;
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lit_1))
                {
                  ATerm t_7 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(s_7);
              t = (ATerm) ATempty;
            }
          else
            {
              t = r_7;
              if(match_cons(t, sym__2))
                {
                  t_9 = ATgetArgument(t, 0);
                  u_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_9;
              {
                ATerm u_7 = t;
                int x_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm y_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_7);
                    t = (ATerm) ATempty;
                  }
                else
                  {
                    t = u_7;
                    {
                      ATerm b_8 = t;
                      int d_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm f_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(d_8);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = b_8;
                          {
                            ATerm c_10 = NULL,d_10 = NULL;
                            if(match_cons(t, sym_alt_2))
                              {
                                v_9 = ATgetArgument(t, 0);
                                w_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = p_9;
                            if(match_cons(t, sym__2))
                              {
                                q_9 = ATgetArgument(t, 0);
                                r_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = w_9;
                            if(match_cons(t, sym_alt_2))
                              {
                                x_9 = ATgetArgument(t, 0);
                                y_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = q_9;
                            if(((k_9 != NULL) && (k_9 != t)))
                              _fail(t);
                            else
                              k_9 = t;
                            t = r_9;
                            if(((l_9 != NULL) && (l_9 != t)))
                              _fail(t);
                            else
                              l_9 = t;
                            t = t_9;
                            if(((m_9 != NULL) && (m_9 != t)))
                              _fail(t);
                            else
                              m_9 = t;
                            t = (ATerm) ATmakeAppl(sym_alt_2, v_9, (ATerm) ATmakeAppl(sym_alt_2, x_9, y_9));
                            t = flat_alt_0_0(t);
                            c_10 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_g_8, c_10);
                            t = mkterm_0_0(t);
                            d_10 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_9, r_9), (ATerm) ATmakeAppl(sym__2, t_9, d_10));
                            t = v_11(t);
                            t = Cons_2_0(l_2, _id, t);
                          }
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        {
          ATerm h_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(_id, o_2, t);
              t = v_11(t);
              LocalPopChoice(j_8);
            }
          else
            {
              t = h_8;
              {
                static ATerm w_11 (ATerm s_10, ATerm t_10, ATerm u_10, ATerm v_10, ATerm w_10, ATerm t);
                static ATerm w_11 (ATerm s_10, ATerm t_10, ATerm u_10, ATerm v_10, ATerm w_10, ATerm t)
                {
                  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
                  t = SSL_explode_term(v_10);
                  if(match_cons(t, sym__2))
                    {
                      d_11 = ATgetArgument(t, 0);
                      e_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, u_10, d_11)));
                  t = conc_0_0(t);
                  z_10 = t;
                  t = e_11;
                  t = argument_list_0_0(t);
                  t = number_nonterminals_0_0(t);
                  f_11 = t;
                  t = make_0_0(t);
                  a_11 = t;
                  t = f_11;
                  {
                    static ATerm q_2 (ATerm t);
                    static ATerm q_2 (ATerm t)
                    {
                      ATerm h_11 = NULL;
                      h_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_10, z_10), h_11);
                      t = v_11(t);
                      return(t);
                    }
                    t = map_1_0(q_2, t);
                  }
                  t = concat_0_0(t);
                  b_11 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_11), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, s_10, z_10), a_11));
                  return(t);
                }
                ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
                j_11 = t;
                if(match_cons(t, sym__2))
                  {
                    k_11 = ATgetArgument(t, 0);
                    o_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_11;
                if(match_cons(t, sym__2))
                  {
                    l_11 = ATgetArgument(t, 0);
                    n_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_11;
                if(match_cons(t, sym__2))
                  {
                    p_11 = ATgetArgument(t, 0);
                    q_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_11;
                if(match_cons(t, sym_bracket_symbol_1))
                  {
                    i_11 = ATgetArgument(t, 0);
                    {
                      ATerm k_8 = t;
                      int l_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_11, n_11), (ATerm) ATmakeAppl(sym__2, p_11, i_11));
                          t = v_11(t);
                          LocalPopChoice(l_8);
                        }
                      else
                        {
                          t = k_8;
                          t = w_11(l_11, n_11, p_11, q_11, j_11, t);
                        }
                    }
                  }
                else
                  {
                    t = w_11(l_11, n_11, p_11, q_11, j_11, t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm j_2 (ATerm t);
  static ATerm j_2 (ATerm t)
  {
    t = term_m_4;
    t = c_26(t);
    return(t);
  }
  t = split_2_0(j_2, _id, t);
  t = v_11(t);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      {
        ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,o_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_12 = ATgetFirst((ATermList) t);
            b_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_12;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_12 = ATgetFirst((ATermList) t);
            d_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_12;
        t = pair_0_0(t);
        o_13 = t;
        t = (ATerm) ATinsert(CheckATermList(o_13), (ATerm) ATmakeAppl(sym__2, a_12, c_12));
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm p_16 = NULL;
  t = _2_0(_id, t_2, t);
  if(match_cons(t, sym_lit_1))
    {
      p_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, p_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm q_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, p_16);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = map_1_0(a_3, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym_iter_1))
    {
      m_16 = ATgetArgument(t, 0);
      {
        ATerm e_0 = NULL,f_0 = NULL;
        t = SSLgetAnnotations(l_16);
        e_0 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, m_16);
        f_0 = t;
        t = SSLsetAnnotations(f_0, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          m_16 = ATgetArgument(t, 0);
          {
            ATerm v_0 = NULL,g_0 = NULL;
            t = SSLgetAnnotations(l_16);
            v_0 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, m_16);
            g_0 = t;
            t = SSLsetAnnotations(g_0, v_0);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              m_16 = ATgetArgument(t, 0);
              n_16 = ATgetArgument(t, 1);
              {
                ATerm k_1 = NULL,n_0 = NULL;
                t = SSLgetAnnotations(l_16);
                k_1 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, m_16, n_16);
                n_0 = t;
                t = SSLsetAnnotations(n_0, k_1);
              }
            }
          else
            {
              ATerm u_1 = NULL,q_0 = NULL;
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  m_16 = ATgetArgument(t, 0);
                  n_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_16);
              u_1 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_16, n_16);
              q_0 = t;
              t = SSLsetAnnotations(q_0, u_1);
            }
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,x_16 = NULL,s_0 = NULL;
  v_16 = t;
  if(match_cons(t, sym_lit_1))
    {
      u_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_16);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, u_16);
  s_0 = t;
  t = SSLsetAnnotations(s_0, t_16);
  if(match_cons(t, sym_lit_1))
    {
      x_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, x_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          x_16 = ATgetArgument(t, 0);
          {
            ATerm r_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, x_16);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  static ATerm e_3 (ATerm t);
  static ATerm f_3 (ATerm t);
  static ATerm e_3 (ATerm t)
  {
    ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,n_17 = NULL,w_6 = NULL;
    l_17 = t;
    if(match_cons(t, sym_lit_1))
      {
        k_17 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_17);
    j_17 = t;
    t = (ATerm) ATmakeAppl(sym_lit_1, k_17);
    w_6 = t;
    t = SSLsetAnnotations(w_6, j_17);
    if(match_cons(t, sym_lit_1))
      {
        n_17 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, n_17));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            n_17 = ATgetArgument(t, 0);
            {
              ATerm y_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, n_17);
      }
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    return(t);
  }
  static ATerm f_3 (ATerm t)
  {
    ATerm f_18 = NULL;
    t = _2_0(_id, h_3, t);
    if(match_cons(t, sym_lit_1))
      {
        f_18 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, f_18));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            f_18 = ATgetArgument(t, 0);
            {
              ATerm z_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, f_18);
      }
    if(((i_17 != NULL) && (i_17 != t)))
      _fail(t);
    else
      i_17 = t;
    return(t);
  }
  t = _2_0(e_3, f_3, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_c_9), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_17)), not_null(h_17)));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_iter_1))
    {
      d_18 = ATgetArgument(t, 0);
      {
        ATerm d_2 = NULL,x_6 = NULL;
        t = SSLgetAnnotations(c_18);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, d_18);
        x_6 = t;
        t = SSLsetAnnotations(x_6, d_2);
      }
    }
  else
    {
      ATerm k_2 = NULL,y_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          d_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_18);
      k_2 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, d_18);
      y_6 = t;
      t = SSLsetAnnotations(y_6, k_2);
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm k_18 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      k_18 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, k_18));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          k_18 = ATgetArgument(t, 0);
          {
            ATerm d_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, k_18);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15 = NULL;
      t = reverse_0_0(t);
      t = Cons_2_0(r_2, s_2, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_15 = ATgetFirst((ATermList) t);
          g_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_9 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, Nil_0_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_9;
          }
      }
      t = g_15;
      t = reverse_0_0(t);
      l_15 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_15), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, l_15)));
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_0_0(t);
            {
              static ATerm b_3 (ATerm t);
              static ATerm c_3 (ATerm t);
              static ATerm b_3 (ATerm t)
              {
                ATerm d_17 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    d_17 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, d_17));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        d_17 = ATgetArgument(t, 0);
                        {
                          ATerm j_9 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, d_17);
                  }
                if(((k_15 != NULL) && (k_15 != t)))
                  _fail(t);
                else
                  k_15 = t;
                return(t);
              }
              static ATerm c_3 (ATerm t)
              {
                ATerm n_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_9;
                  }
                t = reverse_0_0(t);
                if(((i_15 != NULL) && (i_15 != t)))
                  _fail(t);
                else
                  i_15 = t;
                return(t);
              }
              t = Cons_2_0(b_3, c_3, t);
            }
            t = not_null(i_15);
            t = pair_0_0(t);
            t = map_1_0(d_3, t);
            j_15 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_15)), j_15));
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = map_1_0(j_3, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm o_9 = t;
  if((PushChoice() == 0))
    {
      ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,o_8 = NULL;
      w_18 = t;
      if(match_cons(t, sym_lit_1))
        {
          v_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_18);
      u_18 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, v_18);
      o_8 = t;
      t = SSLsetAnnotations(o_8, u_18);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_9;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm number_node_1_0 (ATerm l_26 (ATerm), ATerm t)
{
  static ATerm o_19 (ATerm t);
  static ATerm o_19 (ATerm t)
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(_id, Nil_0_0, t);
        t = (ATerm) ATempty;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        {
          ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
          if(match_cons(t, sym__2))
            {
              h_19 = ATgetArgument(t, 0);
              i_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_19;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_19 = ATgetFirst((ATermList) t);
              k_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm b_10 = t;
            int h_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_19 = NULL,m_19 = NULL;
                t = j_19;
                t = l_26(t);
                t = (ATerm) ATmakeAppl(sym__2, h_19, term_j_7);
                t = add_0_0(t);
                m_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_19, k_19);
                t = o_19(t);
                l_19 = t;
                t = (ATerm) ATinsert(CheckATermList(l_19), (ATerm) ATmakeAppl(sym__2, h_19, j_19));
                LocalPopChoice(h_10);
              }
            else
              {
                t = b_10;
                {
                  ATerm n_19 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, h_19, k_19);
                  t = o_19(t);
                  n_19 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_19), j_19);
                }
              }
          }
        }
      }
    return(t);
  }
  t = split_2_0(k_3, _id, t);
  t = o_19(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = try_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm p_19 = NULL;
  if(match_cons(t, sym_label_2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_19;
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(m_3, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm b_26 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  t = number_nonterminals_0_0(t);
  t_19 = t;
  t = make_0_0(t);
  q_19 = t;
  t = t_19;
  {
    static ATerm v_3 (ATerm t);
    static ATerm v_3 (ATerm t)
    {
      static ATerm x_3 (ATerm t);
      static ATerm x_3 (ATerm t)
      {
        ATerm u_19 = NULL;
        t = term_m_4;
        t = b_26(t);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_19, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(x_3, t);
      return(t);
    }
    t = map_1_0(v_3, t);
  }
  t = concat_0_0(t);
  r_19 = t;
  t = term_m_4;
  t = b_26(t);
  s_19 = t;
  t = (ATerm) ATinsert(CheckATermList(r_19), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, s_19), q_19));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym_term_1))
    {
      l_20 = ATgetArgument(t, 0);
      t = l_20;
      if(match_cons(t, sym_appl_2))
        {
          j_20 = ATgetArgument(t, 0);
          e_20 = ATgetArgument(t, 1);
          t = j_20;
          if(match_cons(t, sym_uqlit_1))
            {
              d_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_20;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
            _fail(t);
          t = e_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_20 = ATgetFirst((ATermList) t);
              i_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_20;
          if(match_cons(t, sym_fun_1))
            {
              g_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_20;
          if(match_cons(t, sym_qlit_1))
            {
              h_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_20;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_20;
          t = un_double_quote_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              j_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_20;
        }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          l_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_20;
    }
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(y_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm j_10 = t;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(b_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_10;
    }
  t = missing_constructor_warning_0_0(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  z_20 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      a_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
      c_21 = ATgetArgument(t, 2);
      y_20 = ATgetArgument(t, 3);
      {
        ATerm h_21 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_10)), b_21), (ATerm) ATinsert(ATinsert(ATempty, term_o_10), (ATerm) ATmakeAppl(sym_lit_1, a_21)));
        t = concat_0_0(t);
        h_21 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, h_21, c_21, y_20);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm u_2 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          a_21 = ATgetArgument(t, 0);
          {
            ATerm r_10 = ATgetArgument(t, 1);
          }
          c_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_20;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 = NULL;
            t = c_21;
            if(match_cons(t, sym_attrs_1))
              {
                z_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_2;
            t = get_cnstr_name_0_0(t);
            u_2 = t;
            LocalPopChoice(y_10);
            {
              static ATerm z_3 (ATerm t);
              static ATerm z_3 (ATerm t)
              {
                t = u_2;
                return(t);
              }
              t = a_21;
              t = symbols2pp_entries_1_0(z_3, t);
            }
          }
        else
          {
            t = x_10;
            {
              ATerm c_11 = t;
              int g_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(g_11);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = c_11;
                  t = try_1_0(a_4, t);
                  t = (ATerm) ATempty;
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_21 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_21;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = try_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  if(match_cons(t, sym_cons_1))
    {
      n_22 = ATgetArgument(t, 0);
      {
        ATerm l_3 = NULL,p_3 = NULL,u_8 = NULL;
        t = SSLgetAnnotations(m_22);
        l_3 = t;
        t = n_22;
        t = un_double_quote_0_0(t);
        p_3 = t;
        t = (ATerm) ATmakeAppl(sym_cons_1, p_3);
        u_8 = t;
        t = SSLsetAnnotations(u_8, l_3);
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          n_22 = ATgetArgument(t, 0);
          t = n_22;
          if(match_cons(t, sym_qlit_1))
            {
              o_22 = ATgetArgument(t, 0);
              {
                ATerm m_11 = t;
                int r_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_23(m_22, n_22, t);
                    LocalPopChoice(r_11);
                  }
                else
                  {
                    t = m_11;
                    {
                      ATerm q_22 = NULL;
                      t = o_22;
                      t = un_double_quote_0_0(t);
                      q_22 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, q_22);
                    }
                  }
              }
            }
          else
            {
              t = p_23(m_22, n_22, t);
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              n_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_23(m_22, n_22, t);
        }
    }
  return(t);
}
static ATerm p_23 (ATerm a_22, ATerm b_22, ATerm t)
{
  ATerm c_22 = NULL,e_22 = NULL,s_8 = NULL;
  t = SSLgetAnnotations(a_22);
  c_22 = t;
  t = b_22;
  t = un_double_quote_0_0(t);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, e_22);
  s_8 = t;
  t = SSLsetAnnotations(s_8, c_22);
  return(t);
}
static ATerm q_23 (ATerm g_22, ATerm h_22, ATerm t)
{
  ATerm i_22 = NULL,k_22 = NULL,t_8 = NULL;
  t = SSLgetAnnotations(g_22);
  i_22 = t;
  t = h_22;
  t = un_double_quote_0_0(t);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, k_22);
  t_8 = t;
  t = SSLsetAnnotations(t_8, i_22);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm s_11 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_11;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = try_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym_Arg_1))
    {
      n_23 = ATgetArgument(t, 0);
      {
        ATerm f_4 = NULL,l_4 = NULL,v_8 = NULL;
        t = SSLgetAnnotations(m_23);
        f_4 = t;
        t = n_23;
        t = int_to_string_0_0(t);
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, l_4);
        v_8 = t;
        t = SSLsetAnnotations(v_8, f_4);
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          n_23 = ATgetArgument(t, 0);
          l_23 = ATgetArgument(t, 1);
          {
            ATerm u_5 = NULL,a_6 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(m_23);
            u_5 = t;
            t = n_23;
            t = int_to_string_0_0(t);
            a_6 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, a_6, l_23);
            w_8 = t;
            t = SSLsetAnnotations(w_8, u_5);
          }
        }
      else
        {
          ATerm j_6 = NULL,n_6 = NULL,x_8 = NULL;
          if(match_cons(t, sym_S_1))
            {
              n_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_23);
          j_6 = t;
          t = n_23;
          t = double_quote_0_0(t);
          n_6 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, n_6);
          x_8 = t;
          t = SSLsetAnnotations(x_8, j_6);
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  t = collect_1_0(c_4, t);
  t = concat_0_0(t);
  t = topdown_1_0(d_4, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(g_4, t);
  t = concat_0_0(t);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, s_21);
  t = topdown_1_0(h_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,v_6 = NULL;
  t = ppgenerate_0_0(t);
  v_6 = t;
  t = term_t_11;
  s_6 = t;
  t = (ATerm) ATinsert(ATempty, v_6);
  t_6 = t;
  t = SSL_mkterm(s_6, t_6);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_1_0(j_4, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_iter_sep_n_2;
Symbol sym_iter_n_1;
Symbol sym_selector_2;
Symbol sym_Path_2;
Symbol sym_Path1_1;
Symbol sym_PP_Entry_2;
Symbol sym_PP_Table_1;
Symbol sym_KW_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_Arg_1;
Symbol sym_FBOX_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_reject_0;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_char_class_1;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_sort_1;
Symbol sym_alt_2;
Symbol sym_cf_1;
Symbol sym_lit_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_label_2;
Symbol sym_lit_1;
Symbol sym_sort_1;
Symbol sym_char_class_1;
Symbol sym_alt_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_cf_1;
Symbol sym_prod_fun_4;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_reject_0;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_context_free_syntax_1;
Symbol sym_appl_2;
Symbol sym_fun_1;
Symbol sym_uqlit_1;
Symbol sym_qlit_1;
Symbol sym_bracket_symbol_1;
static void init_module_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
ATerm term_f_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_p_8;
ATerm term_h_8;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_q_4;
ATerm term_p_4;
ATerm term_o_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Arg_1, term_i_7);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_SOpt_2, term_y_8, term_z_8);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_lit_1, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_lit_1, term_v_9);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm double_quote_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm try_1_0 (ATerm x_102 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_97 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm say_1_0 (ATerm x_83 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm s_3 (ATerm), ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm s_21 (ATerm), ATerm t);
static ATerm d_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm u_106 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm v_107 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm m_89 (ATerm), ATerm t);
static ATerm x_7 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm d_3, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm symbol2abox_1_0 (ATerm i_21 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm _2_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm t);
ATerm split_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
ATerm number_node_1_0 (ATerm l_21 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm h_21 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm o_89 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_89 (ATerm), ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm collect_1_0 (ATerm j_95 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm w_23 (ATerm h_22, ATerm i_22, ATerm t);
static ATerm x_23 (ATerm n_22, ATerm o_22, ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
ATerm io_wrap_1_0 (ATerm i_109 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL;
  if(match_cons(t, sym__2))
    {
      m_0 = ATgetArgument(t, 0);
      n_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_0;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm z_0 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_0, n_0);
      t = separate_by_0_0(t);
      z_0 = t;
      t = (ATerm) ATinsert(CheckATermList(z_0), m_0);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_o_4;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm s_21 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
    t = term_p_4;
    t = pass_verbose_0_0(t);
    a_1 = t;
    t = term_p_4;
    t = s_21(t);
    t = map_1_0(xtc_find_0_0, t);
    c_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_4, c_1);
    t = add_arg_flags_0_0(t);
    b_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_1, b_1);
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(a_0, c_0, t);
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_r_4;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_s_4;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_4);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_u_4;
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
  ATerm g_1 = NULL;
  t = write_to_0_0(t);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_1;
  t = read_text_file_0_0(t);
  t = trim_1_0(p_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm h_1 = NULL;
  h_1 = t;
  if(match_int(t, 10))
    {
      t = h_1;
    }
  else
    {
      if(match_int(t, 13))
        {
          t = h_1;
        }
      else
        {
          if(match_int(t, 32))
            {
              t = h_1;
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 9)))
                _fail(t);
              t = h_1;
            }
        }
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_v_4;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_w_4;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(k_0, t);
  t = say_1_0(r_0, t);
  t = debug_1_0(u_0, t);
  return(t);
}
static ATerm x_7 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm d_3, ATerm t)
{
  t = z_2;
  t = fetch_1_0(v_0, t);
  t = z_2;
  {
    ATerm x_4 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_4;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, x_2, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, y_2)), (ATerm) ATmakeAppl(sym_attrs_1, z_2));
  return(t);
}
static ATerm v_0 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
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
static ATerm i_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
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
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm i_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,x_3 = NULL,a_4 = NULL;
  r_3 = t;
  if(match_cons(t, sym_prod_3))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
      x_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_3;
  if(match_cons(t, sym_attrs_1))
    {
      a_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_3;
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
            t = t_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_3 = ATgetFirst((ATermList) t);
                n_3 = (ATerm) ATgetNext((ATermList) t);
                t = n_3;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = i_3;
                    {
                      ATerm b_5 = t;
                      int c_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm d_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(c_5);
                          {
                            ATerm e_5 = t;
                            int f_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_4;
                                t = fetch_1_0(w_0, t);
                                t = r_3;
                                LocalPopChoice(f_5);
                              }
                            else
                              {
                                t = e_5;
                                {
                                  ATerm g_5 = t;
                                  int h_5 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_4;
                                      t = fetch_1_0(y_0, t);
                                      t = r_3;
                                      LocalPopChoice(h_5);
                                    }
                                  else
                                    {
                                      t = g_5;
                                      t = r_3;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = b_5;
                          {
                            ATerm i_5 = t;
                            int j_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_4;
                                t = fetch_1_0(d_1, t);
                                t = r_3;
                                LocalPopChoice(j_5);
                              }
                            else
                              {
                                t = i_5;
                                {
                                  ATerm k_5 = t;
                                  int l_5 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_4;
                                      t = fetch_1_0(e_1, t);
                                      t = r_3;
                                      LocalPopChoice(l_5);
                                    }
                                  else
                                    {
                                      t = k_5;
                                      t = a_4;
                                      t = fetch_1_0(f_1, t);
                                      t = r_3;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = i_3;
                    {
                      ATerm m_5 = t;
                      int n_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_4;
                          t = fetch_1_0(i_1, t);
                          t = r_3;
                          LocalPopChoice(n_5);
                        }
                      else
                        {
                          t = m_5;
                          {
                            ATerm o_5 = t;
                            int p_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_4;
                                t = fetch_1_0(j_1, t);
                                t = r_3;
                                LocalPopChoice(p_5);
                              }
                            else
                              {
                                t = o_5;
                                t = a_4;
                                t = fetch_1_0(k_1, t);
                                t = r_3;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm q_5 = t;
                int r_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_4;
                    t = fetch_1_0(l_1, t);
                    t = r_3;
                    LocalPopChoice(r_5);
                  }
                else
                  {
                    t = q_5;
                    {
                      ATerm s_5 = t;
                      int t_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_4;
                          t = fetch_1_0(n_1, t);
                          t = r_3;
                          LocalPopChoice(t_5);
                        }
                      else
                        {
                          t = s_5;
                          t = a_4;
                          t = fetch_1_0(o_1, t);
                          t = r_3;
                        }
                    }
                  }
              }
          }
        else
          {
            t = y_4;
            if(match_cons(t, sym_cf_1))
              {
                o_3 = ATgetArgument(t, 0);
                t = o_3;
                if(match_cons(t, sym_sort_1))
                  {
                    q_3 = ATgetArgument(t, 0);
                    t = t_3;
                    {
                      ATerm v_5 = t;
                      int w_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_4;
                          t = fetch_1_0(p_1, t);
                          t = r_3;
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
                                t = a_4;
                                t = fetch_1_0(q_1, t);
                                t = r_3;
                                LocalPopChoice(y_5);
                              }
                            else
                              {
                                t = x_5;
                                {
                                  ATerm z_5 = t;
                                  int a_6 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_7(t_3, q_3, a_4, r_3, t);
                                      LocalPopChoice(a_6);
                                    }
                                  else
                                    {
                                      t = z_5;
                                      t = a_4;
                                      t = fetch_1_0(r_1, t);
                                      t = r_3;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = t_3;
                    {
                      ATerm c_6 = t;
                      int d_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_4;
                          t = fetch_1_0(s_1, t);
                          t = r_3;
                          LocalPopChoice(d_6);
                        }
                      else
                        {
                          t = c_6;
                          {
                            ATerm e_6 = t;
                            int f_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_4;
                                t = fetch_1_0(t_1, t);
                                t = r_3;
                                LocalPopChoice(f_6);
                              }
                            else
                              {
                                t = e_6;
                                t = a_4;
                                t = fetch_1_0(u_1, t);
                                t = r_3;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = t_3;
                {
                  ATerm g_6 = t;
                  int h_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_4;
                      t = fetch_1_0(v_1, t);
                      t = r_3;
                      LocalPopChoice(h_6);
                    }
                  else
                    {
                      t = g_6;
                      {
                        ATerm i_6 = t;
                        int k_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = a_4;
                            t = fetch_1_0(x_1, t);
                            t = r_3;
                            LocalPopChoice(k_6);
                          }
                        else
                          {
                            t = i_6;
                            t = a_4;
                            t = fetch_1_0(y_1, t);
                            t = r_3;
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
      t = u_3;
      if(match_cons(t, sym_cf_1))
        {
          o_3 = ATgetArgument(t, 0);
          t = o_3;
          if(match_cons(t, sym_sort_1))
            {
              q_3 = ATgetArgument(t, 0);
              t = t_3;
              {
                ATerm l_6 = t;
                int n_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_4;
                    t = fetch_1_0(z_1, t);
                    t = r_3;
                    LocalPopChoice(n_6);
                  }
                else
                  {
                    t = l_6;
                    {
                      ATerm o_6 = t;
                      int p_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_4;
                          t = fetch_1_0(a_2, t);
                          t = r_3;
                          LocalPopChoice(p_6);
                        }
                      else
                        {
                          t = o_6;
                          {
                            ATerm q_6 = t;
                            int v_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_7(t_3, q_3, a_4, r_3, t);
                                LocalPopChoice(v_6);
                              }
                            else
                              {
                                t = q_6;
                                t = a_4;
                                t = fetch_1_0(b_2, t);
                                t = r_3;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = t_3;
              {
                ATerm w_6 = t;
                int x_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_4;
                    t = fetch_1_0(c_2, t);
                    t = r_3;
                    LocalPopChoice(x_6);
                  }
                else
                  {
                    t = w_6;
                    {
                      ATerm y_6 = t;
                      int z_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_4;
                          t = fetch_1_0(d_2, t);
                          t = r_3;
                          LocalPopChoice(z_6);
                        }
                      else
                        {
                          t = y_6;
                          t = a_4;
                          t = fetch_1_0(e_2, t);
                          t = r_3;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = t_3;
          {
            ATerm a_7 = t;
            int b_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_4;
                t = fetch_1_0(g_2, t);
                t = r_3;
                LocalPopChoice(b_7);
              }
            else
              {
                t = a_7;
                {
                  ATerm c_7 = t;
                  int d_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_4;
                      t = fetch_1_0(h_2, t);
                      t = r_3;
                      LocalPopChoice(d_7);
                    }
                  else
                    {
                      t = c_7;
                      t = a_4;
                      t = fetch_1_0(i_2, t);
                      t = r_3;
                    }
                }
              }
          }
        }
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = try_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm y_7 = NULL;
  y_7 = t;
  {
    ATerm e_7 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_7;
      }
  }
  t = (ATerm) ATinsert(ATempty, y_7);
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(j_2, t);
  t = concat_0_0(t);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,f_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8;
  if(match_cons(t, sym_alt_2))
    {
      c_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      {
        ATerm f_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, c_8, d_8);
            t = flat_alt_0_0(t);
            k_8 = t;
            t = (ATerm) ATinsert(CheckATermList(k_8), f_8);
            LocalPopChoice(h_7);
          }
        else
          {
            t = f_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, g_8), f_8);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, g_8), f_8);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = topdown_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = try_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,b_0 = NULL;
  n_12 = t;
  if(match_cons(t, sym_Arg_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, m_12);
  b_0 = t;
  t = SSLsetAnnotations(b_0, l_12);
  t = term_j_7;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = _2_0(_id, r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          t_12 = ATgetArgument(t, 0);
          u_12 = ATgetArgument(t, 1);
          {
            ATerm m_7 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_7);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, t_12, u_12);
    }
  else
    {
      t = k_7;
      if(match_cons(t, sym_iter_n_2))
        {
          t_12 = ATgetArgument(t, 0);
          {
            ATerm n_7 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, t_12);
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm i_21 (ATerm), ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,m_10 = NULL;
  static ATerm a_14 (ATerm t);
  static ATerm a_14 (ATerm t)
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_10 = NULL,m_11 = NULL,w_11 = NULL,x_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
        if(match_cons(t, sym__2))
          {
            x_10 = ATgetArgument(t, 0);
            x_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_11;
        {
          ATerm q_7 = t;
          int r_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lit_1))
                {
                  ATerm s_7 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(r_7);
              t = (ATerm) ATempty;
            }
          else
            {
              t = q_7;
              if(match_cons(t, sym__2))
                {
                  a_12 = ATgetArgument(t, 0);
                  b_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_12;
              {
                ATerm t_7 = t;
                int u_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm v_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_7);
                    t = (ATerm) ATempty;
                  }
                else
                  {
                    t = t_7;
                    {
                      ATerm w_7 = t;
                      int z_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm e_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_7);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = w_7;
                          {
                            ATerm j_12 = NULL,k_12 = NULL;
                            if(match_cons(t, sym_alt_2))
                              {
                                c_12 = ATgetArgument(t, 0);
                                d_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = x_10;
                            if(match_cons(t, sym__2))
                              {
                                m_11 = ATgetArgument(t, 0);
                                w_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = d_12;
                            if(match_cons(t, sym_alt_2))
                              {
                                e_12 = ATgetArgument(t, 0);
                                f_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = m_11;
                            if(((l_9 != NULL) && (l_9 != t)))
                              _fail(t);
                            else
                              l_9 = t;
                            t = w_11;
                            if(((m_9 != NULL) && (m_9 != t)))
                              _fail(t);
                            else
                              m_9 = t;
                            t = a_12;
                            if(((m_10 != NULL) && (m_10 != t)))
                              _fail(t);
                            else
                              m_10 = t;
                            t = (ATerm) ATmakeAppl(sym_alt_2, c_12, (ATerm) ATmakeAppl(sym_alt_2, e_12, f_12));
                            t = flat_alt_0_0(t);
                            j_12 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_h_8, j_12);
                            t = mkterm_0_0(t);
                            k_12 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_11, w_11), (ATerm) ATmakeAppl(sym__2, a_12, k_12));
                            t = a_14(t);
                            t = Cons_2_0(n_2, _id, t);
                          }
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        {
          ATerm i_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(_id, q_2, t);
              t = a_14(t);
              LocalPopChoice(j_8);
            }
          else
            {
              t = i_8;
              {
                static ATerm b_14 (ATerm y_12, ATerm z_12, ATerm a_13, ATerm b_13, ATerm c_13, ATerm t);
                static ATerm b_14 (ATerm y_12, ATerm z_12, ATerm a_13, ATerm b_13, ATerm c_13, ATerm t)
                {
                  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
                  t = SSL_explode_term(b_13);
                  if(match_cons(t, sym__2))
                    {
                      j_13 = ATgetArgument(t, 0);
                      k_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, z_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, a_13, j_13)));
                  t = conc_0_0(t);
                  f_13 = t;
                  t = k_13;
                  t = argument_list_0_0(t);
                  t = number_nonterminals_0_0(t);
                  l_13 = t;
                  t = make_0_0(t);
                  g_13 = t;
                  t = l_13;
                  {
                    static ATerm s_2 (ATerm t);
                    static ATerm s_2 (ATerm t)
                    {
                      ATerm n_13 = NULL;
                      n_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_12, f_13), n_13);
                      t = a_14(t);
                      return(t);
                    }
                    t = map_1_0(s_2, t);
                  }
                  t = concat_0_0(t);
                  h_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_13), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, y_12, f_13), g_13));
                  return(t);
                }
                ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
                p_13 = t;
                if(match_cons(t, sym__2))
                  {
                    q_13 = ATgetArgument(t, 0);
                    t_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_13;
                if(match_cons(t, sym__2))
                  {
                    r_13 = ATgetArgument(t, 0);
                    s_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_13;
                if(match_cons(t, sym__2))
                  {
                    u_13 = ATgetArgument(t, 0);
                    v_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_13;
                if(match_cons(t, sym_bracket_symbol_1))
                  {
                    o_13 = ATgetArgument(t, 0);
                    {
                      ATerm l_8 = t;
                      int m_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_13, s_13), (ATerm) ATmakeAppl(sym__2, u_13, o_13));
                          t = a_14(t);
                          LocalPopChoice(m_8);
                        }
                      else
                        {
                          t = l_8;
                          t = b_14(r_13, s_13, u_13, v_13, p_13, t);
                        }
                    }
                  }
                else
                  {
                    t = b_14(r_13, s_13, u_13, v_13, p_13, t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm l_2 (ATerm t);
  static ATerm l_2 (ATerm t)
  {
    t = term_p_4;
    t = i_21(t);
    return(t);
  }
  t = split_2_0(l_2, _id, t);
  t = a_14(t);
  return(t);
}
ATerm pair_0_0 (ATerm t)
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
      {
        ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,m_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_14 = ATgetFirst((ATermList) t);
            g_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_14;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_14 = ATgetFirst((ATermList) t);
            i_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_14;
        t = pair_0_0(t);
        m_14 = t;
        t = (ATerm) ATinsert(CheckATermList(m_14), (ATerm) ATmakeAppl(sym__2, f_14, h_14));
      }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_16 = NULL;
  t = _2_0(_id, v_2, t);
  if(match_cons(t, sym_lit_1))
    {
      o_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, o_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          o_16 = ATgetArgument(t, 0);
          {
            ATerm q_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, o_16);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = map_1_0(b_3, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  if(match_cons(t, sym_iter_1))
    {
      l_16 = ATgetArgument(t, 0);
      {
        ATerm e_0 = NULL,f_0 = NULL;
        t = SSLgetAnnotations(k_16);
        e_0 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, l_16);
        f_0 = t;
        t = SSLsetAnnotations(f_0, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          l_16 = ATgetArgument(t, 0);
          {
            ATerm x_0 = NULL,g_0 = NULL;
            t = SSLgetAnnotations(k_16);
            x_0 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, l_16);
            g_0 = t;
            t = SSLsetAnnotations(g_0, x_0);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              l_16 = ATgetArgument(t, 0);
              m_16 = ATgetArgument(t, 1);
              {
                ATerm m_1 = NULL,l_0 = NULL;
                t = SSLgetAnnotations(k_16);
                m_1 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, l_16, m_16);
                l_0 = t;
                t = SSLsetAnnotations(l_0, m_1);
              }
            }
          else
            {
              ATerm w_1 = NULL,o_0 = NULL;
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  l_16 = ATgetArgument(t, 0);
                  m_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_16);
              w_1 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, l_16, m_16);
              o_0 = t;
              t = SSLsetAnnotations(o_0, w_1);
            }
        }
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,w_16 = NULL,q_0 = NULL;
  u_16 = t;
  if(match_cons(t, sym_lit_1))
    {
      t_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, t_16);
  q_0 = t;
  t = SSLsetAnnotations(q_0, s_16);
  if(match_cons(t, sym_lit_1))
    {
      w_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, w_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          w_16 = ATgetArgument(t, 0);
          {
            ATerm r_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, w_16);
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  static ATerm g_3 (ATerm t);
  static ATerm h_3 (ATerm t);
  static ATerm g_3 (ATerm t)
  {
    ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,m_17 = NULL,s_0 = NULL;
    k_17 = t;
    if(match_cons(t, sym_lit_1))
      {
        j_17 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_17);
    i_17 = t;
    t = (ATerm) ATmakeAppl(sym_lit_1, j_17);
    s_0 = t;
    t = SSLsetAnnotations(s_0, i_17);
    if(match_cons(t, sym_lit_1))
      {
        m_17 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, m_17));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            m_17 = ATgetArgument(t, 0);
            {
              ATerm w_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, m_17);
      }
    if(((g_17 != NULL) && (g_17 != t)))
      _fail(t);
    else
      g_17 = t;
    return(t);
  }
  static ATerm h_3 (ATerm t)
  {
    ATerm e_18 = NULL;
    t = _2_0(_id, j_3, t);
    if(match_cons(t, sym_lit_1))
      {
        e_18 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, e_18));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            e_18 = ATgetArgument(t, 0);
            {
              ATerm x_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, e_18);
      }
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    return(t);
  }
  t = _2_0(g_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_a_9), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_17)), not_null(g_17)));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym_iter_1))
    {
      c_18 = ATgetArgument(t, 0);
      {
        ATerm f_2 = NULL,t_0 = NULL;
        t = SSLgetAnnotations(b_18);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, c_18);
        t_0 = t;
        t = SSLsetAnnotations(t_0, f_2);
      }
    }
  else
    {
      ATerm m_2 = NULL,u_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          c_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_18);
      m_2 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, c_18);
      u_6 = t;
      t = SSLsetAnnotations(u_6, m_2);
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm j_18 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      j_18 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, j_18));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          j_18 = ATgetArgument(t, 0);
          {
            ATerm b_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, j_18);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_15 = NULL;
      t = reverse_0_0(t);
      t = Cons_2_0(t_2, u_2, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_15 = ATgetFirst((ATermList) t);
          f_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_9 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, Nil_0_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_9;
          }
      }
      t = f_15;
      t = reverse_0_0(t);
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_15), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, k_15)));
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_0_0(t);
            {
              static ATerm c_3 (ATerm t);
              static ATerm e_3 (ATerm t);
              static ATerm c_3 (ATerm t)
              {
                ATerm c_17 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    c_17 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_8, (ATerm) ATmakeAppl(sym_S_1, c_17));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        c_17 = ATgetArgument(t, 0);
                        {
                          ATerm h_9 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, c_17);
                  }
                if(((j_15 != NULL) && (j_15 != t)))
                  _fail(t);
                else
                  j_15 = t;
                return(t);
              }
              static ATerm e_3 (ATerm t)
              {
                ATerm i_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_9;
                  }
                t = reverse_0_0(t);
                if(((h_15 != NULL) && (h_15 != t)))
                  _fail(t);
                else
                  h_15 = t;
                return(t);
              }
              t = Cons_2_0(c_3, e_3, t);
            }
            t = not_null(h_15);
            t = pair_0_0(t);
            t = map_1_0(f_3, t);
            i_15 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_15)), i_15));
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            t = map_1_0(k_3, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm j_9 = t;
  if((PushChoice() == 0))
    {
      ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,g_7 = NULL;
      v_18 = t;
      if(match_cons(t, sym_lit_1))
        {
          u_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_18);
      t_18 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, u_18);
      g_7 = t;
      t = SSLsetAnnotations(g_7, t_18);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_9;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm number_node_1_0 (ATerm l_21 (ATerm), ATerm t)
{
  static ATerm n_19 (ATerm t);
  static ATerm n_19 (ATerm t)
  {
    ATerm k_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(_id, Nil_0_0, t);
        t = (ATerm) ATempty;
        LocalPopChoice(n_9);
      }
    else
      {
        t = k_9;
        {
          ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
          if(match_cons(t, sym__2))
            {
              g_19 = ATgetArgument(t, 0);
              h_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_19;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_19 = ATgetFirst((ATermList) t);
              j_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm o_9 = t;
            int p_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_19 = NULL,l_19 = NULL;
                t = i_19;
                t = l_21(t);
                t = (ATerm) ATmakeAppl(sym__2, g_19, term_i_7);
                t = add_0_0(t);
                l_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_19, j_19);
                t = n_19(t);
                k_19 = t;
                t = (ATerm) ATinsert(CheckATermList(k_19), (ATerm) ATmakeAppl(sym__2, g_19, i_19));
                LocalPopChoice(p_9);
              }
            else
              {
                t = o_9;
                {
                  ATerm m_19 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, g_19, j_19);
                  t = n_19(t);
                  m_19 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_19), i_19);
                }
              }
          }
        }
      }
    return(t);
  }
  t = split_2_0(l_3, _id, t);
  t = n_19(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = try_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm o_19 = NULL;
  if(match_cons(t, sym_label_2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_19;
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(p_3, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm h_21 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  t = number_nonterminals_0_0(t);
  s_19 = t;
  t = make_0_0(t);
  p_19 = t;
  t = s_19;
  {
    static ATerm y_3 (ATerm t);
    static ATerm y_3 (ATerm t)
    {
      static ATerm z_3 (ATerm t);
      static ATerm z_3 (ATerm t)
      {
        ATerm t_19 = NULL;
        t = term_p_4;
        t = h_21(t);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_19, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(z_3, t);
      return(t);
    }
    t = map_1_0(y_3, t);
  }
  t = concat_0_0(t);
  q_19 = t;
  t = term_p_4;
  t = h_21(t);
  r_19 = t;
  t = (ATerm) ATinsert(CheckATermList(q_19), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, r_19), p_19));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym_term_1))
    {
      k_20 = ATgetArgument(t, 0);
      t = k_20;
      if(match_cons(t, sym_appl_2))
        {
          i_20 = ATgetArgument(t, 0);
          d_20 = ATgetArgument(t, 1);
          t = i_20;
          if(match_cons(t, sym_uqlit_1))
            {
              c_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_20;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
            _fail(t);
          t = d_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_20 = ATgetFirst((ATermList) t);
              h_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_20;
          if(match_cons(t, sym_fun_1))
            {
              f_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_20;
          if(match_cons(t, sym_qlit_1))
            {
              g_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_20;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_20;
          t = un_double_quote_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              i_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_20;
        }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          k_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_20;
    }
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(b_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm r_9 = t;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(e_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_9;
    }
  t = missing_constructor_warning_0_0(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  y_20 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
      b_21 = ATgetArgument(t, 2);
      x_20 = ATgetArgument(t, 3);
      {
        ATerm g_21 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_9)), a_21), (ATerm) ATinsert(ATinsert(ATempty, term_u_9), (ATerm) ATmakeAppl(sym_lit_1, z_20)));
        t = concat_0_0(t);
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, g_21, b_21, x_20);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm w_2 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          z_20 = ATgetArgument(t, 0);
          {
            ATerm x_9 = ATgetArgument(t, 1);
          }
          b_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_20;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 = NULL;
            t = b_21;
            if(match_cons(t, sym_attrs_1))
              {
                a_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_3;
            t = get_cnstr_name_0_0(t);
            w_2 = t;
            LocalPopChoice(z_9);
            {
              static ATerm c_4 (ATerm t);
              static ATerm c_4 (ATerm t)
              {
                t = w_2;
                return(t);
              }
              t = z_20;
              t = symbols2pp_entries_1_0(c_4, t);
            }
          }
        else
          {
            t = y_9;
            {
              ATerm a_10 = t;
              int b_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(b_10);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = a_10;
                  t = try_1_0(d_4, t);
                  t = (ATerm) ATempty;
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm a_22 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      a_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_22;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = try_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  if(match_cons(t, sym_cons_1))
    {
      u_22 = ATgetArgument(t, 0);
      {
        ATerm m_3 = NULL,v_3 = NULL,s_8 = NULL;
        t = SSLgetAnnotations(t_22);
        m_3 = t;
        t = u_22;
        t = un_double_quote_0_0(t);
        v_3 = t;
        t = (ATerm) ATmakeAppl(sym_cons_1, v_3);
        s_8 = t;
        t = SSLsetAnnotations(s_8, m_3);
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          u_22 = ATgetArgument(t, 0);
          t = u_22;
          if(match_cons(t, sym_qlit_1))
            {
              v_22 = ATgetArgument(t, 0);
              {
                ATerm c_10 = t;
                int d_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_23(t_22, u_22, t);
                    LocalPopChoice(d_10);
                  }
                else
                  {
                    t = c_10;
                    {
                      ATerm x_22 = NULL;
                      t = v_22;
                      t = un_double_quote_0_0(t);
                      x_22 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, x_22);
                    }
                  }
              }
            }
          else
            {
              t = w_23(t_22, u_22, t);
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              u_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_23(t_22, u_22, t);
        }
    }
  return(t);
}
static ATerm w_23 (ATerm h_22, ATerm i_22, ATerm t)
{
  ATerm j_22 = NULL,l_22 = NULL,a_8 = NULL;
  t = SSLgetAnnotations(h_22);
  j_22 = t;
  t = i_22;
  t = un_double_quote_0_0(t);
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, l_22);
  a_8 = t;
  t = SSLsetAnnotations(a_8, j_22);
  return(t);
}
static ATerm x_23 (ATerm n_22, ATerm o_22, ATerm t)
{
  ATerm p_22 = NULL,r_22 = NULL,b_8 = NULL;
  t = SSLgetAnnotations(n_22);
  p_22 = t;
  t = o_22;
  t = un_double_quote_0_0(t);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, r_22);
  b_8 = t;
  t = SSLsetAnnotations(b_8, p_22);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm e_10 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_10;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = try_1_0(l_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  t_23 = t;
  if(match_cons(t, sym_Arg_1))
    {
      u_23 = ATgetArgument(t, 0);
      {
        ATerm h_4 = NULL,n_4 = NULL,t_8 = NULL;
        t = SSLgetAnnotations(t_23);
        h_4 = t;
        t = u_23;
        t = int_to_string_0_0(t);
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, n_4);
        t_8 = t;
        t = SSLsetAnnotations(t_8, h_4);
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          u_23 = ATgetArgument(t, 0);
          s_23 = ATgetArgument(t, 1);
          {
            ATerm u_5 = NULL,b_6 = NULL,u_8 = NULL;
            t = SSLgetAnnotations(t_23);
            u_5 = t;
            t = u_23;
            t = int_to_string_0_0(t);
            b_6 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, b_6, s_23);
            u_8 = t;
            t = SSLsetAnnotations(u_8, u_5);
          }
        }
      else
        {
          ATerm j_6 = NULL,m_6 = NULL,v_8 = NULL;
          if(match_cons(t, sym_S_1))
            {
              u_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_23);
          j_6 = t;
          t = u_23;
          t = double_quote_0_0(t);
          m_6 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, m_6);
          v_8 = t;
          t = SSLsetAnnotations(v_8, j_6);
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm z_21 = NULL;
  t = collect_1_0(f_4, t);
  t = concat_0_0(t);
  t = topdown_1_0(g_4, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(j_4, t);
  t = concat_0_0(t);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, z_21);
  t = topdown_1_0(k_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  t = ppgenerate_0_0(t);
  t_6 = t;
  t = term_f_10;
  r_6 = t;
  t = (ATerm) ATinsert(ATempty, t_6);
  s_6 = t;
  t = SSL_mkterm(r_6, s_6);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_1_0(m_4, t);
  return(t);
}

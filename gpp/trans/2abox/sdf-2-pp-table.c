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
ATerm term_c_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_o_8;
ATerm term_g_8;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_q_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_n_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Arg_1, term_h_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_SOpt_2, term_x_8, term_y_8);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_lit_1, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_lit_1, term_s_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm double_quote_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_98 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm y_84 (ATerm), ATerm t);
ATerm say_1_0 (ATerm m_84 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm q_21 (ATerm), ATerm t);
static ATerm d_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_108 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm l_109 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm a_90 (ATerm), ATerm t);
static ATerm w_7 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm d_3, ATerm t);
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
ATerm symbol2abox_1_0 (ATerm g_21 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
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
ATerm _2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t);
ATerm split_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
ATerm number_node_1_0 (ATerm j_21 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm f_21 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm c_90 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm collect_1_0 (ATerm x_95 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm v_23 (ATerm g_22, ATerm h_22, ATerm t);
static ATerm w_23 (ATerm m_22, ATerm n_22, ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm ppgenerate_0_0 (ATerm t);
ATerm io_wrap_1_0 (ATerm y_110 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
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
  t = term_n_4;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm q_21 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
    t = term_o_4;
    t = pass_verbose_0_0(t);
    a_1 = t;
    t = term_o_4;
    t = q_21(t);
    t = map_1_0(xtc_find_0_0, t);
    c_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_4, c_1);
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
  t = term_q_4;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_r_4;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_4);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_t_4;
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
  t = term_u_4;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_v_4;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(k_0, t);
  t = say_1_0(r_0, t);
  t = debug_1_0(u_0, t);
  return(t);
}
static ATerm w_7 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm d_3, ATerm t)
{
  t = z_2;
  t = fetch_1_0(v_0, t);
  t = z_2;
  {
    ATerm w_4 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_4;
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
  ATerm i_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,x_3 = NULL,z_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_prod_3))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
      x_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_3;
  if(match_cons(t, sym_attrs_1))
    {
      z_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_3;
      {
        ATerm x_4 = t;
        int y_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm z_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(y_4);
            t = s_3;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_3 = ATgetFirst((ATermList) t);
                n_3 = (ATerm) ATgetNext((ATermList) t);
                t = n_3;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = i_3;
                    {
                      ATerm a_5 = t;
                      int b_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm c_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_5);
                          {
                            ATerm d_5 = t;
                            int e_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_3;
                                t = fetch_1_0(w_0, t);
                                t = r_3;
                                LocalPopChoice(e_5);
                              }
                            else
                              {
                                t = d_5;
                                {
                                  ATerm f_5 = t;
                                  int g_5 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_3;
                                      t = fetch_1_0(y_0, t);
                                      t = r_3;
                                      LocalPopChoice(g_5);
                                    }
                                  else
                                    {
                                      t = f_5;
                                      t = r_3;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = a_5;
                          {
                            ATerm h_5 = t;
                            int i_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_3;
                                t = fetch_1_0(d_1, t);
                                t = r_3;
                                LocalPopChoice(i_5);
                              }
                            else
                              {
                                t = h_5;
                                {
                                  ATerm j_5 = t;
                                  int k_5 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_3;
                                      t = fetch_1_0(e_1, t);
                                      t = r_3;
                                      LocalPopChoice(k_5);
                                    }
                                  else
                                    {
                                      t = j_5;
                                      t = z_3;
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
                      ATerm l_5 = t;
                      int m_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_3;
                          t = fetch_1_0(i_1, t);
                          t = r_3;
                          LocalPopChoice(m_5);
                        }
                      else
                        {
                          t = l_5;
                          {
                            ATerm n_5 = t;
                            int o_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_3;
                                t = fetch_1_0(j_1, t);
                                t = r_3;
                                LocalPopChoice(o_5);
                              }
                            else
                              {
                                t = n_5;
                                t = z_3;
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
                ATerm p_5 = t;
                int q_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_3;
                    t = fetch_1_0(l_1, t);
                    t = r_3;
                    LocalPopChoice(q_5);
                  }
                else
                  {
                    t = p_5;
                    {
                      ATerm r_5 = t;
                      int s_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_3;
                          t = fetch_1_0(n_1, t);
                          t = r_3;
                          LocalPopChoice(s_5);
                        }
                      else
                        {
                          t = r_5;
                          t = z_3;
                          t = fetch_1_0(o_1, t);
                          t = r_3;
                        }
                    }
                  }
              }
          }
        else
          {
            t = x_4;
            if(match_cons(t, sym_cf_1))
              {
                o_3 = ATgetArgument(t, 0);
                t = o_3;
                if(match_cons(t, sym_sort_1))
                  {
                    q_3 = ATgetArgument(t, 0);
                    t = s_3;
                    {
                      ATerm u_5 = t;
                      int v_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_3;
                          t = fetch_1_0(p_1, t);
                          t = r_3;
                          LocalPopChoice(v_5);
                        }
                      else
                        {
                          t = u_5;
                          {
                            ATerm w_5 = t;
                            int x_5 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_3;
                                t = fetch_1_0(q_1, t);
                                t = r_3;
                                LocalPopChoice(x_5);
                              }
                            else
                              {
                                t = w_5;
                                {
                                  ATerm y_5 = t;
                                  int z_5 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = w_7(s_3, q_3, z_3, r_3, t);
                                      LocalPopChoice(z_5);
                                    }
                                  else
                                    {
                                      t = y_5;
                                      t = z_3;
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
                    t = s_3;
                    {
                      ATerm b_6 = t;
                      int c_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_3;
                          t = fetch_1_0(s_1, t);
                          t = r_3;
                          LocalPopChoice(c_6);
                        }
                      else
                        {
                          t = b_6;
                          {
                            ATerm d_6 = t;
                            int e_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_3;
                                t = fetch_1_0(t_1, t);
                                t = r_3;
                                LocalPopChoice(e_6);
                              }
                            else
                              {
                                t = d_6;
                                t = z_3;
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
                t = s_3;
                {
                  ATerm f_6 = t;
                  int g_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_3;
                      t = fetch_1_0(v_1, t);
                      t = r_3;
                      LocalPopChoice(g_6);
                    }
                  else
                    {
                      t = f_6;
                      {
                        ATerm h_6 = t;
                        int j_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = z_3;
                            t = fetch_1_0(x_1, t);
                            t = r_3;
                            LocalPopChoice(j_6);
                          }
                        else
                          {
                            t = h_6;
                            t = z_3;
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
      t = t_3;
      if(match_cons(t, sym_cf_1))
        {
          o_3 = ATgetArgument(t, 0);
          t = o_3;
          if(match_cons(t, sym_sort_1))
            {
              q_3 = ATgetArgument(t, 0);
              t = s_3;
              {
                ATerm k_6 = t;
                int m_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_3;
                    t = fetch_1_0(z_1, t);
                    t = r_3;
                    LocalPopChoice(m_6);
                  }
                else
                  {
                    t = k_6;
                    {
                      ATerm n_6 = t;
                      int o_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_3;
                          t = fetch_1_0(a_2, t);
                          t = r_3;
                          LocalPopChoice(o_6);
                        }
                      else
                        {
                          t = n_6;
                          {
                            ATerm p_6 = t;
                            int u_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_7(s_3, q_3, z_3, r_3, t);
                                LocalPopChoice(u_6);
                              }
                            else
                              {
                                t = p_6;
                                t = z_3;
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
              t = s_3;
              {
                ATerm v_6 = t;
                int w_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_3;
                    t = fetch_1_0(c_2, t);
                    t = r_3;
                    LocalPopChoice(w_6);
                  }
                else
                  {
                    t = v_6;
                    {
                      ATerm x_6 = t;
                      int y_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_3;
                          t = fetch_1_0(d_2, t);
                          t = r_3;
                          LocalPopChoice(y_6);
                        }
                      else
                        {
                          t = x_6;
                          t = z_3;
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
          t = s_3;
          {
            ATerm z_6 = t;
            int a_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_3;
                t = fetch_1_0(g_2, t);
                t = r_3;
                LocalPopChoice(a_7);
              }
            else
              {
                t = z_6;
                {
                  ATerm b_7 = t;
                  int c_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_3;
                      t = fetch_1_0(h_2, t);
                      t = r_3;
                      LocalPopChoice(c_7);
                    }
                  else
                    {
                      t = b_7;
                      t = z_3;
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
    ATerm d_7 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_7;
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
  ATerm b_8 = NULL,c_8 = NULL,e_8 = NULL,f_8 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8;
  if(match_cons(t, sym_alt_2))
    {
      b_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
      {
        ATerm e_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, b_8, c_8);
            t = flat_alt_0_0(t);
            j_8 = t;
            t = (ATerm) ATinsert(CheckATermList(j_8), e_8);
            LocalPopChoice(g_7);
          }
        else
          {
            t = e_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, f_8), e_8);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, f_8), e_8);
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
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,b_0 = NULL;
  m_12 = t;
  if(match_cons(t, sym_Arg_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_12);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, l_12);
  b_0 = t;
  t = SSLsetAnnotations(b_0, k_12);
  t = term_i_7;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = _2_0(_id, r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          s_12 = ATgetArgument(t, 0);
          t_12 = ATgetArgument(t, 1);
          {
            ATerm l_7 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_7);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, s_12, t_12);
    }
  else
    {
      t = j_7;
      if(match_cons(t, sym_iter_n_2))
        {
          s_12 = ATgetArgument(t, 0);
          {
            ATerm m_7 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, s_12);
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm g_21 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,s_10 = NULL;
  static ATerm z_13 (ATerm t);
  static ATerm z_13 (ATerm t)
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,u_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
        if(match_cons(t, sym__2))
          {
            t_11 = ATgetArgument(t, 0);
            y_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_11;
        {
          ATerm p_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lit_1))
                {
                  ATerm r_7 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(q_7);
              t = (ATerm) ATempty;
            }
          else
            {
              t = p_7;
              if(match_cons(t, sym__2))
                {
                  z_11 = ATgetArgument(t, 0);
                  a_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_12;
              {
                ATerm s_7 = t;
                int t_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm u_7 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_7);
                    t = (ATerm) ATempty;
                  }
                else
                  {
                    t = s_7;
                    {
                      ATerm v_7 = t;
                      int x_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm d_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(x_7);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = v_7;
                          {
                            ATerm i_12 = NULL,j_12 = NULL;
                            if(match_cons(t, sym_alt_2))
                              {
                                b_12 = ATgetArgument(t, 0);
                                c_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = t_11;
                            if(match_cons(t, sym__2))
                              {
                                u_11 = ATgetArgument(t, 0);
                                x_11 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = c_12;
                            if(match_cons(t, sym_alt_2))
                              {
                                d_12 = ATgetArgument(t, 0);
                                e_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = u_11;
                            if(((j_10 != NULL) && (j_10 != t)))
                              _fail(t);
                            else
                              j_10 = t;
                            t = x_11;
                            if(((k_10 != NULL) && (k_10 != t)))
                              _fail(t);
                            else
                              k_10 = t;
                            t = z_11;
                            if(((s_10 != NULL) && (s_10 != t)))
                              _fail(t);
                            else
                              s_10 = t;
                            t = (ATerm) ATmakeAppl(sym_alt_2, b_12, (ATerm) ATmakeAppl(sym_alt_2, d_12, e_12));
                            t = flat_alt_0_0(t);
                            i_12 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_g_8, i_12);
                            t = mkterm_0_0(t);
                            j_12 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_11, x_11), (ATerm) ATmakeAppl(sym__2, z_11, j_12));
                            t = z_13(t);
                            t = Cons_2_0(n_2, _id, t);
                          }
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(_id, q_2, t);
              t = z_13(t);
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              {
                static ATerm a_14 (ATerm x_12, ATerm y_12, ATerm z_12, ATerm a_13, ATerm b_13, ATerm t);
                static ATerm a_14 (ATerm x_12, ATerm y_12, ATerm z_12, ATerm a_13, ATerm b_13, ATerm t)
                {
                  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
                  t = SSL_explode_term(a_13);
                  if(match_cons(t, sym__2))
                    {
                      i_13 = ATgetArgument(t, 0);
                      j_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, y_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, z_12, i_13)));
                  t = conc_0_0(t);
                  e_13 = t;
                  t = j_13;
                  t = argument_list_0_0(t);
                  t = number_nonterminals_0_0(t);
                  k_13 = t;
                  t = make_0_0(t);
                  f_13 = t;
                  t = k_13;
                  {
                    static ATerm s_2 (ATerm t);
                    static ATerm s_2 (ATerm t)
                    {
                      ATerm m_13 = NULL;
                      m_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_12, e_13), m_13);
                      t = z_13(t);
                      return(t);
                    }
                    t = map_1_0(s_2, t);
                  }
                  t = concat_0_0(t);
                  g_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(g_13), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, x_12, e_13), f_13));
                  return(t);
                }
                ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
                o_13 = t;
                if(match_cons(t, sym__2))
                  {
                    p_13 = ATgetArgument(t, 0);
                    s_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_13;
                if(match_cons(t, sym__2))
                  {
                    q_13 = ATgetArgument(t, 0);
                    r_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_13;
                if(match_cons(t, sym__2))
                  {
                    t_13 = ATgetArgument(t, 0);
                    u_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_13;
                if(match_cons(t, sym_bracket_symbol_1))
                  {
                    n_13 = ATgetArgument(t, 0);
                    {
                      ATerm k_8 = t;
                      int l_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_13, r_13), (ATerm) ATmakeAppl(sym__2, t_13, n_13));
                          t = z_13(t);
                          LocalPopChoice(l_8);
                        }
                      else
                        {
                          t = k_8;
                          t = a_14(q_13, r_13, t_13, u_13, o_13, t);
                        }
                    }
                  }
                else
                  {
                    t = a_14(q_13, r_13, t_13, u_13, o_13, t);
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
    t = term_o_4;
    t = g_21(t);
    return(t);
  }
  t = split_2_0(l_2, _id, t);
  t = z_13(t);
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
        ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,l_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_14 = ATgetFirst((ATermList) t);
            f_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_14;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_14 = ATgetFirst((ATermList) t);
            h_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_14;
        t = pair_0_0(t);
        l_14 = t;
        t = (ATerm) ATinsert(CheckATermList(l_14), (ATerm) ATmakeAppl(sym__2, e_14, g_14));
      }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm n_16 = NULL;
  t = _2_0(_id, v_2, t);
  if(match_cons(t, sym_lit_1))
    {
      n_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, n_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          n_16 = ATgetArgument(t, 0);
          {
            ATerm p_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, n_16);
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
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym_iter_1))
    {
      k_16 = ATgetArgument(t, 0);
      {
        ATerm e_0 = NULL,f_0 = NULL;
        t = SSLgetAnnotations(j_16);
        e_0 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, k_16);
        f_0 = t;
        t = SSLsetAnnotations(f_0, e_0);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          k_16 = ATgetArgument(t, 0);
          {
            ATerm x_0 = NULL,g_0 = NULL;
            t = SSLgetAnnotations(j_16);
            x_0 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, k_16);
            g_0 = t;
            t = SSLsetAnnotations(g_0, x_0);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              k_16 = ATgetArgument(t, 0);
              l_16 = ATgetArgument(t, 1);
              {
                ATerm m_1 = NULL,l_0 = NULL;
                t = SSLgetAnnotations(j_16);
                m_1 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, k_16, l_16);
                l_0 = t;
                t = SSLsetAnnotations(l_0, m_1);
              }
            }
          else
            {
              ATerm w_1 = NULL,o_0 = NULL;
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  k_16 = ATgetArgument(t, 0);
                  l_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_16);
              w_1 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, k_16, l_16);
              o_0 = t;
              t = SSLsetAnnotations(o_0, w_1);
            }
        }
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,v_16 = NULL,q_0 = NULL;
  t_16 = t;
  if(match_cons(t, sym_lit_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, s_16);
  q_0 = t;
  t = SSLsetAnnotations(q_0, r_16);
  if(match_cons(t, sym_lit_1))
    {
      v_16 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, v_16));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          v_16 = ATgetArgument(t, 0);
          {
            ATerm q_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, v_16);
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  static ATerm g_3 (ATerm t);
  static ATerm h_3 (ATerm t);
  static ATerm g_3 (ATerm t)
  {
    ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL,s_0 = NULL;
    j_17 = t;
    if(match_cons(t, sym_lit_1))
      {
        i_17 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_17);
    h_17 = t;
    t = (ATerm) ATmakeAppl(sym_lit_1, i_17);
    s_0 = t;
    t = SSLsetAnnotations(s_0, h_17);
    if(match_cons(t, sym_lit_1))
      {
        l_17 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, l_17));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            l_17 = ATgetArgument(t, 0);
            {
              ATerm v_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, l_17);
      }
    if(((f_17 != NULL) && (f_17 != t)))
      _fail(t);
    else
      f_17 = t;
    return(t);
  }
  static ATerm h_3 (ATerm t)
  {
    ATerm d_18 = NULL;
    t = _2_0(_id, j_3, t);
    if(match_cons(t, sym_lit_1))
      {
        d_18 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, d_18));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            d_18 = ATgetArgument(t, 0);
            {
              ATerm w_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, d_18);
      }
    if(((g_17 != NULL) && (g_17 != t)))
      _fail(t);
    else
      g_17 = t;
    return(t);
  }
  t = _2_0(g_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_z_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_17)), not_null(f_17)));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_iter_1))
    {
      b_18 = ATgetArgument(t, 0);
      {
        ATerm f_2 = NULL,t_0 = NULL;
        t = SSLgetAnnotations(a_18);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, b_18);
        t_0 = t;
        t = SSLsetAnnotations(t_0, f_2);
      }
    }
  else
    {
      ATerm m_2 = NULL,t_6 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          b_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_18);
      m_2 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, b_18);
      t_6 = t;
      t = SSLsetAnnotations(t_6, m_2);
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm i_18 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      i_18 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, i_18));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm a_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, i_18);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 = NULL;
      t = reverse_0_0(t);
      t = Cons_2_0(t_2, u_2, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_15 = ATgetFirst((ATermList) t);
          e_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_9 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, Nil_0_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_9;
          }
      }
      t = e_15;
      t = reverse_0_0(t);
      j_15 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, f_15), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, j_15)));
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_0_0(t);
            {
              static ATerm c_3 (ATerm t);
              static ATerm e_3 (ATerm t);
              static ATerm c_3 (ATerm t)
              {
                ATerm b_17 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    b_17 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, b_17));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        b_17 = ATgetArgument(t, 0);
                        {
                          ATerm g_9 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, b_17);
                  }
                if(((i_15 != NULL) && (i_15 != t)))
                  _fail(t);
                else
                  i_15 = t;
                return(t);
              }
              static ATerm e_3 (ATerm t)
              {
                ATerm h_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_9;
                  }
                t = reverse_0_0(t);
                if(((g_15 != NULL) && (g_15 != t)))
                  _fail(t);
                else
                  g_15 = t;
                return(t);
              }
              t = Cons_2_0(c_3, e_3, t);
            }
            t = not_null(g_15);
            t = pair_0_0(t);
            t = map_1_0(f_3, t);
            h_15 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_15)), h_15));
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = map_1_0(k_3, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm i_9 = t;
  if((PushChoice() == 0))
    {
      ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,f_7 = NULL;
      u_18 = t;
      if(match_cons(t, sym_lit_1))
        {
          t_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_18);
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, t_18);
      f_7 = t;
      t = SSLsetAnnotations(f_7, s_18);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_9;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm number_node_1_0 (ATerm j_21 (ATerm), ATerm t)
{
  static ATerm m_19 (ATerm t);
  static ATerm m_19 (ATerm t)
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(_id, Nil_0_0, t);
        t = (ATerm) ATempty;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
          if(match_cons(t, sym__2))
            {
              f_19 = ATgetArgument(t, 0);
              g_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_19;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_19 = ATgetFirst((ATermList) t);
              i_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm l_9 = t;
            int m_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_19 = NULL,k_19 = NULL;
                t = h_19;
                t = j_21(t);
                t = (ATerm) ATmakeAppl(sym__2, f_19, term_h_7);
                t = add_0_0(t);
                k_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_19, i_19);
                t = m_19(t);
                j_19 = t;
                t = (ATerm) ATinsert(CheckATermList(j_19), (ATerm) ATmakeAppl(sym__2, f_19, h_19));
                LocalPopChoice(m_9);
              }
            else
              {
                t = l_9;
                {
                  ATerm l_19 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, f_19, i_19);
                  t = m_19(t);
                  l_19 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_19), h_19);
                }
              }
          }
        }
      }
    return(t);
  }
  t = split_2_0(l_3, _id, t);
  t = m_19(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = try_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm n_19 = NULL;
  if(match_cons(t, sym_label_2))
    {
      ATerm n_9 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_19;
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(p_3, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm f_21 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = number_nonterminals_0_0(t);
  r_19 = t;
  t = make_0_0(t);
  o_19 = t;
  t = r_19;
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      static ATerm y_3 (ATerm t);
      static ATerm y_3 (ATerm t)
      {
        ATerm s_19 = NULL;
        t = term_o_4;
        t = f_21(t);
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(y_3, t);
      return(t);
    }
    t = map_1_0(w_3, t);
  }
  t = concat_0_0(t);
  p_19 = t;
  t = term_o_4;
  t = f_21(t);
  q_19 = t;
  t = (ATerm) ATinsert(CheckATermList(p_19), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, q_19), o_19));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym_term_1))
    {
      j_20 = ATgetArgument(t, 0);
      t = j_20;
      if(match_cons(t, sym_appl_2))
        {
          h_20 = ATgetArgument(t, 0);
          c_20 = ATgetArgument(t, 1);
          t = h_20;
          if(match_cons(t, sym_uqlit_1))
            {
              b_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_20;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
            _fail(t);
          t = c_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_20 = ATgetFirst((ATermList) t);
              g_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_20;
          if(match_cons(t, sym_fun_1))
            {
              e_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_20;
          if(match_cons(t, sym_qlit_1))
            {
              f_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_20;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_20;
          t = un_double_quote_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              h_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_20;
        }
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
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(a_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm o_9 = t;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(d_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_9;
    }
  t = missing_constructor_warning_0_0(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  x_20 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
      a_21 = ATgetArgument(t, 2);
      w_20 = ATgetArgument(t, 3);
      {
        ATerm m_21 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_9)), z_20), (ATerm) ATinsert(ATinsert(ATempty, term_r_9), (ATerm) ATmakeAppl(sym_lit_1, y_20)));
        t = concat_0_0(t);
        m_21 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, m_21, a_21, w_20);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm w_2 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          y_20 = ATgetArgument(t, 0);
          {
            ATerm u_9 = ATgetArgument(t, 1);
          }
          a_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_20;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 = NULL;
            t = a_21;
            if(match_cons(t, sym_attrs_1))
              {
                a_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_3;
            t = get_cnstr_name_0_0(t);
            w_2 = t;
            LocalPopChoice(w_9);
            {
              static ATerm b_4 (ATerm t);
              static ATerm b_4 (ATerm t)
              {
                t = w_2;
                return(t);
              }
              t = y_20;
              t = symbols2pp_entries_1_0(b_4, t);
            }
          }
        else
          {
            t = v_9;
            {
              ATerm x_9 = t;
              int y_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(y_9);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = x_9;
                  t = try_1_0(c_4, t);
                  t = (ATerm) ATempty;
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm z_21 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_21;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = try_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  if(match_cons(t, sym_cons_1))
    {
      t_22 = ATgetArgument(t, 0);
      {
        ATerm m_3 = NULL,u_3 = NULL,r_8 = NULL;
        t = SSLgetAnnotations(s_22);
        m_3 = t;
        t = t_22;
        t = un_double_quote_0_0(t);
        u_3 = t;
        t = (ATerm) ATmakeAppl(sym_cons_1, u_3);
        r_8 = t;
        t = SSLsetAnnotations(r_8, m_3);
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          t_22 = ATgetArgument(t, 0);
          t = t_22;
          if(match_cons(t, sym_qlit_1))
            {
              u_22 = ATgetArgument(t, 0);
              {
                ATerm z_9 = t;
                int a_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_23(s_22, t_22, t);
                    LocalPopChoice(a_10);
                  }
                else
                  {
                    t = z_9;
                    {
                      ATerm w_22 = NULL;
                      t = u_22;
                      t = un_double_quote_0_0(t);
                      w_22 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, w_22);
                    }
                  }
              }
            }
          else
            {
              t = v_23(s_22, t_22, t);
            }
        }
      else
        {
          if(match_cons(t, sym_sort_1))
            {
              t_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_23(s_22, t_22, t);
        }
    }
  return(t);
}
static ATerm v_23 (ATerm g_22, ATerm h_22, ATerm t)
{
  ATerm i_22 = NULL,k_22 = NULL,z_7 = NULL;
  t = SSLgetAnnotations(g_22);
  i_22 = t;
  t = h_22;
  t = un_double_quote_0_0(t);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, k_22);
  z_7 = t;
  t = SSLsetAnnotations(z_7, i_22);
  return(t);
}
static ATerm w_23 (ATerm m_22, ATerm n_22, ATerm t)
{
  ATerm o_22 = NULL,q_22 = NULL,a_8 = NULL;
  t = SSLgetAnnotations(m_22);
  o_22 = t;
  t = n_22;
  t = un_double_quote_0_0(t);
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, q_22);
  a_8 = t;
  t = SSLsetAnnotations(a_8, o_22);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm b_10 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_10;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = try_1_0(k_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  s_23 = t;
  if(match_cons(t, sym_Arg_1))
    {
      t_23 = ATgetArgument(t, 0);
      {
        ATerm g_4 = NULL,m_4 = NULL,s_8 = NULL;
        t = SSLgetAnnotations(s_23);
        g_4 = t;
        t = t_23;
        t = int_to_string_0_0(t);
        m_4 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, m_4);
        s_8 = t;
        t = SSLsetAnnotations(s_8, g_4);
      }
    }
  else
    {
      if(match_cons(t, sym_selector_2))
        {
          t_23 = ATgetArgument(t, 0);
          r_23 = ATgetArgument(t, 1);
          {
            ATerm t_5 = NULL,a_6 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(s_23);
            t_5 = t;
            t = t_23;
            t = int_to_string_0_0(t);
            a_6 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, a_6, r_23);
            t_8 = t;
            t = SSLsetAnnotations(t_8, t_5);
          }
        }
      else
        {
          ATerm i_6 = NULL,l_6 = NULL,u_8 = NULL;
          if(match_cons(t, sym_S_1))
            {
              t_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_23);
          i_6 = t;
          t = t_23;
          t = double_quote_0_0(t);
          l_6 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, l_6);
          u_8 = t;
          t = SSLsetAnnotations(u_8, i_6);
        }
    }
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm y_21 = NULL;
  t = collect_1_0(e_4, t);
  t = concat_0_0(t);
  t = topdown_1_0(f_4, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(i_4, t);
  t = concat_0_0(t);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, y_21);
  t = topdown_1_0(j_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  t = ppgenerate_0_0(t);
  s_6 = t;
  t = term_c_10;
  q_6 = t;
  t = (ATerm) ATinsert(ATempty, s_6);
  r_6 = t;
  t = SSL_mkterm(q_6, r_6);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_1_0(l_4, t);
  return(t);
}

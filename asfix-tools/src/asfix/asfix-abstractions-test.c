#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_ConcLayout_1;
Symbol sym_id_1;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_seq_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_varsym_1;
Symbol sym_atr_1;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_parsetree_2;
Symbol sym_Character_1;
Symbol sym_range_2;
Symbol sym_CharRange_1;
Symbol sym_conc_ranges_2;
Symbol sym_no_charranges_0;
Symbol sym_CharRanges_1;
Symbol sym_simple_charclass_1;
Symbol sym_not_charclass_1;
Symbol sym_diff_charclass_2;
Symbol sym_and_charclass_2;
Symbol sym_or_charclass_2;
Symbol sym_NumChar_1;
Symbol sym_ShortChar_1;
Symbol sym_Character_dunno_a__0_0;
Symbol sym_Character_dunno_b__0_0;
Symbol sym_TagId_empty_0;
void init_constructors (void)
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_ConcLayout_1 = ATmakeSymbol("ConcLayout", 1, ATfalse);
  ATprotectSymbol(sym_ConcLayout_1);
  sym_id_1 = ATmakeSymbol("id", 1, ATfalse);
  ATprotectSymbol(sym_id_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_Character_1 = ATmakeSymbol("Character", 1, ATfalse);
  ATprotectSymbol(sym_Character_1);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_CharRange_1 = ATmakeSymbol("CharRange", 1, ATfalse);
  ATprotectSymbol(sym_CharRange_1);
  sym_conc_ranges_2 = ATmakeSymbol("conc-ranges", 2, ATfalse);
  ATprotectSymbol(sym_conc_ranges_2);
  sym_no_charranges_0 = ATmakeSymbol("no-charranges", 0, ATfalse);
  ATprotectSymbol(sym_no_charranges_0);
  sym_CharRanges_1 = ATmakeSymbol("CharRanges", 1, ATfalse);
  ATprotectSymbol(sym_CharRanges_1);
  sym_simple_charclass_1 = ATmakeSymbol("simple-charclass", 1, ATfalse);
  ATprotectSymbol(sym_simple_charclass_1);
  sym_not_charclass_1 = ATmakeSymbol("not-charclass", 1, ATfalse);
  ATprotectSymbol(sym_not_charclass_1);
  sym_diff_charclass_2 = ATmakeSymbol("diff-charclass", 2, ATfalse);
  ATprotectSymbol(sym_diff_charclass_2);
  sym_and_charclass_2 = ATmakeSymbol("and-charclass", 2, ATfalse);
  ATprotectSymbol(sym_and_charclass_2);
  sym_or_charclass_2 = ATmakeSymbol("or-charclass", 2, ATfalse);
  ATprotectSymbol(sym_or_charclass_2);
  sym_NumChar_1 = ATmakeSymbol("NumChar", 1, ATfalse);
  ATprotectSymbol(sym_NumChar_1);
  sym_ShortChar_1 = ATmakeSymbol("ShortChar", 1, ATfalse);
  ATprotectSymbol(sym_ShortChar_1);
  sym_Character_dunno_a__0_0 = ATmakeSymbol("Character-dunno-a_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_a__0_0);
  sym_Character_dunno_b__0_0 = ATmakeSymbol("Character-dunno-b_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_b__0_0);
  sym_TagId_empty_0 = ATmakeSymbol("TagId-empty", 0, ATfalse);
  ATprotectSymbol(sym_TagId_empty_0);
  init_constant_terms();
}
ATerm term_a_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_j_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded; result: ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_cf_1, term_d_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_opt_1, term_d_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_cf_1, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_lex_1, term_d_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATempty, term_g_7, term_h_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_appl_2, term_l_7, (ATerm) ATempty);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_range_2, term_n_7, term_j_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Layout", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_id_1, term_q_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test2e", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test2d", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test2c", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test1a", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_m_7);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("left", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_atr_1, term_u_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_m_7);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_u_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-abstractions-test", 0, ATtrue));
}
ATerm apply_and_show_3 (ATerm, ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm));
ATerm test4_0 (ATerm);
ATerm test3b_0 (ATerm);
ATerm test3a_0 (ATerm);
ATerm test2e_0 (ATerm);
ATerm test2d_0 (ATerm);
ATerm test2c_0 (ATerm);
ATerm test2b_0 (ATerm);
ATerm test2a_0 (ATerm);
ATerm test1a_0 (ATerm);
ATerm conc_layout3_0 (ATerm);
ATerm conc_layout2_0 (ATerm);
ATerm conc_layout1_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm q_53 (ATerm), ATerm r_53 (ATerm));
ATerm apply_test_4 (ATerm, ATerm u_53 (ATerm), ATerm v_53 (ATerm), ATerm w_53 (ATerm), ATerm x_53 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm g_44 (ATerm), ATerm h_44 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_54 (ATerm));
ATerm test_suite_2 (ATerm, ATerm o_53 (ATerm), ATerm p_53 (ATerm));
ATerm main_0 (ATerm);
ATerm apply_and_show_3 (ATerm t, ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    ATerm i_0 = NULL;
    ATerm m_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_54(t);
        t = n_54(t);
        ;
        LocalPopChoice(n_6);
      }
    else
      {
        t = m_6;
        {
          t = term_o_6;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      ATerm j_0 = NULL;
      j_0 = t;
      if(((i_0 != NULL) && (i_0 != j_0)))
        _fail(j_0);
      else
        i_0 = j_0;
      {
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_0)), term_t_6);
        t = debug_0(t);
      }
    }
    return(t);
  }
  t = do_test_2(t, m_54, a_0);
  return(t);
}
ATerm test4_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_u_6;
    return(t);
  }
  ATerm c_0 (ATerm t)
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        ;
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        {
          ATerm x_6 = t;
          int c_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              ;
              LocalPopChoice(c_7);
            }
          else
            {
              t = x_6;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm d_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_e_7), term_g_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_j_7))), term_i_7, term_h_7), (ATerm) ATinsert(ATempty, term_j_7)))))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_e_7), term_g_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_j_7))), term_i_7, term_h_7), (ATerm) ATinsert(ATempty, term_j_7)))))));
    return(t);
  }
  t = apply_and_show_3(t, b_0, c_0, d_0);
  return(t);
}
ATerm test3b_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))));
    return(t);
  }
  ATerm g_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, e_0, conc_layout2_0, f_0, g_0);
  return(t);
}
ATerm test3a_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = term_s_7;
    return(t);
  }
  ATerm k_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))), term_m_7);
    return(t);
  }
  ATerm l_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, h_0, conc_layout3_0, k_0, l_0);
  return(t);
}
ATerm test2e_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_t_7;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        {
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              ;
              LocalPopChoice(x_7);
            }
          else
            {
              t = w_7;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))), term_m_7);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, z_0, g_1, h_1, i_1);
  return(t);
}
ATerm test2d_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout2_0(t);
        ;
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        t = conc_layout3_0(t);
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))));
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, c_2, d_2, e_2, f_4);
  return(t);
}
ATerm test2c_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = term_b_8;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout2_0(t);
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = conc_layout3_0(t);
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))), term_m_7);
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, g_4, h_4, i_4, l_4);
  return(t);
}
ATerm test2b_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))));
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, m_4, o_4, p_4, q_4);
  return(t);
}
ATerm test2a_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    t = term_j_8;
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm m_8 = t;
          int n_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              ;
              LocalPopChoice(n_8);
            }
          else
            {
              t = m_8;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7)))), term_m_7);
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_i_7), term_e_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_o_7))), term_i_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_r_7))), (ATerm) ATinsert(ATempty, term_j_7))));
    return(t);
  }
  t = apply_test_4(t, v_4, w_4, x_4, y_4);
  return(t);
}
ATerm test1a_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    t = term_o_8;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm r_8 = t;
          int s_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              ;
              LocalPopChoice(s_8);
            }
          else
            {
              t = r_8;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_t_8;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_m_7;
    return(t);
  }
  t = apply_test_4(t, a_5, b_5, c_5, d_5);
  return(t);
}
ATerm conc_layout3_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL;
  v_0 = t;
  m_0 :
  if(match_cons(v_0, sym__2))
    {
      w_0 = ATgetArgument(v_0, 0);
      x_0 = ATgetArgument(v_0, 1);
      n_0 :
      if(match_cons(x_0, sym_appl_2))
        {
          y_0 = ATgetArgument(x_0, 0);
          f_1 = ATgetArgument(x_0, 1);
          o_0 :
          if(match_cons(y_0, sym_prod_3))
            {
              a_1 = ATgetArgument(y_0, 0);
              b_1 = ATgetArgument(y_0, 1);
              e_1 = ATgetArgument(y_0, 2);
              p_0 :
              if(((ATgetType(a_1) == AT_LIST) && ATisEmpty(a_1)))
                {
                  q_0 :
                  if(match_cons(b_1, sym_cf_1))
                    {
                      c_1 = ATgetArgument(b_1, 0);
                      r_0 :
                      if(match_cons(c_1, sym_opt_1))
                        {
                          d_1 = ATgetArgument(c_1, 0);
                          s_0 :
                          if(match_cons(d_1, sym_layout_0))
                            {
                              t_0 :
                              if(match_cons(e_1, sym_no_attrs_0))
                                {
                                  u_0 :
                                  if(((ATgetType(f_1) == AT_LIST) && ATisEmpty(f_1)))
                                    {
                                      t = not_null(w_0);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_layout2_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
  s_1 = t;
  j_1 :
  if(match_cons(s_1, sym__2))
    {
      t_1 = ATgetArgument(s_1, 0);
      b_2 = ATgetArgument(s_1, 1);
      k_1 :
      if(match_cons(t_1, sym_appl_2))
        {
          u_1 = ATgetArgument(t_1, 0);
          a_2 = ATgetArgument(t_1, 1);
          l_1 :
          if(match_cons(u_1, sym_prod_3))
            {
              v_1 = ATgetArgument(u_1, 0);
              w_1 = ATgetArgument(u_1, 1);
              z_1 = ATgetArgument(u_1, 2);
              m_1 :
              if(((ATgetType(v_1) == AT_LIST) && ATisEmpty(v_1)))
                {
                  n_1 :
                  if(match_cons(w_1, sym_cf_1))
                    {
                      x_1 = ATgetArgument(w_1, 0);
                      o_1 :
                      if(match_cons(x_1, sym_opt_1))
                        {
                          y_1 = ATgetArgument(x_1, 0);
                          p_1 :
                          if(match_cons(y_1, sym_layout_0))
                            {
                              q_1 :
                              if(match_cons(z_1, sym_no_attrs_0))
                                {
                                  r_1 :
                                  if(((ATgetType(a_2) == AT_LIST) && ATisEmpty(a_2)))
                                    {
                                      t = not_null(b_2);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_layout1_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  e_3 = t;
  f_2 :
  if(match_cons(e_3, sym__2))
    {
      f_3 = ATgetArgument(e_3, 0);
      s_3 = ATgetArgument(e_3, 1);
      g_2 :
      if(match_cons(f_3, sym_appl_2))
        {
          g_3 = ATgetArgument(f_3, 0);
          p_3 = ATgetArgument(f_3, 1);
          h_2 :
          if(match_cons(g_3, sym_prod_3))
            {
              h_3 = ATgetArgument(g_3, 0);
              l_3 = ATgetArgument(g_3, 1);
              o_3 = ATgetArgument(g_3, 2);
              i_2 :
              if(((ATgetType(h_3) == AT_LIST) && !(ATisEmpty(h_3))))
                {
                  i_3 = ATgetFirst((ATermList) h_3);
                  k_3 = (ATerm) ATgetNext((ATermList) h_3);
                  j_2 :
                  if(match_cons(i_3, sym_cf_1))
                    {
                      j_3 = ATgetArgument(i_3, 0);
                      k_2 :
                      if(match_cons(j_3, sym_layout_0))
                        {
                          l_2 :
                          if(((ATgetType(k_3) == AT_LIST) && ATisEmpty(k_3)))
                            {
                              m_2 :
                              if(match_cons(l_3, sym_cf_1))
                                {
                                  m_3 = ATgetArgument(l_3, 0);
                                  n_2 :
                                  if(match_cons(m_3, sym_opt_1))
                                    {
                                      n_3 = ATgetArgument(m_3, 0);
                                      o_2 :
                                      if(match_cons(n_3, sym_layout_0))
                                        {
                                          p_2 :
                                          if(match_cons(o_3, sym_no_attrs_0))
                                            {
                                              q_2 :
                                              if(((ATgetType(p_3) == AT_LIST) && !(ATisEmpty(p_3))))
                                                {
                                                  q_3 = ATgetFirst((ATermList) p_3);
                                                  r_3 = (ATerm) ATgetNext((ATermList) p_3);
                                                  r_2 :
                                                  if(((ATgetType(r_3) == AT_LIST) && ATisEmpty(r_3)))
                                                    {
                                                      s_2 :
                                                      if(match_cons(s_3, sym_appl_2))
                                                        {
                                                          t_3 = ATgetArgument(s_3, 0);
                                                          c_4 = ATgetArgument(s_3, 1);
                                                          t_2 :
                                                          if(match_cons(t_3, sym_prod_3))
                                                            {
                                                              u_3 = ATgetArgument(t_3, 0);
                                                              y_3 = ATgetArgument(t_3, 1);
                                                              b_4 = ATgetArgument(t_3, 2);
                                                              u_2 :
                                                              if(((ATgetType(u_3) == AT_LIST) && !(ATisEmpty(u_3))))
                                                                {
                                                                  v_3 = ATgetFirst((ATermList) u_3);
                                                                  x_3 = (ATerm) ATgetNext((ATermList) u_3);
                                                                  v_2 :
                                                                  if(match_cons(v_3, sym_cf_1))
                                                                    {
                                                                      w_3 = ATgetArgument(v_3, 0);
                                                                      w_2 :
                                                                      if(match_cons(w_3, sym_layout_0))
                                                                        {
                                                                          x_2 :
                                                                          if(((ATgetType(x_3) == AT_LIST) && ATisEmpty(x_3)))
                                                                            {
                                                                              y_2 :
                                                                              if(match_cons(y_3, sym_cf_1))
                                                                                {
                                                                                  z_3 = ATgetArgument(y_3, 0);
                                                                                  z_2 :
                                                                                  if(match_cons(z_3, sym_opt_1))
                                                                                    {
                                                                                      a_4 = ATgetArgument(z_3, 0);
                                                                                      a_3 :
                                                                                      if(match_cons(a_4, sym_layout_0))
                                                                                        {
                                                                                          b_3 :
                                                                                          if(match_cons(b_4, sym_no_attrs_0))
                                                                                            {
                                                                                              c_3 :
                                                                                              if(((ATgetType(c_4) == AT_LIST) && !(ATisEmpty(c_4))))
                                                                                                {
                                                                                                  d_4 = ATgetFirst((ATermList) c_4);
                                                                                                  e_4 = (ATerm) ATgetNext((ATermList) c_4);
                                                                                                  d_3 :
                                                                                                  if(((ATgetType(e_4) == AT_LIST) && ATisEmpty(e_4)))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_e_7), term_g_7, term_h_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_e_7), term_e_7), term_e_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_v_8))), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_4)), not_null(q_3)))));
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  _fail(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_8;
  w_8 = t;
  {
    ATerm j_4 = NULL;
    ATerm k_4 = NULL;
    k_4 = t;
    if(((j_4 != NULL) && (j_4 != k_4)))
      _fail(k_4);
    else
      j_4 = k_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATempty, not_null(j_4)));
      t = printnl_0(t);
    }
  }
  t = w_8;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm n_4 = NULL;
    n_4 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), term_y_8);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, e_5);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  r_4 :
  if(match_cons(s_4, sym__2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_4), not_null(u_4));
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            t = SSL_addr(not_null(t_4), not_null(u_4));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm z_4 = NULL;
    z_4 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), term_y_8);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, k_5, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm))
{
  ATerm b_9;
  b_9 = t;
  {
    t = q_53(t);
    t = debug_0(t);
  }
  t = b_9;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9;
        e_9 = t;
        t = r_53(t);
        t = e_9;
        t = record_success_0(t);
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_test_4 (ATerm t, ATerm u_53 (ATerm), ATerm v_53 (ATerm), ATerm w_53 (ATerm), ATerm x_53 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL;
  ATerm l_5 (ATerm t)
  {
    ATerm h_5 = NULL;
    ATerm i_5 = NULL;
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_53(t);
        t = v_53(t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          t = term_o_6;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      h_5 = t;
      {
        if(((f_5 != NULL) && (f_5 != h_5)))
          _fail(h_5);
        else
          f_5 = h_5;
        {
          t = x_53(t);
          {
            i_5 = t;
            {
              if(((g_5 != NULL) && (g_5 != i_5)))
                _fail(i_5);
              else
                g_5 = i_5;
              {
                ATerm h_9 = t;
                int i_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_5 = NULL;
                    t = not_null(g_5);
                    {
                      j_5 = t;
                      if(((f_5 != NULL) && (f_5 != j_5)))
                        _fail(j_5);
                      else
                        f_5 = j_5;
                    }
                    ;
                    LocalPopChoice(i_9);
                  }
                else
                  {
                    t = h_9;
                    {
                      t = not_null(f_5);
                      {
                        ATerm m_5 (ATerm t)
                        {
                          t = term_j_9;
                          return(t);
                        }
                        t = debug_1(t, m_5);
                        {
                          t = not_null(g_5);
                          {
                            ATerm p_5 (ATerm t)
                            {
                              t = term_k_9;
                              return(t);
                            }
                            t = debug_1(t, p_5);
                            _fail(t);
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
  t = do_test_2(t, u_53, l_5);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    t = term_l_9;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_layout1_0(t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_layout2_0(t);
              ;
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = conc_layout3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_r_9;
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_q_9;
    return(t);
  }
  t = apply_test_4(t, q_5, r_5, s_5, t_5);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm o_5 = NULL;
    o_5 = t;
    n_5 :
    if(!(match_int(o_5, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, y_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm g_44 (ATerm), ATerm h_44 (ATerm))
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      {
        ATerm b_6 = NULL,d_6 = NULL;
        ATerm c_6 = NULL;
        t = SSLgetAnnotations(not_null(v_5));
        {
          c_6 = t;
          if(((b_6 != NULL) && (b_6 != c_6)))
            _fail(c_6);
          else
            b_6 = c_6;
        }
        {
          t = not_null(w_5);
          {
            ATerm f_6 = NULL;
            t = g_44(t);
            {
              d_6 = t;
              {
                t = not_null(x_5);
                {
                  ATerm h_6 = NULL;
                  t = h_44(t);
                  {
                    f_6 = t;
                    {
                      ATerm i_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_6), not_null(f_6)), not_null(b_6));
                      {
                        i_6 = t;
                        if(((h_6 != NULL) && (h_6 != i_6)))
                          _fail(i_6);
                        else
                          h_6 = i_6;
                      }
                      t = not_null(h_6);
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
      _fail(t);
    }
  return(t);
}
ATerm report_test_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      t = term_s_9;
      return(t);
    }
    t = debug_1(t, e_6);
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      t = term_t_9;
      return(t);
    }
    t = debug_1(t, g_6);
    return(t);
  }
  t = _2(t, z_5, a_6);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym__2))
    {
      r_6 = ATgetArgument(q_6, 0);
      s_6 = ATgetArgument(q_6, 1);
      {
        ATerm w_9;
        w_9 = t;
        t = SSL_printnl(not_null(r_6), not_null(s_6));
        t = w_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm x_9;
  x_9 = t;
  {
    ATerm y_6 = NULL,a_7 = NULL;
    ATerm y_9;
    y_9 = t;
    {
      ATerm z_6 = NULL;
      t = t_54(t);
      {
        z_6 = t;
        if(((y_6 != NULL) && (y_6 != z_6)))
          _fail(z_6);
        else
          y_6 = z_6;
      }
    }
    t = y_9;
    {
      ATerm b_7 = NULL;
      b_7 = t;
      if(((a_7 != NULL) && (a_7 != b_7)))
        _fail(b_7);
      else
        a_7 = b_7;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_7)), not_null(y_6)));
        t = printnl_0(t);
      }
    }
  }
  t = x_9;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm o_53 (ATerm), ATerm p_53 (ATerm))
{
  t = o_53(t);
  {
    ATerm j_6 (ATerm t)
    {
      t = term_z_9;
      return(t);
    }
    t = debug_1(t, j_6);
    {
      t = init_record_0(t);
      {
        t = p_53(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = test1_0(t);
    {
      t = test1a_0(t);
      {
        t = test2a_0(t);
        {
          t = test2b_0(t);
          {
            t = test2c_0(t);
            {
              t = test2d_0(t);
              {
                t = test2e_0(t);
                {
                  t = test3a_0(t);
                  {
                    t = test3b_0(t);
                    t = test4_0(t);
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
  t = test_suite_2(t, k_6, l_6);
  return(t);
}

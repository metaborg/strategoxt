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
Symbol sym_Ins_1;
Symbol sym_Conc_2;
Symbol sym_Conc_3;
Symbol sym_Snoc_2;
Symbol sym_ApplToSort_0;
Symbol sym_FlatLex_0;
Symbol sym_FlatList_0;
Symbol sym_RemoveLayout_0;
Symbol sym_FlatInj_0;
Symbol sym_ReplaceAppl_0;
Symbol sym_RemoveLit_0;
Symbol sym_RemovePT_0;
Symbol sym_RemoveSeq_0;
Symbol sym_FlatAlt_0;
Symbol sym_layout_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_sort_1;
Symbol sym_varsym_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_parsetree_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_varsym_1;
Symbol sym_layout_0;
Symbol sym_empty_0;
Symbol sym_seq_2;
Symbol sym_opt_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_n_2;
Symbol sym_iter_sep_n_3;
Symbol sym_set_1;
Symbol sym_pair_2;
Symbol sym_func_2;
Symbol sym_alt_2;
Symbol sym_perm_1;
Symbol sym_bracket_0;
Symbol sym_sort_1;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_ATerm_1;
Symbol sym_lit_1;
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
  sym_Ins_1 = ATmakeSymbol("Ins", 1, ATfalse);
  ATprotectSymbol(sym_Ins_1);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Conc_3 = ATmakeSymbol("Conc", 3, ATfalse);
  ATprotectSymbol(sym_Conc_3);
  sym_Snoc_2 = ATmakeSymbol("Snoc", 2, ATfalse);
  ATprotectSymbol(sym_Snoc_2);
  sym_ApplToSort_0 = ATmakeSymbol("ApplToSort", 0, ATfalse);
  ATprotectSymbol(sym_ApplToSort_0);
  sym_FlatLex_0 = ATmakeSymbol("FlatLex", 0, ATfalse);
  ATprotectSymbol(sym_FlatLex_0);
  sym_FlatList_0 = ATmakeSymbol("FlatList", 0, ATfalse);
  ATprotectSymbol(sym_FlatList_0);
  sym_RemoveLayout_0 = ATmakeSymbol("RemoveLayout", 0, ATfalse);
  ATprotectSymbol(sym_RemoveLayout_0);
  sym_FlatInj_0 = ATmakeSymbol("FlatInj", 0, ATfalse);
  ATprotectSymbol(sym_FlatInj_0);
  sym_ReplaceAppl_0 = ATmakeSymbol("ReplaceAppl", 0, ATfalse);
  ATprotectSymbol(sym_ReplaceAppl_0);
  sym_RemoveLit_0 = ATmakeSymbol("RemoveLit", 0, ATfalse);
  ATprotectSymbol(sym_RemoveLit_0);
  sym_RemovePT_0 = ATmakeSymbol("RemovePT", 0, ATfalse);
  ATprotectSymbol(sym_RemovePT_0);
  sym_RemoveSeq_0 = ATmakeSymbol("RemoveSeq", 0, ATfalse);
  ATprotectSymbol(sym_RemoveSeq_0);
  sym_FlatAlt_0 = ATmakeSymbol("FlatAlt", 0, ATfalse);
  ATprotectSymbol(sym_FlatAlt_0);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_set_1 = ATmakeSymbol("set", 1, ATfalse);
  ATprotectSymbol(sym_set_1);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_perm_1 = ATmakeSymbol("perm", 1, ATfalse);
  ATprotectSymbol(sym_perm_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
  ATprotectSymbol(sym_ATerm_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_v_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_r_39;
ATerm term_k_39;
ATerm term_i_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_w_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_c_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_b_34;
ATerm term_x_33;
ATerm term_v_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_c_33;
ATerm term_l_29;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_v_27;
ATerm term_p_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_a_26;
ATerm term_s_25;
ATerm term_y_20;
ATerm term_b_20;
ATerm term_l_19;
ATerm term_r_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_d_14;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
void init_constant_terms (void)
{
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_35);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__3, term_a_39, term_d_39, term_c_33);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_options_0_0 (ATerm);
ATerm amb_1_0 (ATerm a_83 (ATerm), ATerm);
ATerm is_conc_0_0 (ATerm);
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm ReplConsSome_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm is_ins_0_0 (ATerm);
ATerm ReplConsIns_1_0 (ATerm i_89 (ATerm), ATerm);
ATerm ReplConsNone_1_0 (ATerm h_89 (ATerm), ATerm);
ATerm is_nil_0_0 (ATerm);
ATerm ReplConsNil_1_0 (ATerm g_89 (ATerm), ATerm);
ATerm get_cons_0_0 (ATerm);
ATerm ReplNamedCons_1_0 (ATerm f_89 (ATerm), ATerm);
ATerm ReplCons_1_0 (ATerm m_89 (ATerm), ATerm);
ATerm OptList_0_0 (ATerm);
ATerm is_layout_0_0 (ATerm);
ATerm implodeAsfix_0_0 (ATerm);
ATerm Tuple_0_0 (ATerm);
ATerm remove_seq_0_0 (ATerm);
ATerm CTC2_0_0 (ATerm);
ATerm Conc_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm);
ATerm CTC1_0_0 (ATerm);
ATerm conc_to_cons_0_0 (ATerm);
ATerm Constr1_0_0 (ATerm);
ATerm Constr0_0_0 (ATerm);
ATerm CnsGeneric_0_0 (ATerm);
ATerm ConstrNil_0_0 (ATerm);
ATerm CnsNil_0_0 (ATerm);
ATerm Cns_0_0 (ATerm);
ATerm replace_appl_0_0 (ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm FlatAlt_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm cons_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm lex_1_0 (ATerm c_82 (ATerm), ATerm);
ATerm alt_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm);
ATerm injective_alt_0_0 (ATerm);
ATerm varsym_1_0 (ATerm q_82 (ATerm), ATerm);
ATerm injection_0_0 (ATerm);
ATerm Inj_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm flat_injections_0_0 (ATerm);
ATerm remove_lit_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm FlatList_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_90 (ATerm), ATerm);
ATerm appl_to_sort_0_0 (ATerm);
ATerm De_Escape3_0_0 (ATerm);
ATerm De_Escape2_0_0 (ATerm);
ATerm De_Escape1_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm j_98 (ATerm), ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm PpSym_0_0 (ATerm);
ATerm sort_1_0 (ATerm p_82 (ATerm), ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm layout_1_0 (ATerm b_77 (ATerm), ATerm);
ATerm opt_1_0 (ATerm d_82 (ATerm), ATerm);
ATerm cf_1_0 (ATerm b_82 (ATerm), ATerm);
ATerm is_layout_p__0_0 (ATerm);
ATerm filter_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm prod_3_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm remove_x_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm remove_layout_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm flat_layout_0_0 (ATerm);
ATerm Kids_0_0 (ATerm);
ATerm appl_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm);
ATerm yield_0_0 (ATerm);
ATerm implode_lexical_0_0 (ATerm);
ATerm downup2_2_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm flat_lex_0_0 (ATerm);
ATerm implode_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_97 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm u_109 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_116 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm g_109 (ATerm), ATerm);
ATerm _2_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm);
ATerm crush_2_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm s_117 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm x_112 (ATerm), ATerm);
ATerm lit_1_0 (ATerm f_82 (ATerm), ATerm);
ATerm list_1_0 (ATerm l_97 (ATerm), ATerm);
ATerm seq_1_0 (ATerm e_82 (ATerm), ATerm);
ATerm iter_star_sep_2_0 (ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm l_82 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm);
ATerm iter_1_0 (ATerm k_82 (ATerm), ATerm);
ATerm list_sort_0_0 (ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm c_114 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm a_114 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm z_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm);
ATerm implode_asfix_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_s_10;
        return(t);
      }
      ATerm i_0 (ATerm t)
      {
        t = term_t_10;
        return(t);
      }
      t = Option_3_0(c_0, e_0, i_0, t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm o_0 (ATerm t)
            {
              t = term_w_10;
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              t = term_x_10;
              return(t);
            }
            t = Option_3_0(n_0, o_0, p_0, t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_0 (ATerm t)
                  {
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
                      _fail(t);
                    return(t);
                  }
                  ATerm r_0 (ATerm t)
                  {
                    t = term_a_11;
                    return(t);
                  }
                  ATerm u_0 (ATerm t)
                  {
                    t = term_c_11;
                    return(t);
                  }
                  t = Option_3_0(q_0, r_0, u_0, t);
                  ;
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  {
                    ATerm d_11 = t;
                    int e_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_0 (ATerm t)
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_0 (ATerm t)
                        {
                          t = term_g_11;
                          return(t);
                        }
                        ATerm x_0 (ATerm t)
                        {
                          t = term_h_11;
                          return(t);
                        }
                        t = Option_3_0(v_0, w_0, x_0, t);
                        ;
                        LocalPopChoice(e_11);
                      }
                    else
                      {
                        t = d_11;
                        {
                          ATerm i_11 = t;
                          int j_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_0 (ATerm t)
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm z_0 (ATerm t)
                              {
                                t = term_k_11;
                                return(t);
                              }
                              ATerm a_1 (ATerm t)
                              {
                                t = term_l_11;
                                return(t);
                              }
                              t = Option_3_0(y_0, z_0, a_1, t);
                              ;
                              LocalPopChoice(j_11);
                            }
                          else
                            {
                              t = i_11;
                              {
                                ATerm m_11 = t;
                                int n_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_1 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm c_1 (ATerm t)
                                    {
                                      t = term_o_11;
                                      return(t);
                                    }
                                    ATerm d_1 (ATerm t)
                                    {
                                      t = term_p_11;
                                      return(t);
                                    }
                                    t = Option_3_0(b_1, c_1, d_1, t);
                                    ;
                                    LocalPopChoice(n_11);
                                  }
                                else
                                  {
                                    t = m_11;
                                    {
                                      ATerm q_11 = t;
                                      int r_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_1 (ATerm t)
                                          {
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm h_1 (ATerm t)
                                          {
                                            t = term_s_11;
                                            return(t);
                                          }
                                          ATerm i_1 (ATerm t)
                                          {
                                            t = term_t_11;
                                            return(t);
                                          }
                                          t = Option_3_0(f_1, h_1, i_1, t);
                                          ;
                                          LocalPopChoice(r_11);
                                        }
                                      else
                                        {
                                          t = q_11;
                                          {
                                            ATerm u_11 = t;
                                            int v_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm j_1 (ATerm t)
                                                {
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm k_1 (ATerm t)
                                                {
                                                  t = term_w_11;
                                                  return(t);
                                                }
                                                ATerm l_1 (ATerm t)
                                                {
                                                  t = term_x_11;
                                                  return(t);
                                                }
                                                t = Option_3_0(j_1, k_1, l_1, t);
                                                ;
                                                LocalPopChoice(v_11);
                                              }
                                            else
                                              {
                                                t = u_11;
                                                {
                                                  ATerm y_11 = t;
                                                  int z_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_1 (ATerm t)
                                                      {
                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm n_1 (ATerm t)
                                                      {
                                                        t = term_a_12;
                                                        return(t);
                                                      }
                                                      ATerm o_1 (ATerm t)
                                                      {
                                                        t = term_b_12;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(m_1, n_1, o_1, t);
                                                      ;
                                                      LocalPopChoice(z_11);
                                                    }
                                                  else
                                                    {
                                                      t = y_11;
                                                      {
                                                        ATerm p_1 (ATerm t)
                                                        {
                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
                                                            _fail(t);
                                                          return(t);
                                                        }
                                                        ATerm q_1 (ATerm t)
                                                        {
                                                          t = term_c_12;
                                                          return(t);
                                                        }
                                                        ATerm r_1 (ATerm t)
                                                        {
                                                          t = term_d_12;
                                                          return(t);
                                                        }
                                                        t = Option_3_0(p_1, q_1, r_1, t);
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
ATerm amb_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_amb_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_2);
  j_2 = t;
  t = k_2;
  t = a_83(t);
  l_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, l_2), j_2);
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,k_3 = NULL,p_3 = NULL,w_3 = NULL,f_4 = NULL,j_4 = NULL,l_4 = NULL,m_4 = NULL;
  f_3 = t;
  if(match_cons(t, sym_prod_3))
    {
      g_3 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
      {
        ATerm e_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = g_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_12 = ATgetFirst((ATermList) t);
      k_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_12 = ATgetFirst((ATermList) t);
      p_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_3;
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_12 = ATgetFirst((ATermList) t);
            w_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_12);
        t = w_3;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_4;
            {
              ATerm k_12 = t;
              int l_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm m_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_12);
                  t = f_3;
                }
              else
                {
                  t = k_12;
                  if(match_cons(t, sym_cf_1))
                    {
                      m_4 = ATgetArgument(t, 0);
                      t = m_4;
                      {
                        ATerm n_12 = t;
                        int o_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm p_12 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(o_12);
                            t = f_3;
                          }
                        else
                          {
                            t = n_12;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm q_12 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = f_3;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm u_12 = ATgetArgument(t, 0);
                          ATerm v_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_3;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_12 = ATgetFirst((ATermList) t);
                f_4 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_4;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_12 = ATgetFirst((ATermList) t);
                j_4 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_4;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_4;
            if(match_cons(t, sym_cf_1))
              {
                m_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_4;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm a_13 = ATgetArgument(t, 0);
                ATerm b_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_3;
          }
      }
    else
      {
        t = h_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_4;
        if(match_cons(t, sym_iter_1))
          {
            ATerm f_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_3;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  o_5 = t;
  if(match_cons(t, sym_appl_2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_5 = ATgetFirst((ATermList) t);
      s_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_5 = ATgetFirst((ATermList) t);
      u_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_5 = ATgetFirst((ATermList) t);
      n_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_7 = NULL,h_8 = NULL,i_8 = NULL;
        t = n_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_5;
        t = is_conc_0_0(t);
        t = r_5;
        t = m_0(t);
        j_7 = t;
        t = t_5;
        t = m_0(t);
        h_8 = t;
        t = l_5;
        t = m_0(t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, (ATerm) ATinsert(CheckATermList(i_8), h_8));
        t = conc_0_0(t);
      }
    }
  else
    {
      ATerm s_0 = NULL,t_0 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_5;
      t = is_conc_0_0(t);
      t = r_5;
      t = m_0(t);
      s_0 = t;
      t = t_5;
      t = m_0(t);
      t_0 = t;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_0;
            {
              ATerm i_13 = t;
              int j_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  ;
                  LocalPopChoice(j_13);
                }
              else
                {
                  t = i_13;
                  t = Cons_2_0(_id, _id, t);
                }
              t = (ATerm) ATmakeAppl(sym__2, s_0, t_0);
              t = conc_0_0(t);
            }
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = (ATerm) ATmakeAppl(sym_Conc_2, s_0, t_0);
          }
      }
    }
  return(t);
}
ATerm ReplConsSome_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,s_9 = NULL,t_9 = NULL,d_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,r_10 = NULL,b_11 = NULL,f_11 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      n_9 = ATgetArgument(t, 0);
      {
        ATerm k_13 = ATgetArgument(t, 1);
        if(((ATgetType(k_13) == AT_LIST) && !(ATisEmpty(k_13))))
          {
            s_9 = ATgetFirst((ATermList) k_13);
            {
              ATerm l_13 = (ATerm) ATgetNext((ATermList) k_13);
              if(((ATgetType(l_13) != AT_LIST) || !(ATisEmpty(l_13))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_9;
  if(match_cons(t, sym_prod_3))
    {
      d_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      {
        ATerm m_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_10;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_10 = ATgetFirst((ATermList) t);
      j_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_10;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_10;
  if(match_cons(t, sym_opt_1))
    {
      b_11 = ATgetArgument(t, 0);
      t = b_11;
      if((h_10 != t))
        {
          _fail(t);
        }
      t = n_9;
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          b_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_10;
      if(match_cons(t, sym_cf_1))
        {
          i_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_11;
      if(match_cons(t, sym_opt_1))
        {
          f_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_11;
      if((i_10 != t))
        {
          _fail(t);
        }
      t = n_9;
    }
  t = s_9;
  t = j_89(t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, t_9);
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,w_12 = NULL,x_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  r_12 = t;
  if(match_cons(t, sym_prod_3))
    {
      s_12 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
      {
        ATerm n_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_12 = ATgetFirst((ATermList) t);
      x_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_12;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_13;
  if(match_cons(t, sym_iter_1))
    {
      d_13 = ATgetArgument(t, 0);
      t = d_13;
      if((t_12 != t))
        {
          _fail(t);
        }
      t = r_12;
    }
  else
    {
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              d_13 = ATgetArgument(t, 0);
              {
                ATerm q_13 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(p_13);
          t = d_13;
          if((t_12 != t))
            {
              _fail(t);
            }
          t = r_12;
        }
      else
        {
          t = o_13;
          if(match_cons(t, sym_cf_1))
            {
              d_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_12;
          if(match_cons(t, sym_cf_1))
            {
              w_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_13;
          if(match_cons(t, sym_iter_1))
            {
              e_13 = ATgetArgument(t, 0);
              t = e_13;
              if((w_12 != t))
                {
                  _fail(t);
                }
              t = r_12;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  e_13 = ATgetArgument(t, 0);
                  {
                    ATerm r_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = e_13;
              if((w_12 != t))
                {
                  _fail(t);
                }
              t = r_12;
            }
        }
    }
  return(t);
}
ATerm ReplConsIns_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      v_13 = ATgetArgument(t, 0);
      {
        ATerm s_13 = ATgetArgument(t, 1);
        if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
          {
            w_13 = ATgetFirst((ATermList) s_13);
            {
              ATerm t_13 = (ATerm) ATgetNext((ATermList) s_13);
              if(((ATgetType(t_13) != AT_LIST) || !(ATisEmpty(t_13))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_13;
  t = is_ins_0_0(t);
  t = w_13;
  t = i_89(t);
  x_13 = t;
  t = (ATerm) ATinsert(ATempty, x_13);
  return(t);
}
ATerm ReplConsNone_1_0 (ATerm h_89 (ATerm), ATerm t)
{
  ATerm k_14 = NULL,o_14 = NULL,s_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      k_14 = ATgetArgument(t, 0);
      {
        ATerm u_13 = ATgetArgument(t, 1);
        if(((ATgetType(u_13) != AT_LIST) || !(ATisEmpty(u_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_14;
  if(match_cons(t, sym_prod_3))
    {
      o_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
      {
        ATerm y_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_14;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = s_14;
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_opt_1))
          {
            ATerm b_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_14);
        t = k_14;
      }
    else
      {
        t = z_13;
        if(match_cons(t, sym_cf_1))
          {
            t_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_14;
        if(match_cons(t, sym_opt_1))
          {
            ATerm c_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_14;
      }
    t = term_d_14;
  }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym_prod_3))
    {
      k_15 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
      {
        ATerm e_14 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_15;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_15;
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm h_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_14);
        t = j_15;
      }
    else
      {
        t = f_14;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm l_14 = ATgetArgument(t, 0);
                  ATerm m_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(j_14);
              t = j_15;
            }
          else
            {
              t = i_14;
              if(match_cons(t, sym_cf_1))
                {
                  m_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_15;
              {
                ATerm n_14 = t;
                int p_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm q_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_14);
                    t = j_15;
                  }
                else
                  {
                    t = n_14;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm r_14 = ATgetArgument(t, 0);
                        ATerm u_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = j_15;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplConsNil_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm q_15 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      q_15 = ATgetArgument(t, 0);
      {
        ATerm v_14 = ATgetArgument(t, 1);
        if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_15;
  t = is_nil_0_0(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_cons_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      ATerm x_14 = ATgetArgument(t, 1);
      r_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_15;
  {
    ATerm u_1 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          s_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(u_1, t);
    t = not_null(s_15);
  }
  return(t);
}
ATerm ReplNamedCons_1_0 (ATerm f_89 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_15;
  t = get_cons_0_0(t);
  {
    ATerm v_1 (ATerm t)
    {
      if(match_string(t, "sorts"))
        {
          t = term_y_14;
        }
      else
        {
          if(match_string(t, "imports"))
            {
              t = term_z_14;
            }
          else
            {
              if(match_string(t, "id"))
                {
                  t = term_a_15;
                }
              else
                {
                  if(match_string(t, "hiddens"))
                    {
                      t = term_b_15;
                    }
                  else
                    {
                      if(match_string(t, "exports"))
                        {
                          t = term_c_15;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("module", 0, ATtrue)))
                            _fail(t);
                          t = term_d_15;
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = try_1_0(v_1, t);
    w_15 = t;
    t = v_15;
    t = map_1_0(f_89, t);
    x_15 = t;
    t = SSL_mkterm(w_15, x_15);
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm m_89 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1_0(m_89, t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ReplConsNil_1_0(m_89, t);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            {
              ATerm i_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ReplConsNone_1_0(m_89, t);
                  ;
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = i_15;
                  {
                    ATerm o_15 = t;
                    int p_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsIns_1_0(m_89, t);
                        ;
                        LocalPopChoice(p_15);
                      }
                    else
                      {
                        t = o_15;
                        {
                          ATerm t_15 = t;
                          int y_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ReplConsSome_1_0(m_89, t);
                              ;
                              LocalPopChoice(y_15);
                            }
                          else
                            {
                              t = t_15;
                              t = ReplConsConc_1_0(m_89, t);
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
ATerm OptList_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,b_17 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      v_16 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_16;
  if(match_cons(t, sym_prod_3))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      {
        ATerm z_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = w_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_16 = ATgetFirst((ATermList) t);
      r_16 = (ATerm) ATgetNext((ATermList) t);
      t = r_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_16;
      if(match_cons(t, sym_opt_1))
        {
          y_16 = ATgetArgument(t, 0);
          t = b_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_16 = ATgetFirst((ATermList) t);
              t_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_16;
          if((p_16 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = s_16;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              y_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_16;
          if(match_cons(t, sym_cf_1))
            {
              q_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_16;
          if(match_cons(t, sym_opt_1))
            {
              z_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_16 = ATgetFirst((ATermList) t);
              t_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_16;
          if((q_16 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = s_16;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_16;
      if(match_cons(t, sym_opt_1))
        {
          y_16 = ATgetArgument(t, 0);
          t = b_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_16;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              y_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_16;
          if(match_cons(t, sym_opt_1))
            {
              z_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_16;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm is_layout_0_0 (ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm c_16 = t;
          int d_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_1 (ATerm t)
              {
                ATerm z_1 (ATerm t)
                {
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  return(t);
                }
                t = opt_1_0(z_1, t);
                return(t);
              }
              t = cf_1_0(y_1, t);
              ;
              LocalPopChoice(d_16);
            }
          else
            {
              t = c_16;
              t = lit_1_0(_id, t);
            }
          return(t);
        }
        t = prod_3_0(_id, x_1, _id, t);
        return(t);
      }
      t = appl_2_0(w_1, _id, t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm a_2 (ATerm t)
        {
          ATerm b_2 (ATerm t)
          {
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            return(t);
          }
          t = opt_1_0(b_2, t);
          return(t);
        }
        t = cf_1_0(a_2, t);
      }
    }
  return(t);
}
ATerm implodeAsfix_0_0 (ATerm t)
{
  ATerm i_17 = NULL;
  if(match_cons(t, sym_parsetree_2))
    {
      i_17 = ATgetArgument(t, 0);
      {
        ATerm e_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_17;
  {
    ATerm j_17 (ATerm t)
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0_0(t);
          ;
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
                ATerm c_2 (ATerm t)
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm j_16 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_layout_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = j_16;
                      }
                    return(t);
                  }
                  t = filter_1_0(d_2, t);
                  return(t);
                }
                t = appl_2_0(_id, c_2, t);
                {
                  ATerm k_16 = t;
                  int l_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0_0(t);
                      t = j_17(t);
                      ;
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
                            t = ReplCons_1_0(j_17, t);
                            ;
                            LocalPopChoice(n_16);
                          }
                        else
                          {
                            t = m_16;
                            {
                              ATerm o_16 = t;
                              int u_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Inj_0_0(t);
                                  t = j_17(t);
                                  ;
                                  LocalPopChoice(u_16);
                                }
                              else
                                {
                                  t = o_16;
                                  {
                                    ATerm a_17 = t;
                                    int c_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0_0(t);
                                        t = j_17(t);
                                        ;
                                        LocalPopChoice(c_17);
                                      }
                                    else
                                      {
                                        t = a_17;
                                        t = FlatAlt_0_0(t);
                                        t = j_17(t);
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                ;
                LocalPopChoice(i_16);
              }
            else
              {
                t = h_16;
                {
                  ATerm d_17 = t;
                  int e_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_2 (ATerm t)
                      {
                        t = list_1_0(j_17, t);
                        return(t);
                      }
                      t = amb_1_0(e_2, t);
                      ;
                      LocalPopChoice(e_17);
                    }
                  else
                    {
                      t = d_17;
                      t = SRTS_all(j_17, t);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = j_17(t);
  }
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,a_18 = NULL,b_18 = NULL,e_18 = NULL;
  x_17 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_17 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_17;
  if(match_cons(t, sym_prod_3))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
      {
        ATerm g_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_18;
  {
    ATerm h_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm l_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_17);
        t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), e_18);
      }
    else
      {
        t = h_17;
        if(match_cons(t, sym_cf_1))
          {
            b_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_18;
        if(match_cons(t, sym_seq_1))
          {
            ATerm m_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), e_18);
      }
  }
  return(t);
}
ATerm remove_seq_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = try_1_0(Tuple_0_0, t);
    return(t);
  }
  t = topdown_1_0(f_2, t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
      t = o_18;
      if(match_cons(t, sym_Ins_1))
        {
          m_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_18 = ATgetFirst((ATermList) t);
          k_18 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(k_18), l_18), m_18);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              l_18 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, l_18), m_18);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, m_18);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          o_18 = ATgetArgument(t, 0);
          p_18 = ATgetArgument(t, 1);
          q_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_18), (ATerm) ATinsert(ATempty, p_18)), o_18);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm Conc_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Conc_2))
    {
      b_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_19);
  a_19 = t;
  t = b_19;
  t = s_76(t);
  d_19 = t;
  t = c_19;
  t = t_76(t);
  e_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Conc_2, d_19, e_19), a_19);
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      r_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
      t = u_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_19;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              ATerm n_17 = t;
              int o_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_19;
                  ;
                  LocalPopChoice(o_17);
                }
              else
                {
                  t = n_17;
                  t = u_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  s_19 = ATgetArgument(t, 0);
                  t_19 = ATgetArgument(t, 1);
                  {
                    ATerm p_17 = t;
                    int q_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_19;
                        ;
                        LocalPopChoice(q_17);
                      }
                    else
                      {
                        t = p_17;
                        t = (ATerm) ATmakeAppl(sym_Conc_2, s_19, (ATerm) ATmakeAppl(sym_Conc_2, t_19, u_19));
                      }
                  }
                }
              else
                {
                  t = r_19;
                }
            }
        }
      else
        {
          t = r_19;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_19;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  s_19 = ATgetArgument(t, 0);
                  t_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, s_19, (ATerm) ATmakeAppl(sym_Conc_2, t_19, u_19));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          r_19 = ATgetArgument(t, 0);
          u_19 = ATgetArgument(t, 1);
          p_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_19;
      if(match_cons(t, sym_Conc_3))
        {
          s_19 = ATgetArgument(t, 0);
          t_19 = ATgetArgument(t, 1);
          o_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, s_19, t_19, (ATerm) ATmakeAppl(sym_Conc_3, o_19, u_19, p_19));
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_20 = NULL,q_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_20 = ATgetFirst((ATermList) t);
            q_20 = (ATerm) ATgetNext((ATermList) t);
            t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, p_20), q_20);
          }
        else
          {
            if(match_cons(t, sym_Snoc_2))
              {
                p_20 = ATgetArgument(t, 0);
                q_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Conc_2, p_20, (ATerm) ATmakeAppl(sym_Ins_1, q_20));
          }
        ;
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
              t = CTC1_0_0(t);
              ;
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              {
                ATerm h_2 (ATerm t)
                {
                  ATerm w_20 = NULL,x_20 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_20 = ATgetFirst((ATermList) t);
                      x_20 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, w_20), x_20);
                    }
                  else
                    {
                      if(match_cons(t, sym_Snoc_2))
                        {
                          w_20 = ATgetArgument(t, 0);
                          x_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Conc_2, w_20, (ATerm) ATmakeAppl(sym_Ins_1, x_20));
                    }
                  return(t);
                }
                t = Conc_2_0(h_2, _id, t);
              }
            }
        }
      }
    return(t);
  }
  t = repeat_1_0(g_2, t);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2_0(_id, conc_to_cons_0_0, t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
    {
      ATerm i_2 (ATerm t)
      {
        ATerm z_17 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC2_0_0(t);
            t = Cons_2_0(conc_to_cons_0_0, _id, t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = z_17;
            {
              ATerm d_21 = NULL;
              if(match_cons(t, sym_Ins_1))
                {
                  d_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, d_21);
            }
          }
        return(t);
      }
      t = try_1_0(i_2, t);
    }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm f_22 = NULL,h_22 = NULL,j_22 = NULL,l_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      o_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
      {
        ATerm d_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_22 = ATgetFirst((ATermList) t);
      r_22 = (ATerm) ATgetNext((ATermList) t);
      t = r_22;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = s_22;
          if(match_cons(t, sym_opt_1))
            {
              t_22 = ATgetArgument(t, 0);
              t = t_22;
              if((p_22 != t))
                {
                  _fail(t);
                }
              t = term_f_18;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  t_22 = ATgetArgument(t, 0);
                  t = p_22;
                  if(match_cons(t, sym_cf_1))
                    {
                      q_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      u_22 = ATgetArgument(t, 0);
                      t = u_22;
                      if((q_22 != t))
                        {
                          _fail(t);
                        }
                      t = term_f_18;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          u_22 = ATgetArgument(t, 0);
                          t = u_22;
                          if((q_22 != t))
                            {
                              _fail(t);
                            }
                          t = term_g_18;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              u_22 = ATgetArgument(t, 0);
                              {
                                ATerm h_18 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = u_22;
                          if((q_22 != t))
                            {
                              _fail(t);
                            }
                          t = term_g_18;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      t_22 = ATgetArgument(t, 0);
                      t = t_22;
                      if((p_22 != t))
                        {
                          _fail(t);
                        }
                      t = term_g_18;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          t_22 = ATgetArgument(t, 0);
                          {
                            ATerm i_18 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = t_22;
                      if((p_22 != t))
                        {
                          _fail(t);
                        }
                      t = term_g_18;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_18 = ATgetFirst((ATermList) t);
              f_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_22;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = s_22;
              if(match_cons(t, sym_iter_1))
                {
                  ATerm n_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_r_18;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_18 = ATgetFirst((ATermList) t);
                  h_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_22;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = s_22;
                  {
                    ATerm t_18 = t;
                    int u_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm v_18 = ATgetArgument(t, 0);
                            ATerm w_18 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_18);
                        t = term_r_18;
                      }
                    else
                      {
                        t = t_18;
                        if(match_cons(t, sym_cf_1))
                          {
                            t_22 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = t_22;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm x_18 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = term_r_18;
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_18 = ATgetFirst((ATermList) t);
                      j_22 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = j_22;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm z_18 = ATgetFirst((ATermList) t);
                      l_22 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = l_22;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_22;
                  if(match_cons(t, sym_cf_1))
                    {
                      t_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_22;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm g_19 = ATgetArgument(t, 0);
                      ATerm h_19 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_r_18;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_22;
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm k_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(j_19);
            t = term_l_19;
          }
        else
          {
            t = i_19;
            if(match_cons(t, sym_cf_1))
              {
                t_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_22;
            if(match_cons(t, sym_opt_1))
              {
                ATerm m_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_l_19;
          }
      }
    }
  return(t);
}
ATerm Constr0_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      ATerm q_19 = ATgetArgument(t, 1);
      d_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_23;
  {
    ATerm n_2 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          e_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(n_2, t);
    t = not_null(e_23);
  }
  return(t);
}
ATerm CnsGeneric_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      g_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_23;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Constr0_0_0(t);
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = Constr1_0_0(t);
      }
    {
      ATerm o_2 (ATerm t)
      {
        if(match_string(t, "sorts"))
          {
            t = term_y_14;
          }
        else
          {
            if(match_string(t, "imports"))
              {
                t = term_z_14;
              }
            else
              {
                if(match_string(t, "id"))
                  {
                    t = term_a_15;
                  }
                else
                  {
                    if(match_string(t, "hiddens"))
                      {
                        t = term_b_15;
                      }
                    else
                      {
                        if(match_string(t, "exports"))
                          {
                            t = term_c_15;
                          }
                        else
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("module", 0, ATtrue)))
                              _fail(t);
                            t = term_d_15;
                          }
                      }
                  }
              }
          }
        return(t);
      }
      t = try_1_0(o_2, t);
      i_23 = t;
      t = SSL_mkterm(i_23, h_23);
    }
  }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
      {
        ATerm x_19 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_23;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm a_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_19);
        t = term_b_20;
      }
    else
      {
        t = y_19;
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm e_20 = ATgetArgument(t, 0);
                  ATerm f_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(d_20);
              t = term_b_20;
            }
          else
            {
              t = c_20;
              if(match_cons(t, sym_cf_1))
                {
                  s_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_23;
              {
                ATerm g_20 = t;
                int h_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm i_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_20);
                    t = term_b_20;
                  }
                else
                  {
                    t = g_20;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm j_20 = ATgetArgument(t, 0);
                        ATerm k_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_b_20;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm CnsNil_0_0 (ATerm t)
{
  ATerm w_23 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      w_23 = ATgetArgument(t, 0);
      {
        ATerm l_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_23;
  t = ConstrNil_0_0(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm Cns_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CnsNil_0_0(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      t = CnsGeneric_0_0(t);
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      t = appl_2_0(_id, _id, t);
      t = Cns_0_0(t);
      return(t);
    }
    t = try_1_0(q_2, t);
    return(t);
  }
  t = topdown_1_0(p_2, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = try_1_0(FlatAlt_0_0, t);
    return(t);
  }
  t = topdown_1_0(r_2, t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
      ATerm s_20 = t;
      int t_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm w_2 (ATerm t)
              {
                ATerm u_20 = t;
                int v_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = cf_1_0(_id, t);
                    ;
                    LocalPopChoice(v_20);
                  }
                else
                  {
                    t = u_20;
                  }
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(w_2, x_2, t);
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              ATerm y_2 (ATerm t)
              {
                if(match_cons(t, sym_alt_2))
                  {
                    b_24 = ATgetArgument(t, 0);
                    c_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = cf_1_0(y_2, t);
              return(t);
            }
            t = prod_3_0(u_2, v_2, _id, t);
            return(t);
          }
          ATerm t_2 (ATerm t)
          {
            d_24 = t;
            return(t);
          }
          t = appl_2_0(s_2, t_2, t);
          ;
          LocalPopChoice(t_20);
        }
      else
        {
          t = s_20;
          {
            ATerm z_2 (ATerm t)
            {
              ATerm b_3 (ATerm t)
              {
                ATerm d_3 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(_id, d_3, t);
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                ATerm e_3 (ATerm t)
                {
                  if(match_cons(t, sym_alt_2))
                    {
                      b_24 = ATgetArgument(t, 0);
                      c_24 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = lex_1_0(e_3, t);
                return(t);
              }
              t = prod_3_0(b_3, c_3, _id, t);
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              d_24 = t;
              return(t);
            }
            t = appl_2_0(z_2, a_3, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(b_24), not_null(c_24)), term_y_20);
      {
        ATerm v_24 (ATerm t)
        {
          ATerm k_24 = NULL,m_24 = NULL,n_24 = NULL;
          if(match_cons(t, sym__2))
            {
              k_24 = ATgetArgument(t, 0);
              n_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_24;
          {
            ATerm z_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_alt_2))
                  {
                    ATerm b_21 = ATgetArgument(t, 0);
                    m_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(a_21);
                {
                  ATerm c_21 = t;
                  int e_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_alt_2, n_24, not_null(d_24));
                      ;
                      LocalPopChoice(e_21);
                    }
                  else
                    {
                      t = c_21;
                      {
                        ATerm f_21 = t;
                        int g_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATmakeAppl(sym_alt_2, n_24, not_null(d_24));
                            ;
                            LocalPopChoice(g_21);
                          }
                        else
                          {
                            t = f_21;
                            {
                              ATerm e_1 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, n_24, term_y_20);
                              {
                                ATerm h_21 = t;
                                int i_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSL_addi(n_24, (ATerm) ATmakeInt(1));
                                    ;
                                    LocalPopChoice(i_21);
                                  }
                                else
                                  {
                                    t = h_21;
                                    t = SSL_addr(n_24, (ATerm) ATmakeInt(1));
                                  }
                                e_1 = t;
                                t = (ATerm) ATmakeAppl(sym__2, m_24, e_1);
                                t = v_24(t);
                              }
                            }
                          }
                      }
                    }
                }
              }
            else
              {
                t = z_20;
                t = (ATerm) ATmakeAppl(sym_alt_2, n_24, not_null(d_24));
              }
          }
          return(t);
        }
        t = v_24(t);
      }
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = o_20;
      {
        ATerm u_24 = NULL;
        u_24 = t;
        if(!(match_cons(t, sym_FlatAlt_0)))
          _fail(t);
        t = u_24;
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm x_24 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_92(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = SRTS_one(x_24, t);
      }
    return(t);
  }
  t = x_24(t);
  return(t);
}
ATerm cons_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  b_25 = t;
  if(match_cons(t, sym_cons_1))
    {
      z_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  y_24 = t;
  t = z_24;
  t = t_82(t);
  a_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, a_25), y_24);
  return(t);
}
ATerm lex_1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  i_25 = t;
  if(match_cons(t, sym_lex_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_25);
  f_25 = t;
  t = g_25;
  t = c_82(t);
  h_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, h_25), f_25);
  return(t);
}
ATerm alt_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym_alt_2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  m_25 = t;
  t = n_25;
  t = m_82(t);
  p_25 = t;
  t = o_25;
  t = n_82(t);
  q_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, p_25, q_25), m_25);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cf_1_0(injective_alt_0_0, t);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = alt_2_0(injective_alt_0_0, injective_alt_0_0, t);
          }
      }
    }
  return(t);
}
ATerm varsym_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  z_25 = t;
  if(match_cons(t, sym_varsym_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  w_25 = t;
  t = x_25;
  t = q_82(t);
  y_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, y_25), w_25);
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = varsym_1_0(_id, t);
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(j_3, l_3, t);
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        ATerm r_21 = t;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              t = cons_1_0(_id, t);
              return(t);
            }
            t = oncetd_1_0(m_3, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_21;
          }
        return(t);
      }
      t = prod_3_0(h_3, _id, i_3, t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              ATerm q_3 (ATerm t)
              {
                ATerm u_21 = t;
                int v_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = sort_1_0(_id, t);
                    ;
                    LocalPopChoice(v_21);
                  }
                else
                  {
                    t = u_21;
                    {
                      ATerm s_3 (ATerm t)
                      {
                        t = sort_1_0(_id, t);
                        return(t);
                      }
                      t = cf_1_0(s_3, t);
                    }
                  }
                return(t);
              }
              ATerm r_3 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(q_3, r_3, t);
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              ATerm w_21 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_3 (ATerm t)
                  {
                    t = cons_1_0(_id, t);
                    return(t);
                  }
                  t = oncetd_1_0(t_3, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = w_21;
                }
              return(t);
            }
            t = prod_3_0(n_3, injective_alt_0_0, o_3, t);
            ;
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm x_21 = t;
              int y_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm y_3 (ATerm t)
                    {
                      ATerm z_21 = t;
                      if((PushChoice() == 0))
                        {
                          t = lit_1_0(_id, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = z_21;
                        }
                      return(t);
                    }
                    ATerm z_3 (ATerm t)
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2_0(y_3, z_3, t);
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    ATerm a_22 = t;
                    int b_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1_0(_id, t);
                        ;
                        LocalPopChoice(b_22);
                      }
                    else
                      {
                        t = a_22;
                        {
                          ATerm c_22 = t;
                          int d_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1_0(v_3, t);
                              ;
                              LocalPopChoice(d_22);
                            }
                          else
                            {
                              t = c_22;
                              {
                                ATerm e_22 = t;
                                int g_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1_0(v_3, t);
                                    ;
                                    LocalPopChoice(g_22);
                                  }
                                else
                                  {
                                    t = e_22;
                                    {
                                      ATerm i_22 = t;
                                      int k_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = iter_1_0(v_3, t);
                                          ;
                                          LocalPopChoice(k_22);
                                        }
                                      else
                                        {
                                          t = i_22;
                                          {
                                            ATerm m_22 = t;
                                            int n_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1_0(v_3, t);
                                                ;
                                                LocalPopChoice(n_22);
                                              }
                                            else
                                              {
                                                t = m_22;
                                                {
                                                  ATerm v_22 = t;
                                                  int w_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_4 (ATerm t)
                                                      {
                                                        t = lit_1_0(_id, t);
                                                        return(t);
                                                      }
                                                      t = iter_sep_2_0(v_3, a_4, t);
                                                      ;
                                                      LocalPopChoice(w_22);
                                                    }
                                                  else
                                                    {
                                                      t = v_22;
                                                      {
                                                        ATerm b_4 (ATerm t)
                                                        {
                                                          t = lit_1_0(_id, t);
                                                          return(t);
                                                        }
                                                        t = iter_star_sep_2_0(v_3, b_4, t);
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
                  ATerm x_3 (ATerm t)
                  {
                    ATerm x_22 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm c_4 (ATerm t)
                        {
                          t = cons_1_0(_id, t);
                          return(t);
                        }
                        t = oncetd_1_0(c_4, t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_22;
                      }
                    return(t);
                  }
                  t = prod_3_0(u_3, v_3, x_3, t);
                  ;
                  LocalPopChoice(y_21);
                }
              else
                {
                  t = x_21;
                  {
                    ATerm y_22 = t;
                    int z_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
                        w_26 = t;
                        if(match_cons(t, sym_prod_3))
                          {
                            x_26 = ATgetArgument(t, 0);
                            c_27 = ATgetArgument(t, 1);
                            f_27 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = x_26;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            y_26 = ATgetFirst((ATermList) t);
                            b_27 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = y_26;
                        if(match_cons(t, sym_cf_1))
                          {
                            z_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = z_26;
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            a_27 = ATgetArgument(t, 0);
                            u_26 = ATgetArgument(t, 1);
                            t = b_27;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = c_27;
                            if(match_cons(t, sym_cf_1))
                              {
                                d_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = d_27;
                            if(match_cons(t, sym_iter_star_sep_2))
                              {
                                e_27 = ATgetArgument(t, 0);
                                v_26 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = f_27;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = e_27;
                            if((a_27 != t))
                              {
                                _fail(t);
                              }
                            t = v_26;
                            if((u_26 != t))
                              {
                                _fail(t);
                              }
                            t = w_26;
                          }
                        else
                          {
                            if(match_cons(t, sym_iter_1))
                              {
                                a_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = b_27;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = c_27;
                            if(match_cons(t, sym_cf_1))
                              {
                                d_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = d_27;
                            if(match_cons(t, sym_iter_star_1))
                              {
                                e_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = f_27;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = e_27;
                            if((a_27 != t))
                              {
                                _fail(t);
                              }
                            t = w_26;
                          }
                        ;
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
                              ATerm d_4 (ATerm t)
                              {
                                ATerm e_4 (ATerm t)
                                {
                                  ATerm c_23 = t;
                                  int f_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm j_27 = NULL;
                                      j_27 = t;
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bracket", 0, ATtrue)))
                                        _fail(t);
                                      t = j_27;
                                      ;
                                      LocalPopChoice(f_23);
                                    }
                                  else
                                    {
                                      t = c_23;
                                      if(!(match_cons(t, sym_bracket_0)))
                                        _fail(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1_0(e_4, t);
                                return(t);
                              }
                              t = prod_3_0(_id, _id, d_4, t);
                              ;
                              LocalPopChoice(b_23);
                            }
                          else
                            {
                              t = a_23;
                              {
                                ATerm k_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
                                k_27 = t;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    ATerm j_23 = ATgetArgument(t, 0);
                                    m_27 = ATgetArgument(t, 1);
                                    o_27 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = m_27;
                                if(match_cons(t, sym_sort_1))
                                  {
                                    n_27 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = n_27;
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("<START>", 0, ATtrue)))
                                  _fail(t);
                                t = o_27;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = k_27;
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
ATerm Inj_0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      q_27 = ATgetArgument(t, 0);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
          {
            r_27 = ATgetFirst((ATermList) k_23);
            {
              ATerm l_23 = (ATerm) ATgetNext((ATermList) k_23);
              if(((ATgetType(l_23) != AT_LIST) || !(ATisEmpty(l_23))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_27;
  t = injection_0_0(t);
  t = r_27;
  return(t);
}
ATerm bottomup_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = bottomup_1_0(s_91, t);
    return(t);
  }
  t = SRTS_all(g_4, t);
  t = s_91(t);
  return(t);
}
ATerm flat_injections_0_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    t = try_1_0(Inj_0_0, t);
    return(t);
  }
  t = bottomup_1_0(h_4, t);
  return(t);
}
ATerm remove_lit_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm k_4 (ATerm t)
    {
      t = is_list_0_0(t);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm m_23 = t;
          if((PushChoice() == 0))
            {
              t = lit_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_23;
            }
          return(t);
        }
        t = filter_1_0(n_4, t);
      }
      return(t);
    }
    t = try_1_0(k_4, t);
    return(t);
  }
  t = topdown_1_0(i_4, t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    t = try_1_0(FlatList_0_0, t);
    return(t);
  }
  t = topdown_1_0(o_4, t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm q_32 (ATerm m_29, ATerm t)
  {
    t = m_29;
    {
      ATerm s_32 (ATerm t)
      {
        ATerm n_29 = NULL,o_29 = NULL,q_29 = NULL,r_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
        n_29 = t;
        if(match_cons(t, sym_appl_2))
          {
            o_29 = ATgetArgument(t, 0);
            v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_29;
        if(match_cons(t, sym_prod_3))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            q_29 = ATgetArgument(t, 1);
            {
              ATerm o_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_29;
        if(match_cons(t, sym_cf_1))
          {
            r_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_29;
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm p_23 = ATgetArgument(t, 0);
            ATerm t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_29;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_29 = ATgetFirst((ATermList) t);
            x_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_29;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = (ATerm) ATinsert(ATempty, w_29);
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_29 = ATgetFirst((ATermList) t);
                z_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_29;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_30 = ATgetFirst((ATermList) t);
                b_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_30;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                ATerm l_30 = NULL,m_30 = NULL;
                t = w_29;
                t = s_32(t);
                l_30 = t;
                t = a_30;
                t = s_32(t);
                m_30 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_30), (ATerm) ATinsert(ATempty, y_29)), l_30);
                t = concat_0_0(t);
              }
            else
              {
                ATerm t_30 = NULL,u_30 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_30 = ATgetFirst((ATermList) t);
                    d_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_30;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_30 = ATgetFirst((ATermList) t);
                    f_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_30;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_29;
                t = s_32(t);
                t_30 = t;
                t = e_30;
                t = s_32(t);
                u_30 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_30), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_30), a_30), y_29)), t_30);
                t = concat_0_0(t);
              }
          }
        return(t);
      }
      t = s_32(t);
    }
    return(t);
  }
  ATerm r_32 (ATerm v_30, ATerm t)
  {
    t = v_30;
    {
      ATerm t_32 (ATerm t)
      {
        ATerm w_30 = NULL,x_30 = NULL,z_30 = NULL,a_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
        w_30 = t;
        if(match_cons(t, sym_appl_2))
          {
            x_30 = ATgetArgument(t, 0);
            d_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_30;
        if(match_cons(t, sym_prod_3))
          {
            ATerm u_23 = ATgetArgument(t, 0);
            z_30 = ATgetArgument(t, 1);
            {
              ATerm v_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_30;
        if(match_cons(t, sym_cf_1))
          {
            a_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_31;
        if(match_cons(t, sym_iter_1))
          {
            ATerm x_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_31;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_31 = ATgetFirst((ATermList) t);
            f_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_31;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = (ATerm) ATinsert(ATempty, e_31);
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_31 = ATgetFirst((ATermList) t);
                h_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_31;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                ATerm o_31 = NULL,p_31 = NULL;
                t = e_31;
                t = t_32(t);
                o_31 = t;
                t = g_31;
                t = t_32(t);
                p_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, p_31), o_31);
                t = concat_0_0(t);
              }
            else
              {
                ATerm u_31 = NULL,v_31 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_31 = ATgetFirst((ATermList) t);
                    j_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_31;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_31;
                t = t_32(t);
                u_31 = t;
                t = i_31;
                t = t_32(t);
                v_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_31), (ATerm) ATinsert(ATempty, g_31)), u_31);
                t = concat_0_0(t);
              }
          }
        return(t);
      }
      t = t_32(t);
    }
    return(t);
  }
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  l_32 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_31 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
      t = y_31;
      if(match_cons(t, sym_prod_3))
        {
          z_31 = ATgetArgument(t, 0);
          e_32 = ATgetArgument(t, 1);
          {
            ATerm y_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_32;
      if(match_cons(t, sym_cf_1))
        {
          f_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_32;
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm e_24 = ATgetArgument(t, 0);
                ATerm f_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(a_24);
            t = i_32;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_32 = ATgetFirst((ATermList) t);
                k_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_32;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = z_31;
                {
                  ATerm g_24 = t;
                  int h_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_32(l_32, t);
                      ;
                      LocalPopChoice(h_24);
                    }
                  else
                    {
                      t = g_24;
                      t = (ATerm) ATinsert(ATempty, j_32);
                    }
                }
              }
            else
              {
                t = z_31;
                t = q_32(l_32, t);
              }
          }
        else
          {
            t = z_23;
            {
              ATerm i_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      ATerm l_24 = ATgetArgument(t, 0);
                      ATerm o_24 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_24);
                  t = z_31;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = i_32;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          a_32 = ATgetFirst((ATermList) t);
                          d_32 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = a_32;
                      if(match_cons(t, sym_cf_1))
                        {
                          b_32 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = b_32;
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm p_24 = ATgetArgument(t, 0);
                          ATerm q_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_32;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = i_32;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          j_32 = ATgetFirst((ATermList) t);
                          k_32 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = k_32;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = j_32;
                      t = FlatList_0_0(t);
                    }
                }
              else
                {
                  t = i_24;
                  {
                    ATerm r_24 = t;
                    int s_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm t_24 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_24);
                        t = i_32;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            j_32 = ATgetFirst((ATermList) t);
                            k_32 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = k_32;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = z_31;
                            {
                              ATerm w_24 = t;
                              int c_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = r_32(l_32, t);
                                  ;
                                  LocalPopChoice(c_25);
                                }
                              else
                                {
                                  t = w_24;
                                  t = (ATerm) ATinsert(ATempty, j_32);
                                }
                            }
                          }
                        else
                          {
                            t = z_31;
                            t = r_32(l_32, t);
                          }
                      }
                    else
                      {
                        t = r_24;
                        if(match_cons(t, sym_iter_star_1))
                          {
                            ATerm d_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = z_31;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = i_32;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                          }
                        else
                          {
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                a_32 = ATgetFirst((ATermList) t);
                                d_32 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = a_32;
                            if(match_cons(t, sym_cf_1))
                              {
                                b_32 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = b_32;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm e_25 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = d_32;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = i_32;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                j_32 = ATgetFirst((ATermList) t);
                                k_32 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = k_32;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = j_32;
                            t = FlatList_0_0(t);
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
      if(!(match_cons(t, sym_FlatList_0)))
        _fail(t);
      t = l_32;
    }
  return(t);
}
ATerm repeat_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  ATerm u_32 (ATerm t)
  {
    ATerm p_4 (ATerm t)
    {
      t = t_90(t);
      t = u_32(t);
      return(t);
    }
    t = try_1_0(p_4, t);
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm appl_to_sort_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    t = repeat_1_0(ApplToSort_0_0, t);
    return(t);
  }
  t = topdown_1_0(q_4, t);
  return(t);
}
ATerm De_Escape3_0_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_32 = ATgetFirst((ATermList) t);
      w_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_32;
  t = De_Escape_0_0(t);
  x_32 = t;
  t = (ATerm) ATinsert(CheckATermList(x_32), v_32);
  return(t);
}
ATerm De_Escape2_0_0 (ATerm t)
{
  ATerm y_32 = NULL,s_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_25 = ATgetFirst((ATermList) t);
      if(((ATgetType(j_25) != AT_INT) || (ATgetInt((ATermInt) j_25) != 92)))
        _fail(t);
      {
        ATerm k_25 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
          {
            ATerm l_25 = ATgetFirst((ATermList) k_25);
            if(((ATgetType(l_25) != AT_INT) || (ATgetInt((ATermInt) l_25) != 92)))
              _fail(t);
            y_32 = (ATerm) ATgetNext((ATermList) k_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_32;
  t = De_Escape_0_0(t);
  s_33 = t;
  t = (ATerm) ATinsert(CheckATermList(s_33), term_s_25);
  return(t);
}
ATerm De_Escape1_0_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_25 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_25) != AT_INT) || (ATgetInt((ATermInt) t_25) != 92)))
        _fail(t);
      {
        ATerm u_25 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
          {
            ATerm v_25 = ATgetFirst((ATermList) u_25);
            if(((ATgetType(v_25) != AT_INT) || (ATgetInt((ATermInt) v_25) != 34)))
              _fail(t);
            t_33 = (ATerm) ATgetNext((ATermList) u_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_33;
  t = De_Escape_0_0(t);
  u_33 = t;
  t = (ATerm) ATinsert(CheckATermList(u_33), term_a_26);
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0_0(t);
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            {
              ATerm f_26 = t;
              int g_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0_0(t);
                  ;
                  LocalPopChoice(g_26);
                }
              else
                {
                  t = f_26;
                  {
                    ATerm j_34 = NULL;
                    j_34 = t;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = j_34;
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL;
  k_34 = t;
  t = SSL_explode_string(k_34);
  t = De_Escape_0_0(t);
  l_34 = t;
  t = SSL_implode_string(l_34);
  return(t);
}
ATerm at_last_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm n_34 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, r_4, t);
        t = j_98(t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = Cons_2_0(_id, n_34, t);
      }
    return(t);
  }
  t = n_34(t);
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,t_35 = NULL;
  a_35 = t;
  t = SSL_explode_string(a_35);
  z_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_35 = ATgetFirst((ATermList) t);
      {
        ATerm j_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_35;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = z_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_26 = ATgetFirst((ATermList) t);
      c_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_35;
  {
    ATerm s_4 (ATerm t)
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm l_26 = ATgetFirst((ATermList) t);
          if(((ATgetType(l_26) != AT_INT) || (ATgetInt((ATermInt) l_26) != 34)))
            _fail(t);
          {
            ATerm m_26 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(m_26) != AT_LIST) || !(ATisEmpty(m_26))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    t = at_last_1_0(s_4, t);
    t_35 = t;
    t = SSL_implode_string(t_35);
  }
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm e_36 = NULL,g_36 = NULL,j_36 = NULL;
  j_36 = t;
  if(match_cons(t, sym_cf_1))
    {
      e_36 = ATgetArgument(t, 0);
      {
        ATerm l_36 = NULL;
        t = e_36;
        t = PpSym_0_0(t);
        l_36 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_26)), l_36), (ATerm) ATinsert(ATempty, term_n_26));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          e_36 = ATgetArgument(t, 0);
          {
            ATerm v_36 = NULL;
            t = e_36;
            t = PpSym_0_0(t);
            v_36 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_26)), v_36), (ATerm) ATinsert(ATempty, term_n_26));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_q_26);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  e_36 = ATgetArgument(t, 0);
                  g_36 = ATgetArgument(t, 1);
                  {
                    ATerm j_37 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(g_36), e_36);
                    t = map_1_0(PpSym_0_0, t);
                    j_37 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_26)), j_37), (ATerm) ATinsert(ATempty, term_r_26));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      e_36 = ATgetArgument(t, 0);
                      t = e_36;
                      t = PpSym_0_0(t);
                      {
                        ATerm t_4 (ATerm t)
                        {
                          t = (ATerm) ATinsert(ATempty, term_t_26);
                          return(t);
                        }
                        t = at_end_1_0(t_4, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          e_36 = ATgetArgument(t, 0);
                          t = e_36;
                          t = PpSym_0_0(t);
                          {
                            ATerm u_4 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_g_27);
                              return(t);
                            }
                            t = at_end_1_0(u_4, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              e_36 = ATgetArgument(t, 0);
                              t = e_36;
                              t = PpSym_0_0(t);
                              {
                                ATerm v_4 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_h_27);
                                  return(t);
                                }
                                t = at_end_1_0(v_4, t);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  e_36 = ATgetArgument(t, 0);
                                  g_36 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_38 = NULL,d_38 = NULL;
                                    t = e_36;
                                    t = PpSym_0_0(t);
                                    c_38 = t;
                                    t = g_36;
                                    t = PpSym_0_0(t);
                                    d_38 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_27)), d_38), c_38), (ATerm) ATinsert(ATempty, term_i_27));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      e_36 = ATgetArgument(t, 0);
                                      g_36 = ATgetArgument(t, 1);
                                      {
                                        ATerm g_38 = NULL,h_38 = NULL;
                                        t = e_36;
                                        t = PpSym_0_0(t);
                                        g_38 = t;
                                        t = g_36;
                                        t = PpSym_0_0(t);
                                        h_38 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_27)), h_38), g_38), (ATerm) ATinsert(ATempty, term_i_27));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm s_27 = t;
                                      int t_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              e_36 = ATgetArgument(t, 0);
                                              {
                                                ATerm u_27 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(t_27);
                                          {
                                            ATerm j_38 = NULL;
                                            t = e_36;
                                            t = PpSym_0_0(t);
                                            j_38 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_27)), j_38);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = s_27;
                                          {
                                            ATerm w_27 = t;
                                            int x_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    e_36 = ATgetArgument(t, 0);
                                                    g_36 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_27 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(x_27);
                                                {
                                                  ATerm n_38 = NULL,o_38 = NULL;
                                                  t = e_36;
                                                  t = PpSym_0_0(t);
                                                  n_38 = t;
                                                  t = g_36;
                                                  t = PpSym_0_0(t);
                                                  o_38 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_27)), o_38), n_38);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = w_27;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    e_36 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_38 = NULL;
                                                      t = e_36;
                                                      t = PpSym_0_0(t);
                                                      q_38 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, q_38), (ATerm) ATinsert(ATempty, term_z_27));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        e_36 = ATgetArgument(t, 0);
                                                        g_36 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_38 = NULL,u_38 = NULL;
                                                          t = e_36;
                                                          t = PpSym_0_0(t);
                                                          t_38 = t;
                                                          t = g_36;
                                                          t = PpSym_0_0(t);
                                                          u_38 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_38), (ATerm) ATinsert(ATempty, term_a_28)), t_38);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            e_36 = ATgetArgument(t, 0);
                                                            g_36 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_38 = NULL,y_38 = NULL;
                                                              t = e_36;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              x_38 = t;
                                                              t = g_36;
                                                              t = PpSym_0_0(t);
                                                              y_38 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_38), (ATerm) ATinsert(ATempty, term_b_28)), x_38);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                e_36 = ATgetArgument(t, 0);
                                                                g_36 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm b_39 = NULL,c_39 = NULL;
                                                                  t = e_36;
                                                                  t = PpSym_0_0(t);
                                                                  b_39 = t;
                                                                  t = g_36;
                                                                  t = PpSym_0_0(t);
                                                                  c_39 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_39), (ATerm) ATinsert(ATempty, term_c_28)), b_39);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    e_36 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm e_39 = NULL;
                                                                      t = e_36;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      e_39 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(e_39), term_d_28);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        e_36 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, e_36);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            e_36 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm h_39 = NULL;
                                                                              t = e_36;
                                                                              {
                                                                                ATerm w_4 (ATerm t)
                                                                                {
                                                                                  t = de_quote_0_0(t);
                                                                                  t = de_escape_0_0(t);
                                                                                  return(t);
                                                                                }
                                                                                t = try_1_0(w_4, t);
                                                                                h_39 = t;
                                                                                t = (ATerm) ATinsert(ATempty, h_39);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm e_28 = t;
                                                                            int f_28 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    e_36 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm g_28 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(f_28);
                                                                                {
                                                                                  ATerm j_39 = NULL;
                                                                                  t = e_36;
                                                                                  {
                                                                                    ATerm x_4 (ATerm t)
                                                                                    {
                                                                                      t = de_quote_0_0(t);
                                                                                      t = de_escape_0_0(t);
                                                                                      return(t);
                                                                                    }
                                                                                    t = try_1_0(x_4, t);
                                                                                    j_39 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, j_39);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = e_28;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_h_28);
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
ATerm sort_1_0 (ATerm p_82 (ATerm), ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,s_39 = NULL,t_39 = NULL;
  t_39 = t;
  if(match_cons(t, sym_sort_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_39);
  l_39 = t;
  t = m_39;
  t = p_82(t);
  s_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, s_39), l_39);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm i_41 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
  {
    ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
    t = j_40;
    if(match_cons(t, sym_cf_1))
      {
        o_40 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = o_40;
    {
      ATerm i_28 = t;
      if((PushChoice() == 0))
        {
          t = sort_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_28;
        }
      t = PpSym_0_0(t);
      p_40 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_28)), p_40), (ATerm) ATinsert(ATempty, term_j_28));
      t = concat_0_0(t);
      t = concat_strings_0_0(t);
      q_40 = t;
      t = SSL_mkterm(q_40, k_40);
    }
    return(t);
  }
  ATerm j_41 (ATerm r_40, ATerm s_40, ATerm t_40, ATerm t)
  {
    ATerm w_40 = NULL,x_40 = NULL;
    t = r_40;
    if(match_cons(t, sym_cf_1))
      {
        w_40 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = w_40;
    t = sort_1_0(_id, t);
    t = PpSym_0_0(t);
    t = concat_strings_0_0(t);
    x_40 = t;
    t = SSL_mkterm(x_40, s_40);
    return(t);
  }
  ATerm y_40 = NULL,a_41 = NULL,b_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  g_41 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_40 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
      t = y_40;
      if(match_cons(t, sym_prod_3))
        {
          ATerm k_28 = ATgetArgument(t, 0);
          a_41 = ATgetArgument(t, 1);
          {
            ATerm l_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_41 = ATgetFirst((ATermList) t);
          f_41 = (ATerm) ATgetNext((ATermList) t);
          t = f_41;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = a_41;
              if(match_cons(t, sym_sort_1))
                {
                  b_41 = ATgetArgument(t, 0);
                  t = b_41;
                  if(match_string(t, "<START>"))
                    {
                      ATerm m_28 = t;
                      int n_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_41(a_41, d_41, g_41, t);
                          ;
                          LocalPopChoice(n_28);
                        }
                      else
                        {
                          t = m_28;
                          {
                            ATerm o_28 = t;
                            int p_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_41(a_41, d_41, g_41, t);
                                ;
                                LocalPopChoice(p_28);
                              }
                            else
                              {
                                t = o_28;
                                t = e_41;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm q_28 = t;
                      int r_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_41(a_41, d_41, g_41, t);
                          ;
                          LocalPopChoice(r_28);
                        }
                      else
                        {
                          t = q_28;
                          t = j_41(a_41, d_41, g_41, t);
                        }
                    }
                }
              else
                {
                  ATerm s_28 = t;
                  int t_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_41(a_41, d_41, g_41, t);
                      ;
                      LocalPopChoice(t_28);
                    }
                  else
                    {
                      t = s_28;
                      t = j_41(a_41, d_41, g_41, t);
                    }
                }
            }
          else
            {
              t = a_41;
              {
                ATerm u_28 = t;
                int v_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_41(a_41, d_41, g_41, t);
                    ;
                    LocalPopChoice(v_28);
                  }
                else
                  {
                    t = u_28;
                    t = j_41(a_41, d_41, g_41, t);
                  }
              }
            }
        }
      else
        {
          t = a_41;
          {
            ATerm w_28 = t;
            int x_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_41(a_41, d_41, g_41, t);
                ;
                LocalPopChoice(x_28);
              }
            else
              {
                t = w_28;
                t = j_41(a_41, d_41, g_41, t);
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_ApplToSort_0)))
        _fail(t);
      t = g_41;
    }
  return(t);
}
ATerm layout_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  n_41 = t;
  if(match_cons(t, sym_layout_1))
    {
      l_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_41);
  k_41 = t;
  t = l_41;
  t = b_77(t);
  m_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, m_41), k_41);
  return(t);
}
ATerm opt_1_0 (ATerm d_82 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
  u_41 = t;
  if(match_cons(t, sym_opt_1))
    {
      s_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_41);
  r_41 = t;
  t = s_41;
  t = d_82(t);
  t_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, t_41), r_41);
  return(t);
}
ATerm cf_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  b_42 = t;
  if(match_cons(t, sym_cf_1))
    {
      z_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_42);
  y_41 = t;
  t = z_41;
  t = b_82(t);
  a_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, a_42), y_41);
  return(t);
}
ATerm is_layout_p__0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_4 (ATerm t)
      {
        ATerm z_4 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            ATerm b_5 (ATerm t)
            {
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              return(t);
            }
            t = opt_1_0(b_5, t);
            return(t);
          }
          t = cf_1_0(a_5, t);
          return(t);
        }
        t = prod_3_0(_id, z_4, _id, t);
        return(t);
      }
      t = appl_2_0(y_4, _id, t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 (ATerm t)
            {
              ATerm e_5 (ATerm t)
              {
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                return(t);
              }
              t = opt_1_0(e_5, t);
              return(t);
            }
            t = cf_1_0(c_5, t);
            ;
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            t = layout_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              t = filter_1_0(m_104, t);
              return(t);
            }
            t = Cons_2_0(m_104, f_5, t);
            ;
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            {
              ATerm i_42 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_29 = ATgetFirst((ATermList) t);
                  i_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_42;
              t = filter_1_0(m_104, t);
            }
          }
      }
    }
  return(t);
}
ATerm prod_3_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  r_42 = t;
  if(match_cons(t, sym_prod_3))
    {
      l_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
      n_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  k_42 = t;
  t = l_42;
  t = v_82(t);
  o_42 = t;
  t = m_42;
  t = w_82(t);
  p_42 = t;
  t = n_42;
  t = x_82(t);
  q_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, o_42, p_42, q_42), k_42);
  return(t);
}
ATerm topdown_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  t = r_91(t);
  {
    ATerm g_5 (ATerm t)
    {
      t = topdown_1_0(r_91, t);
      return(t);
    }
    t = SRTS_all(g_5, t);
  }
  return(t);
}
ATerm remove_x_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm j_5 (ATerm t)
      {
        ATerm m_5 (ATerm t)
        {
          ATerm v_5 (ATerm t)
          {
            ATerm h_29 = t;
            if((PushChoice() == 0))
              {
                t = s_89(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_29;
              }
            return(t);
          }
          t = filter_1_0(v_5, t);
          return(t);
        }
        t = prod_3_0(m_5, _id, _id, t);
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        ATerm w_5 (ATerm t)
        {
          ATerm i_29 = t;
          if((PushChoice() == 0))
            {
              t = s_89(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_29;
            }
          return(t);
        }
        t = filter_1_0(w_5, t);
        return(t);
      }
      t = appl_2_0(j_5, k_5, t);
      return(t);
    }
    t = try_1_0(i_5, t);
    return(t);
  }
  t = topdown_1_0(h_5, t);
  return(t);
}
ATerm remove_layout_0_0 (ATerm t)
{
  t = remove_x_1_0(is_layout_p__0_0, t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm v_42 = NULL;
  ATerm x_5 (ATerm t)
  {
    ATerm w_42 = NULL;
    w_42 = t;
    t = SSL_explode_string(w_42);
    return(t);
  }
  t = map_1_0(x_5, t);
  t = concat_0_0(t);
  v_42 = t;
  t = SSL_implode_string(v_42);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm f_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      f_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_43;
  if(match_cons(t, sym_prod_3))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
      {
        ATerm k_29 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = h_43;
  if(match_cons(t, sym_cf_1))
    {
      i_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_43;
  if(match_cons(t, sym_layout_0))
    {
      t = l_43;
      t = concat_strings_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          j_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_43;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = l_43;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_l_29;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_43 = ATgetFirst((ATermList) t);
              n_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_43;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, m_43));
        }
    }
  return(t);
}
ATerm Kids_0_0 (ATerm t)
{
  ATerm q_43 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm p_29 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_43;
  t = concat_0_0(t);
  return(t);
}
ATerm appl_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  w_43 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_43);
  r_43 = t;
  t = s_43;
  t = y_82(t);
  u_43 = t;
  t = t_43;
  t = z_82(t);
  v_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, u_43, v_43), r_43);
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm a_44 = NULL;
  ATerm d_44 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 (ATerm t)
        {
          t = map_1_0(d_44, t);
          return(t);
        }
        t = appl_2_0(_id, y_5, t);
        t = Kids_0_0(t);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm b_44 = NULL;
          b_44 = t;
          t = (ATerm) ATinsert(ATempty, b_44);
        }
      }
    return(t);
  }
  t = d_44(t);
  a_44 = t;
  t = SSL_implode_string(a_44);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm u_44 = NULL,w_44 = NULL,x_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  a_45 = t;
  if(match_cons(t, sym_appl_2))
    {
      b_45 = ATgetArgument(t, 0);
      {
        ATerm u_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_45;
  if(match_cons(t, sym_prod_3))
    {
      c_45 = ATgetArgument(t, 0);
      d_45 = ATgetArgument(t, 1);
      {
        ATerm g_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_45;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm j_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_30);
        t = c_45;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_44 = ATgetFirst((ATermList) t);
            w_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_44;
        if(match_cons(t, sym_lex_1))
          {
            ATerm k_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_45;
        t = yield_0_0(t);
      }
    else
      {
        t = h_30;
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm p_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(o_30);
              t = a_45;
              t = yield_0_0(t);
            }
          else
            {
              t = n_30;
              {
                ATerm q_30 = t;
                int r_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm s_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_30);
                    {
                      ATerm h_45 = NULL;
                      t = a_45;
                      t = yield_0_0(t);
                      h_45 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, h_45);
                    }
                  }
                else
                  {
                    t = q_30;
                    if(match_cons(t, sym_varsym_1))
                      {
                        e_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_45;
                    if(match_cons(t, sym_cf_1))
                      {
                        x_44 = ATgetArgument(t, 0);
                        t = x_44;
                        {
                          ATerm y_30 = t;
                          int b_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm c_31 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(b_31);
                              t = c_45;
                              {
                                ATerm k_31 = t;
                                int l_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_45 = NULL;
                                    t = a_45;
                                    t = yield_0_0(t);
                                    i_45 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, i_45);
                                    ;
                                    LocalPopChoice(l_31);
                                  }
                                else
                                  {
                                    t = k_31;
                                    {
                                      ATerm j_45 = NULL;
                                      t = a_45;
                                      t = yield_0_0(t);
                                      j_45 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, j_45);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = y_30;
                              {
                                ATerm m_31 = t;
                                int n_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm q_31 = ATgetArgument(t, 0);
                                        ATerm r_31 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(n_31);
                                    t = c_45;
                                    {
                                      ATerm s_31 = t;
                                      int t_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_45 = NULL;
                                          t = a_45;
                                          t = yield_0_0(t);
                                          k_45 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, k_45);
                                          ;
                                          LocalPopChoice(t_31);
                                        }
                                      else
                                        {
                                          t = s_31;
                                          {
                                            ATerm l_45 = NULL;
                                            t = a_45;
                                            t = yield_0_0(t);
                                            l_45 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, l_45);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = m_31;
                                    {
                                      ATerm w_31 = t;
                                      int x_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm c_32 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(x_31);
                                          t = c_45;
                                          {
                                            ATerm g_32 = t;
                                            int h_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm m_45 = NULL;
                                                t = a_45;
                                                t = yield_0_0(t);
                                                m_45 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, m_45);
                                                ;
                                                LocalPopChoice(h_32);
                                              }
                                            else
                                              {
                                                t = g_32;
                                                {
                                                  ATerm n_45 = NULL;
                                                  t = a_45;
                                                  t = yield_0_0(t);
                                                  n_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, n_45);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = w_31;
                                          {
                                            ATerm m_32 = t;
                                            int n_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm o_32 = ATgetArgument(t, 0);
                                                    ATerm p_32 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(n_32);
                                                t = c_45;
                                                {
                                                  ATerm z_32 = t;
                                                  int a_33 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_45 = NULL;
                                                      t = a_45;
                                                      t = yield_0_0(t);
                                                      o_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, o_45);
                                                      ;
                                                      LocalPopChoice(a_33);
                                                    }
                                                  else
                                                    {
                                                      t = z_32;
                                                      {
                                                        ATerm p_45 = NULL;
                                                        t = a_45;
                                                        t = yield_0_0(t);
                                                        p_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, p_45);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = m_32;
                                                {
                                                  ATerm q_45 = NULL;
                                                  t = a_45;
                                                  t = yield_0_0(t);
                                                  q_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, q_45);
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
                        ATerm r_45 = NULL;
                        t = a_45;
                        t = yield_0_0(t);
                        r_45 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, r_45);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  t = w_91(t);
  {
    ATerm z_5 (ATerm t)
    {
      t = downup2_2_0(w_91, x_91, t);
      return(t);
    }
    t = SRTS_all(z_5, t);
    t = x_91(t);
  }
  return(t);
}
ATerm flat_lex_0_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    t = try_1_0(implode_lexical_0_0, t);
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = try_1_0(flat_layout_0_0, t);
    return(t);
  }
  t = downup2_2_0(a_6, b_6, t);
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm s_45 = NULL;
  s_45 = t;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        ATerm e_6 (ATerm t)
        {
          if(!(match_cons(t, sym_FlatLex_0)))
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(e_6, t);
        return(t);
      }
      t = _2_0(d_6, flat_lex_0_0, t);
      return(t);
    }
    t = try_1_0(c_6, t);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm g_6 (ATerm t)
        {
          ATerm h_6 (ATerm t)
          {
            if(!(match_cons(t, sym_RemoveLayout_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(h_6, t);
          return(t);
        }
        t = _2_0(g_6, remove_layout_0_0, t);
        return(t);
      }
      t = try_1_0(f_6, t);
      {
        ATerm i_6 (ATerm t)
        {
          ATerm j_6 (ATerm t)
          {
            t = option_defined_1_0(ApplToSort_0_0, t);
            return(t);
          }
          t = _2_0(j_6, appl_to_sort_0_0, t);
          return(t);
        }
        t = try_1_0(i_6, t);
        {
          ATerm k_6 (ATerm t)
          {
            ATerm l_6 (ATerm t)
            {
              t = option_defined_1_0(FlatList_0_0, t);
              return(t);
            }
            t = _2_0(l_6, flat_list_0_0, t);
            return(t);
          }
          t = try_1_0(k_6, t);
          {
            ATerm m_6 (ATerm t)
            {
              ATerm n_6 (ATerm t)
              {
                ATerm o_6 (ATerm t)
                {
                  if(!(match_cons(t, sym_RemoveLit_0)))
                    _fail(t);
                  return(t);
                }
                t = option_defined_1_0(o_6, t);
                return(t);
              }
              t = _2_0(n_6, remove_lit_0_0, t);
              return(t);
            }
            t = try_1_0(m_6, t);
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm r_6 (ATerm t)
                  {
                    if(!(match_cons(t, sym_FlatInj_0)))
                      _fail(t);
                    return(t);
                  }
                  t = option_defined_1_0(r_6, t);
                  return(t);
                }
                t = _2_0(q_6, flat_injections_0_0, t);
                return(t);
              }
              t = try_1_0(p_6, t);
              {
                ATerm s_6 (ATerm t)
                {
                  ATerm t_6 (ATerm t)
                  {
                    t = option_defined_1_0(FlatAlt_0_0, t);
                    return(t);
                  }
                  t = _2_0(t_6, flat_alt_0_0, t);
                  return(t);
                }
                t = try_1_0(s_6, t);
                {
                  ATerm u_6 (ATerm t)
                  {
                    ATerm v_6 (ATerm t)
                    {
                      ATerm w_6 (ATerm t)
                      {
                        if(!(match_cons(t, sym_ReplaceAppl_0)))
                          _fail(t);
                        return(t);
                      }
                      t = option_defined_1_0(w_6, t);
                      return(t);
                    }
                    t = _2_0(v_6, replace_appl_0_0, t);
                    return(t);
                  }
                  t = try_1_0(u_6, t);
                  {
                    ATerm x_6 (ATerm t)
                    {
                      ATerm y_6 (ATerm t)
                      {
                        ATerm z_6 (ATerm t)
                        {
                          if(!(match_cons(t, sym_RemoveSeq_0)))
                            _fail(t);
                          return(t);
                        }
                        t = option_defined_1_0(z_6, t);
                        return(t);
                      }
                      t = _2_0(y_6, remove_seq_0_0, t);
                      return(t);
                    }
                    t = try_1_0(x_6, t);
                    {
                      ATerm a_7 (ATerm t)
                      {
                        ATerm b_7 (ATerm t)
                        {
                          ATerm d_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_RemovePT_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(d_7, t);
                          return(t);
                        }
                        ATerm c_7 (ATerm t)
                        {
                          ATerm g_1 = NULL;
                          if(match_cons(t, sym_parsetree_2))
                            {
                              g_1 = ATgetArgument(t, 0);
                              {
                                ATerm b_33 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = g_1;
                          return(t);
                        }
                        t = _2_0(b_7, c_7, t);
                        return(t);
                      }
                      t = try_1_0(a_7, t);
                      {
                        ATerm e_7 (ATerm t)
                        {
                          if((s_45 != t))
                            {
                              _fail(t);
                            }
                          t = _2_0(_id, implodeAsfix_0_0, t);
                          return(t);
                        }
                        t = try_1_0(e_7, t);
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
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_45 = NULL,w_45 = NULL;
  t_45 = t;
  t = term_c_33;
  t = whoami_0_0(t);
  w_45 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), w_45), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = t_45;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm z_45 = NULL,a_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_45 = ATgetFirst((ATermList) t);
            a_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_45;
        {
          ATerm f_7 (ATerm t)
          {
            t = a_46;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  e_46 = t;
  t = SSL_explode_term(e_46);
  if(match_cons(t, sym__2))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_46;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  ATerm g_46 (ATerm t)
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_46, t);
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_97(t);
      }
    return(t);
  }
  t = g_46(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_46;
  {
    ATerm g_7 (ATerm t)
    {
      t = h_46;
      return(t);
    }
    t = at_end_1_0(g_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm j_46 = NULL;
  ATerm h_7 (ATerm t)
  {
    ATerm k_46 = NULL;
    k_46 = t;
    t = SSL_explode_string(k_46);
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    ATerm l_46 = NULL;
    l_46 = t;
    t = SSL_explode_string(l_46);
    return(t);
  }
  t = _2_0(h_7, i_7, t);
  t = conc_0_0(t);
  j_46 = t;
  t = SSL_implode_string(j_46);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_46 = NULL;
      r_46 = t;
      t = SSL_is_string(r_46);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm m_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(k_7, t);
            ;
            LocalPopChoice(n_33);
          }
        else
          {
            t = m_33;
            {
              ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
              v_46 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_46 = ATgetArgument(t, 0);
                  t = w_46;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_46 = ATgetArgument(t, 0);
                      t = w_46;
                      {
                        ATerm o_33 = t;
                        int p_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_33);
                          }
                        else
                          {
                            t = o_33;
                            {
                              ATerm l_7 (ATerm t)
                              {
                                t = term_q_33;
                                return(t);
                              }
                              t = debug_1_0(l_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_47 = NULL,c_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_46 = ATgetArgument(t, 0);
                          x_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_46;
                      t = eval_config_0_0(t);
                      b_47 = t;
                      t = x_46;
                      t = eval_config_0_0(t);
                      c_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_47, c_47);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_47);
  {
    ATerm m_7 (ATerm t)
    {
      ATerm g_47 = NULL;
      t = eval_config_0_0(t);
      g_47 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_47, g_47);
      t = g_47;
      return(t);
    }
    t = try_1_0(m_7, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm h_47 = NULL,i_47 = NULL;
    h_47 = t;
    t = term_r_33;
    t = get_config_0_0(t);
    i_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_47, term_v_33);
    t = geq_0_0(t);
    t = h_47;
    t = y_110(t);
    return(t);
  }
  t = try_1_0(n_7, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm j_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm w_33 = ATgetArgument(t, 0);
        if(match_cons(w_33, sym_Stream_1))
          {
            j_47 = ATgetArgument(w_33, 0);
          }
        else
          _fail(t);
        l_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(j_47, l_47);
    m_47 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), m_47);
    n_47 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, n_47);
    return(t);
  }
  t = WriteToFile_1_0(o_7, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_47, term_x_33);
  t = open_stream_0_0(t);
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_47, p_47);
  t = u_109(t);
  t = fclose_0_0(t);
  t = p_47;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm y_33 = ATgetArgument(t, 0);
        if(match_cons(y_33, sym_Stream_1))
          {
            r_47 = ATgetArgument(y_33, 0);
          }
        else
          _fail(t);
        s_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(r_47, s_47);
    t_47 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_47);
    return(t);
  }
  t = WriteToFile_1_0(p_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  u_47 = t;
  {
    ATerm q_7 (ATerm t)
    {
      ATerm z_33 = t;
      int a_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                v_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(r_7, t);
          ;
          LocalPopChoice(a_34);
        }
      else
        {
          t = z_33;
          t = term_b_34;
          v_47 = t;
        }
      return(t);
    }
    t = _2_0(q_7, _id, t);
    t = u_47;
    {
      ATerm s_7 (ATerm t)
      {
        ATerm t_7 (ATerm t)
        {
          t = not_null(v_47);
          return(t);
        }
        t = split_2_0(t_7, _id, t);
        return(t);
      }
      t = _2_0(_id, s_7, t);
      {
        ATerm c_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_7 (ATerm t)
            {
              ATerm v_7 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(v_7, t);
              return(t);
            }
            t = _2_0(u_7, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(d_34);
          }
        else
          {
            t = c_34;
            t = _2_0(_id, WriteToTextFile_0_0, t);
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
  w_47 = t;
  t = dtime_0_0(t);
  t = w_47;
  t = u_116(t);
  x_47 = t;
  t = dtime_0_0(t);
  y_47 = t;
  t = x_47;
  if(match_cons(t, sym__2))
    {
      z_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_47), (ATerm) ATmakeAppl(sym_Runtime_1, y_47)), a_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_48 (ATerm i_48, ATerm t)
  {
    t = SSL_fclose(i_48);
    return(t);
  }
  ATerm l_48 = NULL,m_48 = NULL;
  m_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_48 = ATgetArgument(t, 0);
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_48);
            ;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            t = o_48(m_48, t);
          }
      }
    }
  else
    {
      t = o_48(m_48, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  p_48 = t;
  t = g_109(t);
  q_48 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_48), q_48));
  t = p_48;
  return(t);
}
ATerm _2_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
  w_48 = t;
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      t_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_48);
  r_48 = t;
  t = s_48;
  t = g_75(t);
  u_48 = t;
  t = t_48;
  t = h_75(t);
  v_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, u_48, v_48), r_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_49 = NULL;
  t = SSL_stdin_stream();
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_49);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_49 = NULL;
  t = SSL_stdout_stream();
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_49);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_49 = NULL;
  t = SSL_stderr_stream();
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_49);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm e_49 = NULL;
  e_49 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      ATerm h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,t_1 = NULL;
        s_1 = t;
        t = SSL_explode_term(s_1);
        if(match_cons(t, sym__2))
          {
            ATerm o_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_34) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_34 = ATgetArgument(t, 1);
              if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
                {
                  t_1 = ATgetFirst((ATermList) p_34);
                  {
                    ATerm q_34 = (ATerm) ATgetNext((ATermList) p_34);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = i_34;
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
              ATerm w_7 (ATerm t)
              {
                ATerm k_49 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    k_49 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_49;
                return(t);
              }
              t = _2_0(w_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_49 = ATgetArgument(t, 0);
                  i_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_49, i_49);
              j_49 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_49);
              ;
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              {
                ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
                ATerm x_7 (ATerm t)
                {
                  ATerm o_49 = NULL;
                  o_49 = t;
                  t = SSL_is_string(o_49);
                  return(t);
                }
                t = _2_0(x_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_49 = ATgetArgument(t, 0);
                    m_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_49, m_49);
                n_49 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_49);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_49 = NULL;
      s_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_49, term_v_34);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      {
        ATerm y_7 (ATerm t)
        {
          t = term_w_34;
          return(t);
        }
        t = debug_1_0(y_7, t);
        _fail(t);
      }
    }
  p_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_49);
  q_49 = t;
  t = p_49;
  t = fclose_0_0(t);
  t = q_49;
  return(t);
}
ATerm split_2_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  t = y_104(t);
  v_49 = t;
  t = u_49;
  t = z_104(t);
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_49, w_49);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  x_49 = t;
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              y_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(z_7, t);
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = term_d_35;
        y_49 = t;
      }
    t = x_49;
    {
      ATerm a_8 (ATerm t)
      {
        t = not_null(y_49);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, a_8, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    ATerm a_50 = NULL;
    a_50 = t;
    if(match_string(t, "-k"))
      {
        t = a_50;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = a_50;
      }
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    ATerm b_50 = NULL,c_50 = NULL;
    b_50 = t;
    t = SSL_string_to_int(b_50);
    c_50 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_50);
    t = b_50;
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    t = term_e_35;
    return(t);
  }
  t = ArgOption_3_0(b_8, c_8, d_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 (ATerm t)
      {
        ATerm e_50 = NULL;
        e_50 = t;
        if(match_string(t, "-S"))
          {
            t = e_50;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = e_50;
          }
        return(t);
      }
      ATerm f_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_i_35;
        return(t);
      }
      ATerm g_8 (ATerm t)
      {
        t = term_j_35;
        return(t);
      }
      t = Option_3_0(e_8, f_8, g_8, t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm k_8 (ATerm t)
            {
              ATerm f_50 = NULL,g_50 = NULL;
              f_50 = t;
              t = SSL_string_to_int(f_50);
              g_50 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_50);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, f_50);
              return(t);
            }
            ATerm l_8 (ATerm t)
            {
              t = term_m_35;
              return(t);
            }
            t = ArgOption_3_0(j_8, k_8, l_8, t);
            ;
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
            {
              ATerm m_8 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm n_8 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_35;
                return(t);
              }
              ATerm o_8 (ATerm t)
              {
                t = term_o_35;
                return(t);
              }
              t = Option_3_0(m_8, n_8, o_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm i_50 = NULL;
    i_50 = t;
    if(match_string(t, "-o"))
      {
        t = i_50;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = i_50;
      }
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    ATerm j_50 = NULL;
    j_50 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_50);
    t = (ATerm) ATmakeAppl(sym_Output_1, j_50);
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    t = term_r_35;
    return(t);
  }
  t = ArgOption_3_0(p_8, q_8, r_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm s_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = s_35;
      {
        ATerm s_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_35;
          return(t);
        }
        ATerm u_8 (ATerm t)
        {
          t = term_w_35;
          return(t);
        }
        t = Option_3_0(s_8, t_8, u_8, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  m_50 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = m_50;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm u_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_50 = ATgetFirst((ATermList) t);
          o_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_50 = ATgetFirst((ATermList) t);
          q_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_50;
      t = j_0(t);
      t = p_50;
      t = k_0(t);
      u_50 = t;
      t = (ATerm) ATinsert(CheckATermList(q_50), u_50);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_8 (ATerm t)
  {
    ATerm w_50 = NULL;
    w_50 = t;
    if(match_string(t, "-i"))
      {
        t = w_50;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = w_50;
      }
    return(t);
  }
  ATerm w_8 (ATerm t)
  {
    ATerm x_50 = NULL;
    x_50 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), x_50);
    t = (ATerm) ATmakeAppl(sym_Input_1, x_50);
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    t = term_x_35;
    return(t);
  }
  t = ArgOption_3_0(v_8, w_8, x_8, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_33;
  t = whoami_0_0(t);
  y_50 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), y_50));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_36;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm d_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_103(t);
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = d_36;
      {
        ATerm b_51 = NULL,c_51 = NULL,f_51 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_51 = ATgetFirst((ATermList) t);
            c_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_51;
        t = foldr_2_0(j_103, k_103, t);
        f_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_51, f_51);
        t = k_103(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  g_51 = t;
  t = SSL_explode_term(g_51);
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      h_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_51;
  t = foldr_2_0(c_107, d_107, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_51 = NULL;
  t = times_0_0(t);
  {
    ATerm y_8 (ATerm t)
    {
      t = term_h_35;
      return(t);
    }
    ATerm z_8 (ATerm t)
    {
      ATerm j_51 = NULL,k_51 = NULL;
      if(match_cons(t, sym__2))
        {
          j_51 = ATgetArgument(t, 0);
          k_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_51, k_51);
            ;
            LocalPopChoice(k_36);
          }
        else
          {
            t = i_36;
            t = SSL_addr(j_51, k_51);
          }
      }
      return(t);
    }
    t = crush_2_0(y_8, z_8, t);
    i_51 = t;
    t = SSL_TicksToSeconds(i_51);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_51;
        if((u_51 != t))
          {
            _fail(t);
          }
        t = t_51;
        ;
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        t = t_51;
        {
          ATerm o_36 = t;
          int p_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_51, v_51);
              ;
              LocalPopChoice(p_36);
            }
          else
            {
              t = o_36;
              t = SSL_gtr(u_51, v_51);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    ATerm y_51 = NULL,z_51 = NULL;
    y_51 = t;
    t = term_r_33;
    t = get_config_0_0(t);
    z_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_51, term_y_20);
    t = geq_0_0(t);
    t = y_51;
    t = x_110(t);
    return(t);
  }
  t = try_1_0(a_9, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm b_9 (ATerm t)
  {
    ATerm b_52 = NULL,c_52 = NULL;
    t = run_time_0_0(t);
    b_52 = t;
    t = term_c_33;
    t = whoami_0_0(t);
    c_52 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), b_52), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), c_52));
    t = (ATerm) ATmakeAppl(sym__2, term_q_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_36), b_52), term_r_36), c_52));
    return(t);
  }
  t = if_verbose1_1_0(b_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  ATerm t_36 = t;
  int u_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_36);
    }
  else
    {
      t = t_36;
      {
        ATerm c_9 (ATerm t)
        {
          ATerm x_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(y_36);
            }
          else
            {
              t = x_36;
              {
                ATerm z_36 = t;
                int a_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(a_37);
                  }
                else
                  {
                    t = z_36;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(c_9, t);
      }
    }
  t = s_117(t);
  return(t);
}
ATerm map_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm e_52 (ATerm t)
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = Cons_2_0(i_97, e_52, t);
      }
    return(t);
  }
  t = e_52(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_52 = ATgetFirst((ATermList) t);
      h_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_52 = NULL,m_52 = NULL;
        t = h_52;
        t = h_0(t);
        l_52 = t;
        t = g_52;
        t = g_0(t);
        m_52 = t;
        t = h_52;
        {
          ATerm d_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_52), m_52);
            return(t);
          }
          t = reverse_acc_2_0(g_0, d_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_33;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, e_9, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm o_52 = NULL;
  t = term_c_33;
  t = f_0(t);
  o_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_37), o_52), term_d_37);
  return(t);
}
ATerm Program_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  s_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_52);
  p_52 = t;
  t = q_52;
  t = z_81(t);
  r_52 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, r_52), p_52);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_52 = NULL;
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_36;
      t = get_config_0_0(t);
      w_52 = t;
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm f_9 (ATerm t)
        {
          ATerm g_9 (ATerm t)
          {
            w_52 = t;
            return(t);
          }
          t = Program_1_0(g_9, t);
          return(t);
        }
        t = option_defined_1_0(f_9, t);
      }
    }
  {
    ATerm h_9 (ATerm t)
    {
      ATerm i_9 (ATerm t)
      {
        t = w_52;
        return(t);
      }
      t = short_description_1_0(i_9, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(h_9, t);
    t = term_h_37;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm j_9 (ATerm t)
      {
        ATerm x_52 = NULL;
        x_52 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, x_52), term_i_37);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(j_9, t);
      {
        ATerm k_9 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_37), term_m_37), term_l_37), term_k_37);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(k_9, t);
      }
    }
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
  b_53 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      z_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_53);
  y_52 = t;
  t = z_52;
  t = a_82(t);
  a_53 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, a_53), y_52);
  return(t);
}
ATerm fetch_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm f_53 (ATerm t)
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_97, _id, t);
        ;
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        t = Cons_2_0(_id, f_53, t);
      }
    return(t);
  }
  t = f_53(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm x_112 (ATerm), ATerm t)
{
  t = fetch_1_0(x_112, t);
  return(t);
}
ATerm lit_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
  j_53 = t;
  if(match_cons(t, sym_lit_1))
    {
      h_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_53);
  g_53 = t;
  t = h_53;
  t = f_82(t);
  i_53 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, i_53), g_53);
  return(t);
}
ATerm list_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm n_53 (ATerm t)
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = Cons_2_0(l_97, n_53, t);
      }
    return(t);
  }
  t = n_53(t);
  return(t);
}
ATerm seq_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
  r_53 = t;
  if(match_cons(t, sym_seq_1))
    {
      p_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_53);
  o_53 = t;
  t = p_53;
  t = e_82(t);
  q_53 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, q_53), o_53);
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
  a_54 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      w_53 = ATgetArgument(t, 0);
      x_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_54);
  v_53 = t;
  t = w_53;
  t = i_82(t);
  y_53 = t;
  t = x_53;
  t = j_82(t);
  z_53 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, y_53, z_53), v_53);
  return(t);
}
ATerm iter_star_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
  h_54 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      f_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_54);
  e_54 = t;
  t = f_54;
  t = l_82(t);
  g_54 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, g_54), e_54);
  return(t);
}
ATerm iter_sep_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  q_54 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      m_54 = ATgetArgument(t, 0);
      n_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_54);
  l_54 = t;
  t = m_54;
  t = g_82(t);
  o_54 = t;
  t = n_54;
  t = h_82(t);
  p_54 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, o_54, p_54), l_54);
  return(t);
}
ATerm iter_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL;
  x_54 = t;
  if(match_cons(t, sym_iter_1))
    {
      v_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_54);
  u_54 = t;
  t = v_54;
  t = k_82(t);
  w_54 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, w_54), u_54);
  return(t);
}
ATerm list_sort_0_0 (ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_sep_2_0(_id, _id, t);
            ;
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
                  t = iter_star_1_0(_id, t);
                  ;
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  t = iter_star_sep_2_0(_id, _id, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_55 = NULL;
      c_55 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = c_55;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_38 = ATgetFirst((ATermList) t);
              ATerm b_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = c_55;
        }
      ;
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
      {
        ATerm f_55 (ATerm t)
        {
          ATerm e_38 = t;
          int f_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = list_sort_0_0(t);
              ;
              LocalPopChoice(f_38);
            }
          else
            {
              t = e_38;
              {
                ATerm l_9 (ATerm t)
                {
                  ATerm m_9 (ATerm t)
                  {
                    ATerm i_38 = t;
                    int k_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = lit_1_0(_id, t);
                        ;
                        LocalPopChoice(k_38);
                      }
                    else
                      {
                        t = i_38;
                        {
                          ATerm l_38 = t;
                          int m_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_layout_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(m_38);
                            }
                          else
                            {
                              t = l_38;
                              t = f_55(t);
                            }
                        }
                      }
                    return(t);
                  }
                  t = list_1_0(m_9, t);
                  return(t);
                }
                t = seq_1_0(l_9, t);
              }
            }
          return(t);
        }
        t = f_55(t);
      }
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL;
  g_55 = t;
  {
    ATerm p_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(r_38);
      }
    else
      {
        t = p_38;
        t = (ATerm) ATinsert(ATempty, g_55);
      }
    h_55 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_55);
    t = g_55;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_36;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm s_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_89(t);
      ;
      LocalPopChoice(v_38);
    }
  else
    {
      t = s_38;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm p_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_f_39;
        return(t);
      }
      ATerm q_9 (ATerm t)
      {
        t = term_g_39;
        return(t);
      }
      t = Option_3_0(o_9, p_9, q_9, t);
      ;
      LocalPopChoice(z_38);
    }
  else
    {
      t = w_38;
      {
        ATerm r_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm u_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_i_39;
          return(t);
        }
        ATerm v_9 (ATerm t)
        {
          t = term_k_39;
          return(t);
        }
        t = Option_3_0(r_9, u_9, v_9, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
  if(match_cons(t, sym__3))
    {
      k_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
      m_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_55, l_55);
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_39 = ATgetArgument(t, 0);
            ATerm q_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_55, l_55);
        ;
        LocalPopChoice(o_39);
      }
    else
      {
        t = n_39;
        t = (ATerm) ATempty;
      }
    n_55 = t;
    t = SSL_table_put(k_55, l_55, (ATerm) ATinsert(CheckATermList(n_55), m_55));
    t = (ATerm) ATmakeAppl(sym__3, k_55, l_55, m_55);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  ATerm t_55 = NULL;
  t = term_c_33;
  t = c_114(t);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_39, term_u_39, t_55);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_55;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm a_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_55 = ATgetFirst((ATermList) t);
          x_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_55;
      t = a_0(t);
      t = term_c_33;
      t = b_0(t);
      a_56 = t;
      t = (ATerm) ATinsert(CheckATermList(x_55), a_56);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm w_9 (ATerm t)
  {
    ATerm c_56 = NULL;
    c_56 = t;
    if(match_string(t, "--help"))
      {
        t = c_56;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = c_56;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = c_56;
          }
      }
    return(t);
  }
  ATerm x_9 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_v_39;
    return(t);
  }
  ATerm y_9 (ATerm t)
  {
    t = term_w_39;
    return(t);
  }
  t = Option_3_0(w_9, x_9, y_9, t);
  return(t);
}
ATerm Cons_2_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  i_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_56 = ATgetFirst((ATermList) t);
      f_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_56);
  d_56 = t;
  t = e_56;
  t = p_76(t);
  g_56 = t;
  t = f_56;
  t = q_76(t);
  h_56 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_56), g_56), d_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_114 (ATerm), ATerm t)
{
  ATerm p_56 = NULL;
  p_56 = t;
  {
    ATerm z_9 (ATerm t)
    {
      t = term_x_39;
      t = a_114(t);
      return(t);
    }
    t = try_1_0(z_9, t);
    t = p_56;
    {
      ATerm a_10 (ATerm t)
      {
        ATerm q_56 = NULL;
        q_56 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_56);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_56);
        return(t);
      }
      ATerm b_10 (ATerm t)
      {
        ATerm y_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_40 = t;
            int b_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_40);
              }
            else
              {
                t = a_40;
                t = a_114(t);
                t = Cons_2_0(_id, b_10, t);
              }
            ;
            LocalPopChoice(z_39);
          }
        else
          {
            t = y_39;
            {
              ATerm s_56 = NULL,t_56 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_56 = ATgetFirst((ATermList) t);
                  t_56 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_56), (ATerm) ATmakeAppl(sym_Undefined_1, s_56));
            }
          }
        return(t);
      }
      t = Cons_2_0(a_10, b_10, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm z_113 (ATerm), ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_56;
  {
    ATerm c_10 (ATerm t)
    {
      ATerm c_40 = t;
      int d_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_113(t);
          ;
          LocalPopChoice(d_40);
        }
      else
        {
          t = c_40;
          {
            ATerm e_40 = t;
            int f_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(f_40);
              }
            else
              {
                t = e_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_10, t);
    {
      ATerm e_10 (ATerm t)
      {
        ATerm g_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_57 = NULL;
            g_57 = t;
            {
              ATerm i_40 = t;
              int m_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_57;
                  {
                    ATerm n_40 = t;
                    int u_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_w_36;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(u_40);
                      }
                    else
                      {
                        t = n_40;
                        {
                          ATerm f_10 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(f_10, t);
                        }
                      }
                    t = g_57;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(m_40);
                }
              else
                {
                  t = i_40;
                  t = term_d_39;
                  t = get_config_0_0(t);
                  t = g_57;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = g_40;
            {
              ATerm g_10 (ATerm t)
              {
                ATerm k_10 (ATerm t)
                {
                  a_57 = t;
                  return(t);
                }
                t = Undefined_1_0(k_10, t);
                return(t);
              }
              t = option_defined_1_0(g_10, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_57)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_q_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_57)), term_v_40));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(e_10, t);
      b_57 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_57;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm x_117 (ATerm), ATerm t)
{
  ATerm d_5 = NULL;
  t = parse_options_1_0(u_117, t);
  d_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_5);
  t = d_5;
  t = w_117(t);
  {
    ATerm z_40 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_117, t);
        ;
        LocalPopChoice(c_41);
      }
    else
      {
        t = z_40;
        {
          ATerm h_41 = t;
          int o_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_41);
            }
          else
            {
              t = h_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t)
{
  ATerm l_10 (ATerm t)
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_117(t);
        ;
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm m_10 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(j_117, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_10, l_117, m_117, m_10, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm o_10 (ATerm t)
    {
      ATerm j_57 = NULL,k_57 = NULL;
      j_57 = t;
      t = term_c_36;
      t = get_config_0_0(t);
      k_57 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, k_57));
      t = j_57;
      return(t);
    }
    t = if_verbose2_1_0(o_10, t);
    return(t);
  }
  t = iowrap_4_0(d_117, e_117, f_117, n_10, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t)
{
  t = iowrap_3_0(b_117, c_117, default_usage_0_0, t);
  return(t);
}
ATerm implode_asfix_0_0 (ATerm t)
{
  t = iowrap_2_0(implode_0_0, implode_options_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = implode_asfix_0_0(t);
  return(t);
}

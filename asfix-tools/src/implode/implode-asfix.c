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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
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
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_j_48;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_o_46;
ATerm term_j_46;
ATerm term_e_46;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_p_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_u_44;
ATerm term_o_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_w_41;
ATerm term_u_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_a_41;
ATerm term_t_40;
ATerm term_j_40;
ATerm term_a_40;
ATerm term_x_39;
ATerm term_d_39;
ATerm term_z_38;
ATerm term_s_38;
ATerm term_t_33;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_x_31;
ATerm term_n_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_s_20;
ATerm term_i_20;
ATerm term_m_19;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_v_17;
ATerm term_b_16;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
void init_constant_terms (void)
{
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym__2, term_a_41, term_h_41);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_41);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym__2, term_o_41, term_p_10);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_k_42);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym__2, term_p_45, term_p_10);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym__2, term_u_45, term_p_10);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym__2, term_v_43, term_p_10);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(sym__2, term_o_47, term_p_10);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm s_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm implode_options_0_0 (ATerm);
ATerm c_1 (ATerm q_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm is_conc_0_0 (ATerm);
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm s_7 (ATerm z_95 (ATerm), ATerm m_38, ATerm l_38, ATerm);
ATerm is_ins_0_0 (ATerm);
ATerm is_nil_0_0 (ATerm);
ATerm ReplCons_1_0 (ATerm g_96 (ATerm), ATerm);
ATerm OptList_0_0 (ATerm);
ATerm is_layout_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm implodeAsfix_0_0 (ATerm);
ATerm Tuple_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm CTC2_0_0 (ATerm);
ATerm CTC1_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm conc_to_cons_0_0 (ATerm);
ATerm Constr1_0_0 (ATerm);
ATerm w_7 (ATerm x_37, ATerm w_37, ATerm);
ATerm ConstrNil_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm replace_appl_0_0 (ATerm);
ATerm FlatAlt_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm injective_alt_0_0 (ATerm);
ATerm e_60 (ATerm v_50, ATerm x_50, ATerm y_50, ATerm z_50, ATerm);
ATerm f_60 (ATerm q_51, ATerm r_51, ATerm s_51, ATerm t_51, ATerm);
ATerm g_60 (ATerm p_53, ATerm r_53, ATerm w_53, ATerm y_53, ATerm);
ATerm h_60 (ATerm a_59, ATerm b_59, ATerm c_59, ATerm d_59, ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm injection_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm filter_1_0 (ATerm i_111 (ATerm), ATerm);
ATerm a_67 (ATerm i_63, ATerm);
ATerm b_67 (ATerm y_64, ATerm);
ATerm FlatList_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm d_105 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm PpSym_0_0 (ATerm);
ATerm t_75 (ATerm n_74, ATerm o_74, ATerm p_74, ATerm);
ATerm u_75 (ATerm z_74, ATerm a_75, ATerm b_75, ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm repeat_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm is_layout_p__0_0 (ATerm);
ATerm flat_layout_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_104 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm yield_0_0 (ATerm);
ATerm implode_lexical_0_0 (ATerm);
ATerm downup2_2_0 (ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm h_5 (ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm implode_0_0 (ATerm);
ATerm h_8 (ATerm b_61, ATerm c_61, ATerm);
ATerm i_8 (ATerm p_64, ATerm q_64, ATerm);
ATerm k_8 (ATerm t_116 (ATerm), ATerm a_506, ATerm t_64, ATerm);
ATerm j_8 (ATerm l_64, ATerm m_64, ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm b_93 (ATerm v_92, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_8 (ATerm r_64, ATerm);
ATerm m_8 (ATerm d_61, ATerm e_61, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm m_94 (ATerm l_93, ATerm);
ATerm n_94 (ATerm p_93, ATerm q_93, ATerm r_93, ATerm);
ATerm o_94 (ATerm z_93, ATerm a_94, ATerm b_94, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm g_8 (ATerm r_55, ATerm s_55, ATerm);
ATerm debug_1_0 (ATerm r_116 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_118 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm m_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_8 (ATerm s_65, ATerm t_65, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_8 (ATerm a_68, ATerm b_68, ATerm z_67, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_8 (ATerm b_58, ATerm c_58, ATerm);
ATerm foldr_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm o_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_118 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_7 (ATerm);
ATerm need_help_1_0 (ATerm r_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm p_8 (ATerm r_69, ATerm s_69, ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm map_1_0 (ATerm c_104 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm u_8 (ATerm);
ATerm j_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_120 (ATerm), ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm parse_options_1_0 (ATerm y_120 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm);
ATerm d_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm iowrap_3_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,e_0 = NULL,f_0 = NULL,i_0 = NULL,n_0 = NULL;
  b_0 = t;
  t = term_p_10;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_q_10;
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_10), e_0), term_r_10);
  n_0 = t;
  t = SSL_printnl(i_0, n_0);
  t = term_w_10;
  f_0 = t;
  t = SSL_exit(f_0);
  t = b_0;
  return(t);
}
ATerm p_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm a_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm g_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm j_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm q_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm v_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm k_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_z_11;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_0, s_0, z_0, t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm c_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_1, e_1, f_1, t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = c_12;
            {
              ATerm f_12 = t;
              int g_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_1, h_1, i_1, t);
                  ;
                  LocalPopChoice(g_12);
                }
              else
                {
                  t = f_12;
                  {
                    ATerm h_12 = t;
                    int i_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(j_1, k_1, p_1, t);
                        ;
                        LocalPopChoice(i_12);
                      }
                    else
                      {
                        t = h_12;
                        {
                          ATerm j_12 = t;
                          int l_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(q_1, r_1, u_1, t);
                              ;
                              LocalPopChoice(l_12);
                            }
                          else
                            {
                              t = j_12;
                              {
                                ATerm m_12 = t;
                                int n_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(v_1, x_1, z_1, t);
                                    ;
                                    LocalPopChoice(n_12);
                                  }
                                else
                                  {
                                    t = m_12;
                                    {
                                      ATerm o_12 = t;
                                      int p_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(a_2, d_2, f_2, t);
                                          ;
                                          LocalPopChoice(p_12);
                                        }
                                      else
                                        {
                                          t = o_12;
                                          {
                                            ATerm r_12 = t;
                                            int s_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(k_2, l_2, m_2, t);
                                                ;
                                                LocalPopChoice(s_12);
                                              }
                                            else
                                              {
                                                t = r_12;
                                                {
                                                  ATerm t_12 = t;
                                                  int u_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(n_2, o_2, p_2, t);
                                                      ;
                                                      LocalPopChoice(u_12);
                                                    }
                                                  else
                                                    {
                                                      t = t_12;
                                                      t = Option_3_0(q_2, r_2, s_2, t);
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
ATerm c_1 (ATerm q_0, ATerm t)
{
  ATerm r_0 = NULL;
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,y_0 = NULL;
  if(((y_0 != NULL) && (y_0 != t)))
    _fail(t);
  else
    y_0 = t;
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      u_0 = ATgetArgument(t, 1);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(u_0);
              return(t);
            }
            t = not_null(t_0);
            t = at_end_1_0(t_2, t);
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = c_1(not_null(y_0), t);
          }
      }
    }
  else
    {
      t = c_1(not_null(y_0), t);
    }
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,w_1 = NULL,y_1 = NULL,b_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL;
  s_1 = t;
  if(match_cons(t, sym_prod_3))
    {
      t_1 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
      {
        ATerm b_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = t_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_13 = ATgetFirst((ATermList) t);
      w_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_13 = ATgetFirst((ATermList) t);
      y_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_1;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_13 = ATgetFirst((ATermList) t);
            b_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_13);
        t = b_2;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_2;
            {
              ATerm j_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm p_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_13);
                  t = s_1;
                }
              else
                {
                  t = j_13;
                  if(match_cons(t, sym_cf_1))
                    {
                      j_2 = ATgetArgument(t, 0);
                      t = j_2;
                      {
                        ATerm s_13 = t;
                        int t_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm w_13 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(t_13);
                            t = s_1;
                          }
                        else
                          {
                            t = s_13;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm y_13 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_1;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm z_13 = ATgetArgument(t, 0);
                          ATerm b_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_1;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_14 = ATgetFirst((ATermList) t);
                e_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_2;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_14 = ATgetFirst((ATermList) t);
                g_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_2;
            if(match_cons(t, sym_cf_1))
              {
                j_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_2;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm g_14 = ATgetArgument(t, 0);
                ATerm h_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_1;
          }
      }
    else
      {
        t = g_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm i_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_1;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_appl_2))
    {
      q_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_3 = ATgetFirst((ATermList) t);
      t_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_3 = ATgetFirst((ATermList) t);
      v_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_3 = ATgetFirst((ATermList) t);
      o_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
        t = o_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_3;
        t = is_conc_0_0(t);
        t = s_3;
        t = m_0(t);
        b_4 = t;
        t = u_3;
        t = m_0(t);
        c_4 = t;
        t = n_3;
        t = m_0(t);
        d_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(CheckATermList(d_4), c_4));
        t = conc_0_0(t);
      }
    }
  else
    {
      ATerm l_1 = NULL,m_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_3;
      t = is_conc_0_0(t);
      t = s_3;
      t = m_0(t);
      l_1 = t;
      t = u_3;
      t = m_0(t);
      m_1 = t;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 = NULL,i_2 = NULL;
            t = m_1;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = m_1;
              }
            else
              {
                ATerm u_2 = NULL,o_0 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_2 = ATgetFirst((ATermList) t);
                    i_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_1);
                u_2 = t;
                t = (ATerm) ATinsert(CheckATermList(i_2), c_2);
                o_0 = t;
                t = SSLsetAnnotations(o_0, u_2);
              }
            t = (ATerm) ATmakeAppl(sym__2, l_1, m_1);
            t = conc_0_0(t);
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            t = (ATerm) ATmakeAppl(sym_Conc_2, l_1, m_1);
          }
      }
    }
  return(t);
}
ATerm s_7 (ATerm z_95 (ATerm), ATerm m_38, ATerm l_38, ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,w_6 = NULL,x_6 = NULL;
  t = not_null(m_38);
  if(match_cons(t, sym_prod_3))
    {
      ATerm l_14 = ATgetArgument(t, 0);
      ATerm m_14 = ATgetArgument(t, 1);
      if(((w_6 != NULL) && (w_6 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = not_null(w_6);
  {
    ATerm v_2 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(v_2, t);
    t = not_null(x_6);
    if(match_string(t, "sorts"))
      {
        t = term_n_14;
      }
    else
      {
        if(match_string(t, "imports"))
          {
            t = term_o_14;
          }
        else
          {
            if(match_string(t, "id"))
              {
                t = term_p_14;
              }
            else
              {
                if(match_string(t, "hiddens"))
                  {
                    t = term_q_14;
                  }
                else
                  {
                    if(match_string(t, "exports"))
                      {
                        t = term_r_14;
                      }
                    else
                      {
                        if(match_string(t, "module"))
                          {
                            t = term_t_14;
                          }
                        else
                          {
                            t = not_null(x_6);
                          }
                      }
                  }
              }
          }
      }
    if(((s_6 != NULL) && (s_6 != t)))
      _fail(t);
    else
      s_6 = t;
    t = not_null(l_38);
    t = map_1_0(z_95, t);
    if(((t_6 != NULL) && (t_6 != t)))
      _fail(t);
    else
      t_6 = t;
    t = SSL_mkterm(not_null(s_6), not_null(t_6));
  }
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  i_5 = t;
  if(match_cons(t, sym_prod_3))
    {
      j_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
      {
        ATerm u_14 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_5 = ATgetFirst((ATermList) t);
      n_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_5;
  if(match_cons(t, sym_iter_1))
    {
      q_5 = ATgetArgument(t, 0);
      t = q_5;
      if((k_5 != t))
        {
          _fail(t);
        }
      t = i_5;
    }
  else
    {
      ATerm w_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              q_5 = ATgetArgument(t, 0);
              {
                ATerm a_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(x_14);
          t = q_5;
          if((k_5 != t))
            {
              _fail(t);
            }
          t = i_5;
        }
      else
        {
          t = w_14;
          if(match_cons(t, sym_cf_1))
            {
              q_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_5;
          if(match_cons(t, sym_cf_1))
            {
              m_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_5;
          if(match_cons(t, sym_iter_1))
            {
              r_5 = ATgetArgument(t, 0);
              t = r_5;
              if((m_5 != t))
                {
                  _fail(t);
                }
              t = i_5;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  r_5 = ATgetArgument(t, 0);
                  {
                    ATerm b_15 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = r_5;
              if((m_5 != t))
                {
                  _fail(t);
                }
              t = i_5;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm f_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  f_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      j_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
      {
        ATerm c_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = k_6;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm f_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_15);
        t = f_6;
      }
    else
      {
        t = d_15;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm i_15 = ATgetArgument(t, 0);
                  ATerm j_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(h_15);
              t = f_6;
            }
          else
            {
              t = g_15;
              if(match_cons(t, sym_cf_1))
                {
                  l_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_6;
              {
                ATerm k_15 = t;
                int l_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm m_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_15);
                    t = f_6;
                  }
                else
                  {
                    t = k_15;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm n_15 = ATgetArgument(t, 0);
                        ATerm o_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = f_6;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_10 = NULL,v_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL;
      t_10 = t;
      if(match_cons(t, sym_appl_2))
        {
          v_10 = ATgetArgument(t, 0);
          z_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm r_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_10;
              t = s_7(g_96, v_10, z_10, t);
              ;
              LocalPopChoice(s_15);
            }
          else
            {
              t = r_15;
              {
                ATerm t_15 = t;
                int v_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    ;
                    LocalPopChoice(v_15);
                  }
                else
                  {
                    t = t_15;
                    {
                      ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
                      t = v_10;
                      if(match_cons(t, sym_prod_3))
                        {
                          m_4 = ATgetArgument(t, 0);
                          n_4 = ATgetArgument(t, 1);
                          {
                            ATerm w_15 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = m_4;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = n_4;
                      {
                        ATerm x_15 = t;
                        int y_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm z_15 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(y_15);
                            t = v_10;
                          }
                        else
                          {
                            t = x_15;
                            if(match_cons(t, sym_cf_1))
                              {
                                o_4 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = o_4;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm a_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_10;
                          }
                        t = term_b_16;
                      }
                    }
                  }
              }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_11 = ATgetFirst((ATermList) t);
              c_11 = (ATerm) ATgetNext((ATermList) t);
              t = c_11;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm c_16 = t;
                  int d_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = t_10;
                      t = s_7(g_96, v_10, z_10, t);
                      ;
                      LocalPopChoice(d_16);
                    }
                  else
                    {
                      t = c_16;
                      {
                        ATerm e_16 = t;
                        int h_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_11 = NULL;
                            t = v_10;
                            t = is_ins_0_0(t);
                            t = a_11;
                            t = g_96(t);
                            o_11 = t;
                            t = (ATerm) ATinsert(ATempty, o_11);
                            ;
                            LocalPopChoice(h_16);
                          }
                        else
                          {
                            t = e_16;
                            {
                              ATerm y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
                              t = v_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  a_5 = ATgetArgument(t, 0);
                                  e_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm i_16 = ATgetArgument(t, 2);
                                  }
                                }
                              else
                                _fail(t);
                              t = a_5;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  b_5 = ATgetFirst((ATermList) t);
                                  d_5 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = d_5;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = e_5;
                              if(match_cons(t, sym_opt_1))
                                {
                                  f_5 = ATgetArgument(t, 0);
                                  t = f_5;
                                  if((b_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = v_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      f_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_5;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      c_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_5;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      g_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_5;
                                  if((c_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = v_10;
                                }
                              t = a_11;
                              t = g_96(t);
                              y_4 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, y_4);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = t_10;
                  t = s_7(g_96, v_10, z_10, t);
                }
            }
          else
            {
              t = t_10;
              t = s_7(g_96, v_10, z_10, t);
            }
        }
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = ReplConsConc_1_0(g_96, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm z_12 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      q_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13;
  if(match_cons(t, sym_prod_3))
    {
      r_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
      {
        ATerm k_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = r_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      l_13 = (ATerm) ATgetNext((ATermList) t);
      t = l_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_13;
      if(match_cons(t, sym_opt_1))
        {
          v_13 = ATgetArgument(t, 0);
          t = a_14;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_13 = ATgetFirst((ATermList) t);
              n_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_13;
          if((z_12 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = m_13;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              v_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_12;
          if(match_cons(t, sym_cf_1))
            {
              k_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_13;
          if(match_cons(t, sym_opt_1))
            {
              x_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_14;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_13 = ATgetFirst((ATermList) t);
              n_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_13;
          if((k_13 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = m_13;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_13;
      if(match_cons(t, sym_opt_1))
        {
          v_13 = ATgetArgument(t, 0);
          t = a_14;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              v_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_13;
          if(match_cons(t, sym_opt_1))
            {
              x_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_14;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm is_layout_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym_appl_2))
    {
      i_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      {
        ATerm f_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,d_1 = NULL,b_1 = NULL,b_8 = NULL;
        t = SSLgetAnnotations(h_17);
        f_7 = t;
        t = i_17;
        if(match_cons(t, sym_prod_3))
          {
            j_7 = ATgetArgument(t, 0);
            k_7 = ATgetArgument(t, 1);
            l_7 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_17);
        i_7 = t;
        t = k_7;
        if(match_cons(t, sym_cf_1))
          {
            b_8 = ATgetArgument(t, 0);
            {
              ATerm t_8 = NULL,v_8 = NULL,w_8 = NULL,i_9 = NULL,w_0 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(k_7);
              t_8 = t;
              t = b_8;
              if(match_cons(t, sym_opt_1))
                {
                  w_8 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_8);
              v_8 = t;
              t = w_8;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_opt_1, w_8);
              v_0 = t;
              t = SSLsetAnnotations(v_0, v_8);
              i_9 = t;
              t = (ATerm) ATmakeAppl(sym_cf_1, i_9);
              w_0 = t;
              t = SSLsetAnnotations(w_0, t_8);
            }
          }
        else
          {
            ATerm m_9 = NULL,x_0 = NULL;
            if(match_cons(t, sym_lit_1))
              {
                b_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_7);
            m_9 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, b_8);
            x_0 = t;
            t = SSLsetAnnotations(x_0, m_9);
          }
        m_7 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, j_7, m_7, l_7);
        b_1 = t;
        t = SSLsetAnnotations(b_1, i_7);
        n_7 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, n_7, g_17);
        d_1 = t;
        t = SSLsetAnnotations(d_1, f_7);
      }
    }
  else
    {
      ATerm r_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,o_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          i_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_17);
      r_9 = t;
      t = i_17;
      if(match_cons(t, sym_opt_1))
        {
          z_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_17);
      y_9 = t;
      t = z_9;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, z_9);
      n_1 = t;
      t = SSLsetAnnotations(n_1, y_9);
      a_10 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, a_10);
      o_1 = t;
      t = SSLsetAnnotations(o_1, r_9);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm l_16 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_16;
    }
  return(t);
}
ATerm implodeAsfix_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  ATerm q_19 (ATerm t)
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm o_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_19 = NULL,l_19 = NULL,o_19 = NULL;
              l_19 = t;
              if(match_cons(t, sym_appl_2))
                {
                  o_19 = ATgetArgument(t, 0);
                  k_19 = ATgetArgument(t, 1);
                  {
                    ATerm l_10 = NULL,u_10 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(l_19);
                    l_10 = t;
                    t = k_19;
                    t = filter_1_0(w_2, t);
                    u_10 = t;
                    t = (ATerm) ATmakeAppl(sym_appl_2, o_19, u_10);
                    y_2 = t;
                    t = SSLsetAnnotations(y_2, l_10);
                    {
                      ATerm r_16 = t;
                      int u_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = OptList_0_0(t);
                          t = q_19(t);
                          ;
                          LocalPopChoice(u_16);
                        }
                      else
                        {
                          t = r_16;
                          {
                            ATerm w_16 = t;
                            int x_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = ReplCons_1_0(q_19, t);
                                ;
                                LocalPopChoice(x_16);
                              }
                            else
                              {
                                t = w_16;
                                {
                                  ATerm z_16 = t;
                                  int a_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm b_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
                                      if(match_cons(t, sym_appl_2))
                                        {
                                          b_11 = ATgetArgument(t, 0);
                                          h_11 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = h_11;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          i_11 = ATgetFirst((ATermList) t);
                                          j_11 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = j_11;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = b_11;
                                      t = injection_0_0(t);
                                      t = i_11;
                                      t = q_19(t);
                                      ;
                                      LocalPopChoice(a_17);
                                    }
                                  else
                                    {
                                      t = z_16;
                                      {
                                        ATerm b_17 = t;
                                        int m_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = Tuple_0_0(t);
                                            t = q_19(t);
                                            ;
                                            LocalPopChoice(m_17);
                                          }
                                        else
                                          {
                                            t = b_17;
                                            t = FlatAlt_0_0(t);
                                            t = q_19(t);
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
                  ATerm y_11 = NULL,d_12 = NULL,z_2 = NULL;
                  if(match_cons(t, sym_amb_1))
                    {
                      o_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_19);
                  y_11 = t;
                  t = o_19;
                  t = map_1_0(q_19, t);
                  d_12 = t;
                  t = (ATerm) ATmakeAppl(sym_amb_1, d_12);
                  z_2 = t;
                  t = SSLsetAnnotations(z_2, y_11);
                }
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = o_16;
              t = SRTS_all(q_19, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      if(((t_17 != NULL) && (t_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_17 = ATgetArgument(t, 0);
      {
        ATerm n_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = not_null(t_17);
  t = q_19(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm u_20 = NULL,z_20 = NULL,c_21 = NULL,d_21 = NULL,j_21 = NULL;
  u_20 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_20 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_20;
  if(match_cons(t, sym_prod_3))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
      {
        ATerm p_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_21;
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm u_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_17);
        {
          ATerm k_12 = NULL;
          t = term_v_17;
          k_12 = t;
          t = SSL_mkterm(k_12, j_21);
        }
      }
    else
      {
        t = r_17;
        {
          ATerm q_12 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              d_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_21;
          if(match_cons(t, sym_seq_1))
            {
              ATerm w_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_v_17;
          q_12 = t;
          t = SSL_mkterm(q_12, j_21);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    t = topdown_1_0(l_98, t);
    return(t);
  }
  t = l_98(t);
  t = SRTS_all(x_2, t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm f_22 = NULL,h_22 = NULL,i_22 = NULL,m_22 = NULL,o_22 = NULL,p_22 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      m_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
      t = m_22;
      if(match_cons(t, sym_Ins_1))
        {
          i_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_22 = ATgetFirst((ATermList) t);
          f_22 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(f_22), h_22), i_22);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              h_22 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, h_22), i_22);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, i_22);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          m_22 = ATgetArgument(t, 0);
          o_22 = ATgetArgument(t, 1);
          p_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_22), (ATerm) ATinsert(ATempty, o_22)), m_22);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm p_23 = NULL,r_23 = NULL,u_23 = NULL,b_24 = NULL,c_24 = NULL,e_24 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      u_23 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
      t = e_24;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = u_23;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_23;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  b_24 = ATgetArgument(t, 0);
                  c_24 = ATgetArgument(t, 1);
                  t = u_23;
                }
              else
                {
                  t = u_23;
                }
            }
        }
      else
        {
          t = u_23;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = e_24;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  b_24 = ATgetArgument(t, 0);
                  c_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, b_24, (ATerm) ATmakeAppl(sym_Conc_2, c_24, e_24));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          u_23 = ATgetArgument(t, 0);
          e_24 = ATgetArgument(t, 1);
          r_23 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_23;
      if(match_cons(t, sym_Conc_3))
        {
          b_24 = ATgetArgument(t, 0);
          c_24 = ATgetArgument(t, 1);
          p_23 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, b_24, c_24, (ATerm) ATmakeAppl(sym_Conc_3, p_23, e_24, r_23));
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_26 = NULL,m_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_26 = ATgetFirst((ATermList) t);
          m_26 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, l_26), m_26);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              l_26 = ATgetArgument(t, 0);
              m_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, l_26, (ATerm) ATmakeAppl(sym_Ins_1, m_26));
        }
      ;
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
            t = CTC1_0_0(t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm f_28 = NULL,i_28 = NULL,j_28 = NULL,w_12 = NULL,a_13 = NULL,d_13 = NULL,e_13 = NULL,d_3 = NULL;
              f_28 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  i_28 = ATgetArgument(t, 0);
                  j_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_28);
              w_12 = t;
              t = i_28;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_13 = ATgetFirst((ATermList) t);
                  e_13 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, d_13), e_13);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      d_13 = ATgetArgument(t, 0);
                      e_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, d_13, (ATerm) ATmakeAppl(sym_Ins_1, e_13));
                }
              a_13 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, a_13, j_28);
              d_3 = t;
              t = SSLsetAnnotations(d_3, w_12);
            }
          }
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_1_0(a_3, t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,c_14 = NULL,f_14 = NULL,e_3 = NULL;
        u_28 = t;
        if(match_cons(t, sym_Conc_2))
          {
            v_28 = ATgetArgument(t, 0);
            w_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_28);
        c_14 = t;
        t = w_28;
        t = conc_to_cons_0_0(t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, v_28, f_14);
        e_3 = t;
        t = SSLsetAnnotations(e_3, c_14);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_28 = NULL,z_28 = NULL,b_29 = NULL,c_29 = NULL,e_29 = NULL,f_3 = NULL;
              t = CTC2_0_0(t);
              e_29 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_28 = ATgetFirst((ATermList) t);
                  b_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_29);
              y_28 = t;
              t = z_28;
              t = conc_to_cons_0_0(t);
              c_29 = t;
              t = (ATerm) ATinsert(CheckATermList(b_29), c_29);
              f_3 = t;
              t = SSLsetAnnotations(f_3, y_28);
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm g_29 = NULL;
                if(match_cons(t, sym_Ins_1))
                  {
                    g_29 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, g_29);
              }
            }
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
        }
    }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm s_30 = NULL,u_30 = NULL,y_30 = NULL,f_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      k_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
      {
        ATerm k_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_31 = ATgetFirst((ATermList) t);
      p_31 = (ATerm) ATgetNext((ATermList) t);
      t = p_31;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_31;
          if(match_cons(t, sym_opt_1))
            {
              r_31 = ATgetArgument(t, 0);
              t = r_31;
              if((l_31 != t))
                {
                  _fail(t);
                }
              t = term_m_18;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  r_31 = ATgetArgument(t, 0);
                  t = l_31;
                  if(match_cons(t, sym_cf_1))
                    {
                      m_31 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_31;
                  if(match_cons(t, sym_opt_1))
                    {
                      s_31 = ATgetArgument(t, 0);
                      t = s_31;
                      if((m_31 != t))
                        {
                          _fail(t);
                        }
                      t = term_m_18;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          s_31 = ATgetArgument(t, 0);
                          t = s_31;
                          if((m_31 != t))
                            {
                              _fail(t);
                            }
                          t = term_o_18;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              s_31 = ATgetArgument(t, 0);
                              {
                                ATerm q_18 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = s_31;
                          if((m_31 != t))
                            {
                              _fail(t);
                            }
                          t = term_o_18;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      r_31 = ATgetArgument(t, 0);
                      t = r_31;
                      if((l_31 != t))
                        {
                          _fail(t);
                        }
                      t = term_o_18;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          r_31 = ATgetArgument(t, 0);
                          {
                            ATerm c_19 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = r_31;
                      if((l_31 != t))
                        {
                          _fail(t);
                        }
                      t = term_o_18;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_19 = ATgetFirst((ATermList) t);
              s_30 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_30;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = q_31;
              if(match_cons(t, sym_iter_1))
                {
                  ATerm e_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_m_19;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_19 = ATgetFirst((ATermList) t);
                  u_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_30;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_31;
                  {
                    ATerm p_19 = t;
                    int r_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm s_19 = ATgetArgument(t, 0);
                            ATerm t_19 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_19);
                        t = term_m_19;
                      }
                    else
                      {
                        t = p_19;
                        if(match_cons(t, sym_cf_1))
                          {
                            r_31 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_31;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm x_19 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = term_m_19;
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm z_19 = ATgetFirst((ATermList) t);
                      y_30 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = y_30;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm a_20 = ATgetFirst((ATermList) t);
                      f_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = f_31;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_31;
                  if(match_cons(t, sym_cf_1))
                    {
                      r_31 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_31;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm b_20 = ATgetArgument(t, 0);
                      ATerm c_20 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_m_19;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_31;
      {
        ATerm d_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm h_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(f_20);
            t = term_i_20;
          }
        else
          {
            t = d_20;
            if(match_cons(t, sym_cf_1))
              {
                r_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_31;
            if(match_cons(t, sym_opt_1))
              {
                ATerm j_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_i_20;
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm x_37, ATerm w_37, ATerm t)
{
  ATerm q_32 = NULL,i_33 = NULL;
  t = not_null(x_37);
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_33 = NULL,h_33 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm m_20 = ATgetArgument(t, 0);
            ATerm n_20 = ATgetArgument(t, 1);
            if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 2))))
              _fail(ATgetArgument(t, 2));
            else
              e_33 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = not_null(e_33);
        {
          ATerm b_3 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((h_33 != NULL) && (h_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(b_3, t);
          t = not_null(h_33);
        }
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = Constr1_0_0(t);
      }
    if(((i_33 != NULL) && (i_33 != t)))
      _fail(t);
    else
      i_33 = t;
    if(match_string(t, "sorts"))
      {
        t = term_n_14;
      }
    else
      {
        if(match_string(t, "imports"))
          {
            t = term_o_14;
          }
        else
          {
            if(match_string(t, "id"))
              {
                t = term_p_14;
              }
            else
              {
                if(match_string(t, "hiddens"))
                  {
                    t = term_q_14;
                  }
                else
                  {
                    if(match_string(t, "exports"))
                      {
                        t = term_r_14;
                      }
                    else
                      {
                        if(match_string(t, "module"))
                          {
                            t = term_t_14;
                          }
                        else
                          {
                            t = not_null(i_33);
                          }
                      }
                  }
              }
          }
      }
    if(((q_32 != NULL) && (q_32 != t)))
      _fail(t);
    else
      q_32 = t;
    t = SSL_mkterm(not_null(q_32), not_null(w_37));
  }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm w_33 = NULL,a_34 = NULL,b_34 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      w_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      {
        ATerm o_20 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = w_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = a_34;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm r_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_20);
        t = term_s_20;
      }
    else
      {
        t = p_20;
        {
          ATerm t_20 = t;
          int w_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm y_20 = ATgetArgument(t, 0);
                  ATerm a_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(w_20);
              t = term_s_20;
            }
          else
            {
              t = t_20;
              if(match_cons(t, sym_cf_1))
                {
                  b_34 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_34;
              {
                ATerm b_21 = t;
                int e_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm f_21 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_21);
                    t = term_s_20;
                  }
                else
                  {
                    t = b_21;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm g_21 = ATgetArgument(t, 0);
                        ATerm h_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_s_20;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  p_35 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
      {
        ATerm i_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_14 = NULL,v_14 = NULL,y_14 = NULL,z_14 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(p_35);
            s_14 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, n_35, o_35);
            j_3 = t;
            t = SSLsetAnnotations(j_3, s_14);
            v_14 = t;
            if(match_cons(t, sym_appl_2))
              {
                y_14 = ATgetArgument(t, 0);
                z_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm n_21 = t;
              int o_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_14;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  ;
                  LocalPopChoice(o_21);
                }
              else
                {
                  t = n_21;
                  t = v_14;
                  t = w_7(y_14, z_14, t);
                }
            }
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = i_21;
            t = p_35;
          }
      }
    }
  else
    {
      t = p_35;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(c_3, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,a_37 = NULL;
      ATerm q_43 (ATerm t)
      {
        ATerm i_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
        if(match_cons(t, sym__2))
          {
            i_42 = ATgetArgument(t, 0);
            o_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_42;
        if(match_cons(t, sym_alt_2))
          {
            m_42 = ATgetArgument(t, 0);
            n_42 = ATgetArgument(t, 1);
            {
              ATerm r_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_42;
                  if(((f_36 != NULL) && (f_36 != t)))
                    _fail(t);
                  else
                    f_36 = t;
                  t = (ATerm) ATmakeAppl(sym_alt_2, o_42, not_null(a_37));
                  ;
                  LocalPopChoice(s_21);
                }
              else
                {
                  t = r_21;
                  {
                    ATerm t_21 = t;
                    int u_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_42;
                        if(((f_36 != NULL) && (f_36 != t)))
                          _fail(t);
                        else
                          f_36 = t;
                        t = n_42;
                        if(((g_36 != NULL) && (g_36 != t)))
                          _fail(t);
                        else
                          g_36 = t;
                        t = (ATerm) ATmakeAppl(sym_alt_2, o_42, not_null(a_37));
                        ;
                        LocalPopChoice(u_21);
                      }
                    else
                      {
                        t = t_21;
                        {
                          ATerm b_43 = NULL,e_43 = NULL;
                          t = term_w_10;
                          e_43 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_42, term_w_10);
                          t = n_8(o_42, e_43, t);
                          b_43 = t;
                          t = (ATerm) ATmakeAppl(sym__2, n_42, b_43);
                          t = q_43(t);
                        }
                      }
                  }
                }
            }
          }
        else
          {
            t = i_42;
            if(((f_36 != NULL) && (f_36 != t)))
              _fail(t);
            else
              f_36 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, o_42, not_null(a_37));
          }
        return(t);
      }
      ATerm w_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,r_37 = NULL,t_37 = NULL,u_37 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,o_38 = NULL,p_38 = NULL,v_38 = NULL,b_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,c_6 = NULL,h_4 = NULL,g_4 = NULL,m_3 = NULL,c_40 = NULL;
          m_39 = t;
          if(match_cons(t, sym_appl_2))
            {
              c_37 = ATgetArgument(t, 0);
              d_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_39);
          b_37 = t;
          t = c_37;
          if(match_cons(t, sym_prod_3))
            {
              t_37 = ATgetArgument(t, 0);
              u_37 = ATgetArgument(t, 1);
              h_38 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_37);
          r_37 = t;
          t = t_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_38 = ATgetFirst((ATermList) t);
              b_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_37);
          p_38 = t;
          t = v_38;
          if(match_cons(t, sym_cf_1))
            {
              c_40 = ATgetArgument(t, 0);
              {
                ATerm y_21 = t;
                int z_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_15 = NULL,l_3 = NULL;
                    t = SSLgetAnnotations(v_38);
                    u_15 = t;
                    t = c_40;
                    if(((f_36 != NULL) && (f_36 != t)))
                      _fail(t);
                    else
                      f_36 = t;
                    t = (ATerm) ATmakeAppl(sym_cf_1, c_40);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, u_15);
                    ;
                    LocalPopChoice(z_21);
                  }
                else
                  {
                    t = y_21;
                    t = v_38;
                    if(((f_36 != NULL) && (f_36 != t)))
                      _fail(t);
                    else
                      f_36 = t;
                    t = v_38;
                  }
              }
            }
          else
            {
              t = v_38;
              if(((f_36 != NULL) && (f_36 != t)))
                _fail(t);
              else
                f_36 = t;
              t = v_38;
            }
          k_39 = t;
          t = b_39;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_39), k_39);
          m_3 = t;
          t = SSLsetAnnotations(m_3, p_38);
          l_39 = t;
          t = u_37;
          if(match_cons(t, sym_cf_1))
            {
              k_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_37);
          j_38 = t;
          t = k_38;
          if(match_cons(t, sym_alt_2))
            {
              if(((d_36 != NULL) && (d_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_36 = ATgetArgument(t, 0);
              if(((e_36 != NULL) && (e_36 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                e_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_cf_1, k_38);
          g_4 = t;
          t = SSLsetAnnotations(g_4, j_38);
          o_38 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, l_39, o_38, h_38);
          h_4 = t;
          t = SSLsetAnnotations(h_4, r_37);
          i_38 = t;
          t = d_37;
          if(((a_37 != NULL) && (a_37 != t)))
            _fail(t);
          else
            a_37 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, i_38, d_37);
          c_6 = t;
          t = SSLsetAnnotations(c_6, b_37);
          ;
          LocalPopChoice(x_21);
        }
      else
        {
          t = w_21;
          {
            ATerm e_40 = NULL,u_40 = NULL,z_40 = NULL,b_41 = NULL,f_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,v_41 = NULL,x_41 = NULL,y_41 = NULL,a_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,i_6 = NULL,h_6 = NULL,g_6 = NULL,d_6 = NULL;
            g_42 = t;
            if(match_cons(t, sym_appl_2))
              {
                u_40 = ATgetArgument(t, 0);
                z_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_42);
            e_40 = t;
            t = u_40;
            if(match_cons(t, sym_prod_3))
              {
                f_41 = ATgetArgument(t, 0);
                q_41 = ATgetArgument(t, 1);
                r_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_40);
            b_41 = t;
            t = f_41;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_42 = ATgetFirst((ATermList) t);
                e_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_41);
            y_41 = t;
            t = a_42;
            if(((f_36 != NULL) && (f_36 != t)))
              _fail(t);
            else
              f_36 = t;
            t = e_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_42), a_42);
            d_6 = t;
            t = SSLsetAnnotations(d_6, y_41);
            f_42 = t;
            t = q_41;
            if(match_cons(t, sym_lex_1))
              {
                v_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_41);
            t_41 = t;
            t = v_41;
            if(match_cons(t, sym_alt_2))
              {
                if(((d_36 != NULL) && (d_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_36 = ATgetArgument(t, 0);
                if(((e_36 != NULL) && (e_36 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_36 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_lex_1, v_41);
            g_6 = t;
            t = SSLsetAnnotations(g_6, t_41);
            x_41 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, f_42, x_41, r_41);
            h_6 = t;
            t = SSLsetAnnotations(h_6, b_41);
            s_41 = t;
            t = z_40;
            if(((a_37 != NULL) && (a_37 != t)))
              _fail(t);
            else
              a_37 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, s_41, z_40);
            i_6 = t;
            t = SSLsetAnnotations(i_6, e_40);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(d_36), not_null(e_36)), term_w_10);
      t = q_43(t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm j_43 = NULL;
        j_43 = t;
        if(!(match_cons(t, sym_FlatAlt_0)))
          _fail(t);
        t = j_43;
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm t_43 (ATerm t)
  {
    ATerm e_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_99(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = e_22;
        t = SRTS_one(t_43, t);
      }
    return(t);
  }
  t = t_43(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,q_45 = NULL;
  m_45 = t;
  if(match_cons(t, sym_sort_1))
    {
      n_45 = ATgetArgument(t, 0);
      {
        ATerm g_16 = NULL,t_7 = NULL;
        t = SSLgetAnnotations(m_45);
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, n_45);
        t_7 = t;
        t = SSLsetAnnotations(t_7, g_16);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          n_45 = ATgetArgument(t, 0);
          {
            ATerm t_16 = NULL,v_16 = NULL,u_7 = NULL;
            t = SSLgetAnnotations(m_45);
            t_16 = t;
            t = n_45;
            t = injective_alt_0_0(t);
            v_16 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, v_16);
            u_7 = t;
            t = SSLsetAnnotations(u_7, t_16);
          }
        }
      else
        {
          ATerm q_17 = NULL,x_17 = NULL,y_17 = NULL,v_7 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              n_45 = ATgetArgument(t, 0);
              q_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_45);
          q_17 = t;
          t = n_45;
          t = injective_alt_0_0(t);
          x_17 = t;
          t = q_45;
          t = injective_alt_0_0(t);
          y_17 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, x_17, y_17);
          v_7 = t;
          t = SSLsetAnnotations(v_7, q_17);
        }
    }
  return(t);
}
ATerm e_60 (ATerm v_50, ATerm x_50, ATerm y_50, ATerm z_50, ATerm t)
{
  ATerm a_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,y_8 = NULL,d_8 = NULL,c_8 = NULL;
  t = SSLgetAnnotations(z_50);
  a_51 = t;
  t = v_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_51 = ATgetFirst((ATermList) t);
      h_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_50);
  f_51 = t;
  t = g_51;
  if(match_cons(t, sym_varsym_1))
    {
      k_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_51);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, k_51);
  c_8 = t;
  t = SSLsetAnnotations(c_8, j_51);
  l_51 = t;
  t = h_51;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_51), l_51);
  d_8 = t;
  t = SSLsetAnnotations(d_8, f_51);
  i_51 = t;
  t = y_50;
  {
    ATerm j_22 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(g_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_22;
      }
    e_51 = t;
    t = (ATerm) ATmakeAppl(sym_prod_3, i_51, x_50, e_51);
    y_8 = t;
    t = SSLsetAnnotations(y_8, a_51);
  }
  return(t);
}
ATerm f_60 (ATerm q_51, ATerm r_51, ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm u_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,l_52 = NULL,e_9 = NULL,c_9 = NULL,i_53 = NULL;
  t = SSLgetAnnotations(t_51);
  u_51 = t;
  t = q_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_52 = ATgetFirst((ATermList) t);
      g_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_51);
  a_52 = t;
  t = f_52;
  if(match_cons(t, sym_sort_1))
    {
      i_53 = ATgetArgument(t, 0);
      {
        ATerm h_18 = NULL,z_8 = NULL;
        t = SSLgetAnnotations(f_52);
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, i_53);
        z_8 = t;
        t = SSLsetAnnotations(z_8, h_18);
      }
    }
  else
    {
      ATerm l_18 = NULL,x_18 = NULL,y_18 = NULL,b_19 = NULL,b_9 = NULL,a_9 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          i_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_52);
      l_18 = t;
      t = i_53;
      if(match_cons(t, sym_sort_1))
        {
          y_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_53);
      x_18 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, y_18);
      a_9 = t;
      t = SSLsetAnnotations(a_9, x_18);
      b_19 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, b_19);
      b_9 = t;
      t = SSLsetAnnotations(b_9, l_18);
    }
  h_52 = t;
  t = g_52;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_52), h_52);
  c_9 = t;
  t = SSLsetAnnotations(c_9, a_52);
  l_52 = t;
  t = r_51;
  t = injective_alt_0_0(t);
  y_51 = t;
  t = s_51;
  {
    ATerm k_22 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(h_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_22;
      }
    z_51 = t;
    t = (ATerm) ATmakeAppl(sym_prod_3, l_52, y_51, z_51);
    e_9 = t;
    t = SSLsetAnnotations(e_9, u_51);
  }
  return(t);
}
ATerm g_60 (ATerm p_53, ATerm r_53, ATerm w_53, ATerm y_53, ATerm t)
{
  ATerm z_53 = NULL,h_54 = NULL,j_54 = NULL,n_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,j_10 = NULL,g_9 = NULL;
  t = SSLgetAnnotations(not_null(y_53));
  if(((z_53 != NULL) && (z_53 != t)))
    _fail(t);
  else
    z_53 = t;
  t = not_null(p_53);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((q_54 != NULL) && (q_54 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        q_54 = ATgetFirst((ATermList) t);
      if(((r_54 != NULL) && (r_54 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        r_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(p_53));
  if(((n_54 != NULL) && (n_54 != t)))
    _fail(t);
  else
    n_54 = t;
  t = not_null(q_54);
  {
    ATerm l_22 = t;
    if((PushChoice() == 0))
      {
        ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,f_9 = NULL;
        x_54 = t;
        if(match_cons(t, sym_lit_1))
          {
            w_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_54);
        v_54 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, w_54);
        f_9 = t;
        t = SSLsetAnnotations(f_9, v_54);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_22;
      }
    if(((s_54 != NULL) && (s_54 != t)))
      _fail(t);
    else
      s_54 = t;
    t = not_null(r_54);
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(r_54)), not_null(s_54));
    if(((g_9 != NULL) && (g_9 != t)))
      _fail(t);
    else
      g_9 = t;
    t = SSLsetAnnotations(not_null(g_9), not_null(n_54));
    if(((t_54 != NULL) && (t_54 != t)))
      _fail(t);
    else
      t_54 = t;
    t = not_null(r_53);
    {
      ATerm k_60 (ATerm t)
      {
        ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
        j_58 = t;
        if(match_cons(t, sym_sort_1))
          {
            k_58 = ATgetArgument(t, 0);
            {
              ATerm i_19 = NULL,h_9 = NULL;
              t = SSLgetAnnotations(j_58);
              i_19 = t;
              t = (ATerm) ATmakeAppl(sym_sort_1, k_58);
              h_9 = t;
              t = SSLsetAnnotations(h_9, i_19);
            }
          }
        else
          {
            if(match_cons(t, sym_cf_1))
              {
                k_58 = ATgetArgument(t, 0);
                {
                  ATerm u_19 = NULL,y_19 = NULL,l_9 = NULL;
                  t = SSLgetAnnotations(j_58);
                  u_19 = t;
                  t = k_58;
                  t = k_60(t);
                  y_19 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, y_19);
                  l_9 = t;
                  t = SSLsetAnnotations(l_9, u_19);
                }
              }
            else
              {
                if(match_cons(t, sym_lex_1))
                  {
                    k_58 = ATgetArgument(t, 0);
                    {
                      ATerm e_20 = NULL,g_20 = NULL,t_9 = NULL;
                      t = SSLgetAnnotations(j_58);
                      e_20 = t;
                      t = k_58;
                      t = k_60(t);
                      g_20 = t;
                      t = (ATerm) ATmakeAppl(sym_lex_1, g_20);
                      t_9 = t;
                      t = SSLsetAnnotations(t_9, e_20);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        k_58 = ATgetArgument(t, 0);
                        {
                          ATerm v_20 = NULL,x_20 = NULL,u_9 = NULL;
                          t = SSLgetAnnotations(j_58);
                          v_20 = t;
                          t = k_58;
                          t = k_60(t);
                          x_20 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_1, x_20);
                          u_9 = t;
                          t = SSLsetAnnotations(u_9, v_20);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_iter_star_1))
                          {
                            k_58 = ATgetArgument(t, 0);
                            {
                              ATerm k_21 = NULL,m_21 = NULL,v_9 = NULL;
                              t = SSLgetAnnotations(j_58);
                              k_21 = t;
                              t = k_58;
                              t = k_60(t);
                              m_21 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_1, m_21);
                              v_9 = t;
                              t = SSLsetAnnotations(v_9, k_21);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_iter_sep_2))
                              {
                                k_58 = ATgetArgument(t, 0);
                                l_58 = ATgetArgument(t, 1);
                                {
                                  ATerm v_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,x_9 = NULL,w_9 = NULL;
                                  t = SSLgetAnnotations(j_58);
                                  v_21 = t;
                                  t = k_58;
                                  t = k_60(t);
                                  a_22 = t;
                                  t = l_58;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      c_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(l_58);
                                  b_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_lit_1, c_22);
                                  w_9 = t;
                                  t = SSLsetAnnotations(w_9, b_22);
                                  d_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_iter_sep_2, a_22, d_22);
                                  x_9 = t;
                                  t = SSLsetAnnotations(x_9, v_21);
                                }
                              }
                            else
                              {
                                ATerm v_22 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,e_10 = NULL,c_10 = NULL;
                                if(match_cons(t, sym_iter_star_sep_2))
                                  {
                                    k_58 = ATgetArgument(t, 0);
                                    l_58 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(j_58);
                                v_22 = t;
                                t = k_58;
                                t = k_60(t);
                                d_23 = t;
                                t = l_58;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    g_23 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(l_58);
                                f_23 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, g_23);
                                c_10 = t;
                                t = SSLsetAnnotations(c_10, f_23);
                                h_23 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, d_23, h_23);
                                e_10 = t;
                                t = SSLsetAnnotations(e_10, v_22);
                              }
                          }
                      }
                  }
              }
          }
        return(t);
      }
      t = k_60(t);
      if(((h_54 != NULL) && (h_54 != t)))
        _fail(t);
      else
        h_54 = t;
      t = not_null(w_53);
      {
        ATerm n_22 = t;
        if((PushChoice() == 0))
          {
            t = oncetd_1_0(i_3, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_22;
          }
        if(((j_54 != NULL) && (j_54 != t)))
          _fail(t);
        else
          j_54 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, not_null(t_54), not_null(h_54), not_null(j_54));
        if(((j_10 != NULL) && (j_10 != t)))
          _fail(t);
        else
          j_10 = t;
        t = SSLsetAnnotations(not_null(j_10), not_null(z_53));
      }
    }
  }
  return(t);
}
ATerm h_60 (ATerm a_59, ATerm b_59, ATerm c_59, ATerm d_59, ATerm t)
{
  ATerm e_59 = NULL,m_59 = NULL,m_10 = NULL;
  t = SSLgetAnnotations(d_59);
  e_59 = t;
  t = c_59;
  t = oncetd_1_0(k_3, t);
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, a_59, b_59, m_59);
  m_10 = t;
  t = SSLsetAnnotations(m_10, e_59);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,x_8 = NULL;
  p_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_51);
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, o_51);
  x_8 = t;
  t = SSLsetAnnotations(x_8, n_51);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,o_53 = NULL,d_9 = NULL;
  o_53 = t;
  if(match_cons(t, sym_cons_1))
    {
      k_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_53);
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, k_53);
  d_9 = t;
  t = SSLsetAnnotations(d_9, j_53);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,f_10 = NULL;
  u_58 = t;
  if(match_cons(t, sym_cons_1))
    {
      t_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_58);
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, t_58);
  f_10 = t;
  t = SSLsetAnnotations(f_10, s_58);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm o_59 = NULL;
  o_59 = t;
  if(match_string(t, "bracket"))
    {
      t = o_59;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = o_59;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
  w_59 = t;
  if(match_cons(t, sym_prod_3))
    {
      x_59 = ATgetArgument(t, 0);
      y_59 = ATgetArgument(t, 1);
      a_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_60;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = y_59;
      if(match_cons(t, sym_cf_1))
        {
          z_59 = ATgetArgument(t, 0);
          t = z_59;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              v_59 = ATgetArgument(t, 0);
              q_59 = ATgetArgument(t, 1);
              t = x_59;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_59 = ATgetFirst((ATermList) t);
                  u_59 = (ATerm) ATgetNext((ATermList) t);
                  t = u_59;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = r_59;
                      if(match_cons(t, sym_cf_1))
                        {
                          s_59 = ATgetArgument(t, 0);
                          t = s_59;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              t_59 = ATgetArgument(t, 0);
                              p_59 = ATgetArgument(t, 1);
                              {
                                ATerm q_22 = t;
                                int r_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_60(x_59, y_59, a_60, w_59, t);
                                    ;
                                    LocalPopChoice(r_22);
                                  }
                                else
                                  {
                                    t = q_22;
                                    {
                                      ATerm s_22 = t;
                                      int t_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = f_60(x_59, y_59, a_60, w_59, t);
                                          ;
                                          LocalPopChoice(t_22);
                                        }
                                      else
                                        {
                                          t = s_22;
                                          {
                                            ATerm u_22 = t;
                                            int w_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = g_60(x_59, y_59, a_60, w_59, t);
                                                ;
                                                LocalPopChoice(w_22);
                                              }
                                            else
                                              {
                                                t = u_22;
                                                {
                                                  ATerm x_22 = t;
                                                  int y_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = v_59;
                                                      if((t_59 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = q_59;
                                                      if((p_59 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = w_59;
                                                      ;
                                                      LocalPopChoice(y_22);
                                                    }
                                                  else
                                                    {
                                                      t = x_22;
                                                      t = h_60(x_59, y_59, a_60, w_59, t);
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
                              ATerm z_22 = t;
                              int a_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = e_60(x_59, y_59, a_60, w_59, t);
                                  ;
                                  LocalPopChoice(a_23);
                                }
                              else
                                {
                                  t = z_22;
                                  {
                                    ATerm b_23 = t;
                                    int c_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_60(x_59, y_59, a_60, w_59, t);
                                        ;
                                        LocalPopChoice(c_23);
                                      }
                                    else
                                      {
                                        t = b_23;
                                        {
                                          ATerm e_23 = t;
                                          int i_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = g_60(x_59, y_59, a_60, w_59, t);
                                              ;
                                              LocalPopChoice(i_23);
                                            }
                                          else
                                            {
                                              t = e_23;
                                              t = h_60(x_59, y_59, a_60, w_59, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm j_23 = t;
                          int k_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_60(x_59, y_59, a_60, w_59, t);
                              ;
                              LocalPopChoice(k_23);
                            }
                          else
                            {
                              t = j_23;
                              {
                                ATerm l_23 = t;
                                int m_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = f_60(x_59, y_59, a_60, w_59, t);
                                    ;
                                    LocalPopChoice(m_23);
                                  }
                                else
                                  {
                                    t = l_23;
                                    {
                                      ATerm n_23 = t;
                                      int o_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = g_60(x_59, y_59, a_60, w_59, t);
                                          ;
                                          LocalPopChoice(o_23);
                                        }
                                      else
                                        {
                                          t = n_23;
                                          t = h_60(x_59, y_59, a_60, w_59, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = r_59;
                      {
                        ATerm s_23 = t;
                        int t_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_60(x_59, y_59, a_60, w_59, t);
                            ;
                            LocalPopChoice(t_23);
                          }
                        else
                          {
                            t = s_23;
                            {
                              ATerm v_23 = t;
                              int y_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_60(x_59, y_59, a_60, w_59, t);
                                  ;
                                  LocalPopChoice(y_23);
                                }
                              else
                                {
                                  t = v_23;
                                  {
                                    ATerm z_23 = t;
                                    int a_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = g_60(x_59, y_59, a_60, w_59, t);
                                        ;
                                        LocalPopChoice(a_24);
                                      }
                                    else
                                      {
                                        t = z_23;
                                        t = h_60(x_59, y_59, a_60, w_59, t);
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
                  ATerm d_24 = t;
                  int f_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_60(x_59, y_59, a_60, w_59, t);
                      ;
                      LocalPopChoice(f_24);
                    }
                  else
                    {
                      t = d_24;
                      {
                        ATerm g_24 = t;
                        int h_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_60(x_59, y_59, a_60, w_59, t);
                            ;
                            LocalPopChoice(h_24);
                          }
                        else
                          {
                            t = g_24;
                            {
                              ATerm i_24 = t;
                              int j_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = g_60(x_59, y_59, a_60, w_59, t);
                                  ;
                                  LocalPopChoice(j_24);
                                }
                              else
                                {
                                  t = i_24;
                                  t = h_60(x_59, y_59, a_60, w_59, t);
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
                  v_59 = ATgetArgument(t, 0);
                  t = x_59;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_59 = ATgetFirst((ATermList) t);
                      u_59 = (ATerm) ATgetNext((ATermList) t);
                      t = u_59;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = r_59;
                          if(match_cons(t, sym_cf_1))
                            {
                              s_59 = ATgetArgument(t, 0);
                              t = s_59;
                              if(match_cons(t, sym_iter_1))
                                {
                                  t_59 = ATgetArgument(t, 0);
                                  {
                                    ATerm k_24 = t;
                                    int l_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = e_60(x_59, y_59, a_60, w_59, t);
                                        ;
                                        LocalPopChoice(l_24);
                                      }
                                    else
                                      {
                                        t = k_24;
                                        {
                                          ATerm n_24 = t;
                                          int o_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = f_60(x_59, y_59, a_60, w_59, t);
                                              ;
                                              LocalPopChoice(o_24);
                                            }
                                          else
                                            {
                                              t = n_24;
                                              {
                                                ATerm p_24 = t;
                                                int q_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_60(x_59, y_59, a_60, w_59, t);
                                                    ;
                                                    LocalPopChoice(q_24);
                                                  }
                                                else
                                                  {
                                                    t = p_24;
                                                    {
                                                      ATerm r_24 = t;
                                                      int s_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = v_59;
                                                          if((t_59 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = w_59;
                                                          ;
                                                          LocalPopChoice(s_24);
                                                        }
                                                      else
                                                        {
                                                          t = r_24;
                                                          t = h_60(x_59, y_59, a_60, w_59, t);
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
                                  ATerm t_24 = t;
                                  int u_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = e_60(x_59, y_59, a_60, w_59, t);
                                      ;
                                      LocalPopChoice(u_24);
                                    }
                                  else
                                    {
                                      t = t_24;
                                      {
                                        ATerm v_24 = t;
                                        int w_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = f_60(x_59, y_59, a_60, w_59, t);
                                            ;
                                            LocalPopChoice(w_24);
                                          }
                                        else
                                          {
                                            t = v_24;
                                            {
                                              ATerm x_24 = t;
                                              int z_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = g_60(x_59, y_59, a_60, w_59, t);
                                                  ;
                                                  LocalPopChoice(z_24);
                                                }
                                              else
                                                {
                                                  t = x_24;
                                                  t = h_60(x_59, y_59, a_60, w_59, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm a_25 = t;
                              int b_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = e_60(x_59, y_59, a_60, w_59, t);
                                  ;
                                  LocalPopChoice(b_25);
                                }
                              else
                                {
                                  t = a_25;
                                  {
                                    ATerm c_25 = t;
                                    int e_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_60(x_59, y_59, a_60, w_59, t);
                                        ;
                                        LocalPopChoice(e_25);
                                      }
                                    else
                                      {
                                        t = c_25;
                                        {
                                          ATerm f_25 = t;
                                          int g_25 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = g_60(x_59, y_59, a_60, w_59, t);
                                              ;
                                              LocalPopChoice(g_25);
                                            }
                                          else
                                            {
                                              t = f_25;
                                              t = h_60(x_59, y_59, a_60, w_59, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = r_59;
                          {
                            ATerm h_25 = t;
                            int i_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_60(x_59, y_59, a_60, w_59, t);
                                ;
                                LocalPopChoice(i_25);
                              }
                            else
                              {
                                t = h_25;
                                {
                                  ATerm j_25 = t;
                                  int k_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = f_60(x_59, y_59, a_60, w_59, t);
                                      ;
                                      LocalPopChoice(k_25);
                                    }
                                  else
                                    {
                                      t = j_25;
                                      {
                                        ATerm l_25 = t;
                                        int m_25 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = g_60(x_59, y_59, a_60, w_59, t);
                                            ;
                                            LocalPopChoice(m_25);
                                          }
                                        else
                                          {
                                            t = l_25;
                                            t = h_60(x_59, y_59, a_60, w_59, t);
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
                      ATerm n_25 = t;
                      int o_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = e_60(x_59, y_59, a_60, w_59, t);
                          ;
                          LocalPopChoice(o_25);
                        }
                      else
                        {
                          t = n_25;
                          {
                            ATerm p_25 = t;
                            int q_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = f_60(x_59, y_59, a_60, w_59, t);
                                ;
                                LocalPopChoice(q_25);
                              }
                            else
                              {
                                t = p_25;
                                {
                                  ATerm r_25 = t;
                                  int s_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = g_60(x_59, y_59, a_60, w_59, t);
                                      ;
                                      LocalPopChoice(s_25);
                                    }
                                  else
                                    {
                                      t = r_25;
                                      t = h_60(x_59, y_59, a_60, w_59, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = x_59;
                  {
                    ATerm u_25 = t;
                    int v_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_60(x_59, y_59, a_60, w_59, t);
                        ;
                        LocalPopChoice(v_25);
                      }
                    else
                      {
                        t = u_25;
                        {
                          ATerm w_25 = t;
                          int x_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_60(x_59, y_59, a_60, w_59, t);
                              ;
                              LocalPopChoice(x_25);
                            }
                          else
                            {
                              t = w_25;
                              {
                                ATerm y_25 = t;
                                int z_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = g_60(x_59, y_59, a_60, w_59, t);
                                    ;
                                    LocalPopChoice(z_25);
                                  }
                                else
                                  {
                                    t = y_25;
                                    t = h_60(x_59, y_59, a_60, w_59, t);
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
              z_59 = ATgetArgument(t, 0);
              t = z_59;
              if(match_string(t, "<START>"))
                {
                  t = x_59;
                  {
                    ATerm a_26 = t;
                    int c_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_60(x_59, y_59, a_60, w_59, t);
                        ;
                        LocalPopChoice(c_26);
                      }
                    else
                      {
                        t = a_26;
                        {
                          ATerm d_26 = t;
                          int e_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_60(x_59, y_59, a_60, w_59, t);
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
                                    t = g_60(x_59, y_59, a_60, w_59, t);
                                    ;
                                    LocalPopChoice(g_26);
                                  }
                                else
                                  {
                                    t = f_26;
                                    {
                                      ATerm h_26 = t;
                                      int i_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = h_60(x_59, y_59, a_60, w_59, t);
                                          ;
                                          LocalPopChoice(i_26);
                                        }
                                      else
                                        {
                                          t = h_26;
                                          t = w_59;
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
                  t = x_59;
                  {
                    ATerm j_26 = t;
                    int n_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_60(x_59, y_59, a_60, w_59, t);
                        ;
                        LocalPopChoice(n_26);
                      }
                    else
                      {
                        t = j_26;
                        {
                          ATerm o_26 = t;
                          int s_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_60(x_59, y_59, a_60, w_59, t);
                              ;
                              LocalPopChoice(s_26);
                            }
                          else
                            {
                              t = o_26;
                              {
                                ATerm u_26 = t;
                                int v_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = g_60(x_59, y_59, a_60, w_59, t);
                                    ;
                                    LocalPopChoice(v_26);
                                  }
                                else
                                  {
                                    t = u_26;
                                    t = h_60(x_59, y_59, a_60, w_59, t);
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
              t = x_59;
              {
                ATerm w_26 = t;
                int x_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_60(x_59, y_59, a_60, w_59, t);
                    ;
                    LocalPopChoice(x_26);
                  }
                else
                  {
                    t = w_26;
                    {
                      ATerm a_27 = t;
                      int h_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_60(x_59, y_59, a_60, w_59, t);
                          ;
                          LocalPopChoice(h_27);
                        }
                      else
                        {
                          t = a_27;
                          {
                            ATerm j_27 = t;
                            int m_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = g_60(x_59, y_59, a_60, w_59, t);
                                ;
                                LocalPopChoice(m_27);
                              }
                            else
                              {
                                t = j_27;
                                t = h_60(x_59, y_59, a_60, w_59, t);
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
      t = x_59;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_60(x_59, y_59, a_60, w_59, t);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            {
              ATerm p_27 = t;
              int q_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_60(x_59, y_59, a_60, w_59, t);
                  ;
                  LocalPopChoice(q_27);
                }
              else
                {
                  t = p_27;
                  {
                    ATerm r_27 = t;
                    int s_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_60(x_59, y_59, a_60, w_59, t);
                        ;
                        LocalPopChoice(s_27);
                      }
                    else
                      {
                        t = r_27;
                        t = h_60(x_59, y_59, a_60, w_59, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = bottomup_1_0(m_98, t);
    return(t);
  }
  t = SRTS_all(w_3, t);
  t = m_98(t);
  return(t);
}
ATerm filter_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL;
  j_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_61;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_61 = ATgetFirst((ATermList) t);
          l_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_23 = NULL,w_23 = NULL,x_23 = NULL,f_16 = NULL;
            t = SSLgetAnnotations(j_61);
            q_23 = t;
            t = k_61;
            t = i_111(t);
            w_23 = t;
            t = l_61;
            t = filter_1_0(i_111, t);
            x_23 = t;
            t = (ATerm) ATinsert(CheckATermList(x_23), w_23);
            f_16 = t;
            t = SSLsetAnnotations(f_16, q_23);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = t_27;
            t = l_61;
            t = filter_1_0(i_111, t);
          }
      }
    }
  return(t);
}
ATerm a_67 (ATerm i_63, ATerm t)
{
  ATerm c_67 (ATerm t)
  {
    ATerm j_63 = NULL,k_63 = NULL,m_63 = NULL,n_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
    j_63 = t;
    if(match_cons(t, sym_appl_2))
      {
        k_63 = ATgetArgument(t, 0);
        r_63 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = k_63;
    if(match_cons(t, sym_prod_3))
      {
        ATerm a_28 = ATgetArgument(t, 0);
        m_63 = ATgetArgument(t, 1);
        {
          ATerm b_28 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = m_63;
    if(match_cons(t, sym_cf_1))
      {
        n_63 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = n_63;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm d_28 = ATgetArgument(t, 0);
        ATerm g_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_63;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_63 = ATgetFirst((ATermList) t);
        t_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = t_63;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, s_63);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_63 = ATgetFirst((ATermList) t);
            v_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_63;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_63 = ATgetFirst((ATermList) t);
            x_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_63;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm h_64 = NULL,i_64 = NULL;
            t = s_63;
            t = c_67(t);
            h_64 = t;
            t = w_63;
            t = c_67(t);
            i_64 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_64), (ATerm) ATinsert(ATempty, u_63)), h_64);
            t = concat_0_0(t);
          }
        else
          {
            ATerm w_64 = NULL,x_64 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_63 = ATgetFirst((ATermList) t);
                z_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_63;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_64 = ATgetFirst((ATermList) t);
                b_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_64;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_63;
            t = c_67(t);
            w_64 = t;
            t = a_64;
            t = c_67(t);
            x_64 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_64), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_63), w_63), u_63)), w_64);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = not_null(i_63);
  t = c_67(t);
  return(t);
}
ATerm b_67 (ATerm y_64, ATerm t)
{
  ATerm d_67 (ATerm t)
  {
    ATerm z_64 = NULL,a_65 = NULL,c_65 = NULL,d_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
    z_64 = t;
    if(match_cons(t, sym_appl_2))
      {
        a_65 = ATgetArgument(t, 0);
        g_65 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = a_65;
    if(match_cons(t, sym_prod_3))
      {
        ATerm h_28 = ATgetArgument(t, 0);
        c_65 = ATgetArgument(t, 1);
        {
          ATerm l_28 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = c_65;
    if(match_cons(t, sym_cf_1))
      {
        d_65 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = d_65;
    if(match_cons(t, sym_iter_1))
      {
        ATerm m_28 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = g_65;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_65 = ATgetFirst((ATermList) t);
        i_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = i_65;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, h_65);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_65 = ATgetFirst((ATermList) t);
            k_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_65;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm r_65 = NULL,u_65 = NULL;
            t = h_65;
            t = d_67(t);
            r_65 = t;
            t = j_65;
            t = d_67(t);
            u_65 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, u_65), r_65);
            t = concat_0_0(t);
          }
        else
          {
            ATerm z_65 = NULL,a_66 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_65 = ATgetFirst((ATermList) t);
                m_65 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_65;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_65;
            t = d_67(t);
            z_65 = t;
            t = l_65;
            t = d_67(t);
            a_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_66), (ATerm) ATinsert(ATempty, j_65)), z_65);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = not_null(y_64);
  t = d_67(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL;
  v_66 = t;
  if(match_cons(t, sym_appl_2))
    {
      i_66 = ATgetArgument(t, 0);
      s_66 = ATgetArgument(t, 1);
      t = i_66;
      if(match_cons(t, sym_prod_3))
        {
          j_66 = ATgetArgument(t, 0);
          o_66 = ATgetArgument(t, 1);
          {
            ATerm n_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_66;
      if(match_cons(t, sym_cf_1))
        {
          p_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_66;
      {
        ATerm p_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm t_28 = ATgetArgument(t, 0);
                ATerm a_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(r_28);
            t = s_66;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_66 = ATgetFirst((ATermList) t);
                u_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_66;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = j_66;
                {
                  ATerm d_29 = t;
                  int f_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_67(v_66, t);
                      ;
                      LocalPopChoice(f_29);
                    }
                  else
                    {
                      t = d_29;
                      t = (ATerm) ATinsert(ATempty, t_66);
                    }
                }
              }
            else
              {
                t = j_66;
                t = a_67(v_66, t);
              }
          }
        else
          {
            t = p_28;
            {
              ATerm h_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      ATerm j_29 = ATgetArgument(t, 0);
                      ATerm k_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_29);
                  t = j_66;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = s_66;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          k_66 = ATgetFirst((ATermList) t);
                          n_66 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = k_66;
                      if(match_cons(t, sym_cf_1))
                        {
                          l_66 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = l_66;
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm l_29 = ATgetArgument(t, 0);
                          ATerm m_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_66;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = s_66;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          t_66 = ATgetFirst((ATermList) t);
                          u_66 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = u_66;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = t_66;
                      t = FlatList_0_0(t);
                    }
                }
              else
                {
                  t = h_29;
                  {
                    ATerm n_29 = t;
                    int p_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm q_29 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_29);
                        t = s_66;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            t_66 = ATgetFirst((ATermList) t);
                            u_66 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = u_66;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = j_66;
                            {
                              ATerm r_29 = t;
                              int s_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = b_67(v_66, t);
                                  ;
                                  LocalPopChoice(s_29);
                                }
                              else
                                {
                                  t = r_29;
                                  t = (ATerm) ATinsert(ATempty, t_66);
                                }
                            }
                          }
                        else
                          {
                            t = j_66;
                            t = b_67(v_66, t);
                          }
                      }
                    else
                      {
                        t = n_29;
                        if(match_cons(t, sym_iter_star_1))
                          {
                            ATerm t_29 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = j_66;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = s_66;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                k_66 = ATgetFirst((ATermList) t);
                                n_66 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = k_66;
                            if(match_cons(t, sym_cf_1))
                              {
                                l_66 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_66;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm u_29 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = n_66;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = s_66;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                t_66 = ATgetFirst((ATermList) t);
                                u_66 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = u_66;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = t_66;
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
      t = v_66;
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_67 = ATgetFirst((ATermList) t);
      t_67 = (ATerm) ATgetNext((ATermList) t);
      t = t_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_67 = ATgetFirst((ATermList) t);
          r_67 = (ATerm) ATgetNext((ATermList) t);
          t = q_67;
          if(match_int(t, 34))
            {
              t = s_67;
              if(match_int(t, 92))
                {
                  ATerm v_29 = t;
                  int w_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_67 = NULL;
                      t = r_67;
                      t = De_Escape_0_0(t);
                      w_67 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_67), term_y_29);
                      ;
                      LocalPopChoice(w_29);
                    }
                  else
                    {
                      t = v_29;
                      {
                        ATerm e_68 = NULL;
                        t = t_67;
                        t = De_Escape_0_0(t);
                        e_68 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_68), s_67);
                      }
                    }
                }
              else
                {
                  ATerm h_68 = NULL;
                  t = t_67;
                  t = De_Escape_0_0(t);
                  h_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_68), s_67);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = s_67;
                  if(match_int(t, 92))
                    {
                      ATerm z_29 = t;
                      int b_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_68 = NULL;
                          t = r_67;
                          t = De_Escape_0_0(t);
                          j_68 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_68), term_c_30);
                          ;
                          LocalPopChoice(b_30);
                        }
                      else
                        {
                          t = z_29;
                          {
                            ATerm m_68 = NULL;
                            t = t_67;
                            t = De_Escape_0_0(t);
                            m_68 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_68), s_67);
                          }
                        }
                    }
                  else
                    {
                      ATerm p_68 = NULL;
                      t = t_67;
                      t = De_Escape_0_0(t);
                      p_68 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_68), s_67);
                    }
                }
              else
                {
                  ATerm s_68 = NULL;
                  t = t_67;
                  t = De_Escape_0_0(t);
                  s_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_68), s_67);
                }
            }
        }
      else
        {
          ATerm v_68 = NULL;
          t = t_67;
          t = De_Escape_0_0(t);
          v_68 = t;
          t = (ATerm) ATinsert(CheckATermList(v_68), s_67);
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
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
  e_69 = t;
  t = SSL_explode_string(e_69);
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
                  ATerm d_30 = t;
                  int e_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_69 = NULL;
                      t = g_69;
                      t = De_Escape_0_0(t);
                      l_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_69), term_y_29);
                      ;
                      LocalPopChoice(e_30);
                    }
                  else
                    {
                      t = d_30;
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
                  ATerm t_69 = NULL;
                  t = i_69;
                  t = De_Escape_0_0(t);
                  t_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_69), h_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = h_69;
                  if(match_int(t, 92))
                    {
                      ATerm f_30 = t;
                      int g_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_69 = NULL;
                          t = g_69;
                          t = De_Escape_0_0(t);
                          v_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(v_69), term_c_30);
                          ;
                          LocalPopChoice(g_30);
                        }
                      else
                        {
                          t = f_30;
                          {
                            ATerm y_69 = NULL;
                            t = i_69;
                            t = De_Escape_0_0(t);
                            y_69 = t;
                            t = (ATerm) ATinsert(CheckATermList(y_69), h_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm b_70 = NULL;
                      t = i_69;
                      t = De_Escape_0_0(t);
                      b_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_70), h_69);
                    }
                }
              else
                {
                  ATerm e_70 = NULL;
                  t = i_69;
                  t = De_Escape_0_0(t);
                  e_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_70), h_69);
                }
            }
        }
      else
        {
          ATerm h_70 = NULL;
          t = i_69;
          t = De_Escape_0_0(t);
          h_70 = t;
          t = (ATerm) ATinsert(CheckATermList(h_70), h_69);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  d_69 = t;
  t = SSL_implode_string(d_69);
  return(t);
}
ATerm at_last_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm d_71 (ATerm t)
  {
    ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
    a_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_71 = ATgetFirst((ATermList) t);
        c_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_24 = NULL,j_16 = NULL;
          t = SSLgetAnnotations(a_71);
          m_24 = t;
          t = c_71;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(c_71), b_71);
          j_16 = t;
          t = SSLsetAnnotations(j_16, m_24);
          t = d_105(t);
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          {
            ATerm y_24 = NULL,d_25 = NULL,p_16 = NULL;
            t = SSLgetAnnotations(a_71);
            y_24 = t;
            t = c_71;
            t = d_71(t);
            d_25 = t;
            t = (ATerm) ATinsert(CheckATermList(d_25), b_71);
            p_16 = t;
            t = SSLsetAnnotations(p_16, y_24);
          }
        }
    }
    return(t);
  }
  t = d_71(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_30 = ATgetFirst((ATermList) t);
      if(((ATgetType(l_30) != AT_INT) || (ATgetInt((ATermInt) l_30) != 34)))
        _fail(t);
      {
        ATerm m_30 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(m_30) != AT_LIST) || !(ATisEmpty(m_30))))
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
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  k_71 = t;
  t = SSL_explode_string(k_71);
  g_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_71 = ATgetFirst((ATermList) t);
      {
        ATerm o_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_71;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = g_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_30 = ATgetFirst((ATermList) t);
      i_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_71;
  t = at_last_1_0(x_3, t);
  h_71 = t;
  t = SSL_implode_string(h_71);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_30);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_30);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_30);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
  f_72 = t;
  if(match_cons(t, sym_cf_1))
    {
      d_72 = ATgetArgument(t, 0);
      {
        ATerm h_72 = NULL;
        t = d_72;
        t = PpSym_0_0(t);
        h_72 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_30)), h_72), (ATerm) ATinsert(ATempty, term_v_30));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          d_72 = ATgetArgument(t, 0);
          {
            ATerm j_72 = NULL;
            t = d_72;
            t = PpSym_0_0(t);
            j_72 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_30)), j_72), (ATerm) ATinsert(ATempty, term_v_30));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_z_30);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  d_72 = ATgetArgument(t, 0);
                  e_72 = ATgetArgument(t, 1);
                  {
                    ATerm m_72 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(e_72), d_72);
                    t = map_1_0(PpSym_0_0, t);
                    m_72 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_31)), m_72), (ATerm) ATinsert(ATempty, term_g_31));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      d_72 = ATgetArgument(t, 0);
                      t = d_72;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(y_3, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          d_72 = ATgetArgument(t, 0);
                          t = d_72;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(z_3, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              d_72 = ATgetArgument(t, 0);
                              t = d_72;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(a_4, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  d_72 = ATgetArgument(t, 0);
                                  e_72 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_72 = NULL,x_72 = NULL;
                                    t = d_72;
                                    t = PpSym_0_0(t);
                                    w_72 = t;
                                    t = e_72;
                                    t = PpSym_0_0(t);
                                    x_72 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_31)), x_72), w_72), (ATerm) ATinsert(ATempty, term_i_31));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      d_72 = ATgetArgument(t, 0);
                                      e_72 = ATgetArgument(t, 1);
                                      {
                                        ATerm a_73 = NULL,b_73 = NULL;
                                        t = d_72;
                                        t = PpSym_0_0(t);
                                        a_73 = t;
                                        t = e_72;
                                        t = PpSym_0_0(t);
                                        b_73 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_31)), b_73), a_73), (ATerm) ATinsert(ATempty, term_i_31));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_31 = t;
                                      int u_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              d_72 = ATgetArgument(t, 0);
                                              {
                                                ATerm w_31 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(u_31);
                                          {
                                            ATerm d_73 = NULL;
                                            t = d_72;
                                            t = PpSym_0_0(t);
                                            d_73 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_31)), d_73);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = t_31;
                                          {
                                            ATerm y_31 = t;
                                            int a_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    d_72 = ATgetArgument(t, 0);
                                                    e_72 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm b_32 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(a_32);
                                                {
                                                  ATerm h_73 = NULL,i_73 = NULL;
                                                  t = d_72;
                                                  t = PpSym_0_0(t);
                                                  h_73 = t;
                                                  t = e_72;
                                                  t = PpSym_0_0(t);
                                                  i_73 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_31)), i_73), h_73);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = y_31;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    d_72 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_73 = NULL;
                                                      t = d_72;
                                                      t = PpSym_0_0(t);
                                                      k_73 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, k_73), (ATerm) ATinsert(ATempty, term_c_32));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        d_72 = ATgetArgument(t, 0);
                                                        e_72 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_73 = NULL,o_73 = NULL;
                                                          t = d_72;
                                                          t = PpSym_0_0(t);
                                                          n_73 = t;
                                                          t = e_72;
                                                          t = PpSym_0_0(t);
                                                          o_73 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_73), (ATerm) ATinsert(ATempty, term_d_32)), n_73);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            d_72 = ATgetArgument(t, 0);
                                                            e_72 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm r_73 = NULL,s_73 = NULL;
                                                              t = d_72;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              r_73 = t;
                                                              t = e_72;
                                                              t = PpSym_0_0(t);
                                                              s_73 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_73), (ATerm) ATinsert(ATempty, term_e_32)), r_73);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                d_72 = ATgetArgument(t, 0);
                                                                e_72 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm v_73 = NULL,w_73 = NULL;
                                                                  t = d_72;
                                                                  t = PpSym_0_0(t);
                                                                  v_73 = t;
                                                                  t = e_72;
                                                                  t = PpSym_0_0(t);
                                                                  w_73 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_73), (ATerm) ATinsert(ATempty, term_f_32)), v_73);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    d_72 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm y_73 = NULL;
                                                                      t = d_72;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      y_73 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(y_73), term_g_32);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        d_72 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, d_72);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            d_72 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm t_25 = NULL;
                                                                              t = d_72;
                                                                              {
                                                                                ATerm h_32 = t;
                                                                                int i_32 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(i_32);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_32;
                                                                                  }
                                                                                t_25 = t;
                                                                                t = (ATerm) ATinsert(ATempty, t_25);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm j_32 = t;
                                                                            int k_32 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    d_72 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm l_32 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(k_32);
                                                                                {
                                                                                  ATerm b_26 = NULL;
                                                                                  t = d_72;
                                                                                  {
                                                                                    ATerm m_32 = t;
                                                                                    int n_32 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(n_32);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = m_32;
                                                                                      }
                                                                                    b_26 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, b_26);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = j_32;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_o_32);
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
ATerm t_75 (ATerm n_74, ATerm o_74, ATerm p_74, ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL;
  t = n_74;
  if(match_cons(t, sym_cf_1))
    {
      u_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_74;
  {
    ATerm p_32 = t;
    if((PushChoice() == 0))
      {
        ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,s_16 = NULL;
        y_74 = t;
        if(match_cons(t, sym_sort_1))
          {
            x_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_74);
        w_74 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, x_74);
        s_16 = t;
        t = SSLsetAnnotations(s_16, w_74);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_32;
      }
    t = PpSym_0_0(t);
    t_74 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_32)), t_74), (ATerm) ATinsert(ATempty, term_s_32));
    t = concat_0_0(t);
    v_74 = t;
    t = SSL_concat_strings(v_74);
    s_74 = t;
    t = SSL_mkterm(s_74, o_74);
  }
  return(t);
}
ATerm u_75 (ATerm z_74, ATerm a_75, ATerm b_75, ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,y_16 = NULL;
  t = z_74;
  if(match_cons(t, sym_cf_1))
    {
      f_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_75;
  if(match_cons(t, sym_sort_1))
    {
      i_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_75);
  h_75 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, i_75);
  y_16 = t;
  t = SSLsetAnnotations(y_16, h_75);
  t = PpSym_0_0(t);
  g_75 = t;
  t = SSL_concat_strings(g_75);
  e_75 = t;
  t = SSL_mkterm(e_75, a_75);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm j_75 = NULL,l_75 = NULL,m_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL;
  r_75 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_75 = ATgetArgument(t, 0);
      o_75 = ATgetArgument(t, 1);
      t = j_75;
      if(match_cons(t, sym_prod_3))
        {
          ATerm u_32 = ATgetArgument(t, 0);
          l_75 = ATgetArgument(t, 1);
          {
            ATerm v_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_75 = ATgetFirst((ATermList) t);
          q_75 = (ATerm) ATgetNext((ATermList) t);
          t = q_75;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = l_75;
              if(match_cons(t, sym_sort_1))
                {
                  m_75 = ATgetArgument(t, 0);
                  t = m_75;
                  if(match_string(t, "<START>"))
                    {
                      ATerm x_32 = t;
                      int y_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_75(l_75, o_75, r_75, t);
                          ;
                          LocalPopChoice(y_32);
                        }
                      else
                        {
                          t = x_32;
                          {
                            ATerm z_32 = t;
                            int a_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_75(l_75, o_75, r_75, t);
                                ;
                                LocalPopChoice(a_33);
                              }
                            else
                              {
                                t = z_32;
                                t = p_75;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm b_33 = t;
                      int c_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_75(l_75, o_75, r_75, t);
                          ;
                          LocalPopChoice(c_33);
                        }
                      else
                        {
                          t = b_33;
                          t = u_75(l_75, o_75, r_75, t);
                        }
                    }
                }
              else
                {
                  ATerm d_33 = t;
                  int f_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = t_75(l_75, o_75, r_75, t);
                      ;
                      LocalPopChoice(f_33);
                    }
                  else
                    {
                      t = d_33;
                      t = u_75(l_75, o_75, r_75, t);
                    }
                }
            }
          else
            {
              t = l_75;
              {
                ATerm g_33 = t;
                int j_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_75(l_75, o_75, r_75, t);
                    ;
                    LocalPopChoice(j_33);
                  }
                else
                  {
                    t = g_33;
                    t = u_75(l_75, o_75, r_75, t);
                  }
              }
            }
        }
      else
        {
          t = l_75;
          {
            ATerm k_33 = t;
            int l_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_75(l_75, o_75, r_75, t);
                ;
                LocalPopChoice(l_33);
              }
            else
              {
                t = k_33;
                t = u_75(l_75, o_75, r_75, t);
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_ApplToSort_0)))
        _fail(t);
      t = r_75;
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm y_75 (ATerm t)
  {
    ATerm m_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_97(t);
        t = y_75(t);
        ;
        LocalPopChoice(o_33);
      }
    else
      {
        t = m_33;
      }
    return(t);
  }
  t = y_75(t);
  return(t);
}
ATerm is_layout_p__0_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,j_78 = NULL;
  j_77 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_78 = ATgetArgument(t, 0);
      i_77 = ATgetArgument(t, 1);
      {
        ATerm k_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,i_27 = NULL,k_27 = NULL,l_27 = NULL,f_17 = NULL,e_17 = NULL,d_17 = NULL,c_17 = NULL;
        t = SSLgetAnnotations(j_77);
        k_26 = t;
        t = j_78;
        if(match_cons(t, sym_prod_3))
          {
            q_26 = ATgetArgument(t, 0);
            r_26 = ATgetArgument(t, 1);
            t_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_78);
        p_26 = t;
        t = r_26;
        if(match_cons(t, sym_cf_1))
          {
            b_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_26);
        z_26 = t;
        t = b_27;
        if(match_cons(t, sym_opt_1))
          {
            k_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_27);
        i_27 = t;
        t = k_27;
        if(!(match_cons(t, sym_layout_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_opt_1, k_27);
        c_17 = t;
        t = SSLsetAnnotations(c_17, i_27);
        l_27 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, l_27);
        d_17 = t;
        t = SSLsetAnnotations(d_17, z_26);
        c_27 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, q_26, c_27, t_26);
        e_17 = t;
        t = SSLsetAnnotations(e_17, p_26);
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, y_26, i_77);
        f_17 = t;
        t = SSLsetAnnotations(f_17, k_26);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          j_78 = ATgetArgument(t, 0);
          {
            ATerm u_27 = NULL,w_27 = NULL,y_27 = NULL,c_28 = NULL,k_17 = NULL,j_17 = NULL;
            t = SSLgetAnnotations(j_77);
            u_27 = t;
            t = j_78;
            if(match_cons(t, sym_opt_1))
              {
                y_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_78);
            w_27 = t;
            t = y_27;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, y_27);
            j_17 = t;
            t = SSLsetAnnotations(j_17, w_27);
            c_28 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, c_28);
            k_17 = t;
            t = SSLsetAnnotations(k_17, u_27);
          }
        }
      else
        {
          ATerm x_28 = NULL,l_17 = NULL;
          if(match_cons(t, sym_layout_1))
            {
              j_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_77);
          x_28 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, j_78);
          l_17 = t;
          t = SSLsetAnnotations(l_17, x_28);
        }
    }
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL;
  y_78 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_78 = ATgetArgument(t, 0);
      f_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_78;
  if(match_cons(t, sym_prod_3))
    {
      ATerm p_33 = ATgetArgument(t, 0);
      b_79 = ATgetArgument(t, 1);
      {
        ATerm s_33 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = b_79;
  if(match_cons(t, sym_cf_1))
    {
      c_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_79;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(f_79);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          d_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_79;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = f_79;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_t_33;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_79 = ATgetFirst((ATermList) t);
              h_79 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_79;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, g_79));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm x_79 (ATerm t)
  {
    ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
    w_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_79 = ATgetFirst((ATermList) t);
        v_79 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_29 = NULL,a_30 = NULL,n_18 = NULL;
          t = SSLgetAnnotations(w_79);
          x_29 = t;
          t = v_79;
          t = x_79(t);
          a_30 = t;
          t = (ATerm) ATinsert(CheckATermList(a_30), u_79);
          n_18 = t;
          t = SSLsetAnnotations(n_18, x_29);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_79;
        t = s_104(t);
      }
    return(t);
  }
  t = x_79(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
  a_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_80;
    }
  else
    {
      ATerm e_4 (ATerm t)
      {
        t = not_null(c_80);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((b_80 != NULL) && (b_80 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            b_80 = ATgetFirst((ATermList) t);
          if(((c_80 != NULL) && (c_80 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(b_80);
      t = at_end_1_0(e_4, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm i_80 = NULL;
  ATerm z_80 (ATerm t)
  {
    ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
    w_80 = t;
    if(match_cons(t, sym_appl_2))
      {
        u_80 = ATgetArgument(t, 0);
        v_80 = ATgetArgument(t, 1);
        {
          ATerm u_33 = t;
          int v_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_30 = NULL,k_30 = NULL,n_30 = NULL,p_18 = NULL;
              t = SSLgetAnnotations(w_80);
              k_30 = t;
              t = v_80;
              t = map_1_0(z_80, t);
              n_30 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, u_80, n_30);
              p_18 = t;
              t = SSLsetAnnotations(p_18, k_30);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm x_33 = ATgetArgument(t, 0);
                  j_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_30;
              t = concat_0_0(t);
              ;
              LocalPopChoice(v_33);
            }
          else
            {
              t = u_33;
              t = (ATerm) ATinsert(ATempty, w_80);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, w_80);
      }
    return(t);
  }
  t = z_80(t);
  if(((i_80 != NULL) && (i_80 != t)))
    _fail(t);
  else
    i_80 = t;
  t = SSL_implode_string(not_null(i_80));
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm r_81 = NULL,t_81 = NULL,u_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  x_81 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_81 = ATgetArgument(t, 0);
      {
        ATerm y_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_81;
  if(match_cons(t, sym_prod_3))
    {
      z_81 = ATgetArgument(t, 0);
      a_82 = ATgetArgument(t, 1);
      {
        ATerm z_33 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_82;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm e_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_34);
        t = z_81;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_81 = ATgetFirst((ATermList) t);
            t_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_81;
        if(match_cons(t, sym_lex_1))
          {
            ATerm f_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_81;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_81;
        t = yield_0_0(t);
      }
    else
      {
        t = c_34;
        {
          ATerm g_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm i_34 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(h_34);
              t = x_81;
              t = yield_0_0(t);
            }
          else
            {
              t = g_34;
              {
                ATerm j_34 = t;
                int k_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm l_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_34);
                    {
                      ATerm e_82 = NULL;
                      t = x_81;
                      t = yield_0_0(t);
                      e_82 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, e_82);
                    }
                  }
                else
                  {
                    t = j_34;
                    if(match_cons(t, sym_varsym_1))
                      {
                        b_82 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_82;
                    if(match_cons(t, sym_cf_1))
                      {
                        u_81 = ATgetArgument(t, 0);
                        t = u_81;
                        {
                          ATerm m_34 = t;
                          int n_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm o_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_34);
                              t = z_81;
                              {
                                ATerm p_34 = t;
                                int q_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_82 = NULL;
                                    t = x_81;
                                    t = yield_0_0(t);
                                    f_82 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, f_82);
                                    ;
                                    LocalPopChoice(q_34);
                                  }
                                else
                                  {
                                    t = p_34;
                                    {
                                      ATerm g_82 = NULL;
                                      t = x_81;
                                      t = yield_0_0(t);
                                      g_82 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, g_82);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = m_34;
                              {
                                ATerm r_34 = t;
                                int s_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm t_34 = ATgetArgument(t, 0);
                                        ATerm u_34 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(s_34);
                                    t = z_81;
                                    {
                                      ATerm v_34 = t;
                                      int w_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_82 = NULL;
                                          t = x_81;
                                          t = yield_0_0(t);
                                          h_82 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, h_82);
                                          ;
                                          LocalPopChoice(w_34);
                                        }
                                      else
                                        {
                                          t = v_34;
                                          {
                                            ATerm i_82 = NULL;
                                            t = x_81;
                                            t = yield_0_0(t);
                                            i_82 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, i_82);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = r_34;
                                    {
                                      ATerm z_34 = t;
                                      int b_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm c_35 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(b_35);
                                          t = z_81;
                                          {
                                            ATerm g_35 = t;
                                            int h_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm j_82 = NULL;
                                                t = x_81;
                                                t = yield_0_0(t);
                                                j_82 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, j_82);
                                                ;
                                                LocalPopChoice(h_35);
                                              }
                                            else
                                              {
                                                t = g_35;
                                                {
                                                  ATerm k_82 = NULL;
                                                  t = x_81;
                                                  t = yield_0_0(t);
                                                  k_82 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, k_82);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = z_34;
                                          {
                                            ATerm i_35 = t;
                                            int j_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm k_35 = ATgetArgument(t, 0);
                                                    ATerm l_35 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(j_35);
                                                t = z_81;
                                                {
                                                  ATerm m_35 = t;
                                                  int s_35 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_82 = NULL;
                                                      t = x_81;
                                                      t = yield_0_0(t);
                                                      l_82 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, l_82);
                                                      ;
                                                      LocalPopChoice(s_35);
                                                    }
                                                  else
                                                    {
                                                      t = m_35;
                                                      {
                                                        ATerm m_82 = NULL;
                                                        t = x_81;
                                                        t = yield_0_0(t);
                                                        m_82 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, m_82);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = i_35;
                                                {
                                                  ATerm n_82 = NULL;
                                                  t = x_81;
                                                  t = yield_0_0(t);
                                                  n_82 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, n_82);
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
                        ATerm o_82 = NULL;
                        t = x_81;
                        t = yield_0_0(t);
                        o_82 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, o_82);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t)
{
  t = q_98(t);
  {
    ATerm f_4 (ATerm t)
    {
      t = downup2_2_0(q_98, r_98, t);
      return(t);
    }
    t = SRTS_all(f_4, t);
    t = r_98(t);
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(!(match_cons(t, sym_FlatLex_0)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      ;
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLayout_0)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm a_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_34 = NULL,y_34 = NULL,a_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,q_35 = NULL,r_35 = NULL,t_35 = NULL,w_35 = NULL,x_35 = NULL,t_18 = NULL,s_18 = NULL;
      x_35 = t;
      if(match_cons(t, sym_appl_2))
        {
          y_34 = ATgetArgument(t, 0);
          a_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_35);
      x_34 = t;
      t = y_34;
      if(match_cons(t, sym_prod_3))
        {
          f_35 = ATgetArgument(t, 0);
          q_35 = ATgetArgument(t, 1);
          r_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_34);
      e_35 = t;
      t = f_35;
      t = filter_1_0(q_4, t);
      t_35 = t;
      t = (ATerm) ATmakeAppl(sym_prod_3, t_35, q_35, r_35);
      s_18 = t;
      t = SSLsetAnnotations(s_18, e_35);
      w_35 = t;
      t = a_35;
      t = filter_1_0(r_4, t);
      d_35 = t;
      t = (ATerm) ATmakeAppl(sym_appl_2, w_35, d_35);
      t_18 = t;
      t = SSLsetAnnotations(t_18, x_34);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = a_36;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm h_36 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_36;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm k_36 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_36;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = repeat_1_0(ApplToSort_0_0, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      ;
      LocalPopChoice(m_36);
    }
  else
    {
      t = l_36;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLit_0)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(w_4, t);
      ;
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm p_36 = t;
  if((PushChoice() == 0))
    {
      ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_18 = NULL;
      y_38 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_38);
      w_38 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_38);
      z_18 = t;
      t = SSLsetAnnotations(z_18, w_38);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_36;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  if(!(match_cons(t, sym_FlatInj_0)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_40 = NULL,g_40 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          f_40 = ATgetArgument(t, 0);
          {
            ATerm s_36 = ATgetArgument(t, 1);
            if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
              {
                g_40 = ATgetFirst((ATermList) s_36);
                {
                  ATerm t_36 = (ATerm) ATgetNext((ATermList) s_36);
                  if(((ATgetType(t_36) != AT_LIST) || !(ATisEmpty(t_36))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = f_40;
      t = injection_0_0(t);
      t = g_40;
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      ;
      LocalPopChoice(w_36);
    }
  else
    {
      t = v_36;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_ReplaceAppl_0)))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveSeq_0)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm z_36 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = z_36;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_RemovePT_0)))
    _fail(t);
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm x_83 = NULL,b_90 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,f_84 = NULL,g_84 = NULL;
  x_83 = t;
  if(match_cons(t, sym__2))
    {
      f_84 = ATgetArgument(t, 0);
      g_84 = ATgetArgument(t, 1);
      {
        ATerm f_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_31 = NULL,v_31 = NULL,z_31 = NULL,r_18 = NULL;
            t = SSLgetAnnotations(x_83);
            o_31 = t;
            t = f_84;
            t = fetch_1_0(i_4, t);
            v_31 = t;
            t = g_84;
            t = downup2_2_0(j_4, k_4, t);
            z_31 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_31, z_31);
            r_18 = t;
            t = SSLsetAnnotations(r_18, o_31);
            ;
            LocalPopChoice(g_37);
          }
        else
          {
            t = f_37;
            t = x_83;
          }
      }
    }
  else
    {
      t = x_83;
    }
  g_85 = t;
  if(match_cons(t, sym__2))
    {
      e_85 = ATgetArgument(t, 0);
      f_85 = ATgetArgument(t, 1);
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_33 = NULL,q_33 = NULL,r_33 = NULL,u_18 = NULL;
            t = SSLgetAnnotations(g_85);
            n_33 = t;
            t = e_85;
            t = fetch_1_0(l_4, t);
            q_33 = t;
            t = f_85;
            t = topdown_1_0(p_4, t);
            r_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
            u_18 = t;
            t = SSLsetAnnotations(u_18, n_33);
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            t = g_85;
          }
      }
    }
  else
    {
      t = g_85;
    }
  u_85 = t;
  if(match_cons(t, sym__2))
    {
      s_85 = ATgetArgument(t, 0);
      t_85 = ATgetArgument(t, 1);
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_36 = NULL,i_36 = NULL,j_36 = NULL,v_18 = NULL;
            t = SSLgetAnnotations(u_85);
            b_36 = t;
            t = s_85;
            t = fetch_1_0(ApplToSort_0_0, t);
            i_36 = t;
            t = t_85;
            t = topdown_1_0(s_4, t);
            j_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_36, j_36);
            v_18 = t;
            t = SSLsetAnnotations(v_18, b_36);
            ;
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            t = u_85;
          }
      }
    }
  else
    {
      t = u_85;
    }
  i_86 = t;
  if(match_cons(t, sym__2))
    {
      g_86 = ATgetArgument(t, 0);
      h_86 = ATgetArgument(t, 1);
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_36 = NULL,x_36 = NULL,y_36 = NULL,w_18 = NULL;
            t = SSLgetAnnotations(i_86);
            u_36 = t;
            t = g_86;
            t = fetch_1_0(FlatList_0_0, t);
            x_36 = t;
            t = h_86;
            t = topdown_1_0(t_4, t);
            y_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_36, y_36);
            w_18 = t;
            t = SSLsetAnnotations(w_18, u_36);
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            t = i_86;
          }
      }
    }
  else
    {
      t = i_86;
    }
  z_86 = t;
  if(match_cons(t, sym__2))
    {
      x_86 = ATgetArgument(t, 0);
      y_86 = ATgetArgument(t, 1);
      {
        ATerm n_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_37 = NULL,b_38 = NULL,c_38 = NULL,a_19 = NULL;
            t = SSLgetAnnotations(z_86);
            y_37 = t;
            t = x_86;
            t = fetch_1_0(u_4, t);
            b_38 = t;
            t = y_86;
            t = topdown_1_0(v_4, t);
            c_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_38, c_38);
            a_19 = t;
            t = SSLsetAnnotations(a_19, y_37);
            ;
            LocalPopChoice(o_37);
          }
        else
          {
            t = n_37;
            t = z_86;
          }
      }
    }
  else
    {
      t = z_86;
    }
  p_87 = t;
  if(match_cons(t, sym__2))
    {
      n_87 = ATgetArgument(t, 0);
      o_87 = ATgetArgument(t, 1);
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_39 = NULL,o_39 = NULL,p_39 = NULL,f_19 = NULL;
            t = SSLgetAnnotations(p_87);
            i_39 = t;
            t = n_87;
            t = fetch_1_0(x_4, t);
            o_39 = t;
            t = o_87;
            t = bottomup_1_0(z_4, t);
            p_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_39, p_39);
            f_19 = t;
            t = SSLsetAnnotations(f_19, i_39);
            ;
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            t = p_87;
          }
      }
    }
  else
    {
      t = p_87;
    }
  d_88 = t;
  if(match_cons(t, sym__2))
    {
      b_88 = ATgetArgument(t, 0);
      c_88 = ATgetArgument(t, 1);
      {
        ATerm s_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_40 = NULL,q_40 = NULL,r_40 = NULL,g_19 = NULL;
            t = SSLgetAnnotations(d_88);
            n_40 = t;
            t = b_88;
            t = fetch_1_0(FlatAlt_0_0, t);
            q_40 = t;
            t = c_88;
            t = topdown_1_0(h_5, t);
            r_40 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
            g_19 = t;
            t = SSLsetAnnotations(g_19, n_40);
            ;
            LocalPopChoice(v_37);
          }
        else
          {
            t = s_37;
            t = d_88;
          }
      }
    }
  else
    {
      t = d_88;
    }
  r_88 = t;
  if(match_cons(t, sym__2))
    {
      p_88 = ATgetArgument(t, 0);
      q_88 = ATgetArgument(t, 1);
      {
        ATerm z_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_41 = NULL,j_41 = NULL,k_41 = NULL,h_19 = NULL;
            t = SSLgetAnnotations(r_88);
            g_41 = t;
            t = p_88;
            t = fetch_1_0(l_5, t);
            j_41 = t;
            t = q_88;
            t = replace_appl_0_0(t);
            k_41 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_41, k_41);
            h_19 = t;
            t = SSLsetAnnotations(h_19, g_41);
            ;
            LocalPopChoice(a_38);
          }
        else
          {
            t = z_37;
            t = r_88;
          }
      }
    }
  else
    {
      t = r_88;
    }
  f_89 = t;
  if(match_cons(t, sym__2))
    {
      d_89 = ATgetArgument(t, 0);
      e_89 = ATgetArgument(t, 1);
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_42 = NULL,l_42 = NULL,r_42 = NULL,j_19 = NULL;
            t = SSLgetAnnotations(f_89);
            d_42 = t;
            t = d_89;
            t = fetch_1_0(o_5, t);
            l_42 = t;
            t = e_89;
            t = topdown_1_0(s_5, t);
            r_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_42, r_42);
            j_19 = t;
            t = SSLsetAnnotations(j_19, d_42);
            ;
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
            t = f_89;
          }
      }
    }
  else
    {
      t = f_89;
    }
  t_89 = t;
  if(match_cons(t, sym__2))
    {
      r_89 = ATgetArgument(t, 0);
      s_89 = ATgetArgument(t, 1);
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_43 = NULL,p_43 = NULL,r_43 = NULL,v_19 = NULL;
            t = SSLgetAnnotations(t_89);
            m_43 = t;
            t = r_89;
            t = fetch_1_0(t_5, t);
            p_43 = t;
            t = s_89;
            if(match_cons(t, sym_parsetree_2))
              {
                r_43 = ATgetArgument(t, 0);
                {
                  ATerm n_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, p_43, r_43);
            v_19 = t;
            t = SSLsetAnnotations(v_19, m_43);
            ;
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            t = t_89;
          }
      }
    }
  else
    {
      t = t_89;
    }
  b_90 = t;
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,w_19 = NULL;
        t = b_90;
        if((x_83 != t))
          {
            _fail(t);
          }
        t = b_90;
        if(match_cons(t, sym__2))
          {
            z_43 = ATgetArgument(t, 0);
            a_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_90);
        y_43 = t;
        t = a_44;
        t = implodeAsfix_0_0(t);
        b_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_43, b_44);
        w_19 = t;
        t = SSLsetAnnotations(w_19, y_43);
        ;
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        t = b_90;
      }
  }
  return(t);
}
ATerm h_8 (ATerm b_61, ATerm c_61, ATerm t)
{
  ATerm o_90 = NULL;
  t = SSL_fputc(b_61, c_61);
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_90);
  return(t);
}
ATerm i_8 (ATerm p_64, ATerm q_64, ATerm t)
{
  ATerm p_90 = NULL;
  t = SSL_write_term_to_stream_text(p_64, q_64);
  p_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_90);
  return(t);
}
ATerm k_8 (ATerm t_116 (ATerm), ATerm a_506, ATerm t_64, ATerm t)
{
  ATerm q_90 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_506, term_s_38);
  t = open_stream_0_0(t);
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_90, t_64);
  t = t_116(t);
  t = fclose_0_0(t);
  t = t_64;
  return(t);
}
ATerm j_8 (ATerm l_64, ATerm m_64, ATerm t)
{
  ATerm r_90 = NULL;
  t = SSL_write_term_to_stream_baf(l_64, m_64);
  r_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_90);
  return(t);
}
ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm r_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(match_cons(t_38, sym_Stream_1))
        {
          r_44 = ATgetArgument(t_38, 0);
        }
      else
        _fail(t);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(r_44, w_44, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(match_cons(u_38, sym_Stream_1))
        {
          c_46 = ATgetArgument(u_38, 0);
        }
      else
        _fail(t);
      d_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(c_46, d_46, t);
  z_45 = t;
  t = term_z_38;
  a_46 = t;
  t = z_45;
  if(match_cons(t, sym_Stream_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, z_45);
  t = h_8(a_46, b_46, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,f_92 = NULL,g_92 = NULL,e_27 = NULL,d_27 = NULL;
  if(((w_90 != NULL) && (w_90 != t)))
    _fail(t);
  else
    w_90 = t;
  if(match_cons(t, sym__2))
    {
      if(((d_91 != NULL) && (d_91 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_91 = ATgetArgument(t, 0);
      if(((e_91 != NULL) && (e_91 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(w_90));
  if(((c_91 != NULL) && (c_91 != t)))
    _fail(t);
  else
    c_91 = t;
  t = not_null(d_91);
  {
    ATerm a_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_90 != NULL) && (v_90 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_5, t);
        ;
        LocalPopChoice(c_39);
      }
    else
      {
        t = a_39;
        t = term_d_39;
        if(((v_90 != NULL) && (v_90 != t)))
          _fail(t);
        else
          v_90 = t;
      }
    if(((f_91 != NULL) && (f_91 != t)))
      _fail(t);
    else
      f_91 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_91), not_null(e_91));
    if(((d_27 != NULL) && (d_27 != t)))
      _fail(t);
    else
      d_27 = t;
    t = SSLsetAnnotations(not_null(d_27), not_null(c_91));
    t = not_null(w_90);
    if(match_cons(t, sym__2))
      {
        if(((y_90 != NULL) && (y_90 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_90 = ATgetArgument(t, 0);
        if(((z_90 != NULL) && (z_90 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_90 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(w_90));
    if(((x_90 != NULL) && (x_90 != t)))
      _fail(t);
    else
      x_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_90), (ATerm) ATmakeAppl(sym__2, not_null(v_90), not_null(z_90)));
    if(((e_27 != NULL) && (e_27 != t)))
      _fail(t);
    else
      e_27 = t;
    t = SSLsetAnnotations(not_null(e_27), not_null(x_90));
    if(((b_91 != NULL) && (b_91 != t)))
      _fail(t);
    else
      b_91 = t;
    if(match_cons(t, sym__2))
      {
        if(((f_92 != NULL) && (f_92 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          f_92 = ATgetArgument(t, 0);
        if(((g_92 != NULL) && (g_92 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          g_92 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm e_39 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_44 = NULL,m_44 = NULL,n_44 = NULL,p_44 = NULL,q_44 = NULL,f_27 = NULL;
          t = SSLgetAnnotations(not_null(b_91));
          g_44 = t;
          t = not_null(f_92);
          t = fetch_1_0(v_5, t);
          m_44 = t;
          t = not_null(g_92);
          if(match_cons(t, sym__2))
            {
              p_44 = ATgetArgument(t, 0);
              q_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_8(w_5, p_44, q_44, t);
          n_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_44, n_44);
          f_27 = t;
          t = SSLsetAnnotations(f_27, g_44);
          ;
          LocalPopChoice(f_39);
        }
      else
        {
          t = e_39;
          {
            ATerm o_45 = NULL,t_45 = NULL,x_45 = NULL,y_45 = NULL,g_27 = NULL;
            t = SSLgetAnnotations(not_null(b_91));
            o_45 = t;
            t = not_null(g_92);
            if(match_cons(t, sym__2))
              {
                x_45 = ATgetArgument(t, 0);
                y_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_8(x_5, x_45, y_45, t);
            t_45 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_92), t_45);
            g_27 = t;
            t = SSLsetAnnotations(g_27, o_45);
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
ATerm apply_strategy_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL;
  n_92 = t;
  t = dtime_0_0(t);
  t = n_92;
  t = t_123(t);
  m_92 = t;
  t = dtime_0_0(t);
  j_92 = t;
  t = m_92;
  if(match_cons(t, sym__2))
    {
      k_92 = ATgetArgument(t, 0);
      l_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_92), (ATerm) ATmakeAppl(sym_Runtime_1, j_92)), l_92);
  return(t);
}
ATerm b_93 (ATerm v_92, ATerm t)
{
  t = SSL_fclose(v_92);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL;
  z_92 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_92 = ATgetArgument(t, 0);
      {
        ATerm g_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_92);
            ;
            LocalPopChoice(h_39);
          }
        else
          {
            t = g_39;
            t = b_93(z_92, t);
          }
      }
    }
  else
    {
      t = b_93(z_92, t);
    }
  return(t);
}
ATerm l_8 (ATerm r_64, ATerm t)
{
  t = SSL_read_term_from_stream(r_64);
  return(t);
}
ATerm m_8 (ATerm d_61, ATerm e_61, ATerm t)
{
  ATerm c_93 = NULL;
  t = SSL_fopen(d_61, e_61);
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_93);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_93 = NULL;
  t = SSL_stdin_stream();
  d_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_93);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_93 = NULL;
  t = SSL_stdout_stream();
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_93);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_93 = NULL;
  t = SSL_stderr_stream();
  f_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_93);
  return(t);
}
ATerm m_94 (ATerm l_93, ATerm t)
{
  ATerm m_93 = NULL;
  t = SSL_explode_term(l_93);
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_39 = ATgetArgument(t, 1);
        if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
          {
            m_93 = ATgetFirst((ATermList) n_39);
            {
              ATerm q_39 = (ATerm) ATgetNext((ATermList) n_39);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_93;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_93;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_93;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_93;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm n_94 (ATerm p_93, ATerm q_93, ATerm r_93, ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,x_93 = NULL,x_27 = NULL;
  t = SSLgetAnnotations(r_93);
  u_93 = t;
  t = p_93;
  if(match_cons(t, sym_Path_1))
    {
      x_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_93, q_93);
  x_27 = t;
  t = SSLsetAnnotations(x_27, u_93);
  if(match_cons(t, sym__2))
    {
      s_93 = ATgetArgument(t, 0);
      t_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(s_93, t_93, t);
  return(t);
}
ATerm o_94 (ATerm z_93, ATerm a_94, ATerm b_94, ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL,h_94 = NULL,z_27 = NULL;
  t = SSLgetAnnotations(b_94);
  e_94 = t;
  t = SSL_is_string(z_93);
  h_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_94, a_94);
  z_27 = t;
  t = SSLsetAnnotations(z_27, e_94);
  if(match_cons(t, sym__2))
    {
      c_94 = ATgetArgument(t, 0);
      d_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(c_94, d_94, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_39 = ATgetArgument(t, 0);
      ATerm s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_94 = t;
  if(match_cons(t, sym__2))
    {
      k_94 = ATgetArgument(t, 0);
      l_94 = ATgetArgument(t, 1);
      {
        ATerm t_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_94(j_94, t);
            ;
            LocalPopChoice(u_39);
          }
        else
          {
            t = t_39;
            {
              ATerm v_39 = t;
              int w_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_94(k_94, l_94, j_94, t);
                  ;
                  LocalPopChoice(w_39);
                }
              else
                {
                  t = v_39;
                  t = o_94(k_94, l_94, j_94, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_94(j_94, t);
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_94 = NULL;
      s_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_94, term_a_40);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      t = debug_1_0(y_5, t);
      _fail(t);
    }
  q_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(r_94, t);
  p_94 = t;
  t = q_94;
  t = fclose_0_0(t);
  t = p_94;
  return(t);
}
ATerm fetch_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm q_95 (ATerm t)
  {
    ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL;
    n_95 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_95 = ATgetFirst((ATermList) t);
        p_95 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_40 = t;
      int d_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_46 = NULL,s_46 = NULL,e_28 = NULL;
          t = SSLgetAnnotations(n_95);
          p_46 = t;
          t = o_95;
          t = m_104(t);
          s_46 = t;
          t = (ATerm) ATinsert(CheckATermList(p_95), s_46);
          e_28 = t;
          t = SSLsetAnnotations(e_28, p_46);
          ;
          LocalPopChoice(d_40);
        }
      else
        {
          t = b_40;
          {
            ATerm a_47 = NULL,d_47 = NULL,k_28 = NULL;
            t = SSLgetAnnotations(n_95);
            a_47 = t;
            t = p_95;
            t = q_95(t);
            d_47 = t;
            t = (ATerm) ATinsert(CheckATermList(d_47), o_95);
            k_28 = t;
            t = SSLsetAnnotations(k_28, a_47);
          }
        }
    }
    return(t);
  }
  t = q_95(t);
  return(t);
}
ATerm g_8 (ATerm r_55, ATerm s_55, ATerm t)
{
  t = SSL_strcat(r_55, s_55);
  return(t);
}
ATerm debug_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL,w_95 = NULL,a_96 = NULL;
  t_95 = t;
  t = r_116(t);
  u_95 = t;
  t = term_q_10;
  w_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_95), u_95);
  a_96 = t;
  t = SSL_printnl(w_95, a_96);
  t = t_95;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_40);
    }
  else
    {
      t = h_40;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_96 = NULL;
      m_96 = t;
      t = SSL_is_string(m_96);
      ;
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      {
        ATerm m_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_5, t);
            ;
            LocalPopChoice(o_40);
          }
        else
          {
            t = m_40;
            {
              ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
              u_96 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_96 = ATgetArgument(t, 0);
                  t = v_96;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_96 = ATgetArgument(t, 0);
                      t = v_96;
                      {
                        ATerm p_40 = t;
                        int s_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_40);
                          }
                        else
                          {
                            t = p_40;
                            t = debug_1_0(a_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_97 = NULL,b_97 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_96 = ATgetArgument(t, 0);
                          w_96 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_96;
                      t = eval_config_0_0(t);
                      a_97 = t;
                      t = w_96;
                      t = eval_config_0_0(t);
                      b_97 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_97, b_97);
                      t = g_8(a_97, b_97, t);
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
  ATerm f_97 = NULL,g_97 = NULL;
  f_97 = t;
  t = term_t_40;
  g_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_40, f_97);
  t = p_8(g_97, f_97, t);
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_97 = NULL,i_97 = NULL;
        t = eval_config_0_0(t);
        h_97 = t;
        t = term_t_40;
        i_97 = t;
        t = SSL_table_put(i_97, f_97, h_97);
        t = h_97;
        ;
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  ATerm m_97 = NULL;
  m_97 = t;
  {
    ATerm x_40 = t;
    int y_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_97 = NULL;
        t = term_a_41;
        t = get_config_0_0(t);
        q_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_97, term_c_41);
        t = geq_0_0(t);
        t = m_97;
        t = e_118(t);
        ;
        LocalPopChoice(y_40);
      }
    else
      {
        t = x_40;
        t = m_97;
      }
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm t_97 = NULL;
  t_97 = t;
  if(match_string(t, "-k"))
    {
      t = t_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_97;
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL;
  u_97 = t;
  t = SSL_string_to_int(u_97);
  v_97 = t;
  t = term_d_41;
  w_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_41, v_97);
  t = s_8(w_97, v_97, t);
  t = u_97;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_e_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, e_6, m_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm y_97 = NULL;
  y_97 = t;
  if(match_string(t, "-S"))
    {
      t = y_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_97;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL;
  t = term_a_41;
  z_97 = t;
  t = term_h_41;
  a_98 = t;
  t = term_i_41;
  t = s_8(z_97, a_98, t);
  t = term_l_41;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL;
  b_98 = t;
  t = SSL_string_to_int(b_98);
  c_98 = t;
  t = term_a_41;
  d_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_41, c_98);
  t = s_8(d_98, c_98, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_98);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_n_41;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL;
  t = term_o_41;
  e_98 = t;
  t = term_p_10;
  f_98 = t;
  t = term_p_41;
  t = s_8(e_98, f_98, t);
  t = term_u_41;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_w_41;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_41 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, o_6, p_6, t);
      ;
      LocalPopChoice(b_42);
    }
  else
    {
      t = z_41;
      {
        ATerm c_42 = t;
        int h_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_6, r_6, u_6, t);
            ;
            LocalPopChoice(h_42);
          }
        else
          {
            t = c_42;
            t = Option_3_0(v_6, y_6, z_6, t);
          }
      }
    }
  return(t);
}
ATerm s_8 (ATerm s_65, ATerm t_65, ATerm t)
{
  ATerm g_98 = NULL;
  t = term_t_40;
  g_98 = t;
  t = SSL_table_put(g_98, s_65, t_65);
  t = (ATerm) ATmakeAppl(sym__3, term_t_40, s_65, t_65);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
      t = term_p_10;
      t = d_0(t);
      n_98 = t;
      t = term_j_42;
      o_98 = t;
      t = term_k_42;
      p_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_42, term_k_42, n_98);
      t = q_8(o_98, p_98, n_98, t);
      _fail(t);
    }
  else
    {
      ATerm u_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_98 = ATgetFirst((ATermList) t);
          k_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_98;
      t = a_0(t);
      t = term_p_10;
      t = c_0(t);
      u_98 = t;
      t = (ATerm) ATinsert(CheckATermList(k_98), u_98);
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm w_98 = NULL;
  w_98 = t;
  if(match_string(t, "-o"))
    {
      t = w_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_98;
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL;
  x_98 = t;
  t = term_p_42;
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_42, x_98);
  t = s_8(y_98, x_98, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_98);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_q_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_7, b_7, c_7, t);
  return(t);
}
ATerm q_8 (ATerm a_68, ATerm b_68, ATerm z_67, ATerm t)
{
  ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL;
  a_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_68, b_68);
  {
    ATerm s_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_42 = ATgetArgument(t, 0);
            ATerm v_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_68, b_68);
        t = p_8(a_68, b_68, t);
        ;
        LocalPopChoice(t_42);
      }
    else
      {
        t = s_42;
        t = (ATerm) ATempty;
      }
    b_99 = t;
    t = (ATerm) ATinsert(CheckATermList(b_99), z_67);
    c_99 = t;
    t = SSL_table_put(a_68, b_68, c_99);
    t = a_99;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_99 = NULL,o_99 = NULL,r_99 = NULL;
      t = term_p_10;
      t = l_0(t);
      n_99 = t;
      t = term_j_42;
      o_99 = t;
      t = term_k_42;
      r_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_42, term_k_42, n_99);
      t = q_8(o_99, r_99, n_99, t);
      _fail(t);
    }
  else
    {
      ATerm v_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_99 = ATgetFirst((ATermList) t);
          k_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_99 = ATgetFirst((ATermList) t);
          m_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_99;
      t = j_0(t);
      t = l_99;
      t = k_0(t);
      v_99 = t;
      t = (ATerm) ATinsert(CheckATermList(m_99), v_99);
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm x_99 = NULL;
  x_99 = t;
  if(match_string(t, "-i"))
    {
      t = x_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_99;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL;
  y_99 = t;
  t = term_w_42;
  z_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_42, y_99);
  t = s_8(z_99, y_99, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_99);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_7, e_7, g_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_10;
  t = whoami_0_0(t);
  a_100 = t;
  t = term_q_10;
  c_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_42), a_100);
  d_100 = t;
  t = SSL_printnl(c_100, d_100);
  t = term_w_10;
  b_100 = t;
  t = SSL_exit(b_100);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_42;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_8 (ATerm b_58, ATerm c_58, ATerm t)
{
  ATerm a_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_58, c_58);
      ;
      LocalPopChoice(c_43);
    }
  else
    {
      t = a_43;
      t = SSL_addr(b_58, c_58);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  ATerm f_100 = NULL,g_100 = NULL,h_100 = NULL;
  f_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_100;
      t = f_110(t);
    }
  else
    {
      ATerm k_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_100 = ATgetFirst((ATermList) t);
          h_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_100;
      t = foldr_2_0(f_110, g_110, t);
      k_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_100, k_100);
      t = g_110(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_h_41;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(u_47, v_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_100 = NULL,q_47 = NULL,r_47 = NULL;
  t = times_0_0(t);
  r_47 = t;
  t = SSL_explode_term(r_47);
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      q_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_47;
  t = foldr_2_0(h_7, o_7, t);
  n_100 = t;
  t = SSL_TicksToSeconds(n_100);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL;
  y_100 = t;
  if(match_cons(t, sym__2))
    {
      z_100 = ATgetArgument(t, 0);
      a_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_101;
        if((z_100 != t))
          {
            _fail(t);
          }
        t = y_100;
        ;
        LocalPopChoice(g_43);
      }
    else
      {
        t = f_43;
        t = (ATerm) ATmakeAppl(sym__2, z_100, a_101);
        {
          ATerm h_43 = t;
          int i_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_100, a_101);
              ;
              LocalPopChoice(i_43);
            }
          else
            {
              t = h_43;
              t = SSL_gtr(z_100, a_101);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_100, a_101);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_118 (ATerm), ATerm t)
{
  ATerm e_101 = NULL;
  e_101 = t;
  {
    ATerm k_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_101 = NULL;
        t = term_a_41;
        t = get_config_0_0(t);
        g_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_101, term_w_10);
        t = geq_0_0(t);
        t = e_101;
        t = d_118(t);
        ;
        LocalPopChoice(l_43);
      }
    else
      {
        t = k_43;
        t = e_101;
      }
  }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL,l_101 = NULL,m_101 = NULL;
  t = run_time_0_0(t);
  i_101 = t;
  t = term_p_10;
  t = whoami_0_0(t);
  j_101 = t;
  t = term_q_10;
  l_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_43), i_101), term_n_43), j_101);
  m_101 = t;
  t = SSL_printnl(l_101, m_101);
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_43), i_101), term_n_43), j_101));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_101 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_41;
  n_101 = t;
  t = SSL_exit(n_101);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL;
  w_101 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_101;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_101 = ATgetArgument(t, 0);
          {
            ATerm h_48 = NULL,o_28 = NULL;
            t = SSLgetAnnotations(w_101);
            h_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_101);
            o_28 = t;
            t = SSLsetAnnotations(o_28, h_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_101;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  ATerm s_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_43;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_43);
    }
  else
    {
      t = s_43;
      t = fetch_1_0(q_7, t);
    }
  t = r_124(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_101 = NULL,a_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_101 = ATgetFirst((ATermList) t);
      a_102 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_102 = NULL,f_102 = NULL;
        ATerm r_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_102)), not_null(f_102));
          return(t);
        }
        t = not_null(a_102);
        t = h_0(t);
        if(((e_102 != NULL) && (e_102 != t)))
          _fail(t);
        else
          e_102 = t;
        t = not_null(z_101);
        t = g_0(t);
        if(((f_102 != NULL) && (f_102 != t)))
          _fail(t);
        else
          f_102 = t;
        t = not_null(a_102);
        t = reverse_acc_2_0(g_0, r_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_10;
      t = h_0(t);
    }
  return(t);
}
ATerm p_8 (ATerm r_69, ATerm s_69, ATerm t)
{
  t = SSL_table_get(r_69, s_69);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm s_102 = NULL,t_48 = NULL,u_48 = NULL;
  s_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_102), term_w_43);
  {
    ATerm x_43 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(c_44);
      }
    else
      {
        t = x_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_102), term_w_43));
      }
    t_48 = t;
    t = term_d_39;
    u_48 = t;
    t = SSL_printnl(u_48, t_48);
    t = (ATerm) ATinsert(ATinsert(ATempty, s_102), term_w_43);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL,q_48 = NULL,r_48 = NULL;
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_42;
      t = get_config_0_0(t);
      j_102 = t;
      ;
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      {
        ATerm x_7 (ATerm t)
        {
          ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL,q_28 = NULL;
          o_102 = t;
          if(match_cons(t, sym_Program_1))
            {
              n_102 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_102);
          m_102 = t;
          t = n_102;
          if(((j_102 != NULL) && (j_102 != t)))
            _fail(t);
          else
            j_102 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, n_102);
          q_28 = t;
          t = SSLsetAnnotations(q_28, m_102);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  {
    ATerm f_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_48 = NULL,o_48 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_44), not_null(j_102)), term_i_44);
        {
          ATerm k_44 = t;
          int l_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              ;
              LocalPopChoice(l_44);
            }
          else
            {
              t = k_44;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_44), not_null(j_102)), term_i_44));
            }
          n_48 = t;
          t = term_d_39;
          o_48 = t;
          t = SSL_printnl(o_48, n_48);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_44), not_null(j_102)), term_i_44);
        }
        ;
        LocalPopChoice(h_44);
      }
    else
      {
        t = f_44;
      }
    t = term_o_44;
    {
      ATerm s_44 = t;
      int t_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(t_44);
        }
      else
        {
          t = s_44;
          t = (ATerm) ATinsert(ATempty, term_o_44);
        }
      if(((q_48 != NULL) && (q_48 != t)))
        _fail(t);
      else
        q_48 = t;
      t = term_d_39;
      if(((r_48 != NULL) && (r_48 != t)))
        _fail(t);
      else
        r_48 = t;
      t = SSL_printnl(not_null(r_48), not_null(q_48));
      t = term_j_42;
      if(((k_102 != NULL) && (k_102 != t)))
        _fail(t);
      else
        k_102 = t;
      t = term_k_42;
      if(((l_102 != NULL) && (l_102 != t)))
        _fail(t);
      else
        l_102 = t;
      t = term_u_44;
      t = p_8(not_null(k_102), not_null(l_102), t);
      t = reverse_acc_2_0(_id, y_7, t);
      t = map_1_0(z_7, t);
      {
        ATerm v_44 = t;
        int x_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_48 = NULL,x_48 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_45), term_a_45), term_z_44), term_y_44);
            {
              ATerm c_45 = t;
              int d_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_list_0_0(t);
                  ;
                  LocalPopChoice(d_45);
                }
              else
                {
                  t = c_45;
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_45), term_a_45), term_z_44), term_y_44));
                }
              w_48 = t;
              t = term_d_39;
              x_48 = t;
              t = SSL_printnl(x_48, w_48);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_45), term_a_45), term_z_44), term_y_44);
            }
            ;
            LocalPopChoice(x_44);
          }
        else
          {
            t = v_44;
          }
      }
    }
  }
  return(t);
}
ATerm map_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  ATerm j_103 (ATerm t)
  {
    ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL;
    g_103 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_103;
      }
    else
      {
        ATerm b_49 = NULL,e_49 = NULL,f_49 = NULL,s_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_103 = ATgetFirst((ATermList) t);
            i_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_103);
        b_49 = t;
        t = h_103;
        t = c_104(t);
        e_49 = t;
        t = i_103;
        t = j_103(t);
        f_49 = t;
        t = (ATerm) ATinsert(CheckATermList(f_49), e_49);
        s_28 = t;
        t = SSLsetAnnotations(s_28, b_49);
      }
    return(t);
  }
  t = j_103(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_103 = NULL;
      u_103 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = u_103;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_45 = ATgetFirst((ATermList) t);
              ATerm h_45 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_103;
        }
      ;
      LocalPopChoice(f_45);
    }
  else
    {
      t = e_45;
      {
        ATerm u_105 (ATerm t)
        {
          ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL;
          s_105 = t;
          if(match_cons(t, sym_iter_1))
            {
              t_105 = ATgetArgument(t, 0);
              {
                ATerm t_49 = NULL,o_29 = NULL;
                t = SSLgetAnnotations(s_105);
                t_49 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, t_105);
                o_29 = t;
                t = SSLsetAnnotations(o_29, t_49);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  t_105 = ATgetArgument(t, 0);
                  r_105 = ATgetArgument(t, 1);
                  {
                    ATerm b_50 = NULL,a_31 = NULL;
                    t = SSLgetAnnotations(s_105);
                    b_50 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, t_105, r_105);
                    a_31 = t;
                    t = SSLsetAnnotations(a_31, b_50);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      t_105 = ATgetArgument(t, 0);
                      {
                        ATerm k_50 = NULL,b_31 = NULL;
                        t = SSLgetAnnotations(s_105);
                        k_50 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, t_105);
                        b_31 = t;
                        t = SSLsetAnnotations(b_31, k_50);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          t_105 = ATgetArgument(t, 0);
                          r_105 = ATgetArgument(t, 1);
                          {
                            ATerm s_50 = NULL,c_31 = NULL;
                            t = SSLgetAnnotations(s_105);
                            s_50 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, t_105, r_105);
                            c_31 = t;
                            t = SSLsetAnnotations(c_31, s_50);
                          }
                        }
                      else
                        {
                          ATerm j_52 = NULL,m_52 = NULL,e_31 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              if(((t_105 != NULL) && (t_105 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                t_105 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(not_null(s_105));
                          if(((j_52 != NULL) && (j_52 != t)))
                            _fail(t);
                          else
                            j_52 = t;
                          t = not_null(t_105);
                          {
                            ATerm a_8 (ATerm t)
                            {
                              ATerm i_45 = t;
                              int j_45 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_52 = NULL,x_52 = NULL;
                                  x_52 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      w_52 = ATgetArgument(t, 0);
                                      {
                                        ATerm q_53 = NULL,d_31 = NULL;
                                        t = SSLgetAnnotations(x_52);
                                        q_53 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, w_52);
                                        d_31 = t;
                                        t = SSLsetAnnotations(d_31, q_53);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = x_52;
                                    }
                                  ;
                                  LocalPopChoice(j_45);
                                }
                              else
                                {
                                  t = i_45;
                                  t = u_105(t);
                                }
                              return(t);
                            }
                            t = map_1_0(a_8, t);
                            if(((m_52 != NULL) && (m_52 != t)))
                              _fail(t);
                            else
                              m_52 = t;
                            t = (ATerm) ATmakeAppl(sym_seq_1, not_null(m_52));
                            if(((e_31 != NULL) && (e_31 != t)))
                              _fail(t);
                            else
                              e_31 = t;
                            t = SSLsetAnnotations(not_null(e_31), not_null(j_52));
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = u_105(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_53 = NULL,d_54 = NULL,e_54 = NULL;
  t = term_z_42;
  t = get_config_0_0(t);
  x_53 = t;
  {
    ATerm k_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(l_45);
      }
    else
      {
        t = k_45;
        t = (ATerm) ATinsert(ATempty, x_53);
      }
    d_54 = t;
    t = term_d_39;
    e_54 = t;
    t = SSL_printnl(e_54, d_54);
    t = x_53;
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL;
  t = term_p_45;
  e_106 = t;
  t = term_p_10;
  f_106 = t;
  t = term_r_45;
  t = s_8(e_106, f_106, t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_s_45;
  return(t);
}
ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL;
  t = term_p_45;
  i_106 = t;
  t = term_p_10;
  j_106 = t;
  t = term_r_45;
  t = s_8(i_106, j_106, t);
  t = term_u_45;
  g_106 = t;
  t = term_p_10;
  h_106 = t;
  t = term_v_45;
  t = s_8(g_106, h_106, t);
  t = term_w_45;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, f_8, o_8, t);
      ;
      LocalPopChoice(g_46);
    }
  else
    {
      t = f_46;
      t = Option_3_0(r_8, u_8, j_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL,r_32 = NULL;
  p_106 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_106 = ATgetFirst((ATermList) t);
      m_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_106);
  k_106 = t;
  t = l_106;
  t = j_83(t);
  n_106 = t;
  t = m_106;
  t = k_83(t);
  o_106 = t;
  t = (ATerm) ATinsert(CheckATermList(o_106), n_106);
  r_32 = t;
  t = SSLsetAnnotations(r_32, k_106);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_120 (ATerm), ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,z_106 = NULL,a_107 = NULL,t_32 = NULL;
  if(((u_106 != NULL) && (u_106 != t)))
    _fail(t);
  else
    u_106 = t;
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_46;
        t = z_120(t);
        ;
        LocalPopChoice(i_46);
      }
    else
      {
        t = h_46;
      }
    t = not_null(u_106);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_106 != NULL) && (w_106 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_106 = ATgetFirst((ATermList) t);
        if(((x_106 != NULL) && (x_106 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          x_106 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(u_106));
    if(((v_106 != NULL) && (v_106 != t)))
      _fail(t);
    else
      v_106 = t;
    t = term_z_42;
    if(((a_107 != NULL) && (a_107 != t)))
      _fail(t);
    else
      a_107 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_42, not_null(w_106));
    t = s_8(not_null(a_107), not_null(w_106), t);
    t = not_null(x_106);
    {
      ATerm k_107 (ATerm t)
      {
        ATerm k_46 = t;
        int l_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_46 = t;
            int n_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_107 = NULL;
                d_107 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_107;
                ;
                LocalPopChoice(n_46);
              }
            else
              {
                t = m_46;
                t = z_120(t);
                t = Cons_2_0(_id, k_107, t);
              }
            ;
            LocalPopChoice(l_46);
          }
        else
          {
            t = k_46;
            {
              ATerm g_107 = NULL,h_107 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_107 = ATgetFirst((ATermList) t);
                  h_107 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_107), (ATerm) ATmakeAppl(sym_Undefined_1, g_107));
            }
          }
        return(t);
      }
      t = k_107(t);
      if(((z_106 != NULL) && (z_106 != t)))
        _fail(t);
      else
        z_106 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(z_106)), (ATerm) ATmakeAppl(sym_Program_1, not_null(w_106)));
      if(((t_32 != NULL) && (t_32 != t)))
        _fail(t);
      else
        t_32 = t;
      t = SSLsetAnnotations(not_null(t_32), not_null(v_106));
    }
  }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm w_107 = NULL;
  w_107 = t;
  if(match_string(t, "--help"))
    {
      t = w_107;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_107;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_107;
        }
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL;
  t = term_v_43;
  x_107 = t;
  t = term_p_10;
  y_107 = t;
  t = term_o_46;
  t = s_8(x_107, y_107, t);
  t = term_q_46;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_r_46;
  return(t);
}
ATerm q_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_120 (ATerm), ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL;
  if(((r_107 != NULL) && (r_107 != t)))
    _fail(t);
  else
    r_107 = t;
  t = term_j_42;
  if(((t_107 != NULL) && (t_107 != t)))
    _fail(t);
  else
    t_107 = t;
  t = term_k_42;
  if(((u_107 != NULL) && (u_107 != t)))
    _fail(t);
  else
    u_107 = t;
  t = (ATerm) ATempty;
  if(((v_107 != NULL) && (v_107 != t)))
    _fail(t);
  else
    v_107 = t;
  t = SSL_table_put(not_null(t_107), not_null(u_107), not_null(v_107));
  t = not_null(r_107);
  {
    ATerm k_9 (ATerm t)
    {
      ATerm t_46 = t;
      int u_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_120(t);
          ;
          LocalPopChoice(u_46);
        }
      else
        {
          t = t_46;
          {
            ATerm v_46 = t;
            int w_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_9, o_9, p_9, t);
                ;
                LocalPopChoice(w_46);
              }
            else
              {
                t = v_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_9, t);
    {
      ATerm x_46 = t;
      int y_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_108 = NULL;
          f_108 = t;
          {
            ATerm z_46 = t;
            int b_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_54 = NULL;
                t = f_108;
                {
                  ATerm c_47 = t;
                  int e_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_43;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_47);
                    }
                  else
                    {
                      t = c_47;
                      t = fetch_1_0(q_9, t);
                    }
                  t = f_108;
                  t = default_system_usage_0_0(t);
                  t = term_h_41;
                  i_54 = t;
                  t = SSL_exit(i_54);
                }
                ;
                LocalPopChoice(b_47);
              }
            else
              {
                t = z_46;
                {
                  ATerm o_54 = NULL;
                  t = term_p_45;
                  t = get_config_0_0(t);
                  t = f_108;
                  t = default_system_about_0_0(t);
                  t = term_h_41;
                  o_54 = t;
                  t = SSL_exit(o_54);
                }
              }
          }
          ;
          LocalPopChoice(y_46);
        }
      else
        {
          t = x_46;
          {
            ATerm f_47 = t;
            int g_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL;
                ATerm s_9 (ATerm t)
                {
                  ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,w_32 = NULL;
                  l_108 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_108 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_108);
                  j_108 = t;
                  t = k_108;
                  if(((p_107 != NULL) && (p_107 != t)))
                    _fail(t);
                  else
                    p_107 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_108);
                  w_32 = t;
                  t = SSLsetAnnotations(w_32, j_108);
                  return(t);
                }
                t = fetch_1_0(s_9, t);
                t = term_q_10;
                if(((h_108 != NULL) && (h_108 != t)))
                  _fail(t);
                else
                  h_108 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_107)), term_h_47);
                if(((i_108 != NULL) && (i_108 != t)))
                  _fail(t);
                else
                  i_108 = t;
                t = SSL_printnl(not_null(h_108), not_null(i_108));
                t = (ATerm) ATmakeAppl(sym__2, term_q_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_107)), term_h_47));
                t = default_system_usage_0_0(t);
                t = term_w_10;
                if(((g_108 != NULL) && (g_108 != t)))
                  _fail(t);
                else
                  g_108 = t;
                t = SSL_exit(not_null(g_108));
                ;
                LocalPopChoice(g_47);
              }
            else
              {
                t = f_47;
              }
          }
        }
      if(((q_107 != NULL) && (q_107 != t)))
        _fail(t);
      else
        q_107 = t;
      t = term_j_42;
      if(((s_107 != NULL) && (s_107 != t)))
        _fail(t);
      else
        s_107 = t;
      t = SSL_table_destroy(not_null(s_107));
      t = not_null(q_107);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL;
  t = parse_options_1_0(t_124, t);
  q_108 = t;
  t = term_i_47;
  t_108 = t;
  t = SSL_table_create(t_108);
  t = term_i_47;
  r_108 = t;
  t = term_j_47;
  s_108 = t;
  t = SSL_table_put(r_108, s_108, q_108);
  t = q_108;
  t = v_124(t);
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_124, t);
        ;
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
        {
          ATerm m_47 = t;
          int n_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_124(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_47);
            }
          else
            {
              t = m_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = if_verbose2_1_0(n_10, t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm u_108 = NULL,v_108 = NULL;
  t = term_o_47;
  u_108 = t;
  t = term_p_10;
  v_108 = t;
  t = term_p_47;
  t = s_8(u_108, v_108, t);
  t = term_s_47;
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_t_47;
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm w_108 = NULL,x_108 = NULL,y_108 = NULL,z_108 = NULL;
  w_108 = t;
  t = term_z_42;
  t = get_config_0_0(t);
  x_108 = t;
  t = term_q_10;
  y_108 = t;
  t = (ATerm) ATinsert(ATempty, x_108);
  z_108 = t;
  t = SSL_printnl(y_108, z_108);
  t = w_108;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm t)
{
  ATerm b_10 (ATerm t)
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_124(t);
        ;
        LocalPopChoice(x_47);
      }
    else
      {
        t = w_47;
        {
          ATerm y_47 = t;
          int z_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_47);
            }
          else
            {
              t = y_47;
              {
                ATerm a_48 = t;
                int b_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(b_48);
                  }
                else
                  {
                    t = a_48;
                    {
                      ATerm c_48 = t;
                      int d_48 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_10, i_10, k_10, t);
                          ;
                          LocalPopChoice(d_48);
                        }
                      else
                        {
                          t = c_48;
                          {
                            ATerm e_48 = t;
                            int f_48 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_48);
                              }
                            else
                              {
                                t = e_48;
                                t = keep_option_0_0(t);
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
  ATerm g_10 (ATerm t)
  {
    ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL;
    if(((b_109 != NULL) && (b_109 != t)))
      _fail(t);
    else
      b_109 = t;
    {
      ATerm g_48 = t;
      int i_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_109 != NULL) && (a_109 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_109 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_10, t);
          ;
          LocalPopChoice(i_48);
        }
      else
        {
          t = g_48;
          t = term_j_48;
          if(((a_109 != NULL) && (a_109 != t)))
            _fail(t);
          else
            a_109 = t;
        }
      t = not_null(a_109);
      t = ReadFromFile_0_0(t);
      if(((c_109 != NULL) && (c_109 != t)))
        _fail(t);
      else
        c_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_109), not_null(c_109));
      t = apply_strategy_1_0(c_124, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_10, e_124, d_10, g_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(implode_0_0, implode_options_0_0, default_usage_0_0, t);
  return(t);
}

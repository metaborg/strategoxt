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
ATerm term_z_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_e_47;
ATerm term_z_46;
ATerm term_s_46;
ATerm term_n_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_c_45;
ATerm term_z_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_b_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_k_42;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_o_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_k_40;
ATerm term_q_39;
ATerm term_k_39;
ATerm term_f_39;
ATerm term_m_38;
ATerm term_j_38;
ATerm term_e_38;
ATerm term_t_33;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_f_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_r_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_h_20;
ATerm term_s_19;
ATerm term_y_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_v_17;
ATerm term_b_16;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
void init_constant_terms (void)
{
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
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
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
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
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym__2, term_x_40, term_h_41);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_41);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_m_41, term_o_10);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym__2, term_k_42, term_r_42);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym__2, term_c_46, term_o_10);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_i_46, term_o_10);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym__2, term_d_44, term_o_10);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym__2, term_e_48, term_o_10);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm l_0 (ATerm);
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
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm implode_options_0_0 (ATerm);
ATerm c_1 (ATerm o_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm is_conc_0_0 (ATerm);
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm s_7 (ATerm e_77 (ATerm), ATerm p_19, ATerm o_19, ATerm);
ATerm is_ins_0_0 (ATerm);
ATerm is_nil_0_0 (ATerm);
ATerm ReplCons_1_0 (ATerm l_77 (ATerm), ATerm);
ATerm OptList_0_0 (ATerm);
ATerm is_layout_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm implodeAsfix_0_0 (ATerm);
ATerm Tuple_0_0 (ATerm);
ATerm topdown_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm CTC2_0_0 (ATerm);
ATerm CTC1_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm conc_to_cons_0_0 (ATerm);
ATerm Constr1_0_0 (ATerm);
ATerm w_7 (ATerm a_19, ATerm z_18, ATerm);
ATerm ConstrNil_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm replace_appl_0_0 (ATerm);
ATerm FlatAlt_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm u_80 (ATerm), ATerm);
ATerm injective_alt_0_0 (ATerm);
ATerm m_62 (ATerm d_52, ATerm h_52, ATerm j_52, ATerm k_52, ATerm);
ATerm n_62 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm e_53, ATerm);
ATerm o_62 (ATerm e_55, ATerm f_55, ATerm h_55, ATerm m_55, ATerm);
ATerm p_62 (ATerm e_61, ATerm k_61, ATerm l_61, ATerm m_61, ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm v_3 (ATerm);
ATerm injection_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm r_79 (ATerm), ATerm);
ATerm filter_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm q_68 (ATerm m_65, ATerm);
ATerm r_68 (ATerm v_66, ATerm);
ATerm FlatList_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm i_86 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm e_4 (ATerm);
ATerm PpSym_0_0 (ATerm);
ATerm t_76 (ATerm n_75, ATerm o_75, ATerm p_75, ATerm);
ATerm u_76 (ATerm z_75, ATerm a_76, ATerm b_76, ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_78 (ATerm), ATerm);
ATerm is_layout_p__0_0 (ATerm);
ATerm flat_layout_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm yield_0_0 (ATerm);
ATerm implode_lexical_0_0 (ATerm);
ATerm downup2_2_0 (ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm);
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
ATerm e_5 (ATerm);
ATerm o_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm implode_0_0 (ATerm);
ATerm h_8 (ATerm g_42, ATerm h_42, ATerm);
ATerm i_8 (ATerm u_45, ATerm v_45, ATerm);
ATerm k_8 (ATerm e_98 (ATerm), ATerm u_470, ATerm y_45, ATerm);
ATerm j_8 (ATerm q_45, ATerm r_45, ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm f_94 (ATerm z_93, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_8 (ATerm w_45, ATerm);
ATerm m_8 (ATerm i_42, ATerm j_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_95 (ATerm p_94, ATerm);
ATerm t_95 (ATerm t_94, ATerm u_94, ATerm v_94, ATerm);
ATerm u_95 (ATerm d_95, ATerm e_95, ATerm f_95, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm g_8 (ATerm w_36, ATerm x_36, ATerm);
ATerm debug_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm l_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_8 (ATerm x_46, ATerm y_46, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_8 (ATerm f_49, ATerm g_49, ATerm e_49, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_8 (ATerm g_39, ATerm h_39, ATerm);
ATerm foldr_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm o_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_99 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_7 (ATerm);
ATerm need_help_1_0 (ATerm c_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm p_8 (ATerm w_50, ATerm x_50, ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm map_1_0 (ATerm h_85 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm u_8 (ATerm);
ATerm k_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm k_102 (ATerm), ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm parse_options_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm);
ATerm g_10 (ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm iowrap_3_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL;
  a_0 = t;
  t = term_o_10;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_p_10;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_10), b_0), term_r_10);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_x_10;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm l_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_b_11;
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
  t = term_c_11;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_d_11;
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
  t = term_e_11;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_f_11;
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
  t = term_g_11;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm r_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm j_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm l_2 (ATerm t)
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
  t = term_y_11;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm z_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_0, s_0, z_0, t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = z_11;
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
                              t = Option_3_0(r_1, t_1, u_1, t);
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
                                    t = Option_3_0(w_1, y_1, z_1, t);
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
                                          t = Option_3_0(b_2, c_2, e_2, t);
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
                                                t = Option_3_0(j_2, k_2, l_2, t);
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
ATerm c_1 (ATerm o_0, ATerm t)
{
  ATerm q_0 = NULL;
  t = SSL_explode_term(o_0);
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,y_0 = NULL;
  y_0 = t;
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      u_0 = ATgetArgument(t, 1);
      {
        ATerm x_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              t = u_0;
              return(t);
            }
            t = t_0;
            t = at_end_1_0(t_2, t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = x_12;
            t = c_1(y_0, t);
          }
      }
    }
  else
    {
      t = c_1(y_0, t);
    }
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm q_1 = NULL,s_1 = NULL,v_1 = NULL,x_1 = NULL,a_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
  q_1 = t;
  if(match_cons(t, sym_prod_3))
    {
      s_1 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
      {
        ATerm c_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_13 = ATgetFirst((ATermList) t);
      v_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_13 = ATgetFirst((ATermList) t);
      x_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_1;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_13 = ATgetFirst((ATermList) t);
            a_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_13);
        t = a_2;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_2;
            {
              ATerm n_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm s_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_13);
                  t = q_1;
                }
              else
                {
                  t = n_13;
                  if(match_cons(t, sym_cf_1))
                    {
                      h_2 = ATgetArgument(t, 0);
                      t = h_2;
                      {
                        ATerm t_13 = t;
                        int w_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm x_13 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_13);
                            t = q_1;
                          }
                        else
                          {
                            t = t_13;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm y_13 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = q_1;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm a_14 = ATgetArgument(t, 0);
                          ATerm b_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_1;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_14 = ATgetFirst((ATermList) t);
                d_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_2;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_14 = ATgetFirst((ATermList) t);
                f_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = g_2;
            if(match_cons(t, sym_cf_1))
              {
                h_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_2;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm f_14 = ATgetArgument(t, 0);
                ATerm g_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_1;
          }
      }
    else
      {
        t = h_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm h_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_1;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  o_3 = t;
  if(match_cons(t, sym_appl_2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_3 = ATgetFirst((ATermList) t);
      s_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_3 = ATgetFirst((ATermList) t);
      u_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_3 = ATgetFirst((ATermList) t);
      n_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL;
        t = n_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_3;
        t = is_conc_0_0(t);
        t = r_3;
        t = r_0(t);
        a_4 = t;
        t = t_3;
        t = r_0(t);
        b_4 = t;
        t = m_3;
        t = r_0(t);
        c_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATinsert(CheckATermList(c_4), b_4));
        t = conc_0_0(t);
      }
    }
  else
    {
      ATerm l_1 = NULL,m_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_3;
      t = is_conc_0_0(t);
      t = r_3;
      t = r_0(t);
      l_1 = t;
      t = t_3;
      t = r_0(t);
      m_1 = t;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 = NULL,m_2 = NULL;
            t = m_1;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = m_1;
              }
            else
              {
                ATerm c_3 = NULL,i_0 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_2 = ATgetFirst((ATermList) t);
                    m_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_1);
                c_3 = t;
                t = (ATerm) ATinsert(CheckATermList(m_2), i_2);
                i_0 = t;
                t = SSLsetAnnotations(i_0, c_3);
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
ATerm s_7 (ATerm e_77 (ATerm), ATerm p_19, ATerm o_19, ATerm t)
{
  ATerm q_6 = NULL,s_6 = NULL,u_6 = NULL,w_6 = NULL;
  t = p_19;
  if(match_cons(t, sym_prod_3))
    {
      ATerm l_14 = ATgetArgument(t, 0);
      ATerm m_14 = ATgetArgument(t, 1);
      u_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_6;
  {
    ATerm u_2 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((w_6 != NULL) && (w_6 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            w_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(u_2, t);
    t = not_null(w_6);
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
                            t = not_null(w_6);
                          }
                      }
                  }
              }
          }
      }
    if(((q_6 != NULL) && (q_6 != t)))
      _fail(t);
    else
      q_6 = t;
    t = o_19;
    t = map_1_0(e_77, t);
    if(((s_6 != NULL) && (s_6 != t)))
      _fail(t);
    else
      s_6 = t;
    t = SSL_mkterm(q_6, s_6);
  }
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL;
  h_5 = t;
  if(match_cons(t, sym_prod_3))
    {
      i_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      {
        ATerm u_14 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_5 = ATgetFirst((ATermList) t);
      m_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = n_5;
  if(match_cons(t, sym_iter_1))
    {
      p_5 = ATgetArgument(t, 0);
      t = p_5;
      if((j_5 != t))
        {
          _fail(t);
        }
      t = h_5;
    }
  else
    {
      ATerm w_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              p_5 = ATgetArgument(t, 0);
              {
                ATerm a_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(x_14);
          t = p_5;
          if((j_5 != t))
            {
              _fail(t);
            }
          t = h_5;
        }
      else
        {
          t = w_14;
          if(match_cons(t, sym_cf_1))
            {
              p_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_5;
          if(match_cons(t, sym_cf_1))
            {
              k_5 = ATgetArgument(t, 0);
            }
          else
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
              t = h_5;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  q_5 = ATgetArgument(t, 0);
                  {
                    ATerm b_15 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = q_5;
              if((k_5 != t))
                {
                  _fail(t);
                }
              t = h_5;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,j_6 = NULL,k_6 = NULL;
  e_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      f_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
      {
        ATerm c_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = f_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_6;
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
        t = e_6;
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
              t = e_6;
            }
          else
            {
              t = g_15;
              if(match_cons(t, sym_cf_1))
                {
                  k_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_6;
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
                    t = e_6;
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
                    t = e_6;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL,t_10 = NULL,v_10 = NULL,z_10 = NULL,a_11 = NULL;
      s_10 = t;
      if(match_cons(t, sym_appl_2))
        {
          t_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm r_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_10;
              t = s_7(l_77, t_10, v_10, t);
              ;
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
                    t = t_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    ;
                    LocalPopChoice(u_15);
                  }
                else
                  {
                    t = t_15;
                    {
                      ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
                      t = t_10;
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
                            t = t_10;
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
                            t = t_10;
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
              z_10 = ATgetFirst((ATermList) t);
              a_11 = (ATerm) ATgetNext((ATermList) t);
              t = a_11;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm c_16 = t;
                  int d_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_10;
                      t = s_7(l_77, t_10, v_10, t);
                      ;
                      LocalPopChoice(d_16);
                    }
                  else
                    {
                      t = c_16;
                      {
                        ATerm f_16 = t;
                        int g_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_11 = NULL;
                            t = t_10;
                            t = is_ins_0_0(t);
                            t = z_10;
                            t = l_77(t);
                            n_11 = t;
                            t = (ATerm) ATinsert(ATempty, n_11);
                            ;
                            LocalPopChoice(g_16);
                          }
                        else
                          {
                            t = f_16;
                            {
                              ATerm y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL,l_5 = NULL;
                              t = t_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  a_5 = ATgetArgument(t, 0);
                                  f_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_16 = ATgetArgument(t, 2);
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
                              t = f_5;
                              if(match_cons(t, sym_opt_1))
                                {
                                  g_5 = ATgetArgument(t, 0);
                                  t = g_5;
                                  if((b_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = t_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      g_5 = ATgetArgument(t, 0);
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
                                  t = g_5;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      l_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_5;
                                  if((c_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = t_10;
                                }
                              t = z_10;
                              t = l_77(t);
                              y_4 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, y_4);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = s_10;
                  t = s_7(l_77, t_10, v_10, t);
                }
            }
          else
            {
              t = s_10;
              t = s_7(l_77, t_10, v_10, t);
            }
        }
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = ReplConsConc_1_0(l_77, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,o_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL,v_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      o_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_13;
  if(match_cons(t, sym_prod_3))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
      {
        ATerm l_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_12 = ATgetFirst((ATermList) t);
      k_13 = (ATerm) ATgetNext((ATermList) t);
      t = k_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_13;
      if(match_cons(t, sym_opt_1))
        {
          u_13 = ATgetArgument(t, 0);
          t = z_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_13 = ATgetFirst((ATermList) t);
              m_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_13;
          if((y_12 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = l_13;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              u_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_12;
          if(match_cons(t, sym_cf_1))
            {
              z_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_13;
          if(match_cons(t, sym_opt_1))
            {
              v_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_13 = ATgetFirst((ATermList) t);
              m_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_13;
          if((z_12 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = l_13;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_13;
      if(match_cons(t, sym_opt_1))
        {
          u_13 = ATgetArgument(t, 0);
          t = z_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              u_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_13;
          if(match_cons(t, sym_opt_1))
            {
              v_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm is_layout_0_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym_appl_2))
    {
      h_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
      {
        ATerm f_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,d_1 = NULL,b_1 = NULL,b_8 = NULL;
        t = SSLgetAnnotations(g_17);
        f_7 = t;
        t = h_17;
        if(match_cons(t, sym_prod_3))
          {
            j_7 = ATgetArgument(t, 0);
            k_7 = ATgetArgument(t, 1);
            l_7 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_17);
        i_7 = t;
        t = k_7;
        if(match_cons(t, sym_cf_1))
          {
            b_8 = ATgetArgument(t, 0);
            {
              ATerm t_8 = NULL,v_8 = NULL,i_9 = NULL,j_9 = NULL,w_0 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(k_7);
              t_8 = t;
              t = b_8;
              if(match_cons(t, sym_opt_1))
                {
                  i_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_8);
              v_8 = t;
              t = i_9;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_opt_1, i_9);
              v_0 = t;
              t = SSLsetAnnotations(v_0, v_8);
              j_9 = t;
              t = (ATerm) ATmakeAppl(sym_cf_1, j_9);
              w_0 = t;
              t = SSLsetAnnotations(w_0, t_8);
            }
          }
        else
          {
            ATerm n_9 = NULL,x_0 = NULL;
            if(match_cons(t, sym_lit_1))
              {
                b_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_7);
            n_9 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, b_8);
            x_0 = t;
            t = SSLsetAnnotations(x_0, n_9);
          }
        m_7 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, j_7, m_7, l_7);
        b_1 = t;
        t = SSLsetAnnotations(b_1, i_7);
        n_7 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, n_7, f_17);
        d_1 = t;
        t = SSLsetAnnotations(d_1, f_7);
      }
    }
  else
    {
      ATerm s_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,o_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          h_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_17);
      s_9 = t;
      t = h_17;
      if(match_cons(t, sym_opt_1))
        {
          a_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_17);
      z_9 = t;
      t = a_10;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, a_10);
      n_1 = t;
      t = SSLsetAnnotations(n_1, z_9);
      b_10 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, b_10);
      o_1 = t;
      t = SSLsetAnnotations(o_1, s_9);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm m_16 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_16;
    }
  return(t);
}
ATerm implodeAsfix_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  ATerm s_22 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm p_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
              q_22 = t;
              if(match_cons(t, sym_appl_2))
                {
                  r_22 = ATgetArgument(t, 0);
                  p_22 = ATgetArgument(t, 1);
                  {
                    ATerm q_10 = NULL,w_10 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(q_22);
                    q_10 = t;
                    t = p_22;
                    t = filter_1_0(v_2, t);
                    w_10 = t;
                    t = (ATerm) ATmakeAppl(sym_appl_2, r_22, w_10);
                    x_2 = t;
                    t = SSLsetAnnotations(x_2, q_10);
                    {
                      ATerm t_16 = t;
                      int v_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = OptList_0_0(t);
                          t = s_22(t);
                          ;
                          LocalPopChoice(v_16);
                        }
                      else
                        {
                          t = t_16;
                          {
                            ATerm x_16 = t;
                            int y_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = ReplCons_1_0(s_22, t);
                                ;
                                LocalPopChoice(y_16);
                              }
                            else
                              {
                                t = x_16;
                                {
                                  ATerm z_16 = t;
                                  int a_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,m_11 = NULL;
                                      if(match_cons(t, sym_appl_2))
                                        {
                                          h_11 = ATgetArgument(t, 0);
                                          i_11 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = i_11;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          j_11 = ATgetFirst((ATermList) t);
                                          m_11 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = m_11;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = h_11;
                                      t = injection_0_0(t);
                                      t = j_11;
                                      t = s_22(t);
                                      ;
                                      LocalPopChoice(a_17);
                                    }
                                  else
                                    {
                                      t = z_16;
                                      {
                                        ATerm k_17 = t;
                                        int l_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = Tuple_0_0(t);
                                            t = s_22(t);
                                            ;
                                            LocalPopChoice(l_17);
                                          }
                                        else
                                          {
                                            t = k_17;
                                            t = FlatAlt_0_0(t);
                                            t = s_22(t);
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
                  ATerm a_12 = NULL,d_12 = NULL,y_2 = NULL;
                  if(match_cons(t, sym_amb_1))
                    {
                      r_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_22);
                  a_12 = t;
                  t = r_22;
                  t = map_1_0(s_22, t);
                  d_12 = t;
                  t = (ATerm) ATmakeAppl(sym_amb_1, d_12);
                  y_2 = t;
                  t = SSLsetAnnotations(y_2, a_12);
                }
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = p_16;
              t = SRTS_all(s_22, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      if(((w_18 != NULL) && (w_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_18 = ATgetArgument(t, 0);
      {
        ATerm m_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_18;
  t = s_22(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,j_24 = NULL,k_24 = NULL,n_24 = NULL;
  e_24 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_24;
  if(match_cons(t, sym_prod_3))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
      {
        ATerm p_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_24;
  {
    ATerm q_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm u_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_17);
        {
          ATerm k_12 = NULL;
          t = term_v_17;
          k_12 = t;
          t = SSL_mkterm(k_12, n_24);
        }
      }
    else
      {
        t = q_17;
        {
          ATerm q_12 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              k_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_24;
          if(match_cons(t, sym_seq_1))
            {
              ATerm w_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_v_17;
          q_12 = t;
          t = SSL_mkterm(q_12, n_24);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = topdown_1_0(q_79, t);
    return(t);
  }
  t = q_79(t);
  t = SRTS_all(w_2, t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,p_25 = NULL,u_25 = NULL,y_25 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      p_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
      t = p_25;
      if(match_cons(t, sym_Ins_1))
        {
          k_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_25 = ATgetFirst((ATermList) t);
          i_25 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(i_25), j_25), k_25);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              j_25 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, j_25), k_25);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, k_25);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          p_25 = ATgetArgument(t, 0);
          u_25 = ATgetArgument(t, 1);
          y_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_25), (ATerm) ATinsert(ATempty, u_25)), p_25);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm e_27 = NULL,g_27 = NULL,j_27 = NULL,m_27 = NULL,n_27 = NULL,p_27 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      j_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
      t = p_27;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_27;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = j_27;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  m_27 = ATgetArgument(t, 0);
                  n_27 = ATgetArgument(t, 1);
                  t = j_27;
                }
              else
                {
                  t = j_27;
                }
            }
        }
      else
        {
          t = j_27;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = p_27;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  m_27 = ATgetArgument(t, 0);
                  n_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, m_27, (ATerm) ATmakeAppl(sym_Conc_2, n_27, p_27));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          j_27 = ATgetArgument(t, 0);
          p_27 = ATgetArgument(t, 1);
          g_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_27;
      if(match_cons(t, sym_Conc_3))
        {
          m_27 = ATgetArgument(t, 0);
          n_27 = ATgetArgument(t, 1);
          e_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, m_27, n_27, (ATerm) ATmakeAppl(sym_Conc_3, e_27, p_27, g_27));
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm x_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_29 = NULL,y_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_29 = ATgetFirst((ATermList) t);
          y_29 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, s_29), y_29);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              s_29 = ATgetArgument(t, 0);
              y_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, s_29, (ATerm) ATmakeAppl(sym_Ins_1, y_29));
        }
      ;
      LocalPopChoice(z_17);
    }
  else
    {
      t = x_17;
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            ;
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            {
              ATerm k_31 = NULL,p_31 = NULL,t_31 = NULL,w_12 = NULL,b_13 = NULL,e_13 = NULL,f_13 = NULL,b_3 = NULL;
              k_31 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  p_31 = ATgetArgument(t, 0);
                  t_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_31);
              w_12 = t;
              t = p_31;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_13 = ATgetFirst((ATermList) t);
                  f_13 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, e_13), f_13);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      e_13 = ATgetArgument(t, 0);
                      f_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, e_13, (ATerm) ATmakeAppl(sym_Ins_1, f_13));
                }
              b_13 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, b_13, t_31);
              b_3 = t;
              t = SSLsetAnnotations(b_3, w_12);
            }
          }
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_1_0(z_2, t);
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,d_14 = NULL,i_14 = NULL,d_3 = NULL;
        i_32 = t;
        if(match_cons(t, sym_Conc_2))
          {
            j_32 = ATgetArgument(t, 0);
            k_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_32);
        d_14 = t;
        t = k_32;
        t = conc_to_cons_0_0(t);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, j_32, i_14);
        d_3 = t;
        t = SSLsetAnnotations(d_3, d_14);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_32 = NULL,m_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,e_3 = NULL;
              t = CTC2_0_0(t);
              r_32 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_32 = ATgetFirst((ATermList) t);
                  p_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_32);
              l_32 = t;
              t = m_32;
              t = conc_to_cons_0_0(t);
              q_32 = t;
              t = (ATerm) ATinsert(CheckATermList(p_32), q_32);
              e_3 = t;
              t = SSLsetAnnotations(e_3, l_32);
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = l_18;
              {
                ATerm t_32 = NULL;
                if(match_cons(t, sym_Ins_1))
                  {
                    t_32 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, t_32);
              }
            }
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
        }
    }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm d_34 = NULL,g_34 = NULL,i_34 = NULL,l_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      q_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
      {
        ATerm o_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_34 = ATgetFirst((ATermList) t);
      t_34 = (ATerm) ATgetNext((ATermList) t);
      t = t_34;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_34;
          if(match_cons(t, sym_opt_1))
            {
              x_34 = ATgetArgument(t, 0);
              t = x_34;
              if((r_34 != t))
                {
                  _fail(t);
                }
              t = term_p_18;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  x_34 = ATgetArgument(t, 0);
                  t = r_34;
                  if(match_cons(t, sym_cf_1))
                    {
                      s_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_34;
                  if(match_cons(t, sym_opt_1))
                    {
                      y_34 = ATgetArgument(t, 0);
                      t = y_34;
                      if((s_34 != t))
                        {
                          _fail(t);
                        }
                      t = term_p_18;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          y_34 = ATgetArgument(t, 0);
                          t = y_34;
                          if((s_34 != t))
                            {
                              _fail(t);
                            }
                          t = term_q_18;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              y_34 = ATgetArgument(t, 0);
                              {
                                ATerm r_18 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = y_34;
                          if((s_34 != t))
                            {
                              _fail(t);
                            }
                          t = term_q_18;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      x_34 = ATgetArgument(t, 0);
                      t = x_34;
                      if((r_34 != t))
                        {
                          _fail(t);
                        }
                      t = term_q_18;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          x_34 = ATgetArgument(t, 0);
                          {
                            ATerm s_18 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = x_34;
                      if((r_34 != t))
                        {
                          _fail(t);
                        }
                      t = term_q_18;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_18 = ATgetFirst((ATermList) t);
              d_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_34;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = w_34;
              if(match_cons(t, sym_iter_1))
                {
                  ATerm x_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_y_18;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_19 = ATgetFirst((ATermList) t);
                  g_34 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_34;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = w_34;
                  {
                    ATerm c_19 = t;
                    int d_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm e_19 = ATgetArgument(t, 0);
                            ATerm f_19 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_19);
                        t = term_y_18;
                      }
                    else
                      {
                        t = c_19;
                        if(match_cons(t, sym_cf_1))
                          {
                            x_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = x_34;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm g_19 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = term_y_18;
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm h_19 = ATgetFirst((ATermList) t);
                      i_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = i_34;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm j_19 = ATgetFirst((ATermList) t);
                      l_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = l_34;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_34;
                  if(match_cons(t, sym_cf_1))
                    {
                      x_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_34;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm l_19 = ATgetArgument(t, 0);
                      ATerm m_19 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_y_18;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_34;
      {
        ATerm n_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm r_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(q_19);
            t = term_s_19;
          }
        else
          {
            t = n_19;
            if(match_cons(t, sym_cf_1))
              {
                x_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_34;
            if(match_cons(t, sym_opt_1))
              {
                ATerm t_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_s_19;
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm a_19, ATerm z_18, ATerm t)
{
  ATerm q_35 = NULL,e_36 = NULL;
  t = a_19;
  {
    ATerm v_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_35 = NULL,b_36 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm z_19 = ATgetArgument(t, 0);
            ATerm a_20 = ATgetArgument(t, 1);
            u_35 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_35;
        {
          ATerm a_3 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((b_36 != NULL) && (b_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(a_3, t);
          t = not_null(b_36);
        }
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = v_19;
        t = Constr1_0_0(t);
      }
    if(((e_36 != NULL) && (e_36 != t)))
      _fail(t);
    else
      e_36 = t;
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
                            t = e_36;
                          }
                      }
                  }
              }
          }
      }
    if(((q_35 != NULL) && (q_35 != t)))
      _fail(t);
    else
      q_35 = t;
    t = SSL_mkterm(q_35, z_18);
  }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,i_37 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      {
        ATerm b_20 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_37;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_37;
  {
    ATerm c_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm f_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_20);
        t = term_h_20;
      }
    else
      {
        t = c_20;
        {
          ATerm i_20 = t;
          int j_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm k_20 = ATgetArgument(t, 0);
                  ATerm l_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(j_20);
              t = term_h_20;
            }
          else
            {
              t = i_20;
              if(match_cons(t, sym_cf_1))
                {
                  i_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_37;
              {
                ATerm m_20 = t;
                int o_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm p_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_20);
                    t = term_h_20;
                  }
                else
                  {
                    t = m_20;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm u_20 = ATgetArgument(t, 0);
                        ATerm y_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_h_20;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm z_38 = NULL,c_39 = NULL,d_39 = NULL;
  d_39 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_38 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_14 = NULL,v_14 = NULL,y_14 = NULL,z_14 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(d_39);
            s_14 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, z_38, c_39);
            i_3 = t;
            t = SSLsetAnnotations(i_3, s_14);
            v_14 = t;
            if(match_cons(t, sym_appl_2))
              {
                y_14 = ATgetArgument(t, 0);
                z_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_14;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  ;
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  t = v_14;
                  t = w_7(y_14, z_14, t);
                }
            }
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = d_39;
          }
      }
    }
  else
    {
      t = d_39;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(f_3, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
      ATerm b_44 (ATerm t)
      {
        ATerm a_43 = NULL,c_43 = NULL,d_43 = NULL,h_43 = NULL;
        if(match_cons(t, sym__2))
          {
            a_43 = ATgetArgument(t, 0);
            h_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_43;
        if(match_cons(t, sym_alt_2))
          {
            c_43 = ATgetArgument(t, 0);
            d_43 = ATgetArgument(t, 1);
            {
              ATerm j_21 = t;
              int k_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_43;
                  if(((y_39 != NULL) && (y_39 != t)))
                    _fail(t);
                  else
                    y_39 = t;
                  t = (ATerm) ATmakeAppl(sym_alt_2, h_43, not_null(a_40));
                  ;
                  LocalPopChoice(k_21);
                }
              else
                {
                  t = j_21;
                  {
                    ATerm p_21 = t;
                    int q_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_43;
                        if(((y_39 != NULL) && (y_39 != t)))
                          _fail(t);
                        else
                          y_39 = t;
                        t = d_43;
                        if(((z_39 != NULL) && (z_39 != t)))
                          _fail(t);
                        else
                          z_39 = t;
                        t = (ATerm) ATmakeAppl(sym_alt_2, h_43, not_null(a_40));
                        ;
                        LocalPopChoice(q_21);
                      }
                    else
                      {
                        t = p_21;
                        {
                          ATerm t_43 = NULL,u_43 = NULL;
                          t = term_x_10;
                          u_43 = t;
                          t = (ATerm) ATmakeAppl(sym__2, h_43, term_x_10);
                          t = n_8(h_43, u_43, t);
                          t_43 = t;
                          t = (ATerm) ATmakeAppl(sym__2, d_43, t_43);
                          t = b_44(t);
                        }
                      }
                  }
                }
            }
          }
        else
          {
            t = a_43;
            if(((y_39 != NULL) && (y_39 != t)))
              _fail(t);
            else
              y_39 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, h_43, not_null(a_40));
          }
        return(t);
      }
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,l_40 = NULL,n_40 = NULL,o_40 = NULL,q_40 = NULL,r_40 = NULL,u_40 = NULL,v_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,c_6 = NULL,g_4 = NULL,d_4 = NULL,l_3 = NULL,n_41 = NULL;
          c_41 = t;
          if(match_cons(t, sym_appl_2))
            {
              e_40 = ATgetArgument(t, 0);
              f_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_41);
          b_40 = t;
          t = e_40;
          if(match_cons(t, sym_prod_3))
            {
              h_40 = ATgetArgument(t, 0);
              i_40 = ATgetArgument(t, 1);
              l_40 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_40);
          g_40 = t;
          t = h_40;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_40 = ATgetFirst((ATermList) t);
              z_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_40);
          u_40 = t;
          t = v_40;
          if(match_cons(t, sym_cf_1))
            {
              n_41 = ATgetArgument(t, 0);
              {
                ATerm t_21 = t;
                int u_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_15 = NULL,k_3 = NULL;
                    t = SSLgetAnnotations(v_40);
                    v_15 = t;
                    t = n_41;
                    if(((y_39 != NULL) && (y_39 != t)))
                      _fail(t);
                    else
                      y_39 = t;
                    t = (ATerm) ATmakeAppl(sym_cf_1, n_41);
                    k_3 = t;
                    t = SSLsetAnnotations(k_3, v_15);
                    ;
                    LocalPopChoice(u_21);
                  }
                else
                  {
                    t = t_21;
                    t = v_40;
                    if(((y_39 != NULL) && (y_39 != t)))
                      _fail(t);
                    else
                      y_39 = t;
                    t = v_40;
                  }
              }
            }
          else
            {
              t = v_40;
              if(((y_39 != NULL) && (y_39 != t)))
                _fail(t);
              else
                y_39 = t;
              t = v_40;
            }
          a_41 = t;
          t = z_40;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_40), a_41);
          l_3 = t;
          t = SSLsetAnnotations(l_3, u_40);
          b_41 = t;
          t = i_40;
          if(match_cons(t, sym_cf_1))
            {
              q_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_40);
          o_40 = t;
          t = q_40;
          if(match_cons(t, sym_alt_2))
            {
              if(((w_39 != NULL) && (w_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_39 = ATgetArgument(t, 0);
              if(((x_39 != NULL) && (x_39 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                x_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_cf_1, q_40);
          d_4 = t;
          t = SSLsetAnnotations(d_4, o_40);
          r_40 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, b_41, r_40, l_40);
          g_4 = t;
          t = SSLsetAnnotations(g_4, g_40);
          n_40 = t;
          t = f_40;
          if(((a_40 != NULL) && (a_40 != t)))
            _fail(t);
          else
            a_40 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, n_40, f_40);
          c_6 = t;
          t = SSLsetAnnotations(c_6, b_40);
          ;
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          {
            ATerm p_41 = NULL,u_41 = NULL,v_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,x_42 = NULL,y_42 = NULL,o_6 = NULL,i_6 = NULL,h_6 = NULL,g_6 = NULL;
            y_42 = t;
            if(match_cons(t, sym_appl_2))
              {
                u_41 = ATgetArgument(t, 0);
                v_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_42);
            p_41 = t;
            t = u_41;
            if(match_cons(t, sym_prod_3))
              {
                y_41 = ATgetArgument(t, 0);
                z_41 = ATgetArgument(t, 1);
                a_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_41);
            x_41 = t;
            t = y_41;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_42 = ATgetFirst((ATermList) t);
                q_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_41);
            o_42 = t;
            t = p_42;
            if(((y_39 != NULL) && (y_39 != t)))
              _fail(t);
            else
              y_39 = t;
            t = q_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_42), p_42);
            g_6 = t;
            t = SSLsetAnnotations(g_6, o_42);
            x_42 = t;
            t = z_41;
            if(match_cons(t, sym_lex_1))
              {
                f_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_41);
            e_42 = t;
            t = f_42;
            if(match_cons(t, sym_alt_2))
              {
                if(((w_39 != NULL) && (w_39 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_39 = ATgetArgument(t, 0);
                if(((x_39 != NULL) && (x_39 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_lex_1, f_42);
            h_6 = t;
            t = SSLsetAnnotations(h_6, e_42);
            n_42 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, x_42, n_42, a_42);
            i_6 = t;
            t = SSLsetAnnotations(i_6, x_41);
            d_42 = t;
            t = v_41;
            if(((a_40 != NULL) && (a_40 != t)))
              _fail(t);
            else
              a_40 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, d_42, v_41);
            o_6 = t;
            t = SSLsetAnnotations(o_6, p_41);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, w_39, x_39), term_x_10);
      t = b_44(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm z_43 = NULL;
        z_43 = t;
        if(!(match_cons(t, sym_FlatAlt_0)))
          _fail(t);
        t = z_43;
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm c_44 (ATerm t)
  {
    ATerm v_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_80(t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = v_21;
        t = SRTS_one(c_44, t);
      }
    return(t);
  }
  t = c_44(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
  e_46 = t;
  if(match_cons(t, sym_sort_1))
    {
      f_46 = ATgetArgument(t, 0);
      {
        ATerm h_16 = NULL,t_7 = NULL;
        t = SSLgetAnnotations(e_46);
        h_16 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, f_46);
        t_7 = t;
        t = SSLsetAnnotations(t_7, h_16);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          f_46 = ATgetArgument(t, 0);
          {
            ATerm u_16 = NULL,w_16 = NULL,u_7 = NULL;
            t = SSLgetAnnotations(e_46);
            u_16 = t;
            t = f_46;
            t = injective_alt_0_0(t);
            w_16 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, w_16);
            u_7 = t;
            t = SSLsetAnnotations(u_7, u_16);
          }
        }
      else
        {
          ATerm o_17 = NULL,r_17 = NULL,s_17 = NULL,v_7 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              f_46 = ATgetArgument(t, 0);
              g_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_46);
          o_17 = t;
          t = f_46;
          t = injective_alt_0_0(t);
          r_17 = t;
          t = g_46;
          t = injective_alt_0_0(t);
          s_17 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, r_17, s_17);
          v_7 = t;
          t = SSLsetAnnotations(v_7, o_17);
        }
    }
  return(t);
}
ATerm m_62 (ATerm d_52, ATerm h_52, ATerm j_52, ATerm k_52, ATerm t)
{
  ATerm l_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_8 = NULL,d_8 = NULL,c_8 = NULL;
  t = SSLgetAnnotations(k_52);
  l_52 = t;
  t = d_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_52 = ATgetFirst((ATermList) t);
      s_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_52);
  q_52 = t;
  t = r_52;
  if(match_cons(t, sym_varsym_1))
    {
      v_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_52);
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, v_52);
  c_8 = t;
  t = SSLsetAnnotations(c_8, u_52);
  w_52 = t;
  t = s_52;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_52), w_52);
  d_8 = t;
  t = SSLsetAnnotations(d_8, q_52);
  t_52 = t;
  t = j_52;
  {
    ATerm z_21 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(g_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_21;
      }
    p_52 = t;
    t = (ATerm) ATmakeAppl(sym_prod_3, t_52, h_52, p_52);
    x_8 = t;
    t = SSLsetAnnotations(x_8, l_52);
  }
  return(t);
}
ATerm n_62 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm e_53, ATerm t)
{
  ATerm f_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,d_9 = NULL,b_9 = NULL,x_54 = NULL;
  t = SSLgetAnnotations(e_53);
  f_53 = t;
  t = b_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_53 = ATgetFirst((ATermList) t);
      r_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_53);
  l_53 = t;
  t = m_53;
  if(match_cons(t, sym_sort_1))
    {
      x_54 = ATgetArgument(t, 0);
      {
        ATerm y_17 = NULL,y_8 = NULL;
        t = SSLgetAnnotations(m_53);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, x_54);
        y_8 = t;
        t = SSLsetAnnotations(y_8, y_17);
      }
    }
  else
    {
      ATerm c_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,a_9 = NULL,z_8 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          x_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_53);
      c_18 = t;
      t = x_54;
      if(match_cons(t, sym_sort_1))
        {
          h_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_54);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, h_18);
      z_8 = t;
      t = SSLsetAnnotations(z_8, g_18);
      i_18 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, i_18);
      a_9 = t;
      t = SSLsetAnnotations(a_9, c_18);
    }
  s_53 = t;
  t = r_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_53), s_53);
  b_9 = t;
  t = SSLsetAnnotations(b_9, l_53);
  t_53 = t;
  t = c_53;
  t = injective_alt_0_0(t);
  j_53 = t;
  t = d_53;
  {
    ATerm f_22 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(h_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_22;
      }
    k_53 = t;
    t = (ATerm) ATmakeAppl(sym_prod_3, t_53, j_53, k_53);
    d_9 = t;
    t = SSLsetAnnotations(d_9, f_53);
  }
  return(t);
}
ATerm o_62 (ATerm e_55, ATerm f_55, ATerm h_55, ATerm m_55, ATerm t)
{
  ATerm o_55 = NULL,s_55 = NULL,x_55 = NULL,z_55 = NULL,d_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,f_10 = NULL,f_9 = NULL;
  t = SSLgetAnnotations(m_55);
  o_55 = t;
  t = e_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_56 = ATgetFirst((ATermList) t);
      g_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_55);
  z_55 = t;
  t = d_56;
  {
    ATerm g_22 = t;
    if((PushChoice() == 0))
      {
        ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,e_9 = NULL;
        m_56 = t;
        if(match_cons(t, sym_lit_1))
          {
            l_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_56);
        k_56 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, l_56);
        e_9 = t;
        t = SSLsetAnnotations(e_9, k_56);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_22;
      }
    h_56 = t;
    t = g_56;
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(g_56), h_56);
    f_9 = t;
    t = SSLsetAnnotations(f_9, z_55);
    i_56 = t;
    t = f_55;
    {
      ATerm s_62 (ATerm t)
      {
        ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
        s_60 = t;
        if(match_cons(t, sym_sort_1))
          {
            t_60 = ATgetArgument(t, 0);
            {
              ATerm m_18 = NULL,g_9 = NULL;
              t = SSLgetAnnotations(s_60);
              m_18 = t;
              t = (ATerm) ATmakeAppl(sym_sort_1, t_60);
              g_9 = t;
              t = SSLsetAnnotations(g_9, m_18);
            }
          }
        else
          {
            if(match_cons(t, sym_cf_1))
              {
                t_60 = ATgetArgument(t, 0);
                {
                  ATerm t_18 = NULL,v_18 = NULL,h_9 = NULL;
                  t = SSLgetAnnotations(s_60);
                  t_18 = t;
                  t = t_60;
                  t = s_62(t);
                  v_18 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, v_18);
                  h_9 = t;
                  t = SSLsetAnnotations(h_9, t_18);
                }
              }
            else
              {
                if(match_cons(t, sym_lex_1))
                  {
                    t_60 = ATgetArgument(t, 0);
                    {
                      ATerm i_19 = NULL,k_19 = NULL,l_9 = NULL;
                      t = SSLgetAnnotations(s_60);
                      i_19 = t;
                      t = t_60;
                      t = s_62(t);
                      k_19 = t;
                      t = (ATerm) ATmakeAppl(sym_lex_1, k_19);
                      l_9 = t;
                      t = SSLsetAnnotations(l_9, i_19);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        t_60 = ATgetArgument(t, 0);
                        {
                          ATerm u_19 = NULL,x_19 = NULL,t_9 = NULL;
                          t = SSLgetAnnotations(s_60);
                          u_19 = t;
                          t = t_60;
                          t = s_62(t);
                          x_19 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_1, x_19);
                          t_9 = t;
                          t = SSLsetAnnotations(t_9, u_19);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_iter_star_1))
                          {
                            t_60 = ATgetArgument(t, 0);
                            {
                              ATerm d_20 = NULL,g_20 = NULL,u_9 = NULL;
                              t = SSLgetAnnotations(s_60);
                              d_20 = t;
                              t = t_60;
                              t = s_62(t);
                              g_20 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_1, g_20);
                              u_9 = t;
                              t = SSLsetAnnotations(u_9, d_20);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_iter_sep_2))
                              {
                                t_60 = ATgetArgument(t, 0);
                                u_60 = ATgetArgument(t, 1);
                                {
                                  ATerm n_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL,x_20 = NULL,w_9 = NULL,v_9 = NULL;
                                  t = SSLgetAnnotations(s_60);
                                  n_20 = t;
                                  t = t_60;
                                  t = s_62(t);
                                  q_20 = t;
                                  t = u_60;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      t_20 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(u_60);
                                  s_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_lit_1, t_20);
                                  v_9 = t;
                                  t = SSLsetAnnotations(v_9, s_20);
                                  x_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_20, x_20);
                                  w_9 = t;
                                  t = SSLsetAnnotations(w_9, n_20);
                                }
                              }
                            else
                              {
                                ATerm i_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,c_10 = NULL,x_9 = NULL;
                                if(match_cons(t, sym_iter_star_sep_2))
                                  {
                                    t_60 = ATgetArgument(t, 0);
                                    u_60 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(s_60);
                                i_21 = t;
                                t = t_60;
                                t = s_62(t);
                                l_21 = t;
                                t = u_60;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    n_21 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(u_60);
                                m_21 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, n_21);
                                x_9 = t;
                                t = SSLsetAnnotations(x_9, m_21);
                                o_21 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, l_21, o_21);
                                c_10 = t;
                                t = SSLsetAnnotations(c_10, i_21);
                              }
                          }
                      }
                  }
              }
          }
        return(t);
      }
      t = s_62(t);
      if(((s_55 != NULL) && (s_55 != t)))
        _fail(t);
      else
        s_55 = t;
      t = h_55;
      {
        ATerm h_22 = t;
        if((PushChoice() == 0))
          {
            t = oncetd_1_0(j_3, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_22;
          }
        if(((x_55 != NULL) && (x_55 != t)))
          _fail(t);
        else
          x_55 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, i_56, s_55, x_55);
        if(((f_10 != NULL) && (f_10 != t)))
          _fail(t);
        else
          f_10 = t;
        t = SSLsetAnnotations(f_10, o_55);
      }
    }
  }
  return(t);
}
ATerm p_62 (ATerm e_61, ATerm k_61, ATerm l_61, ATerm m_61, ATerm t)
{
  ATerm n_61 = NULL,t_61 = NULL,j_10 = NULL;
  t = SSLgetAnnotations(m_61);
  n_61 = t;
  t = l_61;
  t = oncetd_1_0(v_3, t);
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, e_61, k_61, t_61);
  j_10 = t;
  t = SSLsetAnnotations(j_10, n_61);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,w_8 = NULL;
  a_53 = t;
  if(match_cons(t, sym_cons_1))
    {
      z_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_53);
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, z_52);
  w_8 = t;
  t = SSLsetAnnotations(w_8, y_52);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,c_9 = NULL;
  a_55 = t;
  if(match_cons(t, sym_cons_1))
    {
      z_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_55);
  y_54 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, z_54);
  c_9 = t;
  t = SSLsetAnnotations(c_9, y_54);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm v_60 = NULL,c_61 = NULL,d_61 = NULL,e_10 = NULL;
  d_61 = t;
  if(match_cons(t, sym_cons_1))
    {
      c_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_61);
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, c_61);
  e_10 = t;
  t = SSLsetAnnotations(e_10, v_60);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm w_61 = NULL;
  w_61 = t;
  if(match_string(t, "bracket"))
    {
      t = w_61;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = w_61;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
  e_62 = t;
  if(match_cons(t, sym_prod_3))
    {
      f_62 = ATgetArgument(t, 0);
      g_62 = ATgetArgument(t, 1);
      i_62 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_62;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = g_62;
      if(match_cons(t, sym_cf_1))
        {
          h_62 = ATgetArgument(t, 0);
          t = h_62;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              d_62 = ATgetArgument(t, 0);
              y_61 = ATgetArgument(t, 1);
              t = f_62;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_61 = ATgetFirst((ATermList) t);
                  c_62 = (ATerm) ATgetNext((ATermList) t);
                  t = c_62;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = z_61;
                      if(match_cons(t, sym_cf_1))
                        {
                          a_62 = ATgetArgument(t, 0);
                          t = a_62;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              b_62 = ATgetArgument(t, 0);
                              x_61 = ATgetArgument(t, 1);
                              {
                                ATerm j_22 = t;
                                int k_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_62(f_62, g_62, i_62, e_62, t);
                                    ;
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
                                          t = n_62(f_62, g_62, i_62, e_62, t);
                                          ;
                                          LocalPopChoice(m_22);
                                        }
                                      else
                                        {
                                          t = l_22;
                                          {
                                            ATerm w_22 = t;
                                            int x_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_62(f_62, g_62, i_62, e_62, t);
                                                ;
                                                LocalPopChoice(x_22);
                                              }
                                            else
                                              {
                                                t = w_22;
                                                {
                                                  ATerm y_22 = t;
                                                  int z_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = d_62;
                                                      if((b_62 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = y_61;
                                                      if((x_61 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = e_62;
                                                      ;
                                                      LocalPopChoice(z_22);
                                                    }
                                                  else
                                                    {
                                                      t = y_22;
                                                      t = p_62(f_62, g_62, i_62, e_62, t);
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
                              ATerm a_23 = t;
                              int b_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = m_62(f_62, g_62, i_62, e_62, t);
                                  ;
                                  LocalPopChoice(b_23);
                                }
                              else
                                {
                                  t = a_23;
                                  {
                                    ATerm c_23 = t;
                                    int d_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_62(f_62, g_62, i_62, e_62, t);
                                        ;
                                        LocalPopChoice(d_23);
                                      }
                                    else
                                      {
                                        t = c_23;
                                        {
                                          ATerm e_23 = t;
                                          int g_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_62(f_62, g_62, i_62, e_62, t);
                                              ;
                                              LocalPopChoice(g_23);
                                            }
                                          else
                                            {
                                              t = e_23;
                                              t = p_62(f_62, g_62, i_62, e_62, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm h_23 = t;
                          int i_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = m_62(f_62, g_62, i_62, e_62, t);
                              ;
                              LocalPopChoice(i_23);
                            }
                          else
                            {
                              t = h_23;
                              {
                                ATerm j_23 = t;
                                int l_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_62(f_62, g_62, i_62, e_62, t);
                                    ;
                                    LocalPopChoice(l_23);
                                  }
                                else
                                  {
                                    t = j_23;
                                    {
                                      ATerm m_23 = t;
                                      int n_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = o_62(f_62, g_62, i_62, e_62, t);
                                          ;
                                          LocalPopChoice(n_23);
                                        }
                                      else
                                        {
                                          t = m_23;
                                          t = p_62(f_62, g_62, i_62, e_62, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = z_61;
                      {
                        ATerm o_23 = t;
                        int p_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = m_62(f_62, g_62, i_62, e_62, t);
                            ;
                            LocalPopChoice(p_23);
                          }
                        else
                          {
                            t = o_23;
                            {
                              ATerm q_23 = t;
                              int r_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = n_62(f_62, g_62, i_62, e_62, t);
                                  ;
                                  LocalPopChoice(r_23);
                                }
                              else
                                {
                                  t = q_23;
                                  {
                                    ATerm s_23 = t;
                                    int t_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = o_62(f_62, g_62, i_62, e_62, t);
                                        ;
                                        LocalPopChoice(t_23);
                                      }
                                    else
                                      {
                                        t = s_23;
                                        t = p_62(f_62, g_62, i_62, e_62, t);
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
                  ATerm u_23 = t;
                  int v_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_62(f_62, g_62, i_62, e_62, t);
                      ;
                      LocalPopChoice(v_23);
                    }
                  else
                    {
                      t = u_23;
                      {
                        ATerm x_23 = t;
                        int y_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_62(f_62, g_62, i_62, e_62, t);
                            ;
                            LocalPopChoice(y_23);
                          }
                        else
                          {
                            t = x_23;
                            {
                              ATerm z_23 = t;
                              int a_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = o_62(f_62, g_62, i_62, e_62, t);
                                  ;
                                  LocalPopChoice(a_24);
                                }
                              else
                                {
                                  t = z_23;
                                  t = p_62(f_62, g_62, i_62, e_62, t);
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
                  d_62 = ATgetArgument(t, 0);
                  t = f_62;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_61 = ATgetFirst((ATermList) t);
                      c_62 = (ATerm) ATgetNext((ATermList) t);
                      t = c_62;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = z_61;
                          if(match_cons(t, sym_cf_1))
                            {
                              a_62 = ATgetArgument(t, 0);
                              t = a_62;
                              if(match_cons(t, sym_iter_1))
                                {
                                  b_62 = ATgetArgument(t, 0);
                                  {
                                    ATerm b_24 = t;
                                    int c_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_62(f_62, g_62, i_62, e_62, t);
                                        ;
                                        LocalPopChoice(c_24);
                                      }
                                    else
                                      {
                                        t = b_24;
                                        {
                                          ATerm d_24 = t;
                                          int g_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_62(f_62, g_62, i_62, e_62, t);
                                              ;
                                              LocalPopChoice(g_24);
                                            }
                                          else
                                            {
                                              t = d_24;
                                              {
                                                ATerm h_24 = t;
                                                int i_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_62(f_62, g_62, i_62, e_62, t);
                                                    ;
                                                    LocalPopChoice(i_24);
                                                  }
                                                else
                                                  {
                                                    t = h_24;
                                                    {
                                                      ATerm l_24 = t;
                                                      int m_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_62;
                                                          if((b_62 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = e_62;
                                                          ;
                                                          LocalPopChoice(m_24);
                                                        }
                                                      else
                                                        {
                                                          t = l_24;
                                                          t = p_62(f_62, g_62, i_62, e_62, t);
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
                                  ATerm p_24 = t;
                                  int q_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = m_62(f_62, g_62, i_62, e_62, t);
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
                                            t = n_62(f_62, g_62, i_62, e_62, t);
                                            ;
                                            LocalPopChoice(s_24);
                                          }
                                        else
                                          {
                                            t = r_24;
                                            {
                                              ATerm t_24 = t;
                                              int u_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = o_62(f_62, g_62, i_62, e_62, t);
                                                  ;
                                                  LocalPopChoice(u_24);
                                                }
                                              else
                                                {
                                                  t = t_24;
                                                  t = p_62(f_62, g_62, i_62, e_62, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm v_24 = t;
                              int w_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = m_62(f_62, g_62, i_62, e_62, t);
                                  ;
                                  LocalPopChoice(w_24);
                                }
                              else
                                {
                                  t = v_24;
                                  {
                                    ATerm x_24 = t;
                                    int y_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_62(f_62, g_62, i_62, e_62, t);
                                        ;
                                        LocalPopChoice(y_24);
                                      }
                                    else
                                      {
                                        t = x_24;
                                        {
                                          ATerm z_24 = t;
                                          int b_25 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_62(f_62, g_62, i_62, e_62, t);
                                              ;
                                              LocalPopChoice(b_25);
                                            }
                                          else
                                            {
                                              t = z_24;
                                              t = p_62(f_62, g_62, i_62, e_62, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = z_61;
                          {
                            ATerm c_25 = t;
                            int n_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_62(f_62, g_62, i_62, e_62, t);
                                ;
                                LocalPopChoice(n_25);
                              }
                            else
                              {
                                t = c_25;
                                {
                                  ATerm t_25 = t;
                                  int v_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = n_62(f_62, g_62, i_62, e_62, t);
                                      ;
                                      LocalPopChoice(v_25);
                                    }
                                  else
                                    {
                                      t = t_25;
                                      {
                                        ATerm w_25 = t;
                                        int x_25 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_62(f_62, g_62, i_62, e_62, t);
                                            ;
                                            LocalPopChoice(x_25);
                                          }
                                        else
                                          {
                                            t = w_25;
                                            t = p_62(f_62, g_62, i_62, e_62, t);
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
                      ATerm z_25 = t;
                      int a_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = m_62(f_62, g_62, i_62, e_62, t);
                          ;
                          LocalPopChoice(a_26);
                        }
                      else
                        {
                          t = z_25;
                          {
                            ATerm b_26 = t;
                            int c_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_62(f_62, g_62, i_62, e_62, t);
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
                                      t = o_62(f_62, g_62, i_62, e_62, t);
                                      ;
                                      LocalPopChoice(e_26);
                                    }
                                  else
                                    {
                                      t = d_26;
                                      t = p_62(f_62, g_62, i_62, e_62, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = f_62;
                  {
                    ATerm g_26 = t;
                    int h_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_62(f_62, g_62, i_62, e_62, t);
                        ;
                        LocalPopChoice(h_26);
                      }
                    else
                      {
                        t = g_26;
                        {
                          ATerm l_26 = t;
                          int m_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = n_62(f_62, g_62, i_62, e_62, t);
                              ;
                              LocalPopChoice(m_26);
                            }
                          else
                            {
                              t = l_26;
                              {
                                ATerm n_26 = t;
                                int o_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = o_62(f_62, g_62, i_62, e_62, t);
                                    ;
                                    LocalPopChoice(o_26);
                                  }
                                else
                                  {
                                    t = n_26;
                                    t = p_62(f_62, g_62, i_62, e_62, t);
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
              h_62 = ATgetArgument(t, 0);
              t = h_62;
              if(match_string(t, "<START>"))
                {
                  t = f_62;
                  {
                    ATerm p_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_62(f_62, g_62, i_62, e_62, t);
                        ;
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = p_26;
                        {
                          ATerm r_26 = t;
                          int s_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = n_62(f_62, g_62, i_62, e_62, t);
                              ;
                              LocalPopChoice(s_26);
                            }
                          else
                            {
                              t = r_26;
                              {
                                ATerm t_26 = t;
                                int v_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = o_62(f_62, g_62, i_62, e_62, t);
                                    ;
                                    LocalPopChoice(v_26);
                                  }
                                else
                                  {
                                    t = t_26;
                                    {
                                      ATerm w_26 = t;
                                      int x_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = p_62(f_62, g_62, i_62, e_62, t);
                                          ;
                                          LocalPopChoice(x_26);
                                        }
                                      else
                                        {
                                          t = w_26;
                                          t = e_62;
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
                  t = f_62;
                  {
                    ATerm y_26 = t;
                    int z_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_62(f_62, g_62, i_62, e_62, t);
                        ;
                        LocalPopChoice(z_26);
                      }
                    else
                      {
                        t = y_26;
                        {
                          ATerm a_27 = t;
                          int b_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = n_62(f_62, g_62, i_62, e_62, t);
                              ;
                              LocalPopChoice(b_27);
                            }
                          else
                            {
                              t = a_27;
                              {
                                ATerm c_27 = t;
                                int d_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = o_62(f_62, g_62, i_62, e_62, t);
                                    ;
                                    LocalPopChoice(d_27);
                                  }
                                else
                                  {
                                    t = c_27;
                                    t = p_62(f_62, g_62, i_62, e_62, t);
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
              t = f_62;
              {
                ATerm f_27 = t;
                int h_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_62(f_62, g_62, i_62, e_62, t);
                    ;
                    LocalPopChoice(h_27);
                  }
                else
                  {
                    t = f_27;
                    {
                      ATerm i_27 = t;
                      int k_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_62(f_62, g_62, i_62, e_62, t);
                          ;
                          LocalPopChoice(k_27);
                        }
                      else
                        {
                          t = i_27;
                          {
                            ATerm o_27 = t;
                            int q_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = o_62(f_62, g_62, i_62, e_62, t);
                                ;
                                LocalPopChoice(q_27);
                              }
                            else
                              {
                                t = o_27;
                                t = p_62(f_62, g_62, i_62, e_62, t);
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
      t = f_62;
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_62(f_62, g_62, i_62, e_62, t);
            ;
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            {
              ATerm u_27 = t;
              int v_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_62(f_62, g_62, i_62, e_62, t);
                  ;
                  LocalPopChoice(v_27);
                }
              else
                {
                  t = u_27;
                  {
                    ATerm w_27 = t;
                    int x_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_62(f_62, g_62, i_62, e_62, t);
                        ;
                        LocalPopChoice(x_27);
                      }
                    else
                      {
                        t = w_27;
                        t = p_62(f_62, g_62, i_62, e_62, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm r_79 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = bottomup_1_0(r_79, t);
    return(t);
  }
  t = SRTS_all(w_3, t);
  t = r_79(t);
  return(t);
}
ATerm filter_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_63;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_63 = ATgetFirst((ATermList) t);
          n_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_21 = NULL,a_22 = NULL,d_22 = NULL,e_16 = NULL;
            t = SSLgetAnnotations(l_63);
            w_21 = t;
            t = m_63;
            t = o_92(t);
            a_22 = t;
            t = n_63;
            t = filter_1_0(o_92, t);
            d_22 = t;
            t = (ATerm) ATinsert(CheckATermList(d_22), a_22);
            e_16 = t;
            t = SSLsetAnnotations(e_16, w_21);
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            t = n_63;
            t = filter_1_0(o_92, t);
          }
      }
    }
  return(t);
}
ATerm q_68 (ATerm m_65, ATerm t)
{
  ATerm s_68 (ATerm t)
  {
    ATerm n_65 = NULL,o_65 = NULL,q_65 = NULL,r_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
    n_65 = t;
    if(match_cons(t, sym_appl_2))
      {
        o_65 = ATgetArgument(t, 0);
        v_65 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_65;
    if(match_cons(t, sym_prod_3))
      {
        ATerm a_28 = ATgetArgument(t, 0);
        q_65 = ATgetArgument(t, 1);
        {
          ATerm b_28 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = q_65;
    if(match_cons(t, sym_cf_1))
      {
        r_65 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = r_65;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm c_28 = ATgetArgument(t, 0);
        ATerm d_28 = ATgetArgument(t, 1);
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
            y_65 = ATgetFirst((ATermList) t);
            z_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_65;
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
            ATerm l_66 = NULL,m_66 = NULL;
            t = w_65;
            t = s_68(t);
            l_66 = t;
            t = a_66;
            t = s_68(t);
            m_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_66), (ATerm) ATinsert(ATempty, y_65)), l_66);
            t = concat_0_0(t);
          }
        else
          {
            ATerm t_66 = NULL,u_66 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_66 = ATgetFirst((ATermList) t);
                d_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_66;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_66 = ATgetFirst((ATermList) t);
                f_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_66;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_65;
            t = s_68(t);
            t_66 = t;
            t = e_66;
            t = s_68(t);
            u_66 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_66), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_66), a_66), y_65)), t_66);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = m_65;
  t = s_68(t);
  return(t);
}
ATerm r_68 (ATerm v_66, ATerm t)
{
  ATerm t_68 (ATerm t)
  {
    ATerm w_66 = NULL,x_66 = NULL,z_66 = NULL,a_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
    w_66 = t;
    if(match_cons(t, sym_appl_2))
      {
        x_66 = ATgetArgument(t, 0);
        d_67 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_66;
    if(match_cons(t, sym_prod_3))
      {
        ATerm e_28 = ATgetArgument(t, 0);
        z_66 = ATgetArgument(t, 1);
        {
          ATerm f_28 = ATgetArgument(t, 2);
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
    if(match_cons(t, sym_iter_1))
      {
        ATerm g_28 = ATgetArgument(t, 0);
      }
    else
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
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, e_67);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_67 = ATgetFirst((ATermList) t);
            h_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_67;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm o_67 = NULL,p_67 = NULL;
            t = e_67;
            t = t_68(t);
            o_67 = t;
            t = g_67;
            t = t_68(t);
            p_67 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, p_67), o_67);
            t = concat_0_0(t);
          }
        else
          {
            ATerm u_67 = NULL,v_67 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_67 = ATgetFirst((ATermList) t);
                j_67 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_67;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_67;
            t = t_68(t);
            u_67 = t;
            t = i_67;
            t = t_68(t);
            v_67 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_67), (ATerm) ATinsert(ATempty, g_67)), u_67);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = v_66;
  t = t_68(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
  l_68 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_67 = ATgetArgument(t, 0);
      i_68 = ATgetArgument(t, 1);
      t = y_67;
      if(match_cons(t, sym_prod_3))
        {
          z_67 = ATgetArgument(t, 0);
          e_68 = ATgetArgument(t, 1);
          {
            ATerm h_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_68;
      if(match_cons(t, sym_cf_1))
        {
          f_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_68;
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm k_28 = ATgetArgument(t, 0);
                ATerm l_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(j_28);
            t = i_68;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_68 = ATgetFirst((ATermList) t);
                k_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_68;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = z_67;
                {
                  ATerm m_28 = t;
                  int n_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_68(l_68, t);
                      ;
                      LocalPopChoice(n_28);
                    }
                  else
                    {
                      t = m_28;
                      t = (ATerm) ATinsert(ATempty, j_68);
                    }
                }
              }
            else
              {
                t = z_67;
                t = q_68(l_68, t);
              }
          }
        else
          {
            t = i_28;
            {
              ATerm q_28 = t;
              int r_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      ATerm s_28 = ATgetArgument(t, 0);
                      ATerm u_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_28);
                  t = z_67;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = i_68;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          a_68 = ATgetFirst((ATermList) t);
                          d_68 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = a_68;
                      if(match_cons(t, sym_cf_1))
                        {
                          b_68 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = b_68;
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm v_28 = ATgetArgument(t, 0);
                          ATerm w_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_68;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = i_68;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          j_68 = ATgetFirst((ATermList) t);
                          k_68 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = k_68;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = j_68;
                      t = FlatList_0_0(t);
                    }
                }
              else
                {
                  t = q_28;
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm z_28 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_28);
                        t = i_68;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            j_68 = ATgetFirst((ATermList) t);
                            k_68 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = k_68;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = z_67;
                            {
                              ATerm a_29 = t;
                              int b_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = r_68(l_68, t);
                                  ;
                                  LocalPopChoice(b_29);
                                }
                              else
                                {
                                  t = a_29;
                                  t = (ATerm) ATinsert(ATempty, j_68);
                                }
                            }
                          }
                        else
                          {
                            t = z_67;
                            t = r_68(l_68, t);
                          }
                      }
                    else
                      {
                        t = x_28;
                        if(match_cons(t, sym_iter_star_1))
                          {
                            ATerm g_29 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = z_67;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = i_68;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                a_68 = ATgetFirst((ATermList) t);
                                d_68 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = a_68;
                            if(match_cons(t, sym_cf_1))
                              {
                                b_68 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = b_68;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm h_29 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = d_68;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = i_68;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                j_68 = ATgetFirst((ATermList) t);
                                k_68 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = k_68;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = j_68;
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
      t = l_68;
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_69 = ATgetFirst((ATermList) t);
      e_69 = (ATerm) ATgetNext((ATermList) t);
      t = e_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_69 = ATgetFirst((ATermList) t);
          c_69 = (ATerm) ATgetNext((ATermList) t);
          t = b_69;
          if(match_int(t, 34))
            {
              t = d_69;
              if(match_int(t, 92))
                {
                  ATerm j_29 = t;
                  int k_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_69 = NULL;
                      t = c_69;
                      t = De_Escape_0_0(t);
                      h_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_69), term_n_29);
                      ;
                      LocalPopChoice(k_29);
                    }
                  else
                    {
                      t = j_29;
                      {
                        ATerm k_69 = NULL;
                        t = e_69;
                        t = De_Escape_0_0(t);
                        k_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(k_69), d_69);
                      }
                    }
                }
              else
                {
                  ATerm n_69 = NULL;
                  t = e_69;
                  t = De_Escape_0_0(t);
                  n_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_69), d_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = d_69;
                  if(match_int(t, 92))
                    {
                      ATerm o_29 = t;
                      int p_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_69 = NULL;
                          t = c_69;
                          t = De_Escape_0_0(t);
                          p_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(p_69), term_q_29);
                          ;
                          LocalPopChoice(p_29);
                        }
                      else
                        {
                          t = o_29;
                          {
                            ATerm s_69 = NULL;
                            t = e_69;
                            t = De_Escape_0_0(t);
                            s_69 = t;
                            t = (ATerm) ATinsert(CheckATermList(s_69), d_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm v_69 = NULL;
                      t = e_69;
                      t = De_Escape_0_0(t);
                      v_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_69), d_69);
                    }
                }
              else
                {
                  ATerm y_69 = NULL;
                  t = e_69;
                  t = De_Escape_0_0(t);
                  y_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_69), d_69);
                }
            }
        }
      else
        {
          ATerm b_70 = NULL;
          t = e_69;
          t = De_Escape_0_0(t);
          b_70 = t;
          t = (ATerm) ATinsert(CheckATermList(b_70), d_69);
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
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  k_70 = t;
  t = SSL_explode_string(k_70);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_70 = ATgetFirst((ATermList) t);
      o_70 = (ATerm) ATgetNext((ATermList) t);
      t = o_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_70 = ATgetFirst((ATermList) t);
          m_70 = (ATerm) ATgetNext((ATermList) t);
          t = l_70;
          if(match_int(t, 34))
            {
              t = n_70;
              if(match_int(t, 92))
                {
                  ATerm r_29 = t;
                  int t_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_70 = NULL;
                      t = m_70;
                      t = De_Escape_0_0(t);
                      r_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_70), term_n_29);
                      ;
                      LocalPopChoice(t_29);
                    }
                  else
                    {
                      t = r_29;
                      {
                        ATerm u_70 = NULL;
                        t = o_70;
                        t = De_Escape_0_0(t);
                        u_70 = t;
                        t = (ATerm) ATinsert(CheckATermList(u_70), n_70);
                      }
                    }
                }
              else
                {
                  ATerm x_70 = NULL;
                  t = o_70;
                  t = De_Escape_0_0(t);
                  x_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_70), n_70);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = n_70;
                  if(match_int(t, 92))
                    {
                      ATerm u_29 = t;
                      int v_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_70 = NULL;
                          t = m_70;
                          t = De_Escape_0_0(t);
                          z_70 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_70), term_q_29);
                          ;
                          LocalPopChoice(v_29);
                        }
                      else
                        {
                          t = u_29;
                          {
                            ATerm c_71 = NULL;
                            t = o_70;
                            t = De_Escape_0_0(t);
                            c_71 = t;
                            t = (ATerm) ATinsert(CheckATermList(c_71), n_70);
                          }
                        }
                    }
                  else
                    {
                      ATerm f_71 = NULL;
                      t = o_70;
                      t = De_Escape_0_0(t);
                      f_71 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_71), n_70);
                    }
                }
              else
                {
                  ATerm i_71 = NULL;
                  t = o_70;
                  t = De_Escape_0_0(t);
                  i_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_71), n_70);
                }
            }
        }
      else
        {
          ATerm l_71 = NULL;
          t = o_70;
          t = De_Escape_0_0(t);
          l_71 = t;
          t = (ATerm) ATinsert(CheckATermList(l_71), n_70);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  j_70 = t;
  t = SSL_implode_string(j_70);
  return(t);
}
ATerm at_last_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm h_72 (ATerm t)
  {
    ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL;
    e_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_72 = ATgetFirst((ATermList) t);
        g_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_22 = NULL,i_16 = NULL;
          t = SSLgetAnnotations(e_72);
          v_22 = t;
          t = g_72;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_72), f_72);
          i_16 = t;
          t = SSLsetAnnotations(i_16, v_22);
          t = i_86(t);
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          {
            ATerm f_23 = NULL,k_23 = NULL,j_16 = NULL;
            t = SSLgetAnnotations(e_72);
            f_23 = t;
            t = g_72;
            t = h_72(t);
            k_23 = t;
            t = (ATerm) ATinsert(CheckATermList(k_23), f_72);
            j_16 = t;
            t = SSLsetAnnotations(j_16, f_23);
          }
        }
    }
    return(t);
  }
  t = h_72(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_29 = ATgetFirst((ATermList) t);
      if(((ATgetType(z_29) != AT_INT) || (ATgetInt((ATermInt) z_29) != 34)))
        _fail(t);
      {
        ATerm a_30 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_30) != AT_LIST) || !(ATisEmpty(a_30))))
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
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
  o_72 = t;
  t = SSL_explode_string(o_72);
  k_72 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_72 = ATgetFirst((ATermList) t);
      {
        ATerm b_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_72;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = k_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_30 = ATgetFirst((ATermList) t);
      m_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_72;
  t = at_last_1_0(x_3, t);
  l_72 = t;
  t = SSL_implode_string(l_72);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_30);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_30);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_30);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  j_73 = t;
  if(match_cons(t, sym_cf_1))
    {
      h_73 = ATgetArgument(t, 0);
      {
        ATerm l_73 = NULL;
        t = h_73;
        t = PpSym_0_0(t);
        l_73 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_30)), l_73), (ATerm) ATinsert(ATempty, term_k_30));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          h_73 = ATgetArgument(t, 0);
          {
            ATerm n_73 = NULL;
            t = h_73;
            t = PpSym_0_0(t);
            n_73 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_30)), n_73), (ATerm) ATinsert(ATempty, term_k_30));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_p_30);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  h_73 = ATgetArgument(t, 0);
                  i_73 = ATgetArgument(t, 1);
                  {
                    ATerm q_73 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(i_73), h_73);
                    t = map_1_0(PpSym_0_0, t);
                    q_73 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_30)), q_73), (ATerm) ATinsert(ATempty, term_r_30));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      h_73 = ATgetArgument(t, 0);
                      t = h_73;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(y_3, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          h_73 = ATgetArgument(t, 0);
                          t = h_73;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(z_3, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              h_73 = ATgetArgument(t, 0);
                              t = h_73;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(e_4, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  h_73 = ATgetArgument(t, 0);
                                  i_73 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_73 = NULL,x_73 = NULL;
                                    t = h_73;
                                    t = PpSym_0_0(t);
                                    w_73 = t;
                                    t = i_73;
                                    t = PpSym_0_0(t);
                                    x_73 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_31)), x_73), w_73), (ATerm) ATinsert(ATempty, term_z_30));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      h_73 = ATgetArgument(t, 0);
                                      i_73 = ATgetArgument(t, 1);
                                      {
                                        ATerm a_74 = NULL,b_74 = NULL;
                                        t = h_73;
                                        t = PpSym_0_0(t);
                                        a_74 = t;
                                        t = i_73;
                                        t = PpSym_0_0(t);
                                        b_74 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_31)), b_74), a_74), (ATerm) ATinsert(ATempty, term_z_30));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm c_31 = t;
                                      int d_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              h_73 = ATgetArgument(t, 0);
                                              {
                                                ATerm e_31 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(d_31);
                                          {
                                            ATerm d_74 = NULL;
                                            t = h_73;
                                            t = PpSym_0_0(t);
                                            d_74 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_31)), d_74);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = c_31;
                                          {
                                            ATerm g_31 = t;
                                            int j_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    h_73 = ATgetArgument(t, 0);
                                                    i_73 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_31 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(j_31);
                                                {
                                                  ATerm h_74 = NULL,i_74 = NULL;
                                                  t = h_73;
                                                  t = PpSym_0_0(t);
                                                  h_74 = t;
                                                  t = i_73;
                                                  t = PpSym_0_0(t);
                                                  i_74 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_31)), i_74), h_74);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = g_31;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    h_73 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_74 = NULL;
                                                      t = h_73;
                                                      t = PpSym_0_0(t);
                                                      k_74 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, k_74), (ATerm) ATinsert(ATempty, term_o_31));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        h_73 = ATgetArgument(t, 0);
                                                        i_73 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_74 = NULL,o_74 = NULL;
                                                          t = h_73;
                                                          t = PpSym_0_0(t);
                                                          n_74 = t;
                                                          t = i_73;
                                                          t = PpSym_0_0(t);
                                                          o_74 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_74), (ATerm) ATinsert(ATempty, term_q_31)), n_74);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            h_73 = ATgetArgument(t, 0);
                                                            i_73 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm r_74 = NULL,s_74 = NULL;
                                                              t = h_73;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              r_74 = t;
                                                              t = i_73;
                                                              t = PpSym_0_0(t);
                                                              s_74 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_74), (ATerm) ATinsert(ATempty, term_s_31)), r_74);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                h_73 = ATgetArgument(t, 0);
                                                                i_73 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm v_74 = NULL,w_74 = NULL;
                                                                  t = h_73;
                                                                  t = PpSym_0_0(t);
                                                                  v_74 = t;
                                                                  t = i_73;
                                                                  t = PpSym_0_0(t);
                                                                  w_74 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_74), (ATerm) ATinsert(ATempty, term_v_31)), v_74);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    h_73 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm y_74 = NULL;
                                                                      t = h_73;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      y_74 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(y_74), term_w_31);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        h_73 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, h_73);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            h_73 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm w_23 = NULL;
                                                                              t = h_73;
                                                                              {
                                                                                ATerm x_31 = t;
                                                                                int y_31 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(y_31);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_31;
                                                                                  }
                                                                                w_23 = t;
                                                                                t = (ATerm) ATinsert(ATempty, w_23);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm z_31 = t;
                                                                            int a_32 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    h_73 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm b_32 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(a_32);
                                                                                {
                                                                                  ATerm o_24 = NULL;
                                                                                  t = h_73;
                                                                                  {
                                                                                    ATerm c_32 = t;
                                                                                    int d_32 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(d_32);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_32;
                                                                                      }
                                                                                    o_24 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, o_24);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = z_31;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_e_32);
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
ATerm t_76 (ATerm n_75, ATerm o_75, ATerm p_75, ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL;
  t = n_75;
  if(match_cons(t, sym_cf_1))
    {
      u_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_75;
  {
    ATerm f_32 = t;
    if((PushChoice() == 0))
      {
        ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,r_16 = NULL;
        y_75 = t;
        if(match_cons(t, sym_sort_1))
          {
            x_75 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_75);
        w_75 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, x_75);
        r_16 = t;
        t = SSLsetAnnotations(r_16, w_75);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_32;
      }
    t = PpSym_0_0(t);
    t_75 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_32)), t_75), (ATerm) ATinsert(ATempty, term_g_32));
    t = concat_0_0(t);
    v_75 = t;
    t = SSL_concat_strings(v_75);
    s_75 = t;
    t = SSL_mkterm(s_75, o_75);
  }
  return(t);
}
ATerm u_76 (ATerm z_75, ATerm a_76, ATerm b_76, ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,s_16 = NULL;
  t = z_75;
  if(match_cons(t, sym_cf_1))
    {
      f_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_76;
  if(match_cons(t, sym_sort_1))
    {
      i_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_76);
  h_76 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, i_76);
  s_16 = t;
  t = SSLsetAnnotations(s_16, h_76);
  t = PpSym_0_0(t);
  g_76 = t;
  t = SSL_concat_strings(g_76);
  e_76 = t;
  t = SSL_mkterm(e_76, a_76);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm j_76 = NULL,l_76 = NULL,m_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL;
  r_76 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_76 = ATgetArgument(t, 0);
      o_76 = ATgetArgument(t, 1);
      t = j_76;
      if(match_cons(t, sym_prod_3))
        {
          ATerm h_32 = ATgetArgument(t, 0);
          l_76 = ATgetArgument(t, 1);
          {
            ATerm n_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_76 = ATgetFirst((ATermList) t);
          q_76 = (ATerm) ATgetNext((ATermList) t);
          t = q_76;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = l_76;
              if(match_cons(t, sym_sort_1))
                {
                  m_76 = ATgetArgument(t, 0);
                  t = m_76;
                  if(match_string(t, "<START>"))
                    {
                      ATerm o_32 = t;
                      int s_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_76(l_76, o_76, r_76, t);
                          ;
                          LocalPopChoice(s_32);
                        }
                      else
                        {
                          t = o_32;
                          {
                            ATerm u_32 = t;
                            int v_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_76(l_76, o_76, r_76, t);
                                ;
                                LocalPopChoice(v_32);
                              }
                            else
                              {
                                t = u_32;
                                t = p_76;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm w_32 = t;
                      int x_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_76(l_76, o_76, r_76, t);
                          ;
                          LocalPopChoice(x_32);
                        }
                      else
                        {
                          t = w_32;
                          t = u_76(l_76, o_76, r_76, t);
                        }
                    }
                }
              else
                {
                  ATerm y_32 = t;
                  int z_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = t_76(l_76, o_76, r_76, t);
                      ;
                      LocalPopChoice(z_32);
                    }
                  else
                    {
                      t = y_32;
                      t = u_76(l_76, o_76, r_76, t);
                    }
                }
            }
          else
            {
              t = l_76;
              {
                ATerm a_33 = t;
                int b_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_76(l_76, o_76, r_76, t);
                    ;
                    LocalPopChoice(b_33);
                  }
                else
                  {
                    t = a_33;
                    t = u_76(l_76, o_76, r_76, t);
                  }
              }
            }
        }
      else
        {
          t = l_76;
          {
            ATerm c_33 = t;
            int d_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_76(l_76, o_76, r_76, t);
                ;
                LocalPopChoice(d_33);
              }
            else
              {
                t = c_33;
                t = u_76(l_76, o_76, r_76, t);
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_ApplToSort_0)))
        _fail(t);
      t = r_76;
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  ATerm y_76 (ATerm t)
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_78(t);
        t = y_76(t);
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
      }
    return(t);
  }
  t = y_76(t);
  return(t);
}
ATerm is_layout_p__0_0 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL;
  w_78 = t;
  if(match_cons(t, sym_appl_2))
    {
      x_78 = ATgetArgument(t, 0);
      v_78 = ATgetArgument(t, 1);
      {
        ATerm a_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,l_25 = NULL,m_25 = NULL,o_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,e_17 = NULL,d_17 = NULL,c_17 = NULL,b_17 = NULL;
        t = SSLgetAnnotations(w_78);
        a_25 = t;
        t = x_78;
        if(match_cons(t, sym_prod_3))
          {
            e_25 = ATgetArgument(t, 0);
            f_25 = ATgetArgument(t, 1);
            g_25 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_78);
        d_25 = t;
        t = f_25;
        if(match_cons(t, sym_cf_1))
          {
            m_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_25);
        l_25 = t;
        t = m_25;
        if(match_cons(t, sym_opt_1))
          {
            r_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_25);
        q_25 = t;
        t = r_25;
        if(!(match_cons(t, sym_layout_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_opt_1, r_25);
        b_17 = t;
        t = SSLsetAnnotations(b_17, q_25);
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, s_25);
        c_17 = t;
        t = SSLsetAnnotations(c_17, l_25);
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, e_25, o_25, g_25);
        d_17 = t;
        t = SSLsetAnnotations(d_17, d_25);
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, h_25, v_78);
        e_17 = t;
        t = SSLsetAnnotations(e_17, a_25);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          x_78 = ATgetArgument(t, 0);
          {
            ATerm f_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,j_17 = NULL,i_17 = NULL;
            t = SSLgetAnnotations(w_78);
            f_26 = t;
            t = x_78;
            if(match_cons(t, sym_opt_1))
              {
                j_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_78);
            i_26 = t;
            t = j_26;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, j_26);
            i_17 = t;
            t = SSLsetAnnotations(i_17, i_26);
            k_26 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, k_26);
            j_17 = t;
            t = SSLsetAnnotations(j_17, f_26);
          }
        }
      else
        {
          ATerm u_26 = NULL,d_18 = NULL;
          if(match_cons(t, sym_layout_1))
            {
              x_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_78);
          u_26 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, x_78);
          d_18 = t;
          t = SSLsetAnnotations(d_18, u_26);
        }
    }
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm m_79 = NULL,n_79 = NULL,p_79 = NULL,s_79 = NULL,t_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL;
  m_79 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_79 = ATgetArgument(t, 0);
      x_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_79;
  if(match_cons(t, sym_prod_3))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      p_79 = ATgetArgument(t, 1);
      {
        ATerm s_33 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_79;
  if(match_cons(t, sym_cf_1))
    {
      s_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_79;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(x_79);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          t_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_79;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = x_79;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_t_33;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_79 = ATgetFirst((ATermList) t);
              z_79 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_79;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, y_79));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm p_80 (ATerm t)
  {
    ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
    o_80 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_80 = ATgetFirst((ATermList) t);
        n_80 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_27 = NULL,t_27 = NULL,w_19 = NULL;
          t = SSLgetAnnotations(o_80);
          l_27 = t;
          t = n_80;
          t = p_80(t);
          t_27 = t;
          t = (ATerm) ATinsert(CheckATermList(t_27), m_80);
          w_19 = t;
          t = SSLsetAnnotations(w_19, l_27);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_80;
        t = x_85(t);
      }
    return(t);
  }
  t = p_80(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,w_80 = NULL;
  s_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_80;
    }
  else
    {
      ATerm f_4 (ATerm t)
      {
        t = not_null(w_80);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((t_80 != NULL) && (t_80 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            t_80 = ATgetFirst((ATermList) t);
          if(((w_80 != NULL) && (w_80 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_80;
      t = at_end_1_0(f_4, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm c_81 = NULL;
  ATerm t_81 (ATerm t)
  {
    ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
    q_81 = t;
    if(match_cons(t, sym_appl_2))
      {
        o_81 = ATgetArgument(t, 0);
        p_81 = ATgetArgument(t, 1);
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_28 = NULL,p_28 = NULL,t_28 = NULL,r_20 = NULL;
              t = SSLgetAnnotations(q_81);
              p_28 = t;
              t = p_81;
              t = map_1_0(t_81, t);
              t_28 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, o_81, t_28);
              r_20 = t;
              t = SSLsetAnnotations(r_20, p_28);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm z_33 = ATgetArgument(t, 0);
                  o_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_28;
              t = concat_0_0(t);
              ;
              LocalPopChoice(w_33);
            }
          else
            {
              t = v_33;
              t = (ATerm) ATinsert(ATempty, q_81);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, q_81);
      }
    return(t);
  }
  t = t_81(t);
  if(((c_81 != NULL) && (c_81 != t)))
    _fail(t);
  else
    c_81 = t;
  t = SSL_implode_string(c_81);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm l_82 = NULL,n_82 = NULL,o_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
  r_82 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_82 = ATgetArgument(t, 0);
      {
        ATerm a_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_82;
  if(match_cons(t, sym_prod_3))
    {
      t_82 = ATgetArgument(t, 0);
      u_82 = ATgetArgument(t, 1);
      {
        ATerm b_34 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = u_82;
  {
    ATerm c_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm f_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_34);
        t = t_82;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_82 = ATgetFirst((ATermList) t);
            n_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_82;
        if(match_cons(t, sym_lex_1))
          {
            ATerm h_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_82;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_82;
        t = yield_0_0(t);
      }
    else
      {
        t = c_34;
        {
          ATerm j_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm m_34 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(k_34);
              t = r_82;
              t = yield_0_0(t);
            }
          else
            {
              t = j_34;
              {
                ATerm n_34 = t;
                int o_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm p_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_34);
                    {
                      ATerm y_82 = NULL;
                      t = r_82;
                      t = yield_0_0(t);
                      y_82 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, y_82);
                    }
                  }
                else
                  {
                    t = n_34;
                    if(match_cons(t, sym_varsym_1))
                      {
                        v_82 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_82;
                    if(match_cons(t, sym_cf_1))
                      {
                        o_82 = ATgetArgument(t, 0);
                        t = o_82;
                        {
                          ATerm u_34 = t;
                          int v_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm z_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(v_34);
                              t = t_82;
                              {
                                ATerm a_35 = t;
                                int b_35 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_82 = NULL;
                                    t = r_82;
                                    t = yield_0_0(t);
                                    z_82 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, z_82);
                                    ;
                                    LocalPopChoice(b_35);
                                  }
                                else
                                  {
                                    t = a_35;
                                    {
                                      ATerm a_83 = NULL;
                                      t = r_82;
                                      t = yield_0_0(t);
                                      a_83 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, a_83);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = u_34;
                              {
                                ATerm c_35 = t;
                                int d_35 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm e_35 = ATgetArgument(t, 0);
                                        ATerm f_35 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(d_35);
                                    t = t_82;
                                    {
                                      ATerm g_35 = t;
                                      int i_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_83 = NULL;
                                          t = r_82;
                                          t = yield_0_0(t);
                                          b_83 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, b_83);
                                          ;
                                          LocalPopChoice(i_35);
                                        }
                                      else
                                        {
                                          t = g_35;
                                          {
                                            ATerm c_83 = NULL;
                                            t = r_82;
                                            t = yield_0_0(t);
                                            c_83 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, c_83);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = c_35;
                                    {
                                      ATerm j_35 = t;
                                      int m_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm n_35 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(m_35);
                                          t = t_82;
                                          {
                                            ATerm o_35 = t;
                                            int p_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_83 = NULL;
                                                t = r_82;
                                                t = yield_0_0(t);
                                                d_83 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, d_83);
                                                ;
                                                LocalPopChoice(p_35);
                                              }
                                            else
                                              {
                                                t = o_35;
                                                {
                                                  ATerm e_83 = NULL;
                                                  t = r_82;
                                                  t = yield_0_0(t);
                                                  e_83 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, e_83);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = j_35;
                                          {
                                            ATerm r_35 = t;
                                            int s_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm t_35 = ATgetArgument(t, 0);
                                                    ATerm v_35 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(s_35);
                                                t = t_82;
                                                {
                                                  ATerm w_35 = t;
                                                  int x_35 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_83 = NULL;
                                                      t = r_82;
                                                      t = yield_0_0(t);
                                                      f_83 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, f_83);
                                                      ;
                                                      LocalPopChoice(x_35);
                                                    }
                                                  else
                                                    {
                                                      t = w_35;
                                                      {
                                                        ATerm g_83 = NULL;
                                                        t = r_82;
                                                        t = yield_0_0(t);
                                                        g_83 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, g_83);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = r_35;
                                                {
                                                  ATerm h_83 = NULL;
                                                  t = r_82;
                                                  t = yield_0_0(t);
                                                  h_83 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, h_83);
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
                        ATerm i_83 = NULL;
                        t = r_82;
                        t = yield_0_0(t);
                        i_83 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, i_83);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm t)
{
  t = v_79(t);
  {
    ATerm h_4 (ATerm t)
    {
      t = downup2_2_0(v_79, w_79, t);
      return(t);
    }
    t = SRTS_all(h_4, t);
    t = w_79(t);
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
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      ;
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm a_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = a_36;
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
  ATerm d_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,f_21 = NULL,w_20 = NULL;
      q_33 = t;
      if(match_cons(t, sym_appl_2))
        {
          h_33 = ATgetArgument(t, 0);
          i_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_33);
      g_33 = t;
      t = h_33;
      if(match_cons(t, sym_prod_3))
        {
          l_33 = ATgetArgument(t, 0);
          m_33 = ATgetArgument(t, 1);
          n_33 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_33);
      k_33 = t;
      t = l_33;
      t = filter_1_0(q_4, t);
      o_33 = t;
      t = (ATerm) ATmakeAppl(sym_prod_3, o_33, m_33, n_33);
      w_20 = t;
      t = SSLsetAnnotations(w_20, k_33);
      p_33 = t;
      t = i_33;
      t = filter_1_0(r_4, t);
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym_appl_2, p_33, j_33);
      f_21 = t;
      t = SSLsetAnnotations(f_21, g_33);
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = d_36;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm g_36 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_36;
    }
  return(t);
}
ATerm r_4 (ATerm t)
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
ATerm s_4 (ATerm t)
{
  t = repeat_1_0(ApplToSort_0_0, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      ;
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
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
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(w_4, t);
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm n_36 = t;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL,m_37 = NULL,n_37 = NULL,b_22 = NULL;
      n_37 = t;
      if(match_cons(t, sym_lit_1))
        {
          m_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_37);
      h_37 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, m_37);
      b_22 = t;
      t = SSLsetAnnotations(b_22, h_37);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_36;
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
  ATerm o_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_39 = NULL,b_39 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          a_39 = ATgetArgument(t, 0);
          {
            ATerm s_36 = ATgetArgument(t, 1);
            if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
              {
                b_39 = ATgetFirst((ATermList) s_36);
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
      t = a_39;
      t = injection_0_0(t);
      t = b_39;
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = o_36;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_ReplaceAppl_0)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveSeq_0)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      ;
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
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
  ATerm p_84 = NULL,c_91 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,x_84 = NULL,y_84 = NULL;
  p_84 = t;
  if(match_cons(t, sym__2))
    {
      x_84 = ATgetArgument(t, 0);
      y_84 = ATgetArgument(t, 1);
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_29 = NULL,l_29 = NULL,m_29 = NULL,v_20 = NULL;
            t = SSLgetAnnotations(p_84);
            i_29 = t;
            t = x_84;
            t = fetch_1_0(i_4, t);
            l_29 = t;
            t = y_84;
            t = downup2_2_0(j_4, k_4, t);
            m_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_29, m_29);
            v_20 = t;
            t = SSLsetAnnotations(v_20, i_29);
            ;
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            t = p_84;
          }
      }
    }
  else
    {
      t = p_84;
    }
  f_86 = t;
  if(match_cons(t, sym__2))
    {
      d_86 = ATgetArgument(t, 0);
      e_86 = ATgetArgument(t, 1);
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_31 = NULL,m_31 = NULL,n_31 = NULL,g_21 = NULL;
            t = SSLgetAnnotations(f_86);
            h_31 = t;
            t = d_86;
            t = fetch_1_0(l_4, t);
            m_31 = t;
            t = e_86;
            t = topdown_1_0(p_4, t);
            n_31 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_31, n_31);
            g_21 = t;
            t = SSLsetAnnotations(g_21, h_31);
            ;
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            t = f_86;
          }
      }
    }
  else
    {
      t = f_86;
    }
  v_86 = t;
  if(match_cons(t, sym__2))
    {
      t_86 = ATgetArgument(t, 0);
      u_86 = ATgetArgument(t, 1);
      {
        ATerm g_37 = t;
        int j_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_33 = NULL,x_33 = NULL,y_33 = NULL,h_21 = NULL;
            t = SSLgetAnnotations(v_86);
            u_33 = t;
            t = t_86;
            t = fetch_1_0(ApplToSort_0_0, t);
            x_33 = t;
            t = u_86;
            t = topdown_1_0(s_4, t);
            y_33 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
            h_21 = t;
            t = SSLsetAnnotations(h_21, u_33);
            ;
            LocalPopChoice(j_37);
          }
        else
          {
            t = g_37;
            t = v_86;
          }
      }
    }
  else
    {
      t = v_86;
    }
  j_87 = t;
  if(match_cons(t, sym__2))
    {
      h_87 = ATgetArgument(t, 0);
      i_87 = ATgetArgument(t, 1);
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_35 = NULL,k_35 = NULL,l_35 = NULL,x_21 = NULL;
            t = SSLgetAnnotations(j_87);
            h_35 = t;
            t = h_87;
            t = fetch_1_0(FlatList_0_0, t);
            k_35 = t;
            t = i_87;
            t = topdown_1_0(t_4, t);
            l_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
            x_21 = t;
            t = SSLsetAnnotations(x_21, h_35);
            ;
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = j_87;
          }
      }
    }
  else
    {
      t = j_87;
    }
  a_88 = t;
  if(match_cons(t, sym__2))
    {
      y_87 = ATgetArgument(t, 0);
      z_87 = ATgetArgument(t, 1);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_36 = NULL,p_36 = NULL,q_36 = NULL,c_22 = NULL;
            t = SSLgetAnnotations(a_88);
            m_36 = t;
            t = y_87;
            t = fetch_1_0(u_4, t);
            p_36 = t;
            t = z_87;
            t = topdown_1_0(v_4, t);
            q_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
            c_22 = t;
            t = SSLsetAnnotations(c_22, m_36);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = a_88;
          }
      }
    }
  else
    {
      t = a_88;
    }
  q_88 = t;
  if(match_cons(t, sym__2))
    {
      o_88 = ATgetArgument(t, 0);
      p_88 = ATgetArgument(t, 1);
      {
        ATerm q_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_37 = NULL,f_38 = NULL,g_38 = NULL,e_22 = NULL;
            t = SSLgetAnnotations(q_88);
            z_37 = t;
            t = o_88;
            t = fetch_1_0(x_4, t);
            f_38 = t;
            t = p_88;
            t = bottomup_1_0(z_4, t);
            g_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_38, g_38);
            e_22 = t;
            t = SSLsetAnnotations(e_22, z_37);
            ;
            LocalPopChoice(r_37);
          }
        else
          {
            t = q_37;
            t = q_88;
          }
      }
    }
  else
    {
      t = q_88;
    }
  e_89 = t;
  if(match_cons(t, sym__2))
    {
      c_89 = ATgetArgument(t, 0);
      d_89 = ATgetArgument(t, 1);
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_39 = NULL,s_39 = NULL,t_39 = NULL,i_22 = NULL;
            t = SSLgetAnnotations(e_89);
            p_39 = t;
            t = c_89;
            t = fetch_1_0(FlatAlt_0_0, t);
            s_39 = t;
            t = d_89;
            t = topdown_1_0(e_5, t);
            t_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_39, t_39);
            i_22 = t;
            t = SSLsetAnnotations(i_22, p_39);
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            t = e_89;
          }
      }
    }
  else
    {
      t = e_89;
    }
  s_89 = t;
  if(match_cons(t, sym__2))
    {
      q_89 = ATgetArgument(t, 0);
      r_89 = ATgetArgument(t, 1);
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_40 = NULL,d_41 = NULL,e_41 = NULL,n_22 = NULL;
            t = SSLgetAnnotations(s_89);
            w_40 = t;
            t = q_89;
            t = fetch_1_0(o_5, t);
            d_41 = t;
            t = r_89;
            t = replace_appl_0_0(t);
            e_41 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_41, e_41);
            n_22 = t;
            t = SSLsetAnnotations(n_22, w_40);
            ;
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            t = s_89;
          }
      }
    }
  else
    {
      t = s_89;
    }
  g_90 = t;
  if(match_cons(t, sym__2))
    {
      e_90 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_42 = NULL,l_42 = NULL,m_42 = NULL,o_22 = NULL;
            t = SSLgetAnnotations(g_90);
            b_42 = t;
            t = e_90;
            t = fetch_1_0(r_5, t);
            l_42 = t;
            t = f_90;
            t = topdown_1_0(s_5, t);
            m_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_42, m_42);
            o_22 = t;
            t = SSLsetAnnotations(o_22, b_42);
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            t = g_90;
          }
      }
    }
  else
    {
      t = g_90;
    }
  u_90 = t;
  if(match_cons(t, sym__2))
    {
      s_90 = ATgetArgument(t, 0);
      t_90 = ATgetArgument(t, 1);
      {
        ATerm y_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_43 = NULL,n_43 = NULL,s_43 = NULL,t_22 = NULL;
            t = SSLgetAnnotations(u_90);
            i_43 = t;
            t = s_90;
            t = fetch_1_0(t_5, t);
            n_43 = t;
            t = t_90;
            if(match_cons(t, sym_parsetree_2))
              {
                s_43 = ATgetArgument(t, 0);
                {
                  ATerm b_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, n_43, s_43);
            t_22 = t;
            t = SSLsetAnnotations(t_22, i_43);
            ;
            LocalPopChoice(a_38);
          }
        else
          {
            t = y_37;
            t = u_90;
          }
      }
    }
  else
    {
      t = u_90;
    }
  c_91 = t;
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,u_22 = NULL;
        t = c_91;
        if((p_84 != t))
          {
            _fail(t);
          }
        t = c_91;
        if(match_cons(t, sym__2))
          {
            h_44 = ATgetArgument(t, 0);
            i_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_91);
        g_44 = t;
        t = i_44;
        t = implodeAsfix_0_0(t);
        j_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_44, j_44);
        u_22 = t;
        t = SSLsetAnnotations(u_22, g_44);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = c_91;
      }
  }
  return(t);
}
ATerm h_8 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm r_91 = NULL;
  t = SSL_fputc(g_42, h_42);
  r_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_91);
  return(t);
}
ATerm i_8 (ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm s_91 = NULL;
  t = SSL_write_term_to_stream_text(u_45, v_45);
  s_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_91);
  return(t);
}
ATerm k_8 (ATerm e_98 (ATerm), ATerm u_470, ATerm y_45, ATerm t)
{
  ATerm t_91 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_470, term_e_38);
  t = open_stream_0_0(t);
  t_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_91, y_45);
  t = e_98(t);
  t = fclose_0_0(t);
  t = y_45;
  return(t);
}
ATerm j_8 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm u_91 = NULL;
  t = SSL_write_term_to_stream_baf(q_45, r_45);
  u_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_91);
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
  ATerm y_44 = NULL,d_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_38 = ATgetArgument(t, 0);
      if(match_cons(h_38, sym_Stream_1))
        {
          y_44 = ATgetArgument(h_38, 0);
        }
      else
        _fail(t);
      d_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(y_44, d_45, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm m_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_38 = ATgetArgument(t, 0);
      if(match_cons(i_38, sym_Stream_1))
        {
          q_46 = ATgetArgument(i_38, 0);
        }
      else
        _fail(t);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(q_46, r_46, t);
  m_46 = t;
  t = term_j_38;
  o_46 = t;
  t = m_46;
  if(match_cons(t, sym_Stream_1))
    {
      p_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_38, m_46);
  t = h_8(o_46, p_46, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,j_93 = NULL,k_93 = NULL,d_29 = NULL,c_29 = NULL;
  z_91 = t;
  if(match_cons(t, sym__2))
    {
      g_92 = ATgetArgument(t, 0);
      h_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_91);
  f_92 = t;
  t = g_92;
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((y_91 != NULL) && (y_91 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_91 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_5, t);
        ;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        t = term_m_38;
        y_91 = t;
      }
    if(((i_92 != NULL) && (i_92 != t)))
      _fail(t);
    else
      i_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_92, h_92);
    if(((c_29 != NULL) && (c_29 != t)))
      _fail(t);
    else
      c_29 = t;
    t = SSLsetAnnotations(c_29, f_92);
    t = z_91;
    if(match_cons(t, sym__2))
      {
        if(((b_92 != NULL) && (b_92 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          b_92 = ATgetArgument(t, 0);
        if(((c_92 != NULL) && (c_92 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          c_92 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_91);
    if(((a_92 != NULL) && (a_92 != t)))
      _fail(t);
    else
      a_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_92, (ATerm) ATmakeAppl(sym__2, not_null(y_91), c_92));
    if(((d_29 != NULL) && (d_29 != t)))
      _fail(t);
    else
      d_29 = t;
    t = SSLsetAnnotations(d_29, a_92);
    if(((e_92 != NULL) && (e_92 != t)))
      _fail(t);
    else
      e_92 = t;
    if(match_cons(t, sym__2))
      {
        if(((j_93 != NULL) && (j_93 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_93 = ATgetArgument(t, 0);
        if(((k_93 != NULL) && (k_93 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          k_93 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm n_38 = t;
      int o_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,x_44 = NULL,e_29 = NULL;
          t = SSLgetAnnotations(e_92);
          p_44 = t;
          t = j_93;
          t = fetch_1_0(v_5, t);
          t_44 = t;
          t = k_93;
          if(match_cons(t, sym__2))
            {
              v_44 = ATgetArgument(t, 0);
              x_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_8(w_5, v_44, x_44, t);
          u_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_44, u_44);
          e_29 = t;
          t = SSLsetAnnotations(e_29, p_44);
          ;
          LocalPopChoice(o_38);
        }
      else
        {
          t = n_38;
          {
            ATerm m_45 = NULL,x_45 = NULL,k_46 = NULL,l_46 = NULL,f_29 = NULL;
            t = SSLgetAnnotations(e_92);
            m_45 = t;
            t = k_93;
            if(match_cons(t, sym__2))
              {
                k_46 = ATgetArgument(t, 0);
                l_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_8(x_5, k_46, l_46, t);
            x_45 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_93, x_45);
            f_29 = t;
            t = SSLsetAnnotations(f_29, m_45);
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
ATerm apply_strategy_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL;
  r_93 = t;
  t = dtime_0_0(t);
  t = r_93;
  t = e_105(t);
  q_93 = t;
  t = dtime_0_0(t);
  n_93 = t;
  t = q_93;
  if(match_cons(t, sym__2))
    {
      o_93 = ATgetArgument(t, 0);
      p_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_93), (ATerm) ATmakeAppl(sym_Runtime_1, n_93)), p_93);
  return(t);
}
ATerm f_94 (ATerm z_93, ATerm t)
{
  t = SSL_fclose(z_93);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL;
  d_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_94 = ATgetArgument(t, 0);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_94);
            ;
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            t = f_94(d_94, t);
          }
      }
    }
  else
    {
      t = f_94(d_94, t);
    }
  return(t);
}
ATerm l_8 (ATerm w_45, ATerm t)
{
  t = SSL_read_term_from_stream(w_45);
  return(t);
}
ATerm m_8 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm g_94 = NULL;
  t = SSL_fopen(i_42, j_42);
  g_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_94);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_94 = NULL;
  t = SSL_stdin_stream();
  h_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_94);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_94 = NULL;
  t = SSL_stdout_stream();
  i_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_94);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_94 = NULL;
  t = SSL_stderr_stream();
  j_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_94);
  return(t);
}
ATerm s_95 (ATerm p_94, ATerm t)
{
  ATerm q_94 = NULL;
  t = SSL_explode_term(p_94);
  if(match_cons(t, sym__2))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_38 = ATgetArgument(t, 1);
        if(((ATgetType(s_38) == AT_LIST) && !(ATisEmpty(s_38))))
          {
            q_94 = ATgetFirst((ATermList) s_38);
            {
              ATerm t_38 = (ATerm) ATgetNext((ATermList) s_38);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_94;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_94;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_94;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_94;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm t_95 (ATerm t_94, ATerm u_94, ATerm v_94, ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL,b_95 = NULL,e_30 = NULL;
  t = SSLgetAnnotations(v_94);
  y_94 = t;
  t = t_94;
  if(match_cons(t, sym_Path_1))
    {
      b_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_95, u_94);
  e_30 = t;
  t = SSLsetAnnotations(e_30, y_94);
  if(match_cons(t, sym__2))
    {
      w_94 = ATgetArgument(t, 0);
      x_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(w_94, x_94, t);
  return(t);
}
ATerm u_95 (ATerm d_95, ATerm e_95, ATerm f_95, ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL,n_95 = NULL,f_30 = NULL;
  t = SSLgetAnnotations(f_95);
  i_95 = t;
  t = SSL_is_string(d_95);
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_95, e_95);
  f_30 = t;
  t = SSLsetAnnotations(f_30, i_95);
  if(match_cons(t, sym__2))
    {
      g_95 = ATgetArgument(t, 0);
      h_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(g_95, h_95, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      ATerm v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  p_95 = t;
  if(match_cons(t, sym__2))
    {
      q_95 = ATgetArgument(t, 0);
      r_95 = ATgetArgument(t, 1);
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_95(p_95, t);
            ;
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            {
              ATerm y_38 = t;
              int e_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_95(q_95, r_95, p_95, t);
                  ;
                  LocalPopChoice(e_39);
                }
              else
                {
                  t = y_38;
                  t = u_95(q_95, r_95, p_95, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_95(p_95, t);
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_95 = NULL;
      y_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_95, term_k_39);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
      t = debug_1_0(y_5, t);
      _fail(t);
    }
  w_95 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(x_95, t);
  v_95 = t;
  t = w_95;
  t = fclose_0_0(t);
  t = v_95;
  return(t);
}
ATerm fetch_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm w_96 (ATerm t)
  {
    ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
    t_96 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_96 = ATgetFirst((ATermList) t);
        v_96 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_39 = t;
      int m_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_47 = NULL,i_47 = NULL,i_30 = NULL;
          t = SSLgetAnnotations(t_96);
          f_47 = t;
          t = u_96;
          t = r_85(t);
          i_47 = t;
          t = (ATerm) ATinsert(CheckATermList(v_96), i_47);
          i_30 = t;
          t = SSLsetAnnotations(i_30, f_47);
          ;
          LocalPopChoice(m_39);
        }
      else
        {
          t = l_39;
          {
            ATerm q_47 = NULL,t_47 = NULL,j_30 = NULL;
            t = SSLgetAnnotations(t_96);
            q_47 = t;
            t = v_96;
            t = w_96(t);
            t_47 = t;
            t = (ATerm) ATinsert(CheckATermList(t_47), u_96);
            j_30 = t;
            t = SSLsetAnnotations(j_30, q_47);
          }
        }
    }
    return(t);
  }
  t = w_96(t);
  return(t);
}
ATerm g_8 (ATerm w_36, ATerm x_36, ATerm t)
{
  t = SSL_strcat(w_36, x_36);
  return(t);
}
ATerm debug_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL;
  z_96 = t;
  t = c_98(t);
  a_97 = t;
  t = term_p_10;
  b_97 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_96), a_97);
  c_97 = t;
  t = SSL_printnl(b_97, c_97);
  t = z_96;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_q_39;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_97 = NULL;
      j_97 = t;
      t = SSL_is_string(j_97);
      ;
      LocalPopChoice(u_39);
    }
  else
    {
      t = r_39;
      {
        ATerm v_39 = t;
        int c_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_5, t);
            ;
            LocalPopChoice(c_40);
          }
        else
          {
            t = v_39;
            {
              ATerm p_97 = NULL,q_97 = NULL,r_97 = NULL;
              p_97 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_97 = ATgetArgument(t, 0);
                  t = q_97;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_97 = ATgetArgument(t, 0);
                      t = q_97;
                      {
                        ATerm d_40 = t;
                        int j_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_40);
                          }
                        else
                          {
                            t = d_40;
                            t = debug_1_0(a_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_97 = NULL,w_97 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_97 = ATgetArgument(t, 0);
                          r_97 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_97;
                      t = eval_config_0_0(t);
                      v_97 = t;
                      t = r_97;
                      t = eval_config_0_0(t);
                      w_97 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_97, w_97);
                      t = g_8(v_97, w_97, t);
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
  ATerm a_98 = NULL,b_98 = NULL;
  a_98 = t;
  t = term_k_40;
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_40, a_98);
  t = p_8(b_98, a_98, t);
  {
    ATerm m_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_98 = NULL,f_98 = NULL;
        t = eval_config_0_0(t);
        d_98 = t;
        t = term_k_40;
        f_98 = t;
        t = SSL_table_put(f_98, a_98, d_98);
        t = d_98;
        ;
        LocalPopChoice(p_40);
      }
    else
      {
        t = m_40;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm j_98 = NULL;
  j_98 = t;
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_98 = NULL;
        t = term_x_40;
        t = get_config_0_0(t);
        l_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_98, term_y_40);
        t = geq_0_0(t);
        t = j_98;
        t = p_99(t);
        ;
        LocalPopChoice(t_40);
      }
    else
      {
        t = s_40;
        t = j_98;
      }
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm o_98 = NULL;
  o_98 = t;
  if(match_string(t, "-k"))
    {
      t = o_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_98;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL;
  p_98 = t;
  t = SSL_string_to_int(p_98);
  q_98 = t;
  t = term_f_41;
  r_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_41, q_98);
  t = s_8(r_98, q_98, t);
  t = p_98;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, d_6, l_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm t_98 = NULL;
  t_98 = t;
  if(match_string(t, "-S"))
    {
      t = t_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_98;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL;
  t = term_x_40;
  u_98 = t;
  t = term_h_41;
  v_98 = t;
  t = term_i_41;
  t = s_8(u_98, v_98, t);
  t = term_j_41;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL;
  w_98 = t;
  t = SSL_string_to_int(w_98);
  x_98 = t;
  t = term_x_40;
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_40, x_98);
  t = s_8(y_98, x_98, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_98);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_l_41;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL;
  t = term_m_41;
  z_98 = t;
  t = term_o_10;
  a_99 = t;
  t = term_o_41;
  t = s_8(z_98, a_99, t);
  t = term_q_41;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_r_41;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_6, n_6, p_6, t);
      ;
      LocalPopChoice(t_41);
    }
  else
    {
      t = s_41;
      {
        ATerm w_41 = t;
        int c_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_6, t_6, v_6, t);
            ;
            LocalPopChoice(c_42);
          }
        else
          {
            t = w_41;
            t = Option_3_0(x_6, y_6, z_6, t);
          }
      }
    }
  return(t);
}
ATerm s_8 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm b_99 = NULL;
  t = term_k_40;
  b_99 = t;
  t = SSL_table_put(b_99, x_46, y_46);
  t = (ATerm) ATmakeAppl(sym__3, term_k_40, x_46, y_46);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL;
      t = term_o_10;
      t = h_0(t);
      g_99 = t;
      t = term_k_42;
      h_99 = t;
      t = term_r_42;
      i_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_42, term_r_42, g_99);
      t = q_8(h_99, i_99, g_99, t);
      _fail(t);
    }
  else
    {
      ATerm l_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_99 = ATgetFirst((ATermList) t);
          f_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_99;
      t = d_0(t);
      t = term_o_10;
      t = g_0(t);
      l_99 = t;
      t = (ATerm) ATinsert(CheckATermList(f_99), l_99);
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm n_99 = NULL;
  n_99 = t;
  if(match_string(t, "-o"))
    {
      t = n_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_99;
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm q_99 = NULL,r_99 = NULL;
  q_99 = t;
  t = term_s_42;
  r_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_42, q_99);
  t = s_8(r_99, q_99, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_99);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_7, b_7, c_7, t);
  return(t);
}
ATerm q_8 (ATerm f_49, ATerm g_49, ATerm e_49, ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL;
  t_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_49, g_49);
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_42 = ATgetArgument(t, 0);
            ATerm z_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_49, g_49);
        t = p_8(f_49, g_49, t);
        ;
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        t = (ATerm) ATempty;
      }
    u_99 = t;
    t = (ATerm) ATinsert(CheckATermList(u_99), e_49);
    v_99 = t;
    t = SSL_table_put(f_49, g_49, v_99);
    t = t_99;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL;
      t = term_o_10;
      t = p_0(t);
      g_100 = t;
      t = term_k_42;
      h_100 = t;
      t = term_r_42;
      i_100 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_42, term_r_42, g_100);
      t = q_8(h_100, i_100, g_100, t);
      _fail(t);
    }
  else
    {
      ATerm m_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_100 = ATgetFirst((ATermList) t);
          d_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_100;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_100 = ATgetFirst((ATermList) t);
          f_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_100;
      t = m_0(t);
      t = e_100;
      t = n_0(t);
      m_100 = t;
      t = (ATerm) ATinsert(CheckATermList(f_100), m_100);
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm o_100 = NULL;
  o_100 = t;
  if(match_string(t, "-i"))
    {
      t = o_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_100;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL;
  p_100 = t;
  t = term_b_43;
  q_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_43, p_100);
  t = s_8(q_100, p_100, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_100);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_e_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_7, e_7, g_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_10;
  t = whoami_0_0(t);
  r_100 = t;
  t = term_p_10;
  t_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_43), r_100);
  u_100 = t;
  t = SSL_printnl(t_100, u_100);
  t = term_x_10;
  s_100 = t;
  t = SSL_exit(s_100);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_43;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_8 (ATerm g_39, ATerm h_39, ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_39, h_39);
      ;
      LocalPopChoice(k_43);
    }
  else
    {
      t = j_43;
      t = SSL_addr(g_39, h_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL;
  w_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_100;
      t = k_91(t);
    }
  else
    {
      ATerm b_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_100 = ATgetFirst((ATermList) t);
          y_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_100;
      t = foldr_2_0(k_91, l_91, t);
      b_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_100, b_101);
      t = l_91(t);
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
  ATerm k_48 = NULL,l_48 = NULL;
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(k_48, l_48, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_101 = NULL,g_48 = NULL,h_48 = NULL;
  t = times_0_0(t);
  h_48 = t;
  t = SSL_explode_term(h_48);
  if(match_cons(t, sym__2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      g_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_48;
  t = foldr_2_0(h_7, o_7, t);
  e_101 = t;
  t = SSL_TicksToSeconds(e_101);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL;
  p_101 = t;
  if(match_cons(t, sym__2))
    {
      q_101 = ATgetArgument(t, 0);
      r_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_101;
        if((q_101 != t))
          {
            _fail(t);
          }
        t = p_101;
        ;
        LocalPopChoice(o_43);
      }
    else
      {
        t = m_43;
        t = (ATerm) ATmakeAppl(sym__2, q_101, r_101);
        {
          ATerm p_43 = t;
          int q_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_101, r_101);
              ;
              LocalPopChoice(q_43);
            }
          else
            {
              t = p_43;
              t = SSL_gtr(q_101, r_101);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_101, r_101);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm v_101 = NULL;
  v_101 = t;
  {
    ATerm r_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_101 = NULL;
        t = term_x_40;
        t = get_config_0_0(t);
        x_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_101, term_x_10);
        t = geq_0_0(t);
        t = v_101;
        t = o_99(t);
        ;
        LocalPopChoice(v_43);
      }
    else
      {
        t = r_43;
        t = v_101;
      }
  }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm z_101 = NULL,a_102 = NULL,c_102 = NULL,d_102 = NULL;
  t = run_time_0_0(t);
  z_101 = t;
  t = term_o_10;
  t = whoami_0_0(t);
  a_102 = t;
  t = term_p_10;
  c_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_43), z_101), term_w_43), a_102);
  d_102 = t;
  t = SSL_printnl(c_102, d_102);
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_43), z_101), term_w_43), a_102));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_102 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_41;
  e_102 = t;
  t = SSL_exit(e_102);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL;
  p_102 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_102;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_102 = ATgetArgument(t, 0);
          {
            ATerm x_48 = NULL,m_30 = NULL;
            t = SSLgetAnnotations(p_102);
            x_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_102);
            m_30 = t;
            t = SSLsetAnnotations(m_30, x_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_102;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_106 (ATerm), ATerm t)
{
  ATerm y_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_44);
    }
  else
    {
      t = y_43;
      t = fetch_1_0(q_7, t);
    }
  t = c_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_102 = ATgetFirst((ATermList) t);
      t_102 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_102 = NULL,y_102 = NULL;
        ATerm r_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_102)), not_null(y_102));
          return(t);
        }
        t = t_102;
        t = k_0(t);
        if(((x_102 != NULL) && (x_102 != t)))
          _fail(t);
        else
          x_102 = t;
        t = s_102;
        t = j_0(t);
        if(((y_102 != NULL) && (y_102 != t)))
          _fail(t);
        else
          y_102 = t;
        t = t_102;
        t = reverse_acc_2_0(j_0, r_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_10;
      t = k_0(t);
    }
  return(t);
}
ATerm p_8 (ATerm w_50, ATerm x_50, ATerm t)
{
  t = SSL_table_get(w_50, x_50);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm l_103 = NULL,m_49 = NULL,n_49 = NULL;
  l_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_103), term_e_44);
  {
    ATerm f_44 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(k_44);
      }
    else
      {
        t = f_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, l_103), term_e_44));
      }
    m_49 = t;
    t = term_m_38;
    n_49 = t;
    t = SSL_printnl(n_49, m_49);
    t = (ATerm) ATinsert(ATinsert(ATempty, l_103), term_e_44);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,j_49 = NULL,k_49 = NULL;
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_43;
      t = get_config_0_0(t);
      c_103 = t;
      ;
      LocalPopChoice(m_44);
    }
  else
    {
      t = l_44;
      {
        ATerm x_7 (ATerm t)
        {
          ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL,o_30 = NULL;
          h_103 = t;
          if(match_cons(t, sym_Program_1))
            {
              g_103 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_103);
          f_103 = t;
          t = g_103;
          if(((c_103 != NULL) && (c_103 != t)))
            _fail(t);
          else
            c_103 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, g_103);
          o_30 = t;
          t = SSLsetAnnotations(o_30, f_103);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  {
    ATerm n_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_49 = NULL,h_49 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_44), not_null(c_103)), term_q_44);
        {
          ATerm s_44 = t;
          int w_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              ;
              LocalPopChoice(w_44);
            }
          else
            {
              t = s_44;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_44), not_null(c_103)), term_q_44));
            }
          d_49 = t;
          t = term_m_38;
          h_49 = t;
          t = SSL_printnl(h_49, d_49);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_44), not_null(c_103)), term_q_44);
        }
        ;
        LocalPopChoice(o_44);
      }
    else
      {
        t = n_44;
      }
    t = term_z_44;
    {
      ATerm a_45 = t;
      int b_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(b_45);
        }
      else
        {
          t = a_45;
          t = (ATerm) ATinsert(ATempty, term_z_44);
        }
      if(((j_49 != NULL) && (j_49 != t)))
        _fail(t);
      else
        j_49 = t;
      t = term_m_38;
      if(((k_49 != NULL) && (k_49 != t)))
        _fail(t);
      else
        k_49 = t;
      t = SSL_printnl(k_49, j_49);
      t = term_k_42;
      if(((d_103 != NULL) && (d_103 != t)))
        _fail(t);
      else
        d_103 = t;
      t = term_r_42;
      if(((e_103 != NULL) && (e_103 != t)))
        _fail(t);
      else
        e_103 = t;
      t = term_c_45;
      t = p_8(d_103, e_103, t);
      t = reverse_acc_2_0(_id, y_7, t);
      t = map_1_0(z_7, t);
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_49 = NULL,q_49 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_45), term_i_45), term_h_45), term_g_45);
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
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_45), term_i_45), term_h_45), term_g_45));
                }
              p_49 = t;
              t = term_m_38;
              q_49 = t;
              t = SSL_printnl(q_49, p_49);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_45), term_i_45), term_h_45), term_g_45);
            }
            ;
            LocalPopChoice(f_45);
          }
        else
          {
            t = e_45;
          }
      }
    }
  }
  return(t);
}
ATerm map_1_0 (ATerm h_85 (ATerm), ATerm t)
{
  ATerm c_104 (ATerm t)
  {
    ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL;
    z_103 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_103;
      }
    else
      {
        ATerm u_49 = NULL,x_49 = NULL,y_49 = NULL,q_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_104 = ATgetFirst((ATermList) t);
            b_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_103);
        u_49 = t;
        t = a_104;
        t = h_85(t);
        x_49 = t;
        t = b_104;
        t = c_104(t);
        y_49 = t;
        t = (ATerm) ATinsert(CheckATermList(y_49), x_49);
        q_30 = t;
        t = SSLsetAnnotations(q_30, u_49);
      }
    return(t);
  }
  t = c_104(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_104 = NULL;
      n_104 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_104;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_45 = ATgetFirst((ATermList) t);
              ATerm s_45 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_104;
        }
      ;
      LocalPopChoice(o_45);
    }
  else
    {
      t = n_45;
      {
        ATerm n_106 (ATerm t)
        {
          ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL;
          l_106 = t;
          if(match_cons(t, sym_iter_1))
            {
              m_106 = ATgetArgument(t, 0);
              {
                ATerm m_50 = NULL,s_30 = NULL;
                t = SSLgetAnnotations(l_106);
                m_50 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, m_106);
                s_30 = t;
                t = SSLsetAnnotations(s_30, m_50);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  m_106 = ATgetArgument(t, 0);
                  k_106 = ATgetArgument(t, 1);
                  {
                    ATerm u_50 = NULL,t_30 = NULL;
                    t = SSLgetAnnotations(l_106);
                    u_50 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, m_106, k_106);
                    t_30 = t;
                    t = SSLsetAnnotations(t_30, u_50);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      m_106 = ATgetArgument(t, 0);
                      {
                        ATerm f_51 = NULL,u_30 = NULL;
                        t = SSLgetAnnotations(l_106);
                        f_51 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, m_106);
                        u_30 = t;
                        t = SSLsetAnnotations(u_30, f_51);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          m_106 = ATgetArgument(t, 0);
                          k_106 = ATgetArgument(t, 1);
                          {
                            ATerm n_51 = NULL,v_30 = NULL;
                            t = SSLgetAnnotations(l_106);
                            n_51 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_106, k_106);
                            v_30 = t;
                            t = SSLsetAnnotations(v_30, n_51);
                          }
                        }
                      else
                        {
                          ATerm w_51 = NULL,y_51 = NULL,x_30 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              m_106 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(l_106);
                          w_51 = t;
                          t = m_106;
                          {
                            ATerm a_8 (ATerm t)
                            {
                              ATerm t_45 = t;
                              int z_45 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_52 = NULL,i_52 = NULL;
                                  i_52 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      g_52 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_53 = NULL,w_30 = NULL;
                                        t = SSLgetAnnotations(i_52);
                                        v_53 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, g_52);
                                        w_30 = t;
                                        t = SSLsetAnnotations(w_30, v_53);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = i_52;
                                    }
                                  ;
                                  LocalPopChoice(z_45);
                                }
                              else
                                {
                                  t = t_45;
                                  t = n_106(t);
                                }
                              return(t);
                            }
                            t = map_1_0(a_8, t);
                            if(((y_51 != NULL) && (y_51 != t)))
                              _fail(t);
                            else
                              y_51 = t;
                            t = (ATerm) ATmakeAppl(sym_seq_1, y_51);
                            if(((x_30 != NULL) && (x_30 != t)))
                              _fail(t);
                            else
                              x_30 = t;
                            t = SSLsetAnnotations(x_30, w_51);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = n_106(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_54 = NULL,c_54 = NULL,e_54 = NULL;
  t = term_g_43;
  t = get_config_0_0(t);
  a_54 = t;
  {
    ATerm a_46 = t;
    int b_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(b_46);
      }
    else
      {
        t = a_46;
        t = (ATerm) ATinsert(ATempty, a_54);
      }
    c_54 = t;
    t = term_m_38;
    e_54 = t;
    t = SSL_printnl(e_54, c_54);
    t = a_54;
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
  ATerm x_106 = NULL,y_106 = NULL;
  t = term_c_46;
  x_106 = t;
  t = term_o_10;
  y_106 = t;
  t = term_d_46;
  t = s_8(x_106, y_106, t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_h_46;
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
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL;
  t = term_c_46;
  b_107 = t;
  t = term_o_10;
  c_107 = t;
  t = term_d_46;
  t = s_8(b_107, c_107, t);
  t = term_i_46;
  z_106 = t;
  t = term_o_10;
  a_107 = t;
  t = term_j_46;
  t = s_8(z_106, a_107, t);
  t = term_n_46;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_s_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, f_8, o_8, t);
      ;
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      t = Option_3_0(r_8, u_8, k_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,i_31 = NULL;
  i_107 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_107 = ATgetFirst((ATermList) t);
      f_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_107);
  d_107 = t;
  t = e_107;
  t = o_64(t);
  g_107 = t;
  t = f_107;
  t = p_64(t);
  h_107 = t;
  t = (ATerm) ATinsert(CheckATermList(h_107), g_107);
  i_31 = t;
  t = SSLsetAnnotations(i_31, d_107);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL,t_107 = NULL,u_107 = NULL,r_31 = NULL;
  o_107 = t;
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_46;
        t = k_102(t);
        ;
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
      }
    t = o_107;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_107 = ATgetFirst((ATermList) t);
        r_107 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_107);
    p_107 = t;
    t = term_g_43;
    u_107 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_43, q_107);
    t = s_8(u_107, q_107, t);
    t = r_107;
    {
      ATerm e_108 (ATerm t)
      {
        ATerm a_47 = t;
        int b_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_47 = t;
            int d_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_107 = NULL;
                x_107 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_107;
                ;
                LocalPopChoice(d_47);
              }
            else
              {
                t = c_47;
                t = k_102(t);
                t = Cons_2_0(_id, e_108, t);
              }
            ;
            LocalPopChoice(b_47);
          }
        else
          {
            t = a_47;
            {
              ATerm a_108 = NULL,b_108 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_108 = ATgetFirst((ATermList) t);
                  b_108 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_108), (ATerm) ATmakeAppl(sym_Undefined_1, a_108));
            }
          }
        return(t);
      }
      t = e_108(t);
      if(((t_107 != NULL) && (t_107 != t)))
        _fail(t);
      else
        t_107 = t;
      t = (ATerm) ATinsert(CheckATermList(t_107), (ATerm) ATmakeAppl(sym_Program_1, q_107));
      if(((r_31 != NULL) && (r_31 != t)))
        _fail(t);
      else
        r_31 = t;
      t = SSLsetAnnotations(r_31, p_107);
    }
  }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm q_108 = NULL;
  q_108 = t;
  if(match_string(t, "--help"))
    {
      t = q_108;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_108;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_108;
        }
    }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL;
  t = term_d_44;
  r_108 = t;
  t = term_o_10;
  s_108 = t;
  t = term_e_47;
  t = s_8(r_108, s_108, t);
  t = term_g_47;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_h_47;
  return(t);
}
ATerm r_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
  l_108 = t;
  t = term_k_42;
  n_108 = t;
  t = term_r_42;
  o_108 = t;
  t = (ATerm) ATempty;
  p_108 = t;
  t = SSL_table_put(n_108, o_108, p_108);
  t = l_108;
  {
    ATerm m_9 (ATerm t)
    {
      ATerm j_47 = t;
      int k_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_102(t);
          ;
          LocalPopChoice(k_47);
        }
      else
        {
          t = j_47;
          {
            ATerm l_47 = t;
            int m_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_9, p_9, q_9, t);
                ;
                LocalPopChoice(m_47);
              }
            else
              {
                t = l_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_9, t);
    {
      ATerm n_47 = t;
      int o_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_108 = NULL;
          z_108 = t;
          {
            ATerm p_47 = t;
            int r_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_54 = NULL;
                t = z_108;
                {
                  ATerm s_47 = t;
                  int u_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_44;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_47);
                    }
                  else
                    {
                      t = s_47;
                      t = fetch_1_0(r_9, t);
                    }
                  t = z_108;
                  t = default_system_usage_0_0(t);
                  t = term_h_41;
                  h_54 = t;
                  t = SSL_exit(h_54);
                }
                ;
                LocalPopChoice(r_47);
              }
            else
              {
                t = p_47;
                {
                  ATerm n_54 = NULL;
                  t = term_c_46;
                  t = get_config_0_0(t);
                  t = z_108;
                  t = default_system_about_0_0(t);
                  t = term_h_41;
                  n_54 = t;
                  t = SSL_exit(n_54);
                }
              }
          }
          ;
          LocalPopChoice(o_47);
        }
      else
        {
          t = n_47;
          {
            ATerm v_47 = t;
            int w_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL;
                ATerm y_9 (ATerm t)
                {
                  ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL,u_31 = NULL;
                  f_109 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_109 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_109);
                  d_109 = t;
                  t = e_109;
                  if(((j_108 != NULL) && (j_108 != t)))
                    _fail(t);
                  else
                    j_108 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_109);
                  u_31 = t;
                  t = SSLsetAnnotations(u_31, d_109);
                  return(t);
                }
                t = fetch_1_0(y_9, t);
                t = term_p_10;
                if(((b_109 != NULL) && (b_109 != t)))
                  _fail(t);
                else
                  b_109 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_108)), term_x_47);
                if(((c_109 != NULL) && (c_109 != t)))
                  _fail(t);
                else
                  c_109 = t;
                t = SSL_printnl(b_109, c_109);
                t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_108)), term_x_47));
                t = default_system_usage_0_0(t);
                t = term_x_10;
                if(((a_109 != NULL) && (a_109 != t)))
                  _fail(t);
                else
                  a_109 = t;
                t = SSL_exit(a_109);
                ;
                LocalPopChoice(w_47);
              }
            else
              {
                t = v_47;
              }
          }
        }
      if(((k_108 != NULL) && (k_108 != t)))
        _fail(t);
      else
        k_108 = t;
      t = term_k_42;
      if(((m_108 != NULL) && (m_108 != t)))
        _fail(t);
      else
        m_108 = t;
      t = SSL_table_destroy(m_108);
      t = k_108;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL;
  t = parse_options_1_0(e_106, t);
  k_109 = t;
  t = term_y_47;
  n_109 = t;
  t = SSL_table_create(n_109);
  t = term_y_47;
  l_109 = t;
  t = term_z_47;
  m_109 = t;
  t = SSL_table_put(l_109, m_109, k_109);
  t = k_109;
  t = g_106(t);
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_106, t);
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
              t = h_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_48);
            }
          else
            {
              t = c_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = if_verbose2_1_0(m_10, t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL;
  t = term_e_48;
  o_109 = t;
  t = term_o_10;
  p_109 = t;
  t = term_f_48;
  t = s_8(o_109, p_109, t);
  t = term_i_48;
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_j_48;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm q_109 = NULL,r_109 = NULL,s_109 = NULL,t_109 = NULL;
  q_109 = t;
  t = term_g_43;
  t = get_config_0_0(t);
  r_109 = t;
  t = term_p_10;
  s_109 = t;
  t = (ATerm) ATinsert(ATempty, r_109);
  t_109 = t;
  t = SSL_printnl(s_109, t_109);
  t = q_109;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm d_10 (ATerm t)
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_105(t);
        ;
        LocalPopChoice(n_48);
      }
    else
      {
        t = m_48;
        {
          ATerm o_48 = t;
          int p_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(p_48);
            }
          else
            {
              t = o_48;
              {
                ATerm q_48 = t;
                int r_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_48);
                  }
                else
                  {
                    t = q_48;
                    {
                      ATerm s_48 = t;
                      int t_48 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_10, k_10, l_10, t);
                          ;
                          LocalPopChoice(t_48);
                        }
                      else
                        {
                          t = s_48;
                          {
                            ATerm u_48 = t;
                            int v_48 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_48);
                              }
                            else
                              {
                                t = u_48;
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
  ATerm h_10 (ATerm t)
  {
    ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
    v_109 = t;
    {
      ATerm w_48 = t;
      int y_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_109 != NULL) && (u_109 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_109 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_10, t);
          ;
          LocalPopChoice(y_48);
        }
      else
        {
          t = w_48;
          t = term_z_48;
          u_109 = t;
        }
      t = not_null(u_109);
      t = ReadFromFile_0_0(t);
      if(((w_109 != NULL) && (w_109 != t)))
        _fail(t);
      else
        w_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_109, w_109);
      t = apply_strategy_1_0(n_105, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(d_10, p_105, g_10, h_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(implode_0_0, implode_options_0_0, default_usage_0_0, t);
  return(t);
}

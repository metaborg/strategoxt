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
Symbol sym_Concrete_0;
Symbol sym_ToTerm_1;
Symbol sym_ToStrategy_1;
Symbol sym_ToBuild_1;
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
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
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
Symbol sym_attrs_1;
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
  sym_Concrete_0 = ATmakeSymbol("Concrete", 0, ATfalse);
  ATprotectSymbol(sym_Concrete_0);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
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
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
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
ATerm term_v_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_p_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_i_53;
ATerm term_v_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_l_50;
ATerm term_f_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_w_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_w_47;
ATerm term_t_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_c_47;
ATerm term_a_47;
ATerm term_w_46;
ATerm term_m_46;
ATerm term_f_46;
ATerm term_t_45;
ATerm term_q_45;
ATerm term_v_44;
ATerm term_s_44;
ATerm term_n_44;
ATerm term_x_39;
ATerm term_p_38;
ATerm term_e_38;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_h_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_k_36;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_n_24;
ATerm term_k_23;
ATerm term_m_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_f_21;
ATerm term_x_18;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_s_14;
ATerm term_i_13;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
void init_constant_terms (void)
{
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Concrete_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym__2, term_w_46, term_f_47);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_47);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(sym__2, term_o_47, term_z_10);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym__2, term_f_48, term_g_48);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym__2, term_f_51, term_z_10);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym__2, term_k_51, term_z_10);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym__2, term_r_49, term_z_10);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym__2, term_c_55, term_z_10);
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
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
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
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
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm implode_options_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm h_3 (ATerm);
ATerm w_3 (ATerm);
ATerm annotation_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm appl_2_0 (ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm skip_concrete_1_0 (ATerm g_79 (ATerm), ATerm);
ATerm c_1 (ATerm o_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm is_conc_0_0 (ATerm);
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm x_7 (ATerm n_78 (ATerm), ATerm v_19, ATerm u_19, ATerm);
ATerm is_ins_0_0 (ATerm);
ATerm is_nil_0_0 (ATerm);
ATerm ReplCons_1_0 (ATerm u_78 (ATerm), ATerm);
ATerm OptList_0_0 (ATerm);
ATerm is_layout_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm implodeAsfix_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm Tuple_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm CTC2_0_0 (ATerm);
ATerm CTC1_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm conc_to_cons_0_0 (ATerm);
ATerm Constr1_0_0 (ATerm);
ATerm b_8 (ATerm g_19, ATerm f_19, ATerm);
ATerm ConstrNil_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm replace_appl_0_0 (ATerm);
ATerm FlatAlt_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm injective_alt_0_0 (ATerm);
ATerm i_72 (ATerm s_62, ATerm w_62, ATerm z_62, ATerm d_63, ATerm);
ATerm j_72 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm z_63, ATerm);
ATerm k_72 (ATerm u_65, ATerm v_65, ATerm w_65, ATerm x_65, ATerm);
ATerm l_72 (ATerm s_70, ATerm t_70, ATerm u_70, ATerm b_71, ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm injection_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm filter_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm o_78 (ATerm g_75, ATerm);
ATerm p_78 (ATerm p_76, ATerm);
ATerm FlatList_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm PpSym_0_0 (ATerm);
ATerm u_87 (ATerm h_86, ATerm i_86, ATerm j_86, ATerm);
ATerm v_87 (ATerm u_86, ATerm x_86, ATerm y_86, ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm repeat_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm is_layout_p__0_0 (ATerm);
ATerm flat_layout_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm yield_0_0 (ATerm);
ATerm implode_lexical_0_0 (ATerm);
ATerm downup2_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm t_6 (ATerm);
ATerm w_6 (ATerm);
ATerm implode_0_0 (ATerm);
ATerm m_8 (ATerm i_42, ATerm j_42, ATerm);
ATerm n_8 (ATerm x_46, ATerm y_46, ATerm);
ATerm p_8 (ATerm x_99 (ATerm), ATerm n_483, ATerm b_47, ATerm);
ATerm o_8 (ATerm t_46, ATerm u_46, ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm x_104 (ATerm r_104, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_8 (ATerm z_46, ATerm);
ATerm r_8 (ATerm k_42, ATerm l_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_106 (ATerm h_105, ATerm);
ATerm j_106 (ATerm l_105, ATerm m_105, ATerm n_105, ATerm);
ATerm k_106 (ATerm v_105, ATerm w_105, ATerm x_105, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm b_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm l_8 (ATerm y_36, ATerm z_36, ATerm);
ATerm debug_1_0 (ATerm v_99 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_101 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm y_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_8 (ATerm a_48, ATerm b_48, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm z_7 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_8 (ATerm i_50, ATerm j_50, ATerm h_50, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm j_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_8 (ATerm i_39, ATerm j_39, ATerm);
ATerm foldr_2_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm e_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_9 (ATerm);
ATerm need_help_1_0 (ATerm v_107 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm u_8 (ATerm z_51, ATerm a_52, ATerm);
ATerm i_9 (ATerm);
ATerm l_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm map_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_104 (ATerm), ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm c_10 (ATerm);
ATerm f_10 (ATerm);
ATerm parse_options_1_0 (ATerm c_104 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm);
ATerm p_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm iowrap_3_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm);
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
  t = term_z_10;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_a_11;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_11), b_0), term_b_11);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_e_11;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm s_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm h_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm k_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm p_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_z_11;
  return(t);
}
ATerm v_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_a_12;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_d_12;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--concrete", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_0, z_0, a_1, t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm m_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_1, f_1, g_1, t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = m_13;
            {
              ATerm p_13 = t;
              int r_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_1, i_1, j_1, t);
                  ;
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
                        t = Option_3_0(k_1, n_1, o_1, t);
                        ;
                        LocalPopChoice(t_13);
                      }
                    else
                      {
                        t = s_13;
                        {
                          ATerm u_13 = t;
                          int v_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(p_1, q_1, t_1, t);
                              ;
                              LocalPopChoice(v_13);
                            }
                          else
                            {
                              t = u_13;
                              {
                                ATerm w_13 = t;
                                int x_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(v_1, w_1, y_1, t);
                                    ;
                                    LocalPopChoice(x_13);
                                  }
                                else
                                  {
                                    t = w_13;
                                    {
                                      ATerm y_13 = t;
                                      int d_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(z_1, b_2, d_2, t);
                                          ;
                                          LocalPopChoice(d_14);
                                        }
                                      else
                                        {
                                          t = y_13;
                                          {
                                            ATerm e_14 = t;
                                            int f_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(e_2, j_2, k_2, t);
                                                ;
                                                LocalPopChoice(f_14);
                                              }
                                            else
                                              {
                                                t = e_14;
                                                {
                                                  ATerm g_14 = t;
                                                  int l_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(l_2, n_2, o_2, t);
                                                      ;
                                                      LocalPopChoice(l_14);
                                                    }
                                                  else
                                                    {
                                                      t = g_14;
                                                      {
                                                        ATerm m_14 = t;
                                                        int n_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(p_2, q_2, r_2, t);
                                                            ;
                                                            LocalPopChoice(n_14);
                                                          }
                                                        else
                                                          {
                                                            t = m_14;
                                                            t = Option_3_0(s_2, t_2, v_2, t);
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
ATerm x_2 (ATerm t)
{
  ATerm n_21 = NULL,d_22 = NULL,h_22 = NULL,i_0 = NULL;
  h_22 = t;
  if(match_cons(t, sym_cons_1))
    {
      d_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_22);
  n_21 = t;
  t = d_22;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, d_22);
  i_0 = t;
  t = SSLsetAnnotations(i_0, n_21);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm p_14 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_14;
    }
  {
    ATerm r_14 = t;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL,k_22 = NULL,o_22 = NULL,t_22 = NULL,a_23 = NULL,c_23 = NULL,g_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,d_1 = NULL,b_1 = NULL;
        o_23 = t;
        if(match_cons(t, sym_appl_2))
          {
            k_22 = ATgetArgument(t, 0);
            o_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_23);
        i_22 = t;
        t = k_22;
        if(match_cons(t, sym_prod_3))
          {
            a_23 = ATgetArgument(t, 0);
            c_23 = ATgetArgument(t, 1);
            g_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_22);
        t_22 = t;
        t = c_23;
        t = oncetd_1_0(w_3, t);
        m_23 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, a_23, m_23, g_23);
        b_1 = t;
        t = SSLsetAnnotations(b_1, t_22);
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, n_23, o_22);
        d_1 = t;
        t = SSLsetAnnotations(d_1, i_22);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_14;
      }
  }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm p_23 = NULL,v_23 = NULL,w_23 = NULL,x_0 = NULL;
  w_23 = t;
  if(match_cons(t, sym_lex_1))
    {
      v_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_23);
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, v_23);
  x_0 = t;
  t = SSLsetAnnotations(x_0, p_23);
  return(t);
}
ATerm annotation_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,s_18 = NULL,t_18 = NULL,a_19 = NULL,b_19 = NULL,e_19 = NULL,j_19 = NULL,q_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,k_20 = NULL,v_20 = NULL,w_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,l_21 = NULL,m_21 = NULL,w_0 = NULL,v_0 = NULL,l_0 = NULL;
  m_21 = t;
  if(match_cons(t, sym_appl_2))
    {
      q_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_21);
  j_19 = t;
  t = q_19;
  if(match_cons(t, sym_prod_3))
    {
      c_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
      v_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  b_20 = t;
  t = v_20;
  if(match_cons(t, sym_attrs_1))
    {
      b_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_20);
  a_21 = t;
  t = b_21;
  t = oncetd_1_0(x_2, t);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, c_21);
  l_0 = t;
  t = SSLsetAnnotations(l_0, a_21);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, c_20, k_20, l_21);
  v_0 = t;
  t = SSLsetAnnotations(v_0, b_20);
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, w_20, a_20);
  w_0 = t;
  t = SSLsetAnnotations(w_0, j_19);
  t = a_20;
  t = filter_1_0(h_3, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_18 = ATgetFirst((ATermList) t);
      s_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_18;
  t = f_79(t);
  t_18 = t;
  t = s_18;
  t = e_79(t);
  a_19 = t;
  t = term_s_14;
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(a_19), t_18);
  e_19 = t;
  t = SSL_mkterm(b_19, e_19);
  return(t);
}
ATerm alltd_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm y_23 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_82(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = SRTS_all(y_23, t);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm appl_2_0 (ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,w_2 = NULL;
  e_24 = t;
  if(match_cons(t, sym_appl_2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  z_23 = t;
  t = a_24;
  t = g_72(t);
  c_24 = t;
  t = b_24;
  t = h_72(t);
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, c_24, d_24);
  w_2 = t;
  t = SSLsetAnnotations(w_2, z_23);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm e_26 = NULL,j_26 = NULL,l_26 = NULL,p_26 = NULL,s_26 = NULL,x_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,g_3 = NULL,f_3 = NULL;
  b_27 = t;
  if(match_cons(t, sym_prod_3))
    {
      j_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
      p_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_27);
  e_26 = t;
  t = l_26;
  if(match_cons(t, sym_cf_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  s_26 = t;
  t = x_26;
  t = oncetd_1_0(b_4, t);
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, z_26);
  f_3 = t;
  t = SSLsetAnnotations(f_3, s_26);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, j_26, a_27, p_26);
  g_3 = t;
  t = SSLsetAnnotations(g_3, e_26);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,e_3 = NULL;
  e_27 = t;
  if(match_cons(t, sym_sort_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_27);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, d_27);
  e_3 = t;
  t = SSLsetAnnotations(e_3, c_27);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,j_3 = NULL;
  v_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_11);
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, u_11);
  j_3 = t;
  t = SSLsetAnnotations(j_3, t_11);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,m_3 = NULL;
  r_12 = t;
  if(match_cons(t, sym_cons_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_12);
  p_12 = t;
  t = q_12;
  if(match_string(t, "FromTerm"))
    {
      t = q_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("FromApp", 0, ATtrue)))
        _fail(t);
      t = q_12;
    }
  t = (ATerm) ATmakeAppl(sym_cons_1, q_12);
  m_3 = t;
  t = SSLsetAnnotations(m_3, p_12);
  return(t);
}
ATerm skip_concrete_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,i_3 = NULL,d_3 = NULL,c_3 = NULL,z_2 = NULL,y_2 = NULL;
  ATerm b_30 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      ATerm w_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_29 = NULL,y_29 = NULL,a_30 = NULL;
          w_29 = t;
          if(match_cons(t, sym_appl_2))
            {
              y_29 = ATgetArgument(t, 0);
              a_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm y_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_10 = NULL,c_11 = NULL,g_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,r_11 = NULL,l_3 = NULL,k_3 = NULL;
                t = SSLgetAnnotations(w_29);
                w_10 = t;
                t = y_29;
                if(match_cons(t, sym_prod_3))
                  {
                    g_11 = ATgetArgument(t, 0);
                    m_11 = ATgetArgument(t, 1);
                    n_11 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_29);
                c_11 = t;
                t = g_11;
                t = SRTS_one(h_4, t);
                o_11 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, o_11, m_11, n_11);
                k_3 = t;
                t = SSLsetAnnotations(k_3, c_11);
                r_11 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, r_11, a_30);
                l_3 = t;
                t = SSLsetAnnotations(l_3, w_10);
                t = g_79(t);
                ;
                LocalPopChoice(z_14);
              }
            else
              {
                t = y_14;
                {
                  ATerm c_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,c_6 = NULL,f_4 = NULL,e_4 = NULL;
                  t = SSLgetAnnotations(w_29);
                  c_12 = t;
                  t = y_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      g_12 = ATgetArgument(t, 0);
                      h_12 = ATgetArgument(t, 1);
                      i_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_29);
                  f_12 = t;
                  t = i_12;
                  if(match_cons(t, sym_attrs_1))
                    {
                      l_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_12);
                  k_12 = t;
                  t = l_12;
                  t = oncetd_1_0(i_4, t);
                  m_12 = t;
                  t = (ATerm) ATmakeAppl(sym_attrs_1, m_12);
                  e_4 = t;
                  t = SSLsetAnnotations(e_4, k_12);
                  n_12 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, g_12, h_12, n_12);
                  f_4 = t;
                  t = SSLsetAnnotations(f_4, f_12);
                  j_12 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, j_12, a_30);
                  c_6 = t;
                  t = SSLsetAnnotations(c_6, c_12);
                  t = g_79(t);
                }
              }
          }
          ;
          LocalPopChoice(x_14);
        }
      else
        {
          t = w_14;
          t = annotation_2_0(g_79, b_30, t);
        }
      return(t);
    }
    t = alltd_1_0(g_4, t);
    return(t);
  }
  n_25 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_25);
  s_24 = t;
  t = t_24;
  if(match_cons(t, sym_prod_3))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
      z_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_24);
  w_24 = t;
  t = y_24;
  if(match_cons(t, sym_cf_1))
    {
      i_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_24);
  h_25 = t;
  t = i_25;
  if(match_cons(t, sym_sort_1))
    {
      l_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_25);
  k_25 = t;
  t = l_25;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, l_25);
  y_2 = t;
  t = SSLsetAnnotations(y_2, k_25);
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, m_25);
  z_2 = t;
  t = SSLsetAnnotations(z_2, h_25);
  j_25 = t;
  t = z_24;
  if(match_cons(t, sym_attrs_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_24);
  b_25 = t;
  t = e_25;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm o_25 = NULL,s_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,b_3 = NULL,a_3 = NULL;
      d_26 = t;
      if(match_cons(t, sym_term_1))
        {
          s_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_26);
      o_25 = t;
      t = s_25;
      if(match_cons(t, sym_cons_1))
        {
          b_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_25);
      a_26 = t;
      t = b_26;
      if(((q_24 != NULL) && (q_24 != t)))
        _fail(t);
      else
        q_24 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, b_26);
      a_3 = t;
      t = SSLsetAnnotations(a_3, a_26);
      c_26 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, c_26);
      b_3 = t;
      t = SSLsetAnnotations(b_3, o_25);
      return(t);
    }
    t = SRTS_one(x_3, t);
    f_25 = t;
    t = (ATerm) ATmakeAppl(sym_attrs_1, f_25);
    c_3 = t;
    t = SSLsetAnnotations(c_3, b_25);
    g_25 = t;
    t = (ATerm) ATmakeAppl(sym_prod_3, x_24, j_25, g_25);
    d_3 = t;
    t = SSLsetAnnotations(d_3, w_24);
    a_25 = t;
    t = u_24;
    {
      ATerm y_3 (ATerm t)
      {
        t = appl_2_0(z_3, _id, t);
        if(((r_24 != NULL) && (r_24 != t)))
          _fail(t);
        else
          r_24 = t;
        return(t);
      }
      t = oncetd_1_0(y_3, t);
      v_24 = t;
      t = (ATerm) ATmakeAppl(sym_appl_2, a_25, v_24);
      i_3 = t;
      t = SSLsetAnnotations(i_3, s_24);
      t = not_null(q_24);
      if(match_string(t, "ToTerm"))
        {
          t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(r_24));
        }
      else
        {
          if(match_string(t, "ToStrategy"))
            {
              t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(r_24));
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(r_24));
            }
        }
      t = b_30(t);
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
      ATerm a_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_15) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm b_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              t = u_0;
              return(t);
            }
            t = t_0;
            t = at_end_1_0(j_4, t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = b_15;
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
  ATerm r_1 = NULL,s_1 = NULL,u_1 = NULL,x_1 = NULL,a_2 = NULL,c_2 = NULL,f_2 = NULL,g_2 = NULL,i_2 = NULL;
  r_1 = t;
  if(match_cons(t, sym_prod_3))
    {
      s_1 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
      {
        ATerm e_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_15 = ATgetFirst((ATermList) t);
      u_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_15 = ATgetFirst((ATermList) t);
      x_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_1;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_15 = ATgetFirst((ATermList) t);
            a_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_15);
        t = a_2;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_2;
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
                  t = r_1;
                }
              else
                {
                  t = k_15;
                  if(match_cons(t, sym_cf_1))
                    {
                      i_2 = ATgetArgument(t, 0);
                      t = i_2;
                      {
                        ATerm p_15 = t;
                        int q_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm s_15 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(q_15);
                            t = r_1;
                          }
                        else
                          {
                            t = p_15;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm u_15 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_1;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm v_15 = ATgetArgument(t, 0);
                          ATerm w_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_1;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_15 = ATgetFirst((ATermList) t);
                c_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_2;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_15 = ATgetFirst((ATermList) t);
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
                i_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_2;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm a_16 = ATgetArgument(t, 0);
                ATerm c_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_1;
          }
      }
    else
      {
        t = h_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm d_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_1;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t)
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
        ATerm a_4 = NULL,c_4 = NULL,d_4 = NULL;
        t = o_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_3;
        t = is_conc_0_0(t);
        t = s_3;
        t = r_0(t);
        a_4 = t;
        t = u_3;
        t = r_0(t);
        c_4 = t;
        t = n_3;
        t = r_0(t);
        d_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATinsert(CheckATermList(d_4), c_4));
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
      t = r_0(t);
      l_1 = t;
      t = u_3;
      t = r_0(t);
      m_1 = t;
      {
        ATerm h_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 = NULL,m_2 = NULL;
            t = m_1;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = m_1;
              }
            else
              {
                ATerm u_2 = NULL,w_7 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_2 = ATgetFirst((ATermList) t);
                    m_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_1);
                u_2 = t;
                t = (ATerm) ATinsert(CheckATermList(m_2), h_2);
                w_7 = t;
                t = SSLsetAnnotations(w_7, u_2);
              }
            t = (ATerm) ATmakeAppl(sym__2, l_1, m_1);
            t = conc_0_0(t);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = h_16;
            t = (ATerm) ATmakeAppl(sym_Conc_2, l_1, m_1);
          }
      }
    }
  return(t);
}
ATerm x_7 (ATerm n_78 (ATerm), ATerm v_19, ATerm u_19, ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,u_6 = NULL,v_6 = NULL;
  t = v_19;
  if(match_cons(t, sym_prod_3))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      ATerm q_16 = ATgetArgument(t, 1);
      u_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_6;
  {
    ATerm k_4 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((v_6 != NULL) && (v_6 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(k_4, t);
    t = not_null(v_6);
    if(match_string(t, "sorts"))
      {
        t = term_x_16;
      }
    else
      {
        if(match_string(t, "imports"))
          {
            t = term_y_16;
          }
        else
          {
            if(match_string(t, "id"))
              {
                t = term_a_17;
              }
            else
              {
                if(match_string(t, "hiddens"))
                  {
                    t = term_b_17;
                  }
                else
                  {
                    if(match_string(t, "exports"))
                      {
                        t = term_c_17;
                      }
                    else
                      {
                        if(match_string(t, "module"))
                          {
                            t = term_e_17;
                          }
                        else
                          {
                            t = not_null(v_6);
                          }
                      }
                  }
              }
          }
      }
    r_6 = t;
    t = u_19;
    t = map_1_0(n_78, t);
    s_6 = t;
    t = SSL_mkterm(r_6, s_6);
  }
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm x_4 = NULL,c_5 = NULL,d_5 = NULL,j_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
  x_4 = t;
  if(match_cons(t, sym_prod_3))
    {
      c_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      {
        ATerm f_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_5 = ATgetFirst((ATermList) t);
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
      o_5 = ATgetArgument(t, 0);
      t = o_5;
      if((d_5 != t))
        {
          _fail(t);
        }
      t = x_4;
    }
  else
    {
      ATerm h_17 = t;
      int i_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              o_5 = ATgetArgument(t, 0);
              {
                ATerm o_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(i_17);
          t = o_5;
          if((d_5 != t))
            {
              _fail(t);
            }
          t = x_4;
        }
      else
        {
          t = h_17;
          if(match_cons(t, sym_cf_1))
            {
              o_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_5;
          if(match_cons(t, sym_cf_1))
            {
              j_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_5;
          if(match_cons(t, sym_iter_1))
            {
              p_5 = ATgetArgument(t, 0);
              t = p_5;
              if((j_5 != t))
                {
                  _fail(t);
                }
              t = x_4;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  p_5 = ATgetArgument(t, 0);
                  {
                    ATerm p_17 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = p_5;
              if((j_5 != t))
                {
                  _fail(t);
                }
              t = x_4;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  f_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      g_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
      {
        ATerm q_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = g_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = h_6;
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm t_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_17);
        t = f_6;
      }
    else
      {
        t = r_17;
        {
          ATerm u_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm x_17 = ATgetArgument(t, 0);
                  ATerm z_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(w_17);
              t = f_6;
            }
          else
            {
              t = u_17;
              if(match_cons(t, sym_cf_1))
                {
                  i_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_6;
              {
                ATerm a_18 = t;
                int d_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm e_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_18);
                    t = f_6;
                  }
                else
                  {
                    t = a_18;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm f_18 = ATgetArgument(t, 0);
                        ATerm g_18 = ATgetArgument(t, 1);
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
ATerm ReplCons_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_10 = NULL,l_10 = NULL,o_10 = NULL,r_10 = NULL,s_10 = NULL;
      k_10 = t;
      if(match_cons(t, sym_appl_2))
        {
          l_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm j_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_10;
              t = x_7(u_78, l_10, o_10, t);
              ;
              LocalPopChoice(l_18);
            }
          else
            {
              t = j_18;
              {
                ATerm n_18 = t;
                int o_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = l_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    ;
                    LocalPopChoice(o_18);
                  }
                else
                  {
                    t = n_18;
                    {
                      ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
                      t = l_10;
                      if(match_cons(t, sym_prod_3))
                        {
                          m_4 = ATgetArgument(t, 0);
                          n_4 = ATgetArgument(t, 1);
                          {
                            ATerm p_18 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = m_4;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = n_4;
                      {
                        ATerm q_18 = t;
                        int u_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm v_18 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(u_18);
                            t = l_10;
                          }
                        else
                          {
                            t = q_18;
                            if(match_cons(t, sym_cf_1))
                              {
                                o_4 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = o_4;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm w_18 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_10;
                          }
                        t = term_x_18;
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
              r_10 = ATgetFirst((ATermList) t);
              s_10 = (ATerm) ATgetNext((ATermList) t);
              t = s_10;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm y_18 = t;
                  int z_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_10;
                      t = x_7(u_78, l_10, o_10, t);
                      ;
                      LocalPopChoice(z_18);
                    }
                  else
                    {
                      t = y_18;
                      {
                        ATerm d_19 = t;
                        int i_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_11 = NULL;
                            t = l_10;
                            t = is_ins_0_0(t);
                            t = r_10;
                            t = u_78(t);
                            h_11 = t;
                            t = (ATerm) ATinsert(ATempty, h_11);
                            ;
                            LocalPopChoice(i_19);
                          }
                        else
                          {
                            t = d_19;
                            {
                              ATerm a_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL;
                              t = l_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  e_5 = ATgetArgument(t, 0);
                                  i_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_19 = ATgetArgument(t, 2);
                                  }
                                }
                              else
                                _fail(t);
                              t = e_5;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  f_5 = ATgetFirst((ATermList) t);
                                  h_5 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = h_5;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = i_5;
                              if(match_cons(t, sym_opt_1))
                                {
                                  k_5 = ATgetArgument(t, 0);
                                  t = k_5;
                                  if((f_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = l_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      k_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_5;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      g_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_5;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      l_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_5;
                                  if((g_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = l_10;
                                }
                              t = r_10;
                              t = u_78(t);
                              a_5 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, a_5);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = k_10;
                  t = x_7(u_78, l_10, o_10, t);
                }
            }
          else
            {
              t = k_10;
              t = x_7(u_78, l_10, o_10, t);
            }
        }
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = ReplConsConc_1_0(u_78, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      d_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_13;
  if(match_cons(t, sym_prod_3))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
      {
        ATerm l_19 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_12 = ATgetFirst((ATermList) t);
      z_12 = (ATerm) ATgetNext((ATermList) t);
      t = z_12;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_13;
      if(match_cons(t, sym_opt_1))
        {
          g_13 = ATgetArgument(t, 0);
          t = j_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_13 = ATgetFirst((ATermList) t);
              b_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_13;
          if((x_12 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = a_13;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              g_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_12;
          if(match_cons(t, sym_cf_1))
            {
              y_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_13;
          if(match_cons(t, sym_opt_1))
            {
              h_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_13 = ATgetFirst((ATermList) t);
              b_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_13;
          if((y_12 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = a_13;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_13;
      if(match_cons(t, sym_opt_1))
        {
          g_13 = ATgetArgument(t, 0);
          t = j_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              g_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_13;
          if(match_cons(t, sym_opt_1))
            {
              h_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm is_layout_0_0 (ATerm t)
{
  ATerm w_16 = NULL,z_16 = NULL,d_17 = NULL;
  z_16 = t;
  if(match_cons(t, sym_appl_2))
    {
      d_17 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
      {
        ATerm f_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,z_8 = NULL,y_8 = NULL,a_8 = NULL;
        t = SSLgetAnnotations(z_16);
        f_7 = t;
        t = d_17;
        if(match_cons(t, sym_prod_3))
          {
            j_7 = ATgetArgument(t, 0);
            k_7 = ATgetArgument(t, 1);
            l_7 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_17);
        i_7 = t;
        t = k_7;
        if(match_cons(t, sym_cf_1))
          {
            a_8 = ATgetArgument(t, 0);
            {
              ATerm i_8 = NULL,k_8 = NULL,w_8 = NULL,q_9 = NULL,d_8 = NULL,c_8 = NULL;
              t = SSLgetAnnotations(k_7);
              i_8 = t;
              t = a_8;
              if(match_cons(t, sym_opt_1))
                {
                  w_8 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_8);
              k_8 = t;
              t = w_8;
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_opt_1, w_8);
              c_8 = t;
              t = SSLsetAnnotations(c_8, k_8);
              q_9 = t;
              t = (ATerm) ATmakeAppl(sym_cf_1, q_9);
              d_8 = t;
              t = SSLsetAnnotations(d_8, i_8);
            }
          }
        else
          {
            ATerm v_9 = NULL,t_8 = NULL;
            if(match_cons(t, sym_lit_1))
              {
                a_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_7);
            v_9 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, a_8);
            t_8 = t;
            t = SSLsetAnnotations(t_8, v_9);
          }
        m_7 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, j_7, m_7, l_7);
        y_8 = t;
        t = SSLsetAnnotations(y_8, i_7);
        n_7 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, n_7, w_16);
        z_8 = t;
        t = SSLsetAnnotations(z_8, f_7);
      }
    }
  else
    {
      ATerm b_10 = NULL,d_10 = NULL,g_10 = NULL,i_10 = NULL,b_9 = NULL,a_9 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          d_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_16);
      b_10 = t;
      t = d_17;
      if(match_cons(t, sym_opt_1))
        {
          g_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_17);
      d_10 = t;
      t = g_10;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, g_10);
      a_9 = t;
      t = SSLsetAnnotations(a_9, d_10);
      i_10 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, i_10);
      b_9 = t;
      t = SSLsetAnnotations(b_9, b_10);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm m_19 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_19;
    }
  return(t);
}
ATerm implodeAsfix_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm t_30 = NULL;
  ATerm s_32 (ATerm t)
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
              n_32 = t;
              if(match_cons(t, sym_appl_2))
                {
                  o_32 = ATgetArgument(t, 0);
                  m_32 = ATgetArgument(t, 1);
                  {
                    ATerm x_19 = t;
                    int y_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_32;
                        t = i_79(t);
                        t = n_32;
                        t = skip_concrete_1_0(s_32, t);
                        ;
                        LocalPopChoice(y_19);
                      }
                    else
                      {
                        t = x_19;
                        {
                          ATerm n_13 = NULL,q_13 = NULL,j_9 = NULL;
                          t = SSLgetAnnotations(n_32);
                          n_13 = t;
                          t = m_32;
                          t = filter_1_0(l_4, t);
                          q_13 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, o_32, q_13);
                          j_9 = t;
                          t = SSLsetAnnotations(j_9, n_13);
                          {
                            ATerm z_19 = t;
                            int d_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = s_32(t);
                                ;
                                LocalPopChoice(d_20);
                              }
                            else
                              {
                                t = z_19;
                                {
                                  ATerm e_20 = t;
                                  int g_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ReplCons_1_0(s_32, t);
                                      ;
                                      LocalPopChoice(g_20);
                                    }
                                  else
                                    {
                                      t = e_20;
                                      {
                                        ATerm h_20 = t;
                                        int i_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                z_13 = ATgetArgument(t, 0);
                                                a_14 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = a_14;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                b_14 = ATgetFirst((ATermList) t);
                                                c_14 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = c_14;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = z_13;
                                            t = injection_0_0(t);
                                            t = b_14;
                                            t = s_32(t);
                                            ;
                                            LocalPopChoice(i_20);
                                          }
                                        else
                                          {
                                            t = h_20;
                                            {
                                              ATerm l_20 = t;
                                              int p_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Tuple_0_0(t);
                                                  t = s_32(t);
                                                  ;
                                                  LocalPopChoice(p_20);
                                                }
                                              else
                                                {
                                                  t = l_20;
                                                  t = FlatAlt_0_0(t);
                                                  t = s_32(t);
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
                      o_32 = ATgetArgument(t, 0);
                      {
                        ATerm q_20 = t;
                        int r_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_32;
                            t = i_79(t);
                            t = n_32;
                            t = skip_concrete_1_0(s_32, t);
                            ;
                            LocalPopChoice(r_20);
                          }
                        else
                          {
                            t = q_20;
                            {
                              ATerm q_14 = NULL,v_14 = NULL,k_9 = NULL;
                              t = SSLgetAnnotations(n_32);
                              q_14 = t;
                              t = o_32;
                              t = map_1_0(s_32, t);
                              v_14 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, v_14);
                              k_9 = t;
                              t = SSLsetAnnotations(k_9, q_14);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = n_32;
                      t = i_79(t);
                      t = n_32;
                      t = skip_concrete_1_0(s_32, t);
                    }
                }
              ;
              LocalPopChoice(s_19);
            }
          else
            {
              t = r_19;
              t = SRTS_all(s_32, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      t_30 = ATgetArgument(t, 0);
      {
        ATerm t_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_30;
  t = s_32(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,q_33 = NULL,t_33 = NULL,h_34 = NULL;
  n_33 = t;
  if(match_cons(t, sym_appl_2))
    {
      o_33 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_33;
  if(match_cons(t, sym_prod_3))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
      {
        ATerm x_20 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_33;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm d_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_20);
        {
          ATerm c_15 = NULL;
          t = term_f_21;
          c_15 = t;
          t = SSL_mkterm(c_15, h_34);
        }
      }
    else
      {
        t = y_20;
        {
          ATerm n_15 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              t_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_33;
          if(match_cons(t, sym_seq_1))
            {
              ATerm h_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_f_21;
          n_15 = t;
          t = SSL_mkterm(n_15, h_34);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    t = topdown_1_0(e_81, t);
    return(t);
  }
  t = e_81(t);
  t = SRTS_all(p_4, t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,w_34 = NULL,x_34 = NULL,a_35 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      w_34 = ATgetArgument(t, 0);
      x_34 = ATgetArgument(t, 1);
      t = w_34;
      if(match_cons(t, sym_Ins_1))
        {
          u_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_34 = ATgetFirst((ATermList) t);
          s_34 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(s_34), t_34), u_34);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              t_34 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, t_34), u_34);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, u_34);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          w_34 = ATgetArgument(t, 0);
          x_34 = ATgetArgument(t, 1);
          a_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_35), (ATerm) ATinsert(ATempty, x_34)), w_34);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm a_36 = NULL,c_36 = NULL,i_36 = NULL,l_36 = NULL,m_36 = NULL,o_36 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      i_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
      t = o_36;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = i_36;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = i_36;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  l_36 = ATgetArgument(t, 0);
                  m_36 = ATgetArgument(t, 1);
                  t = i_36;
                }
              else
                {
                  t = i_36;
                }
            }
        }
      else
        {
          t = i_36;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = o_36;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  l_36 = ATgetArgument(t, 0);
                  m_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, l_36, (ATerm) ATmakeAppl(sym_Conc_2, m_36, o_36));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          i_36 = ATgetArgument(t, 0);
          o_36 = ATgetArgument(t, 1);
          c_36 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_36;
      if(match_cons(t, sym_Conc_3))
        {
          l_36 = ATgetArgument(t, 0);
          m_36 = ATgetArgument(t, 1);
          a_36 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, l_36, m_36, (ATerm) ATmakeAppl(sym_Conc_3, a_36, o_36, c_36));
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_38 = NULL,i_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_38 = ATgetFirst((ATermList) t);
          i_38 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, h_38), i_38);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              h_38 = ATgetArgument(t, 0);
              i_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, h_38, (ATerm) ATmakeAppl(sym_Ins_1, i_38));
        }
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm k_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = k_21;
            {
              ATerm k_40 = NULL,l_40 = NULL,n_40 = NULL,y_15 = NULL,b_16 = NULL,l_16 = NULL,m_16 = NULL,n_9 = NULL;
              k_40 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  l_40 = ATgetArgument(t, 0);
                  n_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_40);
              y_15 = t;
              t = l_40;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_16 = ATgetFirst((ATermList) t);
                  m_16 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, l_16), m_16);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      l_16 = ATgetArgument(t, 0);
                      m_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, l_16, (ATerm) ATmakeAppl(sym_Ins_1, m_16));
                }
              b_16 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, b_16, n_40);
              n_9 = t;
              t = SSLsetAnnotations(n_9, y_15);
            }
          }
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_1_0(q_4, t);
  {
    ATerm q_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_41 = NULL,m_41 = NULL,p_41 = NULL,g_17 = NULL,m_17 = NULL,o_9 = NULL;
        l_41 = t;
        if(match_cons(t, sym_Conc_2))
          {
            m_41 = ATgetArgument(t, 0);
            p_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_41);
        g_17 = t;
        t = p_41;
        t = conc_to_cons_0_0(t);
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, m_41, m_17);
        o_9 = t;
        t = SSLsetAnnotations(o_9, g_17);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = q_21;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
    {
      ATerm t_21 = t;
      int u_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_41 = NULL,r_41 = NULL,z_41 = NULL,a_42 = NULL,d_42 = NULL,p_9 = NULL;
              t = CTC2_0_0(t);
              d_42 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_41 = ATgetFirst((ATermList) t);
                  z_41 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_42);
              q_41 = t;
              t = r_41;
              t = conc_to_cons_0_0(t);
              a_42 = t;
              t = (ATerm) ATinsert(CheckATermList(z_41), a_42);
              p_9 = t;
              t = SSLsetAnnotations(p_9, q_41);
              ;
              LocalPopChoice(w_21);
            }
          else
            {
              t = v_21;
              {
                ATerm f_42 = NULL;
                if(match_cons(t, sym_Ins_1))
                  {
                    f_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, f_42);
              }
            }
          ;
          LocalPopChoice(u_21);
        }
      else
        {
          t = t_21;
        }
    }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm b_45 = NULL,d_45 = NULL,g_45 = NULL,l_45 = NULL,u_45 = NULL,v_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      u_45 = ATgetArgument(t, 0);
      z_45 = ATgetArgument(t, 1);
      {
        ATerm y_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = u_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_45 = ATgetFirst((ATermList) t);
      y_45 = (ATerm) ATgetNext((ATermList) t);
      t = y_45;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_45;
          if(match_cons(t, sym_opt_1))
            {
              a_46 = ATgetArgument(t, 0);
              t = a_46;
              if((v_45 != t))
                {
                  _fail(t);
                }
              t = term_a_22;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  a_46 = ATgetArgument(t, 0);
                  t = v_45;
                  if(match_cons(t, sym_cf_1))
                    {
                      x_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_46;
                  if(match_cons(t, sym_opt_1))
                    {
                      b_46 = ATgetArgument(t, 0);
                      t = b_46;
                      if((x_45 != t))
                        {
                          _fail(t);
                        }
                      t = term_a_22;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          b_46 = ATgetArgument(t, 0);
                          t = b_46;
                          if((x_45 != t))
                            {
                              _fail(t);
                            }
                          t = term_b_22;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              b_46 = ATgetArgument(t, 0);
                              {
                                ATerm c_22 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = b_46;
                          if((x_45 != t))
                            {
                              _fail(t);
                            }
                          t = term_b_22;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      a_46 = ATgetArgument(t, 0);
                      t = a_46;
                      if((v_45 != t))
                        {
                          _fail(t);
                        }
                      t = term_b_22;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          a_46 = ATgetArgument(t, 0);
                          {
                            ATerm e_22 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = a_46;
                      if((v_45 != t))
                        {
                          _fail(t);
                        }
                      t = term_b_22;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_22 = ATgetFirst((ATermList) t);
              b_45 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_45;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = z_45;
              if(match_cons(t, sym_iter_1))
                {
                  ATerm j_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_m_22;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_22 = ATgetFirst((ATermList) t);
                  d_45 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_45;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = z_45;
                  {
                    ATerm p_22 = t;
                    int q_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm r_22 = ATgetArgument(t, 0);
                            ATerm s_22 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_22);
                        t = term_m_22;
                      }
                    else
                      {
                        t = p_22;
                        if(match_cons(t, sym_cf_1))
                          {
                            a_46 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = a_46;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm v_22 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = term_m_22;
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm w_22 = ATgetFirst((ATermList) t);
                      g_45 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_45;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm d_23 = ATgetFirst((ATermList) t);
                      l_45 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = l_45;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_45;
                  if(match_cons(t, sym_cf_1))
                    {
                      a_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_46;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm e_23 = ATgetArgument(t, 0);
                      ATerm f_23 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_m_22;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_45;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm j_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(i_23);
            t = term_k_23;
          }
        else
          {
            t = h_23;
            if(match_cons(t, sym_cf_1))
              {
                a_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_46;
            if(match_cons(t, sym_opt_1))
              {
                ATerm q_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_k_23;
          }
      }
    }
  return(t);
}
ATerm b_8 (ATerm g_19, ATerm f_19, ATerm t)
{
  ATerm d_47 = NULL,y_47 = NULL;
  t = g_19;
  {
    ATerm r_23 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_47 = NULL,u_47 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm g_24 = ATgetArgument(t, 0);
            ATerm h_24 = ATgetArgument(t, 1);
            s_47 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = s_47;
        {
          ATerm r_4 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((u_47 != NULL) && (u_47 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(r_4, t);
          t = not_null(u_47);
        }
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = r_23;
        t = Constr1_0_0(t);
      }
    y_47 = t;
    if(match_string(t, "sorts"))
      {
        t = term_x_16;
      }
    else
      {
        if(match_string(t, "imports"))
          {
            t = term_y_16;
          }
        else
          {
            if(match_string(t, "id"))
              {
                t = term_a_17;
              }
            else
              {
                if(match_string(t, "hiddens"))
                  {
                    t = term_b_17;
                  }
                else
                  {
                    if(match_string(t, "exports"))
                      {
                        t = term_c_17;
                      }
                    else
                      {
                        if(match_string(t, "module"))
                          {
                            t = term_e_17;
                          }
                        else
                          {
                            t = y_47;
                          }
                      }
                  }
              }
          }
      }
    d_47 = t;
    t = SSL_mkterm(d_47, f_19);
  }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm v_48 = NULL,x_48 = NULL,e_49 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      v_48 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
      {
        ATerm i_24 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_48;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_48;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm l_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_24);
        t = term_n_24;
      }
    else
      {
        t = j_24;
        {
          ATerm o_24 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm p_25 = ATgetArgument(t, 0);
                  ATerm q_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(d_25);
              t = term_n_24;
            }
          else
            {
              t = o_24;
              if(match_cons(t, sym_cf_1))
                {
                  e_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_49;
              {
                ATerm r_25 = t;
                int t_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm u_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_25);
                    t = term_n_24;
                  }
                else
                  {
                    t = r_25;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm v_25 = ATgetArgument(t, 0);
                        ATerm x_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_n_24;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  d_51 = t;
  if(match_cons(t, sym_appl_2))
    {
      b_51 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_17 = NULL,y_17 = NULL,b_18 = NULL,c_18 = NULL,e_10 = NULL;
            t = SSLgetAnnotations(d_51);
            v_17 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, b_51, c_51);
            e_10 = t;
            t = SSLsetAnnotations(e_10, v_17);
            y_17 = t;
            if(match_cons(t, sym_appl_2))
              {
                b_18 = ATgetArgument(t, 0);
                c_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm f_26 = t;
              int g_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_18;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  ;
                  LocalPopChoice(g_26);
                }
              else
                {
                  t = f_26;
                  t = y_17;
                  t = b_8(b_18, c_18, t);
                }
            }
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = d_51;
          }
      }
    }
  else
    {
      t = d_51;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(s_4, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
      ATerm q_54 (ATerm t)
      {
        ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,a_54 = NULL;
        if(match_cons(t, sym__2))
          {
            v_53 = ATgetArgument(t, 0);
            a_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_53;
        if(match_cons(t, sym_alt_2))
          {
            w_53 = ATgetArgument(t, 0);
            x_53 = ATgetArgument(t, 1);
            {
              ATerm k_26 = t;
              int m_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_53;
                  if(((o_51 != NULL) && (o_51 != t)))
                    _fail(t);
                  else
                    o_51 = t;
                  t = (ATerm) ATmakeAppl(sym_alt_2, a_54, not_null(q_51));
                  ;
                  LocalPopChoice(m_26);
                }
              else
                {
                  t = k_26;
                  {
                    ATerm o_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_53;
                        if(((o_51 != NULL) && (o_51 != t)))
                          _fail(t);
                        else
                          o_51 = t;
                        t = x_53;
                        if(((p_51 != NULL) && (p_51 != t)))
                          _fail(t);
                        else
                          p_51 = t;
                        t = (ATerm) ATmakeAppl(sym_alt_2, a_54, not_null(q_51));
                        ;
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = o_26;
                        {
                          ATerm k_54 = NULL,l_54 = NULL;
                          t = term_e_11;
                          l_54 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_54, term_e_11);
                          t = s_8(a_54, l_54, t);
                          k_54 = t;
                          t = (ATerm) ATmakeAppl(sym__2, x_53, k_54);
                          t = q_54(t);
                        }
                      }
                  }
                }
            }
          }
        else
          {
            t = v_53;
            if(((o_51 != NULL) && (o_51 != t)))
              _fail(t);
            else
              o_51 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, a_54, not_null(q_51));
          }
        return(t);
      }
      ATerm t_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,h_14 = NULL,q_11 = NULL,p_11 = NULL,j_10 = NULL,n_52 = NULL;
          j_52 = t;
          if(match_cons(t, sym_appl_2))
            {
              s_51 = ATgetArgument(t, 0);
              t_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_52);
          r_51 = t;
          t = s_51;
          if(match_cons(t, sym_prod_3))
            {
              v_51 = ATgetArgument(t, 0);
              w_51 = ATgetArgument(t, 1);
              x_51 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_51);
          u_51 = t;
          t = v_51;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_52 = ATgetFirst((ATermList) t);
              g_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_51);
          e_52 = t;
          t = f_52;
          if(match_cons(t, sym_cf_1))
            {
              n_52 = ATgetArgument(t, 0);
              {
                ATerm v_26 = t;
                int w_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_18 = NULL,h_10 = NULL;
                    t = SSLgetAnnotations(f_52);
                    m_18 = t;
                    t = n_52;
                    if(((o_51 != NULL) && (o_51 != t)))
                      _fail(t);
                    else
                      o_51 = t;
                    t = (ATerm) ATmakeAppl(sym_cf_1, n_52);
                    h_10 = t;
                    t = SSLsetAnnotations(h_10, m_18);
                    ;
                    LocalPopChoice(w_26);
                  }
                else
                  {
                    t = v_26;
                    t = f_52;
                    if(((o_51 != NULL) && (o_51 != t)))
                      _fail(t);
                    else
                      o_51 = t;
                    t = f_52;
                  }
              }
            }
          else
            {
              t = f_52;
              if(((o_51 != NULL) && (o_51 != t)))
                _fail(t);
              else
                o_51 = t;
              t = f_52;
            }
          h_52 = t;
          t = g_52;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_52), h_52);
          j_10 = t;
          t = SSLsetAnnotations(j_10, e_52);
          i_52 = t;
          t = w_51;
          if(match_cons(t, sym_cf_1))
            {
              c_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_51);
          b_52 = t;
          t = c_52;
          if(match_cons(t, sym_alt_2))
            {
              m_51 = ATgetArgument(t, 0);
              n_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_cf_1, c_52);
          p_11 = t;
          t = SSLsetAnnotations(p_11, b_52);
          d_52 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, i_52, d_52, x_51);
          q_11 = t;
          t = SSLsetAnnotations(q_11, u_51);
          y_51 = t;
          t = t_51;
          if(((q_51 != NULL) && (q_51 != t)))
            _fail(t);
          else
            q_51 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, y_51, t_51);
          h_14 = t;
          t = SSLsetAnnotations(h_14, r_51);
          ;
          LocalPopChoice(u_26);
        }
      else
        {
          t = t_26;
          {
            ATerm p_52 = NULL,q_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,g_53 = NULL,h_53 = NULL,j_53 = NULL,n_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,o_14 = NULL,k_14 = NULL,j_14 = NULL,i_14 = NULL;
            t_53 = t;
            if(match_cons(t, sym_appl_2))
              {
                q_52 = ATgetArgument(t, 0);
                x_52 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_53);
            p_52 = t;
            t = q_52;
            if(match_cons(t, sym_prod_3))
              {
                z_52 = ATgetArgument(t, 0);
                a_53 = ATgetArgument(t, 1);
                b_53 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_52);
            y_52 = t;
            t = z_52;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_53 = ATgetFirst((ATermList) t);
                r_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_52);
            n_53 = t;
            t = q_53;
            if(((o_51 != NULL) && (o_51 != t)))
              _fail(t);
            else
              o_51 = t;
            t = r_53;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_53), q_53);
            i_14 = t;
            t = SSLsetAnnotations(i_14, n_53);
            s_53 = t;
            t = a_53;
            if(match_cons(t, sym_lex_1))
              {
                h_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_53);
            g_53 = t;
            t = h_53;
            if(match_cons(t, sym_alt_2))
              {
                m_51 = ATgetArgument(t, 0);
                n_51 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_lex_1, h_53);
            j_14 = t;
            t = SSLsetAnnotations(j_14, g_53);
            j_53 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, s_53, j_53, b_53);
            k_14 = t;
            t = SSLsetAnnotations(k_14, y_52);
            c_53 = t;
            t = x_52;
            if(((q_51 != NULL) && (q_51 != t)))
              _fail(t);
            else
              q_51 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, c_53, x_52);
            o_14 = t;
            t = SSLsetAnnotations(o_14, p_52);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, m_51, n_51), term_e_11);
      t = q_54(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm o_54 = NULL;
        o_54 = t;
        if(!(match_cons(t, sym_FlatAlt_0)))
          _fail(t);
        t = o_54;
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm r_54 (ATerm t)
  {
    ATerm y_26 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_82(t);
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = y_26;
        t = SRTS_one(r_54, t);
      }
    return(t);
  }
  t = r_54(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  if(match_cons(t, sym_sort_1))
    {
      t_56 = ATgetArgument(t, 0);
      {
        ATerm r_18 = NULL,o_15 = NULL;
        t = SSLgetAnnotations(s_56);
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, t_56);
        o_15 = t;
        t = SSLsetAnnotations(o_15, r_18);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          t_56 = ATgetArgument(t, 0);
          {
            ATerm c_19 = NULL,h_19 = NULL,r_15 = NULL;
            t = SSLgetAnnotations(s_56);
            c_19 = t;
            t = t_56;
            t = injective_alt_0_0(t);
            h_19 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, h_19);
            r_15 = t;
            t = SSLsetAnnotations(r_15, c_19);
          }
        }
      else
        {
          ATerm p_19 = NULL,t_19 = NULL,w_19 = NULL,t_15 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              t_56 = ATgetArgument(t, 0);
              u_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_56);
          p_19 = t;
          t = t_56;
          t = injective_alt_0_0(t);
          t_19 = t;
          t = u_56;
          t = injective_alt_0_0(t);
          w_19 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, t_19, w_19);
          t_15 = t;
          t = SSLsetAnnotations(t_15, p_19);
        }
    }
  return(t);
}
ATerm i_72 (ATerm s_62, ATerm w_62, ATerm z_62, ATerm d_63, ATerm t)
{
  ATerm g_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,i_16 = NULL,f_16 = NULL,e_16 = NULL;
  t = SSLgetAnnotations(d_63);
  g_63 = t;
  t = s_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_63 = ATgetFirst((ATermList) t);
      n_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_62);
  l_63 = t;
  t = m_63;
  if(match_cons(t, sym_varsym_1))
    {
      q_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_63);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, q_63);
  e_16 = t;
  t = SSLsetAnnotations(e_16, p_63);
  r_63 = t;
  t = n_63;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_63), r_63);
  f_16 = t;
  t = SSLsetAnnotations(f_16, l_63);
  o_63 = t;
  t = z_62;
  {
    ATerm g_27 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(t_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_27;
      }
    k_63 = t;
    t = (ATerm) ATmakeAppl(sym_prod_3, o_63, w_62, k_63);
    i_16 = t;
    t = SSLsetAnnotations(i_16, g_63);
  }
  return(t);
}
ATerm j_72 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm z_63, ATerm t)
{
  ATerm a_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,t_16 = NULL,r_16 = NULL,o_65 = NULL;
  t = SSLgetAnnotations(z_63);
  a_64 = t;
  t = w_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_64 = ATgetFirst((ATermList) t);
      i_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_63);
  g_64 = t;
  t = h_64;
  if(match_cons(t, sym_sort_1))
    {
      o_65 = ATgetArgument(t, 0);
      {
        ATerm f_20 = NULL,j_16 = NULL;
        t = SSLgetAnnotations(h_64);
        f_20 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, o_65);
        j_16 = t;
        t = SSLsetAnnotations(j_16, f_20);
      }
    }
  else
    {
      ATerm j_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,n_16 = NULL,k_16 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          o_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_64);
      j_20 = t;
      t = o_65;
      if(match_cons(t, sym_sort_1))
        {
          n_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_65);
      m_20 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, n_20);
      k_16 = t;
      t = SSLsetAnnotations(k_16, m_20);
      o_20 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, o_20);
      n_16 = t;
      t = SSLsetAnnotations(n_16, j_20);
    }
  j_64 = t;
  t = i_64;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_64), j_64);
  r_16 = t;
  t = SSLsetAnnotations(r_16, g_64);
  k_64 = t;
  t = x_63;
  t = injective_alt_0_0(t);
  e_64 = t;
  t = y_63;
  {
    ATerm j_27 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(u_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_27;
      }
    f_64 = t;
    t = (ATerm) ATmakeAppl(sym_prod_3, k_64, e_64, f_64);
    t_16 = t;
    t = SSLsetAnnotations(t_16, a_64);
  }
  return(t);
}
ATerm k_72 (ATerm u_65, ATerm v_65, ATerm w_65, ATerm x_65, ATerm t)
{
  ATerm y_65 = NULL,k_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,v_66 = NULL,s_27 = NULL,v_16 = NULL;
  t = SSLgetAnnotations(x_65);
  y_65 = t;
  t = u_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_66 = ATgetFirst((ATermList) t);
      p_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_65);
  n_66 = t;
  t = o_66;
  {
    ATerm k_27 = t;
    if((PushChoice() == 0))
      {
        ATerm b_67 = NULL,e_67 = NULL,f_67 = NULL,u_16 = NULL;
        f_67 = t;
        if(match_cons(t, sym_lit_1))
          {
            e_67 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_67);
        b_67 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, e_67);
        u_16 = t;
        t = SSLsetAnnotations(u_16, b_67);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_27;
      }
    q_66 = t;
    t = p_66;
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(p_66), q_66);
    v_16 = t;
    t = SSLsetAnnotations(v_16, n_66);
    v_66 = t;
    t = v_65;
    {
      ATerm o_72 (ATerm t)
      {
        ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
        m_70 = t;
        if(match_cons(t, sym_sort_1))
          {
            n_70 = ATgetArgument(t, 0);
            {
              ATerm s_20 = NULL,j_17 = NULL;
              t = SSLgetAnnotations(m_70);
              s_20 = t;
              t = (ATerm) ATmakeAppl(sym_sort_1, n_70);
              j_17 = t;
              t = SSLsetAnnotations(j_17, s_20);
            }
          }
        else
          {
            if(match_cons(t, sym_cf_1))
              {
                n_70 = ATgetArgument(t, 0);
                {
                  ATerm e_21 = NULL,g_21 = NULL,k_17 = NULL;
                  t = SSLgetAnnotations(m_70);
                  e_21 = t;
                  t = n_70;
                  t = o_72(t);
                  g_21 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, g_21);
                  k_17 = t;
                  t = SSLsetAnnotations(k_17, e_21);
                }
              }
            else
              {
                if(match_cons(t, sym_lex_1))
                  {
                    n_70 = ATgetArgument(t, 0);
                    {
                      ATerm p_21 = NULL,r_21 = NULL,l_17 = NULL;
                      t = SSLgetAnnotations(m_70);
                      p_21 = t;
                      t = n_70;
                      t = o_72(t);
                      r_21 = t;
                      t = (ATerm) ATmakeAppl(sym_lex_1, r_21);
                      l_17 = t;
                      t = SSLsetAnnotations(l_17, p_21);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        n_70 = ATgetArgument(t, 0);
                        {
                          ATerm x_21 = NULL,z_21 = NULL,n_17 = NULL;
                          t = SSLgetAnnotations(m_70);
                          x_21 = t;
                          t = n_70;
                          t = o_72(t);
                          z_21 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_1, z_21);
                          n_17 = t;
                          t = SSLsetAnnotations(n_17, x_21);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_iter_star_1))
                          {
                            n_70 = ATgetArgument(t, 0);
                            {
                              ATerm g_22 = NULL,l_22 = NULL,h_27 = NULL;
                              t = SSLgetAnnotations(m_70);
                              g_22 = t;
                              t = n_70;
                              t = o_72(t);
                              l_22 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_1, l_22);
                              h_27 = t;
                              t = SSLsetAnnotations(h_27, g_22);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_iter_sep_2))
                              {
                                n_70 = ATgetArgument(t, 0);
                                o_70 = ATgetArgument(t, 1);
                                {
                                  ATerm u_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,b_23 = NULL,m_27 = NULL,i_27 = NULL;
                                  t = SSLgetAnnotations(m_70);
                                  u_22 = t;
                                  t = n_70;
                                  t = o_72(t);
                                  x_22 = t;
                                  t = o_70;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      z_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(o_70);
                                  y_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_lit_1, z_22);
                                  i_27 = t;
                                  t = SSLsetAnnotations(i_27, y_22);
                                  b_23 = t;
                                  t = (ATerm) ATmakeAppl(sym_iter_sep_2, x_22, b_23);
                                  m_27 = t;
                                  t = SSLsetAnnotations(m_27, u_22);
                                }
                              }
                            else
                              {
                                ATerm l_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,x_23 = NULL,q_27 = NULL,n_27 = NULL;
                                if(match_cons(t, sym_iter_star_sep_2))
                                  {
                                    n_70 = ATgetArgument(t, 0);
                                    o_70 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(m_70);
                                l_23 = t;
                                t = n_70;
                                t = o_72(t);
                                s_23 = t;
                                t = o_70;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    u_23 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(o_70);
                                t_23 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, u_23);
                                n_27 = t;
                                t = SSLsetAnnotations(n_27, t_23);
                                x_23 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, s_23, x_23);
                                q_27 = t;
                                t = SSLsetAnnotations(q_27, l_23);
                              }
                          }
                      }
                  }
              }
          }
        return(t);
      }
      t = o_72(t);
      k_66 = t;
      t = w_65;
      {
        ATerm o_27 = t;
        if((PushChoice() == 0))
          {
            t = oncetd_1_0(v_4, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_27;
          }
        m_66 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, v_66, k_66, m_66);
        s_27 = t;
        t = SSLsetAnnotations(s_27, y_65);
      }
    }
  }
  return(t);
}
ATerm l_72 (ATerm s_70, ATerm t_70, ATerm u_70, ATerm b_71, ATerm t)
{
  ATerm c_71 = NULL,l_71 = NULL,t_27 = NULL;
  t = SSLgetAnnotations(b_71);
  c_71 = t;
  t = u_70;
  t = oncetd_1_0(w_4, t);
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, s_70, t_70, l_71);
  t_27 = t;
  t = SSLsetAnnotations(t_27, c_71);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,g_16 = NULL;
  v_63 = t;
  if(match_cons(t, sym_cons_1))
    {
      u_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_63);
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, u_63);
  g_16 = t;
  t = SSLsetAnnotations(g_16, t_63);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,t_65 = NULL,s_16 = NULL;
  t_65 = t;
  if(match_cons(t, sym_cons_1))
    {
      q_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_65);
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, q_65);
  s_16 = t;
  t = SSLsetAnnotations(s_16, p_65);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,r_27 = NULL;
  r_70 = t;
  if(match_cons(t, sym_cons_1))
    {
      q_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_70);
  p_70 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, q_70);
  r_27 = t;
  t = SSLsetAnnotations(r_27, p_70);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm n_71 = NULL;
  n_71 = t;
  if(match_string(t, "bracket"))
    {
      t = n_71;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = n_71;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,s_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL;
  y_71 = t;
  if(match_cons(t, sym_prod_3))
    {
      z_71 = ATgetArgument(t, 0);
      a_72 = ATgetArgument(t, 1);
      c_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_72;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = a_72;
      if(match_cons(t, sym_cf_1))
        {
          b_72 = ATgetArgument(t, 0);
          t = b_72;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              x_71 = ATgetArgument(t, 0);
              p_71 = ATgetArgument(t, 1);
              t = z_71;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_71 = ATgetFirst((ATermList) t);
                  w_71 = (ATerm) ATgetNext((ATermList) t);
                  t = w_71;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = s_71;
                      if(match_cons(t, sym_cf_1))
                        {
                          u_71 = ATgetArgument(t, 0);
                          t = u_71;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              v_71 = ATgetArgument(t, 0);
                              o_71 = ATgetArgument(t, 1);
                              {
                                ATerm p_27 = t;
                                int u_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = i_72(z_71, a_72, c_72, y_71, t);
                                    ;
                                    LocalPopChoice(u_27);
                                  }
                                else
                                  {
                                    t = p_27;
                                    {
                                      ATerm v_27 = t;
                                      int w_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = j_72(z_71, a_72, c_72, y_71, t);
                                          ;
                                          LocalPopChoice(w_27);
                                        }
                                      else
                                        {
                                          t = v_27;
                                          {
                                            ATerm x_27 = t;
                                            int y_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = k_72(z_71, a_72, c_72, y_71, t);
                                                ;
                                                LocalPopChoice(y_27);
                                              }
                                            else
                                              {
                                                t = x_27;
                                                {
                                                  ATerm z_27 = t;
                                                  int a_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = x_71;
                                                      if((v_71 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = p_71;
                                                      if((o_71 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = y_71;
                                                      ;
                                                      LocalPopChoice(a_28);
                                                    }
                                                  else
                                                    {
                                                      t = z_27;
                                                      t = l_72(z_71, a_72, c_72, y_71, t);
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
                              ATerm b_28 = t;
                              int c_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_72(z_71, a_72, c_72, y_71, t);
                                  ;
                                  LocalPopChoice(c_28);
                                }
                              else
                                {
                                  t = b_28;
                                  {
                                    ATerm e_28 = t;
                                    int f_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = j_72(z_71, a_72, c_72, y_71, t);
                                        ;
                                        LocalPopChoice(f_28);
                                      }
                                    else
                                      {
                                        t = e_28;
                                        {
                                          ATerm g_28 = t;
                                          int h_28 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = k_72(z_71, a_72, c_72, y_71, t);
                                              ;
                                              LocalPopChoice(h_28);
                                            }
                                          else
                                            {
                                              t = g_28;
                                              t = l_72(z_71, a_72, c_72, y_71, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm i_28 = t;
                          int j_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_72(z_71, a_72, c_72, y_71, t);
                              ;
                              LocalPopChoice(j_28);
                            }
                          else
                            {
                              t = i_28;
                              {
                                ATerm k_28 = t;
                                int l_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = j_72(z_71, a_72, c_72, y_71, t);
                                    ;
                                    LocalPopChoice(l_28);
                                  }
                                else
                                  {
                                    t = k_28;
                                    {
                                      ATerm m_28 = t;
                                      int n_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = k_72(z_71, a_72, c_72, y_71, t);
                                          ;
                                          LocalPopChoice(n_28);
                                        }
                                      else
                                        {
                                          t = m_28;
                                          t = l_72(z_71, a_72, c_72, y_71, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = s_71;
                      {
                        ATerm o_28 = t;
                        int p_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = i_72(z_71, a_72, c_72, y_71, t);
                            ;
                            LocalPopChoice(p_28);
                          }
                        else
                          {
                            t = o_28;
                            {
                              ATerm q_28 = t;
                              int r_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_72(z_71, a_72, c_72, y_71, t);
                                  ;
                                  LocalPopChoice(r_28);
                                }
                              else
                                {
                                  t = q_28;
                                  {
                                    ATerm t_28 = t;
                                    int u_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = k_72(z_71, a_72, c_72, y_71, t);
                                        ;
                                        LocalPopChoice(u_28);
                                      }
                                    else
                                      {
                                        t = t_28;
                                        t = l_72(z_71, a_72, c_72, y_71, t);
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
                  ATerm v_28 = t;
                  int w_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_72(z_71, a_72, c_72, y_71, t);
                      ;
                      LocalPopChoice(w_28);
                    }
                  else
                    {
                      t = v_28;
                      {
                        ATerm x_28 = t;
                        int y_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_72(z_71, a_72, c_72, y_71, t);
                            ;
                            LocalPopChoice(y_28);
                          }
                        else
                          {
                            t = x_28;
                            {
                              ATerm a_29 = t;
                              int c_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = k_72(z_71, a_72, c_72, y_71, t);
                                  ;
                                  LocalPopChoice(c_29);
                                }
                              else
                                {
                                  t = a_29;
                                  t = l_72(z_71, a_72, c_72, y_71, t);
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
                  x_71 = ATgetArgument(t, 0);
                  t = z_71;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_71 = ATgetFirst((ATermList) t);
                      w_71 = (ATerm) ATgetNext((ATermList) t);
                      t = w_71;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = s_71;
                          if(match_cons(t, sym_cf_1))
                            {
                              u_71 = ATgetArgument(t, 0);
                              t = u_71;
                              if(match_cons(t, sym_iter_1))
                                {
                                  v_71 = ATgetArgument(t, 0);
                                  {
                                    ATerm d_29 = t;
                                    int f_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = i_72(z_71, a_72, c_72, y_71, t);
                                        ;
                                        LocalPopChoice(f_29);
                                      }
                                    else
                                      {
                                        t = d_29;
                                        {
                                          ATerm h_29 = t;
                                          int i_29 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_72(z_71, a_72, c_72, y_71, t);
                                              ;
                                              LocalPopChoice(i_29);
                                            }
                                          else
                                            {
                                              t = h_29;
                                              {
                                                ATerm l_29 = t;
                                                int m_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = k_72(z_71, a_72, c_72, y_71, t);
                                                    ;
                                                    LocalPopChoice(m_29);
                                                  }
                                                else
                                                  {
                                                    t = l_29;
                                                    {
                                                      ATerm o_29 = t;
                                                      int q_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = x_71;
                                                          if((v_71 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = y_71;
                                                          ;
                                                          LocalPopChoice(q_29);
                                                        }
                                                      else
                                                        {
                                                          t = o_29;
                                                          t = l_72(z_71, a_72, c_72, y_71, t);
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
                                  ATerm z_29 = t;
                                  int c_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_72(z_71, a_72, c_72, y_71, t);
                                      ;
                                      LocalPopChoice(c_30);
                                    }
                                  else
                                    {
                                      t = z_29;
                                      {
                                        ATerm d_30 = t;
                                        int e_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_72(z_71, a_72, c_72, y_71, t);
                                            ;
                                            LocalPopChoice(e_30);
                                          }
                                        else
                                          {
                                            t = d_30;
                                            {
                                              ATerm f_30 = t;
                                              int g_30 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = k_72(z_71, a_72, c_72, y_71, t);
                                                  ;
                                                  LocalPopChoice(g_30);
                                                }
                                              else
                                                {
                                                  t = f_30;
                                                  t = l_72(z_71, a_72, c_72, y_71, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm h_30 = t;
                              int i_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_72(z_71, a_72, c_72, y_71, t);
                                  ;
                                  LocalPopChoice(i_30);
                                }
                              else
                                {
                                  t = h_30;
                                  {
                                    ATerm k_30 = t;
                                    int o_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = j_72(z_71, a_72, c_72, y_71, t);
                                        ;
                                        LocalPopChoice(o_30);
                                      }
                                    else
                                      {
                                        t = k_30;
                                        {
                                          ATerm p_30 = t;
                                          int q_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = k_72(z_71, a_72, c_72, y_71, t);
                                              ;
                                              LocalPopChoice(q_30);
                                            }
                                          else
                                            {
                                              t = p_30;
                                              t = l_72(z_71, a_72, c_72, y_71, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = s_71;
                          {
                            ATerm r_30 = t;
                            int s_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_72(z_71, a_72, c_72, y_71, t);
                                ;
                                LocalPopChoice(s_30);
                              }
                            else
                              {
                                t = r_30;
                                {
                                  ATerm w_30 = t;
                                  int y_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_72(z_71, a_72, c_72, y_71, t);
                                      ;
                                      LocalPopChoice(y_30);
                                    }
                                  else
                                    {
                                      t = w_30;
                                      {
                                        ATerm z_30 = t;
                                        int a_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = k_72(z_71, a_72, c_72, y_71, t);
                                            ;
                                            LocalPopChoice(a_31);
                                          }
                                        else
                                          {
                                            t = z_30;
                                            t = l_72(z_71, a_72, c_72, y_71, t);
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
                      ATerm c_31 = t;
                      int e_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_72(z_71, a_72, c_72, y_71, t);
                          ;
                          LocalPopChoice(e_31);
                        }
                      else
                        {
                          t = c_31;
                          {
                            ATerm f_31 = t;
                            int g_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_72(z_71, a_72, c_72, y_71, t);
                                ;
                                LocalPopChoice(g_31);
                              }
                            else
                              {
                                t = f_31;
                                {
                                  ATerm h_31 = t;
                                  int i_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = k_72(z_71, a_72, c_72, y_71, t);
                                      ;
                                      LocalPopChoice(i_31);
                                    }
                                  else
                                    {
                                      t = h_31;
                                      t = l_72(z_71, a_72, c_72, y_71, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = z_71;
                  {
                    ATerm m_31 = t;
                    int p_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_72(z_71, a_72, c_72, y_71, t);
                        ;
                        LocalPopChoice(p_31);
                      }
                    else
                      {
                        t = m_31;
                        {
                          ATerm q_31 = t;
                          int r_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_72(z_71, a_72, c_72, y_71, t);
                              ;
                              LocalPopChoice(r_31);
                            }
                          else
                            {
                              t = q_31;
                              {
                                ATerm s_31 = t;
                                int t_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_72(z_71, a_72, c_72, y_71, t);
                                    ;
                                    LocalPopChoice(t_31);
                                  }
                                else
                                  {
                                    t = s_31;
                                    t = l_72(z_71, a_72, c_72, y_71, t);
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
              b_72 = ATgetArgument(t, 0);
              t = b_72;
              if(match_string(t, "<START>"))
                {
                  t = z_71;
                  {
                    ATerm u_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_72(z_71, a_72, c_72, y_71, t);
                        ;
                        LocalPopChoice(w_31);
                      }
                    else
                      {
                        t = u_31;
                        {
                          ATerm x_31 = t;
                          int z_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_72(z_71, a_72, c_72, y_71, t);
                              ;
                              LocalPopChoice(z_31);
                            }
                          else
                            {
                              t = x_31;
                              {
                                ATerm a_32 = t;
                                int b_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_72(z_71, a_72, c_72, y_71, t);
                                    ;
                                    LocalPopChoice(b_32);
                                  }
                                else
                                  {
                                    t = a_32;
                                    {
                                      ATerm c_32 = t;
                                      int d_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = l_72(z_71, a_72, c_72, y_71, t);
                                          ;
                                          LocalPopChoice(d_32);
                                        }
                                      else
                                        {
                                          t = c_32;
                                          t = y_71;
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
                  t = z_71;
                  {
                    ATerm e_32 = t;
                    int f_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_72(z_71, a_72, c_72, y_71, t);
                        ;
                        LocalPopChoice(f_32);
                      }
                    else
                      {
                        t = e_32;
                        {
                          ATerm g_32 = t;
                          int i_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_72(z_71, a_72, c_72, y_71, t);
                              ;
                              LocalPopChoice(i_32);
                            }
                          else
                            {
                              t = g_32;
                              {
                                ATerm j_32 = t;
                                int l_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_72(z_71, a_72, c_72, y_71, t);
                                    ;
                                    LocalPopChoice(l_32);
                                  }
                                else
                                  {
                                    t = j_32;
                                    t = l_72(z_71, a_72, c_72, y_71, t);
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
              t = z_71;
              {
                ATerm p_32 = t;
                int q_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_72(z_71, a_72, c_72, y_71, t);
                    ;
                    LocalPopChoice(q_32);
                  }
                else
                  {
                    t = p_32;
                    {
                      ATerm r_32 = t;
                      int v_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_72(z_71, a_72, c_72, y_71, t);
                          ;
                          LocalPopChoice(v_32);
                        }
                      else
                        {
                          t = r_32;
                          {
                            ATerm w_32 = t;
                            int x_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_72(z_71, a_72, c_72, y_71, t);
                                ;
                                LocalPopChoice(x_32);
                              }
                            else
                              {
                                t = w_32;
                                t = l_72(z_71, a_72, c_72, y_71, t);
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
      t = z_71;
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_72(z_71, a_72, c_72, y_71, t);
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            {
              ATerm d_33 = t;
              int e_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_72(z_71, a_72, c_72, y_71, t);
                  ;
                  LocalPopChoice(e_33);
                }
              else
                {
                  t = d_33;
                  {
                    ATerm p_33 = t;
                    int r_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_72(z_71, a_72, c_72, y_71, t);
                        ;
                        LocalPopChoice(r_33);
                      }
                    else
                      {
                        t = p_33;
                        t = l_72(z_71, a_72, c_72, y_71, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    t = bottomup_1_0(f_81, t);
    return(t);
  }
  t = SRTS_all(y_4, t);
  t = f_81(t);
  return(t);
}
ATerm filter_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  h_73 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_73;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_73 = ATgetFirst((ATermList) t);
          j_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_24 = NULL,p_24 = NULL,c_25 = NULL,p_29 = NULL;
            t = SSLgetAnnotations(h_73);
            m_24 = t;
            t = i_73;
            t = w_93(t);
            p_24 = t;
            t = j_73;
            t = filter_1_0(w_93, t);
            c_25 = t;
            t = (ATerm) ATinsert(CheckATermList(c_25), p_24);
            p_29 = t;
            t = SSLsetAnnotations(p_29, m_24);
            ;
            LocalPopChoice(u_33);
          }
        else
          {
            t = s_33;
            t = j_73;
            t = filter_1_0(w_93, t);
          }
      }
    }
  return(t);
}
ATerm o_78 (ATerm g_75, ATerm t)
{
  ATerm q_78 (ATerm t)
  {
    ATerm h_75 = NULL,i_75 = NULL,k_75 = NULL,l_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
    h_75 = t;
    if(match_cons(t, sym_appl_2))
      {
        i_75 = ATgetArgument(t, 0);
        p_75 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_75;
    if(match_cons(t, sym_prod_3))
      {
        ATerm v_33 = ATgetArgument(t, 0);
        k_75 = ATgetArgument(t, 1);
        {
          ATerm a_34 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = k_75;
    if(match_cons(t, sym_cf_1))
      {
        l_75 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = l_75;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm d_34 = ATgetArgument(t, 0);
        ATerm e_34 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_75;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_75 = ATgetFirst((ATermList) t);
        r_75 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = r_75;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, q_75);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_75 = ATgetFirst((ATermList) t);
            t_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_75;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_75 = ATgetFirst((ATermList) t);
            v_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_75;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm f_76 = NULL,g_76 = NULL;
            t = q_75;
            t = q_78(t);
            f_76 = t;
            t = u_75;
            t = q_78(t);
            g_76 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_76), (ATerm) ATinsert(ATempty, s_75)), f_76);
            t = concat_0_0(t);
          }
        else
          {
            ATerm n_76 = NULL,o_76 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_75 = ATgetFirst((ATermList) t);
                x_75 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_75;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_75 = ATgetFirst((ATermList) t);
                z_75 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_75;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_75;
            t = q_78(t);
            n_76 = t;
            t = y_75;
            t = q_78(t);
            o_76 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_76), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_75), u_75), s_75)), n_76);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = g_75;
  t = q_78(t);
  return(t);
}
ATerm p_78 (ATerm p_76, ATerm t)
{
  ATerm r_78 (ATerm t)
  {
    ATerm q_76 = NULL,r_76 = NULL,t_76 = NULL,u_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
    q_76 = t;
    if(match_cons(t, sym_appl_2))
      {
        r_76 = ATgetArgument(t, 0);
        x_76 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_76;
    if(match_cons(t, sym_prod_3))
      {
        ATerm g_34 = ATgetArgument(t, 0);
        t_76 = ATgetArgument(t, 1);
        {
          ATerm i_34 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = t_76;
    if(match_cons(t, sym_cf_1))
      {
        u_76 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = u_76;
    if(match_cons(t, sym_iter_1))
      {
        ATerm j_34 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = x_76;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_76 = ATgetFirst((ATermList) t);
        z_76 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = z_76;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, y_76);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_77 = ATgetFirst((ATermList) t);
            b_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_77;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm i_77 = NULL,j_77 = NULL;
            t = y_76;
            t = r_78(t);
            i_77 = t;
            t = a_77;
            t = r_78(t);
            j_77 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, j_77), i_77);
            t = concat_0_0(t);
          }
        else
          {
            ATerm o_77 = NULL,p_77 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_77 = ATgetFirst((ATermList) t);
                d_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_76;
            t = r_78(t);
            o_77 = t;
            t = c_77;
            t = r_78(t);
            p_77 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_77), (ATerm) ATinsert(ATempty, a_77)), o_77);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = p_76;
  t = r_78(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
  f_78 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_77 = ATgetArgument(t, 0);
      c_78 = ATgetArgument(t, 1);
      t = s_77;
      if(match_cons(t, sym_prod_3))
        {
          t_77 = ATgetArgument(t, 0);
          y_77 = ATgetArgument(t, 1);
          {
            ATerm k_34 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = y_77;
      if(match_cons(t, sym_cf_1))
        {
          z_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_77;
      {
        ATerm l_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm p_34 = ATgetArgument(t, 0);
                ATerm q_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(o_34);
            t = c_78;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_78 = ATgetFirst((ATermList) t);
                e_78 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_78;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = t_77;
                {
                  ATerm r_34 = t;
                  int v_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_78(f_78, t);
                      ;
                      LocalPopChoice(v_34);
                    }
                  else
                    {
                      t = r_34;
                      t = (ATerm) ATinsert(ATempty, d_78);
                    }
                }
              }
            else
              {
                t = t_77;
                t = o_78(f_78, t);
              }
          }
        else
          {
            t = l_34;
            {
              ATerm y_34 = t;
              int z_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      ATerm b_35 = ATgetArgument(t, 0);
                      ATerm c_35 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_34);
                  t = t_77;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = c_78;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          u_77 = ATgetFirst((ATermList) t);
                          x_77 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = u_77;
                      if(match_cons(t, sym_cf_1))
                        {
                          v_77 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = v_77;
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm d_35 = ATgetArgument(t, 0);
                          ATerm e_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_77;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = c_78;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          d_78 = ATgetFirst((ATermList) t);
                          e_78 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = e_78;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = d_78;
                      t = FlatList_0_0(t);
                    }
                }
              else
                {
                  t = y_34;
                  {
                    ATerm f_35 = t;
                    int g_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm h_35 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_35);
                        t = c_78;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            d_78 = ATgetFirst((ATermList) t);
                            e_78 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = e_78;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = t_77;
                            {
                              ATerm i_35 = t;
                              int j_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = p_78(f_78, t);
                                  ;
                                  LocalPopChoice(j_35);
                                }
                              else
                                {
                                  t = i_35;
                                  t = (ATerm) ATinsert(ATempty, d_78);
                                }
                            }
                          }
                        else
                          {
                            t = t_77;
                            t = p_78(f_78, t);
                          }
                      }
                    else
                      {
                        t = f_35;
                        if(match_cons(t, sym_iter_star_1))
                          {
                            ATerm k_35 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = t_77;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = c_78;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                u_77 = ATgetFirst((ATermList) t);
                                x_77 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = u_77;
                            if(match_cons(t, sym_cf_1))
                              {
                                v_77 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_77;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm l_35 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = x_77;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = c_78;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                d_78 = ATgetFirst((ATermList) t);
                                e_78 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = e_78;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = d_78;
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
      t = f_78;
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_79 = ATgetFirst((ATermList) t);
      o_79 = (ATerm) ATgetNext((ATermList) t);
      t = o_79;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_79 = ATgetFirst((ATermList) t);
          m_79 = (ATerm) ATgetNext((ATermList) t);
          t = l_79;
          if(match_int(t, 34))
            {
              t = n_79;
              if(match_int(t, 92))
                {
                  ATerm m_35 = t;
                  int n_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_79 = NULL;
                      t = m_79;
                      t = De_Escape_0_0(t);
                      r_79 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_79), term_o_35);
                      ;
                      LocalPopChoice(n_35);
                    }
                  else
                    {
                      t = m_35;
                      {
                        ATerm u_79 = NULL;
                        t = o_79;
                        t = De_Escape_0_0(t);
                        u_79 = t;
                        t = (ATerm) ATinsert(CheckATermList(u_79), n_79);
                      }
                    }
                }
              else
                {
                  ATerm x_79 = NULL;
                  t = o_79;
                  t = De_Escape_0_0(t);
                  x_79 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_79), n_79);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = n_79;
                  if(match_int(t, 92))
                    {
                      ATerm p_35 = t;
                      int q_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_79 = NULL;
                          t = m_79;
                          t = De_Escape_0_0(t);
                          z_79 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_79), term_r_35);
                          ;
                          LocalPopChoice(q_35);
                        }
                      else
                        {
                          t = p_35;
                          {
                            ATerm c_80 = NULL;
                            t = o_79;
                            t = De_Escape_0_0(t);
                            c_80 = t;
                            t = (ATerm) ATinsert(CheckATermList(c_80), n_79);
                          }
                        }
                    }
                  else
                    {
                      ATerm f_80 = NULL;
                      t = o_79;
                      t = De_Escape_0_0(t);
                      f_80 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_80), n_79);
                    }
                }
              else
                {
                  ATerm k_80 = NULL;
                  t = o_79;
                  t = De_Escape_0_0(t);
                  k_80 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_80), n_79);
                }
            }
        }
      else
        {
          ATerm n_80 = NULL;
          t = o_79;
          t = De_Escape_0_0(t);
          n_80 = t;
          t = (ATerm) ATinsert(CheckATermList(n_80), n_79);
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
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL;
  w_80 = t;
  t = SSL_explode_string(w_80);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_80 = ATgetFirst((ATermList) t);
      a_81 = (ATerm) ATgetNext((ATermList) t);
      t = a_81;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_80 = ATgetFirst((ATermList) t);
          y_80 = (ATerm) ATgetNext((ATermList) t);
          t = x_80;
          if(match_int(t, 34))
            {
              t = z_80;
              if(match_int(t, 92))
                {
                  ATerm s_35 = t;
                  int t_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_81 = NULL;
                      t = y_80;
                      t = De_Escape_0_0(t);
                      d_81 = t;
                      t = (ATerm) ATinsert(CheckATermList(d_81), term_o_35);
                      ;
                      LocalPopChoice(t_35);
                    }
                  else
                    {
                      t = s_35;
                      {
                        ATerm i_81 = NULL;
                        t = a_81;
                        t = De_Escape_0_0(t);
                        i_81 = t;
                        t = (ATerm) ATinsert(CheckATermList(i_81), z_80);
                      }
                    }
                }
              else
                {
                  ATerm n_81 = NULL;
                  t = a_81;
                  t = De_Escape_0_0(t);
                  n_81 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_81), z_80);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = z_80;
                  if(match_int(t, 92))
                    {
                      ATerm u_35 = t;
                      int v_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_81 = NULL;
                          t = y_80;
                          t = De_Escape_0_0(t);
                          p_81 = t;
                          t = (ATerm) ATinsert(CheckATermList(p_81), term_r_35);
                          ;
                          LocalPopChoice(v_35);
                        }
                      else
                        {
                          t = u_35;
                          {
                            ATerm s_81 = NULL;
                            t = a_81;
                            t = De_Escape_0_0(t);
                            s_81 = t;
                            t = (ATerm) ATinsert(CheckATermList(s_81), z_80);
                          }
                        }
                    }
                  else
                    {
                      ATerm v_81 = NULL;
                      t = a_81;
                      t = De_Escape_0_0(t);
                      v_81 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_81), z_80);
                    }
                }
              else
                {
                  ATerm y_81 = NULL;
                  t = a_81;
                  t = De_Escape_0_0(t);
                  y_81 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_81), z_80);
                }
            }
        }
      else
        {
          ATerm b_82 = NULL;
          t = a_81;
          t = De_Escape_0_0(t);
          b_82 = t;
          t = (ATerm) ATinsert(CheckATermList(b_82), z_80);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  v_80 = t;
  t = SSL_implode_string(v_80);
  return(t);
}
ATerm at_last_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm b_83 (ATerm t)
  {
    ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL;
    y_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_82 = ATgetFirst((ATermList) t);
        a_83 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_35 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_25 = NULL,t_29 = NULL;
          t = SSLgetAnnotations(y_82);
          w_25 = t;
          t = a_83;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(a_83), z_82);
          t_29 = t;
          t = SSLsetAnnotations(t_29, w_25);
          t = w_87(t);
          ;
          LocalPopChoice(d_36);
        }
      else
        {
          t = w_35;
          {
            ATerm n_26 = NULL,r_26 = NULL,v_29 = NULL;
            t = SSLgetAnnotations(y_82);
            n_26 = t;
            t = a_83;
            t = b_83(t);
            r_26 = t;
            t = (ATerm) ATinsert(CheckATermList(r_26), z_82);
            v_29 = t;
            t = SSLsetAnnotations(v_29, n_26);
          }
        }
    }
    return(t);
  }
  t = b_83(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_36 = ATgetFirst((ATermList) t);
      if(((ATgetType(e_36) != AT_INT) || (ATgetInt((ATermInt) e_36) != 34)))
        _fail(t);
      {
        ATerm f_36 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(f_36) != AT_LIST) || !(ATisEmpty(f_36))))
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
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL;
  i_83 = t;
  t = SSL_explode_string(i_83);
  e_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_83 = ATgetFirst((ATermList) t);
      {
        ATerm h_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_83;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = e_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_36 = ATgetFirst((ATermList) t);
      g_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_83;
  t = at_last_1_0(z_4, t);
  f_83 = t;
  t = SSL_implode_string(f_83);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_36);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_36);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_36);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL;
  d_84 = t;
  if(match_cons(t, sym_cf_1))
    {
      b_84 = ATgetArgument(t, 0);
      {
        ATerm f_84 = NULL;
        t = b_84;
        t = PpSym_0_0(t);
        f_84 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_36)), f_84), (ATerm) ATinsert(ATempty, term_s_36));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          b_84 = ATgetArgument(t, 0);
          {
            ATerm h_84 = NULL;
            t = b_84;
            t = PpSym_0_0(t);
            h_84 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_36)), h_84), (ATerm) ATinsert(ATempty, term_s_36));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_v_36);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  b_84 = ATgetArgument(t, 0);
                  c_84 = ATgetArgument(t, 1);
                  {
                    ATerm k_84 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(c_84), b_84);
                    t = map_1_0(PpSym_0_0, t);
                    k_84 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_36)), k_84), (ATerm) ATinsert(ATempty, term_w_36));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      b_84 = ATgetArgument(t, 0);
                      t = b_84;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(b_5, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          b_84 = ATgetArgument(t, 0);
                          t = b_84;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(q_5, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              b_84 = ATgetArgument(t, 0);
                              t = b_84;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(r_5, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  b_84 = ATgetArgument(t, 0);
                                  c_84 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_84 = NULL,r_84 = NULL;
                                    t = b_84;
                                    t = PpSym_0_0(t);
                                    q_84 = t;
                                    t = c_84;
                                    t = PpSym_0_0(t);
                                    r_84 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_37)), r_84), q_84), (ATerm) ATinsert(ATempty, term_a_37));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      b_84 = ATgetArgument(t, 0);
                                      c_84 = ATgetArgument(t, 1);
                                      {
                                        ATerm u_84 = NULL,v_84 = NULL;
                                        t = b_84;
                                        t = PpSym_0_0(t);
                                        u_84 = t;
                                        t = c_84;
                                        t = PpSym_0_0(t);
                                        v_84 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_37)), v_84), u_84), (ATerm) ATinsert(ATempty, term_a_37));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm d_37 = t;
                                      int e_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              b_84 = ATgetArgument(t, 0);
                                              {
                                                ATerm f_37 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(e_37);
                                          {
                                            ATerm x_84 = NULL;
                                            t = b_84;
                                            t = PpSym_0_0(t);
                                            x_84 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_37)), x_84);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = d_37;
                                          {
                                            ATerm j_37 = t;
                                            int k_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    b_84 = ATgetArgument(t, 0);
                                                    c_84 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_37 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(k_37);
                                                {
                                                  ATerm b_85 = NULL,c_85 = NULL;
                                                  t = b_84;
                                                  t = PpSym_0_0(t);
                                                  b_85 = t;
                                                  t = c_84;
                                                  t = PpSym_0_0(t);
                                                  c_85 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_37)), c_85), b_85);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = j_37;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    b_84 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_85 = NULL;
                                                      t = b_84;
                                                      t = PpSym_0_0(t);
                                                      e_85 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, e_85), (ATerm) ATinsert(ATempty, term_m_37));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        b_84 = ATgetArgument(t, 0);
                                                        c_84 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_85 = NULL,i_85 = NULL;
                                                          t = b_84;
                                                          t = PpSym_0_0(t);
                                                          h_85 = t;
                                                          t = c_84;
                                                          t = PpSym_0_0(t);
                                                          i_85 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_85), (ATerm) ATinsert(ATempty, term_n_37)), h_85);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            b_84 = ATgetArgument(t, 0);
                                                            c_84 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_85 = NULL,m_85 = NULL;
                                                              t = b_84;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              l_85 = t;
                                                              t = c_84;
                                                              t = PpSym_0_0(t);
                                                              m_85 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_85), (ATerm) ATinsert(ATempty, term_o_37)), l_85);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                b_84 = ATgetArgument(t, 0);
                                                                c_84 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm p_85 = NULL,q_85 = NULL;
                                                                  t = b_84;
                                                                  t = PpSym_0_0(t);
                                                                  p_85 = t;
                                                                  t = c_84;
                                                                  t = PpSym_0_0(t);
                                                                  q_85 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_85), (ATerm) ATinsert(ATempty, term_p_37)), p_85);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    b_84 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm s_85 = NULL;
                                                                      t = b_84;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      s_85 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(s_85), term_q_37);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        b_84 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, b_84);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            b_84 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm l_27 = NULL;
                                                                              t = b_84;
                                                                              {
                                                                                ATerm t_37 = t;
                                                                                int u_37 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(u_37);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_37;
                                                                                  }
                                                                                l_27 = t;
                                                                                t = (ATerm) ATinsert(ATempty, l_27);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm v_37 = t;
                                                                            int w_37 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    b_84 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm x_37 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(w_37);
                                                                                {
                                                                                  ATerm d_28 = NULL;
                                                                                  t = b_84;
                                                                                  {
                                                                                    ATerm y_37 = t;
                                                                                    int z_37 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(z_37);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_37;
                                                                                      }
                                                                                    d_28 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, d_28);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_37;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_e_38);
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
ATerm u_87 (ATerm h_86, ATerm i_86, ATerm j_86, ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL;
  t = h_86;
  if(match_cons(t, sym_cf_1))
    {
      o_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_86;
  {
    ATerm m_38 = t;
    if((PushChoice() == 0))
      {
        ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,u_30 = NULL;
        s_86 = t;
        if(match_cons(t, sym_sort_1))
          {
            r_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_86);
        q_86 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, r_86);
        u_30 = t;
        t = SSLsetAnnotations(u_30, q_86);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_38;
      }
    t = PpSym_0_0(t);
    n_86 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_38)), n_86), (ATerm) ATinsert(ATempty, term_p_38));
    t = concat_0_0(t);
    p_86 = t;
    t = SSL_concat_strings(p_86);
    m_86 = t;
    t = SSL_mkterm(m_86, i_86);
  }
  return(t);
}
ATerm v_87 (ATerm u_86, ATerm x_86, ATerm y_86, ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,h_87 = NULL,x_30 = NULL;
  t = u_86;
  if(match_cons(t, sym_cf_1))
    {
      c_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_87;
  if(match_cons(t, sym_sort_1))
    {
      h_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_87);
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, h_87);
  x_30 = t;
  t = SSLsetAnnotations(x_30, e_87);
  t = PpSym_0_0(t);
  d_87 = t;
  t = SSL_concat_strings(d_87);
  b_87 = t;
  t = SSL_mkterm(b_87, x_86);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm i_87 = NULL,k_87 = NULL,n_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
  s_87 = t;
  if(match_cons(t, sym_appl_2))
    {
      i_87 = ATgetArgument(t, 0);
      p_87 = ATgetArgument(t, 1);
      t = i_87;
      if(match_cons(t, sym_prod_3))
        {
          ATerm q_38 = ATgetArgument(t, 0);
          k_87 = ATgetArgument(t, 1);
          {
            ATerm r_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_87 = ATgetFirst((ATermList) t);
          r_87 = (ATerm) ATgetNext((ATermList) t);
          t = r_87;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = k_87;
              if(match_cons(t, sym_sort_1))
                {
                  n_87 = ATgetArgument(t, 0);
                  t = n_87;
                  if(match_string(t, "<START>"))
                    {
                      ATerm s_38 = t;
                      int t_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_87(k_87, p_87, s_87, t);
                          ;
                          LocalPopChoice(t_38);
                        }
                      else
                        {
                          t = s_38;
                          {
                            ATerm v_38 = t;
                            int x_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_87(k_87, p_87, s_87, t);
                                ;
                                LocalPopChoice(x_38);
                              }
                            else
                              {
                                t = v_38;
                                t = q_87;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm y_38 = t;
                      int b_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_87(k_87, p_87, s_87, t);
                          ;
                          LocalPopChoice(b_39);
                        }
                      else
                        {
                          t = y_38;
                          t = v_87(k_87, p_87, s_87, t);
                        }
                    }
                }
              else
                {
                  ATerm c_39 = t;
                  int d_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_87(k_87, p_87, s_87, t);
                      ;
                      LocalPopChoice(d_39);
                    }
                  else
                    {
                      t = c_39;
                      t = v_87(k_87, p_87, s_87, t);
                    }
                }
            }
          else
            {
              t = k_87;
              {
                ATerm f_39 = t;
                int g_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_87(k_87, p_87, s_87, t);
                    ;
                    LocalPopChoice(g_39);
                  }
                else
                  {
                    t = f_39;
                    t = v_87(k_87, p_87, s_87, t);
                  }
              }
            }
        }
      else
        {
          t = k_87;
          {
            ATerm h_39 = t;
            int l_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_87(k_87, p_87, s_87, t);
                ;
                LocalPopChoice(l_39);
              }
            else
              {
                t = h_39;
                t = v_87(k_87, p_87, s_87, t);
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_ApplToSort_0)))
        _fail(t);
      t = s_87;
    }
  return(t);
}
ATerm repeat_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm b_88 (ATerm t)
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_80(t);
        t = b_88(t);
        ;
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
      }
    return(t);
  }
  t = b_88(t);
  return(t);
}
ATerm is_layout_p__0_0 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  m_89 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_89 = ATgetArgument(t, 0);
      l_89 = ATgetArgument(t, 1);
      {
        ATerm s_28 = NULL,z_28 = NULL,b_29 = NULL,e_29 = NULL,g_29 = NULL,j_29 = NULL,k_29 = NULL,n_29 = NULL,r_29 = NULL,s_29 = NULL,u_29 = NULL,x_29 = NULL,k_31 = NULL,j_31 = NULL,d_31 = NULL,b_31 = NULL;
        t = SSLgetAnnotations(m_89);
        s_28 = t;
        t = n_89;
        if(match_cons(t, sym_prod_3))
          {
            b_29 = ATgetArgument(t, 0);
            e_29 = ATgetArgument(t, 1);
            g_29 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_89);
        z_28 = t;
        t = e_29;
        if(match_cons(t, sym_cf_1))
          {
            n_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_29);
        k_29 = t;
        t = n_29;
        if(match_cons(t, sym_opt_1))
          {
            u_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_29);
        s_29 = t;
        t = u_29;
        if(!(match_cons(t, sym_layout_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_opt_1, u_29);
        b_31 = t;
        t = SSLsetAnnotations(b_31, s_29);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, x_29);
        d_31 = t;
        t = SSLsetAnnotations(d_31, k_29);
        r_29 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, b_29, r_29, g_29);
        j_31 = t;
        t = SSLsetAnnotations(j_31, z_28);
        j_29 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, j_29, l_89);
        k_31 = t;
        t = SSLsetAnnotations(k_31, s_28);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          n_89 = ATgetArgument(t, 0);
          {
            ATerm j_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,n_31 = NULL,l_31 = NULL;
            t = SSLgetAnnotations(m_89);
            j_30 = t;
            t = n_89;
            if(match_cons(t, sym_opt_1))
              {
                m_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_89);
            l_30 = t;
            t = m_30;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, m_30);
            l_31 = t;
            t = SSLsetAnnotations(l_31, l_30);
            n_30 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, n_30);
            n_31 = t;
            t = SSLsetAnnotations(n_31, j_30);
          }
        }
      else
        {
          ATerm v_30 = NULL,o_31 = NULL;
          if(match_cons(t, sym_layout_1))
            {
              n_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_89);
          v_30 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, n_89);
          o_31 = t;
          t = SSLsetAnnotations(o_31, v_30);
        }
    }
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
  c_90 = t;
  if(match_cons(t, sym_appl_2))
    {
      d_90 = ATgetArgument(t, 0);
      j_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_90;
  if(match_cons(t, sym_prod_3))
    {
      ATerm u_39 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
      {
        ATerm v_39 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = f_90;
  if(match_cons(t, sym_cf_1))
    {
      g_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_90;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(j_90);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          h_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_90;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = j_90;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_x_39;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_90 = ATgetFirst((ATermList) t);
              l_90 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_90;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, k_90));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm b_91 (ATerm t)
  {
    ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL;
    a_91 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_90 = ATgetFirst((ATermList) t);
        z_90 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_31 = NULL,y_31 = NULL,h_32 = NULL;
          t = SSLgetAnnotations(a_91);
          v_31 = t;
          t = z_90;
          t = b_91(t);
          y_31 = t;
          t = (ATerm) ATinsert(CheckATermList(y_31), y_90);
          h_32 = t;
          t = SSLsetAnnotations(h_32, v_31);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_91;
        t = l_87(t);
      }
    return(t);
  }
  t = b_91(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL;
  e_91 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_91;
    }
  else
    {
      ATerm s_5 (ATerm t)
      {
        t = not_null(g_91);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_91 = ATgetFirst((ATermList) t);
          if(((g_91 != NULL) && (g_91 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_91;
      t = at_end_1_0(s_5, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm m_91 = NULL;
  ATerm d_92 (ATerm t)
  {
    ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
    a_92 = t;
    if(match_cons(t, sym_appl_2))
      {
        y_91 = ATgetArgument(t, 0);
        z_91 = ATgetArgument(t, 1);
        {
          ATerm y_39 = t;
          int z_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_32 = NULL,z_32 = NULL,c_33 = NULL,k_32 = NULL;
              t = SSLgetAnnotations(a_92);
              z_32 = t;
              t = z_91;
              t = map_1_0(d_92, t);
              c_33 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, y_91, c_33);
              k_32 = t;
              t = SSLsetAnnotations(k_32, z_32);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm c_40 = ATgetArgument(t, 0);
                  y_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_32;
              t = concat_0_0(t);
              ;
              LocalPopChoice(z_39);
            }
          else
            {
              t = y_39;
              t = (ATerm) ATinsert(ATempty, a_92);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, a_92);
      }
    return(t);
  }
  t = d_92(t);
  m_91 = t;
  t = SSL_implode_string(m_91);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm x_92 = NULL,z_92 = NULL,a_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL;
  d_93 = t;
  if(match_cons(t, sym_appl_2))
    {
      e_93 = ATgetArgument(t, 0);
      {
        ATerm d_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_93;
  if(match_cons(t, sym_prod_3))
    {
      f_93 = ATgetArgument(t, 0);
      g_93 = ATgetArgument(t, 1);
      {
        ATerm e_40 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = g_93;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm h_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_40);
        t = f_93;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_92 = ATgetFirst((ATermList) t);
            z_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_92;
        if(match_cons(t, sym_lex_1))
          {
            ATerm i_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_92;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_93;
        t = yield_0_0(t);
      }
    else
      {
        t = f_40;
        {
          ATerm j_40 = t;
          int m_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm o_40 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(m_40);
              t = d_93;
              t = yield_0_0(t);
            }
          else
            {
              t = j_40;
              {
                ATerm q_40 = t;
                int s_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm u_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_40);
                    {
                      ATerm k_93 = NULL;
                      t = d_93;
                      t = yield_0_0(t);
                      k_93 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, k_93);
                    }
                  }
                else
                  {
                    t = q_40;
                    if(match_cons(t, sym_varsym_1))
                      {
                        h_93 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = h_93;
                    if(match_cons(t, sym_cf_1))
                      {
                        a_93 = ATgetArgument(t, 0);
                        t = a_93;
                        {
                          ATerm v_40 = t;
                          int w_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm x_40 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(w_40);
                              t = f_93;
                              {
                                ATerm y_40 = t;
                                int z_40 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_93 = NULL;
                                    t = d_93;
                                    t = yield_0_0(t);
                                    l_93 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, l_93);
                                    ;
                                    LocalPopChoice(z_40);
                                  }
                                else
                                  {
                                    t = y_40;
                                    {
                                      ATerm m_93 = NULL;
                                      t = d_93;
                                      t = yield_0_0(t);
                                      m_93 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, m_93);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = v_40;
                              {
                                ATerm a_41 = t;
                                int b_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm c_41 = ATgetArgument(t, 0);
                                        ATerm d_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(b_41);
                                    t = f_93;
                                    {
                                      ATerm f_41 = t;
                                      int g_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_93 = NULL;
                                          t = d_93;
                                          t = yield_0_0(t);
                                          n_93 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, n_93);
                                          ;
                                          LocalPopChoice(g_41);
                                        }
                                      else
                                        {
                                          t = f_41;
                                          {
                                            ATerm o_93 = NULL;
                                            t = d_93;
                                            t = yield_0_0(t);
                                            o_93 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, o_93);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = a_41;
                                    {
                                      ATerm h_41 = t;
                                      int i_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm j_41 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(i_41);
                                          t = f_93;
                                          {
                                            ATerm o_41 = t;
                                            int s_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_93 = NULL;
                                                t = d_93;
                                                t = yield_0_0(t);
                                                p_93 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, p_93);
                                                ;
                                                LocalPopChoice(s_41);
                                              }
                                            else
                                              {
                                                t = o_41;
                                                {
                                                  ATerm q_93 = NULL;
                                                  t = d_93;
                                                  t = yield_0_0(t);
                                                  q_93 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, q_93);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = h_41;
                                          {
                                            ATerm t_41 = t;
                                            int u_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm v_41 = ATgetArgument(t, 0);
                                                    ATerm w_41 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(u_41);
                                                t = f_93;
                                                {
                                                  ATerm x_41 = t;
                                                  int y_41 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_93 = NULL;
                                                      t = d_93;
                                                      t = yield_0_0(t);
                                                      r_93 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, r_93);
                                                      ;
                                                      LocalPopChoice(y_41);
                                                    }
                                                  else
                                                    {
                                                      t = x_41;
                                                      {
                                                        ATerm s_93 = NULL;
                                                        t = d_93;
                                                        t = yield_0_0(t);
                                                        s_93 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, s_93);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = t_41;
                                                {
                                                  ATerm t_93 = NULL;
                                                  t = d_93;
                                                  t = yield_0_0(t);
                                                  t_93 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, t_93);
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
                        ATerm u_93 = NULL;
                        t = d_93;
                        t = yield_0_0(t);
                        u_93 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, u_93);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t)
{
  t = j_81(t);
  {
    ATerm t_5 (ATerm t)
    {
      t = downup2_2_0(j_81, k_81, t);
      return(t);
    }
    t = SRTS_all(t_5, t);
    t = k_81(t);
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_FlatLex_0)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm e_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      ;
      LocalPopChoice(g_42);
    }
  else
    {
      t = e_42;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLayout_0)))
    _fail(t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm h_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,f_38 = NULL,g_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,n_38 = NULL,o_38 = NULL,f_33 = NULL,u_32 = NULL;
      o_38 = t;
      if(match_cons(t, sym_appl_2))
        {
          b_38 = ATgetArgument(t, 0);
          c_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_38);
      a_38 = t;
      t = b_38;
      if(match_cons(t, sym_prod_3))
        {
          g_38 = ATgetArgument(t, 0);
          j_38 = ATgetArgument(t, 1);
          k_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_38);
      f_38 = t;
      t = g_38;
      t = filter_1_0(z_5, t);
      l_38 = t;
      t = (ATerm) ATmakeAppl(sym_prod_3, l_38, j_38, k_38);
      u_32 = t;
      t = SSLsetAnnotations(u_32, f_38);
      n_38 = t;
      t = c_38;
      t = filter_1_0(a_6, t);
      d_38 = t;
      t = (ATerm) ATmakeAppl(sym_appl_2, n_38, d_38);
      f_33 = t;
      t = SSLsetAnnotations(f_33, a_38);
      ;
      LocalPopChoice(p_42);
    }
  else
    {
      t = h_42;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm q_42 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_42;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm r_42 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_42;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = repeat_1_0(ApplToSort_0_0, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm s_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      ;
      LocalPopChoice(t_42);
    }
  else
    {
      t = s_42;
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLit_0)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(k_6, t);
      ;
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm w_42 = t;
  if((PushChoice() == 0))
    {
      ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,j_33 = NULL;
      o_42 = t;
      if(match_cons(t, sym_lit_1))
        {
          n_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_42);
      m_42 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, n_42);
      j_33 = t;
      t = SSLsetAnnotations(j_33, m_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_42;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_FlatInj_0)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_43 = NULL,q_43 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          p_43 = ATgetArgument(t, 0);
          {
            ATerm z_42 = ATgetArgument(t, 1);
            if(((ATgetType(z_42) == AT_LIST) && !(ATisEmpty(z_42))))
              {
                q_43 = ATgetFirst((ATermList) z_42);
                {
                  ATerm a_43 = (ATerm) ATgetNext((ATermList) z_42);
                  if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = p_43;
      t = injection_0_0(t);
      t = q_43;
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = x_42;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      ;
      LocalPopChoice(d_43);
    }
  else
    {
      t = c_43;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym_ReplaceAppl_0)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveSeq_0)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm g_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      ;
      LocalPopChoice(h_43);
    }
  else
    {
      t = g_43;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  if(!(match_cons(t, sym_RemovePT_0)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Concrete_0)))
    _fail(t);
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm c_95 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,k_95 = NULL,l_95 = NULL;
  c_95 = t;
  if(match_cons(t, sym__2))
    {
      k_95 = ATgetArgument(t, 0);
      l_95 = ATgetArgument(t, 1);
      {
        ATerm i_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_34 = NULL,m_34 = NULL,n_34 = NULL,t_32 = NULL;
            t = SSLgetAnnotations(c_95);
            f_34 = t;
            t = k_95;
            t = fetch_1_0(u_5, t);
            m_34 = t;
            t = l_95;
            t = downup2_2_0(v_5, w_5, t);
            n_34 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_34, n_34);
            t_32 = t;
            t = SSLsetAnnotations(t_32, f_34);
            ;
            LocalPopChoice(j_43);
          }
        else
          {
            t = i_43;
            t = c_95;
          }
      }
    }
  else
    {
      t = c_95;
    }
  l_96 = t;
  if(match_cons(t, sym__2))
    {
      j_96 = ATgetArgument(t, 0);
      k_96 = ATgetArgument(t, 1);
      {
        ATerm k_43 = t;
        int l_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_36 = NULL,n_36 = NULL,p_36 = NULL,g_33 = NULL;
            t = SSLgetAnnotations(l_96);
            g_36 = t;
            t = j_96;
            t = fetch_1_0(x_5, t);
            n_36 = t;
            t = k_96;
            t = topdown_1_0(y_5, t);
            p_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_36, p_36);
            g_33 = t;
            t = SSLsetAnnotations(g_33, g_36);
            ;
            LocalPopChoice(l_43);
          }
        else
          {
            t = k_43;
            t = l_96;
          }
      }
    }
  else
    {
      t = l_96;
    }
  b_97 = t;
  if(match_cons(t, sym__2))
    {
      z_96 = ATgetArgument(t, 0);
      a_97 = ATgetArgument(t, 1);
      {
        ATerm m_43 = t;
        int n_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_38 = NULL,z_38 = NULL,a_39 = NULL,h_33 = NULL;
            t = SSLgetAnnotations(b_97);
            u_38 = t;
            t = z_96;
            t = fetch_1_0(ApplToSort_0_0, t);
            z_38 = t;
            t = a_97;
            t = topdown_1_0(b_6, t);
            a_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
            h_33 = t;
            t = SSLsetAnnotations(h_33, u_38);
            ;
            LocalPopChoice(n_43);
          }
        else
          {
            t = m_43;
            t = b_97;
          }
      }
    }
  else
    {
      t = b_97;
    }
  p_97 = t;
  if(match_cons(t, sym__2))
    {
      n_97 = ATgetArgument(t, 0);
      o_97 = ATgetArgument(t, 1);
      {
        ATerm o_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_39 = NULL,a_40 = NULL,b_40 = NULL,i_33 = NULL;
            t = SSLgetAnnotations(p_97);
            w_39 = t;
            t = n_97;
            t = fetch_1_0(FlatList_0_0, t);
            a_40 = t;
            t = o_97;
            t = topdown_1_0(d_6, t);
            b_40 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_40, b_40);
            i_33 = t;
            t = SSLsetAnnotations(i_33, w_39);
            ;
            LocalPopChoice(r_43);
          }
        else
          {
            t = o_43;
            t = p_97;
          }
      }
    }
  else
    {
      t = p_97;
    }
  g_98 = t;
  if(match_cons(t, sym__2))
    {
      e_98 = ATgetArgument(t, 0);
      f_98 = ATgetArgument(t, 1);
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_41 = NULL,k_41 = NULL,n_41 = NULL,k_33 = NULL;
            t = SSLgetAnnotations(g_98);
            e_41 = t;
            t = e_98;
            t = fetch_1_0(e_6, t);
            k_41 = t;
            t = f_98;
            t = topdown_1_0(j_6, t);
            n_41 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_41, n_41);
            k_33 = t;
            t = SSLsetAnnotations(k_33, e_41);
            ;
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            t = g_98;
          }
      }
    }
  else
    {
      t = g_98;
    }
  w_98 = t;
  if(match_cons(t, sym__2))
    {
      u_98 = ATgetArgument(t, 0);
      v_98 = ATgetArgument(t, 1);
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_43 = NULL,e_43 = NULL,f_43 = NULL,l_33 = NULL;
            t = SSLgetAnnotations(w_98);
            b_43 = t;
            t = u_98;
            t = fetch_1_0(l_6, t);
            e_43 = t;
            t = v_98;
            t = bottomup_1_0(m_6, t);
            f_43 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_43, f_43);
            l_33 = t;
            t = SSLsetAnnotations(l_33, b_43);
            ;
            LocalPopChoice(v_43);
          }
        else
          {
            t = u_43;
            t = w_98;
          }
      }
    }
  else
    {
      t = w_98;
    }
  k_99 = t;
  if(match_cons(t, sym__2))
    {
      i_99 = ATgetArgument(t, 0);
      j_99 = ATgetArgument(t, 1);
      {
        ATerm w_43 = t;
        int y_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_43 = NULL,a_44 = NULL,b_44 = NULL,m_33 = NULL;
            t = SSLgetAnnotations(k_99);
            x_43 = t;
            t = i_99;
            t = fetch_1_0(FlatAlt_0_0, t);
            a_44 = t;
            t = j_99;
            t = topdown_1_0(n_6, t);
            b_44 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_44, b_44);
            m_33 = t;
            t = SSLsetAnnotations(m_33, x_43);
            ;
            LocalPopChoice(y_43);
          }
        else
          {
            t = w_43;
            t = k_99;
          }
      }
    }
  else
    {
      t = k_99;
    }
  a_100 = t;
  if(match_cons(t, sym__2))
    {
      y_99 = ATgetArgument(t, 0);
      z_99 = ATgetArgument(t, 1);
      {
        ATerm z_43 = t;
        int c_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_44 = NULL,p_44 = NULL,q_44 = NULL,w_33 = NULL;
            t = SSLgetAnnotations(a_100);
            m_44 = t;
            t = y_99;
            t = fetch_1_0(o_6, t);
            p_44 = t;
            t = z_99;
            t = replace_appl_0_0(t);
            q_44 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_44, q_44);
            w_33 = t;
            t = SSLsetAnnotations(w_33, m_44);
            ;
            LocalPopChoice(c_44);
          }
        else
          {
            t = z_43;
            t = a_100;
          }
      }
    }
  else
    {
      t = a_100;
    }
  o_100 = t;
  if(match_cons(t, sym__2))
    {
      m_100 = ATgetArgument(t, 0);
      n_100 = ATgetArgument(t, 1);
      {
        ATerm d_44 = t;
        int e_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_45 = NULL,m_45 = NULL,n_45 = NULL,x_33 = NULL;
            t = SSLgetAnnotations(o_100);
            i_45 = t;
            t = m_100;
            t = fetch_1_0(p_6, t);
            m_45 = t;
            t = n_100;
            t = topdown_1_0(q_6, t);
            n_45 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
            x_33 = t;
            t = SSLsetAnnotations(x_33, i_45);
            ;
            LocalPopChoice(e_44);
          }
        else
          {
            t = d_44;
            t = o_100;
          }
      }
    }
  else
    {
      t = o_100;
    }
  c_101 = t;
  if(match_cons(t, sym__2))
    {
      a_101 = ATgetArgument(t, 0);
      b_101 = ATgetArgument(t, 1);
      {
        ATerm f_44 = t;
        int g_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_46 = NULL,s_46 = NULL,v_46 = NULL,y_33 = NULL;
            t = SSLgetAnnotations(c_101);
            p_46 = t;
            t = a_101;
            t = fetch_1_0(t_6, t);
            s_46 = t;
            t = b_101;
            if(match_cons(t, sym_parsetree_2))
              {
                v_46 = ATgetArgument(t, 0);
                {
                  ATerm h_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, s_46, v_46);
            y_33 = t;
            t = SSLsetAnnotations(y_33, p_46);
            ;
            LocalPopChoice(g_44);
          }
        else
          {
            t = f_44;
            t = c_101;
          }
      }
    }
  else
    {
      t = c_101;
    }
  {
    ATerm i_44 = t;
    int j_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_44 = t;
        int l_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_101 = NULL,g_101 = NULL,j_101 = NULL,k_101 = NULL,z_33 = NULL;
            if((c_95 != t))
              {
                _fail(t);
              }
            if(match_cons(t, sym__2))
              {
                g_101 = ATgetArgument(t, 0);
                j_101 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_95);
            f_101 = t;
            t = g_101;
            t = fetch_1_0(w_6, t);
            k_101 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_101, j_101);
            z_33 = t;
            t = SSLsetAnnotations(z_33, f_101);
            LocalPopChoice(l_44);
            {
              ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL,p_101 = NULL,b_34 = NULL;
              p_101 = t;
              if(match_cons(t, sym__2))
                {
                  m_101 = ATgetArgument(t, 0);
                  n_101 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_101);
              l_101 = t;
              t = n_101;
              t = implodeAsfix_1_0(_id, t);
              o_101 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_101, o_101);
              b_34 = t;
              t = SSLsetAnnotations(b_34, l_101);
            }
          }
        else
          {
            t = k_44;
            {
              ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,c_34 = NULL;
              v_101 = t;
              if(match_cons(t, sym__2))
                {
                  s_101 = ATgetArgument(t, 0);
                  t_101 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_101);
              r_101 = t;
              t = t_101;
              t = implodeAsfix_1_0(_fail, t);
              u_101 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_101, u_101);
              c_34 = t;
              t = SSLsetAnnotations(c_34, r_101);
            }
          }
        ;
        LocalPopChoice(j_44);
      }
    else
      {
        t = i_44;
      }
  }
  return(t);
}
ATerm m_8 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm i_102 = NULL;
  t = SSL_fputc(i_42, j_42);
  i_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_102);
  return(t);
}
ATerm n_8 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm j_102 = NULL;
  t = SSL_write_term_to_stream_text(x_46, y_46);
  j_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_102);
  return(t);
}
ATerm p_8 (ATerm x_99 (ATerm), ATerm n_483, ATerm b_47, ATerm t)
{
  ATerm k_102 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_483, term_n_44);
  t = open_stream_0_0(t);
  k_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_102, b_47);
  t = x_99(t);
  t = fclose_0_0(t);
  t = b_47;
  return(t);
}
ATerm o_8 (ATerm t_46, ATerm u_46, ATerm t)
{
  ATerm l_102 = NULL;
  t = SSL_write_term_to_stream_baf(t_46, u_46);
  l_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_102);
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm r_47 = NULL,v_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_44 = ATgetArgument(t, 0);
      if(match_cons(o_44, sym_Stream_1))
        {
          r_47 = ATgetArgument(o_44, 0);
        }
      else
        _fail(t);
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(r_47, v_47, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_44 = ATgetArgument(t, 0);
      if(match_cons(r_44, sym_Stream_1))
        {
          n_48 = ATgetArgument(r_44, 0);
        }
      else
        _fail(t);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(n_48, o_48, t);
  k_48 = t;
  t = term_s_44;
  l_48 = t;
  t = k_48;
  if(match_cons(t, sym_Stream_1))
    {
      m_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_44, k_48);
  t = m_8(l_48, m_48, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL,z_102 = NULL,z_103 = NULL,a_104 = NULL,y_35 = NULL,x_35 = NULL;
  q_102 = t;
  if(match_cons(t, sym__2))
    {
      x_102 = ATgetArgument(t, 0);
      y_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_102);
  w_102 = t;
  t = x_102;
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((p_102 != NULL) && (p_102 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_102 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(x_6, t);
        ;
        LocalPopChoice(u_44);
      }
    else
      {
        t = t_44;
        t = term_v_44;
        p_102 = t;
      }
    z_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_102, y_102);
    x_35 = t;
    t = SSLsetAnnotations(x_35, w_102);
    t = q_102;
    if(match_cons(t, sym__2))
      {
        s_102 = ATgetArgument(t, 0);
        t_102 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_102);
    r_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_102, (ATerm) ATmakeAppl(sym__2, not_null(p_102), t_102));
    y_35 = t;
    t = SSLsetAnnotations(y_35, r_102);
    v_102 = t;
    if(match_cons(t, sym__2))
      {
        z_103 = ATgetArgument(t, 0);
        a_104 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm w_44 = t;
      int x_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,q_47 = NULL,z_35 = NULL;
          t = SSLgetAnnotations(v_102);
          i_47 = t;
          t = z_103;
          t = fetch_1_0(y_6, t);
          l_47 = t;
          t = a_104;
          if(match_cons(t, sym__2))
            {
              n_47 = ATgetArgument(t, 0);
              q_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_8(z_6, n_47, q_47, t);
          m_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
          z_35 = t;
          t = SSLsetAnnotations(z_35, i_47);
          ;
          LocalPopChoice(x_44);
        }
      else
        {
          t = w_44;
          {
            ATerm d_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,b_36 = NULL;
            t = SSLgetAnnotations(v_102);
            d_48 = t;
            t = a_104;
            if(match_cons(t, sym__2))
              {
                i_48 = ATgetArgument(t, 0);
                j_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_8(a_7, i_48, j_48, t);
            h_48 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_103, h_48);
            b_36 = t;
            t = SSLsetAnnotations(b_36, d_48);
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
ATerm apply_strategy_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL;
  j_104 = t;
  t = dtime_0_0(t);
  t = j_104;
  t = x_106(t);
  i_104 = t;
  t = dtime_0_0(t);
  f_104 = t;
  t = i_104;
  if(match_cons(t, sym__2))
    {
      g_104 = ATgetArgument(t, 0);
      h_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_104), (ATerm) ATmakeAppl(sym_Runtime_1, f_104)), h_104);
  return(t);
}
ATerm x_104 (ATerm r_104, ATerm t)
{
  t = SSL_fclose(r_104);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL;
  v_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_104 = ATgetArgument(t, 0);
      {
        ATerm y_44 = t;
        int z_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_104);
            ;
            LocalPopChoice(z_44);
          }
        else
          {
            t = y_44;
            t = x_104(v_104, t);
          }
      }
    }
  else
    {
      t = x_104(v_104, t);
    }
  return(t);
}
ATerm q_8 (ATerm z_46, ATerm t)
{
  t = SSL_read_term_from_stream(z_46);
  return(t);
}
ATerm r_8 (ATerm k_42, ATerm l_42, ATerm t)
{
  ATerm y_104 = NULL;
  t = SSL_fopen(k_42, l_42);
  y_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_104);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_104 = NULL;
  t = SSL_stdin_stream();
  z_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_104);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_105 = NULL;
  t = SSL_stdout_stream();
  a_105 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_105);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_105 = NULL;
  t = SSL_stderr_stream();
  b_105 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_105);
  return(t);
}
ATerm i_106 (ATerm h_105, ATerm t)
{
  ATerm i_105 = NULL;
  t = SSL_explode_term(h_105);
  if(match_cons(t, sym__2))
    {
      ATerm a_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_45 = ATgetArgument(t, 1);
        if(((ATgetType(c_45) == AT_LIST) && !(ATisEmpty(c_45))))
          {
            i_105 = ATgetFirst((ATermList) c_45);
            {
              ATerm e_45 = (ATerm) ATgetNext((ATermList) c_45);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_105;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_105;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_105;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_105;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_106 (ATerm l_105, ATerm m_105, ATerm n_105, ATerm t)
{
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL,t_105 = NULL,g_37 = NULL;
  t = SSLgetAnnotations(n_105);
  q_105 = t;
  t = l_105;
  if(match_cons(t, sym_Path_1))
    {
      t_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_105, m_105);
  g_37 = t;
  t = SSLsetAnnotations(g_37, q_105);
  if(match_cons(t, sym__2))
    {
      o_105 = ATgetArgument(t, 0);
      p_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(o_105, p_105, t);
  return(t);
}
ATerm k_106 (ATerm v_105, ATerm w_105, ATerm x_105, ATerm t)
{
  ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL,d_106 = NULL,i_37 = NULL;
  t = SSLgetAnnotations(x_105);
  a_106 = t;
  t = SSL_is_string(v_105);
  d_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_106, w_105);
  i_37 = t;
  t = SSLsetAnnotations(i_37, a_106);
  if(match_cons(t, sym__2))
    {
      y_105 = ATgetArgument(t, 0);
      z_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(y_105, z_105, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_45 = ATgetArgument(t, 0);
      ATerm h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_106 = t;
  if(match_cons(t, sym__2))
    {
      g_106 = ATgetArgument(t, 0);
      h_106 = ATgetArgument(t, 1);
      {
        ATerm j_45 = t;
        int k_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_106(f_106, t);
            ;
            LocalPopChoice(k_45);
          }
        else
          {
            t = j_45;
            {
              ATerm o_45 = t;
              int p_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_106(g_106, h_106, f_106, t);
                  ;
                  LocalPopChoice(p_45);
                }
              else
                {
                  t = o_45;
                  t = k_106(g_106, h_106, f_106, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_106(f_106, t);
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_q_45;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  ATerm r_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_106 = NULL;
      o_106 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_106, term_t_45);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_45);
    }
  else
    {
      t = r_45;
      t = debug_1_0(b_7, t);
      _fail(t);
    }
  m_106 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(n_106, t);
  l_106 = t;
  t = m_106;
  t = fclose_0_0(t);
  t = l_106;
  return(t);
}
ATerm fetch_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm q_107 (ATerm t)
  {
    ATerm n_107 = NULL,o_107 = NULL,p_107 = NULL;
    n_107 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_107 = ATgetFirst((ATermList) t);
        p_107 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_45 = t;
      int c_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_49 = NULL,l_49 = NULL,r_37 = NULL;
          t = SSLgetAnnotations(n_107);
          g_49 = t;
          t = o_107;
          t = f_87(t);
          l_49 = t;
          t = (ATerm) ATinsert(CheckATermList(p_107), l_49);
          r_37 = t;
          t = SSLsetAnnotations(r_37, g_49);
          ;
          LocalPopChoice(c_46);
        }
      else
        {
          t = w_45;
          {
            ATerm t_49 = NULL,w_49 = NULL,s_37 = NULL;
            t = SSLgetAnnotations(n_107);
            t_49 = t;
            t = p_107;
            t = q_107(t);
            w_49 = t;
            t = (ATerm) ATinsert(CheckATermList(w_49), o_107);
            s_37 = t;
            t = SSLsetAnnotations(s_37, t_49);
          }
        }
    }
    return(t);
  }
  t = q_107(t);
  return(t);
}
ATerm l_8 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_strcat(y_36, z_36);
  return(t);
}
ATerm debug_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL,w_107 = NULL,b_108 = NULL;
  t_107 = t;
  t = v_99(t);
  u_107 = t;
  t = term_a_11;
  w_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_107), u_107);
  b_108 = t;
  t = SSL_printnl(w_107, b_108);
  t = t_107;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_108 = NULL;
      i_108 = t;
      t = SSL_is_string(i_108);
      ;
      LocalPopChoice(h_46);
    }
  else
    {
      t = g_46;
      {
        ATerm i_46 = t;
        int j_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_7, t);
            ;
            LocalPopChoice(j_46);
          }
        else
          {
            t = i_46;
            {
              ATerm o_108 = NULL,p_108 = NULL,q_108 = NULL;
              o_108 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_108 = ATgetArgument(t, 0);
                  t = p_108;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_108 = ATgetArgument(t, 0);
                      t = p_108;
                      {
                        ATerm k_46 = t;
                        int l_46 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_46);
                          }
                        else
                          {
                            t = k_46;
                            t = debug_1_0(d_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_108 = NULL,v_108 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_108 = ATgetArgument(t, 0);
                          q_108 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_108;
                      t = eval_config_0_0(t);
                      u_108 = t;
                      t = q_108;
                      t = eval_config_0_0(t);
                      v_108 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_108, v_108);
                      t = l_8(u_108, v_108, t);
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
  ATerm z_108 = NULL,a_109 = NULL;
  z_108 = t;
  t = term_m_46;
  a_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_46, z_108);
  t = u_8(a_109, z_108, t);
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_109 = NULL,d_109 = NULL;
        t = eval_config_0_0(t);
        b_109 = t;
        t = term_m_46;
        d_109 = t;
        t = SSL_table_put(d_109, z_108, b_109);
        t = b_109;
        ;
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm h_109 = NULL;
  h_109 = t;
  {
    ATerm q_46 = t;
    int r_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_109 = NULL;
        t = term_w_46;
        t = get_config_0_0(t);
        j_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_109, term_a_47);
        t = geq_0_0(t);
        t = h_109;
        t = i_101(t);
        ;
        LocalPopChoice(r_46);
      }
    else
      {
        t = q_46;
        t = h_109;
      }
  }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm m_109 = NULL;
  m_109 = t;
  if(match_string(t, "-k"))
    {
      t = m_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_109;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL;
  n_109 = t;
  t = SSL_string_to_int(n_109);
  o_109 = t;
  t = term_c_47;
  p_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_47, o_109);
  t = x_8(p_109, o_109, t);
  t = n_109;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_e_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_7, g_7, h_7, t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm r_109 = NULL;
  r_109 = t;
  if(match_string(t, "-S"))
    {
      t = r_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_109;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm s_109 = NULL,t_109 = NULL;
  t = term_w_46;
  s_109 = t;
  t = term_f_47;
  t_109 = t;
  t = term_g_47;
  t = x_8(s_109, t_109, t);
  t = term_h_47;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_j_47;
  return(t);
}
ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  u_109 = t;
  t = SSL_string_to_int(u_109);
  v_109 = t;
  t = term_w_46;
  w_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_46, v_109);
  t = x_8(w_109, v_109, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_109);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_k_47;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm x_109 = NULL,y_109 = NULL;
  t = term_o_47;
  x_109 = t;
  t = term_z_10;
  y_109 = t;
  t = term_p_47;
  t = x_8(x_109, y_109, t);
  t = term_t_47;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_w_47;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_47 = t;
  int z_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_7, p_7, q_7, t);
      ;
      LocalPopChoice(z_47);
    }
  else
    {
      t = x_47;
      {
        ATerm c_48 = t;
        int e_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_7, s_7, t_7, t);
            ;
            LocalPopChoice(e_48);
          }
        else
          {
            t = c_48;
            t = Option_3_0(u_7, v_7, y_7, t);
          }
      }
    }
  return(t);
}
ATerm x_8 (ATerm a_48, ATerm b_48, ATerm t)
{
  ATerm z_109 = NULL;
  t = term_m_46;
  z_109 = t;
  t = SSL_table_put(z_109, a_48, b_48);
  t = (ATerm) ATmakeAppl(sym__3, term_m_46, a_48, b_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL;
      t = term_z_10;
      t = h_0(t);
      e_110 = t;
      t = term_f_48;
      f_110 = t;
      t = term_g_48;
      g_110 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_48, term_g_48, e_110);
      t = v_8(f_110, g_110, e_110, t);
      _fail(t);
    }
  else
    {
      ATerm j_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_110 = ATgetFirst((ATermList) t);
          d_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_110;
      t = d_0(t);
      t = term_z_10;
      t = g_0(t);
      j_110 = t;
      t = (ATerm) ATinsert(CheckATermList(d_110), j_110);
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm l_110 = NULL;
  l_110 = t;
  if(match_string(t, "-o"))
    {
      t = l_110;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_110;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL;
  m_110 = t;
  t = term_p_48;
  n_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_48, m_110);
  t = x_8(n_110, m_110, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_110);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_q_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_7, e_8, f_8, t);
  return(t);
}
ATerm v_8 (ATerm i_50, ATerm j_50, ATerm h_50, ATerm t)
{
  ATerm p_110 = NULL,q_110 = NULL,r_110 = NULL;
  p_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_50, j_50);
  {
    ATerm r_48 = t;
    int s_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_48 = ATgetArgument(t, 0);
            ATerm u_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_50, j_50);
        t = u_8(i_50, j_50, t);
        ;
        LocalPopChoice(s_48);
      }
    else
      {
        t = r_48;
        t = (ATerm) ATempty;
      }
    q_110 = t;
    t = (ATerm) ATinsert(CheckATermList(q_110), h_50);
    r_110 = t;
    t = SSL_table_put(i_50, j_50, r_110);
    t = p_110;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL;
      t = term_z_10;
      t = p_0(t);
      c_111 = t;
      t = term_f_48;
      d_111 = t;
      t = term_g_48;
      e_111 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_48, term_g_48, c_111);
      t = v_8(d_111, e_111, c_111, t);
      _fail(t);
    }
  else
    {
      ATerm i_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_110 = ATgetFirst((ATermList) t);
          z_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_111 = ATgetFirst((ATermList) t);
          b_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_110;
      t = m_0(t);
      t = a_111;
      t = n_0(t);
      i_111 = t;
      t = (ATerm) ATinsert(CheckATermList(b_111), i_111);
    }
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm k_111 = NULL;
  k_111 = t;
  if(match_string(t, "-i"))
    {
      t = k_111;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_111;
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL;
  l_111 = t;
  t = term_w_48;
  m_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_48, l_111);
  t = x_8(m_111, l_111, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_111);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_y_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_8, h_8, j_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_10;
  t = whoami_0_0(t);
  n_111 = t;
  t = term_a_11;
  p_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_48), n_111);
  q_111 = t;
  t = SSL_printnl(p_111, q_111);
  t = term_e_11;
  o_111 = t;
  t = SSL_exit(o_111);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_49;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_8 (ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm b_49 = t;
  int c_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_39, j_39);
      ;
      LocalPopChoice(c_49);
    }
  else
    {
      t = b_49;
      t = SSL_addr(i_39, j_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm t)
{
  ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL;
  s_111 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_111;
      t = s_92(t);
    }
  else
    {
      ATerm x_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_111 = ATgetFirst((ATermList) t);
          u_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_111;
      t = foldr_2_0(s_92, t_92, t);
      x_111 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_111, x_111);
      t = t_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_f_47;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm l_51 = NULL,r_52 = NULL;
  if(match_cons(t, sym__2))
    {
      l_51 = ATgetArgument(t, 0);
      r_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8(l_51, r_52, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_112 = NULL,h_51 = NULL,i_51 = NULL;
  t = times_0_0(t);
  i_51 = t;
  t = SSL_explode_term(i_51);
  if(match_cons(t, sym__2))
    {
      ATerm d_49 = ATgetArgument(t, 0);
      h_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_51;
  t = foldr_2_0(c_9, d_9, t);
  a_112 = t;
  t = SSL_TicksToSeconds(a_112);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
  l_112 = t;
  if(match_cons(t, sym__2))
    {
      m_112 = ATgetArgument(t, 0);
      n_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_49 = t;
    int h_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_112;
        if((m_112 != t))
          {
            _fail(t);
          }
        t = l_112;
        ;
        LocalPopChoice(h_49);
      }
    else
      {
        t = f_49;
        t = (ATerm) ATmakeAppl(sym__2, m_112, n_112);
        {
          ATerm i_49 = t;
          int j_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_112, n_112);
              ;
              LocalPopChoice(j_49);
            }
          else
            {
              t = i_49;
              t = SSL_gtr(m_112, n_112);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_112, n_112);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm r_112 = NULL;
  r_112 = t;
  {
    ATerm k_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_112 = NULL;
        t = term_w_46;
        t = get_config_0_0(t);
        t_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_112, term_e_11);
        t = geq_0_0(t);
        t = r_112;
        t = h_101(t);
        ;
        LocalPopChoice(m_49);
      }
    else
      {
        t = k_49;
        t = r_112;
      }
  }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm v_112 = NULL,w_112 = NULL,y_112 = NULL,z_112 = NULL;
  t = run_time_0_0(t);
  v_112 = t;
  t = term_z_10;
  t = whoami_0_0(t);
  w_112 = t;
  t = term_a_11;
  y_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_49), v_112), term_n_49), w_112);
  z_112 = t;
  t = SSL_printnl(y_112, z_112);
  t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_49), v_112), term_n_49), w_112));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_113 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_47;
  a_113 = t;
  t = SSL_exit(a_113);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm i_113 = NULL,j_113 = NULL;
  j_113 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_113;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_113 = ATgetArgument(t, 0);
          {
            ATerm m_53 = NULL,w_38 = NULL;
            t = SSLgetAnnotations(j_113);
            m_53 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_113);
            w_38 = t;
            t = SSLsetAnnotations(w_38, m_53);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_113;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm p_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_49;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_49);
    }
  else
    {
      t = p_49;
      t = fetch_1_0(f_9, t);
    }
  t = v_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_113 = ATgetFirst((ATermList) t);
      n_113 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_113 = NULL,s_113 = NULL;
        ATerm g_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_113)), not_null(s_113));
          return(t);
        }
        t = n_113;
        t = k_0(t);
        if(((r_113 != NULL) && (r_113 != t)))
          _fail(t);
        else
          r_113 = t;
        t = m_113;
        t = j_0(t);
        if(((s_113 != NULL) && (s_113 != t)))
          _fail(t);
        else
          s_113 = t;
        t = n_113;
        t = reverse_acc_2_0(j_0, g_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_10;
      t = k_0(t);
    }
  return(t);
}
ATerm u_8 (ATerm z_51, ATerm a_52, ATerm t)
{
  t = SSL_table_get(z_51, a_52);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm f_114 = NULL,w_54 = NULL,x_54 = NULL;
  f_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_114), term_s_49);
  {
    ATerm u_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(v_49);
      }
    else
      {
        t = u_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, f_114), term_s_49));
      }
    w_54 = t;
    t = term_v_44;
    x_54 = t;
    t = SSL_printnl(x_54, w_54);
    t = (ATerm) ATinsert(ATinsert(ATempty, f_114), term_s_49);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL,t_54 = NULL,u_54 = NULL;
  ATerm x_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_49;
      t = get_config_0_0(t);
      w_113 = t;
      ;
      LocalPopChoice(y_49);
    }
  else
    {
      t = x_49;
      {
        ATerm h_9 (ATerm t)
        {
          ATerm z_113 = NULL,a_114 = NULL,b_114 = NULL,e_39 = NULL;
          b_114 = t;
          if(match_cons(t, sym_Program_1))
            {
              a_114 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_114);
          z_113 = t;
          t = a_114;
          if(((w_113 != NULL) && (w_113 != t)))
            _fail(t);
          else
            w_113 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, a_114);
          e_39 = t;
          t = SSLsetAnnotations(e_39, z_113);
          return(t);
        }
        t = fetch_1_0(h_9, t);
      }
    }
  {
    ATerm z_49 = t;
    int a_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_54 = NULL,h_54 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_50), not_null(w_113)), term_b_50);
        {
          ATerm d_50 = t;
          int e_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              ;
              LocalPopChoice(e_50);
            }
          else
            {
              t = d_50;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_50), not_null(w_113)), term_b_50));
            }
          g_54 = t;
          t = term_v_44;
          h_54 = t;
          t = SSL_printnl(h_54, g_54);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_50), not_null(w_113)), term_b_50);
        }
        ;
        LocalPopChoice(a_50);
      }
    else
      {
        t = z_49;
      }
    t = term_f_50;
    {
      ATerm g_50 = t;
      int k_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(k_50);
        }
      else
        {
          t = g_50;
          t = (ATerm) ATinsert(ATempty, term_f_50);
        }
      t_54 = t;
      t = term_v_44;
      u_54 = t;
      t = SSL_printnl(u_54, t_54);
      t = term_f_48;
      x_113 = t;
      t = term_g_48;
      y_113 = t;
      t = term_l_50;
      t = u_8(x_113, y_113, t);
      t = reverse_acc_2_0(_id, i_9, t);
      t = map_1_0(l_9, t);
      {
        ATerm m_50 = t;
        int n_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_54 = NULL,a_55 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_50), term_q_50), term_p_50), term_o_50);
            {
              ATerm s_50 = t;
              int t_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_list_0_0(t);
                  ;
                  LocalPopChoice(t_50);
                }
              else
                {
                  t = s_50;
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_50), term_q_50), term_p_50), term_o_50));
                }
              z_54 = t;
              t = term_v_44;
              a_55 = t;
              t = SSL_printnl(a_55, z_54);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_50), term_q_50), term_p_50), term_o_50);
            }
            ;
            LocalPopChoice(n_50);
          }
        else
          {
            t = m_50;
          }
      }
    }
  }
  return(t);
}
ATerm map_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm x_114 (ATerm t)
  {
    ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
    u_114 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_114;
      }
    else
      {
        ATerm e_55 = NULL,h_55 = NULL,i_55 = NULL,k_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_114 = ATgetFirst((ATermList) t);
            w_114 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_114);
        e_55 = t;
        t = v_114;
        t = v_86(t);
        h_55 = t;
        t = w_114;
        t = x_114(t);
        i_55 = t;
        t = (ATerm) ATinsert(CheckATermList(i_55), h_55);
        k_39 = t;
        t = SSLsetAnnotations(k_39, e_55);
      }
    return(t);
  }
  t = x_114(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm u_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_115 = NULL;
      i_115 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = i_115;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_50 = ATgetFirst((ATermList) t);
              ATerm x_50 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_115;
        }
      ;
      LocalPopChoice(v_50);
    }
  else
    {
      t = u_50;
      {
        ATerm a_117 (ATerm t)
        {
          ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
          y_116 = t;
          if(match_cons(t, sym_iter_1))
            {
              z_116 = ATgetArgument(t, 0);
              {
                ATerm n_56 = NULL,m_39 = NULL;
                t = SSLgetAnnotations(y_116);
                n_56 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, z_116);
                m_39 = t;
                t = SSLsetAnnotations(m_39, n_56);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  z_116 = ATgetArgument(t, 0);
                  x_116 = ATgetArgument(t, 1);
                  {
                    ATerm f_57 = NULL,n_39 = NULL;
                    t = SSLgetAnnotations(y_116);
                    f_57 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, z_116, x_116);
                    n_39 = t;
                    t = SSLsetAnnotations(n_39, f_57);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      z_116 = ATgetArgument(t, 0);
                      {
                        ATerm o_57 = NULL,o_39 = NULL;
                        t = SSLgetAnnotations(y_116);
                        o_57 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, z_116);
                        o_39 = t;
                        t = SSLsetAnnotations(o_39, o_57);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          z_116 = ATgetArgument(t, 0);
                          x_116 = ATgetArgument(t, 1);
                          {
                            ATerm w_57 = NULL,p_39 = NULL;
                            t = SSLgetAnnotations(y_116);
                            w_57 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, z_116, x_116);
                            p_39 = t;
                            t = SSLsetAnnotations(p_39, w_57);
                          }
                        }
                      else
                        {
                          ATerm f_58 = NULL,h_58 = NULL,r_39 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              z_116 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(y_116);
                          f_58 = t;
                          t = z_116;
                          {
                            ATerm m_9 (ATerm t)
                            {
                              ATerm y_50 = t;
                              int z_50 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm o_58 = NULL,p_58 = NULL;
                                  p_58 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      o_58 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_58 = NULL,q_39 = NULL;
                                        t = SSLgetAnnotations(p_58);
                                        v_58 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, o_58);
                                        q_39 = t;
                                        t = SSLsetAnnotations(q_39, v_58);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = p_58;
                                    }
                                  ;
                                  LocalPopChoice(z_50);
                                }
                              else
                                {
                                  t = y_50;
                                  t = a_117(t);
                                }
                              return(t);
                            }
                            t = map_1_0(m_9, t);
                            h_58 = t;
                            t = (ATerm) ATmakeAppl(sym_seq_1, h_58);
                            r_39 = t;
                            t = SSLsetAnnotations(r_39, f_58);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = a_117(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
  t = term_a_49;
  t = get_config_0_0(t);
  a_59 = t;
  {
    ATerm a_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(e_51);
      }
    else
      {
        t = a_51;
        t = (ATerm) ATinsert(ATempty, a_59);
      }
    b_59 = t;
    t = term_v_44;
    c_59 = t;
    t = SSL_printnl(c_59, b_59);
    t = a_59;
  }
  return(t);
}
ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm k_117 = NULL,l_117 = NULL;
  t = term_f_51;
  k_117 = t;
  t = term_z_10;
  l_117 = t;
  t = term_g_51;
  t = x_8(k_117, l_117, t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_j_51;
  return(t);
}
ATerm u_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
  t = term_f_51;
  o_117 = t;
  t = term_z_10;
  p_117 = t;
  t = term_g_51;
  t = x_8(o_117, p_117, t);
  t = term_k_51;
  m_117 = t;
  t = term_z_10;
  n_117 = t;
  t = term_k_52;
  t = x_8(m_117, n_117, t);
  t = term_l_52;
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_m_52;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_52 = t;
  int s_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_9, s_9, t_9, t);
      ;
      LocalPopChoice(s_52);
    }
  else
    {
      t = o_52;
      t = Option_3_0(u_9, w_9, x_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL,p_40 = NULL;
  v_117 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_117 = ATgetFirst((ATermList) t);
      s_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_117);
  q_117 = t;
  t = r_117;
  t = r_65(t);
  t_117 = t;
  t = s_117;
  t = s_65(t);
  u_117 = t;
  t = (ATerm) ATinsert(CheckATermList(u_117), t_117);
  p_40 = t;
  t = SSLsetAnnotations(p_40, q_117);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_104 (ATerm), ATerm t)
{
  ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL,f_118 = NULL,g_118 = NULL,r_40 = NULL;
  a_118 = t;
  {
    ATerm t_52 = t;
    int u_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_52;
        t = d_104(t);
        ;
        LocalPopChoice(u_52);
      }
    else
      {
        t = t_52;
      }
    t = a_118;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_118 = ATgetFirst((ATermList) t);
        d_118 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_118);
    b_118 = t;
    t = term_a_49;
    g_118 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_49, c_118);
    t = x_8(g_118, c_118, t);
    t = d_118;
    {
      ATerm q_118 (ATerm t)
      {
        ATerm w_52 = t;
        int d_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_53 = t;
            int f_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_118 = NULL;
                j_118 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_118;
                ;
                LocalPopChoice(f_53);
              }
            else
              {
                t = e_53;
                t = d_104(t);
                t = Cons_2_0(_id, q_118, t);
              }
            ;
            LocalPopChoice(d_53);
          }
        else
          {
            t = w_52;
            {
              ATerm m_118 = NULL,n_118 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_118 = ATgetFirst((ATermList) t);
                  n_118 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_118), (ATerm) ATmakeAppl(sym_Undefined_1, m_118));
            }
          }
        return(t);
      }
      t = q_118(t);
      f_118 = t;
      t = (ATerm) ATinsert(CheckATermList(f_118), (ATerm) ATmakeAppl(sym_Program_1, c_118));
      r_40 = t;
      t = SSLsetAnnotations(r_40, b_118);
    }
  }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm c_119 = NULL;
  c_119 = t;
  if(match_string(t, "--help"))
    {
      t = c_119;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_119;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_119;
        }
    }
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm d_119 = NULL,e_119 = NULL;
  t = term_r_49;
  d_119 = t;
  t = term_z_10;
  e_119 = t;
  t = term_i_53;
  t = x_8(d_119, e_119, t);
  t = term_k_53;
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = term_l_53;
  return(t);
}
ATerm f_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL,b_119 = NULL;
  x_118 = t;
  t = term_f_48;
  z_118 = t;
  t = term_g_48;
  a_119 = t;
  t = (ATerm) ATempty;
  b_119 = t;
  t = SSL_table_put(z_118, a_119, b_119);
  t = x_118;
  {
    ATerm y_9 (ATerm t)
    {
      ATerm o_53 = t;
      int p_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_104(t);
          ;
          LocalPopChoice(p_53);
        }
      else
        {
          t = o_53;
          {
            ATerm u_53 = t;
            int y_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_9, a_10, c_10, t);
                ;
                LocalPopChoice(y_53);
              }
            else
              {
                t = u_53;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_9, t);
    {
      ATerm z_53 = t;
      int b_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_119 = NULL;
          l_119 = t;
          {
            ATerm c_54 = t;
            int d_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_59 = NULL;
                t = l_119;
                {
                  ATerm e_54 = t;
                  int f_54 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_49;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_54);
                    }
                  else
                    {
                      t = e_54;
                      t = fetch_1_0(f_10, t);
                    }
                  t = l_119;
                  t = default_system_usage_0_0(t);
                  t = term_f_47;
                  f_59 = t;
                  t = SSL_exit(f_59);
                }
                ;
                LocalPopChoice(d_54);
              }
            else
              {
                t = c_54;
                {
                  ATerm j_59 = NULL;
                  t = term_f_51;
                  t = get_config_0_0(t);
                  t = l_119;
                  t = default_system_about_0_0(t);
                  t = term_f_47;
                  j_59 = t;
                  t = SSL_exit(j_59);
                }
              }
          }
          ;
          LocalPopChoice(b_54);
        }
      else
        {
          t = z_53;
          {
            ATerm i_54 = t;
            int j_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_119 = NULL,n_119 = NULL,o_119 = NULL;
                ATerm m_10 (ATerm t)
                {
                  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL,t_40 = NULL;
                  r_119 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_119 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_119);
                  p_119 = t;
                  t = q_119;
                  if(((v_118 != NULL) && (v_118 != t)))
                    _fail(t);
                  else
                    v_118 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_119);
                  t_40 = t;
                  t = SSLsetAnnotations(t_40, p_119);
                  return(t);
                }
                t = fetch_1_0(m_10, t);
                t = term_a_11;
                n_119 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_118)), term_m_54);
                o_119 = t;
                t = SSL_printnl(n_119, o_119);
                t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_118)), term_m_54));
                t = default_system_usage_0_0(t);
                t = term_e_11;
                m_119 = t;
                t = SSL_exit(m_119);
                ;
                LocalPopChoice(j_54);
              }
            else
              {
                t = i_54;
              }
          }
        }
      w_118 = t;
      t = term_f_48;
      y_118 = t;
      t = SSL_table_destroy(y_118);
      t = w_118;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm t)
{
  ATerm w_119 = NULL,x_119 = NULL,y_119 = NULL,z_119 = NULL;
  t = parse_options_1_0(x_107, t);
  w_119 = t;
  t = term_n_54;
  z_119 = t;
  t = SSL_table_create(z_119);
  t = term_n_54;
  x_119 = t;
  t = term_p_54;
  y_119 = t;
  t = SSL_table_put(x_119, y_119, w_119);
  t = w_119;
  t = z_107(t);
  {
    ATerm s_54 = t;
    int v_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_107, t);
        ;
        LocalPopChoice(v_54);
      }
    else
      {
        t = s_54;
        {
          ATerm y_54 = t;
          int b_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_108(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_55);
            }
          else
            {
              t = y_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = if_verbose2_1_0(x_10, t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm a_120 = NULL,b_120 = NULL;
  t = term_c_55;
  a_120 = t;
  t = term_z_10;
  b_120 = t;
  t = term_d_55;
  t = x_8(a_120, b_120, t);
  t = term_f_55;
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_g_55;
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL;
  c_120 = t;
  t = term_a_49;
  t = get_config_0_0(t);
  d_120 = t;
  t = term_a_11;
  e_120 = t;
  t = (ATerm) ATinsert(ATempty, d_120);
  f_120 = t;
  t = SSL_printnl(e_120, f_120);
  t = c_120;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_107(t);
        ;
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        {
          ATerm l_55 = t;
          int m_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_55);
            }
          else
            {
              t = l_55;
              {
                ATerm n_55 = t;
                int o_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(o_55);
                  }
                else
                  {
                    t = n_55;
                    {
                      ATerm p_55 = t;
                      int q_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_10, u_10, v_10, t);
                          ;
                          LocalPopChoice(q_55);
                        }
                      else
                        {
                          t = p_55;
                          {
                            ATerm r_55 = t;
                            int s_55 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(s_55);
                              }
                            else
                              {
                                t = r_55;
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
  ATerm q_10 (ATerm t)
  {
    ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL;
    h_120 = t;
    {
      ATerm t_55 = t;
      int u_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_120 != NULL) && (g_120 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_120 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_10, t);
          ;
          LocalPopChoice(u_55);
        }
      else
        {
          t = t_55;
          t = term_v_55;
          g_120 = t;
        }
      t = not_null(g_120);
      t = ReadFromFile_0_0(t);
      i_120 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_120, i_120);
      t = apply_strategy_1_0(g_107, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_10, i_107, p_10, q_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(implode_0_0, implode_options_0_0, default_usage_0_0, t);
  return(t);
}

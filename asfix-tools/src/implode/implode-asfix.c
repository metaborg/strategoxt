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
ATerm term_i_47;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_t_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_i_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_z_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_s_42;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_y_40;
ATerm term_w_40;
ATerm term_j_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_b_38;
ATerm term_w_37;
ATerm term_u_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_n_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_z_35;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_q_30;
ATerm term_t_29;
ATerm term_r_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_d_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_j_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_h_22;
ATerm term_h_21;
ATerm term_r_20;
ATerm term_x_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_c_17;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_m_11;
void init_constant_terms (void)
{
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_37);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym__3, term_s_42, term_v_42, term_m_11);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm implode_options_0_0 (ATerm);
ATerm amb_1_0 (ATerm i_83 (ATerm), ATerm);
ATerm is_conc_0_0 (ATerm);
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm ReplConsSome_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm is_ins_0_0 (ATerm);
ATerm ReplConsIns_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm is_nil_0_0 (ATerm);
ATerm ReplNamedCons_1_0 (ATerm n_89 (ATerm), ATerm);
ATerm ReplCons_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm OptList_0_0 (ATerm);
ATerm is_layout_0_0 (ATerm);
ATerm implodeAsfix_0_0 (ATerm);
ATerm Tuple_0_0 (ATerm);
ATerm topdown_1_0 (ATerm z_91 (ATerm), ATerm);
ATerm CTC2_0_0 (ATerm);
ATerm Conc_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm);
ATerm CTC1_0_0 (ATerm);
ATerm conc_to_cons_0_0 (ATerm);
ATerm Constr1_0_0 (ATerm);
ATerm CnsGeneric_0_0 (ATerm);
ATerm ConstrNil_0_0 (ATerm);
ATerm replace_appl_0_0 (ATerm);
ATerm FlatAlt_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm cons_1_0 (ATerm b_83 (ATerm), ATerm);
ATerm lex_1_0 (ATerm k_82 (ATerm), ATerm);
ATerm alt_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm injective_alt_0_0 (ATerm);
ATerm varsym_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm injection_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm a_92 (ATerm), ATerm);
ATerm filter_1_0 (ATerm v_104 (ATerm), ATerm);
ATerm FlatList_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm PpSym_0_0 (ATerm);
ATerm sort_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_91 (ATerm), ATerm);
ATerm layout_1_0 (ATerm j_77 (ATerm), ATerm);
ATerm opt_1_0 (ATerm l_82 (ATerm), ATerm);
ATerm cf_1_0 (ATerm j_82 (ATerm), ATerm);
ATerm is_layout_p__0_0 (ATerm);
ATerm prod_3_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm);
ATerm appl_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm flat_layout_0_0 (ATerm);
ATerm yield_0_0 (ATerm);
ATerm implode_lexical_0_0 (ATerm);
ATerm downup2_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm);
ATerm implode_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_110 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_117 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_98 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm _2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_111 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_111 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm e_118 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_82 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm lit_1_0 (ATerm n_82 (ATerm), ATerm);
ATerm list_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm seq_1_0 (ATerm m_82 (ATerm), ATerm);
ATerm iter_star_sep_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm iter_1_0 (ATerm s_82 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_114 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_114 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  b_0 = t;
  t = term_m_11;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_0 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_0 (ATerm t)
      {
        t = term_q_11;
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        t = term_r_11;
        return(t);
      }
      t = Option_3_0(e_0, i_0, r_0, t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm t_0 (ATerm t)
            {
              t = term_u_11;
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = term_v_11;
              return(t);
            }
            t = Option_3_0(s_0, t_0, u_0, t);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            {
              ATerm x_11 = t;
              int z_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_0 (ATerm t)
                  {
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
                      _fail(t);
                    return(t);
                  }
                  ATerm w_0 (ATerm t)
                  {
                    t = term_a_12;
                    return(t);
                  }
                  ATerm x_0 (ATerm t)
                  {
                    t = term_b_12;
                    return(t);
                  }
                  t = Option_3_0(v_0, w_0, x_0, t);
                  ;
                  LocalPopChoice(z_11);
                }
              else
                {
                  t = x_11;
                  {
                    ATerm c_12 = t;
                    int d_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_0 (ATerm t)
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
                            _fail(t);
                          return(t);
                        }
                        ATerm z_0 (ATerm t)
                        {
                          t = term_e_12;
                          return(t);
                        }
                        ATerm a_1 (ATerm t)
                        {
                          t = term_f_12;
                          return(t);
                        }
                        t = Option_3_0(y_0, z_0, a_1, t);
                        ;
                        LocalPopChoice(d_12);
                      }
                    else
                      {
                        t = c_12;
                        {
                          ATerm g_12 = t;
                          int h_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_1 (ATerm t)
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm c_1 (ATerm t)
                              {
                                t = term_i_12;
                                return(t);
                              }
                              ATerm d_1 (ATerm t)
                              {
                                t = term_j_12;
                                return(t);
                              }
                              t = Option_3_0(b_1, c_1, d_1, t);
                              ;
                              LocalPopChoice(h_12);
                            }
                          else
                            {
                              t = g_12;
                              {
                                ATerm k_12 = t;
                                int l_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_1 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm f_1 (ATerm t)
                                    {
                                      t = term_m_12;
                                      return(t);
                                    }
                                    ATerm g_1 (ATerm t)
                                    {
                                      t = term_n_12;
                                      return(t);
                                    }
                                    t = Option_3_0(e_1, f_1, g_1, t);
                                    ;
                                    LocalPopChoice(l_12);
                                  }
                                else
                                  {
                                    t = k_12;
                                    {
                                      ATerm o_12 = t;
                                      int p_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_1 (ATerm t)
                                          {
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_1 (ATerm t)
                                          {
                                            t = term_q_12;
                                            return(t);
                                          }
                                          ATerm n_1 (ATerm t)
                                          {
                                            t = term_r_12;
                                            return(t);
                                          }
                                          t = Option_3_0(h_1, k_1, n_1, t);
                                          ;
                                          LocalPopChoice(p_12);
                                        }
                                      else
                                        {
                                          t = o_12;
                                          {
                                            ATerm s_12 = t;
                                            int t_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_1 (ATerm t)
                                                {
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm q_1 (ATerm t)
                                                {
                                                  t = term_u_12;
                                                  return(t);
                                                }
                                                ATerm s_1 (ATerm t)
                                                {
                                                  t = term_v_12;
                                                  return(t);
                                                }
                                                t = Option_3_0(p_1, q_1, s_1, t);
                                                ;
                                                LocalPopChoice(t_12);
                                              }
                                            else
                                              {
                                                t = s_12;
                                                {
                                                  ATerm w_12 = t;
                                                  int x_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_1 (ATerm t)
                                                      {
                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm u_1 (ATerm t)
                                                      {
                                                        t = term_y_12;
                                                        return(t);
                                                      }
                                                      ATerm v_1 (ATerm t)
                                                      {
                                                        t = term_z_12;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(t_1, u_1, v_1, t);
                                                      ;
                                                      LocalPopChoice(x_12);
                                                    }
                                                  else
                                                    {
                                                      t = w_12;
                                                      {
                                                        ATerm w_1 (ATerm t)
                                                        {
                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
                                                            _fail(t);
                                                          return(t);
                                                        }
                                                        ATerm z_1 (ATerm t)
                                                        {
                                                          t = term_a_13;
                                                          return(t);
                                                        }
                                                        ATerm b_2 (ATerm t)
                                                        {
                                                          t = term_b_13;
                                                          return(t);
                                                        }
                                                        t = Option_3_0(w_1, z_1, b_2, t);
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
ATerm amb_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym_amb_1))
    {
      o_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_0);
  n_0 = t;
  t = o_0;
  t = i_83(t);
  p_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, p_0), n_0);
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL,r_1 = NULL,y_1 = NULL,a_2 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL;
  m_1 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_1 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
      {
        ATerm c_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_13 = ATgetFirst((ATermList) t);
      r_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_13 = ATgetFirst((ATermList) t);
      y_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_1;
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_13 = ATgetFirst((ATermList) t);
            a_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_13);
        t = a_2;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_2;
            {
              ATerm j_13 = t;
              int k_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm l_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_13);
                  t = m_1;
                }
              else
                {
                  t = j_13;
                  if(match_cons(t, sym_cf_1))
                    {
                      h_2 = ATgetArgument(t, 0);
                      t = h_2;
                      {
                        ATerm m_13 = t;
                        int n_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm o_13 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(n_13);
                            t = m_1;
                          }
                        else
                          {
                            t = m_13;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm p_13 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = m_1;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm q_13 = ATgetArgument(t, 0);
                          ATerm r_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_1;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_13 = ATgetFirst((ATermList) t);
                c_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_2;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_13 = ATgetFirst((ATermList) t);
                e_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_2;
            if(match_cons(t, sym_cf_1))
              {
                h_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_2;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm u_13 = ATgetArgument(t, 0);
                ATerm x_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_1;
          }
      }
    else
      {
        t = f_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm y_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_1;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,e_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
  x_4 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_5 = ATgetFirst((ATermList) t);
      g_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_5 = ATgetFirst((ATermList) t);
      i_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_4 = ATgetFirst((ATermList) t);
      w_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_1 = NULL,j_1 = NULL,l_1 = NULL;
        t = w_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_4;
        t = is_conc_0_0(t);
        t = e_5;
        t = m_0(t);
        i_1 = t;
        t = h_5;
        t = m_0(t);
        j_1 = t;
        t = v_4;
        t = m_0(t);
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, (ATerm) ATinsert(CheckATermList(l_1), j_1));
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm b_14 = ATgetArgument(t, 0);
                  ATerm c_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_1;
              {
                ATerm d_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(CheckATermList(l_1), j_1);
                  return(t);
                }
                t = at_end_1_0(d_2, t);
              }
              ;
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              {
                ATerm x_1 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_1, (ATerm) ATinsert(CheckATermList(l_1), j_1)));
                if(match_cons(t, sym__2))
                  {
                    ATerm d_14 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_14) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    x_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_1;
                t = concat_0_0(t);
              }
            }
        }
      }
    }
  else
    {
      ATerm r_2 = NULL,s_2 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_4;
      t = is_conc_0_0(t);
      t = e_5;
      t = m_0(t);
      r_2 = t;
      t = h_5;
      t = m_0(t);
      s_2 = t;
      {
        ATerm g_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_2;
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  ;
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  t = Cons_2_0(_id, _id, t);
                }
              t = (ATerm) ATmakeAppl(sym__2, r_2, s_2);
              {
                ATerm m_14 = t;
                int n_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm o_14 = ATgetArgument(t, 0);
                        ATerm v_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = r_2;
                    {
                      ATerm g_2 (ATerm t)
                      {
                        t = s_2;
                        return(t);
                      }
                      t = at_end_1_0(g_2, t);
                    }
                    ;
                    LocalPopChoice(n_14);
                  }
                else
                  {
                    t = m_14;
                    {
                      ATerm l_3 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_2, s_2));
                      if(match_cons(t, sym__2))
                        {
                          ATerm w_14 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) w_14) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          l_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_3;
                      t = concat_0_0(t);
                    }
                  }
              }
            }
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = g_14;
            t = (ATerm) ATmakeAppl(sym_Conc_2, r_2, s_2);
          }
      }
    }
  return(t);
}
ATerm ReplConsSome_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm y_5 = NULL,i_6 = NULL,j_6 = NULL,m_6 = NULL,n_6 = NULL,w_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      y_5 = ATgetArgument(t, 0);
      {
        ATerm x_14 = ATgetArgument(t, 1);
        if(((ATgetType(x_14) == AT_LIST) && !(ATisEmpty(x_14))))
          {
            i_6 = ATgetFirst((ATermList) x_14);
            {
              ATerm y_14 = (ATerm) ATgetNext((ATermList) x_14);
              if(((ATgetType(y_14) != AT_LIST) || !(ATisEmpty(y_14))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_5;
  if(match_cons(t, sym_prod_3))
    {
      m_6 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
      {
        ATerm z_14 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = m_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_6 = ATgetFirst((ATermList) t);
      a_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_7;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = b_7;
  if(match_cons(t, sym_opt_1))
    {
      d_7 = ATgetArgument(t, 0);
      t = d_7;
      if((n_6 != t))
        {
          _fail(t);
        }
      t = y_5;
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          d_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_6;
      if(match_cons(t, sym_cf_1))
        {
          w_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_7;
      if(match_cons(t, sym_opt_1))
        {
          m_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_7;
      if((w_6 != t))
        {
          _fail(t);
        }
      t = y_5;
    }
  t = i_6;
  t = r_89(t);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, j_6);
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm e_10 = NULL,l_10 = NULL,s_10 = NULL,z_10 = NULL,g_11 = NULL,p_11 = NULL,w_11 = NULL,y_11 = NULL;
  e_10 = t;
  if(match_cons(t, sym_prod_3))
    {
      l_10 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
      {
        ATerm a_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = l_10;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_10 = ATgetFirst((ATermList) t);
      g_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_11;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_11;
  if(match_cons(t, sym_iter_1))
    {
      w_11 = ATgetArgument(t, 0);
      t = w_11;
      if((s_10 != t))
        {
          _fail(t);
        }
      t = e_10;
    }
  else
    {
      ATerm b_15 = t;
      int c_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              w_11 = ATgetArgument(t, 0);
              {
                ATerm d_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(c_15);
          t = w_11;
          if((s_10 != t))
            {
              _fail(t);
            }
          t = e_10;
        }
      else
        {
          t = b_15;
          if(match_cons(t, sym_cf_1))
            {
              w_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_10;
          if(match_cons(t, sym_cf_1))
            {
              z_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_11;
          if(match_cons(t, sym_iter_1))
            {
              y_11 = ATgetArgument(t, 0);
              t = y_11;
              if((z_10 != t))
                {
                  _fail(t);
                }
              t = e_10;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  y_11 = ATgetArgument(t, 0);
                  {
                    ATerm e_15 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = y_11;
              if((z_10 != t))
                {
                  _fail(t);
                }
              t = e_10;
            }
        }
    }
  return(t);
}
ATerm ReplConsIns_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,v_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      i_13 = ATgetArgument(t, 0);
      {
        ATerm f_15 = ATgetArgument(t, 1);
        if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
          {
            v_13 = ATgetFirst((ATermList) f_15);
            {
              ATerm g_15 = (ATerm) ATgetNext((ATermList) f_15);
              if(((ATgetType(g_15) != AT_LIST) || !(ATisEmpty(g_15))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_13;
  t = is_ins_0_0(t);
  t = v_13;
  t = q_89(t);
  w_13 = t;
  t = (ATerm) ATinsert(ATempty, w_13);
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,h_14 = NULL,j_14 = NULL;
  e_14 = t;
  if(match_cons(t, sym_prod_3))
    {
      f_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
      {
        ATerm h_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = f_14;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = h_14;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm k_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_15);
        t = e_14;
      }
    else
      {
        t = i_15;
        {
          ATerm l_15 = t;
          int m_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm n_15 = ATgetArgument(t, 0);
                  ATerm p_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(m_15);
              t = e_14;
            }
          else
            {
              t = l_15;
              if(match_cons(t, sym_cf_1))
                {
                  j_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = j_14;
              {
                ATerm s_15 = t;
                int t_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm u_15 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_15);
                    t = e_14;
                  }
                else
                  {
                    t = s_15;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm v_15 = ATgetArgument(t, 0);
                        ATerm w_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = e_14;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplNamedCons_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_14;
  if(match_cons(t, sym_prod_3))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      ATerm y_15 = ATgetArgument(t, 1);
      r_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_14;
  {
    ATerm i_2 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((s_14 != NULL) && (s_14 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(i_2, t);
    t = not_null(s_14);
    {
      ATerm z_15 = t;
      int a_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_string(t, "sorts"))
            {
              t = term_b_16;
            }
          else
            {
              if(match_string(t, "imports"))
                {
                  t = term_c_16;
                }
              else
                {
                  if(match_string(t, "id"))
                    {
                      t = term_d_16;
                    }
                  else
                    {
                      if(match_string(t, "hiddens"))
                        {
                          t = term_e_16;
                        }
                      else
                        {
                          if(match_string(t, "exports"))
                            {
                              t = term_f_16;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("module", 0, ATtrue)))
                                _fail(t);
                              t = term_g_16;
                            }
                        }
                    }
                }
            }
          ;
          LocalPopChoice(a_16);
        }
      else
        {
          t = z_15;
        }
      t_14 = t;
      t = q_14;
      t = map_1_0(n_89, t);
      u_14 = t;
      t = SSL_mkterm(t_14, u_14);
    }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1_0(u_89, t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_15 = NULL,q_15 = NULL,r_15 = NULL;
            o_15 = t;
            if(match_cons(t, sym_appl_2))
              {
                q_15 = ATgetArgument(t, 0);
                r_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_15;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            {
              ATerm l_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_15;
                  t = is_nil_0_0(t);
                  t = (ATerm) ATempty;
                  ;
                  LocalPopChoice(m_16);
                }
              else
                {
                  t = l_16;
                  {
                    ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
                    t = q_15;
                    if(match_cons(t, sym_prod_3))
                      {
                        r_3 = ATgetArgument(t, 0);
                        s_3 = ATgetArgument(t, 1);
                        {
                          ATerm n_16 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    t = r_3;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = s_3;
                    {
                      ATerm o_16 = t;
                      int p_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              ATerm v_16 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_16);
                          t = q_15;
                        }
                      else
                        {
                          t = o_16;
                          if(match_cons(t, sym_cf_1))
                            {
                              t_3 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = t_3;
                          if(match_cons(t, sym_opt_1))
                            {
                              ATerm w_16 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = q_15;
                        }
                      t = term_c_17;
                    }
                  }
                }
            }
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            {
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ReplConsIns_1_0(u_89, t);
                  ;
                  LocalPopChoice(f_17);
                }
              else
                {
                  t = e_17;
                  {
                    ATerm g_17 = t;
                    int h_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsSome_1_0(u_89, t);
                        ;
                        LocalPopChoice(h_17);
                      }
                    else
                      {
                        t = g_17;
                        t = ReplConsConc_1_0(u_89, t);
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
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      x_16 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_16;
  if(match_cons(t, sym_prod_3))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      {
        ATerm i_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = y_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_16 = ATgetFirst((ATermList) t);
      s_16 = (ATerm) ATgetNext((ATermList) t);
      t = s_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_16;
      if(match_cons(t, sym_opt_1))
        {
          a_17 = ATgetArgument(t, 0);
          t = d_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_16 = ATgetFirst((ATermList) t);
              u_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_17;
          if((q_16 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = t_16;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              a_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_16;
          if(match_cons(t, sym_cf_1))
            {
              r_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_17;
          if(match_cons(t, sym_opt_1))
            {
              b_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_16 = ATgetFirst((ATermList) t);
              u_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_17;
          if((r_16 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = t_16;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_16;
      if(match_cons(t, sym_opt_1))
        {
          a_17 = ATgetArgument(t, 0);
          t = d_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_17;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              a_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_17;
          if(match_cons(t, sym_opt_1))
            {
              b_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_17;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm is_layout_0_0 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm k_2 (ATerm t)
        {
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 (ATerm t)
              {
                ATerm m_2 (ATerm t)
                {
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  return(t);
                }
                t = opt_1_0(m_2, t);
                return(t);
              }
              t = cf_1_0(l_2, t);
              ;
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
              t = lit_1_0(_id, t);
            }
          return(t);
        }
        t = prod_3_0(_id, k_2, _id, t);
        return(t);
      }
      t = appl_2_0(j_2, _id, t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm o_2 (ATerm t)
          {
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            return(t);
          }
          t = opt_1_0(o_2, t);
          return(t);
        }
        t = cf_1_0(n_2, t);
      }
    }
  return(t);
}
ATerm implodeAsfix_0_0 (ATerm t)
{
  ATerm p_17 = NULL;
  if(match_cons(t, sym_parsetree_2))
    {
      p_17 = ATgetArgument(t, 0);
      {
        ATerm n_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_17;
  {
    ATerm x_17 (ATerm t)
    {
      ATerm o_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0_0(t);
          ;
          LocalPopChoice(q_17);
        }
      else
        {
          t = o_17;
          {
            ATerm v_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm q_2 (ATerm t)
                  {
                    ATerm y_17 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_layout_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = y_17;
                      }
                    return(t);
                  }
                  t = filter_1_0(q_2, t);
                  return(t);
                }
                t = appl_2_0(_id, p_2, t);
                {
                  ATerm z_17 = t;
                  int a_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0_0(t);
                      t = x_17(t);
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
                            t = ReplCons_1_0(x_17, t);
                            ;
                            LocalPopChoice(c_18);
                          }
                        else
                          {
                            t = b_18;
                            {
                              ATerm d_18 = t;
                              int e_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      r_17 = ATgetArgument(t, 0);
                                      s_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = s_17;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      t_17 = ATgetFirst((ATermList) t);
                                      u_17 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = u_17;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = r_17;
                                  t = injection_0_0(t);
                                  t = t_17;
                                  t = x_17(t);
                                  ;
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
                                        t = Tuple_0_0(t);
                                        t = x_17(t);
                                        ;
                                        LocalPopChoice(g_18);
                                      }
                                    else
                                      {
                                        t = f_18;
                                        t = FlatAlt_0_0(t);
                                        t = x_17(t);
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                ;
                LocalPopChoice(w_17);
              }
            else
              {
                t = v_17;
                {
                  ATerm h_18 = t;
                  int i_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_2 (ATerm t)
                      {
                        t = list_1_0(x_17, t);
                        return(t);
                      }
                      t = amb_1_0(t_2, t);
                      ;
                      LocalPopChoice(i_18);
                    }
                  else
                    {
                      t = h_18;
                      t = SRTS_all(x_17, t);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = x_17(t);
  }
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,n_18 = NULL,r_18 = NULL,u_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym_appl_2))
    {
      l_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_18;
  if(match_cons(t, sym_prod_3))
    {
      ATerm j_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
      {
        ATerm m_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_18;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm q_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_18);
        t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), u_18);
      }
    else
      {
        t = o_18;
        if(match_cons(t, sym_cf_1))
          {
            r_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_18;
        if(match_cons(t, sym_seq_1))
          {
            ATerm s_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), u_18);
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  t = z_91(t);
  {
    ATerm u_2 (ATerm t)
    {
      t = topdown_1_0(z_91, t);
      return(t);
    }
    t = SRTS_all(u_2, t);
  }
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
      t = h_19;
      if(match_cons(t, sym_Ins_1))
        {
          f_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_19 = ATgetFirst((ATermList) t);
          d_19 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(d_19), e_19), f_19);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              e_19 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, e_19), f_19);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, f_19);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          h_19 = ATgetArgument(t, 0);
          i_19 = ATgetArgument(t, 1);
          j_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_19), (ATerm) ATinsert(ATempty, i_19)), h_19);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm Conc_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,z_19 = NULL,a_20 = NULL,c_20 = NULL,d_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_Conc_2))
    {
      v_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_20);
  u_19 = t;
  t = v_19;
  t = a_77(t);
  a_20 = t;
  t = z_19;
  t = b_77(t);
  c_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Conc_2, a_20, c_20), u_19);
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      s_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
      t = v_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = s_20;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              ATerm t_18 = t;
              int v_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_20;
                  ;
                  LocalPopChoice(v_18);
                }
              else
                {
                  t = t_18;
                  t = v_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  t_20 = ATgetArgument(t, 0);
                  u_20 = ATgetArgument(t, 1);
                  {
                    ATerm w_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_20;
                        ;
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
                        t = (ATerm) ATmakeAppl(sym_Conc_2, t_20, (ATerm) ATmakeAppl(sym_Conc_2, u_20, v_20));
                      }
                  }
                }
              else
                {
                  t = s_20;
                }
            }
        }
      else
        {
          t = s_20;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = v_20;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  t_20 = ATgetArgument(t, 0);
                  u_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, t_20, (ATerm) ATmakeAppl(sym_Conc_2, u_20, v_20));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          s_20 = ATgetArgument(t, 0);
          v_20 = ATgetArgument(t, 1);
          q_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_20;
      if(match_cons(t, sym_Conc_3))
        {
          t_20 = ATgetArgument(t, 0);
          u_20 = ATgetArgument(t, 1);
          p_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, t_20, u_20, (ATerm) ATmakeAppl(sym_Conc_3, p_20, v_20, q_20));
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_21 = NULL,r_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_21 = ATgetFirst((ATermList) t);
            r_21 = (ATerm) ATgetNext((ATermList) t);
            t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, q_21), r_21);
          }
        else
          {
            if(match_cons(t, sym_Snoc_2))
              {
                q_21 = ATgetArgument(t, 0);
                r_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Conc_2, q_21, (ATerm) ATmakeAppl(sym_Ins_1, r_21));
          }
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC1_0_0(t);
              ;
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              {
                ATerm w_2 (ATerm t)
                {
                  ATerm x_21 = NULL,y_21 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_21 = ATgetFirst((ATermList) t);
                      y_21 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, x_21), y_21);
                    }
                  else
                    {
                      if(match_cons(t, sym_Snoc_2))
                        {
                          x_21 = ATgetArgument(t, 0);
                          y_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Conc_2, x_21, (ATerm) ATmakeAppl(sym_Ins_1, y_21));
                    }
                  return(t);
                }
                t = Conc_2_0(w_2, _id, t);
              }
            }
        }
      }
    return(t);
  }
  t = repeat_1_0(v_2, t);
  {
    ATerm c_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2_0(_id, conc_to_cons_0_0, t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = c_19;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
    {
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC2_0_0(t);
              t = Cons_2_0(conc_to_cons_0_0, _id, t);
              ;
              LocalPopChoice(n_19);
            }
          else
            {
              t = m_19;
              {
                ATerm e_22 = NULL;
                if(match_cons(t, sym_Ins_1))
                  {
                    e_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, e_22);
              }
            }
          ;
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
        }
    }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL,k_23 = NULL,n_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      q_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      {
        ATerm o_19 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_23 = ATgetFirst((ATermList) t);
      t_23 = (ATerm) ATgetNext((ATermList) t);
      t = t_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = u_23;
          if(match_cons(t, sym_opt_1))
            {
              v_23 = ATgetArgument(t, 0);
              t = v_23;
              if((r_23 != t))
                {
                  _fail(t);
                }
              t = term_p_19;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  v_23 = ATgetArgument(t, 0);
                  t = r_23;
                  if(match_cons(t, sym_cf_1))
                    {
                      s_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = v_23;
                  if(match_cons(t, sym_opt_1))
                    {
                      w_23 = ATgetArgument(t, 0);
                      t = w_23;
                      if((s_23 != t))
                        {
                          _fail(t);
                        }
                      t = term_p_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          w_23 = ATgetArgument(t, 0);
                          t = w_23;
                          if((s_23 != t))
                            {
                              _fail(t);
                            }
                          t = term_q_19;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              w_23 = ATgetArgument(t, 0);
                              {
                                ATerm r_19 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = w_23;
                          if((s_23 != t))
                            {
                              _fail(t);
                            }
                          t = term_q_19;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      v_23 = ATgetArgument(t, 0);
                      t = v_23;
                      if((r_23 != t))
                        {
                          _fail(t);
                        }
                      t = term_q_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          v_23 = ATgetArgument(t, 0);
                          {
                            ATerm s_19 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = v_23;
                      if((r_23 != t))
                        {
                          _fail(t);
                        }
                      t = term_q_19;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_19 = ATgetFirst((ATermList) t);
              g_23 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_23;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_23;
              if(match_cons(t, sym_iter_1))
                {
                  ATerm w_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_x_19;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_19 = ATgetFirst((ATermList) t);
                  i_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_23;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = u_23;
                  {
                    ATerm b_20 = t;
                    int e_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm f_20 = ATgetArgument(t, 0);
                            ATerm g_20 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(e_20);
                        t = term_x_19;
                      }
                    else
                      {
                        t = b_20;
                        if(match_cons(t, sym_cf_1))
                          {
                            v_23 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = v_23;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm h_20 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = term_x_19;
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm i_20 = ATgetFirst((ATermList) t);
                      k_23 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = k_23;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm j_20 = ATgetFirst((ATermList) t);
                      n_23 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = n_23;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_23;
                  if(match_cons(t, sym_cf_1))
                    {
                      v_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = v_23;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm k_20 = ATgetArgument(t, 0);
                      ATerm l_20 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_x_19;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_23;
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm o_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(n_20);
            t = term_r_20;
          }
        else
          {
            t = m_20;
            if(match_cons(t, sym_cf_1))
              {
                v_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_23;
            if(match_cons(t, sym_opt_1))
              {
                ATerm w_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_r_20;
          }
      }
    }
  return(t);
}
ATerm CnsGeneric_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_24;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL,p_24 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm z_20 = ATgetArgument(t, 0);
            ATerm a_21 = ATgetArgument(t, 1);
            n_24 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = n_24;
        {
          ATerm x_2 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((p_24 != NULL) && (p_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(x_2, t);
          t = not_null(p_24);
        }
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = Constr1_0_0(t);
      }
    {
      ATerm b_21 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_string(t, "sorts"))
            {
              t = term_b_16;
            }
          else
            {
              if(match_string(t, "imports"))
                {
                  t = term_c_16;
                }
              else
                {
                  if(match_string(t, "id"))
                    {
                      t = term_d_16;
                    }
                  else
                    {
                      if(match_string(t, "hiddens"))
                        {
                          t = term_e_16;
                        }
                      else
                        {
                          if(match_string(t, "exports"))
                            {
                              t = term_f_16;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("module", 0, ATtrue)))
                                _fail(t);
                              t = term_g_16;
                            }
                        }
                    }
                }
            }
          ;
          LocalPopChoice(c_21);
        }
      else
        {
          t = b_21;
        }
      j_24 = t;
      t = SSL_mkterm(j_24, i_24);
    }
  }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm x_24 = NULL,a_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      x_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
      {
        ATerm d_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = x_24;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = a_25;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm g_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_21);
        t = term_h_21;
      }
    else
      {
        t = e_21;
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm k_21 = ATgetArgument(t, 0);
                  ATerm l_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(j_21);
              t = term_h_21;
            }
          else
            {
              t = i_21;
              if(match_cons(t, sym_cf_1))
                {
                  c_25 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_25;
              {
                ATerm m_21 = t;
                int n_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm o_21 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_21);
                    t = term_h_21;
                  }
                else
                  {
                    t = m_21;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm p_21 = ATgetArgument(t, 0);
                        ATerm s_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_h_21;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = appl_2_0(_id, _id, t);
        {
          ATerm v_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_25 = NULL;
              if(match_cons(t, sym_appl_2))
                {
                  m_25 = ATgetArgument(t, 0);
                  {
                    ATerm z_21 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = m_25;
              t = ConstrNil_0_0(t);
              t = (ATerm) ATempty;
              ;
              LocalPopChoice(w_21);
            }
          else
            {
              t = v_21;
              t = CnsGeneric_0_0(t);
            }
        }
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
      }
    return(t);
  }
  t = topdown_1_0(y_2, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_2 (ATerm t)
          {
            ATerm b_3 (ATerm t)
            {
              ATerm d_3 (ATerm t)
              {
                ATerm f_22 = t;
                int g_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_3 (ATerm t)
                    {
                      if(((t_25 != NULL) && (t_25 != t)))
                        _fail(t);
                      else
                        t_25 = t;
                      return(t);
                    }
                    t = cf_1_0(f_3, t);
                    ;
                    LocalPopChoice(g_22);
                  }
                else
                  {
                    t = f_22;
                    {
                      ATerm y_25 = NULL;
                      y_25 = t;
                      if(((t_25 != NULL) && (t_25 != t)))
                        _fail(t);
                      else
                        t_25 = t;
                      t = y_25;
                    }
                  }
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(d_3, e_3, t);
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              ATerm g_3 (ATerm t)
              {
                if(match_cons(t, sym_alt_2))
                  {
                    if(((u_25 != NULL) && (u_25 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      u_25 = ATgetArgument(t, 0);
                    if(((v_25 != NULL) && (v_25 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = cf_1_0(g_3, t);
              return(t);
            }
            t = prod_3_0(b_3, c_3, _id, t);
            return(t);
          }
          ATerm a_3 (ATerm t)
          {
            if(((w_25 != NULL) && (w_25 != t)))
              _fail(t);
            else
              w_25 = t;
            return(t);
          }
          t = appl_2_0(z_2, a_3, t);
          ;
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
          {
            ATerm h_3 (ATerm t)
            {
              ATerm j_3 (ATerm t)
              {
                ATerm m_3 (ATerm t)
                {
                  if(((t_25 != NULL) && (t_25 != t)))
                    _fail(t);
                  else
                    t_25 = t;
                  return(t);
                }
                ATerm n_3 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(m_3, n_3, t);
                return(t);
              }
              ATerm k_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  if(match_cons(t, sym_alt_2))
                    {
                      if(((u_25 != NULL) && (u_25 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_25 = ATgetArgument(t, 0);
                      if(((v_25 != NULL) && (v_25 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        v_25 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = lex_1_0(o_3, t);
                return(t);
              }
              t = prod_3_0(j_3, k_3, _id, t);
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              if(((w_25 != NULL) && (w_25 != t)))
                _fail(t);
              else
                w_25 = t;
              return(t);
            }
            t = appl_2_0(h_3, i_3, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(u_25), not_null(v_25)), term_h_22);
      {
        ATerm q_26 (ATerm t)
        {
          ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
          if(match_cons(t, sym__2))
            {
              f_26 = ATgetArgument(t, 0);
              i_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_26;
          if(match_cons(t, sym_alt_2))
            {
              g_26 = ATgetArgument(t, 0);
              h_26 = ATgetArgument(t, 1);
              {
                ATerm i_22 = t;
                int j_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_26;
                    if(((t_25 != NULL) && (t_25 != t)))
                      _fail(t);
                    else
                      t_25 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, i_26, not_null(w_25));
                    ;
                    LocalPopChoice(j_22);
                  }
                else
                  {
                    t = i_22;
                    {
                      ATerm k_22 = t;
                      int l_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_26;
                          if(((t_25 != NULL) && (t_25 != t)))
                            _fail(t);
                          else
                            t_25 = t;
                          t = h_26;
                          if(((x_25 != NULL) && (x_25 != t)))
                            _fail(t);
                          else
                            x_25 = t;
                          t = (ATerm) ATmakeAppl(sym_alt_2, i_26, not_null(w_25));
                          ;
                          LocalPopChoice(l_22);
                        }
                      else
                        {
                          t = k_22;
                          {
                            ATerm u_4 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, i_26, term_h_22);
                            {
                              ATerm m_22 = t;
                              int n_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = SSL_addi(i_26, (ATerm) ATmakeInt(1));
                                  ;
                                  LocalPopChoice(n_22);
                                }
                              else
                                {
                                  t = m_22;
                                  t = SSL_addr(i_26, (ATerm) ATmakeInt(1));
                                }
                              u_4 = t;
                              t = (ATerm) ATmakeAppl(sym__2, h_26, u_4);
                              t = q_26(t);
                            }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = f_26;
              if(((t_25 != NULL) && (t_25 != t)))
                _fail(t);
              else
                t_25 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, i_26, not_null(w_25));
            }
          return(t);
        }
        t = q_26(t);
      }
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm p_26 = NULL;
        p_26 = t;
        if(!(match_cons(t, sym_FlatAlt_0)))
          _fail(t);
        t = p_26;
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm s_26 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_93(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = SRTS_one(s_26, t);
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm cons_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  w_26 = t;
  if(match_cons(t, sym_cons_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_26);
  t_26 = t;
  t = u_26;
  t = b_83(t);
  v_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, v_26), t_26);
  return(t);
}
ATerm lex_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  c_27 = t;
  if(match_cons(t, sym_lex_1))
    {
      a_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  z_26 = t;
  t = a_27;
  t = k_82(t);
  b_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, b_27), z_26);
  return(t);
}
ATerm alt_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  k_27 = t;
  if(match_cons(t, sym_alt_2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_27);
  f_27 = t;
  t = g_27;
  t = u_82(t);
  i_27 = t;
  t = h_27;
  t = v_82(t);
  j_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, i_27, j_27), f_27);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
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
            t = cf_1_0(injective_alt_0_0, t);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            t = alt_2_0(injective_alt_0_0, injective_alt_0_0, t);
          }
      }
    }
  return(t);
}
ATerm varsym_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  r_27 = t;
  if(match_cons(t, sym_varsym_1))
    {
      p_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_27);
  o_27 = t;
  t = p_27;
  t = y_82(t);
  q_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, q_27), o_27);
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_3 (ATerm t)
      {
        ATerm u_3 (ATerm t)
        {
          t = varsym_1_0(_id, t);
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(u_3, v_3, t);
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        ATerm w_22 = t;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              t = cons_1_0(_id, t);
              return(t);
            }
            t = oncetd_1_0(w_3, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_22;
          }
        return(t);
      }
      t = prod_3_0(p_3, _id, q_3, t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              ATerm z_3 (ATerm t)
              {
                ATerm z_22 = t;
                int a_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = sort_1_0(_id, t);
                    ;
                    LocalPopChoice(a_23);
                  }
                else
                  {
                    t = z_22;
                    {
                      ATerm b_4 (ATerm t)
                      {
                        t = sort_1_0(_id, t);
                        return(t);
                      }
                      t = cf_1_0(b_4, t);
                    }
                  }
                return(t);
              }
              ATerm a_4 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(z_3, a_4, t);
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              ATerm b_23 = t;
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
                  t = b_23;
                }
              return(t);
            }
            t = prod_3_0(x_3, injective_alt_0_0, y_3, t);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm c_23 = t;
              int d_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_4 (ATerm t)
                  {
                    ATerm g_4 (ATerm t)
                    {
                      ATerm e_23 = t;
                      if((PushChoice() == 0))
                        {
                          t = lit_1_0(_id, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = e_23;
                        }
                      return(t);
                    }
                    ATerm h_4 (ATerm t)
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2_0(g_4, h_4, t);
                    return(t);
                  }
                  ATerm e_4 (ATerm t)
                  {
                    ATerm f_23 = t;
                    int h_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1_0(_id, t);
                        ;
                        LocalPopChoice(h_23);
                      }
                    else
                      {
                        t = f_23;
                        {
                          ATerm j_23 = t;
                          int l_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1_0(e_4, t);
                              ;
                              LocalPopChoice(l_23);
                            }
                          else
                            {
                              t = j_23;
                              {
                                ATerm m_23 = t;
                                int o_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1_0(e_4, t);
                                    ;
                                    LocalPopChoice(o_23);
                                  }
                                else
                                  {
                                    t = m_23;
                                    {
                                      ATerm p_23 = t;
                                      int x_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = iter_1_0(e_4, t);
                                          ;
                                          LocalPopChoice(x_23);
                                        }
                                      else
                                        {
                                          t = p_23;
                                          {
                                            ATerm y_23 = t;
                                            int z_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1_0(e_4, t);
                                                ;
                                                LocalPopChoice(z_23);
                                              }
                                            else
                                              {
                                                t = y_23;
                                                {
                                                  ATerm a_24 = t;
                                                  int b_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_4 (ATerm t)
                                                      {
                                                        t = lit_1_0(_id, t);
                                                        return(t);
                                                      }
                                                      t = iter_sep_2_0(e_4, i_4, t);
                                                      ;
                                                      LocalPopChoice(b_24);
                                                    }
                                                  else
                                                    {
                                                      t = a_24;
                                                      {
                                                        ATerm j_4 (ATerm t)
                                                        {
                                                          t = lit_1_0(_id, t);
                                                          return(t);
                                                        }
                                                        t = iter_star_sep_2_0(e_4, j_4, t);
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
                  ATerm f_4 (ATerm t)
                  {
                    ATerm c_24 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm k_4 (ATerm t)
                        {
                          t = cons_1_0(_id, t);
                          return(t);
                        }
                        t = oncetd_1_0(k_4, t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = c_24;
                      }
                    return(t);
                  }
                  t = prod_3_0(d_4, e_4, f_4, t);
                  ;
                  LocalPopChoice(d_23);
                }
              else
                {
                  t = c_23;
                  {
                    ATerm d_24 = t;
                    int e_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL,x_28 = NULL;
                        n_28 = t;
                        if(match_cons(t, sym_prod_3))
                          {
                            o_28 = ATgetArgument(t, 0);
                            t_28 = ATgetArgument(t, 1);
                            x_28 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = o_28;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            p_28 = ATgetFirst((ATermList) t);
                            s_28 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = p_28;
                        if(match_cons(t, sym_cf_1))
                          {
                            q_28 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = q_28;
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            r_28 = ATgetArgument(t, 0);
                            l_28 = ATgetArgument(t, 1);
                            t = s_28;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = t_28;
                            if(match_cons(t, sym_cf_1))
                              {
                                u_28 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = u_28;
                            if(match_cons(t, sym_iter_star_sep_2))
                              {
                                w_28 = ATgetArgument(t, 0);
                                m_28 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = x_28;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = w_28;
                            if((r_28 != t))
                              {
                                _fail(t);
                              }
                            t = m_28;
                            if((l_28 != t))
                              {
                                _fail(t);
                              }
                            t = n_28;
                          }
                        else
                          {
                            if(match_cons(t, sym_iter_1))
                              {
                                r_28 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_28;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = t_28;
                            if(match_cons(t, sym_cf_1))
                              {
                                u_28 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = u_28;
                            if(match_cons(t, sym_iter_star_1))
                              {
                                w_28 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = x_28;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = w_28;
                            if((r_28 != t))
                              {
                                _fail(t);
                              }
                            t = n_28;
                          }
                        ;
                        LocalPopChoice(e_24);
                      }
                    else
                      {
                        t = d_24;
                        {
                          ATerm f_24 = t;
                          int g_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_4 (ATerm t)
                              {
                                ATerm m_4 (ATerm t)
                                {
                                  ATerm k_24 = t;
                                  int l_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm b_29 = NULL;
                                      b_29 = t;
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bracket", 0, ATtrue)))
                                        _fail(t);
                                      t = b_29;
                                      ;
                                      LocalPopChoice(l_24);
                                    }
                                  else
                                    {
                                      t = k_24;
                                      if(!(match_cons(t, sym_bracket_0)))
                                        _fail(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1_0(m_4, t);
                                return(t);
                              }
                              t = prod_3_0(_id, _id, l_4, t);
                              ;
                              LocalPopChoice(g_24);
                            }
                          else
                            {
                              t = f_24;
                              {
                                ATerm c_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
                                c_29 = t;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    ATerm m_24 = ATgetArgument(t, 0);
                                    e_29 = ATgetArgument(t, 1);
                                    g_29 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = e_29;
                                if(match_cons(t, sym_sort_1))
                                  {
                                    f_29 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = f_29;
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("<START>", 0, ATtrue)))
                                  _fail(t);
                                t = g_29;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = c_29;
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
ATerm bottomup_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = bottomup_1_0(a_92, t);
    return(t);
  }
  t = SRTS_all(n_4, t);
  t = a_92(t);
  return(t);
}
ATerm filter_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm o_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = o_24;
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_4 (ATerm t)
            {
              t = filter_1_0(v_104, t);
              return(t);
            }
            t = Cons_2_0(v_104, o_4, t);
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm l_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_24 = ATgetFirst((ATermList) t);
                  l_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_29;
              t = filter_1_0(v_104, t);
            }
          }
      }
    }
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm j_38 (ATerm l_31, ATerm t)
  {
    t = l_31;
    {
      ATerm l_38 (ATerm t)
      {
        ATerm m_31 = NULL,n_31 = NULL,p_31 = NULL,q_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
        m_31 = t;
        if(match_cons(t, sym_appl_2))
          {
            n_31 = ATgetArgument(t, 0);
            u_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_31;
        if(match_cons(t, sym_prod_3))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            p_31 = ATgetArgument(t, 1);
            {
              ATerm v_24 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = p_31;
        if(match_cons(t, sym_cf_1))
          {
            q_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_31;
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm w_24 = ATgetArgument(t, 0);
            ATerm y_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_31;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_31 = ATgetFirst((ATermList) t);
            w_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_31;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = (ATerm) ATinsert(ATempty, v_31);
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_31 = ATgetFirst((ATermList) t);
                z_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_31;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_32 = ATgetFirst((ATermList) t);
                b_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_32;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                ATerm l_32 = NULL,m_32 = NULL;
                t = v_31;
                t = l_38(t);
                l_32 = t;
                t = a_32;
                t = l_38(t);
                m_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_32), (ATerm) ATinsert(ATempty, y_31)), l_32);
                t = concat_0_0(t);
              }
            else
              {
                ATerm t_32 = NULL,u_32 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_32 = ATgetFirst((ATermList) t);
                    d_32 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_32;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_32 = ATgetFirst((ATermList) t);
                    f_32 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_32;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_31;
                t = l_38(t);
                t_32 = t;
                t = e_32;
                t = l_38(t);
                u_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_32), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_32), a_32), y_31)), t_32);
                t = concat_0_0(t);
              }
          }
        return(t);
      }
      t = l_38(t);
    }
    return(t);
  }
  ATerm k_38 (ATerm v_32, ATerm t)
  {
    t = v_32;
    {
      ATerm m_38 (ATerm t)
      {
        ATerm w_32 = NULL,x_32 = NULL,z_32 = NULL,a_33 = NULL,w_33 = NULL,x_33 = NULL,d_34 = NULL,e_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
        w_32 = t;
        if(match_cons(t, sym_appl_2))
          {
            x_32 = ATgetArgument(t, 0);
            w_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_32;
        if(match_cons(t, sym_prod_3))
          {
            ATerm z_24 = ATgetArgument(t, 0);
            z_32 = ATgetArgument(t, 1);
            {
              ATerm b_25 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_32;
        if(match_cons(t, sym_cf_1))
          {
            a_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_33;
        if(match_cons(t, sym_iter_1))
          {
            ATerm d_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_33;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_33 = ATgetFirst((ATermList) t);
            d_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_34;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = (ATerm) ATinsert(ATempty, x_33);
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_34 = ATgetFirst((ATermList) t);
                l_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_34;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                ATerm b_35 = NULL,c_35 = NULL;
                t = x_33;
                t = m_38(t);
                b_35 = t;
                t = e_34;
                t = m_38(t);
                c_35 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, c_35), b_35);
                t = concat_0_0(t);
              }
            else
              {
                ATerm k_35 = NULL,l_35 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_34 = ATgetFirst((ATermList) t);
                    n_34 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_34;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_33;
                t = m_38(t);
                k_35 = t;
                t = m_34;
                t = m_38(t);
                l_35 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_35), (ATerm) ATinsert(ATempty, e_34)), k_35);
                t = concat_0_0(t);
              }
          }
        return(t);
      }
      t = m_38(t);
    }
    return(t);
  }
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,m_36 = NULL,n_36 = NULL,w_36 = NULL,o_37 = NULL,s_37 = NULL,t_37 = NULL,v_37 = NULL;
  v_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_36 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
      t = f_36;
      if(match_cons(t, sym_prod_3))
        {
          g_36 = ATgetArgument(t, 0);
          n_36 = ATgetArgument(t, 1);
          {
            ATerm e_25 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_36;
      if(match_cons(t, sym_cf_1))
        {
          w_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_36;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm h_25 = ATgetArgument(t, 0);
                ATerm i_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(g_25);
            t = o_37;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_37 = ATgetFirst((ATermList) t);
                t_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_37;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = g_36;
                {
                  ATerm j_25 = t;
                  int k_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_38(v_37, t);
                      ;
                      LocalPopChoice(k_25);
                    }
                  else
                    {
                      t = j_25;
                      t = (ATerm) ATinsert(ATempty, s_37);
                    }
                }
              }
            else
              {
                t = g_36;
                t = j_38(v_37, t);
              }
          }
        else
          {
            t = f_25;
            {
              ATerm l_25 = t;
              int n_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      ATerm o_25 = ATgetArgument(t, 0);
                      ATerm p_25 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_25);
                  t = g_36;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = o_37;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          h_36 = ATgetFirst((ATermList) t);
                          m_36 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = h_36;
                      if(match_cons(t, sym_cf_1))
                        {
                          i_36 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = i_36;
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm q_25 = ATgetArgument(t, 0);
                          ATerm r_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_36;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = o_37;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          s_37 = ATgetFirst((ATermList) t);
                          t_37 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = t_37;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = s_37;
                      t = FlatList_0_0(t);
                    }
                }
              else
                {
                  t = l_25;
                  {
                    ATerm s_25 = t;
                    int z_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm a_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_25);
                        t = o_37;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            s_37 = ATgetFirst((ATermList) t);
                            t_37 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = t_37;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = g_36;
                            {
                              ATerm b_26 = t;
                              int c_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = k_38(v_37, t);
                                  ;
                                  LocalPopChoice(c_26);
                                }
                              else
                                {
                                  t = b_26;
                                  t = (ATerm) ATinsert(ATempty, s_37);
                                }
                            }
                          }
                        else
                          {
                            t = g_36;
                            t = k_38(v_37, t);
                          }
                      }
                    else
                      {
                        t = s_25;
                        if(match_cons(t, sym_iter_star_1))
                          {
                            ATerm d_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = g_36;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = o_37;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                          }
                        else
                          {
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                h_36 = ATgetFirst((ATermList) t);
                                m_36 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = h_36;
                            if(match_cons(t, sym_cf_1))
                              {
                                i_36 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = i_36;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm e_26 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = m_36;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = o_37;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                s_37 = ATgetFirst((ATermList) t);
                                t_37 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = t_37;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = s_37;
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
      t = v_37;
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
  y_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_38 = ATgetFirst((ATermList) t);
      x_38 = (ATerm) ATgetNext((ATermList) t);
      t = x_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_38 = ATgetFirst((ATermList) t);
          v_38 = (ATerm) ATgetNext((ATermList) t);
          t = u_38;
          if(match_int(t, 34))
            {
              t = w_38;
              if(match_int(t, 92))
                {
                  ATerm j_26 = t;
                  int k_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_39 = NULL;
                      t = v_38;
                      t = De_Escape_0_0(t);
                      a_39 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_39), term_l_26);
                      ;
                      LocalPopChoice(k_26);
                    }
                  else
                    {
                      t = j_26;
                      {
                        ATerm f_39 = NULL;
                        t = x_38;
                        t = De_Escape_0_0(t);
                        f_39 = t;
                        t = (ATerm) ATinsert(CheckATermList(f_39), w_38);
                      }
                    }
                }
              else
                {
                  ATerm i_39 = NULL;
                  t = x_38;
                  t = De_Escape_0_0(t);
                  i_39 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_39), w_38);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = w_38;
                  if(match_int(t, 92))
                    {
                      ATerm m_26 = t;
                      int n_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_39 = NULL;
                          t = v_38;
                          t = De_Escape_0_0(t);
                          k_39 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_39), term_o_26);
                          ;
                          LocalPopChoice(n_26);
                        }
                      else
                        {
                          t = m_26;
                          {
                            ATerm n_39 = NULL;
                            t = x_38;
                            t = De_Escape_0_0(t);
                            n_39 = t;
                            t = (ATerm) ATinsert(CheckATermList(n_39), w_38);
                          }
                        }
                    }
                  else
                    {
                      ATerm q_39 = NULL;
                      t = x_38;
                      t = De_Escape_0_0(t);
                      q_39 = t;
                      t = (ATerm) ATinsert(CheckATermList(q_39), w_38);
                    }
                }
              else
                {
                  ATerm w_39 = NULL;
                  t = x_38;
                  t = De_Escape_0_0(t);
                  w_39 = t;
                  t = (ATerm) ATinsert(CheckATermList(w_39), w_38);
                }
            }
        }
      else
        {
          ATerm z_39 = NULL;
          t = x_38;
          t = De_Escape_0_0(t);
          z_39 = t;
          t = (ATerm) ATinsert(CheckATermList(z_39), w_38);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_38;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm h_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  h_40 = t;
  t = SSL_explode_string(h_40);
  p_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_40 = ATgetFirst((ATermList) t);
      o_40 = (ATerm) ATgetNext((ATermList) t);
      t = o_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_40 = ATgetFirst((ATermList) t);
          m_40 = (ATerm) ATgetNext((ATermList) t);
          t = l_40;
          if(match_int(t, 34))
            {
              t = n_40;
              if(match_int(t, 92))
                {
                  ATerm r_26 = t;
                  int x_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_40 = NULL;
                      t = m_40;
                      t = De_Escape_0_0(t);
                      r_40 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_40), term_l_26);
                      ;
                      LocalPopChoice(x_26);
                    }
                  else
                    {
                      t = r_26;
                      {
                        ATerm u_40 = NULL;
                        t = o_40;
                        t = De_Escape_0_0(t);
                        u_40 = t;
                        t = (ATerm) ATinsert(CheckATermList(u_40), n_40);
                      }
                    }
                }
              else
                {
                  ATerm x_40 = NULL;
                  t = o_40;
                  t = De_Escape_0_0(t);
                  x_40 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_40), n_40);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = n_40;
                  if(match_int(t, 92))
                    {
                      ATerm y_26 = t;
                      int d_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_40 = NULL;
                          t = m_40;
                          t = De_Escape_0_0(t);
                          z_40 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_40), term_o_26);
                          ;
                          LocalPopChoice(d_27);
                        }
                      else
                        {
                          t = y_26;
                          {
                            ATerm c_41 = NULL;
                            t = o_40;
                            t = De_Escape_0_0(t);
                            c_41 = t;
                            t = (ATerm) ATinsert(CheckATermList(c_41), n_40);
                          }
                        }
                    }
                  else
                    {
                      ATerm f_41 = NULL;
                      t = o_40;
                      t = De_Escape_0_0(t);
                      f_41 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_41), n_40);
                    }
                }
              else
                {
                  ATerm i_41 = NULL;
                  t = o_40;
                  t = De_Escape_0_0(t);
                  i_41 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_41), n_40);
                }
            }
        }
      else
        {
          ATerm l_41 = NULL;
          t = o_40;
          t = De_Escape_0_0(t);
          l_41 = t;
          t = (ATerm) ATinsert(CheckATermList(l_41), n_40);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_40;
    }
  k_40 = t;
  t = SSL_implode_string(k_40);
  return(t);
}
ATerm at_last_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm m_41 (ATerm t)
  {
    ATerm e_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, p_4, t);
        t = s_98(t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = e_27;
        t = Cons_2_0(_id, m_41, t);
      }
    return(t);
  }
  t = m_41(t);
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  o_41 = t;
  t = SSL_explode_string(o_41);
  n_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_41 = ATgetFirst((ATermList) t);
      {
        ATerm m_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_41;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = n_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_27 = ATgetFirst((ATermList) t);
      q_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_41;
  {
    ATerm q_4 (ATerm t)
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm s_27 = ATgetFirst((ATermList) t);
          if(((ATgetType(s_27) != AT_INT) || (ATgetInt((ATermInt) s_27) != 34)))
            _fail(t);
          {
            ATerm t_27 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(t_27) != AT_LIST) || !(ATisEmpty(t_27))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    t = at_last_1_0(q_4, t);
    r_41 = t;
    t = SSL_implode_string(r_41);
  }
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  g_42 = t;
  if(match_cons(t, sym_cf_1))
    {
      e_42 = ATgetArgument(t, 0);
      {
        ATerm i_42 = NULL;
        t = e_42;
        t = PpSym_0_0(t);
        i_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_27)), i_42), (ATerm) ATinsert(ATempty, term_u_27));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          e_42 = ATgetArgument(t, 0);
          {
            ATerm k_42 = NULL;
            t = e_42;
            t = PpSym_0_0(t);
            k_42 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_27)), k_42), (ATerm) ATinsert(ATempty, term_u_27));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_x_27);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  e_42 = ATgetArgument(t, 0);
                  f_42 = ATgetArgument(t, 1);
                  {
                    ATerm n_42 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(f_42), e_42);
                    t = map_1_0(PpSym_0_0, t);
                    n_42 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_27)), n_42), (ATerm) ATinsert(ATempty, term_y_27));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      e_42 = ATgetArgument(t, 0);
                      t = e_42;
                      t = PpSym_0_0(t);
                      {
                        ATerm r_4 (ATerm t)
                        {
                          t = (ATerm) ATinsert(ATempty, term_a_28);
                          return(t);
                        }
                        t = at_end_1_0(r_4, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          e_42 = ATgetArgument(t, 0);
                          t = e_42;
                          t = PpSym_0_0(t);
                          {
                            ATerm s_4 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_b_28);
                              return(t);
                            }
                            t = at_end_1_0(s_4, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              e_42 = ATgetArgument(t, 0);
                              t = e_42;
                              t = PpSym_0_0(t);
                              {
                                ATerm t_4 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_c_28);
                                  return(t);
                                }
                                t = at_end_1_0(t_4, t);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  e_42 = ATgetArgument(t, 0);
                                  f_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm t_42 = NULL,u_42 = NULL;
                                    t = e_42;
                                    t = PpSym_0_0(t);
                                    t_42 = t;
                                    t = f_42;
                                    t = PpSym_0_0(t);
                                    u_42 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_28)), u_42), t_42), (ATerm) ATinsert(ATempty, term_d_28));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      e_42 = ATgetArgument(t, 0);
                                      f_42 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_42 = NULL,y_42 = NULL;
                                        t = e_42;
                                        t = PpSym_0_0(t);
                                        x_42 = t;
                                        t = f_42;
                                        t = PpSym_0_0(t);
                                        y_42 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_28)), y_42), x_42), (ATerm) ATinsert(ATempty, term_d_28));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm g_28 = t;
                                      int h_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              e_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_28 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(h_28);
                                          {
                                            ATerm a_43 = NULL;
                                            t = e_42;
                                            t = PpSym_0_0(t);
                                            a_43 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_28)), a_43);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = g_28;
                                          {
                                            ATerm k_28 = t;
                                            int v_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    e_42 = ATgetArgument(t, 0);
                                                    f_42 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_28 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(v_28);
                                                {
                                                  ATerm e_43 = NULL,f_43 = NULL;
                                                  t = e_42;
                                                  t = PpSym_0_0(t);
                                                  e_43 = t;
                                                  t = f_42;
                                                  t = PpSym_0_0(t);
                                                  f_43 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_28)), f_43), e_43);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = k_28;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    e_42 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_43 = NULL;
                                                      t = e_42;
                                                      t = PpSym_0_0(t);
                                                      h_43 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, h_43), (ATerm) ATinsert(ATempty, term_z_28));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        e_42 = ATgetArgument(t, 0);
                                                        f_42 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_43 = NULL,l_43 = NULL;
                                                          t = e_42;
                                                          t = PpSym_0_0(t);
                                                          k_43 = t;
                                                          t = f_42;
                                                          t = PpSym_0_0(t);
                                                          l_43 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_43), (ATerm) ATinsert(ATempty, term_a_29)), k_43);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            e_42 = ATgetArgument(t, 0);
                                                            f_42 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm o_43 = NULL,p_43 = NULL;
                                                              t = e_42;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              o_43 = t;
                                                              t = f_42;
                                                              t = PpSym_0_0(t);
                                                              p_43 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_43), (ATerm) ATinsert(ATempty, term_d_29)), o_43);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                e_42 = ATgetArgument(t, 0);
                                                                f_42 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm s_43 = NULL,t_43 = NULL;
                                                                  t = e_42;
                                                                  t = PpSym_0_0(t);
                                                                  s_43 = t;
                                                                  t = f_42;
                                                                  t = PpSym_0_0(t);
                                                                  t_43 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_43), (ATerm) ATinsert(ATempty, term_h_29)), s_43);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    e_42 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm v_43 = NULL;
                                                                      t = e_42;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      v_43 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(v_43), term_i_29);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        e_42 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, e_42);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            e_42 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm d_5 = NULL;
                                                                              t = e_42;
                                                                              {
                                                                                ATerm j_29 = t;
                                                                                int k_29 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(k_29);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_29;
                                                                                  }
                                                                                d_5 = t;
                                                                                t = (ATerm) ATinsert(ATempty, d_5);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm m_29 = t;
                                                                            int n_29 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    e_42 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm o_29 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(n_29);
                                                                                {
                                                                                  ATerm l_5 = NULL;
                                                                                  t = e_42;
                                                                                  {
                                                                                    ATerm p_29 = t;
                                                                                    int q_29 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(q_29);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_29;
                                                                                      }
                                                                                    l_5 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, l_5);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_29;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_r_29);
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
ATerm sort_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  d_44 = t;
  if(match_cons(t, sym_sort_1))
    {
      b_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_44);
  a_44 = t;
  t = b_44;
  t = x_82(t);
  c_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, c_44), a_44);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm p_45 (ATerm q_44, ATerm r_44, ATerm s_44, ATerm t)
  {
    ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
    t = q_44;
    if(match_cons(t, sym_cf_1))
      {
        v_44 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = v_44;
    {
      ATerm s_29 = t;
      if((PushChoice() == 0))
        {
          t = sort_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_29;
        }
      t = PpSym_0_0(t);
      w_44 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_29)), w_44), (ATerm) ATinsert(ATempty, term_t_29));
      t = concat_0_0(t);
      t = concat_strings_0_0(t);
      x_44 = t;
      t = SSL_mkterm(x_44, r_44);
    }
    return(t);
  }
  ATerm q_45 (ATerm y_44, ATerm z_44, ATerm a_45, ATerm t)
  {
    ATerm d_45 = NULL,e_45 = NULL;
    t = y_44;
    if(match_cons(t, sym_cf_1))
      {
        d_45 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = d_45;
    t = sort_1_0(_id, t);
    t = PpSym_0_0(t);
    t = concat_strings_0_0(t);
    e_45 = t;
    t = SSL_mkterm(e_45, z_44);
    return(t);
  }
  ATerm f_45 = NULL,h_45 = NULL,i_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  n_45 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_45 = ATgetArgument(t, 0);
      k_45 = ATgetArgument(t, 1);
      t = f_45;
      if(match_cons(t, sym_prod_3))
        {
          ATerm u_29 = ATgetArgument(t, 0);
          h_45 = ATgetArgument(t, 1);
          {
            ATerm v_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_45 = ATgetFirst((ATermList) t);
          m_45 = (ATerm) ATgetNext((ATermList) t);
          t = m_45;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = h_45;
              if(match_cons(t, sym_sort_1))
                {
                  i_45 = ATgetArgument(t, 0);
                  t = i_45;
                  if(match_string(t, "<START>"))
                    {
                      ATerm w_29 = t;
                      int x_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_45(h_45, k_45, n_45, t);
                          ;
                          LocalPopChoice(x_29);
                        }
                      else
                        {
                          t = w_29;
                          {
                            ATerm y_29 = t;
                            int z_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = q_45(h_45, k_45, n_45, t);
                                ;
                                LocalPopChoice(z_29);
                              }
                            else
                              {
                                t = y_29;
                                t = l_45;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm a_30 = t;
                      int b_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_45(h_45, k_45, n_45, t);
                          ;
                          LocalPopChoice(b_30);
                        }
                      else
                        {
                          t = a_30;
                          t = q_45(h_45, k_45, n_45, t);
                        }
                    }
                }
              else
                {
                  ATerm c_30 = t;
                  int d_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_45(h_45, k_45, n_45, t);
                      ;
                      LocalPopChoice(d_30);
                    }
                  else
                    {
                      t = c_30;
                      t = q_45(h_45, k_45, n_45, t);
                    }
                }
            }
          else
            {
              t = h_45;
              {
                ATerm e_30 = t;
                int f_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_45(h_45, k_45, n_45, t);
                    ;
                    LocalPopChoice(f_30);
                  }
                else
                  {
                    t = e_30;
                    t = q_45(h_45, k_45, n_45, t);
                  }
              }
            }
        }
      else
        {
          t = h_45;
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_45(h_45, k_45, n_45, t);
                ;
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
                t = q_45(h_45, k_45, n_45, t);
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_ApplToSort_0)))
        _fail(t);
      t = n_45;
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm r_45 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_91(t);
        t = r_45(t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
      }
    return(t);
  }
  t = r_45(t);
  return(t);
}
ATerm layout_1_0 (ATerm j_77 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
  v_45 = t;
  if(match_cons(t, sym_layout_1))
    {
      t_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_45);
  s_45 = t;
  t = t_45;
  t = j_77(t);
  u_45 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, u_45), s_45);
  return(t);
}
ATerm opt_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  d_46 = t;
  if(match_cons(t, sym_opt_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_46);
  a_46 = t;
  t = b_46;
  t = l_82(t);
  c_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, c_46), a_46);
  return(t);
}
ATerm cf_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  j_46 = t;
  if(match_cons(t, sym_cf_1))
    {
      h_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_46);
  g_46 = t;
  t = h_46;
  t = j_82(t);
  i_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, i_46), g_46);
  return(t);
}
ATerm is_layout_p__0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 (ATerm t)
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm f_5 (ATerm t)
            {
              if(!(match_cons(t, sym_layout_0)))
                _fail(t);
              return(t);
            }
            t = opt_1_0(f_5, t);
            return(t);
          }
          t = cf_1_0(c_5, t);
          return(t);
        }
        t = prod_3_0(_id, b_5, _id, t);
        return(t);
      }
      t = appl_2_0(a_5, _id, t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              ATerm k_5 (ATerm t)
              {
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                return(t);
              }
              t = opt_1_0(k_5, t);
              return(t);
            }
            t = cf_1_0(j_5, t);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            t = layout_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm prod_3_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
  t_46 = t;
  if(match_cons(t, sym_prod_3))
    {
      n_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
      p_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_46);
  m_46 = t;
  t = n_46;
  t = d_83(t);
  q_46 = t;
  t = o_46;
  t = e_83(t);
  r_46 = t;
  t = p_46;
  t = f_83(t);
  s_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, q_46, r_46, s_46), m_46);
  return(t);
}
ATerm appl_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
  b_47 = t;
  if(match_cons(t, sym_appl_2))
    {
      x_46 = ATgetArgument(t, 0);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_47);
  w_46 = t;
  t = x_46;
  t = g_83(t);
  z_46 = t;
  t = y_46;
  t = h_83(t);
  a_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, z_46, a_47), w_46);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm e_47 = NULL;
  ATerm m_5 (ATerm t)
  {
    ATerm f_47 = NULL;
    f_47 = t;
    t = SSL_explode_string(f_47);
    return(t);
  }
  t = map_1_0(m_5, t);
  t = concat_0_0(t);
  e_47 = t;
  t = SSL_implode_string(e_47);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm p_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      p_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_47;
  if(match_cons(t, sym_prod_3))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      r_47 = ATgetArgument(t, 1);
      {
        ATerm p_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = r_47;
  if(match_cons(t, sym_cf_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_47;
  if(match_cons(t, sym_layout_0))
    {
      t = v_47;
      t = concat_strings_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          t_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_47;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = v_47;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_q_30;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_47 = ATgetFirst((ATermList) t);
              x_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_47;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, w_47));
        }
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm a_48 = NULL;
  ATerm e_48 (ATerm t)
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_48 = NULL;
        ATerm n_5 (ATerm t)
        {
          t = map_1_0(e_48, t);
          return(t);
        }
        t = appl_2_0(_id, n_5, t);
        if(match_cons(t, sym_appl_2))
          {
            ATerm t_30 = ATgetArgument(t, 0);
            b_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_48;
        t = concat_0_0(t);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm c_48 = NULL;
          c_48 = t;
          t = (ATerm) ATinsert(ATempty, c_48);
        }
      }
    return(t);
  }
  t = e_48(t);
  a_48 = t;
  t = SSL_implode_string(a_48);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm v_48 = NULL,x_48 = NULL,y_48 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  b_49 = t;
  if(match_cons(t, sym_appl_2))
    {
      c_49 = ATgetArgument(t, 0);
      {
        ATerm u_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_49;
  if(match_cons(t, sym_prod_3))
    {
      d_49 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
      {
        ATerm v_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_49;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm y_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_30);
        t = d_49;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_48 = ATgetFirst((ATermList) t);
            x_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_48;
        if(match_cons(t, sym_lex_1))
          {
            ATerm z_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_48;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_49;
        t = yield_0_0(t);
      }
    else
      {
        t = w_30;
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm c_31 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(b_31);
              t = b_49;
              t = yield_0_0(t);
            }
          else
            {
              t = a_31;
              {
                ATerm d_31 = t;
                int e_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm f_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_31);
                    {
                      ATerm i_49 = NULL;
                      t = b_49;
                      t = yield_0_0(t);
                      i_49 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, i_49);
                    }
                  }
                else
                  {
                    t = d_31;
                    if(match_cons(t, sym_varsym_1))
                      {
                        f_49 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = f_49;
                    if(match_cons(t, sym_cf_1))
                      {
                        y_48 = ATgetArgument(t, 0);
                        t = y_48;
                        {
                          ATerm g_31 = t;
                          int h_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm i_31 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(h_31);
                              t = d_49;
                              {
                                ATerm j_31 = t;
                                int k_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_49 = NULL;
                                    t = b_49;
                                    t = yield_0_0(t);
                                    j_49 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, j_49);
                                    ;
                                    LocalPopChoice(k_31);
                                  }
                                else
                                  {
                                    t = j_31;
                                    {
                                      ATerm k_49 = NULL;
                                      t = b_49;
                                      t = yield_0_0(t);
                                      k_49 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, k_49);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = g_31;
                              {
                                ATerm o_31 = t;
                                int r_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm s_31 = ATgetArgument(t, 0);
                                        ATerm t_31 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(r_31);
                                    t = d_49;
                                    {
                                      ATerm x_31 = t;
                                      int g_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_49 = NULL;
                                          t = b_49;
                                          t = yield_0_0(t);
                                          l_49 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, l_49);
                                          ;
                                          LocalPopChoice(g_32);
                                        }
                                      else
                                        {
                                          t = x_31;
                                          {
                                            ATerm m_49 = NULL;
                                            t = b_49;
                                            t = yield_0_0(t);
                                            m_49 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, m_49);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = o_31;
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
                                          t = d_49;
                                          {
                                            ATerm k_32 = t;
                                            int n_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm n_49 = NULL;
                                                t = b_49;
                                                t = yield_0_0(t);
                                                n_49 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, n_49);
                                                ;
                                                LocalPopChoice(n_32);
                                              }
                                            else
                                              {
                                                t = k_32;
                                                {
                                                  ATerm o_49 = NULL;
                                                  t = b_49;
                                                  t = yield_0_0(t);
                                                  o_49 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, o_49);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = h_32;
                                          {
                                            ATerm o_32 = t;
                                            int p_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm q_32 = ATgetArgument(t, 0);
                                                    ATerm r_32 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(p_32);
                                                t = d_49;
                                                {
                                                  ATerm s_32 = t;
                                                  int y_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_49 = NULL;
                                                      t = b_49;
                                                      t = yield_0_0(t);
                                                      p_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, p_49);
                                                      ;
                                                      LocalPopChoice(y_32);
                                                    }
                                                  else
                                                    {
                                                      t = s_32;
                                                      {
                                                        ATerm q_49 = NULL;
                                                        t = b_49;
                                                        t = yield_0_0(t);
                                                        q_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, q_49);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = o_32;
                                                {
                                                  ATerm r_49 = NULL;
                                                  t = b_49;
                                                  t = yield_0_0(t);
                                                  r_49 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, r_49);
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
                        ATerm s_49 = NULL;
                        t = b_49;
                        t = yield_0_0(t);
                        s_49 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, s_49);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t)
{
  t = e_92(t);
  {
    ATerm o_5 (ATerm t)
    {
      t = downup2_2_0(e_92, f_92, t);
      return(t);
    }
    t = SRTS_all(o_5, t);
    t = f_92(t);
  }
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm t_49 = NULL;
  t_49 = t;
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_5 (ATerm t)
        {
          ATerm r_5 (ATerm t)
          {
            if(!(match_cons(t, sym_FlatLex_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_5, t);
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          ATerm s_5 (ATerm t)
          {
            ATerm d_33 = t;
            int e_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = implode_lexical_0_0(t);
                ;
                LocalPopChoice(e_33);
              }
            else
              {
                t = d_33;
              }
            return(t);
          }
          ATerm t_5 (ATerm t)
          {
            ATerm f_33 = t;
            int g_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = flat_layout_0_0(t);
                ;
                LocalPopChoice(g_33);
              }
            else
              {
                t = f_33;
              }
            return(t);
          }
          t = downup2_2_0(s_5, t_5, t);
          return(t);
        }
        t = _2_0(p_5, q_5, t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
      }
    {
      ATerm h_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_5 (ATerm t)
          {
            ATerm a_6 (ATerm t)
            {
              if(!(match_cons(t, sym_RemoveLayout_0)))
                _fail(t);
              return(t);
            }
            t = fetch_1_0(a_6, t);
            return(t);
          }
          ATerm x_5 (ATerm t)
          {
            ATerm b_6 (ATerm t)
            {
              ATerm j_33 = t;
              int k_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_6 (ATerm t)
                  {
                    ATerm e_6 (ATerm t)
                    {
                      ATerm f_6 (ATerm t)
                      {
                        ATerm l_33 = t;
                        if((PushChoice() == 0))
                          {
                            t = is_layout_p__0_0(t);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = l_33;
                          }
                        return(t);
                      }
                      t = filter_1_0(f_6, t);
                      return(t);
                    }
                    t = prod_3_0(e_6, _id, _id, t);
                    return(t);
                  }
                  ATerm d_6 (ATerm t)
                  {
                    ATerm g_6 (ATerm t)
                    {
                      ATerm m_33 = t;
                      if((PushChoice() == 0))
                        {
                          t = is_layout_p__0_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = m_33;
                        }
                      return(t);
                    }
                    t = filter_1_0(g_6, t);
                    return(t);
                  }
                  t = appl_2_0(c_6, d_6, t);
                  ;
                  LocalPopChoice(k_33);
                }
              else
                {
                  t = j_33;
                }
              return(t);
            }
            t = topdown_1_0(b_6, t);
            return(t);
          }
          t = _2_0(w_5, x_5, t);
          ;
          LocalPopChoice(i_33);
        }
      else
        {
          t = h_33;
        }
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 (ATerm t)
            {
              t = fetch_1_0(ApplToSort_0_0, t);
              return(t);
            }
            ATerm k_6 (ATerm t)
            {
              ATerm l_6 (ATerm t)
              {
                t = repeat_1_0(ApplToSort_0_0, t);
                return(t);
              }
              t = topdown_1_0(l_6, t);
              return(t);
            }
            t = _2_0(h_6, k_6, t);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
          }
        {
          ATerm p_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_6 (ATerm t)
              {
                t = fetch_1_0(FlatList_0_0, t);
                return(t);
              }
              ATerm s_6 (ATerm t)
              {
                ATerm t_6 (ATerm t)
                {
                  ATerm r_33 = t;
                  int s_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FlatList_0_0(t);
                      ;
                      LocalPopChoice(s_33);
                    }
                  else
                    {
                      t = r_33;
                    }
                  return(t);
                }
                t = topdown_1_0(t_6, t);
                return(t);
              }
              t = _2_0(o_6, s_6, t);
              ;
              LocalPopChoice(q_33);
            }
          else
            {
              t = p_33;
            }
          {
            ATerm t_33 = t;
            int u_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm z_6 (ATerm t)
                  {
                    if(!(match_cons(t, sym_RemoveLit_0)))
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(z_6, t);
                  return(t);
                }
                ATerm v_6 (ATerm t)
                {
                  ATerm c_7 (ATerm t)
                  {
                    ATerm v_33 = t;
                    int y_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_list_0_0(t);
                        {
                          ATerm e_7 (ATerm t)
                          {
                            ATerm z_33 = t;
                            if((PushChoice() == 0))
                              {
                                t = lit_1_0(_id, t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = z_33;
                              }
                            return(t);
                          }
                          t = filter_1_0(e_7, t);
                        }
                        ;
                        LocalPopChoice(y_33);
                      }
                    else
                      {
                        t = v_33;
                      }
                    return(t);
                  }
                  t = topdown_1_0(c_7, t);
                  return(t);
                }
                t = _2_0(u_6, v_6, t);
                ;
                LocalPopChoice(u_33);
              }
            else
              {
                t = t_33;
              }
            {
              ATerm a_34 = t;
              int b_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_7 (ATerm t)
                  {
                    ATerm h_7 (ATerm t)
                    {
                      if(!(match_cons(t, sym_FlatInj_0)))
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(h_7, t);
                    return(t);
                  }
                  ATerm g_7 (ATerm t)
                  {
                    ATerm i_7 (ATerm t)
                    {
                      ATerm c_34 = t;
                      int f_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_5 = NULL,v_5 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              u_5 = ATgetArgument(t, 0);
                              {
                                ATerm g_34 = ATgetArgument(t, 1);
                                if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
                                  {
                                    v_5 = ATgetFirst((ATermList) g_34);
                                    {
                                      ATerm h_34 = (ATerm) ATgetNext((ATermList) g_34);
                                      if(((ATgetType(h_34) != AT_LIST) || !(ATisEmpty(h_34))))
                                        _fail(t);
                                    }
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          t = u_5;
                          t = injection_0_0(t);
                          t = v_5;
                          ;
                          LocalPopChoice(f_34);
                        }
                      else
                        {
                          t = c_34;
                        }
                      return(t);
                    }
                    t = bottomup_1_0(i_7, t);
                    return(t);
                  }
                  t = _2_0(f_7, g_7, t);
                  ;
                  LocalPopChoice(b_34);
                }
              else
                {
                  t = a_34;
                }
              {
                ATerm i_34 = t;
                int j_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_7 (ATerm t)
                    {
                      t = fetch_1_0(FlatAlt_0_0, t);
                      return(t);
                    }
                    ATerm k_7 (ATerm t)
                    {
                      ATerm l_7 (ATerm t)
                      {
                        ATerm k_34 = t;
                        int o_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = FlatAlt_0_0(t);
                            ;
                            LocalPopChoice(o_34);
                          }
                        else
                          {
                            t = k_34;
                          }
                        return(t);
                      }
                      t = topdown_1_0(l_7, t);
                      return(t);
                    }
                    t = _2_0(j_7, k_7, t);
                    ;
                    LocalPopChoice(j_34);
                  }
                else
                  {
                    t = i_34;
                  }
                {
                  ATerm p_34 = t;
                  int q_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_7 (ATerm t)
                      {
                        ATerm o_7 (ATerm t)
                        {
                          if(!(match_cons(t, sym_ReplaceAppl_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(o_7, t);
                        return(t);
                      }
                      t = _2_0(n_7, replace_appl_0_0, t);
                      ;
                      LocalPopChoice(q_34);
                    }
                  else
                    {
                      t = p_34;
                    }
                  {
                    ATerm r_34 = t;
                    int s_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_7 (ATerm t)
                        {
                          ATerm r_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_RemoveSeq_0)))
                              _fail(t);
                            return(t);
                          }
                          t = fetch_1_0(r_7, t);
                          return(t);
                        }
                        ATerm q_7 (ATerm t)
                        {
                          ATerm s_7 (ATerm t)
                          {
                            ATerm t_34 = t;
                            int u_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Tuple_0_0(t);
                                ;
                                LocalPopChoice(u_34);
                              }
                            else
                              {
                                t = t_34;
                              }
                            return(t);
                          }
                          t = topdown_1_0(s_7, t);
                          return(t);
                        }
                        t = _2_0(p_7, q_7, t);
                        ;
                        LocalPopChoice(s_34);
                      }
                    else
                      {
                        t = r_34;
                      }
                    {
                      ATerm v_34 = t;
                      int w_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_7 (ATerm t)
                          {
                            ATerm w_7 (ATerm t)
                            {
                              if(!(match_cons(t, sym_RemovePT_0)))
                                _fail(t);
                              return(t);
                            }
                            t = fetch_1_0(w_7, t);
                            return(t);
                          }
                          ATerm v_7 (ATerm t)
                          {
                            ATerm w_49 = NULL;
                            if(match_cons(t, sym_parsetree_2))
                              {
                                w_49 = ATgetArgument(t, 0);
                                {
                                  ATerm x_34 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            t = w_49;
                            return(t);
                          }
                          t = _2_0(u_7, v_7, t);
                          ;
                          LocalPopChoice(w_34);
                        }
                      else
                        {
                          t = v_34;
                        }
                      {
                        ATerm y_34 = t;
                        int z_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_49 = NULL;
                            x_49 = t;
                            if((t_49 != t))
                              {
                                _fail(t);
                              }
                            t = x_49;
                            t = _2_0(_id, implodeAsfix_0_0, t);
                            ;
                            LocalPopChoice(z_34);
                          }
                        else
                          {
                            t = y_34;
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
ATerm WriteToFile_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  if(match_cons(t, sym__2))
    {
      y_49 = ATgetArgument(t, 0);
      z_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_49, term_a_35);
  t = open_stream_0_0(t);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, z_49);
  t = g_110(t);
  t = fclose_0_0(t);
  t = z_49;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  b_50 = t;
  {
    ATerm x_7 (ATerm t)
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_50 != NULL) && (c_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_7, t);
          ;
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          t = term_f_35;
          if(((c_50 != NULL) && (c_50 != t)))
            _fail(t);
          else
            c_50 = t;
        }
      return(t);
    }
    t = _2_0(x_7, _id, t);
    t = b_50;
    {
      ATerm z_7 (ATerm t)
      {
        ATerm z_5 = NULL;
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_50), z_5);
        return(t);
      }
      t = _2_0(_id, z_7, t);
      {
        ATerm g_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 (ATerm t)
            {
              ATerm d_8 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(d_8, t);
              return(t);
            }
            ATerm c_8 (ATerm t)
            {
              ATerm e_8 (ATerm t)
              {
                ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm i_35 = ATgetArgument(t, 0);
                    if(match_cons(i_35, sym_Stream_1))
                      {
                        d_50 = ATgetArgument(i_35, 0);
                      }
                    else
                      _fail(t);
                    e_50 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(d_50, e_50);
                f_50 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_50);
                return(t);
              }
              t = WriteToFile_1_0(e_8, t);
              return(t);
            }
            t = _2_0(a_8, c_8, t);
            ;
            LocalPopChoice(h_35);
          }
        else
          {
            t = g_35;
            {
              ATerm i_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_35 = ATgetArgument(t, 0);
                      if(match_cons(j_35, sym_Stream_1))
                        {
                          g_50 = ATgetArgument(j_35, 0);
                        }
                      else
                        _fail(t);
                      h_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(g_50, h_50);
                  i_50 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), i_50);
                  j_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, j_50);
                  return(t);
                }
                t = WriteToFile_1_0(j_8, t);
                return(t);
              }
              t = _2_0(_id, i_8, t);
            }
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
ATerm apply_strategy_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  k_50 = t;
  t = dtime_0_0(t);
  t = k_50;
  t = g_117(t);
  l_50 = t;
  t = dtime_0_0(t);
  m_50 = t;
  t = l_50;
  if(match_cons(t, sym__2))
    {
      n_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_50), (ATerm) ATmakeAppl(sym_Runtime_1, m_50)), o_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_51 (ATerm w_50, ATerm t)
  {
    t = SSL_fclose(w_50);
    return(t);
  }
  ATerm z_50 = NULL,a_51 = NULL;
  a_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_50 = ATgetArgument(t, 0);
      {
        ATerm m_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_50);
            ;
            LocalPopChoice(n_35);
          }
        else
          {
            t = m_35;
            t = c_51(a_51, t);
          }
      }
    }
  else
    {
      t = c_51(a_51, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_51 = NULL;
  t = SSL_stdin_stream();
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_51 = NULL;
  t = SSL_stdout_stream();
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_51 = NULL;
  t = SSL_stderr_stream();
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_51);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      ATerm p_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_6 = NULL,q_6 = NULL;
        p_6 = t;
        t = SSL_explode_term(p_6);
        if(match_cons(t, sym__2))
          {
            ATerm s_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_35) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_35 = ATgetArgument(t, 1);
              if(((ATgetType(t_35) == AT_LIST) && !(ATisEmpty(t_35))))
                {
                  q_6 = ATgetFirst((ATermList) t_35);
                  {
                    ATerm u_35 = (ATerm) ATgetNext((ATermList) t_35);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = q_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = q_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = q_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
              ATerm l_8 (ATerm t)
              {
                ATerm n_51 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    n_51 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_51;
                return(t);
              }
              t = _2_0(l_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_51 = ATgetArgument(t, 0);
                  l_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_51, l_51);
              m_51 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_51);
              ;
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              {
                ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
                ATerm n_8 (ATerm t)
                {
                  ATerm r_51 = NULL;
                  r_51 = t;
                  t = SSL_is_string(r_51);
                  return(t);
                }
                t = _2_0(n_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_51 = ATgetArgument(t, 0);
                    p_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_51, p_51);
                q_51 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_51);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_51 = NULL;
      v_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_51, term_z_35);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      {
        ATerm r_6 = NULL;
        r_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = r_6;
        _fail(t);
      }
    }
  s_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_51);
  t_51 = t;
  t = s_51;
  t = fclose_0_0(t);
  t = t_51;
  return(t);
}
ATerm fetch_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm a_52 (ATerm t)
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_98, _id, t);
        ;
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = Cons_2_0(_id, a_52, t);
      }
    return(t);
  }
  t = a_52(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
      {
        ATerm d_52 = NULL,e_52 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_52 = ATgetFirst((ATermList) t);
            e_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_52;
        {
          ATerm o_8 (ATerm t)
          {
            t = e_52;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(o_8, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm k_52 (ATerm t)
  {
    ATerm e_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_52, t);
        ;
        LocalPopChoice(j_36);
      }
    else
      {
        t = e_36;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_98(t);
      }
    return(t);
  }
  t = k_52(t);
  return(t);
}
ATerm _2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,q_52 = NULL,r_52 = NULL;
  r_52 = t;
  if(match_cons(t, sym__2))
    {
      m_52 = ATgetArgument(t, 0);
      n_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_52);
  l_52 = t;
  t = m_52;
  t = o_75(t);
  o_52 = t;
  t = n_52;
  t = p_75(t);
  q_52 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, o_52, q_52), l_52);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_52 = NULL;
  ATerm p_8 (ATerm t)
  {
    ATerm w_52 = NULL;
    w_52 = t;
    t = SSL_explode_string(w_52);
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    ATerm x_52 = NULL;
    x_52 = t;
    t = SSL_explode_string(x_52);
    return(t);
  }
  t = _2_0(p_8, q_8, t);
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_52 = NULL,a_53 = NULL;
        if(match_cons(t, sym__2))
          {
            z_52 = ATgetArgument(t, 0);
            a_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_52;
        {
          ATerm r_8 (ATerm t)
          {
            t = a_53;
            return(t);
          }
          t = at_end_1_0(r_8, t);
        }
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        {
          ATerm x_6 = NULL,y_6 = NULL;
          x_6 = t;
          t = SSL_explode_term(x_6);
          if(match_cons(t, sym__2))
            {
              ATerm o_36 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_36) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              y_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_6;
          t = concat_0_0(t);
        }
      }
    v_52 = t;
    t = SSL_implode_string(v_52);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_53 = NULL;
      k_53 = t;
      t = SSL_is_string(k_53);
      ;
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
      {
        ATerm r_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_8 (ATerm t)
            {
              ATerm t_36 = t;
              int u_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(u_36);
                }
              else
                {
                  t = t_36;
                }
              return(t);
            }
            t = map_1_0(s_8, t);
            ;
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
            {
              ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
              o_53 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_53 = ATgetArgument(t, 0);
                  t = p_53;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_53 = ATgetArgument(t, 0);
                      t = p_53;
                      {
                        ATerm v_36 = t;
                        int x_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_53);
                            {
                              ATerm y_36 = t;
                              int z_36 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_7 = NULL;
                                  t = eval_config_0_0(t);
                                  t_7 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_53, t_7);
                                  t = t_7;
                                  ;
                                  LocalPopChoice(z_36);
                                }
                              else
                                {
                                  t = y_36;
                                }
                            }
                            ;
                            LocalPopChoice(x_36);
                          }
                        else
                          {
                            t = v_36;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_53), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = p_53;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_53 = NULL,v_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_53 = ATgetArgument(t, 0);
                          q_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_53;
                      t = eval_config_0_0(t);
                      u_53 = t;
                      t = q_53;
                      t = eval_config_0_0(t);
                      v_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_53, v_53);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_54 = NULL,c_54 = NULL;
      a_54 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_8 = NULL;
            t = eval_config_0_0(t);
            b_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_8);
            t = b_8;
            ;
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
          }
        c_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_54, term_e_37);
        t = geq_0_0(t);
        t = a_54;
        t = k_111(t);
      }
      ;
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm e_54 = NULL;
    e_54 = t;
    if(match_string(t, "-k"))
      {
        t = e_54;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_54;
      }
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    ATerm f_54 = NULL,g_54 = NULL;
    f_54 = t;
    t = SSL_string_to_int(f_54);
    g_54 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_54);
    t = f_54;
    return(t);
  }
  ATerm v_8 (ATerm t)
  {
    t = term_f_37;
    return(t);
  }
  t = ArgOption_3_0(t_8, u_8, v_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_8 (ATerm t)
      {
        ATerm i_54 = NULL;
        i_54 = t;
        if(match_string(t, "-S"))
          {
            t = i_54;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_54;
          }
        return(t);
      }
      ATerm y_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_j_37;
        return(t);
      }
      ATerm z_8 (ATerm t)
      {
        t = term_k_37;
        return(t);
      }
      t = Option_3_0(x_8, y_8, z_8, t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm c_9 (ATerm t)
            {
              ATerm j_54 = NULL,k_54 = NULL;
              j_54 = t;
              t = SSL_string_to_int(j_54);
              k_54 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_54);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_54);
              return(t);
            }
            ATerm d_9 (ATerm t)
            {
              t = term_n_37;
              return(t);
            }
            t = ArgOption_3_0(b_9, c_9, d_9, t);
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm f_9 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm g_9 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_p_37;
                return(t);
              }
              ATerm h_9 (ATerm t)
              {
                t = term_q_37;
                return(t);
              }
              t = Option_3_0(f_9, g_9, h_9, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_54 = NULL;
      t = term_m_11;
      t = d_0(t);
      p_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_37, term_u_37, p_54);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_54 = ATgetFirst((ATermList) t);
          o_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_54;
      t = a_0(t);
      t = term_m_11;
      t = c_0(t);
      s_54 = t;
      t = (ATerm) ATinsert(CheckATermList(o_54), s_54);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm j_9 (ATerm t)
  {
    ATerm u_54 = NULL;
    u_54 = t;
    if(match_string(t, "-o"))
      {
        t = u_54;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = u_54;
      }
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    ATerm v_54 = NULL;
    v_54 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_54);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_54);
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  t = ArgOption_3_0(j_9, k_9, l_9, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
  if(match_cons(t, sym__3))
    {
      y_54 = ATgetArgument(t, 0);
      z_54 = ATgetArgument(t, 1);
      a_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_54, z_54);
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_37 = ATgetArgument(t, 0);
            ATerm a_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_54, z_54);
        ;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        t = (ATerm) ATempty;
      }
    b_55 = t;
    t = SSL_table_put(y_54, z_54, (ATerm) ATinsert(CheckATermList(b_55), a_55));
    t = (ATerm) ATmakeAppl(sym__3, y_54, z_54, a_55);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_55 = NULL;
      t = term_m_11;
      t = l_0(t);
      n_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_37, term_u_37, n_55);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_55 = ATgetFirst((ATermList) t);
          k_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_55 = ATgetFirst((ATermList) t);
          m_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_55;
      t = j_0(t);
      t = l_55;
      t = k_0(t);
      r_55 = t;
      t = (ATerm) ATinsert(CheckATermList(m_55), r_55);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    ATerm t_55 = NULL;
    t_55 = t;
    if(match_string(t, "-i"))
      {
        t = t_55;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_55;
      }
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    ATerm u_55 = NULL;
    u_55 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_55);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_55);
    return(t);
  }
  ATerm p_9 (ATerm t)
  {
    t = term_b_38;
    return(t);
  }
  t = ArgOption_3_0(n_9, o_9, p_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_11;
  t = whoami_0_0(t);
  v_55 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_55));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL;
        t = eval_config_0_0(t);
        f_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_8);
        t = f_8;
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_103(t);
      ;
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      {
        ATerm z_55 = NULL,a_56 = NULL,d_56 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_55 = ATgetFirst((ATermList) t);
            a_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_56;
        t = foldr_2_0(s_103, t_103, t);
        d_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_55, d_56);
        t = t_103(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_56 = NULL,g_8 = NULL,h_8 = NULL;
  t = times_0_0(t);
  g_8 = t;
  t = SSL_explode_term(g_8);
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8;
  {
    ATerm r_9 (ATerm t)
    {
      t = term_i_37;
      return(t);
    }
    ATerm s_9 (ATerm t)
    {
      ATerm k_8 = NULL,m_8 = NULL;
      if(match_cons(t, sym__2))
        {
          k_8 = ATgetArgument(t, 0);
          m_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_8, m_8);
            ;
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            t = SSL_addr(k_8, m_8);
          }
      }
      return(t);
    }
    t = foldr_2_0(r_9, s_9, t);
    g_56 = t;
    t = SSL_TicksToSeconds(g_56);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
  r_56 = t;
  if(match_cons(t, sym__2))
    {
      s_56 = ATgetArgument(t, 0);
      t_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_56;
        if((s_56 != t))
          {
            _fail(t);
          }
        t = r_56;
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = r_56;
        {
          ATerm p_38 = t;
          int q_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_56, t_56);
              ;
              LocalPopChoice(q_38);
            }
          else
            {
              t = p_38;
              t = SSL_gtr(s_56, t_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_56, t_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_111 (ATerm), ATerm t)
{
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_56 = NULL,y_56 = NULL;
      w_56 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_8 = NULL;
            t = eval_config_0_0(t);
            w_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_8);
            t = w_8;
            ;
            LocalPopChoice(z_38);
          }
        else
          {
            t = t_38;
          }
        y_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_56, term_h_22);
        t = geq_0_0(t);
        t = w_56;
        t = j_111(t);
      }
      ;
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm t_9 (ATerm t)
  {
    ATerm a_57 = NULL,b_57 = NULL;
    t = run_time_0_0(t);
    a_57 = t;
    t = term_m_11;
    t = whoami_0_0(t);
    b_57 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_57), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_57));
    t = (ATerm) ATmakeAppl(sym__2, term_b_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_39), a_57), term_c_39), b_57));
    return(t);
  }
  t = if_verbose1_1_0(t_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  ATerm e_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm h_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL;
            t = eval_config_0_0(t);
            a_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), a_9);
            t = a_9;
            ;
            LocalPopChoice(j_39);
          }
        else
          {
            t = h_39;
          }
      }
      ;
      LocalPopChoice(g_39);
    }
  else
    {
      t = e_39;
      {
        ATerm v_9 (ATerm t)
        {
          ATerm l_39 = t;
          int m_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(m_39);
            }
          else
            {
              t = l_39;
              {
                ATerm o_39 = t;
                int p_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(p_39);
                  }
                else
                  {
                    t = o_39;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(v_9, t);
      }
    }
  t = e_118(t);
  return(t);
}
ATerm map_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm c_57 (ATerm t)
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = Cons_2_0(q_97, c_57, t);
      }
    return(t);
  }
  t = c_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_57 = ATgetFirst((ATermList) t);
      f_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_57 = NULL,k_57 = NULL;
        t = f_57;
        t = h_0(t);
        j_57 = t;
        t = e_57;
        t = g_0(t);
        k_57 = t;
        t = f_57;
        {
          ATerm w_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_57), k_57);
            return(t);
          }
          t = reverse_acc_2_0(g_0, w_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_11;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  o_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_57);
  l_57 = t;
  t = m_57;
  t = h_82(t);
  n_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_57), l_57);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_57 = NULL,m_9 = NULL;
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm v_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_9 = NULL;
            t = eval_config_0_0(t);
            e_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_9);
            t = e_9;
            ;
            LocalPopChoice(x_39);
          }
        else
          {
            t = v_39;
          }
        r_57 = t;
      }
      ;
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      {
        ATerm x_9 (ATerm t)
        {
          ATerm y_9 (ATerm t)
          {
            if(((r_57 != NULL) && (r_57 != t)))
              _fail(t);
            else
              r_57 = t;
            return(t);
          }
          t = Program_1_0(y_9, t);
          return(t);
        }
        t = fetch_1_0(x_9, t);
      }
    }
  {
    ATerm y_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_40), not_null(r_57)), term_b_40);
        {
          ATerm d_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              ;
              LocalPopChoice(e_40);
            }
          else
            {
              t = d_40;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_40), not_null(r_57)), term_b_40));
            }
          i_9 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), i_9);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_40), not_null(r_57)), term_b_40);
        }
        ;
        LocalPopChoice(a_40);
      }
    else
      {
        t = y_39;
      }
    t = term_f_40;
    {
      ATerm g_40 = t;
      int i_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(i_40);
        }
      else
        {
          t = g_40;
          t = (ATerm) ATinsert(ATempty, term_f_40);
        }
      m_9 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_9);
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
      {
        ATerm a_10 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        t = reverse_acc_2_0(_id, a_10, t);
        {
          ATerm b_10 (ATerm t)
          {
            ATerm s_57 = NULL,q_9 = NULL;
            s_57 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, s_57), term_j_40);
            {
              ATerm q_40 = t;
              int s_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_list_0_0(t);
                  ;
                  LocalPopChoice(s_40);
                }
              else
                {
                  t = q_40;
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_57), term_j_40));
                }
              q_9 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_9);
              t = (ATerm) ATinsert(ATinsert(ATempty, s_57), term_j_40);
            }
            return(t);
          }
          t = map_1_0(b_10, t);
          {
            ATerm t_40 = t;
            int v_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_9 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_41), term_a_41), term_y_40), term_w_40);
                {
                  ATerm d_41 = t;
                  int e_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = is_list_0_0(t);
                      ;
                      LocalPopChoice(e_41);
                    }
                  else
                    {
                      t = d_41;
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_41), term_a_41), term_y_40), term_w_40));
                    }
                  u_9 = t;
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_9);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_41), term_a_41), term_y_40), term_w_40);
                }
                ;
                LocalPopChoice(v_40);
              }
            else
              {
                t = t_40;
              }
          }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL;
  w_57 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_57);
  t_57 = t;
  t = u_57;
  t = i_82(t);
  v_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_57), t_57);
  return(t);
}
ATerm lit_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  e_58 = t;
  if(match_cons(t, sym_lit_1))
    {
      c_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_58);
  z_57 = t;
  t = c_58;
  t = n_82(t);
  d_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, d_58), z_57);
  return(t);
}
ATerm list_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm h_58 (ATerm t)
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_41);
      }
    else
      {
        t = g_41;
        t = Cons_2_0(u_97, h_58, t);
      }
    return(t);
  }
  t = h_58(t);
  return(t);
}
ATerm seq_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  l_58 = t;
  if(match_cons(t, sym_seq_1))
    {
      j_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_58);
  i_58 = t;
  t = j_58;
  t = m_82(t);
  k_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, k_58), i_58);
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  t_58 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      p_58 = ATgetArgument(t, 0);
      q_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_58);
  o_58 = t;
  t = p_58;
  t = q_82(t);
  r_58 = t;
  t = q_58;
  t = r_82(t);
  s_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, r_58, s_58), o_58);
  return(t);
}
ATerm iter_star_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL;
  z_58 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      x_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_58);
  w_58 = t;
  t = x_58;
  t = t_82(t);
  y_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, y_58), w_58);
  return(t);
}
ATerm iter_sep_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  h_59 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      d_59 = ATgetArgument(t, 0);
      e_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_59);
  c_59 = t;
  t = d_59;
  t = o_82(t);
  f_59 = t;
  t = e_59;
  t = p_82(t);
  g_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, f_59, g_59), c_59);
  return(t);
}
ATerm iter_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL;
  n_59 = t;
  if(match_cons(t, sym_iter_1))
    {
      l_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_59);
  k_59 = t;
  t = l_59;
  t = s_82(t);
  m_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, m_59), k_59);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_59 = NULL;
      r_59 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_59;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm s_41 = ATgetFirst((ATermList) t);
              ATerm t_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_59;
        }
      ;
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      {
        ATerm u_59 (ATerm t)
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = iter_1_0(_id, t);
              ;
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              {
                ATerm w_41 = t;
                int x_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = iter_sep_2_0(_id, _id, t);
                    ;
                    LocalPopChoice(x_41);
                  }
                else
                  {
                    t = w_41;
                    {
                      ATerm y_41 = t;
                      int z_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = iter_star_1_0(_id, t);
                          ;
                          LocalPopChoice(z_41);
                        }
                      else
                        {
                          t = y_41;
                          {
                            ATerm a_42 = t;
                            int b_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = iter_star_sep_2_0(_id, _id, t);
                                ;
                                LocalPopChoice(b_42);
                              }
                            else
                              {
                                t = a_42;
                                {
                                  ATerm f_10 (ATerm t)
                                  {
                                    ATerm g_10 (ATerm t)
                                    {
                                      ATerm c_42 = t;
                                      int d_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1_0(_id, t);
                                          ;
                                          LocalPopChoice(d_42);
                                        }
                                      else
                                        {
                                          t = c_42;
                                          {
                                            ATerm h_42 = t;
                                            int j_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(!(match_cons(t, sym_layout_0)))
                                                  _fail(t);
                                                ;
                                                LocalPopChoice(j_42);
                                              }
                                            else
                                              {
                                                t = h_42;
                                                t = u_59(t);
                                              }
                                          }
                                        }
                                      return(t);
                                    }
                                    t = list_1_0(g_10, t);
                                    return(t);
                                  }
                                  t = seq_1_0(f_10, t);
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
        t = u_59(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_9 = NULL;
        t = eval_config_0_0(t);
        z_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_9);
        t = z_9;
        ;
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
      }
    c_10 = t;
    {
      ATerm o_42 = t;
      int p_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(p_42);
        }
      else
        {
          t = o_42;
          t = (ATerm) ATinsert(ATempty, c_10);
        }
      d_10 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), d_10);
      t = c_10;
    }
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_10 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_42;
        return(t);
      }
      ATerm j_10 (ATerm t)
      {
        t = term_z_42;
        return(t);
      }
      t = Option_3_0(h_10, i_10, j_10, t);
      ;
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      {
        ATerm k_10 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_10 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_43;
          return(t);
        }
        ATerm n_10 (ATerm t)
        {
          t = term_c_43;
          return(t);
        }
        t = Option_3_0(k_10, m_10, n_10, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  c_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_59 = ATgetFirst((ATermList) t);
      z_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_60);
  x_59 = t;
  t = y_59;
  t = x_76(t);
  a_60 = t;
  t = z_59;
  t = y_76(t);
  b_60 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_60), a_60), x_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm g_60 = NULL;
  g_60 = t;
  {
    ATerm d_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_43;
        t = m_114(t);
        ;
        LocalPopChoice(g_43);
      }
    else
      {
        t = d_43;
      }
    t = g_60;
    {
      ATerm o_10 (ATerm t)
      {
        ATerm h_60 = NULL;
        h_60 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_60);
        t = (ATerm) ATmakeAppl(sym_Program_1, h_60);
        return(t);
      }
      ATerm p_10 (ATerm t)
      {
        ATerm j_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_43 = t;
            int q_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_43);
              }
            else
              {
                t = n_43;
                t = m_114(t);
                t = Cons_2_0(_id, p_10, t);
              }
            ;
            LocalPopChoice(m_43);
          }
        else
          {
            t = j_43;
            {
              ATerm j_60 = NULL,k_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_60 = ATgetFirst((ATermList) t);
                  k_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_60), (ATerm) ATmakeAppl(sym_Undefined_1, j_60));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_10, p_10, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL;
  r_60 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = r_60;
  {
    ATerm q_10 (ATerm t)
    {
      ATerm r_43 = t;
      int u_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_114(t);
          ;
          LocalPopChoice(u_43);
        }
      else
        {
          t = r_43;
          {
            ATerm w_43 = t;
            int x_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_10 (ATerm t)
                {
                  ATerm u_60 = NULL;
                  u_60 = t;
                  if(match_string(t, "--help"))
                    {
                      t = u_60;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = u_60;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = u_60;
                        }
                    }
                  return(t);
                }
                ATerm t_10 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_y_43;
                  return(t);
                }
                ATerm v_10 (ATerm t)
                {
                  t = term_z_43;
                  return(t);
                }
                t = Option_3_0(r_10, t_10, v_10, t);
                ;
                LocalPopChoice(x_43);
              }
            else
              {
                t = w_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_10, t);
    {
      ATerm e_44 = t;
      int f_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_60 = NULL;
          z_60 = t;
          {
            ATerm g_44 = t;
            int h_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_60;
                {
                  ATerm i_44 = t;
                  int j_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm k_44 = t;
                        int l_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_10 = NULL;
                            t = eval_config_0_0(t);
                            u_10 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_10);
                            t = u_10;
                            ;
                            LocalPopChoice(l_44);
                          }
                        else
                          {
                            t = k_44;
                          }
                      }
                      ;
                      LocalPopChoice(j_44);
                    }
                  else
                    {
                      t = i_44;
                      {
                        ATerm w_10 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(w_10, t);
                      }
                    }
                  t = z_60;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(h_44);
              }
            else
              {
                t = g_44;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm m_44 = t;
                  int n_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_11 = NULL;
                      t = eval_config_0_0(t);
                      b_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), b_11);
                      t = b_11;
                      ;
                      LocalPopChoice(n_44);
                    }
                  else
                    {
                      t = m_44;
                    }
                  t = z_60;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(f_44);
        }
      else
        {
          t = e_44;
          {
            ATerm o_44 = t;
            int p_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_10 (ATerm t)
                {
                  ATerm y_10 (ATerm t)
                  {
                    if(((s_60 != NULL) && (s_60 != t)))
                      _fail(t);
                    else
                      s_60 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_10, t);
                  return(t);
                }
                t = fetch_1_0(x_10, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_60)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_b_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_60)), term_t_44));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(p_44);
              }
            else
              {
                t = o_44;
              }
          }
        }
      t_60 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm t)
{
  ATerm c_61 = NULL;
  t = parse_options_1_0(g_118, t);
  c_61 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_61);
  t = c_61;
  t = i_118(t);
  {
    ATerm u_44 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_118, t);
        ;
        LocalPopChoice(b_45);
      }
    else
      {
        t = u_44;
        {
          ATerm c_45 = t;
          int g_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_118(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_45);
            }
          else
            {
              t = c_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm j_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_117(t);
        ;
        LocalPopChoice(o_45);
      }
    else
      {
        t = j_45;
        {
          ATerm w_45 = t;
          int x_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_45);
            }
          else
            {
              t = w_45;
              {
                ATerm y_45 = t;
                int z_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_45);
                  }
                else
                  {
                    t = y_45;
                    {
                      ATerm e_46 = t;
                      int f_46 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_11 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm h_11 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_k_46;
                            return(t);
                          }
                          ATerm i_11 (ATerm t)
                          {
                            t = term_l_46;
                            return(t);
                          }
                          t = Option_3_0(e_11, h_11, i_11, t);
                          ;
                          LocalPopChoice(f_46);
                        }
                      else
                        {
                          t = e_46;
                          {
                            ATerm u_46 = t;
                            int v_46 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_46);
                              }
                            else
                              {
                                t = u_46;
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
  ATerm c_11 (ATerm t)
  {
    ATerm k_11 (ATerm t)
    {
      ATerm d_61 = NULL,e_61 = NULL;
      d_61 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm c_47 = t;
        int d_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_11 = NULL;
            t = eval_config_0_0(t);
            f_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_11);
            t = f_11;
            ;
            LocalPopChoice(d_47);
          }
        else
          {
            t = c_47;
          }
        e_61 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, e_61));
        t = d_61;
      }
      return(t);
    }
    t = if_verbose2_1_0(k_11, t);
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    ATerm f_61 = NULL,g_61 = NULL,j_11 = NULL;
    f_61 = t;
    {
      ATerm g_47 = t;
      int h_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_61 != NULL) && (g_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_11, t);
          ;
          LocalPopChoice(h_47);
        }
      else
        {
          t = g_47;
          t = term_i_47;
          g_61 = t;
        }
      t = not_null(g_61);
      t = ReadFromFile_0_0(t);
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_61, j_11);
      t = apply_strategy_1_0(p_117, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_11, r_117, c_11, d_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(implode_0_0, implode_options_0_0, default_usage_0_0, t);
  return(t);
}

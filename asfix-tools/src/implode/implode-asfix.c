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
ATerm term_k_45;
ATerm term_h_45;
ATerm term_q_44;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_i_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_v_42;
ATerm term_s_42;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_w_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_j_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_c_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_i_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_b_37;
ATerm term_l_36;
ATerm term_g_36;
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
ATerm term_z_26;
ATerm term_s_26;
ATerm term_h_22;
ATerm term_h_21;
ATerm term_v_20;
ATerm term_d_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_d_17;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
void init_constant_terms (void)
{
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
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
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
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
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_38);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym__3, term_s_42, term_v_42, term_r_11);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm f_0 (ATerm);
ATerm i_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm implode_options_0_0 (ATerm);
ATerm amb_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm is_conc_0_0 (ATerm);
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm ReplConsSome_1_0 (ATerm c_96 (ATerm), ATerm);
ATerm is_ins_0_0 (ATerm);
ATerm ReplConsIns_1_0 (ATerm b_96 (ATerm), ATerm);
ATerm is_nil_0_0 (ATerm);
ATerm ReplNamedCons_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm ReplCons_1_0 (ATerm f_96 (ATerm), ATerm);
ATerm OptList_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm is_layout_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm implodeAsfix_0_0 (ATerm);
ATerm Tuple_0_0 (ATerm);
ATerm topdown_1_0 (ATerm k_98 (ATerm), ATerm);
ATerm CTC2_0_0 (ATerm);
ATerm Conc_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm CTC1_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm conc_to_cons_0_0 (ATerm);
ATerm Constr1_0_0 (ATerm);
ATerm CnsGeneric_0_0 (ATerm);
ATerm ConstrNil_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm replace_appl_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm k_3 (ATerm);
ATerm FlatAlt_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm o_99 (ATerm), ATerm);
ATerm cons_1_0 (ATerm m_89 (ATerm), ATerm);
ATerm lex_1_0 (ATerm v_88 (ATerm), ATerm);
ATerm alt_2_0 (ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm);
ATerm injective_alt_0_0 (ATerm);
ATerm varsym_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm f_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm injection_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm filter_1_0 (ATerm g_111 (ATerm), ATerm);
ATerm r_34 (ATerm i_31, ATerm);
ATerm s_34 (ATerm t_32, ATerm);
ATerm FlatList_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm at_last_1_0 (ATerm d_105 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm PpSym_0_0 (ATerm);
ATerm sort_1_0 (ATerm i_89 (ATerm), ATerm);
ATerm q_45 (ATerm r_44, ATerm s_44, ATerm t_44, ATerm);
ATerm r_45 (ATerm z_44, ATerm a_45, ATerm b_45, ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm repeat_1_0 (ATerm m_97 (ATerm), ATerm);
ATerm layout_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm opt_1_0 (ATerm w_88 (ATerm), ATerm);
ATerm cf_1_0 (ATerm u_88 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm is_layout_p__0_0 (ATerm);
ATerm prod_3_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm);
ATerm appl_2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm flat_layout_0_0 (ATerm);
ATerm yield_0_0 (ATerm);
ATerm implode_lexical_0_0 (ATerm);
ATerm downup2_2_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm implode_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_116 (ATerm), ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_123 (ATerm), ATerm);
ATerm d_51 (ATerm x_50, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_8 (ATerm);
ATerm p_8 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_104 (ATerm), ATerm);
ATerm _2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm w_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_118 (ATerm), ATerm);
ATerm v_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_9 (ATerm);
ATerm need_help_1_0 (ATerm p_124 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_88 (ATerm), ATerm);
ATerm b_10 (ATerm);
ATerm e_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm lit_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm list_1_0 (ATerm f_104 (ATerm), ATerm);
ATerm seq_1_0 (ATerm x_88 (ATerm), ATerm);
ATerm iter_star_sep_2_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm);
ATerm iter_1_0 (ATerm d_89 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm);
ATerm r_10 (ATerm);
ATerm parse_options_p__1_0 (ATerm x_120 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm parse_options_1_0 (ATerm w_120 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm);
ATerm g_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm m_11 (ATerm);
ATerm o_11 (ATerm);
ATerm iowrap_3_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_r_11;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm f_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_0 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm s_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm v_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_a_12;
  return(t);
}
ATerm y_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_d_12;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm h_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm p_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm u_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm y_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_0, i_0, r_0, t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(s_0, t_0, u_0, t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              ATerm x_12 = t;
              int y_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_0, w_0, x_0, t);
                  ;
                  LocalPopChoice(y_12);
                }
              else
                {
                  t = x_12;
                  {
                    ATerm z_12 = t;
                    int a_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_0, z_0, a_1, t);
                        ;
                        LocalPopChoice(a_13);
                      }
                    else
                      {
                        t = z_12;
                        {
                          ATerm c_13 = t;
                          int d_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(b_1, c_1, d_1, t);
                              ;
                              LocalPopChoice(d_13);
                            }
                          else
                            {
                              t = c_13;
                              {
                                ATerm e_13 = t;
                                int f_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(e_1, f_1, g_1, t);
                                    ;
                                    LocalPopChoice(f_13);
                                  }
                                else
                                  {
                                    t = e_13;
                                    {
                                      ATerm g_13 = t;
                                      int h_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(h_1, k_1, n_1, t);
                                          ;
                                          LocalPopChoice(h_13);
                                        }
                                      else
                                        {
                                          t = g_13;
                                          {
                                            ATerm j_13 = t;
                                            int k_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(p_1, q_1, s_1, t);
                                                ;
                                                LocalPopChoice(k_13);
                                              }
                                            else
                                              {
                                                t = j_13;
                                                {
                                                  ATerm l_13 = t;
                                                  int n_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(u_1, v_1, x_1, t);
                                                      ;
                                                      LocalPopChoice(n_13);
                                                    }
                                                  else
                                                    {
                                                      t = l_13;
                                                      t = Option_3_0(y_1, a_2, c_2, t);
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
ATerm amb_1_0 (ATerm t_89 (ATerm), ATerm t)
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
  t = t_89(t);
  p_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, p_0), n_0);
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL,r_1 = NULL,t_1 = NULL,w_1 = NULL,z_1 = NULL,b_2 = NULL,g_2 = NULL,h_2 = NULL;
  m_1 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_1 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
      {
        ATerm o_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_13 = ATgetFirst((ATermList) t);
      r_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_13 = ATgetFirst((ATermList) t);
      t_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_1;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_13 = ATgetFirst((ATermList) t);
            w_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_13);
        t = w_1;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_2;
            {
              ATerm v_13 = t;
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
                  t = m_1;
                }
              else
                {
                  t = v_13;
                  if(match_cons(t, sym_cf_1))
                    {
                      h_2 = ATgetArgument(t, 0);
                      t = h_2;
                      {
                        ATerm y_13 = t;
                        int z_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm a_14 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(z_13);
                            t = m_1;
                          }
                        else
                          {
                            t = y_13;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm b_14 = ATgetArgument(t, 0);
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
                          ATerm c_14 = ATgetArgument(t, 0);
                          ATerm d_14 = ATgetArgument(t, 1);
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
                ATerm e_14 = ATgetFirst((ATermList) t);
                z_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_14 = ATgetFirst((ATermList) t);
                b_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_2;
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
                ATerm g_14 = ATgetArgument(t, 0);
                ATerm h_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_1;
          }
      }
    else
      {
        t = s_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm i_14 = ATgetArgument(t, 0);
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
  ATerm x_3 = NULL,y_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  a_4 = t;
  if(match_cons(t, sym_appl_2))
    {
      c_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_4 = ATgetFirst((ATermList) t);
      g_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_4 = ATgetFirst((ATermList) t);
      i_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_3 = ATgetFirst((ATermList) t);
      y_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_1 = NULL,j_1 = NULL,l_1 = NULL;
        t = y_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_4;
        t = is_conc_0_0(t);
        t = e_4;
        t = m_0(t);
        i_1 = t;
        t = h_4;
        t = m_0(t);
        j_1 = t;
        t = x_3;
        t = m_0(t);
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, (ATerm) ATinsert(CheckATermList(l_1), j_1));
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm l_14 = ATgetArgument(t, 0);
                  ATerm m_14 = ATgetArgument(t, 1);
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
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              {
                ATerm o_2 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_1, (ATerm) ATinsert(CheckATermList(l_1), j_1)));
                if(match_cons(t, sym__2))
                  {
                    ATerm n_14 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_14) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    o_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_2;
                t = concat_0_0(t);
              }
            }
        }
      }
    }
  else
    {
      ATerm z_3 = NULL,b_4 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_4;
      t = is_conc_0_0(t);
      t = e_4;
      t = m_0(t);
      z_3 = t;
      t = h_4;
      t = m_0(t);
      b_4 = t;
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_4;
            {
              ATerm q_14 = t;
              int r_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  ;
                  LocalPopChoice(r_14);
                }
              else
                {
                  t = q_14;
                  t = Cons_2_0(_id, _id, t);
                }
              t = (ATerm) ATmakeAppl(sym__2, z_3, b_4);
              {
                ATerm s_14 = t;
                int t_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm u_14 = ATgetArgument(t, 0);
                        ATerm v_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = z_3;
                    {
                      ATerm e_2 (ATerm t)
                      {
                        t = b_4;
                        return(t);
                      }
                      t = at_end_1_0(e_2, t);
                    }
                    ;
                    LocalPopChoice(t_14);
                  }
                else
                  {
                    t = s_14;
                    {
                      ATerm u_4 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_3, b_4));
                      if(match_cons(t, sym__2))
                        {
                          ATerm w_14 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) w_14) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          u_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_4;
                      t = concat_0_0(t);
                    }
                  }
              }
            }
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            t = (ATerm) ATmakeAppl(sym_Conc_2, z_3, b_4);
          }
      }
    }
  return(t);
}
ATerm ReplConsSome_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm m_5 = NULL,o_5 = NULL,p_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      m_5 = ATgetArgument(t, 0);
      {
        ATerm x_14 = ATgetArgument(t, 1);
        if(((ATgetType(x_14) == AT_LIST) && !(ATisEmpty(x_14))))
          {
            o_5 = ATgetFirst((ATermList) x_14);
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
  t = m_5;
  if(match_cons(t, sym_prod_3))
    {
      s_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
      {
        ATerm z_14 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_5 = ATgetFirst((ATermList) t);
      w_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_5;
  if(match_cons(t, sym_opt_1))
    {
      z_5 = ATgetArgument(t, 0);
      t = z_5;
      if((t_5 != t))
        {
          _fail(t);
        }
      t = m_5;
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          z_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_5;
      if(match_cons(t, sym_cf_1))
        {
          v_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_5;
      if(match_cons(t, sym_opt_1))
        {
          a_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_6;
      if((v_5 != t))
        {
          _fail(t);
        }
      t = m_5;
    }
  t = o_5;
  t = c_96(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, p_5);
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,e_7 = NULL,f_7 = NULL;
  v_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      w_6 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
      {
        ATerm a_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = w_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_6 = ATgetFirst((ATermList) t);
      a_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_7;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = b_7;
  if(match_cons(t, sym_iter_1))
    {
      e_7 = ATgetArgument(t, 0);
      t = e_7;
      if((x_6 != t))
        {
          _fail(t);
        }
      t = v_6;
    }
  else
    {
      ATerm b_15 = t;
      int c_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              e_7 = ATgetArgument(t, 0);
              {
                ATerm d_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(c_15);
          t = e_7;
          if((x_6 != t))
            {
              _fail(t);
            }
          t = v_6;
        }
      else
        {
          t = b_15;
          if(match_cons(t, sym_cf_1))
            {
              e_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_6;
          if(match_cons(t, sym_cf_1))
            {
              y_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_7;
          if(match_cons(t, sym_iter_1))
            {
              f_7 = ATgetArgument(t, 0);
              t = f_7;
              if((y_6 != t))
                {
                  _fail(t);
                }
              t = v_6;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  f_7 = ATgetArgument(t, 0);
                  {
                    ATerm e_15 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = f_7;
              if((y_6 != t))
                {
                  _fail(t);
                }
              t = v_6;
            }
        }
    }
  return(t);
}
ATerm ReplConsIns_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      a_8 = ATgetArgument(t, 0);
      {
        ATerm f_15 = ATgetArgument(t, 1);
        if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
          {
            b_8 = ATgetFirst((ATermList) f_15);
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
  t = a_8;
  t = is_ins_0_0(t);
  t = b_8;
  t = b_96(t);
  c_8 = t;
  t = (ATerm) ATinsert(ATempty, c_8);
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm b_9 = NULL,e_9 = NULL,p_9 = NULL,c_10 = NULL;
  b_9 = t;
  if(match_cons(t, sym_prod_3))
    {
      e_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
      {
        ATerm i_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_9;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_9;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm n_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_15);
        t = b_9;
      }
    else
      {
        t = l_15;
        {
          ATerm o_15 = t;
          int p_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm q_15 = ATgetArgument(t, 0);
                  ATerm r_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(p_15);
              t = b_9;
            }
          else
            {
              t = o_15;
              if(match_cons(t, sym_cf_1))
                {
                  c_10 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_10;
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
                    t = b_9;
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
                    t = b_9;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplNamedCons_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,z_10 = NULL,a_11 = NULL,e_11 = NULL,n_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      v_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10;
  if(match_cons(t, sym_prod_3))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      ATerm y_15 = ATgetArgument(t, 1);
      a_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_11;
  {
    ATerm f_2 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((e_11 != NULL) && (e_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(f_2, t);
    t = not_null(e_11);
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
      n_11 = t;
      t = z_10;
      t = map_1_0(y_95, t);
      u_11 = t;
      t = SSL_mkterm(n_11, u_11);
    }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm h_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1_0(f_96, t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = h_16;
      {
        ATerm t_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_15 = NULL,j_15 = NULL,k_15 = NULL;
            h_15 = t;
            if(match_cons(t, sym_appl_2))
              {
                j_15 = ATgetArgument(t, 0);
                k_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_15;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            {
              ATerm w_16 = t;
              int x_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_15;
                  t = is_nil_0_0(t);
                  t = (ATerm) ATempty;
                  ;
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = w_16;
                  {
                    ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
                    t = j_15;
                    if(match_cons(t, sym_prod_3))
                      {
                        z_4 = ATgetArgument(t, 0);
                        a_5 = ATgetArgument(t, 1);
                        {
                          ATerm y_16 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    t = z_4;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = a_5;
                    {
                      ATerm z_16 = t;
                      int a_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              ATerm b_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_17);
                          t = j_15;
                        }
                      else
                        {
                          t = z_16;
                          if(match_cons(t, sym_cf_1))
                            {
                              b_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = b_5;
                          if(match_cons(t, sym_opt_1))
                            {
                              ATerm c_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = j_15;
                        }
                      t = term_d_17;
                    }
                  }
                }
            }
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = t_16;
            {
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ReplConsIns_1_0(f_96, t);
                  ;
                  LocalPopChoice(f_17);
                }
              else
                {
                  t = e_17;
                  {
                    ATerm h_17 = t;
                    int i_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsSome_1_0(f_96, t);
                        ;
                        LocalPopChoice(i_17);
                      }
                    else
                      {
                        t = h_17;
                        t = ReplConsConc_1_0(f_96, t);
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
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      o_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_16;
  if(match_cons(t, sym_prod_3))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
      {
        ATerm n_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_16 = ATgetFirst((ATermList) t);
      k_16 = (ATerm) ATgetNext((ATermList) t);
      t = k_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_16;
      if(match_cons(t, sym_opt_1))
        {
          r_16 = ATgetArgument(t, 0);
          t = u_16;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_16 = ATgetFirst((ATermList) t);
              m_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_16;
          if((i_16 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = l_16;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              r_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_16;
          if(match_cons(t, sym_cf_1))
            {
              j_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_16;
          if(match_cons(t, sym_opt_1))
            {
              s_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_16;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_16 = ATgetFirst((ATermList) t);
              m_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_16;
          if((j_16 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = l_16;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_16;
      if(match_cons(t, sym_opt_1))
        {
          r_16 = ATgetArgument(t, 0);
          t = u_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_16;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              r_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_16;
          if(match_cons(t, sym_opt_1))
            {
              s_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_16;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_16;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = prod_3_0(_id, j_2, _id, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm o_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = cf_1_0(k_2, t);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = o_17;
      t = lit_1_0(_id, t);
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = opt_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = opt_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm is_layout_0_0 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = appl_2_0(i_2, _id, t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      t = cf_1_0(m_2, t);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = filter_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm t_17 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_17;
    }
  return(t);
}
ATerm implodeAsfix_0_0 (ATerm t)
{
  ATerm g_17 = NULL;
  if(match_cons(t, sym_parsetree_2))
    {
      g_17 = ATgetArgument(t, 0);
      {
        ATerm u_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_17;
  {
    ATerm p_17 (ATerm t)
    {
      ATerm v_17 = t;
      int w_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0_0(t);
          ;
          LocalPopChoice(w_17);
        }
      else
        {
          t = v_17;
          {
            ATerm x_17 = t;
            int y_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = appl_2_0(_id, p_2, t);
                {
                  ATerm z_17 = t;
                  int a_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0_0(t);
                      t = p_17(t);
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
                            t = ReplCons_1_0(p_17, t);
                            ;
                            LocalPopChoice(c_18);
                          }
                        else
                          {
                            t = b_18;
                            {
                              ATerm d_18 = t;
                              int g_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      j_17 = ATgetArgument(t, 0);
                                      k_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = k_17;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      l_17 = ATgetFirst((ATermList) t);
                                      m_17 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = m_17;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = j_17;
                                  t = injection_0_0(t);
                                  t = l_17;
                                  t = p_17(t);
                                  ;
                                  LocalPopChoice(g_18);
                                }
                              else
                                {
                                  t = d_18;
                                  {
                                    ATerm i_18 = t;
                                    int j_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0_0(t);
                                        t = p_17(t);
                                        ;
                                        LocalPopChoice(j_18);
                                      }
                                    else
                                      {
                                        t = i_18;
                                        t = FlatAlt_0_0(t);
                                        t = p_17(t);
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                ;
                LocalPopChoice(y_17);
              }
            else
              {
                t = x_17;
                {
                  ATerm l_18 = t;
                  int m_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_2 (ATerm t)
                      {
                        t = list_1_0(p_17, t);
                        return(t);
                      }
                      t = amb_1_0(r_2, t);
                      ;
                      LocalPopChoice(m_18);
                    }
                  else
                    {
                      t = l_18;
                      t = SRTS_all(p_17, t);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = p_17(t);
  }
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,h_18 = NULL,k_18 = NULL,o_18 = NULL;
  e_18 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_18;
  if(match_cons(t, sym_prod_3))
    {
      ATerm n_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      {
        ATerm p_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = h_18;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm s_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_18);
        t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), o_18);
      }
    else
      {
        t = q_18;
        if(match_cons(t, sym_cf_1))
          {
            k_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_18;
        if(match_cons(t, sym_seq_1))
          {
            ATerm t_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), o_18);
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  t = k_98(t);
  {
    ATerm s_2 (ATerm t)
    {
      t = topdown_1_0(k_98, t);
      return(t);
    }
    t = SRTS_all(s_2, t);
  }
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm v_18 = NULL,x_18 = NULL,y_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      t = a_19;
      if(match_cons(t, sym_Ins_1))
        {
          y_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_18 = ATgetFirst((ATermList) t);
          v_18 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(v_18), x_18), y_18);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              x_18 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, x_18), y_18);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, y_18);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          a_19 = ATgetArgument(t, 0);
          b_19 = ATgetArgument(t, 1);
          c_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_19), (ATerm) ATinsert(ATempty, b_19)), a_19);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm Conc_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  t_19 = t;
  if(match_cons(t, sym_Conc_2))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_19);
  o_19 = t;
  t = p_19;
  t = l_83(t);
  r_19 = t;
  t = q_19;
  t = m_83(t);
  s_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Conc_2, r_19, s_19), o_19);
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      e_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
      t = h_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_20;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              ATerm u_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_20;
                  ;
                  LocalPopChoice(w_18);
                }
              else
                {
                  t = u_18;
                  t = h_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  f_20 = ATgetArgument(t, 0);
                  g_20 = ATgetArgument(t, 1);
                  {
                    ATerm z_18 = t;
                    int d_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_20;
                        ;
                        LocalPopChoice(d_19);
                      }
                    else
                      {
                        t = z_18;
                        t = (ATerm) ATmakeAppl(sym_Conc_2, f_20, (ATerm) ATmakeAppl(sym_Conc_2, g_20, h_20));
                      }
                  }
                }
              else
                {
                  t = e_20;
                }
            }
        }
      else
        {
          t = e_20;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = h_20;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  f_20 = ATgetArgument(t, 0);
                  g_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, f_20, (ATerm) ATmakeAppl(sym_Conc_2, g_20, h_20));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          e_20 = ATgetArgument(t, 0);
          h_20 = ATgetArgument(t, 1);
          c_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_20;
      if(match_cons(t, sym_Conc_3))
        {
          f_20 = ATgetArgument(t, 0);
          g_20 = ATgetArgument(t, 1);
          b_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, f_20, g_20, (ATerm) ATmakeAppl(sym_Conc_3, b_20, h_20, c_20));
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL,j_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_21 = ATgetFirst((ATermList) t);
          j_21 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, i_21), j_21);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              i_21 = ATgetArgument(t, 0);
              j_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, i_21, (ATerm) ATmakeAppl(sym_Ins_1, j_21));
        }
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = Conc_2_0(u_2, _id, t);
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
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
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_1_0(t_2, t);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2_0(_id, conc_to_cons_0_0, t);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
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
                ATerm a_22 = NULL;
                if(match_cons(t, sym_Ins_1))
                  {
                    a_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, a_22);
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
  ATerm h_23 = NULL,j_23 = NULL,l_23 = NULL,n_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      q_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      {
        ATerm u_19 = ATgetArgument(t, 2);
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
              t = term_v_19;
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
                      t = term_v_19;
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
                          t = term_w_19;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              w_23 = ATgetArgument(t, 0);
                              {
                                ATerm x_19 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = w_23;
                          if((s_23 != t))
                            {
                              _fail(t);
                            }
                          t = term_w_19;
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
                      t = term_w_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          v_23 = ATgetArgument(t, 0);
                          {
                            ATerm y_19 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = v_23;
                      if((r_23 != t))
                        {
                          _fail(t);
                        }
                      t = term_w_19;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_19 = ATgetFirst((ATermList) t);
              h_23 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_23;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_23;
              if(match_cons(t, sym_iter_1))
                {
                  ATerm a_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_d_20;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_20 = ATgetFirst((ATermList) t);
                  j_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_23;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = u_23;
                  {
                    ATerm j_20 = t;
                    int k_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm l_20 = ATgetArgument(t, 0);
                            ATerm m_20 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_20);
                        t = term_d_20;
                      }
                    else
                      {
                        t = j_20;
                        if(match_cons(t, sym_cf_1))
                          {
                            v_23 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = v_23;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm n_20 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = term_d_20;
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm o_20 = ATgetFirst((ATermList) t);
                      l_23 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = l_23;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm p_20 = ATgetFirst((ATermList) t);
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
                      ATerm q_20 = ATgetArgument(t, 0);
                      ATerm r_20 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_d_20;
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
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm u_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(t_20);
            t = term_v_20;
          }
        else
          {
            t = s_20;
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
            t = term_v_20;
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
          ATerm v_2 (ATerm t)
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
          t = oncetd_1_0(v_2, t);
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
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
      {
        ATerm d_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = x_24;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_24;
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
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm m_21 = ATgetArgument(t, 0);
                  ATerm n_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(l_21);
              t = term_h_21;
            }
          else
            {
              t = k_21;
              if(match_cons(t, sym_cf_1))
                {
                  z_24 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_24;
              {
                ATerm o_21 = t;
                int p_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm s_21 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_21);
                    t = term_h_21;
                  }
                else
                  {
                    t = o_21;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm t_21 = ATgetArgument(t, 0);
                        ATerm u_21 = ATgetArgument(t, 1);
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
ATerm w_2 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = appl_2_0(_id, _id, t);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_25 = NULL;
            if(match_cons(t, sym_appl_2))
              {
                f_25 = ATgetArgument(t, 0);
                {
                  ATerm z_21 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = f_25;
            t = ConstrNil_0_0(t);
            t = (ATerm) ATempty;
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = CnsGeneric_0_0(t);
          }
      }
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(w_2, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
      ATerm d_22 = t;
      int e_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_2 (ATerm t)
          {
            ATerm z_2 (ATerm t)
            {
              ATerm b_3 (ATerm t)
              {
                ATerm f_22 = t;
                int g_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_3 (ATerm t)
                    {
                      if(((m_25 != NULL) && (m_25 != t)))
                        _fail(t);
                      else
                        m_25 = t;
                      return(t);
                    }
                    t = cf_1_0(d_3, t);
                    ;
                    LocalPopChoice(g_22);
                  }
                else
                  {
                    t = f_22;
                    {
                      ATerm s_25 = NULL;
                      s_25 = t;
                      if(((m_25 != NULL) && (m_25 != t)))
                        _fail(t);
                      else
                        m_25 = t;
                      t = s_25;
                    }
                  }
                return(t);
              }
              t = Cons_2_0(b_3, c_3, t);
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              ATerm e_3 (ATerm t)
              {
                if(match_cons(t, sym_alt_2))
                  {
                    if(((o_25 != NULL) && (o_25 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_25 = ATgetArgument(t, 0);
                    if(((p_25 != NULL) && (p_25 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = cf_1_0(e_3, t);
              return(t);
            }
            t = prod_3_0(z_2, a_3, _id, t);
            return(t);
          }
          ATerm y_2 (ATerm t)
          {
            if(((q_25 != NULL) && (q_25 != t)))
              _fail(t);
            else
              q_25 = t;
            return(t);
          }
          t = appl_2_0(x_2, y_2, t);
          ;
          LocalPopChoice(e_22);
        }
      else
        {
          t = d_22;
          {
            ATerm f_3 (ATerm t)
            {
              ATerm h_3 (ATerm t)
              {
                ATerm j_3 (ATerm t)
                {
                  if(((m_25 != NULL) && (m_25 != t)))
                    _fail(t);
                  else
                    m_25 = t;
                  return(t);
                }
                t = Cons_2_0(j_3, k_3, t);
                return(t);
              }
              ATerm i_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  if(match_cons(t, sym_alt_2))
                    {
                      if(((o_25 != NULL) && (o_25 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_25 = ATgetArgument(t, 0);
                      if(((p_25 != NULL) && (p_25 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        p_25 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = lex_1_0(l_3, t);
                return(t);
              }
              t = prod_3_0(h_3, i_3, _id, t);
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              if(((q_25 != NULL) && (q_25 != t)))
                _fail(t);
              else
                q_25 = t;
              return(t);
            }
            t = appl_2_0(f_3, g_3, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(o_25), not_null(p_25)), term_h_22);
      {
        ATerm k_26 (ATerm t)
        {
          ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
          if(match_cons(t, sym__2))
            {
              z_25 = ATgetArgument(t, 0);
              c_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_25;
          if(match_cons(t, sym_alt_2))
            {
              a_26 = ATgetArgument(t, 0);
              b_26 = ATgetArgument(t, 1);
              {
                ATerm i_22 = t;
                int j_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_25;
                    if(((m_25 != NULL) && (m_25 != t)))
                      _fail(t);
                    else
                      m_25 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, c_26, not_null(q_25));
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
                          t = a_26;
                          if(((m_25 != NULL) && (m_25 != t)))
                            _fail(t);
                          else
                            m_25 = t;
                          t = b_26;
                          if(((r_25 != NULL) && (r_25 != t)))
                            _fail(t);
                          else
                            r_25 = t;
                          t = (ATerm) ATmakeAppl(sym_alt_2, c_26, not_null(q_25));
                          ;
                          LocalPopChoice(l_22);
                        }
                      else
                        {
                          t = k_22;
                          {
                            ATerm i_6 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, c_26, term_h_22);
                            {
                              ATerm m_22 = t;
                              int n_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = SSL_addi(c_26, (ATerm) ATmakeInt(1));
                                  ;
                                  LocalPopChoice(n_22);
                                }
                              else
                                {
                                  t = m_22;
                                  t = SSL_addr(c_26, (ATerm) ATmakeInt(1));
                                }
                              i_6 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_26, i_6);
                              t = k_26(t);
                            }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = z_25;
              if(((m_25 != NULL) && (m_25 != t)))
                _fail(t);
              else
                m_25 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, c_26, not_null(q_25));
            }
          return(t);
        }
        t = k_26(t);
      }
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm j_26 = NULL;
        j_26 = t;
        if(!(match_cons(t, sym_FlatAlt_0)))
          _fail(t);
        t = j_26;
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm m_26 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_99(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = SRTS_one(m_26, t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm cons_1_0 (ATerm m_89 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_cons_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  n_26 = t;
  t = o_26;
  t = m_89(t);
  p_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, p_26), n_26);
  return(t);
}
ATerm lex_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  w_26 = t;
  if(match_cons(t, sym_lex_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_26);
  t_26 = t;
  t = u_26;
  t = v_88(t);
  v_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, v_26), t_26);
  return(t);
}
ATerm alt_2_0 (ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,i_27 = NULL,j_27 = NULL;
  j_27 = t;
  if(match_cons(t, sym_alt_2))
    {
      d_27 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_27);
  b_27 = t;
  t = d_27;
  t = f_89(t);
  f_27 = t;
  t = e_27;
  t = g_89(t);
  i_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, f_27, i_27), b_27);
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
ATerm varsym_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  s_27 = t;
  if(match_cons(t, sym_varsym_1))
    {
      q_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  p_27 = t;
  t = q_27;
  t = j_89(t);
  r_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, r_27), p_27);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = Cons_2_0(o_3, p_3, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm u_22 = t;
  if((PushChoice() == 0))
    {
      t = oncetd_1_0(q_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_22;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = varsym_1_0(_id, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = cons_1_0(_id, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = Cons_2_0(t_3, u_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm v_22 = t;
  if((PushChoice() == 0))
    {
      t = oncetd_1_0(w_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_22;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      t = cf_1_0(v_3, t);
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = sort_1_0(_id, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = cons_1_0(_id, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = Cons_2_0(l_4, m_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm y_22 = t;
  if((PushChoice() == 0))
    {
      t = oncetd_1_0(p_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_22;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm z_22 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_22;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = lit_1_0(_id, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = lit_1_0(_id, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = cons_1_0(_id, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = oncetd_1_0(r_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL;
      b_29 = t;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bracket", 0, ATtrue)))
        _fail(t);
      t = b_29;
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prod_3_0(m_3, _id, n_3, t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prod_3_0(r_3, injective_alt_0_0, s_3, t);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            {
              ATerm g_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_4 (ATerm t)
                  {
                    ATerm k_23 = t;
                    int m_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1_0(_id, t);
                        ;
                        LocalPopChoice(m_23);
                      }
                    else
                      {
                        t = k_23;
                        {
                          ATerm o_23 = t;
                          int p_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1_0(j_4, t);
                              ;
                              LocalPopChoice(p_23);
                            }
                          else
                            {
                              t = o_23;
                              {
                                ATerm x_23 = t;
                                int y_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1_0(j_4, t);
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
                                          t = iter_1_0(j_4, t);
                                          ;
                                          LocalPopChoice(a_24);
                                        }
                                      else
                                        {
                                          t = z_23;
                                          {
                                            ATerm b_24 = t;
                                            int c_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1_0(j_4, t);
                                                ;
                                                LocalPopChoice(c_24);
                                              }
                                            else
                                              {
                                                t = b_24;
                                                {
                                                  ATerm d_24 = t;
                                                  int e_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = iter_sep_2_0(j_4, n_4, t);
                                                      ;
                                                      LocalPopChoice(e_24);
                                                    }
                                                  else
                                                    {
                                                      t = d_24;
                                                      t = iter_star_sep_2_0(j_4, o_4, t);
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
                  t = prod_3_0(f_4, j_4, k_4, t);
                  ;
                  LocalPopChoice(i_23);
                }
              else
                {
                  t = g_23;
                  {
                    ATerm f_24 = t;
                    int g_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
                        o_28 = t;
                        if(match_cons(t, sym_prod_3))
                          {
                            p_28 = ATgetArgument(t, 0);
                            u_28 = ATgetArgument(t, 1);
                            x_28 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = p_28;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            q_28 = ATgetFirst((ATermList) t);
                            t_28 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = q_28;
                        if(match_cons(t, sym_cf_1))
                          {
                            r_28 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_28;
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            s_28 = ATgetArgument(t, 0);
                            m_28 = ATgetArgument(t, 1);
                            t = t_28;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = u_28;
                            if(match_cons(t, sym_cf_1))
                              {
                                v_28 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_28;
                            if(match_cons(t, sym_iter_star_sep_2))
                              {
                                w_28 = ATgetArgument(t, 0);
                                n_28 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = x_28;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = w_28;
                            if((s_28 != t))
                              {
                                _fail(t);
                              }
                            t = n_28;
                            if((m_28 != t))
                              {
                                _fail(t);
                              }
                            t = o_28;
                          }
                        else
                          {
                            if(match_cons(t, sym_iter_1))
                              {
                                s_28 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_28;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = u_28;
                            if(match_cons(t, sym_cf_1))
                              {
                                v_28 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_28;
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
                            if((s_28 != t))
                              {
                                _fail(t);
                              }
                            t = o_28;
                          }
                        ;
                        LocalPopChoice(g_24);
                      }
                    else
                      {
                        t = f_24;
                        {
                          ATerm k_24 = t;
                          int l_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prod_3_0(_id, _id, q_4, t);
                              ;
                              LocalPopChoice(l_24);
                            }
                          else
                            {
                              t = k_24;
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
ATerm bottomup_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    t = bottomup_1_0(l_98, t);
    return(t);
  }
  t = SRTS_all(s_4, t);
  t = l_98(t);
  return(t);
}
ATerm filter_1_0 (ATerm g_111 (ATerm), ATerm t)
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
            ATerm t_4 (ATerm t)
            {
              t = filter_1_0(g_111, t);
              return(t);
            }
            t = Cons_2_0(g_111, t_4, t);
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
              t = filter_1_0(g_111, t);
            }
          }
      }
    }
  return(t);
}
ATerm r_34 (ATerm i_31, ATerm t)
{
  ATerm t_34 (ATerm t)
  {
    ATerm j_31 = NULL,k_31 = NULL,m_31 = NULL,n_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
    j_31 = t;
    if(match_cons(t, sym_appl_2))
      {
        k_31 = ATgetArgument(t, 0);
        r_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = k_31;
    if(match_cons(t, sym_prod_3))
      {
        ATerm u_24 = ATgetArgument(t, 0);
        m_31 = ATgetArgument(t, 1);
        {
          ATerm v_24 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = m_31;
    if(match_cons(t, sym_cf_1))
      {
        n_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = n_31;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm w_24 = ATgetArgument(t, 0);
        ATerm a_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_31;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_31 = ATgetFirst((ATermList) t);
        t_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = t_31;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, s_31);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_31 = ATgetFirst((ATermList) t);
            v_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_31;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_31 = ATgetFirst((ATermList) t);
            x_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_31;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm j_32 = NULL,k_32 = NULL;
            t = s_31;
            t = t_34(t);
            j_32 = t;
            t = w_31;
            t = t_34(t);
            k_32 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_32), (ATerm) ATinsert(ATempty, u_31)), j_32);
            t = concat_0_0(t);
          }
        else
          {
            ATerm r_32 = NULL,s_32 = NULL;
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
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_31;
            t = t_34(t);
            r_32 = t;
            t = a_32;
            t = t_34(t);
            s_32 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_32), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_31), w_31), u_31)), r_32);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = i_31;
  t = t_34(t);
  return(t);
}
ATerm s_34 (ATerm t_32, ATerm t)
{
  ATerm u_34 (ATerm t)
  {
    ATerm u_32 = NULL,v_32 = NULL,x_32 = NULL,y_32 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
    u_32 = t;
    if(match_cons(t, sym_appl_2))
      {
        v_32 = ATgetArgument(t, 0);
        b_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = v_32;
    if(match_cons(t, sym_prod_3))
      {
        ATerm b_25 = ATgetArgument(t, 0);
        x_32 = ATgetArgument(t, 1);
        {
          ATerm c_25 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = x_32;
    if(match_cons(t, sym_cf_1))
      {
        y_32 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = y_32;
    if(match_cons(t, sym_iter_1))
      {
        ATerm d_25 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = b_33;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_33 = ATgetFirst((ATermList) t);
        d_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = d_33;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, c_33);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_33 = ATgetFirst((ATermList) t);
            h_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_33;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm o_33 = NULL,p_33 = NULL;
            t = c_33;
            t = u_34(t);
            o_33 = t;
            t = g_33;
            t = u_34(t);
            p_33 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, p_33), o_33);
            t = concat_0_0(t);
          }
        else
          {
            ATerm u_33 = NULL,v_33 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_33 = ATgetFirst((ATermList) t);
                j_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_33;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_33;
            t = u_34(t);
            u_33 = t;
            t = i_33;
            t = u_34(t);
            v_33 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_33), (ATerm) ATinsert(ATempty, g_33)), u_33);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = t_32;
  t = u_34(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_33 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
      t = z_33;
      if(match_cons(t, sym_prod_3))
        {
          a_34 = ATgetArgument(t, 0);
          f_34 = ATgetArgument(t, 1);
          {
            ATerm e_25 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_34;
      if(match_cons(t, sym_cf_1))
        {
          g_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_34;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm i_25 = ATgetArgument(t, 0);
                ATerm j_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(h_25);
            t = j_34;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_34 = ATgetFirst((ATermList) t);
                l_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_34;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = a_34;
                {
                  ATerm k_25 = t;
                  int l_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_34(m_34, t);
                      ;
                      LocalPopChoice(l_25);
                    }
                  else
                    {
                      t = k_25;
                      t = (ATerm) ATinsert(ATempty, k_34);
                    }
                }
              }
            else
              {
                t = a_34;
                t = r_34(m_34, t);
              }
          }
        else
          {
            t = g_25;
            {
              ATerm n_25 = t;
              int t_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      ATerm u_25 = ATgetArgument(t, 0);
                      ATerm v_25 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_25);
                  t = a_34;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = j_34;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          b_34 = ATgetFirst((ATermList) t);
                          e_34 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = b_34;
                      if(match_cons(t, sym_cf_1))
                        {
                          c_34 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = c_34;
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm w_25 = ATgetArgument(t, 0);
                          ATerm x_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_34;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = j_34;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          k_34 = ATgetFirst((ATermList) t);
                          l_34 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = l_34;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = k_34;
                      t = FlatList_0_0(t);
                    }
                }
              else
                {
                  t = n_25;
                  {
                    ATerm y_25 = t;
                    int d_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm e_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_26);
                        t = j_34;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            k_34 = ATgetFirst((ATermList) t);
                            l_34 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = l_34;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = a_34;
                            {
                              ATerm f_26 = t;
                              int g_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = s_34(m_34, t);
                                  ;
                                  LocalPopChoice(g_26);
                                }
                              else
                                {
                                  t = f_26;
                                  t = (ATerm) ATinsert(ATempty, k_34);
                                }
                            }
                          }
                        else
                          {
                            t = a_34;
                            t = s_34(m_34, t);
                          }
                      }
                    else
                      {
                        t = y_25;
                        if(match_cons(t, sym_iter_star_1))
                          {
                            ATerm h_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = a_34;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = j_34;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                b_34 = ATgetFirst((ATermList) t);
                                e_34 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = b_34;
                            if(match_cons(t, sym_cf_1))
                              {
                                c_34 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = c_34;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm i_26 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = e_34;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = j_34;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                k_34 = ATgetFirst((ATermList) t);
                                l_34 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = l_34;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = k_34;
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
      t = m_34;
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  g_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_35 = ATgetFirst((ATermList) t);
      f_35 = (ATerm) ATgetNext((ATermList) t);
      t = f_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_35 = ATgetFirst((ATermList) t);
          d_35 = (ATerm) ATgetNext((ATermList) t);
          t = c_35;
          if(match_int(t, 34))
            {
              t = e_35;
              if(match_int(t, 92))
                {
                  ATerm l_26 = t;
                  int r_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_35 = NULL;
                      t = d_35;
                      t = De_Escape_0_0(t);
                      k_35 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_35), term_s_26);
                      ;
                      LocalPopChoice(r_26);
                    }
                  else
                    {
                      t = l_26;
                      {
                        ATerm n_35 = NULL;
                        t = f_35;
                        t = De_Escape_0_0(t);
                        n_35 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_35), e_35);
                      }
                    }
                }
              else
                {
                  ATerm q_35 = NULL;
                  t = f_35;
                  t = De_Escape_0_0(t);
                  q_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_35), e_35);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = e_35;
                  if(match_int(t, 92))
                    {
                      ATerm x_26 = t;
                      int y_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_35 = NULL;
                          t = d_35;
                          t = De_Escape_0_0(t);
                          s_35 = t;
                          t = (ATerm) ATinsert(CheckATermList(s_35), term_z_26);
                          ;
                          LocalPopChoice(y_26);
                        }
                      else
                        {
                          t = x_26;
                          {
                            ATerm v_35 = NULL;
                            t = f_35;
                            t = De_Escape_0_0(t);
                            v_35 = t;
                            t = (ATerm) ATinsert(CheckATermList(v_35), e_35);
                          }
                        }
                    }
                  else
                    {
                      ATerm y_35 = NULL;
                      t = f_35;
                      t = De_Escape_0_0(t);
                      y_35 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_35), e_35);
                    }
                }
              else
                {
                  ATerm b_36 = NULL;
                  t = f_35;
                  t = De_Escape_0_0(t);
                  b_36 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_36), e_35);
                }
            }
        }
      else
        {
          ATerm e_36 = NULL;
          t = f_35;
          t = De_Escape_0_0(t);
          e_36 = t;
          t = (ATerm) ATinsert(CheckATermList(e_36), e_35);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_35;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm k_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,z_37 = NULL,a_38 = NULL,h_38 = NULL;
  k_37 = t;
  t = SSL_explode_string(k_37);
  h_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_37 = ATgetFirst((ATermList) t);
      a_38 = (ATerm) ATgetNext((ATermList) t);
      t = a_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_37 = ATgetFirst((ATermList) t);
          v_37 = (ATerm) ATgetNext((ATermList) t);
          t = u_37;
          if(match_int(t, 34))
            {
              t = z_37;
              if(match_int(t, 92))
                {
                  ATerm a_27 = t;
                  int c_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_38 = NULL;
                      t = v_37;
                      t = De_Escape_0_0(t);
                      j_38 = t;
                      t = (ATerm) ATinsert(CheckATermList(j_38), term_s_26);
                      ;
                      LocalPopChoice(c_27);
                    }
                  else
                    {
                      t = a_27;
                      {
                        ATerm p_38 = NULL;
                        t = a_38;
                        t = De_Escape_0_0(t);
                        p_38 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_38), z_37);
                      }
                    }
                }
              else
                {
                  ATerm b_39 = NULL;
                  t = a_38;
                  t = De_Escape_0_0(t);
                  b_39 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_39), z_37);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = z_37;
                  if(match_int(t, 92))
                    {
                      ATerm g_27 = t;
                      int h_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_39 = NULL;
                          t = v_37;
                          t = De_Escape_0_0(t);
                          l_39 = t;
                          t = (ATerm) ATinsert(CheckATermList(l_39), term_z_26);
                          ;
                          LocalPopChoice(h_27);
                        }
                      else
                        {
                          t = g_27;
                          {
                            ATerm o_39 = NULL;
                            t = a_38;
                            t = De_Escape_0_0(t);
                            o_39 = t;
                            t = (ATerm) ATinsert(CheckATermList(o_39), z_37);
                          }
                        }
                    }
                  else
                    {
                      ATerm t_39 = NULL;
                      t = a_38;
                      t = De_Escape_0_0(t);
                      t_39 = t;
                      t = (ATerm) ATinsert(CheckATermList(t_39), z_37);
                    }
                }
              else
                {
                  ATerm e_40 = NULL;
                  t = a_38;
                  t = De_Escape_0_0(t);
                  e_40 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_40), z_37);
                }
            }
        }
      else
        {
          ATerm z_40 = NULL;
          t = a_38;
          t = De_Escape_0_0(t);
          z_40 = t;
          t = (ATerm) ATinsert(CheckATermList(z_40), z_37);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_38;
    }
  t_37 = t;
  t = SSL_implode_string(t_37);
  return(t);
}
ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm b_41 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_4, t);
        t = d_105(t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = Cons_2_0(_id, b_41, t);
      }
    return(t);
  }
  t = b_41(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_27) != AT_INT) || (ATgetInt((ATermInt) m_27) != 34)))
        _fail(t);
      {
        ATerm n_27 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(n_27) != AT_LIST) || !(ATisEmpty(n_27))))
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
  ATerm f_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  k_41 = t;
  t = SSL_explode_string(k_41);
  f_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_41 = ATgetFirst((ATermList) t);
      {
        ATerm o_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_41;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = f_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_27 = ATgetFirst((ATermList) t);
      m_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_41;
  t = at_last_1_0(w_4, t);
  n_41 = t;
  t = SSL_implode_string(n_41);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_27);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_27);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_w_27);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  c_42 = t;
  if(match_cons(t, sym_cf_1))
    {
      a_42 = ATgetArgument(t, 0);
      {
        ATerm e_42 = NULL;
        t = a_42;
        t = PpSym_0_0(t);
        e_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_27)), e_42), (ATerm) ATinsert(ATempty, term_x_27));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          a_42 = ATgetArgument(t, 0);
          {
            ATerm g_42 = NULL;
            t = a_42;
            t = PpSym_0_0(t);
            g_42 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_27)), g_42), (ATerm) ATinsert(ATempty, term_x_27));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_a_28);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  a_42 = ATgetArgument(t, 0);
                  b_42 = ATgetArgument(t, 1);
                  {
                    ATerm j_42 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(b_42), a_42);
                    t = map_1_0(PpSym_0_0, t);
                    j_42 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_28)), j_42), (ATerm) ATinsert(ATempty, term_b_28));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      a_42 = ATgetArgument(t, 0);
                      t = a_42;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(x_4, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          a_42 = ATgetArgument(t, 0);
                          t = a_42;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(y_4, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              a_42 = ATgetArgument(t, 0);
                              t = a_42;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(c_5, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  a_42 = ATgetArgument(t, 0);
                                  b_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_42 = NULL,q_42 = NULL;
                                    t = a_42;
                                    t = PpSym_0_0(t);
                                    p_42 = t;
                                    t = b_42;
                                    t = PpSym_0_0(t);
                                    q_42 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_28)), q_42), p_42), (ATerm) ATinsert(ATempty, term_d_28));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      a_42 = ATgetArgument(t, 0);
                                      b_42 = ATgetArgument(t, 1);
                                      {
                                        ATerm t_42 = NULL,u_42 = NULL;
                                        t = a_42;
                                        t = PpSym_0_0(t);
                                        t_42 = t;
                                        t = b_42;
                                        t = PpSym_0_0(t);
                                        u_42 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_28)), u_42), t_42), (ATerm) ATinsert(ATempty, term_d_28));
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
                                              a_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_28 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(h_28);
                                          {
                                            ATerm w_42 = NULL;
                                            t = a_42;
                                            t = PpSym_0_0(t);
                                            w_42 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_28)), w_42);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = g_28;
                                          {
                                            ATerm k_28 = t;
                                            int l_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    a_42 = ATgetArgument(t, 0);
                                                    b_42 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_28 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(l_28);
                                                {
                                                  ATerm d_43 = NULL,e_43 = NULL;
                                                  t = a_42;
                                                  t = PpSym_0_0(t);
                                                  d_43 = t;
                                                  t = b_42;
                                                  t = PpSym_0_0(t);
                                                  e_43 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_28)), e_43), d_43);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = k_28;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    a_42 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_43 = NULL;
                                                      t = a_42;
                                                      t = PpSym_0_0(t);
                                                      g_43 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, g_43), (ATerm) ATinsert(ATempty, term_z_28));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        a_42 = ATgetArgument(t, 0);
                                                        b_42 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_43 = NULL,k_43 = NULL;
                                                          t = a_42;
                                                          t = PpSym_0_0(t);
                                                          j_43 = t;
                                                          t = b_42;
                                                          t = PpSym_0_0(t);
                                                          k_43 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_43), (ATerm) ATinsert(ATempty, term_a_29)), j_43);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            a_42 = ATgetArgument(t, 0);
                                                            b_42 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm n_43 = NULL,q_43 = NULL;
                                                              t = a_42;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              n_43 = t;
                                                              t = b_42;
                                                              t = PpSym_0_0(t);
                                                              q_43 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_43), (ATerm) ATinsert(ATempty, term_d_29)), n_43);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                a_42 = ATgetArgument(t, 0);
                                                                b_42 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm t_43 = NULL,u_43 = NULL;
                                                                  t = a_42;
                                                                  t = PpSym_0_0(t);
                                                                  t_43 = t;
                                                                  t = b_42;
                                                                  t = PpSym_0_0(t);
                                                                  u_43 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_43), (ATerm) ATinsert(ATempty, term_h_29)), t_43);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    a_42 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm w_43 = NULL;
                                                                      t = a_42;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      w_43 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(w_43), term_i_29);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        a_42 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, a_42);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            a_42 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm o_6 = NULL;
                                                                              t = a_42;
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
                                                                                o_6 = t;
                                                                                t = (ATerm) ATinsert(ATempty, o_6);
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
                                                                                    a_42 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm o_29 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(n_29);
                                                                                {
                                                                                  ATerm z_6 = NULL;
                                                                                  t = a_42;
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
                                                                                    z_6 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, z_6);
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
ATerm sort_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  e_44 = t;
  if(match_cons(t, sym_sort_1))
    {
      c_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_44);
  b_44 = t;
  t = c_44;
  t = i_89(t);
  d_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, d_44), b_44);
  return(t);
}
ATerm q_45 (ATerm r_44, ATerm s_44, ATerm t_44, ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  t = r_44;
  if(match_cons(t, sym_cf_1))
    {
      w_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_44;
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
    x_44 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_29)), x_44), (ATerm) ATinsert(ATempty, term_t_29));
    t = concat_0_0(t);
    t = concat_strings_0_0(t);
    y_44 = t;
    t = SSL_mkterm(y_44, s_44);
  }
  return(t);
}
ATerm r_45 (ATerm z_44, ATerm a_45, ATerm b_45, ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  t = z_44;
  if(match_cons(t, sym_cf_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_45;
  t = sort_1_0(_id, t);
  t = PpSym_0_0(t);
  t = concat_strings_0_0(t);
  f_45 = t;
  t = SSL_mkterm(f_45, a_45);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm g_45 = NULL,i_45 = NULL,j_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
  o_45 = t;
  if(match_cons(t, sym_appl_2))
    {
      g_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
      t = g_45;
      if(match_cons(t, sym_prod_3))
        {
          ATerm u_29 = ATgetArgument(t, 0);
          i_45 = ATgetArgument(t, 1);
          {
            ATerm v_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_45 = ATgetFirst((ATermList) t);
          n_45 = (ATerm) ATgetNext((ATermList) t);
          t = n_45;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = i_45;
              if(match_cons(t, sym_sort_1))
                {
                  j_45 = ATgetArgument(t, 0);
                  t = j_45;
                  if(match_string(t, "<START>"))
                    {
                      ATerm w_29 = t;
                      int x_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_45(i_45, l_45, o_45, t);
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
                                t = r_45(i_45, l_45, o_45, t);
                                ;
                                LocalPopChoice(z_29);
                              }
                            else
                              {
                                t = y_29;
                                t = m_45;
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
                          t = q_45(i_45, l_45, o_45, t);
                          ;
                          LocalPopChoice(b_30);
                        }
                      else
                        {
                          t = a_30;
                          t = r_45(i_45, l_45, o_45, t);
                        }
                    }
                }
              else
                {
                  ATerm c_30 = t;
                  int d_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_45(i_45, l_45, o_45, t);
                      ;
                      LocalPopChoice(d_30);
                    }
                  else
                    {
                      t = c_30;
                      t = r_45(i_45, l_45, o_45, t);
                    }
                }
            }
          else
            {
              t = i_45;
              {
                ATerm e_30 = t;
                int f_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = q_45(i_45, l_45, o_45, t);
                    ;
                    LocalPopChoice(f_30);
                  }
                else
                  {
                    t = e_30;
                    t = r_45(i_45, l_45, o_45, t);
                  }
              }
            }
        }
      else
        {
          t = i_45;
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = q_45(i_45, l_45, o_45, t);
                ;
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
                t = r_45(i_45, l_45, o_45, t);
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_ApplToSort_0)))
        _fail(t);
      t = o_45;
    }
  return(t);
}
ATerm repeat_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm s_45 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_97(t);
        t = s_45(t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
      }
    return(t);
  }
  t = s_45(t);
  return(t);
}
ATerm layout_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  w_45 = t;
  if(match_cons(t, sym_layout_1))
    {
      u_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_45);
  t_45 = t;
  t = u_45;
  t = u_83(t);
  v_45 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, v_45), t_45);
  return(t);
}
ATerm opt_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  c_46 = t;
  if(match_cons(t, sym_opt_1))
    {
      a_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_46);
  z_45 = t;
  t = a_46;
  t = w_88(t);
  b_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, b_46), z_45);
  return(t);
}
ATerm cf_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym_cf_1))
    {
      g_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  f_46 = t;
  t = g_46;
  t = u_88(t);
  h_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, h_46), f_46);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = prod_3_0(_id, e_5, _id, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = cf_1_0(f_5, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = opt_1_0(g_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = opt_1_0(i_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm is_layout_p__0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = appl_2_0(d_5, _id, t);
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
            t = cf_1_0(h_5, t);
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
ATerm prod_3_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  s_46 = t;
  if(match_cons(t, sym_prod_3))
    {
      m_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
      o_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_46);
  l_46 = t;
  t = m_46;
  t = o_89(t);
  p_46 = t;
  t = n_46;
  t = p_89(t);
  q_46 = t;
  t = o_46;
  t = q_89(t);
  r_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, p_46, q_46, r_46), l_46);
  return(t);
}
ATerm appl_2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
  a_47 = t;
  if(match_cons(t, sym_appl_2))
    {
      w_46 = ATgetArgument(t, 0);
      x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_47);
  v_46 = t;
  t = w_46;
  t = r_89(t);
  y_46 = t;
  t = x_46;
  t = s_89(t);
  z_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, y_46, z_46), v_46);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  t = SSL_explode_string(e_47);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm d_47 = NULL;
  t = map_1_0(j_5, t);
  t = concat_0_0(t);
  d_47 = t;
  t = SSL_implode_string(d_47);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm n_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      n_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_47;
  if(match_cons(t, sym_prod_3))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
      {
        ATerm p_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_47;
  if(match_cons(t, sym_cf_1))
    {
      q_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_47;
  if(match_cons(t, sym_layout_0))
    {
      t = t_47;
      t = concat_strings_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          r_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_47;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = t_47;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_q_30;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_47 = ATgetFirst((ATermList) t);
              v_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_47;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, u_47));
        }
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm y_47 = NULL;
  ATerm c_48 (ATerm t)
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_47 = NULL;
        ATerm k_5 (ATerm t)
        {
          t = map_1_0(c_48, t);
          return(t);
        }
        t = appl_2_0(_id, k_5, t);
        if(match_cons(t, sym_appl_2))
          {
            ATerm t_30 = ATgetArgument(t, 0);
            z_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_47;
        t = concat_0_0(t);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm a_48 = NULL;
          a_48 = t;
          t = (ATerm) ATinsert(ATempty, a_48);
        }
      }
    return(t);
  }
  t = c_48(t);
  y_47 = t;
  t = SSL_implode_string(y_47);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm t_48 = NULL,v_48 = NULL,w_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,e_49 = NULL,f_49 = NULL;
  z_48 = t;
  if(match_cons(t, sym_appl_2))
    {
      a_49 = ATgetArgument(t, 0);
      {
        ATerm u_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_49;
  if(match_cons(t, sym_prod_3))
    {
      b_49 = ATgetArgument(t, 0);
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
        t = b_49;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_48 = ATgetFirst((ATermList) t);
            v_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_48;
        if(match_cons(t, sym_lex_1))
          {
            ATerm z_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_48;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_48;
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
              t = z_48;
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
                      t = z_48;
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
                        w_48 = ATgetArgument(t, 0);
                        t = w_48;
                        {
                          ATerm g_31 = t;
                          int h_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm l_31 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(h_31);
                              t = b_49;
                              {
                                ATerm o_31 = t;
                                int p_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_49 = NULL;
                                    t = z_48;
                                    t = yield_0_0(t);
                                    j_49 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, j_49);
                                    ;
                                    LocalPopChoice(p_31);
                                  }
                                else
                                  {
                                    t = o_31;
                                    {
                                      ATerm k_49 = NULL;
                                      t = z_48;
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
                                ATerm q_31 = t;
                                int c_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm d_32 = ATgetArgument(t, 0);
                                        ATerm e_32 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(c_32);
                                    t = b_49;
                                    {
                                      ATerm f_32 = t;
                                      int g_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_49 = NULL;
                                          t = z_48;
                                          t = yield_0_0(t);
                                          l_49 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, l_49);
                                          ;
                                          LocalPopChoice(g_32);
                                        }
                                      else
                                        {
                                          t = f_32;
                                          {
                                            ATerm m_49 = NULL;
                                            t = z_48;
                                            t = yield_0_0(t);
                                            m_49 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, m_49);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = q_31;
                                    {
                                      ATerm h_32 = t;
                                      int i_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm l_32 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(i_32);
                                          t = b_49;
                                          {
                                            ATerm m_32 = t;
                                            int n_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm n_49 = NULL;
                                                t = z_48;
                                                t = yield_0_0(t);
                                                n_49 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, n_49);
                                                ;
                                                LocalPopChoice(n_32);
                                              }
                                            else
                                              {
                                                t = m_32;
                                                {
                                                  ATerm o_49 = NULL;
                                                  t = z_48;
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
                                                    ATerm w_32 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(p_32);
                                                t = b_49;
                                                {
                                                  ATerm z_32 = t;
                                                  int a_33 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_49 = NULL;
                                                      t = z_48;
                                                      t = yield_0_0(t);
                                                      p_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, p_49);
                                                      ;
                                                      LocalPopChoice(a_33);
                                                    }
                                                  else
                                                    {
                                                      t = z_32;
                                                      {
                                                        ATerm q_49 = NULL;
                                                        t = z_48;
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
                                                  t = z_48;
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
                        t = z_48;
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
ATerm downup2_2_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm t)
{
  t = p_98(t);
  {
    ATerm l_5 (ATerm t)
    {
      t = downup2_2_0(p_98, q_98, t);
      return(t);
    }
    t = SRTS_all(l_5, t);
    t = q_98(t);
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = fetch_1_0(r_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = downup2_2_0(u_5, x_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_FlatLex_0)))
    _fail(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = fetch_1_0(d_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = topdown_1_0(e_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLayout_0)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = appl_2_0(f_6, g_6, t);
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = prod_3_0(h_6, _id, _id, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = filter_1_0(k_6, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = filter_1_0(j_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm q_33 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_33;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm r_33 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_33;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = fetch_1_0(ApplToSort_0_0, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = topdown_1_0(n_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = repeat_1_0(ApplToSort_0_0, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = fetch_1_0(FlatList_0_0, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = topdown_1_0(r_6, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = fetch_1_0(u_6, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = topdown_1_0(c_7, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLit_0)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(d_7, t);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm y_33 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_33;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = fetch_1_0(i_7, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = bottomup_1_0(j_7, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_FlatInj_0)))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm d_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_7 = NULL,n_7 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          m_7 = ATgetArgument(t, 0);
          {
            ATerm i_34 = ATgetArgument(t, 1);
            if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
              {
                n_7 = ATgetFirst((ATermList) i_34);
                {
                  ATerm n_34 = (ATerm) ATgetNext((ATermList) i_34);
                  if(((ATgetType(n_34) != AT_LIST) || !(ATisEmpty(n_34))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = m_7;
      t = injection_0_0(t);
      t = n_7;
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = d_34;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = fetch_1_0(FlatAlt_0_0, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = topdown_1_0(o_7, t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = fetch_1_0(q_7, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_ReplaceAppl_0)))
    _fail(t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = fetch_1_0(t_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = topdown_1_0(u_7, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveSeq_0)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm q_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      ;
      LocalPopChoice(v_34);
    }
  else
    {
      t = q_34;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = fetch_1_0(y_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm w_49 = NULL;
  if(match_cons(t, sym_parsetree_2))
    {
      w_49 = ATgetArgument(t, 0);
      {
        ATerm w_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_49;
  return(t);
}
ATerm y_7 (ATerm t)
{
  if(!(match_cons(t, sym_RemovePT_0)))
    _fail(t);
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm t_49 = NULL;
  t_49 = t;
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(n_5, q_5, t);
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
      }
    {
      ATerm z_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(b_6, c_6, t);
          ;
          LocalPopChoice(a_35);
        }
      else
        {
          t = z_34;
        }
      {
        ATerm b_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(l_6, m_6, t);
            ;
            LocalPopChoice(h_35);
          }
        else
          {
            t = b_35;
          }
        {
          ATerm i_35 = t;
          int j_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(p_6, q_6, t);
              ;
              LocalPopChoice(j_35);
            }
          else
            {
              t = i_35;
            }
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(s_6, t_6, t);
                ;
                LocalPopChoice(m_35);
              }
            else
              {
                t = l_35;
              }
            {
              ATerm o_35 = t;
              int p_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = _2_0(g_7, h_7, t);
                  ;
                  LocalPopChoice(p_35);
                }
              else
                {
                  t = o_35;
                }
              {
                ATerm r_35 = t;
                int t_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = _2_0(k_7, l_7, t);
                    ;
                    LocalPopChoice(t_35);
                  }
                else
                  {
                    t = r_35;
                  }
                {
                  ATerm u_35 = t;
                  int w_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = _2_0(p_7, replace_appl_0_0, t);
                      ;
                      LocalPopChoice(w_35);
                    }
                  else
                    {
                      t = u_35;
                    }
                  {
                    ATerm x_35 = t;
                    int z_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = _2_0(r_7, s_7, t);
                        ;
                        LocalPopChoice(z_35);
                      }
                    else
                      {
                        t = x_35;
                      }
                    {
                      ATerm a_36 = t;
                      int c_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = _2_0(w_7, x_7, t);
                          ;
                          LocalPopChoice(c_36);
                        }
                      else
                        {
                          t = a_36;
                        }
                      {
                        ATerm d_36 = t;
                        int f_36 = stack_ptr;
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
                            LocalPopChoice(f_36);
                          }
                        else
                          {
                            t = d_36;
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
ATerm WriteToFile_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  if(match_cons(t, sym__2))
    {
      y_49 = ATgetArgument(t, 0);
      z_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_49, term_g_36);
  t = open_stream_0_0(t);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, z_49);
  t = r_116(t);
  t = fclose_0_0(t);
  t = z_49;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = fetch_1_0(h_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = WriteToFile_1_0(i_8, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      if(match_cons(h_36, sym_Stream_1))
        {
          d_50 = ATgetArgument(h_36, 0);
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
ATerm j_8 (ATerm t)
{
  t = WriteToFile_1_0(k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if(match_cons(i_36, sym_Stream_1))
        {
          g_50 = ATgetArgument(i_36, 0);
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
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  b_50 = t;
  {
    ATerm z_7 (ATerm t)
    {
      ATerm j_36 = t;
      int k_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_8 (ATerm t)
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
          t = fetch_1_0(d_8, t);
          ;
          LocalPopChoice(k_36);
        }
      else
        {
          t = j_36;
          t = term_l_36;
          if(((c_50 != NULL) && (c_50 != t)))
            _fail(t);
          else
            c_50 = t;
        }
      return(t);
    }
    t = _2_0(z_7, _id, t);
    t = b_50;
    {
      ATerm e_8 (ATerm t)
      {
        ATerm v_7 = NULL;
        v_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_50), v_7);
        return(t);
      }
      t = _2_0(_id, e_8, t);
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(f_8, g_8, t);
            ;
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
            t = _2_0(_id, j_8, t);
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
ATerm apply_strategy_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  k_50 = t;
  t = dtime_0_0(t);
  t = k_50;
  t = r_123(t);
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
ATerm d_51 (ATerm x_50, ATerm t)
{
  t = SSL_fclose(x_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL;
  b_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_51 = ATgetArgument(t, 0);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_51);
            ;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            t = d_51(b_51, t);
          }
      }
    }
  else
    {
      t = d_51(b_51, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_51 = NULL;
  t = SSL_stdin_stream();
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_51 = NULL;
  t = SSL_stdout_stream();
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_51 = NULL;
  t = SSL_stderr_stream();
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_51);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm o_51 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_51;
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm s_51 = NULL;
  s_51 = t;
  t = SSL_is_string(s_51);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      ATerm r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL,n_8 = NULL;
        m_8 = t;
        t = SSL_explode_term(m_8);
        if(match_cons(t, sym__2))
          {
            ATerm u_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_36 = ATgetArgument(t, 1);
              if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
                {
                  n_8 = ATgetFirst((ATermList) v_36);
                  {
                    ATerm w_36 = (ATerm) ATgetNext((ATermList) v_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        {
          ATerm x_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
              t = _2_0(l_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_51 = ATgetArgument(t, 0);
                  m_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_51, m_51);
              n_51 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_51);
              ;
              LocalPopChoice(y_36);
            }
          else
            {
              t = x_36;
              {
                ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
                t = _2_0(p_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_51 = ATgetArgument(t, 0);
                    q_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_51, q_51);
                r_51 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_51);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_51 = NULL;
      w_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_51, term_b_37);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      {
        ATerm o_8 = NULL;
        o_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_8), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_8;
        _fail(t);
      }
    }
  t_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_51);
  u_51 = t;
  t = t_51;
  t = fclose_0_0(t);
  t = u_51;
  return(t);
}
ATerm fetch_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm b_52 (ATerm t)
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_104, _id, t);
        ;
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = Cons_2_0(_id, b_52, t);
      }
    return(t);
  }
  t = b_52(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      {
        ATerm e_52 = NULL,f_52 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_52 = ATgetFirst((ATermList) t);
            f_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_52;
        {
          ATerm q_8 (ATerm t)
          {
            t = f_52;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_8, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm l_52 (ATerm t)
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_52, t);
        ;
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_104(t);
      }
    return(t);
  }
  t = l_52(t);
  return(t);
}
ATerm _2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
  r_52 = t;
  if(match_cons(t, sym__2))
    {
      n_52 = ATgetArgument(t, 0);
      o_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_52);
  m_52 = t;
  t = n_52;
  t = t_78(t);
  p_52 = t;
  t = o_52;
  t = u_78(t);
  q_52 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_52, q_52), m_52);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  t = SSL_explode_string(w_52);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm x_52 = NULL;
  x_52 = t;
  t = SSL_explode_string(x_52);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_52 = NULL;
  t = _2_0(r_8, s_8, t);
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
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
          ATerm t_8 (ATerm t)
          {
            t = a_53;
            return(t);
          }
          t = at_end_1_0(t_8, t);
        }
        ;
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        {
          ATerm u_8 = NULL,v_8 = NULL;
          u_8 = t;
          t = SSL_explode_term(u_8);
          if(match_cons(t, sym__2))
            {
              ATerm l_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_37) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_8;
          t = concat_0_0(t);
        }
      }
    v_52 = t;
    t = SSL_implode_string(v_52);
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_53 = NULL;
      k_53 = t;
      t = SSL_is_string(k_53);
      ;
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
        ATerm q_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_8, t);
            ;
            LocalPopChoice(r_37);
          }
        else
          {
            t = q_37;
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
                        ATerm s_37 = t;
                        int w_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_53);
                            {
                              ATerm x_37 = t;
                              int y_37 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_9 = NULL;
                                  t = eval_config_0_0(t);
                                  r_9 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_53, r_9);
                                  t = r_9;
                                  ;
                                  LocalPopChoice(y_37);
                                }
                              else
                                {
                                  t = x_37;
                                }
                            }
                            ;
                            LocalPopChoice(w_37);
                          }
                        else
                          {
                            t = s_37;
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
ATerm if_verbose2_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_54 = NULL,c_54 = NULL;
      a_54 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 = NULL;
            t = eval_config_0_0(t);
            y_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_9);
            t = y_9;
            ;
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
          }
        c_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_54, term_f_38);
        t = geq_0_0(t);
        t = a_54;
        t = c_118(t);
      }
      ;
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
    }
  return(t);
}
ATerm x_8 (ATerm t)
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
ATerm y_8 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  f_54 = t;
  t = SSL_string_to_int(f_54);
  g_54 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_54);
  t = f_54;
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_g_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_8, y_8, z_8, t);
  return(t);
}
ATerm a_9 (ATerm t)
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
ATerm c_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_k_38;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL;
  j_54 = t;
  t = SSL_string_to_int(j_54);
  k_54 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_54);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_54);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_38;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_9, c_9, d_9, t);
      ;
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_9, g_9, h_9, t);
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            t = Option_3_0(i_9, j_9, k_9, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_54 = NULL;
      t = term_r_11;
      t = d_0(t);
      p_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_38, term_v_38, p_54);
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
      t = term_r_11;
      t = b_0(t);
      s_54 = t;
      t = (ATerm) ATinsert(CheckATermList(o_54), s_54);
    }
  return(t);
}
ATerm l_9 (ATerm t)
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
ATerm m_9 (ATerm t)
{
  ATerm v_54 = NULL;
  v_54 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_54);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_54);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_9, m_9, n_9, t);
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
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_38 = ATgetArgument(t, 0);
            ATerm a_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_54, z_54);
        ;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
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
      t = term_r_11;
      t = l_0(t);
      n_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_38, term_v_38, n_55);
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
ATerm o_9 (ATerm t)
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
ATerm q_9 (ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_55);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_55);
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, q_9, s_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_11;
  t = whoami_0_0(t);
  w_55 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_55));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        t = eval_config_0_0(t);
        d_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_10);
        t = d_10;
        ;
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_110(t);
      ;
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
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
        t = foldr_2_0(d_110, e_110, t);
        d_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_55, d_56);
        t = e_110(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_10, k_10);
        ;
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = SSL_addr(j_10, k_10);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_56 = NULL,f_10 = NULL,g_10 = NULL;
  t = times_0_0(t);
  f_10 = t;
  t = SSL_explode_term(f_10);
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10;
  t = foldr_2_0(t_9, u_9, t);
  g_56 = t;
  t = SSL_TicksToSeconds(g_56);
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
    ATerm k_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_56;
        if((s_56 != t))
          {
            _fail(t);
          }
        t = r_56;
        ;
        LocalPopChoice(m_39);
      }
    else
      {
        t = k_39;
        t = r_56;
        {
          ATerm n_39 = t;
          int p_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_56, t_56);
              ;
              LocalPopChoice(p_39);
            }
          else
            {
              t = n_39;
              t = SSL_gtr(s_56, t_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_56, t_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_118 (ATerm), ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_56 = NULL,y_56 = NULL;
      w_56 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_11 = NULL;
            t = eval_config_0_0(t);
            c_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_11);
            t = c_11;
            ;
            LocalPopChoice(u_39);
          }
        else
          {
            t = s_39;
          }
        y_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_56, term_h_22);
        t = geq_0_0(t);
        t = w_56;
        t = b_118(t);
      }
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  t = run_time_0_0(t);
  a_57 = t;
  t = term_r_11;
  t = whoami_0_0(t);
  b_57 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_57), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_57));
  t = (ATerm) ATmakeAppl(sym__2, term_v_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_39), a_57), term_w_39), b_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      {
        ATerm a_40 = t;
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm f_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 = NULL;
            t = eval_config_0_0(t);
            h_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), h_11);
            t = h_11;
            ;
            LocalPopChoice(g_40);
          }
        else
          {
            t = f_40;
          }
      }
      ;
      LocalPopChoice(d_40);
    }
  else
    {
      t = c_40;
      t = fetch_1_0(w_9, t);
    }
  t = p_124(t);
  return(t);
}
ATerm map_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm c_57 (ATerm t)
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = Cons_2_0(b_104, c_57, t);
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
          ATerm x_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_57), k_57);
            return(t);
          }
          t = reverse_acc_2_0(g_0, x_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_11;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_88 (ATerm), ATerm t)
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
  t = s_88(t);
  n_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_57), l_57);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm s_57 = NULL,z_11 = NULL;
  s_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_57), term_j_40);
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_57), term_j_40));
      }
    z_11 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_11);
    t = (ATerm) ATinsert(ATinsert(ATempty, s_57), term_j_40);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_57 = NULL,v_11 = NULL;
  ATerm m_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_11 = NULL;
            t = eval_config_0_0(t);
            l_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_11);
            t = l_11;
            ;
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
          }
        r_57 = t;
      }
      ;
      LocalPopChoice(n_40);
    }
  else
    {
      t = m_40;
      {
        ATerm z_9 (ATerm t)
        {
          ATerm a_10 (ATerm t)
          {
            if(((r_57 != NULL) && (r_57 != t)))
              _fail(t);
            else
              r_57 = t;
            return(t);
          }
          t = Program_1_0(a_10, t);
          return(t);
        }
        t = fetch_1_0(z_9, t);
      }
    }
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_11 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_40), not_null(r_57)), term_s_40);
        {
          ATerm u_40 = t;
          int v_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              ;
              LocalPopChoice(v_40);
            }
          else
            {
              t = u_40;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_40), not_null(r_57)), term_s_40));
            }
          q_11 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_11);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_40), not_null(r_57)), term_s_40);
        }
        ;
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
      }
    t = term_w_40;
    {
      ATerm x_40 = t;
      int y_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(y_40);
        }
      else
        {
          t = x_40;
          t = (ATerm) ATinsert(ATempty, term_w_40);
        }
      v_11 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_11);
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
      t = reverse_acc_2_0(_id, b_10, t);
      t = map_1_0(e_10, t);
      {
        ATerm a_41 = t;
        int c_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_12 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_41), term_g_41), term_e_41), term_d_41);
            {
              ATerm i_41 = t;
              int j_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_list_0_0(t);
                  ;
                  LocalPopChoice(j_41);
                }
              else
                {
                  t = i_41;
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_41), term_g_41), term_e_41), term_d_41));
                }
              e_12 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), e_12);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_41), term_g_41), term_e_41), term_d_41);
            }
            ;
            LocalPopChoice(c_41);
          }
        else
          {
            t = a_41;
          }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm t_88 (ATerm), ATerm t)
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
  t = t_88(t);
  v_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_57), t_57);
  return(t);
}
ATerm lit_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  c_58 = t;
  if(match_cons(t, sym_lit_1))
    {
      a_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_58);
  z_57 = t;
  t = a_58;
  t = y_88(t);
  b_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, b_58), z_57);
  return(t);
}
ATerm list_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm f_58 (ATerm t)
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        t = Cons_2_0(f_104, f_58, t);
      }
    return(t);
  }
  t = f_58(t);
  return(t);
}
ATerm seq_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  j_58 = t;
  if(match_cons(t, sym_seq_1))
    {
      h_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_58);
  g_58 = t;
  t = h_58;
  t = x_88(t);
  i_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, i_58), g_58);
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL;
  r_58 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      n_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_58);
  m_58 = t;
  t = n_58;
  t = b_89(t);
  p_58 = t;
  t = o_58;
  t = c_89(t);
  q_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, p_58, q_58), m_58);
  return(t);
}
ATerm iter_star_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL;
  x_58 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      v_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_58);
  u_58 = t;
  t = v_58;
  t = e_89(t);
  w_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, w_58), u_58);
  return(t);
}
ATerm iter_sep_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  g_59 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      b_59 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_59);
  a_59 = t;
  t = b_59;
  t = z_88(t);
  e_59 = t;
  t = c_59;
  t = a_89(t);
  f_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, e_59, f_59), a_59);
  return(t);
}
ATerm iter_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  m_59 = t;
  if(match_cons(t, sym_iter_1))
    {
      k_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_59);
  j_59 = t;
  t = k_59;
  t = d_89(t);
  l_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, l_59), j_59);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_59 = NULL;
      q_59 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_59;
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
          t = q_59;
        }
      ;
      LocalPopChoice(r_41);
    }
  else
    {
      t = q_41;
      {
        ATerm t_59 (ATerm t)
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
                            ATerm d_42 = t;
                            int f_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = iter_star_sep_2_0(_id, _id, t);
                                ;
                                LocalPopChoice(f_42);
                              }
                            else
                              {
                                t = d_42;
                                {
                                  ATerm h_10 (ATerm t)
                                  {
                                    ATerm i_10 (ATerm t)
                                    {
                                      ATerm h_42 = t;
                                      int i_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1_0(_id, t);
                                          ;
                                          LocalPopChoice(i_42);
                                        }
                                      else
                                        {
                                          t = h_42;
                                          {
                                            ATerm k_42 = t;
                                            int l_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(!(match_cons(t, sym_layout_0)))
                                                  _fail(t);
                                                ;
                                                LocalPopChoice(l_42);
                                              }
                                            else
                                              {
                                                t = k_42;
                                                t = t_59(t);
                                              }
                                          }
                                        }
                                      return(t);
                                    }
                                    t = list_1_0(i_10, t);
                                    return(t);
                                  }
                                  t = seq_1_0(h_10, t);
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
        t = t_59(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_12 = NULL;
        t = eval_config_0_0(t);
        i_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_12);
        t = i_12;
        ;
        LocalPopChoice(n_42);
      }
    else
      {
        t = m_42;
      }
    l_12 = t;
    {
      ATerm o_42 = t;
      int r_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(r_42);
        }
      else
        {
          t = o_42;
          t = (ATerm) ATinsert(ATempty, l_12);
        }
      m_12 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_12);
      t = l_12;
    }
  }
  return(t);
}
ATerm l_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_42;
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_y_42;
  return(t);
}
ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_42;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_a_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_10, m_10, n_10, t);
      ;
      LocalPopChoice(c_43);
    }
  else
    {
      t = b_43;
      t = Option_3_0(o_10, p_10, q_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL;
  b_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_59 = ATgetFirst((ATermList) t);
      y_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_60);
  w_59 = t;
  t = x_59;
  t = i_83(t);
  z_59 = t;
  t = y_59;
  t = j_83(t);
  a_60 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_60), z_59), w_59);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm g_60 = NULL;
  g_60 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_60);
  t = (ATerm) ATmakeAppl(sym_Program_1, g_60);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_120 (ATerm), ATerm t)
{
  ATerm f_60 = NULL;
  f_60 = t;
  {
    ATerm f_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_43;
        t = x_120(t);
        ;
        LocalPopChoice(h_43);
      }
    else
      {
        t = f_43;
      }
    t = f_60;
    {
      ATerm s_10 (ATerm t)
      {
        ATerm l_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_43 = t;
            int p_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_43);
              }
            else
              {
                t = o_43;
                t = x_120(t);
                t = Cons_2_0(_id, s_10, t);
              }
            ;
            LocalPopChoice(m_43);
          }
        else
          {
            t = l_43;
            {
              ATerm i_60 = NULL,j_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_60 = ATgetFirst((ATermList) t);
                  j_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_60), (ATerm) ATmakeAppl(sym_Undefined_1, i_60));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_10, s_10, t);
    }
  }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm t_60 = NULL;
  t_60 = t;
  if(match_string(t, "--help"))
    {
      t = t_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_60;
        }
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_43;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm y_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_120 (ATerm), ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
  q_60 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = q_60;
  {
    ATerm t_10 (ATerm t)
    {
      ATerm v_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_120(t);
          ;
          LocalPopChoice(x_43);
        }
      else
        {
          t = v_43;
          {
            ATerm y_43 = t;
            int z_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_10, w_10, x_10, t);
                ;
                LocalPopChoice(z_43);
              }
            else
              {
                t = y_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_10, t);
    {
      ATerm a_44 = t;
      int f_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_60 = NULL;
          y_60 = t;
          {
            ATerm g_44 = t;
            int h_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_60;
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
                            ATerm b_13 = NULL;
                            t = eval_config_0_0(t);
                            b_13 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), b_13);
                            t = b_13;
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
                      t = fetch_1_0(y_10, t);
                    }
                  t = y_60;
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
                      ATerm i_13 = NULL;
                      t = eval_config_0_0(t);
                      i_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), i_13);
                      t = i_13;
                      ;
                      LocalPopChoice(n_44);
                    }
                  else
                    {
                      t = m_44;
                    }
                  t = y_60;
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
          t = a_44;
          {
            ATerm o_44 = t;
            int p_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_11 (ATerm t)
                {
                  ATerm d_11 (ATerm t)
                  {
                    if(((r_60 != NULL) && (r_60 != t)))
                      _fail(t);
                    else
                      r_60 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_11, t);
                  return(t);
                }
                t = fetch_1_0(b_11, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_60)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_v_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_60)), term_q_44));
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
      s_60 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = s_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm t)
{
  ATerm b_61 = NULL;
  t = parse_options_1_0(r_124, t);
  b_61 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), b_61);
  t = b_61;
  t = t_124(t);
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_124, t);
        ;
        LocalPopChoice(v_44);
      }
    else
      {
        t = u_44;
        {
          ATerm c_45 = t;
          int d_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_124(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_45);
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
ATerm g_11 (ATerm t)
{
  t = if_verbose2_1_0(o_11, t);
  return(t);
}
ATerm j_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_h_45;
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_k_45;
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL;
  c_61 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_13 = NULL;
        t = eval_config_0_0(t);
        m_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_13);
        t = m_13;
        ;
        LocalPopChoice(x_45);
      }
    else
      {
        t = p_45;
      }
    d_61 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_61));
    t = c_61;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm t)
{
  ATerm f_11 (ATerm t)
  {
    ATerm y_45 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_124(t);
        ;
        LocalPopChoice(d_46);
      }
    else
      {
        t = y_45;
        {
          ATerm e_46 = t;
          int j_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(j_46);
            }
          else
            {
              t = e_46;
              {
                ATerm k_46 = t;
                int t_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_46);
                  }
                else
                  {
                    t = k_46;
                    {
                      ATerm u_46 = t;
                      int b_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_11, k_11, m_11, t);
                          ;
                          LocalPopChoice(b_47);
                        }
                      else
                        {
                          t = u_46;
                          {
                            ATerm c_47 = t;
                            int f_47 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_47);
                              }
                            else
                              {
                                t = c_47;
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
  ATerm i_11 (ATerm t)
  {
    ATerm e_61 = NULL,h_61 = NULL,p_13 = NULL;
    e_61 = t;
    {
      ATerm g_47 = t;
      int h_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_61 != NULL) && (h_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_11, t);
          ;
          LocalPopChoice(h_47);
        }
      else
        {
          t = g_47;
          t = term_i_47;
          h_61 = t;
        }
      t = not_null(h_61);
      t = ReadFromFile_0_0(t);
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_61, p_13);
      t = apply_strategy_1_0(a_124, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_11, c_124, g_11, i_11, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(implode_0_0, implode_options_0_0, default_usage_0_0, t);
  return(t);
}

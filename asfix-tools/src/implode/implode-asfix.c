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
ATerm term_d_46;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_u_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_v_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_l_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_y_40;
ATerm term_v_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_m_37;
ATerm term_f_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_i_36;
ATerm term_v_35;
ATerm term_n_35;
ATerm term_n_31;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_l_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_c_23;
ATerm term_m_22;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_p_20;
ATerm term_y_18;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_g_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
void init_constant_terms (void)
{
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_t_37, term_z_37);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_37);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym__2, term_e_38, term_w_13);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym__2, term_w_38, term_x_38);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym__2, term_w_42, term_w_13);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_z_42, term_w_13);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym__2, term_j_40, term_w_13);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_w_13);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm implode_options_0_0 (ATerm);
ATerm amb_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm s_1 (ATerm g_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm is_conc_0_0 (ATerm);
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm s_7 (ATerm z_95 (ATerm), ATerm m_38, ATerm l_38, ATerm);
ATerm is_ins_0_0 (ATerm);
ATerm is_nil_0_0 (ATerm);
ATerm ReplCons_1_0 (ATerm g_96 (ATerm), ATerm);
ATerm OptList_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm is_layout_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm implodeAsfix_0_0 (ATerm);
ATerm Tuple_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm CTC2_0_0 (ATerm);
ATerm Conc_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm CTC1_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm conc_to_cons_0_0 (ATerm);
ATerm Constr1_0_0 (ATerm);
ATerm w_7 (ATerm x_37, ATerm w_37, ATerm);
ATerm ConstrNil_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm replace_appl_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm t_6 (ATerm);
ATerm FlatAlt_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm cons_1_0 (ATerm n_89 (ATerm), ATerm);
ATerm lex_1_0 (ATerm w_88 (ATerm), ATerm);
ATerm alt_2_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm);
ATerm injective_alt_0_0 (ATerm);
ATerm varsym_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm u_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm injection_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm filter_1_0 (ATerm i_111 (ATerm), ATerm);
ATerm f_42 (ATerm o_35, ATerm);
ATerm g_42 (ATerm k_38, ATerm);
ATerm FlatList_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm at_last_1_0 (ATerm d_105 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm PpSym_0_0 (ATerm);
ATerm sort_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm p_49 (ATerm m_48, ATerm n_48, ATerm o_48, ATerm);
ATerm q_49 (ATerm v_48, ATerm w_48, ATerm x_48, ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm repeat_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm layout_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm opt_1_0 (ATerm x_88 (ATerm), ATerm);
ATerm cf_1_0 (ATerm v_88 (ATerm), ATerm);
ATerm v_8 (ATerm);
ATerm y_8 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm is_layout_p__0_0 (ATerm);
ATerm prod_3_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm);
ATerm appl_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm);
ATerm flat_layout_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_104 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm yield_0_0 (ATerm);
ATerm implode_lexical_0_0 (ATerm);
ATerm downup2_2_0 (ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm implode_0_0 (ATerm);
ATerm h_8 (ATerm b_61, ATerm c_61, ATerm);
ATerm i_8 (ATerm p_64, ATerm q_64, ATerm);
ATerm k_8 (ATerm t_116 (ATerm), ATerm a_506, ATerm t_64, ATerm);
ATerm j_8 (ATerm l_64, ATerm m_64, ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm q_55 (ATerm k_55, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_8 (ATerm r_64, ATerm);
ATerm m_8 (ATerm d_61, ATerm e_61, ATerm);
ATerm _2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_11 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm g_8 (ATerm r_55, ATerm s_55, ATerm);
ATerm debug_1_0 (ATerm r_116 (ATerm), ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_118 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_8 (ATerm s_65, ATerm t_65, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm k_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_8 (ATerm a_68, ATerm b_68, ATerm z_67, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_8 (ATerm b_58, ATerm c_58, ATerm);
ATerm foldr_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_118 (ATerm), ATerm);
ATerm q_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_12 (ATerm);
ATerm need_help_1_0 (ATerm r_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm p_8 (ATerm r_69, ATerm s_69, ATerm);
ATerm Program_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_88 (ATerm), ATerm);
ATerm lit_1_0 (ATerm z_88 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_104 (ATerm), ATerm);
ATerm seq_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm iter_star_sep_2_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm f_89 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm);
ATerm iter_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm f_13 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_120 (ATerm), ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm parse_options_1_0 (ATerm y_120 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm);
ATerm p_13 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm iowrap_3_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL;
  b_0 = t;
  t = term_w_13;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_x_13;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_13), f_0), term_y_13);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_a_14;
  p_0 = t;
  t = SSL_exit(p_0);
  t = b_0;
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm s_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_h_14;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_i_14;
  return(t);
}
ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_o_14;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_q_14;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, n_3, o_3, t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = x_14;
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(p_3, q_3, r_3, t);
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm c_15 = t;
              int d_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(s_3, t_3, d_4, t);
                  ;
                  LocalPopChoice(d_15);
                }
              else
                {
                  t = c_15;
                  {
                    ATerm e_15 = t;
                    int f_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(e_4, f_4, g_4, t);
                        ;
                        LocalPopChoice(f_15);
                      }
                    else
                      {
                        t = e_15;
                        {
                          ATerm g_15 = t;
                          int i_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(h_4, i_4, k_4, t);
                              ;
                              LocalPopChoice(i_15);
                            }
                          else
                            {
                              t = g_15;
                              {
                                ATerm j_15 = t;
                                int k_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(l_4, m_4, o_4, t);
                                    ;
                                    LocalPopChoice(k_15);
                                  }
                                else
                                  {
                                    t = j_15;
                                    {
                                      ATerm l_15 = t;
                                      int m_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(p_4, q_4, r_4, t);
                                          ;
                                          LocalPopChoice(m_15);
                                        }
                                      else
                                        {
                                          t = l_15;
                                          {
                                            ATerm n_15 = t;
                                            int p_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(t_4, v_4, w_4, t);
                                                ;
                                                LocalPopChoice(p_15);
                                              }
                                            else
                                              {
                                                t = n_15;
                                                {
                                                  ATerm q_15 = t;
                                                  int r_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(x_4, z_4, a_5, t);
                                                      ;
                                                      LocalPopChoice(r_15);
                                                    }
                                                  else
                                                    {
                                                      t = q_15;
                                                      t = Option_3_0(b_5, d_5, e_5, t);
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
ATerm amb_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL,e_0 = NULL,i_0 = NULL;
  t_0 = t;
  if(match_cons(t, sym_amb_1))
    {
      r_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_0);
  q_0 = t;
  t = r_0;
  t = u_89(t);
  s_0 = t;
  i_0 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, s_0);
  e_0 = t;
  t = SSLsetAnnotations(e_0, q_0);
  return(t);
}
ATerm s_1 (ATerm g_1, ATerm t)
{
  ATerm i_1 = NULL;
  t = SSL_explode_term(g_1);
  if(match_cons(t, sym__2))
    {
      ATerm s_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,n_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym__2))
    {
      j_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              t = l_1;
              return(t);
            }
            t = j_1;
            t = at_end_1_0(f_5, t);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            t = s_1(n_1, t);
          }
      }
    }
  else
    {
      t = s_1(n_1, t);
    }
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,q_2 = NULL,s_2 = NULL,u_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL;
  n_2 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
      {
        ATerm v_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_15 = ATgetFirst((ATermList) t);
      q_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_15 = ATgetFirst((ATermList) t);
      s_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_2;
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_16 = ATgetFirst((ATermList) t);
            u_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_15);
        t = u_2;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_2;
            {
              ATerm b_16 = t;
              int c_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm d_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_16);
                  t = n_2;
                }
              else
                {
                  t = b_16;
                  if(match_cons(t, sym_cf_1))
                    {
                      b_3 = ATgetArgument(t, 0);
                      t = b_3;
                      {
                        ATerm f_16 = t;
                        int g_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm h_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(g_16);
                            t = n_2;
                          }
                        else
                          {
                            t = f_16;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm i_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = n_2;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm j_16 = ATgetArgument(t, 0);
                          ATerm k_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_2;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_16 = ATgetFirst((ATermList) t);
                w_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_2;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_16 = ATgetFirst((ATermList) t);
                y_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_2;
            if(match_cons(t, sym_cf_1))
              {
                b_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_3;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm n_16 = ATgetArgument(t, 0);
                ATerm o_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_2;
          }
      }
    else
      {
        t = y_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm p_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_2;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  w_3 = t;
  if(match_cons(t, sym_appl_2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_3 = ATgetFirst((ATermList) t);
      a_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_4 = ATgetFirst((ATermList) t);
      c_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_3 = ATgetFirst((ATermList) t);
      v_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_4 = NULL,s_4 = NULL,y_4 = NULL;
        t = v_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_3;
        t = is_conc_0_0(t);
        t = z_3;
        t = m_0(t);
        j_4 = t;
        t = b_4;
        t = m_0(t);
        s_4 = t;
        t = u_3;
        t = m_0(t);
        y_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(CheckATermList(y_4), s_4));
        t = conc_0_0(t);
      }
    }
  else
    {
      ATerm a_1 = NULL,b_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_3;
      t = is_conc_0_0(t);
      t = z_3;
      t = m_0(t);
      a_1 = t;
      t = b_4;
      t = m_0(t);
      b_1 = t;
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_1;
            {
              ATerm s_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  ;
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = s_16;
                  t = Cons_2_0(_id, _id, t);
                }
              t = (ATerm) ATmakeAppl(sym__2, a_1, b_1);
              t = conc_0_0(t);
            }
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = (ATerm) ATmakeAppl(sym_Conc_2, a_1, b_1);
          }
      }
    }
  return(t);
}
ATerm s_7 (ATerm z_95 (ATerm), ATerm m_38, ATerm l_38, ATerm t)
{
  ATerm i_9 = NULL,t_9 = NULL,a_10 = NULL,b_10 = NULL;
  t = m_38;
  if(match_cons(t, sym_prod_3))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      ATerm v_16 = ATgetArgument(t, 1);
      a_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_10;
  {
    ATerm g_5 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((b_10 != NULL) && (b_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(g_5, t);
    t = not_null(b_10);
    {
      ATerm w_16 = t;
      int x_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_string(t, "sorts"))
            {
              t = term_y_16;
            }
          else
            {
              if(match_string(t, "imports"))
                {
                  t = term_z_16;
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
                          t = term_g_17;
                        }
                      else
                        {
                          if(match_string(t, "exports"))
                            {
                              t = term_m_17;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("module", 0, ATtrue)))
                                _fail(t);
                              t = term_o_17;
                            }
                        }
                    }
                }
            }
          ;
          LocalPopChoice(x_16);
        }
      else
        {
          t = w_16;
        }
      i_9 = t;
      t = l_38;
      t = map_1_0(z_95, t);
      t_9 = t;
      t = SSL_mkterm(i_9, t_9);
    }
  }
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm w_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  w_5 = t;
  if(match_cons(t, sym_prod_3))
    {
      y_5 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      {
        ATerm p_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = y_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_5 = ATgetFirst((ATermList) t);
      b_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_6;
  if(match_cons(t, sym_iter_1))
    {
      d_6 = ATgetArgument(t, 0);
      t = d_6;
      if((z_5 != t))
        {
          _fail(t);
        }
      t = w_5;
    }
  else
    {
      ATerm q_17 = t;
      int r_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              d_6 = ATgetArgument(t, 0);
              {
                ATerm s_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(r_17);
          t = d_6;
          if((z_5 != t))
            {
              _fail(t);
            }
          t = w_5;
        }
      else
        {
          t = q_17;
          if(match_cons(t, sym_cf_1))
            {
              d_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_5;
          if(match_cons(t, sym_cf_1))
            {
              a_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_6;
          if(match_cons(t, sym_iter_1))
            {
              e_6 = ATgetArgument(t, 0);
              t = e_6;
              if((a_6 != t))
                {
                  _fail(t);
                }
              t = w_5;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  e_6 = ATgetArgument(t, 0);
                  {
                    ATerm t_17 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = e_6;
              if((a_6 != t))
                {
                  _fail(t);
                }
              t = w_5;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,e_7 = NULL,f_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym_prod_3))
    {
      b_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
      {
        ATerm u_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = b_7;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_7;
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm y_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_17);
        t = a_7;
      }
    else
      {
        t = v_17;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm g_18 = ATgetArgument(t, 0);
                  ATerm h_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(e_18);
              t = a_7;
            }
          else
            {
              t = d_18;
              if(match_cons(t, sym_cf_1))
                {
                  f_7 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = f_7;
              {
                ATerm i_18 = t;
                int j_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm k_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_18);
                    t = a_7;
                  }
                else
                  {
                    t = i_18;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm l_18 = ATgetArgument(t, 0);
                        ATerm m_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_7;
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
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_14 = NULL,r_14 = NULL,y_14 = NULL,h_15 = NULL,o_15 = NULL;
      j_14 = t;
      if(match_cons(t, sym_appl_2))
        {
          r_14 = ATgetArgument(t, 0);
          y_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_14;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm p_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_14;
              t = s_7(g_96, r_14, y_14, t);
              ;
              LocalPopChoice(q_18);
            }
          else
            {
              t = p_18;
              {
                ATerm r_18 = t;
                int s_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_14;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    ;
                    LocalPopChoice(s_18);
                  }
                else
                  {
                    t = r_18;
                    {
                      ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL;
                      t = r_14;
                      if(match_cons(t, sym_prod_3))
                        {
                          u_1 = ATgetArgument(t, 0);
                          v_1 = ATgetArgument(t, 1);
                          {
                            ATerm t_18 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = u_1;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = v_1;
                      {
                        ATerm u_18 = t;
                        int v_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm w_18 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(v_18);
                            t = r_14;
                          }
                        else
                          {
                            t = u_18;
                            if(match_cons(t, sym_cf_1))
                              {
                                w_1 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = w_1;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm x_18 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_14;
                          }
                        t = term_y_18;
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
              h_15 = ATgetFirst((ATermList) t);
              o_15 = (ATerm) ATgetNext((ATermList) t);
              t = o_15;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm z_18 = t;
                  int c_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_14;
                      t = s_7(g_96, r_14, y_14, t);
                      ;
                      LocalPopChoice(c_19);
                    }
                  else
                    {
                      t = z_18;
                      {
                        ATerm d_19 = t;
                        int f_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_16 = NULL;
                            t = r_14;
                            t = is_ins_0_0(t);
                            t = h_15;
                            t = g_96(t);
                            e_16 = t;
                            t = (ATerm) ATinsert(ATempty, e_16);
                            ;
                            LocalPopChoice(f_19);
                          }
                        else
                          {
                            t = d_19;
                            {
                              ATerm g_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,a_3 = NULL,f_3 = NULL,g_3 = NULL;
                              t = r_14;
                              if(match_cons(t, sym_prod_3))
                                {
                                  i_2 = ATgetArgument(t, 0);
                                  a_3 = ATgetArgument(t, 1);
                                  {
                                    ATerm g_19 = ATgetArgument(t, 2);
                                  }
                                }
                              else
                                _fail(t);
                              t = i_2;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  j_2 = ATgetFirst((ATermList) t);
                                  l_2 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = l_2;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = a_3;
                              if(match_cons(t, sym_opt_1))
                                {
                                  f_3 = ATgetArgument(t, 0);
                                  t = f_3;
                                  if((j_2 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = r_14;
                                }
                              else
                                {
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      f_3 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_2;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      k_2 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_3;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      g_3 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_3;
                                  if((k_2 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = r_14;
                                }
                              t = h_15;
                              t = g_96(t);
                              g_2 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, g_2);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = j_14;
                  t = s_7(g_96, r_14, y_14, t);
                }
            }
          else
            {
              t = j_14;
              t = s_7(g_96, r_14, y_14, t);
            }
        }
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      t = ReplConsConc_1_0(g_96, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,n_17 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      h_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_17;
  if(match_cons(t, sym_prod_3))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      {
        ATerm i_19 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_17 = ATgetFirst((ATermList) t);
      d_17 = (ATerm) ATgetNext((ATermList) t);
      t = d_17;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_17;
      if(match_cons(t, sym_opt_1))
        {
          k_17 = ATgetArgument(t, 0);
          t = n_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_17 = ATgetFirst((ATermList) t);
              f_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_17;
          if((b_17 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = e_17;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              k_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_17;
          if(match_cons(t, sym_cf_1))
            {
              c_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_17;
          if(match_cons(t, sym_opt_1))
            {
              l_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_17 = ATgetFirst((ATermList) t);
              f_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_17;
          if((c_17 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = e_17;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_17;
      if(match_cons(t, sym_opt_1))
        {
          k_17 = ATgetArgument(t, 0);
          t = n_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_17;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              k_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_17;
          if(match_cons(t, sym_opt_1))
            {
              l_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_17;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = prod_3_0(_id, j_5, _id, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = cf_1_0(k_5, t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = lit_1_0(_id, t);
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = opt_1_0(l_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = opt_1_0(n_5, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm is_layout_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = appl_2_0(h_5, _id, t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = l_19;
      t = cf_1_0(m_5, t);
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = filter_1_0(p_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm o_19 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_19;
    }
  return(t);
}
ATerm implodeAsfix_0_0 (ATerm t)
{
  ATerm x_17 = NULL;
  if(match_cons(t, sym_parsetree_2))
    {
      x_17 = ATgetArgument(t, 0);
      {
        ATerm p_19 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_17;
  {
    ATerm f_18 (ATerm t)
    {
      ATerm q_19 = t;
      int r_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0_0(t);
          ;
          LocalPopChoice(r_19);
        }
      else
        {
          t = q_19;
          {
            ATerm s_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = appl_2_0(_id, o_5, t);
                {
                  ATerm u_19 = t;
                  int v_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0_0(t);
                      t = f_18(t);
                      ;
                      LocalPopChoice(v_19);
                    }
                  else
                    {
                      t = u_19;
                      {
                        ATerm y_19 = t;
                        int a_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = ReplCons_1_0(f_18, t);
                            ;
                            LocalPopChoice(a_20);
                          }
                        else
                          {
                            t = y_19;
                            {
                              ATerm d_20 = t;
                              int e_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
                                  if(match_cons(t, sym_appl_2))
                                    {
                                      z_17 = ATgetArgument(t, 0);
                                      a_18 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = a_18;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      b_18 = ATgetFirst((ATermList) t);
                                      c_18 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = c_18;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = z_17;
                                  t = injection_0_0(t);
                                  t = b_18;
                                  t = f_18(t);
                                  ;
                                  LocalPopChoice(e_20);
                                }
                              else
                                {
                                  t = d_20;
                                  {
                                    ATerm g_20 = t;
                                    int h_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0_0(t);
                                        t = f_18(t);
                                        ;
                                        LocalPopChoice(h_20);
                                      }
                                    else
                                      {
                                        t = g_20;
                                        t = FlatAlt_0_0(t);
                                        t = f_18(t);
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                ;
                LocalPopChoice(t_19);
              }
            else
              {
                t = s_19;
                {
                  ATerm i_20 = t;
                  int j_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_5 (ATerm t)
                      {
                        t = map_1_0(f_18, t);
                        return(t);
                      }
                      t = amb_1_0(q_5, t);
                      ;
                      LocalPopChoice(j_20);
                    }
                  else
                    {
                      t = i_20;
                      t = SRTS_all(f_18, t);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = f_18(t);
  }
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,e_19 = NULL,h_19 = NULL,m_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_appl_2))
    {
      b_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_19;
  if(match_cons(t, sym_prod_3))
    {
      ATerm k_20 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
      {
        ATerm l_20 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_19;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm o_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_20);
        {
          ATerm n_4 = NULL;
          t = term_p_20;
          n_4 = t;
          t = SSL_mkterm(n_4, m_19);
        }
      }
    else
      {
        t = m_20;
        {
          ATerm u_4 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              h_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_19;
          if(match_cons(t, sym_seq_1))
            {
              ATerm q_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_p_20;
          u_4 = t;
          t = SSL_mkterm(u_4, m_19);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  t = l_98(t);
  {
    ATerm r_5 (ATerm t)
    {
      t = topdown_1_0(l_98, t);
      return(t);
    }
    t = SRTS_all(r_5, t);
  }
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,z_19 = NULL,b_20 = NULL,c_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
      t = b_20;
      if(match_cons(t, sym_Ins_1))
        {
          z_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_19 = ATgetFirst((ATermList) t);
          w_19 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_19), x_19), z_19);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              x_19 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, x_19), z_19);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, z_19);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          b_20 = ATgetArgument(t, 0);
          c_20 = ATgetArgument(t, 1);
          f_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_20), (ATerm) ATinsert(ATempty, c_20)), b_20);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm Conc_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,u_0 = NULL,v_0 = NULL;
  y_20 = t;
  if(match_cons(t, sym_Conc_2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_20);
  t_20 = t;
  t = u_20;
  t = m_83(t);
  w_20 = t;
  t = v_20;
  t = n_83(t);
  x_20 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Conc_2, w_20, x_20);
  u_0 = t;
  t = SSLsetAnnotations(u_0, t_20);
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      n_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
      t = q_21;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_21;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              ATerm r_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_21;
                  ;
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  t = q_21;
                }
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  o_21 = ATgetArgument(t, 0);
                  p_21 = ATgetArgument(t, 1);
                  {
                    ATerm z_20 = t;
                    int a_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_21;
                        ;
                        LocalPopChoice(a_21);
                      }
                    else
                      {
                        t = z_20;
                        t = (ATerm) ATmakeAppl(sym_Conc_2, o_21, (ATerm) ATmakeAppl(sym_Conc_2, p_21, q_21));
                      }
                  }
                }
              else
                {
                  t = n_21;
                }
            }
        }
      else
        {
          t = n_21;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = q_21;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  o_21 = ATgetArgument(t, 0);
                  p_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, o_21, (ATerm) ATmakeAppl(sym_Conc_2, p_21, q_21));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          n_21 = ATgetArgument(t, 0);
          q_21 = ATgetArgument(t, 1);
          l_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_21;
      if(match_cons(t, sym_Conc_3))
        {
          o_21 = ATgetArgument(t, 0);
          p_21 = ATgetArgument(t, 1);
          k_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, o_21, p_21, (ATerm) ATmakeAppl(sym_Conc_3, k_21, q_21, l_21));
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL,p_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_22 = ATgetFirst((ATermList) t);
          p_22 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, o_22), p_22);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              o_22 = ATgetArgument(t, 0);
              p_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, o_22, (ATerm) ATmakeAppl(sym_Ins_1, p_22));
        }
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = Conc_2_0(t_5, _id, t);
          }
      }
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm x_22 = NULL,z_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_22 = ATgetFirst((ATermList) t);
      z_22 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, x_22), z_22);
    }
  else
    {
      if(match_cons(t, sym_Snoc_2))
        {
          x_22 = ATgetArgument(t, 0);
          z_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_2, x_22, (ATerm) ATmakeAppl(sym_Ins_1, z_22));
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_1_0(s_5, t);
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2_0(_id, conc_to_cons_0_0, t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
    {
      ATerm h_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC2_0_0(t);
              t = Cons_2_0(conc_to_cons_0_0, _id, t);
              ;
              LocalPopChoice(m_21);
            }
          else
            {
              t = j_21;
              {
                ATerm f_23 = NULL;
                if(match_cons(t, sym_Ins_1))
                  {
                    f_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, f_23);
              }
            }
          ;
          LocalPopChoice(i_21);
        }
      else
        {
          t = h_21;
        }
    }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm o_24 = NULL,q_24 = NULL,s_24 = NULL,w_24 = NULL,d_25 = NULL,f_25 = NULL,k_25 = NULL,l_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      d_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
      {
        ATerm r_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_25 = ATgetFirst((ATermList) t);
      l_25 = (ATerm) ATgetNext((ATermList) t);
      t = l_25;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = o_25;
          if(match_cons(t, sym_opt_1))
            {
              p_25 = ATgetArgument(t, 0);
              t = p_25;
              if((f_25 != t))
                {
                  _fail(t);
                }
              t = term_s_21;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  p_25 = ATgetArgument(t, 0);
                  t = f_25;
                  if(match_cons(t, sym_cf_1))
                    {
                      k_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_25;
                  if(match_cons(t, sym_opt_1))
                    {
                      q_25 = ATgetArgument(t, 0);
                      t = q_25;
                      if((k_25 != t))
                        {
                          _fail(t);
                        }
                      t = term_s_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          q_25 = ATgetArgument(t, 0);
                          t = q_25;
                          if((k_25 != t))
                            {
                              _fail(t);
                            }
                          t = term_t_21;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              q_25 = ATgetArgument(t, 0);
                              {
                                ATerm u_21 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = q_25;
                          if((k_25 != t))
                            {
                              _fail(t);
                            }
                          t = term_t_21;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      p_25 = ATgetArgument(t, 0);
                      t = p_25;
                      if((f_25 != t))
                        {
                          _fail(t);
                        }
                      t = term_t_21;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          p_25 = ATgetArgument(t, 0);
                          {
                            ATerm v_21 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = p_25;
                      if((f_25 != t))
                        {
                          _fail(t);
                        }
                      t = term_t_21;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_21 = ATgetFirst((ATermList) t);
              o_24 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_24;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = o_25;
              if(match_cons(t, sym_iter_1))
                {
                  ATerm x_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_y_21;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_21 = ATgetFirst((ATermList) t);
                  q_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_24;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_25;
                  {
                    ATerm a_22 = t;
                    int b_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm c_22 = ATgetArgument(t, 0);
                            ATerm d_22 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_22);
                        t = term_y_21;
                      }
                    else
                      {
                        t = a_22;
                        if(match_cons(t, sym_cf_1))
                          {
                            p_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = p_25;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm e_22 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = term_y_21;
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm f_22 = ATgetFirst((ATermList) t);
                      s_24 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = s_24;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm g_22 = ATgetFirst((ATermList) t);
                      w_24 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = w_24;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_25;
                  if(match_cons(t, sym_cf_1))
                    {
                      p_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_25;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm h_22 = ATgetArgument(t, 0);
                      ATerm i_22 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_y_21;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_25;
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm l_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(k_22);
            t = term_m_22;
          }
        else
          {
            t = j_22;
            if(match_cons(t, sym_cf_1))
              {
                p_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_25;
            if(match_cons(t, sym_opt_1))
              {
                ATerm n_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_m_22;
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm x_37, ATerm w_37, ATerm t)
{
  ATerm j_26 = NULL;
  t = x_37;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,w_26 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm s_22 = ATgetArgument(t, 0);
            ATerm t_22 = ATgetArgument(t, 1);
            u_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_26;
        {
          ATerm u_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(u_5, t);
          t = not_null(w_26);
        }
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = Constr1_0_0(t);
      }
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_string(t, "sorts"))
            {
              t = term_y_16;
            }
          else
            {
              if(match_string(t, "imports"))
                {
                  t = term_z_16;
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
                          t = term_g_17;
                        }
                      else
                        {
                          if(match_string(t, "exports"))
                            {
                              t = term_m_17;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("module", 0, ATtrue)))
                                _fail(t);
                              t = term_o_17;
                            }
                        }
                    }
                }
            }
          ;
          LocalPopChoice(v_22);
        }
      else
        {
          t = u_22;
        }
      j_26 = t;
      t = SSL_mkterm(j_26, w_37);
    }
  }
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,m_27 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
      {
        ATerm w_22 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_27;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_27;
  {
    ATerm y_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm b_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_23);
        t = term_c_23;
      }
    else
      {
        t = y_22;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm g_23 = ATgetArgument(t, 0);
                  ATerm h_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(e_23);
              t = term_c_23;
            }
          else
            {
              t = d_23;
              if(match_cons(t, sym_cf_1))
                {
                  m_27 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_27;
              {
                ATerm i_23 = t;
                int j_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm k_23 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_23);
                    t = term_c_23;
                  }
                else
                  {
                    t = i_23;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm l_23 = ATgetArgument(t, 0);
                        ATerm m_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_c_23;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
      t = appl_2_0(_id, _id, t);
      v_27 = t;
      if(match_cons(t, sym_appl_2))
        {
          w_27 = ATgetArgument(t, 0);
          x_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_27;
            t = ConstrNil_0_0(t);
            t = (ATerm) ATempty;
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            t = v_27;
            t = w_7(w_27, x_27, t);
          }
      }
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(v_5, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_28 = NULL,k_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_5 (ATerm t)
          {
            ATerm i_6 (ATerm t)
            {
              ATerm k_6 (ATerm t)
              {
                ATerm v_23 = t;
                int w_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_6 (ATerm t)
                    {
                      if(((j_28 != NULL) && (j_28 != t)))
                        _fail(t);
                      else
                        j_28 = t;
                      return(t);
                    }
                    t = cf_1_0(m_6, t);
                    ;
                    LocalPopChoice(w_23);
                  }
                else
                  {
                    t = v_23;
                    {
                      ATerm r_28 = NULL;
                      r_28 = t;
                      if(((j_28 != NULL) && (j_28 != t)))
                        _fail(t);
                      else
                        j_28 = t;
                      t = r_28;
                    }
                  }
                return(t);
              }
              t = Cons_2_0(k_6, l_6, t);
              return(t);
            }
            ATerm j_6 (ATerm t)
            {
              ATerm n_6 (ATerm t)
              {
                if(match_cons(t, sym_alt_2))
                  {
                    if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      k_28 = ATgetArgument(t, 0);
                    if(((n_28 != NULL) && (n_28 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      n_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = cf_1_0(n_6, t);
              return(t);
            }
            t = prod_3_0(i_6, j_6, _id, t);
            return(t);
          }
          ATerm h_6 (ATerm t)
          {
            if(((o_28 != NULL) && (o_28 != t)))
              _fail(t);
            else
              o_28 = t;
            return(t);
          }
          t = appl_2_0(x_5, h_6, t);
          ;
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          {
            ATerm o_6 (ATerm t)
            {
              ATerm q_6 (ATerm t)
              {
                ATerm s_6 (ATerm t)
                {
                  if(((j_28 != NULL) && (j_28 != t)))
                    _fail(t);
                  else
                    j_28 = t;
                  return(t);
                }
                t = Cons_2_0(s_6, t_6, t);
                return(t);
              }
              ATerm r_6 (ATerm t)
              {
                ATerm u_6 (ATerm t)
                {
                  if(match_cons(t, sym_alt_2))
                    {
                      if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_28 = ATgetArgument(t, 0);
                      if(((n_28 != NULL) && (n_28 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        n_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = lex_1_0(u_6, t);
                return(t);
              }
              t = prod_3_0(q_6, r_6, _id, t);
              return(t);
            }
            ATerm p_6 (ATerm t)
            {
              if(((o_28 != NULL) && (o_28 != t)))
                _fail(t);
              else
                o_28 = t;
              return(t);
            }
            t = appl_2_0(o_6, p_6, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_28), not_null(n_28)), term_a_14);
      {
        ATerm k_29 (ATerm t)
        {
          ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
          if(match_cons(t, sym__2))
            {
              t_28 = ATgetArgument(t, 0);
              w_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_28;
          if(match_cons(t, sym_alt_2))
            {
              u_28 = ATgetArgument(t, 0);
              v_28 = ATgetArgument(t, 1);
              {
                ATerm x_23 = t;
                int y_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_28;
                    if(((j_28 != NULL) && (j_28 != t)))
                      _fail(t);
                    else
                      j_28 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, w_28, not_null(o_28));
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
                          t = u_28;
                          if(((j_28 != NULL) && (j_28 != t)))
                            _fail(t);
                          else
                            j_28 = t;
                          t = v_28;
                          if(((p_28 != NULL) && (p_28 != t)))
                            _fail(t);
                          else
                            p_28 = t;
                          t = (ATerm) ATmakeAppl(sym_alt_2, w_28, not_null(o_28));
                          ;
                          LocalPopChoice(a_24);
                        }
                      else
                        {
                          t = z_23;
                          {
                            ATerm f_29 = NULL,g_29 = NULL;
                            t = term_a_14;
                            g_29 = t;
                            t = (ATerm) ATmakeAppl(sym__2, w_28, term_a_14);
                            t = n_8(w_28, g_29, t);
                            f_29 = t;
                            t = (ATerm) ATmakeAppl(sym__2, v_28, f_29);
                            t = k_29(t);
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = t_28;
              if(((j_28 != NULL) && (j_28 != t)))
                _fail(t);
              else
                j_28 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, w_28, not_null(o_28));
            }
          return(t);
        }
        t = k_29(t);
      }
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm j_29 = NULL;
        j_29 = t;
        if(!(match_cons(t, sym_FlatAlt_0)))
          _fail(t);
        t = j_29;
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm m_29 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_99(t);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = SRTS_one(m_29, t);
      }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm cons_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,w_29 = NULL,w_0 = NULL,x_0 = NULL;
  w_29 = t;
  if(match_cons(t, sym_cons_1))
    {
      o_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_29);
  n_29 = t;
  t = o_29;
  t = n_89(t);
  p_29 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, p_29);
  w_0 = t;
  t = SSLsetAnnotations(w_0, n_29);
  return(t);
}
ATerm lex_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL,y_0 = NULL,z_0 = NULL;
  d_30 = t;
  if(match_cons(t, sym_lex_1))
    {
      a_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_30);
  z_29 = t;
  t = a_30;
  t = w_88(t);
  c_30 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, c_30);
  y_0 = t;
  t = SSLsetAnnotations(y_0, z_29);
  return(t);
}
ATerm alt_2_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,c_1 = NULL,d_1 = NULL;
  o_30 = t;
  if(match_cons(t, sym_alt_2))
    {
      k_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_30);
  h_30 = t;
  t = k_30;
  t = g_89(t);
  m_30 = t;
  t = l_30;
  t = h_89(t);
  n_30 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_alt_2, m_30, n_30);
  c_1 = t;
  t = SSLsetAnnotations(c_1, h_30);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
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
            t = cf_1_0(injective_alt_0_0, t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = alt_2_0(injective_alt_0_0, injective_alt_0_0, t);
          }
      }
    }
  return(t);
}
ATerm varsym_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,x_30 = NULL,e_1 = NULL,f_1 = NULL;
  x_30 = t;
  if(match_cons(t, sym_varsym_1))
    {
      u_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  t_30 = t;
  t = u_30;
  t = k_89(t);
  v_30 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, v_30);
  e_1 = t;
  t = SSLsetAnnotations(e_1, t_30);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = Cons_2_0(y_6, z_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm h_24 = t;
  if((PushChoice() == 0))
    {
      t = oncetd_1_0(c_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_24;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = varsym_1_0(_id, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = cons_1_0(_id, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = Cons_2_0(h_7, i_7, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm i_24 = t;
  if((PushChoice() == 0))
    {
      t = oncetd_1_0(k_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_24;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = cf_1_0(j_7, t);
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = sort_1_0(_id, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = cons_1_0(_id, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = Cons_2_0(q_7, r_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm l_24 = t;
  if((PushChoice() == 0))
    {
      t = oncetd_1_0(y_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_24;
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm m_24 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_24;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = lit_1_0(_id, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = lit_1_0(_id, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = cons_1_0(_id, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = oncetd_1_0(a_8, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm n_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL;
      d_33 = t;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bracket", 0, ATtrue)))
        _fail(t);
      t = d_33;
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = n_24;
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prod_3_0(v_6, _id, w_6, t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = r_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prod_3_0(d_7, injective_alt_0_0, g_7, t);
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_7 (ATerm t)
                  {
                    ATerm z_24 = t;
                    int a_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1_0(_id, t);
                        ;
                        LocalPopChoice(a_25);
                      }
                    else
                      {
                        t = z_24;
                        {
                          ATerm b_25 = t;
                          int c_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1_0(m_7, t);
                              ;
                              LocalPopChoice(c_25);
                            }
                          else
                            {
                              t = b_25;
                              {
                                ATerm e_25 = t;
                                int g_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1_0(m_7, t);
                                    ;
                                    LocalPopChoice(g_25);
                                  }
                                else
                                  {
                                    t = e_25;
                                    {
                                      ATerm h_25 = t;
                                      int i_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = iter_1_0(m_7, t);
                                          ;
                                          LocalPopChoice(i_25);
                                        }
                                      else
                                        {
                                          t = h_25;
                                          {
                                            ATerm j_25 = t;
                                            int m_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1_0(m_7, t);
                                                ;
                                                LocalPopChoice(m_25);
                                              }
                                            else
                                              {
                                                t = j_25;
                                                {
                                                  ATerm n_25 = t;
                                                  int r_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = iter_sep_2_0(m_7, u_7, t);
                                                      ;
                                                      LocalPopChoice(r_25);
                                                    }
                                                  else
                                                    {
                                                      t = n_25;
                                                      t = iter_star_sep_2_0(m_7, x_7, t);
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
                  t = prod_3_0(l_7, m_7, n_7, t);
                  ;
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  {
                    ATerm s_25 = t;
                    int t_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
                        m_32 = t;
                        if(match_cons(t, sym_prod_3))
                          {
                            n_32 = ATgetArgument(t, 0);
                            s_32 = ATgetArgument(t, 1);
                            v_32 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = n_32;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            o_32 = ATgetFirst((ATermList) t);
                            r_32 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = o_32;
                        if(match_cons(t, sym_cf_1))
                          {
                            p_32 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = p_32;
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            q_32 = ATgetArgument(t, 0);
                            k_32 = ATgetArgument(t, 1);
                            t = r_32;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = s_32;
                            if(match_cons(t, sym_cf_1))
                              {
                                t_32 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_32;
                            if(match_cons(t, sym_iter_star_sep_2))
                              {
                                u_32 = ATgetArgument(t, 0);
                                l_32 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = v_32;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = u_32;
                            if((q_32 != t))
                              {
                                _fail(t);
                              }
                            t = l_32;
                            if((k_32 != t))
                              {
                                _fail(t);
                              }
                            t = m_32;
                          }
                        else
                          {
                            if(match_cons(t, sym_iter_1))
                              {
                                q_32 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_32;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = s_32;
                            if(match_cons(t, sym_cf_1))
                              {
                                t_32 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_32;
                            if(match_cons(t, sym_iter_star_1))
                              {
                                u_32 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_32;
                            if(!(match_cons(t, sym_no_attrs_0)))
                              _fail(t);
                            t = u_32;
                            if((q_32 != t))
                              {
                                _fail(t);
                              }
                            t = m_32;
                          }
                        ;
                        LocalPopChoice(t_25);
                      }
                    else
                      {
                        t = s_25;
                        {
                          ATerm u_25 = t;
                          int v_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prod_3_0(_id, _id, z_7, t);
                              ;
                              LocalPopChoice(v_25);
                            }
                          else
                            {
                              t = u_25;
                              {
                                ATerm e_33 = NULL,i_33 = NULL,j_33 = NULL,m_33 = NULL;
                                e_33 = t;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    ATerm w_25 = ATgetArgument(t, 0);
                                    i_33 = ATgetArgument(t, 1);
                                    m_33 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = i_33;
                                if(match_cons(t, sym_sort_1))
                                  {
                                    j_33 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = j_33;
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("<START>", 0, ATtrue)))
                                  _fail(t);
                                t = m_33;
                                if(!(match_cons(t, sym_no_attrs_0)))
                                  _fail(t);
                                t = e_33;
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
ATerm bottomup_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    t = bottomup_1_0(m_98, t);
    return(t);
  }
  t = SRTS_all(b_8, t);
  t = m_98(t);
  return(t);
}
ATerm filter_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_8 (ATerm t)
            {
              t = filter_1_0(i_111, t);
              return(t);
            }
            t = Cons_2_0(i_111, c_8, t);
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            {
              ATerm s_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_26 = ATgetFirst((ATermList) t);
                  s_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_33;
              t = filter_1_0(i_111, t);
            }
          }
      }
    }
  return(t);
}
ATerm f_42 (ATerm o_35, ATerm t)
{
  ATerm h_42 (ATerm t)
  {
    ATerm p_35 = NULL,q_35 = NULL,s_35 = NULL,t_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,a_37 = NULL;
    p_35 = t;
    if(match_cons(t, sym_appl_2))
      {
        q_35 = ATgetArgument(t, 0);
        x_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_35;
    if(match_cons(t, sym_prod_3))
      {
        ATerm c_26 = ATgetArgument(t, 0);
        s_35 = ATgetArgument(t, 1);
        {
          ATerm d_26 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = s_35;
    if(match_cons(t, sym_cf_1))
      {
        t_35 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = t_35;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm e_26 = ATgetArgument(t, 0);
        ATerm f_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_35;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_35 = ATgetFirst((ATermList) t);
        z_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = z_35;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, y_35);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_36 = ATgetFirst((ATermList) t);
            b_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_36;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_36 = ATgetFirst((ATermList) t);
            d_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_36;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm r_37 = NULL,s_37 = NULL;
            t = y_35;
            t = h_42(t);
            r_37 = t;
            t = c_36;
            t = h_42(t);
            s_37 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_37), (ATerm) ATinsert(ATempty, a_36)), r_37);
            t = concat_0_0(t);
          }
        else
          {
            ATerm i_38 = NULL,j_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_36 = ATgetFirst((ATermList) t);
                f_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_36;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_36 = ATgetFirst((ATermList) t);
                a_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_37;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_35;
            t = h_42(t);
            i_38 = t;
            t = g_36;
            t = h_42(t);
            j_38 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_38), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_36), c_36), a_36)), i_38);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = o_35;
  t = h_42(t);
  return(t);
}
ATerm g_42 (ATerm k_38, ATerm t)
{
  ATerm i_42 (ATerm t)
  {
    ATerm o_38 = NULL,p_38 = NULL,r_38 = NULL,s_38 = NULL,v_38 = NULL,b_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
    o_38 = t;
    if(match_cons(t, sym_appl_2))
      {
        p_38 = ATgetArgument(t, 0);
        v_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_38;
    if(match_cons(t, sym_prod_3))
      {
        ATerm g_26 = ATgetArgument(t, 0);
        r_38 = ATgetArgument(t, 1);
        {
          ATerm h_26 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = r_38;
    if(match_cons(t, sym_cf_1))
      {
        s_38 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = s_38;
    if(match_cons(t, sym_iter_1))
      {
        ATerm i_26 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = v_38;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_39 = ATgetFirst((ATermList) t);
        k_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = k_39;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, b_39);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_39 = ATgetFirst((ATermList) t);
            m_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_39;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm d_40 = NULL,e_40 = NULL;
            t = b_39;
            t = i_42(t);
            d_40 = t;
            t = l_39;
            t = i_42(t);
            e_40 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, e_40), d_40);
            t = concat_0_0(t);
          }
        else
          {
            ATerm f_41 = NULL,k_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_39 = ATgetFirst((ATermList) t);
                o_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_39;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_39;
            t = i_42(t);
            f_41 = t;
            t = n_39;
            t = i_42(t);
            k_41 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_41), (ATerm) ATinsert(ATempty, l_39)), f_41);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = k_38;
  t = i_42(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  a_42 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
      t = n_41;
      if(match_cons(t, sym_prod_3))
        {
          o_41 = ATgetArgument(t, 0);
          t_41 = ATgetArgument(t, 1);
          {
            ATerm k_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_41;
      if(match_cons(t, sym_cf_1))
        {
          u_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_41;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm n_26 = ATgetArgument(t, 0);
                ATerm o_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(m_26);
            t = x_41;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_41 = ATgetFirst((ATermList) t);
                z_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_41;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = o_41;
                {
                  ATerm p_26 = t;
                  int q_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_42(a_42, t);
                      ;
                      LocalPopChoice(q_26);
                    }
                  else
                    {
                      t = p_26;
                      t = (ATerm) ATinsert(ATempty, y_41);
                    }
                }
              }
            else
              {
                t = o_41;
                t = f_42(a_42, t);
              }
          }
        else
          {
            t = l_26;
            {
              ATerm r_26 = t;
              int s_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      ATerm t_26 = ATgetArgument(t, 0);
                      ATerm v_26 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_26);
                  t = o_41;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = x_41;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          p_41 = ATgetFirst((ATermList) t);
                          s_41 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = p_41;
                      if(match_cons(t, sym_cf_1))
                        {
                          q_41 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = q_41;
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm x_26 = ATgetArgument(t, 0);
                          ATerm y_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_41;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = x_41;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          y_41 = ATgetFirst((ATermList) t);
                          z_41 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = z_41;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = y_41;
                      t = FlatList_0_0(t);
                    }
                }
              else
                {
                  t = r_26;
                  {
                    ATerm z_26 = t;
                    int a_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm b_27 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(a_27);
                        t = x_41;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            y_41 = ATgetFirst((ATermList) t);
                            z_41 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = z_41;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = o_41;
                            {
                              ATerm c_27 = t;
                              int d_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = g_42(a_42, t);
                                  ;
                                  LocalPopChoice(d_27);
                                }
                              else
                                {
                                  t = c_27;
                                  t = (ATerm) ATinsert(ATempty, y_41);
                                }
                            }
                          }
                        else
                          {
                            t = o_41;
                            t = g_42(a_42, t);
                          }
                      }
                    else
                      {
                        t = z_26;
                        if(match_cons(t, sym_iter_star_1))
                          {
                            ATerm e_27 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = o_41;
                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                          {
                            t = x_41;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                p_41 = ATgetFirst((ATermList) t);
                                s_41 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = p_41;
                            if(match_cons(t, sym_cf_1))
                              {
                                q_41 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = q_41;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm f_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_41;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = x_41;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                y_41 = ATgetFirst((ATermList) t);
                                z_41 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = z_41;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = y_41;
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
      t = a_42;
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_42 = ATgetFirst((ATermList) t);
      t_42 = (ATerm) ATgetNext((ATermList) t);
      t = t_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_42 = ATgetFirst((ATermList) t);
          r_42 = (ATerm) ATgetNext((ATermList) t);
          t = q_42;
          if(match_int(t, 34))
            {
              t = s_42;
              if(match_int(t, 92))
                {
                  ATerm g_27 = t;
                  int h_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_43 = NULL;
                      t = r_42;
                      t = De_Escape_0_0(t);
                      b_43 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_43), term_k_27);
                      ;
                      LocalPopChoice(h_27);
                    }
                  else
                    {
                      t = g_27;
                      {
                        ATerm e_43 = NULL;
                        t = t_42;
                        t = De_Escape_0_0(t);
                        e_43 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_43), s_42);
                      }
                    }
                }
              else
                {
                  ATerm h_43 = NULL;
                  t = t_42;
                  t = De_Escape_0_0(t);
                  h_43 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_43), s_42);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = s_42;
                  if(match_int(t, 92))
                    {
                      ATerm l_27 = t;
                      int n_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_43 = NULL;
                          t = r_42;
                          t = De_Escape_0_0(t);
                          j_43 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_43), term_o_27);
                          ;
                          LocalPopChoice(n_27);
                        }
                      else
                        {
                          t = l_27;
                          {
                            ATerm m_43 = NULL;
                            t = t_42;
                            t = De_Escape_0_0(t);
                            m_43 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_43), s_42);
                          }
                        }
                    }
                  else
                    {
                      ATerm r_43 = NULL;
                      t = t_42;
                      t = De_Escape_0_0(t);
                      r_43 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_43), s_42);
                    }
                }
              else
                {
                  ATerm u_43 = NULL;
                  t = t_42;
                  t = De_Escape_0_0(t);
                  u_43 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_43), s_42);
                }
            }
        }
      else
        {
          ATerm x_43 = NULL;
          t = t_42;
          t = De_Escape_0_0(t);
          x_43 = t;
          t = (ATerm) ATinsert(CheckATermList(x_43), s_42);
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
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  f_44 = t;
  t = SSL_explode_string(f_44);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_44 = ATgetFirst((ATermList) t);
      k_44 = (ATerm) ATgetNext((ATermList) t);
      t = k_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_44 = ATgetFirst((ATermList) t);
          i_44 = (ATerm) ATgetNext((ATermList) t);
          t = h_44;
          if(match_int(t, 34))
            {
              t = j_44;
              if(match_int(t, 92))
                {
                  ATerm p_27 = t;
                  int q_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_44 = NULL;
                      t = i_44;
                      t = De_Escape_0_0(t);
                      n_44 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_44), term_k_27);
                      ;
                      LocalPopChoice(q_27);
                    }
                  else
                    {
                      t = p_27;
                      {
                        ATerm q_44 = NULL;
                        t = k_44;
                        t = De_Escape_0_0(t);
                        q_44 = t;
                        t = (ATerm) ATinsert(CheckATermList(q_44), j_44);
                      }
                    }
                }
              else
                {
                  ATerm t_44 = NULL;
                  t = k_44;
                  t = De_Escape_0_0(t);
                  t_44 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_44), j_44);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = j_44;
                  if(match_int(t, 92))
                    {
                      ATerm r_27 = t;
                      int s_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_44 = NULL;
                          t = i_44;
                          t = De_Escape_0_0(t);
                          v_44 = t;
                          t = (ATerm) ATinsert(CheckATermList(v_44), term_o_27);
                          ;
                          LocalPopChoice(s_27);
                        }
                      else
                        {
                          t = r_27;
                          {
                            ATerm y_44 = NULL;
                            t = k_44;
                            t = De_Escape_0_0(t);
                            y_44 = t;
                            t = (ATerm) ATinsert(CheckATermList(y_44), j_44);
                          }
                        }
                    }
                  else
                    {
                      ATerm b_45 = NULL;
                      t = k_44;
                      t = De_Escape_0_0(t);
                      b_45 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_45), j_44);
                    }
                }
              else
                {
                  ATerm e_45 = NULL;
                  t = k_44;
                  t = De_Escape_0_0(t);
                  e_45 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_45), j_44);
                }
            }
        }
      else
        {
          ATerm h_45 = NULL;
          t = k_44;
          t = De_Escape_0_0(t);
          h_45 = t;
          t = (ATerm) ATinsert(CheckATermList(h_45), j_44);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  g_44 = t;
  t = SSL_implode_string(g_44);
  return(t);
}
ATerm d_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm i_45 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_8, t);
        t = d_105(t);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = Cons_2_0(_id, i_45, t);
      }
    return(t);
  }
  t = i_45(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_27) != AT_INT) || (ATgetInt((ATermInt) y_27) != 34)))
        _fail(t);
      {
        ATerm z_27 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(z_27) != AT_LIST) || !(ATisEmpty(z_27))))
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
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  k_45 = t;
  t = SSL_explode_string(k_45);
  j_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_45 = ATgetFirst((ATermList) t);
      {
        ATerm a_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_45;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = j_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_28 = ATgetFirst((ATermList) t);
      m_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_45;
  t = at_last_1_0(e_8, t);
  n_45 = t;
  t = SSL_implode_string(n_45);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_28);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_28);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_28);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  c_46 = t;
  if(match_cons(t, sym_cf_1))
    {
      a_46 = ATgetArgument(t, 0);
      {
        ATerm e_46 = NULL;
        t = a_46;
        t = PpSym_0_0(t);
        e_46 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_28)), e_46), (ATerm) ATinsert(ATempty, term_f_28));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          a_46 = ATgetArgument(t, 0);
          {
            ATerm g_46 = NULL;
            t = a_46;
            t = PpSym_0_0(t);
            g_46 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_28)), g_46), (ATerm) ATinsert(ATempty, term_f_28));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_i_28);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  a_46 = ATgetArgument(t, 0);
                  b_46 = ATgetArgument(t, 1);
                  {
                    ATerm j_46 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(b_46), a_46);
                    t = map_1_0(PpSym_0_0, t);
                    j_46 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_28)), j_46), (ATerm) ATinsert(ATempty, term_l_28));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      a_46 = ATgetArgument(t, 0);
                      t = a_46;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(f_8, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          a_46 = ATgetArgument(t, 0);
                          t = a_46;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(o_8, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              a_46 = ATgetArgument(t, 0);
                              t = a_46;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(r_8, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  a_46 = ATgetArgument(t, 0);
                                  b_46 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_46 = NULL,q_46 = NULL;
                                    t = a_46;
                                    t = PpSym_0_0(t);
                                    p_46 = t;
                                    t = b_46;
                                    t = PpSym_0_0(t);
                                    q_46 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_28)), q_46), p_46), (ATerm) ATinsert(ATempty, term_q_28));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      a_46 = ATgetArgument(t, 0);
                                      b_46 = ATgetArgument(t, 1);
                                      {
                                        ATerm t_46 = NULL,u_46 = NULL;
                                        t = a_46;
                                        t = PpSym_0_0(t);
                                        t_46 = t;
                                        t = b_46;
                                        t = PpSym_0_0(t);
                                        u_46 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_28)), u_46), t_46), (ATerm) ATinsert(ATempty, term_q_28));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm y_28 = t;
                                      int z_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              a_46 = ATgetArgument(t, 0);
                                              {
                                                ATerm a_29 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(z_28);
                                          {
                                            ATerm w_46 = NULL;
                                            t = a_46;
                                            t = PpSym_0_0(t);
                                            w_46 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_29)), w_46);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = y_28;
                                          {
                                            ATerm c_29 = t;
                                            int d_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    a_46 = ATgetArgument(t, 0);
                                                    b_46 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(d_29);
                                                {
                                                  ATerm a_47 = NULL,b_47 = NULL;
                                                  t = a_46;
                                                  t = PpSym_0_0(t);
                                                  a_47 = t;
                                                  t = b_46;
                                                  t = PpSym_0_0(t);
                                                  b_47 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_29)), b_47), a_47);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = c_29;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    a_46 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm d_47 = NULL;
                                                      t = a_46;
                                                      t = PpSym_0_0(t);
                                                      d_47 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, d_47), (ATerm) ATinsert(ATempty, term_h_29));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        a_46 = ATgetArgument(t, 0);
                                                        b_46 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_47 = NULL,h_47 = NULL;
                                                          t = a_46;
                                                          t = PpSym_0_0(t);
                                                          g_47 = t;
                                                          t = b_46;
                                                          t = PpSym_0_0(t);
                                                          h_47 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_47), (ATerm) ATinsert(ATempty, term_i_29)), g_47);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            a_46 = ATgetArgument(t, 0);
                                                            b_46 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm k_47 = NULL,l_47 = NULL;
                                                              t = a_46;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              k_47 = t;
                                                              t = b_46;
                                                              t = PpSym_0_0(t);
                                                              l_47 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_47), (ATerm) ATinsert(ATempty, term_l_29)), k_47);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                a_46 = ATgetArgument(t, 0);
                                                                b_46 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm o_47 = NULL,p_47 = NULL;
                                                                  t = a_46;
                                                                  t = PpSym_0_0(t);
                                                                  o_47 = t;
                                                                  t = b_46;
                                                                  t = PpSym_0_0(t);
                                                                  p_47 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_47), (ATerm) ATinsert(ATempty, term_q_29)), o_47);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    a_46 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm r_47 = NULL;
                                                                      t = a_46;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      r_47 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(r_47), term_r_29);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        a_46 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, a_46);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            a_46 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm c_5 = NULL;
                                                                              t = a_46;
                                                                              {
                                                                                ATerm s_29 = t;
                                                                                int t_29 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(t_29);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_29;
                                                                                  }
                                                                                c_5 = t;
                                                                                t = (ATerm) ATinsert(ATempty, c_5);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm u_29 = t;
                                                                            int v_29 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    a_46 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm x_29 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(v_29);
                                                                                {
                                                                                  ATerm i_5 = NULL;
                                                                                  t = a_46;
                                                                                  {
                                                                                    ATerm y_29 = t;
                                                                                    int b_30 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(b_30);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_29;
                                                                                      }
                                                                                    i_5 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, i_5);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_29;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_e_30);
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
ATerm sort_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,h_1 = NULL,k_1 = NULL;
  z_47 = t;
  if(match_cons(t, sym_sort_1))
    {
      x_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_47);
  w_47 = t;
  t = x_47;
  t = j_89(t);
  y_47 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, y_47);
  h_1 = t;
  t = SSLsetAnnotations(h_1, w_47);
  return(t);
}
ATerm p_49 (ATerm m_48, ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  t = m_48;
  if(match_cons(t, sym_cf_1))
    {
      r_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_48;
  {
    ATerm f_30 = t;
    if((PushChoice() == 0))
      {
        t = sort_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_30;
      }
    t = PpSym_0_0(t);
    s_48 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_30)), s_48), (ATerm) ATinsert(ATempty, term_g_30));
    t = concat_0_0(t);
    u_48 = t;
    t = SSL_concat_strings(u_48);
    t_48 = t;
    t = SSL_mkterm(t_48, n_48);
  }
  return(t);
}
ATerm q_49 (ATerm v_48, ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,e_49 = NULL;
  t = v_48;
  if(match_cons(t, sym_cf_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_49;
  t = sort_1_0(_id, t);
  t = PpSym_0_0(t);
  e_49 = t;
  t = SSL_concat_strings(e_49);
  b_49 = t;
  t = SSL_mkterm(b_49, w_48);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm f_49 = NULL,h_49 = NULL,i_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  n_49 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
      t = f_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm i_30 = ATgetArgument(t, 0);
          h_49 = ATgetArgument(t, 1);
          {
            ATerm j_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_49 = ATgetFirst((ATermList) t);
          m_49 = (ATerm) ATgetNext((ATermList) t);
          t = m_49;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = h_49;
              if(match_cons(t, sym_sort_1))
                {
                  i_49 = ATgetArgument(t, 0);
                  t = i_49;
                  if(match_string(t, "<START>"))
                    {
                      ATerm p_30 = t;
                      int q_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_49(h_49, k_49, n_49, t);
                          ;
                          LocalPopChoice(q_30);
                        }
                      else
                        {
                          t = p_30;
                          {
                            ATerm r_30 = t;
                            int s_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = q_49(h_49, k_49, n_49, t);
                                ;
                                LocalPopChoice(s_30);
                              }
                            else
                              {
                                t = r_30;
                                t = l_49;
                              }
                          }
                        }
                    }
                  else
                    {
                      ATerm w_30 = t;
                      int y_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_49(h_49, k_49, n_49, t);
                          ;
                          LocalPopChoice(y_30);
                        }
                      else
                        {
                          t = w_30;
                          t = q_49(h_49, k_49, n_49, t);
                        }
                    }
                }
              else
                {
                  ATerm z_30 = t;
                  int a_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_49(h_49, k_49, n_49, t);
                      ;
                      LocalPopChoice(a_31);
                    }
                  else
                    {
                      t = z_30;
                      t = q_49(h_49, k_49, n_49, t);
                    }
                }
            }
          else
            {
              t = h_49;
              {
                ATerm b_31 = t;
                int c_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_49(h_49, k_49, n_49, t);
                    ;
                    LocalPopChoice(c_31);
                  }
                else
                  {
                    t = b_31;
                    t = q_49(h_49, k_49, n_49, t);
                  }
              }
            }
        }
      else
        {
          t = h_49;
          {
            ATerm d_31 = t;
            int e_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_49(h_49, k_49, n_49, t);
                ;
                LocalPopChoice(e_31);
              }
            else
              {
                t = d_31;
                t = q_49(h_49, k_49, n_49, t);
              }
          }
        }
    }
  else
    {
      if(!(match_cons(t, sym_ApplToSort_0)))
        _fail(t);
      t = n_49;
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm r_49 (ATerm t)
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_97(t);
        t = r_49(t);
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
      }
    return(t);
  }
  t = r_49(t);
  return(t);
}
ATerm layout_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,m_1 = NULL,o_1 = NULL;
  v_49 = t;
  if(match_cons(t, sym_layout_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_49);
  s_49 = t;
  t = t_49;
  t = v_83(t);
  u_49 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, u_49);
  m_1 = t;
  t = SSLsetAnnotations(m_1, s_49);
  return(t);
}
ATerm opt_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,p_1 = NULL,q_1 = NULL;
  b_50 = t;
  if(match_cons(t, sym_opt_1))
    {
      z_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_50);
  y_49 = t;
  t = z_49;
  t = x_88(t);
  a_50 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_opt_1, a_50);
  p_1 = t;
  t = SSLsetAnnotations(p_1, y_49);
  return(t);
}
ATerm cf_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,r_1 = NULL,t_1 = NULL;
  h_50 = t;
  if(match_cons(t, sym_cf_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_50);
  e_50 = t;
  t = f_50;
  t = v_88(t);
  g_50 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, g_50);
  r_1 = t;
  t = SSLsetAnnotations(r_1, e_50);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = prod_3_0(_id, y_8, _id, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = cf_1_0(b_9, t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = opt_1_0(c_9, t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = opt_1_0(k_9, t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm is_layout_p__0_0 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = appl_2_0(v_8, _id, t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cf_1_0(j_9, t);
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            t = layout_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm prod_3_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,x_1 = NULL,y_1 = NULL;
  r_50 = t;
  if(match_cons(t, sym_prod_3))
    {
      l_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
      n_50 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_50);
  k_50 = t;
  t = l_50;
  t = p_89(t);
  o_50 = t;
  t = m_50;
  t = q_89(t);
  p_50 = t;
  t = n_50;
  t = r_89(t);
  q_50 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, o_50, p_50, q_50);
  x_1 = t;
  t = SSLsetAnnotations(x_1, k_50);
  return(t);
}
ATerm appl_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,z_1 = NULL,a_2 = NULL;
  z_50 = t;
  if(match_cons(t, sym_appl_2))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_50);
  u_50 = t;
  t = v_50;
  t = s_89(t);
  x_50 = t;
  t = w_50;
  t = t_89(t);
  y_50 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, x_50, y_50);
  z_1 = t;
  t = SSLsetAnnotations(z_1, u_50);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  n_51 = t;
  if(match_cons(t, sym_appl_2))
    {
      o_51 = ATgetArgument(t, 0);
      u_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_51;
  if(match_cons(t, sym_prod_3))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      q_51 = ATgetArgument(t, 1);
      {
        ATerm m_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_51;
  if(match_cons(t, sym_cf_1))
    {
      r_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_51;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(u_51);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          s_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_51;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = u_51;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_n_31;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_51 = ATgetFirst((ATermList) t);
              w_51 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_51;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, v_51));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm z_51 (ATerm t)
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_51, t);
        ;
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_104(t);
      }
    return(t);
  }
  t = z_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm c_52 = NULL,d_52 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_52 = ATgetFirst((ATermList) t);
            d_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_52;
        {
          ATerm m_9 (ATerm t)
          {
            t = d_52;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_9, t);
        }
      }
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm h_52 = NULL;
  ATerm m_52 (ATerm t)
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_52 = NULL;
        ATerm n_9 (ATerm t)
        {
          t = map_1_0(m_52, t);
          return(t);
        }
        t = appl_2_0(_id, n_9, t);
        if(match_cons(t, sym_appl_2))
          {
            ATerm u_31 = ATgetArgument(t, 0);
            j_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_52;
        t = concat_0_0(t);
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        {
          ATerm k_52 = NULL;
          k_52 = t;
          t = (ATerm) ATinsert(ATempty, k_52);
        }
      }
    return(t);
  }
  t = m_52(t);
  h_52 = t;
  t = SSL_implode_string(h_52);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm d_53 = NULL,f_53 = NULL,g_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  j_53 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_53 = ATgetArgument(t, 0);
      {
        ATerm v_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_53;
  if(match_cons(t, sym_prod_3))
    {
      l_53 = ATgetArgument(t, 0);
      m_53 = ATgetArgument(t, 1);
      {
        ATerm w_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = m_53;
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm z_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_31);
        t = l_53;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_53 = ATgetFirst((ATermList) t);
            f_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_53;
        if(match_cons(t, sym_lex_1))
          {
            ATerm a_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_53;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_53;
        t = yield_0_0(t);
      }
    else
      {
        t = x_31;
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm d_32 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(c_32);
              t = j_53;
              t = yield_0_0(t);
            }
          else
            {
              t = b_32;
              {
                ATerm e_32 = t;
                int f_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm g_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(f_32);
                    {
                      ATerm q_53 = NULL;
                      t = j_53;
                      t = yield_0_0(t);
                      q_53 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, q_53);
                    }
                  }
                else
                  {
                    t = e_32;
                    if(match_cons(t, sym_varsym_1))
                      {
                        n_53 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_53;
                    if(match_cons(t, sym_cf_1))
                      {
                        g_53 = ATgetArgument(t, 0);
                        t = g_53;
                        {
                          ATerm h_32 = t;
                          int i_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm j_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(i_32);
                              t = l_53;
                              {
                                ATerm w_32 = t;
                                int x_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_53 = NULL;
                                    t = j_53;
                                    t = yield_0_0(t);
                                    r_53 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, r_53);
                                    ;
                                    LocalPopChoice(x_32);
                                  }
                                else
                                  {
                                    t = w_32;
                                    {
                                      ATerm s_53 = NULL;
                                      t = j_53;
                                      t = yield_0_0(t);
                                      s_53 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, s_53);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = h_32;
                              {
                                ATerm y_32 = t;
                                int z_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm a_33 = ATgetArgument(t, 0);
                                        ATerm b_33 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(z_32);
                                    t = l_53;
                                    {
                                      ATerm c_33 = t;
                                      int f_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_53 = NULL;
                                          t = j_53;
                                          t = yield_0_0(t);
                                          t_53 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, t_53);
                                          ;
                                          LocalPopChoice(f_33);
                                        }
                                      else
                                        {
                                          t = c_33;
                                          {
                                            ATerm u_53 = NULL;
                                            t = j_53;
                                            t = yield_0_0(t);
                                            u_53 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, u_53);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = y_32;
                                    {
                                      ATerm g_33 = t;
                                      int h_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm k_33 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(h_33);
                                          t = l_53;
                                          {
                                            ATerm l_33 = t;
                                            int n_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_53 = NULL;
                                                t = j_53;
                                                t = yield_0_0(t);
                                                v_53 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, v_53);
                                                ;
                                                LocalPopChoice(n_33);
                                              }
                                            else
                                              {
                                                t = l_33;
                                                {
                                                  ATerm w_53 = NULL;
                                                  t = j_53;
                                                  t = yield_0_0(t);
                                                  w_53 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, w_53);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = g_33;
                                          {
                                            ATerm o_33 = t;
                                            int p_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm q_33 = ATgetArgument(t, 0);
                                                    ATerm r_33 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(p_33);
                                                t = l_53;
                                                {
                                                  ATerm t_33 = t;
                                                  int u_33 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_53 = NULL;
                                                      t = j_53;
                                                      t = yield_0_0(t);
                                                      x_53 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, x_53);
                                                      ;
                                                      LocalPopChoice(u_33);
                                                    }
                                                  else
                                                    {
                                                      t = t_33;
                                                      {
                                                        ATerm y_53 = NULL;
                                                        t = j_53;
                                                        t = yield_0_0(t);
                                                        y_53 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, y_53);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = o_33;
                                                {
                                                  ATerm z_53 = NULL;
                                                  t = j_53;
                                                  t = yield_0_0(t);
                                                  z_53 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, z_53);
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
                        ATerm a_54 = NULL;
                        t = j_53;
                        t = yield_0_0(t);
                        a_54 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, a_54);
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
    ATerm o_9 (ATerm t)
    {
      t = downup2_2_0(q_98, r_98, t);
      return(t);
    }
    t = SRTS_all(o_9, t);
    t = r_98(t);
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = fetch_1_0(s_9, t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = downup2_2_0(u_9, v_9, t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  if(!(match_cons(t, sym_FlatLex_0)))
    _fail(t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = fetch_1_0(y_9, t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = topdown_1_0(z_9, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLayout_0)))
    _fail(t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = appl_2_0(c_10, d_10, t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
    }
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = prod_3_0(e_10, _id, _id, t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = filter_1_0(g_10, t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = filter_1_0(f_10, t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm b_34 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_34;
    }
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm c_34 = t;
  if((PushChoice() == 0))
    {
      t = is_layout_p__0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_34;
    }
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = fetch_1_0(ApplToSort_0_0, t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = topdown_1_0(j_10, t);
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = repeat_1_0(ApplToSort_0_0, t);
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = fetch_1_0(FlatList_0_0, t);
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = topdown_1_0(m_10, t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = fetch_1_0(p_10, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = topdown_1_0(q_10, t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLit_0)))
    _fail(t);
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(r_10, t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
    }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm h_34 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_34;
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = fetch_1_0(u_10, t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = bottomup_1_0(v_10, t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  if(!(match_cons(t, sym_FlatInj_0)))
    _fail(t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6 = NULL,g_6 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          f_6 = ATgetArgument(t, 0);
          {
            ATerm k_34 = ATgetArgument(t, 1);
            if(((ATgetType(k_34) == AT_LIST) && !(ATisEmpty(k_34))))
              {
                g_6 = ATgetFirst((ATermList) k_34);
                {
                  ATerm l_34 = (ATerm) ATgetNext((ATermList) k_34);
                  if(((ATgetType(l_34) != AT_LIST) || !(ATisEmpty(l_34))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = f_6;
      t = injection_0_0(t);
      t = g_6;
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = fetch_1_0(FlatAlt_0_0, t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = topdown_1_0(y_10, t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
    }
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = fetch_1_0(a_11, t);
  return(t);
}
ATerm a_11 (ATerm t)
{
  if(!(match_cons(t, sym_ReplaceAppl_0)))
    _fail(t);
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = fetch_1_0(d_11, t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = topdown_1_0(e_11, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveSeq_0)))
    _fail(t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = fetch_1_0(h_11, t);
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm e_54 = NULL;
  if(match_cons(t, sym_parsetree_2))
    {
      e_54 = ATgetArgument(t, 0);
      {
        ATerm q_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_54;
  return(t);
}
ATerm h_11 (ATerm t)
{
  if(!(match_cons(t, sym_RemovePT_0)))
    _fail(t);
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm b_54 = NULL;
  b_54 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(q_9, r_9, t);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
      }
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(w_9, x_9, t);
          ;
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
        }
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(h_10, i_10, t);
            ;
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
          }
        {
          ATerm x_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(k_10, l_10, t);
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
                t = _2_0(n_10, o_10, t);
                ;
                LocalPopChoice(a_35);
              }
            else
              {
                t = z_34;
              }
            {
              ATerm b_35 = t;
              int c_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = _2_0(s_10, t_10, t);
                  ;
                  LocalPopChoice(c_35);
                }
              else
                {
                  t = b_35;
                }
              {
                ATerm d_35 = t;
                int e_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = _2_0(w_10, x_10, t);
                    ;
                    LocalPopChoice(e_35);
                  }
                else
                  {
                    t = d_35;
                  }
                {
                  ATerm f_35 = t;
                  int g_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = _2_0(z_10, replace_appl_0_0, t);
                      ;
                      LocalPopChoice(g_35);
                    }
                  else
                    {
                      t = f_35;
                    }
                  {
                    ATerm h_35 = t;
                    int i_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = _2_0(b_11, c_11, t);
                        ;
                        LocalPopChoice(i_35);
                      }
                    else
                      {
                        t = h_35;
                      }
                    {
                      ATerm j_35 = t;
                      int k_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = _2_0(f_11, g_11, t);
                          ;
                          LocalPopChoice(k_35);
                        }
                      else
                        {
                          t = j_35;
                        }
                      {
                        ATerm l_35 = t;
                        int m_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_54 = NULL;
                            f_54 = t;
                            if((b_54 != t))
                              {
                                _fail(t);
                              }
                            t = f_54;
                            t = _2_0(_id, implodeAsfix_0_0, t);
                            ;
                            LocalPopChoice(m_35);
                          }
                        else
                          {
                            t = l_35;
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
ATerm h_8 (ATerm b_61, ATerm c_61, ATerm t)
{
  ATerm g_54 = NULL;
  t = SSL_fputc(b_61, c_61);
  g_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_54);
  return(t);
}
ATerm i_8 (ATerm p_64, ATerm q_64, ATerm t)
{
  ATerm h_54 = NULL;
  t = SSL_write_term_to_stream_text(p_64, q_64);
  h_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_54);
  return(t);
}
ATerm k_8 (ATerm t_116 (ATerm), ATerm a_506, ATerm t_64, ATerm t)
{
  ATerm i_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_506, term_n_35);
  t = open_stream_0_0(t);
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_54, t_64);
  t = t_116(t);
  t = fclose_0_0(t);
  t = t_64;
  return(t);
}
ATerm j_8 (ATerm l_64, ATerm m_64, ATerm t)
{
  ATerm j_54 = NULL;
  t = SSL_write_term_to_stream_baf(l_64, m_64);
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_54);
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = fetch_1_0(n_11, t);
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  if(match_cons(t, sym__2))
    {
      n_54 = ATgetArgument(t, 0);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(o_11, n_54, o_54, t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      if(match_cons(r_35, sym_Stream_1))
        {
          p_54 = ATgetArgument(r_35, 0);
        }
      else
        _fail(t);
      q_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(p_54, q_54, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL;
  if(match_cons(t, sym__2))
    {
      r_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(q_11, r_54, s_54, t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      if(match_cons(u_35, sym_Stream_1))
        {
          u_54 = ATgetArgument(u_35, 0);
        }
      else
        _fail(t);
      v_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(u_54, v_54, t);
  t_54 = t;
  t = term_v_35;
  w_54 = t;
  t = t_54;
  if(match_cons(t, sym_Stream_1))
    {
      x_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, t_54);
  t = h_8(w_54, x_54, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  k_54 = t;
  {
    ATerm i_11 (ATerm t)
    {
      ATerm w_35 = t;
      int h_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_11 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((l_54 != NULL) && (l_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_11, t);
          ;
          LocalPopChoice(h_36);
        }
      else
        {
          t = w_35;
          t = term_i_36;
          if(((l_54 != NULL) && (l_54 != t)))
            _fail(t);
          else
            l_54 = t;
        }
      return(t);
    }
    t = _2_0(i_11, _id, t);
    t = k_54;
    {
      ATerm k_11 (ATerm t)
      {
        ATerm m_54 = NULL;
        m_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_54), m_54);
        return(t);
      }
      t = _2_0(_id, k_11, t);
      {
        ATerm j_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(l_11, m_11, t);
            ;
            LocalPopChoice(k_36);
          }
        else
          {
            t = j_36;
            t = _2_0(_id, p_11, t);
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
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
  y_54 = t;
  t = dtime_0_0(t);
  t = y_54;
  t = t_123(t);
  z_54 = t;
  t = dtime_0_0(t);
  a_55 = t;
  t = z_54;
  if(match_cons(t, sym__2))
    {
      b_55 = ATgetArgument(t, 0);
      c_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_55), (ATerm) ATmakeAppl(sym_Runtime_1, a_55)), c_55);
  return(t);
}
ATerm q_55 (ATerm k_55, ATerm t)
{
  t = SSL_fclose(k_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL;
  o_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_55 = ATgetArgument(t, 0);
      {
        ATerm l_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_55);
            ;
            LocalPopChoice(m_36);
          }
        else
          {
            t = l_36;
            t = q_55(o_55, t);
          }
      }
    }
  else
    {
      t = q_55(o_55, t);
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
  ATerm t_55 = NULL;
  t = SSL_fopen(d_61, e_61);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_55);
  return(t);
}
ATerm _2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,z_55 = NULL,a_56 = NULL,b_2 = NULL,c_2 = NULL;
  a_56 = t;
  if(match_cons(t, sym__2))
    {
      v_55 = ATgetArgument(t, 0);
      w_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_56);
  u_55 = t;
  t = v_55;
  t = u_78(t);
  x_55 = t;
  t = w_55;
  t = v_78(t);
  z_55 = t;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_55, z_55);
  b_2 = t;
  t = SSLsetAnnotations(b_2, u_55);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_56 = NULL;
  t = SSL_stdin_stream();
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_56);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_56 = NULL;
  t = SSL_stdout_stream();
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_56);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_56 = NULL;
  t = SSL_stderr_stream();
  f_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_56);
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm p_56 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_56;
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm s_56 = NULL;
  s_56 = t;
  t = SSL_is_string(s_56);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      ATerm o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_56 = NULL,x_6 = NULL;
        m_56 = t;
        t = SSL_explode_term(m_56);
        if(match_cons(t, sym__2))
          {
            ATerm r_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_36 = ATgetArgument(t, 1);
              if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
                {
                  x_6 = ATgetFirst((ATermList) s_36);
                  {
                    ATerm t_36 = (ATerm) ATgetNext((ATermList) s_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        {
          ATerm u_36 = t;
          int v_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_56 = NULL,o_56 = NULL;
              t = _2_0(r_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_56 = ATgetArgument(t, 0);
                  o_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_8(n_56, o_56, t);
              ;
              LocalPopChoice(v_36);
            }
          else
            {
              t = u_36;
              {
                ATerm q_56 = NULL,r_56 = NULL;
                t = _2_0(s_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_56 = ATgetArgument(t, 0);
                    r_56 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_8(q_56, r_56, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_56 = NULL;
      x_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_56, term_z_36);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = x_36;
      t = debug_1_0(t_11, t);
      _fail(t);
    }
  u_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(w_56, t);
  v_56 = t;
  t = u_56;
  t = fclose_0_0(t);
  t = v_56;
  return(t);
}
ATerm fetch_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm z_56 (ATerm t)
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_104, _id, t);
        ;
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = Cons_2_0(_id, z_56, t);
      }
    return(t);
  }
  t = z_56(t);
  return(t);
}
ATerm g_8 (ATerm r_55, ATerm s_55, ATerm t)
{
  t = SSL_strcat(r_55, s_55);
  return(t);
}
ATerm debug_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
  a_57 = t;
  t = r_116(t);
  b_57 = t;
  t = term_x_13;
  c_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_57), b_57);
  d_57 = t;
  t = SSL_printnl(c_57, d_57);
  t = a_57;
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
    }
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_57 = NULL;
      j_57 = t;
      t = SSL_is_string(j_57);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm i_37 = t;
        int j_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_11, t);
            ;
            LocalPopChoice(j_37);
          }
        else
          {
            t = i_37;
            {
              ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
              n_57 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_57 = ATgetArgument(t, 0);
                  t = o_57;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_57 = ATgetArgument(t, 0);
                      t = o_57;
                      {
                        ATerm k_37 = t;
                        int l_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_37);
                          }
                        else
                          {
                            t = k_37;
                            t = debug_1_0(v_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_57 = NULL,u_57 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_57 = ATgetArgument(t, 0);
                          p_57 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_57;
                      t = eval_config_0_0(t);
                      t_57 = t;
                      t = p_57;
                      t = eval_config_0_0(t);
                      u_57 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_57, u_57);
                      t = g_8(t_57, u_57, t);
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
  ATerm x_57 = NULL,y_57 = NULL;
  x_57 = t;
  t = term_m_37;
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_37, x_57);
  t = p_8(y_57, x_57, t);
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_57 = NULL,a_58 = NULL;
        t = eval_config_0_0(t);
        z_57 = t;
        t = term_m_37;
        a_58 = t;
        t = SSL_table_put(a_58, x_57, z_57);
        t = z_57;
        ;
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_58 = NULL,f_58 = NULL;
      d_58 = t;
      t = term_t_37;
      t = get_config_0_0(t);
      f_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_58, term_u_37);
      t = geq_0_0(t);
      t = d_58;
      t = e_118(t);
      ;
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
    }
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm h_58 = NULL;
  h_58 = t;
  if(match_string(t, "-k"))
    {
      t = h_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_58;
    }
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  i_58 = t;
  t = SSL_string_to_int(i_58);
  j_58 = t;
  t = term_v_37;
  k_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_37, j_58);
  t = s_8(k_58, j_58, t);
  t = i_58;
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_y_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_11, x_11, y_11, t);
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm m_58 = NULL;
  m_58 = t;
  if(match_string(t, "-S"))
    {
      t = m_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_58;
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL;
  t = term_t_37;
  n_58 = t;
  t = term_z_37;
  o_58 = t;
  t = term_a_38;
  t = s_8(n_58, o_58, t);
  t = term_b_38;
  return(t);
}
ATerm b_12 (ATerm t)
{
  t = term_c_38;
  return(t);
}
ATerm c_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
  p_58 = t;
  t = SSL_string_to_int(p_58);
  q_58 = t;
  t = term_t_37;
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, q_58);
  t = s_8(r_58, q_58, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_58);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm f_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL;
  t = term_e_38;
  s_58 = t;
  t = term_w_13;
  t_58 = t;
  t = term_f_38;
  t = s_8(s_58, t_58, t);
  t = term_g_38;
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_11, a_12, b_12, t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = n_38;
      {
        ATerm t_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_12, d_12, e_12, t);
            ;
            LocalPopChoice(u_38);
          }
        else
          {
            t = t_38;
            t = Option_3_0(f_12, g_12, h_12, t);
          }
      }
    }
  return(t);
}
ATerm s_8 (ATerm s_65, ATerm t_65, ATerm t)
{
  ATerm u_58 = NULL;
  t = term_m_37;
  u_58 = t;
  t = SSL_table_put(u_58, s_65, t_65);
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, s_65, t_65);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
      t = term_w_13;
      t = d_0(t);
      z_58 = t;
      t = term_w_38;
      a_59 = t;
      t = term_x_38;
      b_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_38, term_x_38, z_58);
      t = q_8(a_59, b_59, z_58, t);
      _fail(t);
    }
  else
    {
      ATerm e_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_58 = ATgetFirst((ATermList) t);
          y_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_58;
      t = a_0(t);
      t = term_w_13;
      t = c_0(t);
      e_59 = t;
      t = (ATerm) ATinsert(CheckATermList(y_58), e_59);
    }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm g_59 = NULL;
  g_59 = t;
  if(match_string(t, "-o"))
    {
      t = g_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_59;
    }
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL;
  i_59 = t;
  t = term_y_38;
  j_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_38, i_59);
  t = s_8(j_59, i_59, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_59);
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_12, j_12, k_12, t);
  return(t);
}
ATerm q_8 (ATerm a_68, ATerm b_68, ATerm z_67, ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_68, b_68);
  {
    ATerm a_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_39 = ATgetArgument(t, 0);
            ATerm e_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_68, b_68);
        t = p_8(a_68, b_68, t);
        ;
        LocalPopChoice(c_39);
      }
    else
      {
        t = a_39;
        t = (ATerm) ATempty;
      }
    m_59 = t;
    t = (ATerm) ATinsert(CheckATermList(m_59), z_67);
    n_59 = t;
    t = SSL_table_put(a_68, b_68, n_59);
    t = l_59;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL;
      t = term_w_13;
      t = l_0(t);
      y_59 = t;
      t = term_w_38;
      z_59 = t;
      t = term_x_38;
      a_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_38, term_x_38, y_59);
      t = q_8(z_59, a_60, y_59, t);
      _fail(t);
    }
  else
    {
      ATerm e_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_59 = ATgetFirst((ATermList) t);
          v_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_59 = ATgetFirst((ATermList) t);
          x_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_59;
      t = j_0(t);
      t = w_59;
      t = k_0(t);
      e_60 = t;
      t = (ATerm) ATinsert(CheckATermList(x_59), e_60);
    }
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm g_60 = NULL;
  g_60 = t;
  if(match_string(t, "-i"))
    {
      t = g_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_60;
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL;
  h_60 = t;
  t = term_f_39;
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_39, h_60);
  t = s_8(i_60, h_60, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_60);
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_g_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_12, m_12, n_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_13;
  t = whoami_0_0(t);
  j_60 = t;
  t = term_x_13;
  k_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_39), j_60);
  l_60 = t;
  t = SSL_printnl(k_60, l_60);
  t = term_a_14;
  m_60 = t;
  t = SSL_exit(m_60);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_39;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_8 (ATerm b_58, ATerm c_58, ATerm t)
{
  ATerm j_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_58, c_58);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = j_39;
      t = SSL_addr(b_58, c_58);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_110(t);
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      {
        ATerm p_60 = NULL,q_60 = NULL,t_60 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_60 = ATgetFirst((ATermList) t);
            q_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_60;
        t = foldr_2_0(f_110, g_110, t);
        t_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_60, t_60);
        t = g_110(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm t_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(t_7, v_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_60 = NULL,o_7 = NULL,p_7 = NULL;
  t = times_0_0(t);
  o_7 = t;
  t = SSL_explode_term(o_7);
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7;
  t = foldr_2_0(o_12, p_12, t);
  w_60 = t;
  t = SSL_TicksToSeconds(w_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
  n_61 = t;
  if(match_cons(t, sym__2))
    {
      o_61 = ATgetArgument(t, 0);
      p_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_61;
        if((o_61 != t))
          {
            _fail(t);
          }
        t = n_61;
        ;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = (ATerm) ATmakeAppl(sym__2, o_61, p_61);
        {
          ATerm v_39 = t;
          int w_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_61, p_61);
              ;
              LocalPopChoice(w_39);
            }
          else
            {
              t = v_39;
              t = SSL_gtr(o_61, p_61);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_61, p_61);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_118 (ATerm), ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_61 = NULL,u_61 = NULL;
      s_61 = t;
      t = term_t_37;
      t = get_config_0_0(t);
      u_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_61, term_a_14);
      t = geq_0_0(t);
      t = s_61;
      t = d_118(t);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
    }
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  t = run_time_0_0(t);
  w_61 = t;
  t = term_w_13;
  t = whoami_0_0(t);
  x_61 = t;
  t = term_x_13;
  y_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_40), w_61), term_z_39), x_61);
  z_61 = t;
  t = SSL_printnl(y_61, z_61);
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_40), w_61), term_z_39), x_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_62 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_37;
  a_62 = t;
  t = SSL_exit(a_62);
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm f_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(g_40);
          }
        else
          {
            t = f_40;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_40);
    }
  else
    {
      t = h_40;
      t = fetch_1_0(r_12, t);
    }
  t = r_124(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_62 = ATgetFirst((ATermList) t);
      d_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_62 = NULL,i_62 = NULL;
        t = d_62;
        t = h_0(t);
        h_62 = t;
        t = c_62;
        t = g_0(t);
        i_62 = t;
        t = d_62;
        {
          ATerm s_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_62), i_62);
            return(t);
          }
          t = reverse_acc_2_0(g_0, s_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_13;
      t = h_0(t);
    }
  return(t);
}
ATerm p_8 (ATerm r_69, ATerm s_69, ATerm t)
{
  t = SSL_table_get(r_69, s_69);
  return(t);
}
ATerm Program_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,d_2 = NULL,e_2 = NULL;
  m_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_62);
  j_62 = t;
  t = k_62;
  t = t_88(t);
  l_62 = t;
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_62);
  d_2 = t;
  t = SSLsetAnnotations(d_2, j_62);
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm s_62 = NULL,z_8 = NULL,a_9 = NULL;
  s_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_62), term_k_40);
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_62), term_k_40));
      }
    z_8 = t;
    t = term_i_36;
    a_9 = t;
    t = SSL_printnl(a_9, z_8);
    t = (ATerm) ATinsert(ATinsert(ATempty, s_62), term_k_40);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,w_8 = NULL,x_8 = NULL;
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_39;
      t = get_config_0_0(t);
      p_62 = t;
      ;
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      {
        ATerm t_12 (ATerm t)
        {
          ATerm u_12 (ATerm t)
          {
            if(((p_62 != NULL) && (p_62 != t)))
              _fail(t);
            else
              p_62 = t;
            return(t);
          }
          t = Program_1_0(u_12, t);
          return(t);
        }
        t = fetch_1_0(t_12, t);
      }
    }
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL,u_8 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_40), not_null(p_62)), term_r_40);
        {
          ATerm t_40 = t;
          int u_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              ;
              LocalPopChoice(u_40);
            }
          else
            {
              t = t_40;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_40), not_null(p_62)), term_r_40));
            }
          t_8 = t;
          t = term_i_36;
          u_8 = t;
          t = SSL_printnl(u_8, t_8);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_40), not_null(p_62)), term_r_40);
        }
        ;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
      }
    t = term_v_40;
    {
      ATerm w_40 = t;
      int x_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(x_40);
        }
      else
        {
          t = w_40;
          t = (ATerm) ATinsert(ATempty, term_v_40);
        }
      w_8 = t;
      t = term_i_36;
      x_8 = t;
      t = SSL_printnl(x_8, w_8);
      t = term_w_38;
      q_62 = t;
      t = term_x_38;
      r_62 = t;
      t = term_y_40;
      t = p_8(q_62, r_62, t);
      t = reverse_acc_2_0(_id, v_12, t);
      t = map_1_0(w_12, t);
      {
        ATerm z_40 = t;
        int a_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_9 = NULL,e_9 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_41), term_d_41), term_c_41), term_b_41);
            {
              ATerm g_41 = t;
              int h_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_list_0_0(t);
                  ;
                  LocalPopChoice(h_41);
                }
              else
                {
                  t = g_41;
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_41), term_d_41), term_c_41), term_b_41));
                }
              d_9 = t;
              t = term_i_36;
              e_9 = t;
              t = SSL_printnl(e_9, d_9);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_41), term_d_41), term_c_41), term_b_41);
            }
            ;
            LocalPopChoice(a_41);
          }
        else
          {
            t = z_40;
          }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,f_2 = NULL,h_2 = NULL;
  w_62 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_62);
  t_62 = t;
  t = u_62;
  t = u_88(t);
  v_62 = t;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_62);
  f_2 = t;
  t = SSLsetAnnotations(f_2, t_62);
  return(t);
}
ATerm lit_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,m_2 = NULL,p_2 = NULL;
  c_63 = t;
  if(match_cons(t, sym_lit_1))
    {
      a_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_63);
  z_62 = t;
  t = a_63;
  t = z_88(t);
  b_63 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, b_63);
  m_2 = t;
  t = SSLsetAnnotations(m_2, z_62);
  return(t);
}
ATerm map_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  ATerm f_63 (ATerm t)
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = Cons_2_0(c_104, f_63, t);
      }
    return(t);
  }
  t = f_63(t);
  return(t);
}
ATerm seq_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,r_2 = NULL,t_2 = NULL;
  j_63 = t;
  if(match_cons(t, sym_seq_1))
    {
      h_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_63);
  g_63 = t;
  t = h_63;
  t = y_88(t);
  i_63 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_seq_1, i_63);
  r_2 = t;
  t = SSLsetAnnotations(r_2, g_63);
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,v_2 = NULL,x_2 = NULL;
  r_63 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      n_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_63);
  m_63 = t;
  t = n_63;
  t = c_89(t);
  p_63 = t;
  t = o_63;
  t = d_89(t);
  q_63 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, p_63, q_63);
  v_2 = t;
  t = SSLsetAnnotations(v_2, m_63);
  return(t);
}
ATerm iter_star_1_0 (ATerm f_89 (ATerm), ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,c_3 = NULL,d_3 = NULL;
  x_63 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      v_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_63);
  u_63 = t;
  t = v_63;
  t = f_89(t);
  w_63 = t;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_iter_star_1, w_63);
  c_3 = t;
  t = SSLsetAnnotations(c_3, u_63);
  return(t);
}
ATerm iter_sep_2_0 (ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,e_3 = NULL,h_3 = NULL;
  f_64 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      b_64 = ATgetArgument(t, 0);
      c_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_64);
  a_64 = t;
  t = b_64;
  t = a_89(t);
  d_64 = t;
  t = c_64;
  t = b_89(t);
  e_64 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_iter_sep_2, d_64, e_64);
  e_3 = t;
  t = SSLsetAnnotations(e_3, a_64);
  return(t);
}
ATerm iter_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,n_64 = NULL,i_3 = NULL,j_3 = NULL;
  n_64 = t;
  if(match_cons(t, sym_iter_1))
    {
      j_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_64);
  i_64 = t;
  t = j_64;
  t = e_89(t);
  k_64 = t;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_iter_1, k_64);
  i_3 = t;
  t = SSLsetAnnotations(i_3, i_64);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_64 = NULL;
      w_64 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_64;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_41 = ATgetFirst((ATermList) t);
              ATerm v_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_64;
        }
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm z_64 (ATerm t)
        {
          ATerm w_41 = t;
          int b_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = iter_1_0(_id, t);
              ;
              LocalPopChoice(b_42);
            }
          else
            {
              t = w_41;
              {
                ATerm c_42 = t;
                int d_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = iter_sep_2_0(_id, _id, t);
                    ;
                    LocalPopChoice(d_42);
                  }
                else
                  {
                    t = c_42;
                    {
                      ATerm e_42 = t;
                      int j_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = iter_star_1_0(_id, t);
                          ;
                          LocalPopChoice(j_42);
                        }
                      else
                        {
                          t = e_42;
                          {
                            ATerm k_42 = t;
                            int l_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = iter_star_sep_2_0(_id, _id, t);
                                ;
                                LocalPopChoice(l_42);
                              }
                            else
                              {
                                t = k_42;
                                {
                                  ATerm x_12 (ATerm t)
                                  {
                                    ATerm y_12 (ATerm t)
                                    {
                                      ATerm m_42 = t;
                                      int n_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1_0(_id, t);
                                          ;
                                          LocalPopChoice(n_42);
                                        }
                                      else
                                        {
                                          t = m_42;
                                          {
                                            ATerm o_42 = t;
                                            int p_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(!(match_cons(t, sym_layout_0)))
                                                  _fail(t);
                                                ;
                                                LocalPopChoice(p_42);
                                              }
                                            else
                                              {
                                                t = o_42;
                                                t = z_64(t);
                                              }
                                          }
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(y_12, t);
                                    return(t);
                                  }
                                  t = seq_1_0(x_12, t);
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
        t = z_64(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  t = term_i_39;
  t = get_config_0_0(t);
  f_9 = t;
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        t = (ATerm) ATinsert(ATempty, f_9);
      }
    g_9 = t;
    t = term_i_36;
    h_9 = t;
    t = SSL_printnl(h_9, g_9);
    t = f_9;
  }
  return(t);
}
ATerm z_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL;
  t = term_w_42;
  d_65 = t;
  t = term_w_13;
  e_65 = t;
  t = term_x_42;
  t = s_8(d_65, e_65, t);
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = term_y_42;
  return(t);
}
ATerm c_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  t = term_w_42;
  f_65 = t;
  t = term_w_13;
  g_65 = t;
  t = term_x_42;
  t = s_8(f_65, g_65, t);
  t = term_z_42;
  h_65 = t;
  t = term_w_13;
  i_65 = t;
  t = term_a_43;
  t = s_8(h_65, i_65, t);
  t = term_c_43;
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = term_d_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_12, a_13, b_13, t);
      ;
      LocalPopChoice(g_43);
    }
  else
    {
      t = f_43;
      t = Option_3_0(c_13, d_13, e_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,k_3 = NULL,l_3 = NULL;
  o_65 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_65 = ATgetFirst((ATermList) t);
      l_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_65);
  j_65 = t;
  t = k_65;
  t = j_83(t);
  m_65 = t;
  t = l_65;
  t = k_83(t);
  n_65 = t;
  l_3 = t;
  t = (ATerm) ATinsert(CheckATermList(n_65), m_65);
  k_3 = t;
  t = SSLsetAnnotations(k_3, j_65);
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL;
  v_65 = t;
  t = term_i_39;
  w_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, v_65);
  t = s_8(w_65, v_65, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, v_65);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_120 (ATerm), ATerm t)
{
  ATerm u_65 = NULL;
  u_65 = t;
  {
    ATerm i_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_43;
        t = z_120(t);
        ;
        LocalPopChoice(k_43);
      }
    else
      {
        t = i_43;
      }
    t = u_65;
    {
      ATerm g_13 (ATerm t)
      {
        ATerm n_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_43 = t;
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
                t = p_43;
                t = z_120(t);
                t = Cons_2_0(_id, g_13, t);
              }
            ;
            LocalPopChoice(o_43);
          }
        else
          {
            t = n_43;
            {
              ATerm y_65 = NULL,z_65 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_65 = ATgetFirst((ATermList) t);
                  z_65 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_65), (ATerm) ATmakeAppl(sym_Undefined_1, y_65));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_13, g_13, t);
    }
  }
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm s_66 = NULL;
  s_66 = t;
  if(match_string(t, "--help"))
    {
      t = s_66;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_66;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_66;
        }
    }
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL;
  t = term_j_40;
  t_66 = t;
  t = term_w_13;
  u_66 = t;
  t = term_s_43;
  t = s_8(t_66, u_66, t);
  t = term_t_43;
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_v_43;
  return(t);
}
ATerm l_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_120 (ATerm), ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  l_66 = t;
  t = term_w_38;
  o_66 = t;
  t = term_x_38;
  p_66 = t;
  t = (ATerm) ATempty;
  q_66 = t;
  t = SSL_table_put(o_66, p_66, q_66);
  t = l_66;
  {
    ATerm h_13 (ATerm t)
    {
      ATerm w_43 = t;
      int y_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_120(t);
          ;
          LocalPopChoice(y_43);
        }
      else
        {
          t = w_43;
          {
            ATerm z_43 = t;
            int a_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_13, j_13, k_13, t);
                ;
                LocalPopChoice(a_44);
              }
            else
              {
                t = z_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_13, t);
    {
      ATerm b_44 = t;
      int c_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_67 = NULL;
          b_67 = t;
          {
            ATerm d_44 = t;
            int e_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_9 = NULL;
                t = b_67;
                {
                  ATerm l_44 = t;
                  int m_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_40;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_44);
                    }
                  else
                    {
                      t = l_44;
                      t = fetch_1_0(l_13, t);
                    }
                  t = b_67;
                  t = default_system_usage_0_0(t);
                  t = term_z_37;
                  l_9 = t;
                  t = SSL_exit(l_9);
                }
                ;
                LocalPopChoice(e_44);
              }
            else
              {
                t = d_44;
                {
                  ATerm p_9 = NULL;
                  t = term_w_42;
                  t = get_config_0_0(t);
                  t = b_67;
                  t = default_system_about_0_0(t);
                  t = term_z_37;
                  p_9 = t;
                  t = SSL_exit(p_9);
                }
              }
          }
          ;
          LocalPopChoice(c_44);
        }
      else
        {
          t = b_44;
          {
            ATerm o_44 = t;
            int p_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
                ATerm m_13 (ATerm t)
                {
                  ATerm n_13 (ATerm t)
                  {
                    if(((m_66 != NULL) && (m_66 != t)))
                      _fail(t);
                    else
                      m_66 = t;
                    return(t);
                  }
                  t = Undefined_1_0(n_13, t);
                  return(t);
                }
                t = fetch_1_0(m_13, t);
                t = term_x_13;
                c_67 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_66)), term_r_44);
                d_67 = t;
                t = SSL_printnl(c_67, d_67);
                t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_66)), term_r_44));
                t = default_system_usage_0_0(t);
                t = term_a_14;
                e_67 = t;
                t = SSL_exit(e_67);
                ;
                LocalPopChoice(p_44);
              }
            else
              {
                t = o_44;
              }
          }
        }
      n_66 = t;
      t = term_w_38;
      r_66 = t;
      t = SSL_table_destroy(r_66);
      t = n_66;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t)
{
  ATerm h_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL;
  t = parse_options_1_0(t_124, t);
  h_67 = t;
  t = term_s_44;
  n_67 = t;
  t = SSL_table_create(n_67);
  t = term_s_44;
  o_67 = t;
  t = term_u_44;
  p_67 = t;
  t = SSL_table_put(o_67, p_67, h_67);
  t = h_67;
  t = v_124(t);
  {
    ATerm w_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_124, t);
        ;
        LocalPopChoice(x_44);
      }
    else
      {
        t = w_44;
        {
          ATerm z_44 = t;
          int a_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_124(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_45);
            }
          else
            {
              t = z_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = if_verbose2_1_0(u_13, t);
  return(t);
}
ATerm r_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL;
  t = term_c_45;
  q_67 = t;
  t = term_w_13;
  r_67 = t;
  t = term_d_45;
  t = s_8(q_67, r_67, t);
  t = term_f_45;
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_g_45;
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
  s_67 = t;
  t = term_i_39;
  t = get_config_0_0(t);
  t_67 = t;
  t = term_x_13;
  u_67 = t;
  t = (ATerm) ATinsert(ATempty, t_67);
  v_67 = t;
  t = SSL_printnl(u_67, v_67);
  t = s_67;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    ATerm o_45 = t;
    int p_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_124(t);
        ;
        LocalPopChoice(p_45);
      }
    else
      {
        t = o_45;
        {
          ATerm q_45 = t;
          int r_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_45);
            }
          else
            {
              t = q_45;
              {
                ATerm s_45 = t;
                int t_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_45);
                  }
                else
                  {
                    t = s_45;
                    {
                      ATerm u_45 = t;
                      int v_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_13, s_13, t_13, t);
                          ;
                          LocalPopChoice(v_45);
                        }
                      else
                        {
                          t = u_45;
                          {
                            ATerm w_45 = t;
                            int x_45 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(x_45);
                              }
                            else
                              {
                                t = w_45;
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
  ATerm q_13 (ATerm t)
  {
    ATerm w_67 = NULL,c_68 = NULL,d_68 = NULL;
    w_67 = t;
    {
      ATerm y_45 = t;
      int z_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_68 != NULL) && (c_68 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_68 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_13, t);
          ;
          LocalPopChoice(z_45);
        }
      else
        {
          t = y_45;
          t = term_d_46;
          c_68 = t;
        }
      t = not_null(c_68);
      t = ReadFromFile_0_0(t);
      d_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_67, d_68);
      t = apply_strategy_1_0(c_124, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_13, e_124, p_13, q_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(implode_0_0, implode_options_0_0, default_usage_0_0, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_FlatAltOpt_0;
Symbol sym_Concrete_0;
Symbol sym_ToTerm_1;
Symbol sym_ToStrategy_1;
Symbol sym_ToBuild_1;
Symbol sym_layout_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
static void init_module_constructors (void)
{
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
  sym_FlatAltOpt_0 = ATmakeSymbol("FlatAltOpt", 0, ATfalse);
  ATprotectSymbol(sym_FlatAltOpt_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
}
ATerm term_c_53;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_h_51;
ATerm term_r_50;
ATerm term_p_50;
ATerm term_n_50;
ATerm term_g_50;
ATerm term_y_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_t_48;
ATerm term_q_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_d_46;
ATerm term_u_45;
ATerm term_p_45;
ATerm term_j_45;
ATerm term_w_44;
ATerm term_t_44;
ATerm term_q_44;
ATerm term_j_40;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_u_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_g_37;
ATerm term_d_37;
ATerm term_r_34;
ATerm term_e_34;
ATerm term_j_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_i_24;
ATerm term_j_22;
ATerm term_v_19;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_n_16;
ATerm term_e_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_p_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_FlatAltOpt_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Concrete_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym__2, term_k_46, term_p_46);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_46);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym__2, term_v_46, term_l_11);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym__2, term_f_47, term_g_47);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym__2, term_p_49, term_l_11);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym__2, term_s_49, term_l_11);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym__2, term_e_48, term_l_11);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym__2, term_t_51, term_l_11);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm implode_options_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm annotation_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm u_86 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm skip_concrete_1_0 (ATerm f_83 (ATerm), ATerm t);
static ATerm d_1 (ATerm q_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm x_7 (ATerm m_82 (ATerm), ATerm s_21, ATerm r_21, ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplCons_1_0 (ATerm t_82 (ATerm), ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm h_83 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_85 (ATerm), ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm c_60 (ATerm d_49, ATerm e_49, ATerm k_49, ATerm m_49, ATerm t);
static ATerm i_60 (ATerm i_51, ATerm j_51, ATerm k_51, ATerm l_51, ATerm t);
static ATerm j_60 (ATerm w_52, ATerm x_52, ATerm y_52, ATerm z_52, ATerm t);
static ATerm k_60 (ATerm e_58, ATerm f_58, ATerm g_58, ATerm h_58, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_86 (ATerm), ATerm t);
static ATerm c_8 (ATerm d_21, ATerm c_21, ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm v_98 (ATerm), ATerm t);
static ATerm a_83 (ATerm n_79, ATerm t);
static ATerm b_83 (ATerm w_80, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm p_92 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm c_92 (ATerm p_90, ATerm q_90, ATerm r_90, ATerm t);
static ATerm d_92 (ATerm b_91, ATerm c_91, ATerm e_91, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm e_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm implode_0_0 (ATerm t);
static ATerm n_8 (ATerm a_41, ATerm b_41, ATerm t);
static ATerm o_8 (ATerm i_26, ATerm j_26, ATerm t);
static ATerm q_8 (ATerm f_91 (ATerm), ATerm y_217, ATerm m_26, ATerm t);
static ATerm p_8 (ATerm e_26, ATerm f_26, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm u_112 (ATerm), ATerm t);
static ATerm x_111 (ATerm r_111, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_8 (ATerm k_26, ATerm t);
static ATerm s_8 (ATerm c_41, ATerm d_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_113 (ATerm h_112, ATerm t);
static ATerm n_113 (ATerm l_112, ATerm m_112, ATerm n_112, ATerm t);
static ATerm o_113 (ATerm w_112, ATerm x_112, ATerm y_112, ATerm t);
static ATerm t_8 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_91 (ATerm), ATerm t);
static ATerm m_8 (ATerm t_39, ATerm u_39, ATerm t);
ATerm debug_1_0 (ATerm d_91 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm e_106 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_8 (ATerm w_49, ATerm x_49, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_8 (ATerm g_52, ATerm h_52, ATerm f_52, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_8 (ATerm v_43, ATerm w_43, ATerm t);
ATerm foldr_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_106 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm need_help_1_0 (ATerm s_113 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm w_8 (ATerm x_53, ATerm y_53, ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_91 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm iowrap_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,g_0 = NULL,j_0 = NULL;
  a_0 = t;
  t = term_l_11;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_m_11;
  g_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_11), b_0), term_n_11);
  j_0 = t;
  t = SSL_printnl(g_0, j_0);
  t = term_p_11;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_q_11;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_r_11;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_s_11;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_t_11;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_u_11;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_y_11;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_z_11;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_b_12;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_c_12;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_d_12;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_h_12;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_p_12;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_t_12;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_u_12;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_v_12;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_w_12;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--concrete", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_y_12;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm k_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_0, a_1, c_1, t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = k_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_1, f_1, g_1, t);
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm v_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_1, i_1, j_1, t);
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = v_13;
                  {
                    ATerm x_13 = t;
                    int b_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(k_1, r_1, u_1, t);
                        LocalPopChoice(b_14);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm c_14 = t;
                          int d_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(x_1, z_1, a_2, t);
                              LocalPopChoice(d_14);
                            }
                          else
                            {
                              t = c_14;
                              {
                                ATerm e_14 = t;
                                int f_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(c_2, f_2, k_2, t);
                                    LocalPopChoice(f_14);
                                  }
                                else
                                  {
                                    t = e_14;
                                    {
                                      ATerm g_14 = t;
                                      int h_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(l_2, m_2, o_2, t);
                                          LocalPopChoice(h_14);
                                        }
                                      else
                                        {
                                          t = g_14;
                                          {
                                            ATerm i_14 = t;
                                            int m_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(p_2, q_2, r_2, t);
                                                LocalPopChoice(m_14);
                                              }
                                            else
                                              {
                                                t = i_14;
                                                {
                                                  ATerm v_14 = t;
                                                  int w_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(s_2, t_2, v_2, t);
                                                      LocalPopChoice(w_14);
                                                    }
                                                  else
                                                    {
                                                      t = v_14;
                                                      {
                                                        ATerm z_14 = t;
                                                        int k_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(x_2, y_2, z_2, t);
                                                            LocalPopChoice(k_16);
                                                          }
                                                        else
                                                          {
                                                            t = z_14;
                                                            t = Option_3_0(a_3, b_3, c_3, t);
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
static ATerm d_3 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,a_16 = NULL,h_0 = NULL;
  a_16 = t;
  if(match_cons(t, sym_cons_1))
    {
      x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_16);
  w_15 = t;
  t = x_15;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, x_15);
  h_0 = t;
  t = SSLsetAnnotations(h_0, w_15);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm l_16 = t;
  if((PushChoice() == 0))
    {
      ATerm k_19 = NULL,m_19 = NULL,g_20 = NULL;
      m_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          g_20 = ATgetArgument(t, 0);
          k_19 = ATgetArgument(t, 1);
          {
            ATerm d_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_1 = NULL,n_1 = NULL,a_8 = NULL;
            t = SSLgetAnnotations(m_19);
            d_7 = t;
            t = g_20;
            if(match_cons(t, sym_prod_3))
              {
                j_7 = ATgetArgument(t, 0);
                k_7 = ATgetArgument(t, 1);
                l_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_20);
            i_7 = t;
            t = k_7;
            if(match_cons(t, sym_cf_1))
              {
                a_8 = ATgetArgument(t, 0);
                {
                  ATerm i_8 = NULL,k_8 = NULL,l_8 = NULL,v_8 = NULL,x_0 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(k_7);
                  i_8 = t;
                  t = a_8;
                  if(match_cons(t, sym_opt_1))
                    {
                      l_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_8);
                  k_8 = t;
                  t = l_8;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, l_8);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, k_8);
                  v_8 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, v_8);
                  x_0 = t;
                  t = SSLsetAnnotations(x_0, i_8);
                }
              }
            else
              {
                ATerm c_9 = NULL,b_1 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    a_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_7);
                c_9 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, a_8);
                b_1 = t;
                t = SSLsetAnnotations(b_1, c_9);
              }
            m_7 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, j_7, m_7, l_7);
            n_1 = t;
            t = SSLsetAnnotations(n_1, i_7);
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, n_7, k_19);
            o_1 = t;
            t = SSLsetAnnotations(o_1, d_7);
          }
        }
      else
        {
          ATerm k_9 = NULL,o_9 = NULL,t_9 = NULL,u_9 = NULL,q_1 = NULL,p_1 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              g_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_19);
          k_9 = t;
          t = g_20;
          if(match_cons(t, sym_opt_1))
            {
              t_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_20);
          o_9 = t;
          t = t_9;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, t_9);
          p_1 = t;
          t = SSLsetAnnotations(p_1, o_9);
          u_9 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, u_9);
          q_1 = t;
          t = SSLsetAnnotations(q_1, k_9);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_16;
    }
  {
    ATerm m_16 = t;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,p_20 = NULL,q_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,w_2 = NULL,n_2 = NULL;
        b_21 = t;
        if(match_cons(t, sym_appl_2))
          {
            i_20 = ATgetArgument(t, 0);
            j_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_21);
        h_20 = t;
        t = i_20;
        if(match_cons(t, sym_prod_3))
          {
            q_20 = ATgetArgument(t, 0);
            x_20 = ATgetArgument(t, 1);
            y_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_20);
        p_20 = t;
        t = x_20;
        t = oncetd_1_0(f_3, t);
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, q_20, z_20, y_20);
        n_2 = t;
        t = SSLsetAnnotations(n_2, p_20);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, a_21, j_20);
        w_2 = t;
        t = SSLsetAnnotations(w_2, h_20);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_16;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,n_21 = NULL,w_1 = NULL;
  n_21 = t;
  if(match_cons(t, sym_lex_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_21);
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, g_21);
  w_1 = t;
  t = SSLsetAnnotations(w_1, f_21);
  return(t);
}
ATerm annotation_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,x_14 = NULL,y_14 = NULL,c_15 = NULL,e_15 = NULL,i_15 = NULL,l_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,v_15 = NULL,v_0 = NULL,m_0 = NULL,l_0 = NULL;
  v_15 = t;
  if(match_cons(t, sym_appl_2))
    {
      u_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_15);
  t_14 = t;
  t = u_14;
  if(match_cons(t, sym_prod_3))
    {
      c_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      i_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  y_14 = t;
  t = i_15;
  if(match_cons(t, sym_attrs_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  q_15 = t;
  t = r_15;
  t = oncetd_1_0(d_3, t);
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, s_15);
  l_0 = t;
  t = SSLsetAnnotations(l_0, q_15);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, c_15, e_15, t_15);
  m_0 = t;
  t = SSLsetAnnotations(m_0, y_14);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, l_15, x_14);
  v_0 = t;
  t = SSLsetAnnotations(v_0, t_14);
  t = x_14;
  t = filter_1_0(e_3, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_14 = ATgetFirst((ATermList) t);
      k_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_14;
  t = e_83(t);
  l_14 = t;
  t = k_14;
  t = d_83(t);
  p_14 = t;
  t = term_n_16;
  q_14 = t;
  t = (ATerm) ATinsert(CheckATermList(p_14), l_14);
  s_14 = t;
  t = SSL_mkterm(q_14, s_14);
  return(t);
}
ATerm alltd_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  static ATerm x_21 (ATerm t)
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_86(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = SRTS_all(x_21, t);
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm appl_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,h_22 = NULL,q_22 = NULL,m_3 = NULL;
  q_22 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_22);
  y_21 = t;
  t = z_21;
  t = f_76(t);
  b_22 = t;
  t = a_22;
  t = g_76(t);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, b_22, h_22);
  m_3 = t;
  t = SSLsetAnnotations(m_3, y_21);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,o_26 = NULL,q_26 = NULL,i_6 = NULL,h_6 = NULL;
  q_26 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
      x_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  u_25 = t;
  t = w_25;
  if(match_cons(t, sym_cf_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_25);
  a_26 = t;
  t = b_26;
  t = oncetd_1_0(j_3, t);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, c_26);
  h_6 = t;
  t = SSLsetAnnotations(h_6, a_26);
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, v_25, o_26, x_25);
  i_6 = t;
  t = SSLsetAnnotations(i_6, u_25);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm r_26 = NULL,b_27 = NULL,c_27 = NULL,g_6 = NULL;
  c_27 = t;
  if(match_cons(t, sym_sort_1))
    {
      b_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, b_27);
  g_6 = t;
  t = SSLsetAnnotations(g_6, r_26);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,l_6 = NULL;
  f_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      e_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_11);
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, e_11);
  l_6 = t;
  t = SSLsetAnnotations(l_6, d_11);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,p_7 = NULL;
  s_12 = t;
  if(match_cons(t, sym_cons_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_12);
  q_12 = t;
  t = r_12;
  if(match_string(t, "FromTerm"))
    {
      t = r_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("FromApp", 0, ATtrue)))
        _fail(t);
      t = r_12;
    }
  t = (ATerm) ATmakeAppl(sym_cons_1, r_12);
  p_7 = t;
  t = SSLsetAnnotations(p_7, q_12);
  return(t);
}
ATerm skip_concrete_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,a_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL,l_24 = NULL,q_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,k_6 = NULL,f_6 = NULL,d_6 = NULL,g_4 = NULL,f_4 = NULL;
  static ATerm x_29 (ATerm t)
  {
    static ATerm k_3 (ATerm t)
    {
      ATerm q_16 = t;
      int r_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_29 = NULL,t_29 = NULL,u_29 = NULL;
          r_29 = t;
          if(match_cons(t, sym_appl_2))
            {
              t_29 = ATgetArgument(t, 0);
              u_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,v_10 = NULL,x_10 = NULL,y_10 = NULL,u_6 = NULL,n_6 = NULL;
                t = SSLgetAnnotations(r_29);
                i_10 = t;
                t = t_29;
                if(match_cons(t, sym_prod_3))
                  {
                    q_10 = ATgetArgument(t, 0);
                    r_10 = ATgetArgument(t, 1);
                    v_10 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_29);
                p_10 = t;
                t = q_10;
                t = SRTS_one(l_3, t);
                x_10 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, x_10, r_10, v_10);
                n_6 = t;
                t = SSLsetAnnotations(n_6, p_10);
                y_10 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, y_10, u_29);
                u_6 = t;
                t = SSLsetAnnotations(u_6, i_10);
                t = f_83(t);
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                {
                  ATerm a_12 = NULL,e_12 = NULL,f_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,s_7 = NULL,r_7 = NULL,q_7 = NULL;
                  t = SSLgetAnnotations(r_29);
                  a_12 = t;
                  t = t_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      f_12 = ATgetArgument(t, 0);
                      i_12 = ATgetArgument(t, 1);
                      j_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_29);
                  e_12 = t;
                  t = j_12;
                  if(match_cons(t, sym_attrs_1))
                    {
                      m_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_12);
                  l_12 = t;
                  t = m_12;
                  t = oncetd_1_0(n_3, t);
                  n_12 = t;
                  t = (ATerm) ATmakeAppl(sym_attrs_1, n_12);
                  q_7 = t;
                  t = SSLsetAnnotations(q_7, l_12);
                  o_12 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, f_12, i_12, o_12);
                  r_7 = t;
                  t = SSLsetAnnotations(r_7, e_12);
                  k_12 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, k_12, u_29);
                  s_7 = t;
                  t = SSLsetAnnotations(s_7, a_12);
                  t = f_83(t);
                }
              }
          }
          LocalPopChoice(r_16);
        }
      else
        {
          t = q_16;
          t = annotation_2_0(f_83, x_29, t);
        }
      return(t);
    }
    t = alltd_1_0(k_3, t);
    return(t);
  }
  i_25 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_25);
  j_23 = t;
  t = k_23;
  if(match_cons(t, sym_prod_3))
    {
      h_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
      q_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_23);
  f_24 = t;
  t = l_24;
  if(match_cons(t, sym_cf_1))
    {
      d_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_24);
  c_25 = t;
  t = d_25;
  if(match_cons(t, sym_sort_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_25);
  f_25 = t;
  t = g_25;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, g_25);
  f_4 = t;
  t = SSLsetAnnotations(f_4, f_25);
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, h_25);
  g_4 = t;
  t = SSLsetAnnotations(g_4, c_25);
  e_25 = t;
  t = q_24;
  if(match_cons(t, sym_attrs_1))
    {
      x_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_24);
  w_24 = t;
  t = x_24;
  {
    static ATerm g_3 (ATerm t)
    {
      ATerm j_25 = NULL,k_25 = NULL,n_25 = NULL,o_25 = NULL,s_25 = NULL,t_25 = NULL,z_5 = NULL,x_5 = NULL;
      t_25 = t;
      if(match_cons(t, sym_term_1))
        {
          k_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_25);
      j_25 = t;
      t = k_25;
      if(match_cons(t, sym_cons_1))
        {
          o_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_25);
      n_25 = t;
      t = o_25;
      if(((z_22 != NULL) && (z_22 != t)))
        _fail(t);
      else
        z_22 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, o_25);
      x_5 = t;
      t = SSLsetAnnotations(x_5, n_25);
      s_25 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, s_25);
      z_5 = t;
      t = SSLsetAnnotations(z_5, j_25);
      return(t);
    }
    t = SRTS_one(g_3, t);
  }
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, y_24);
  d_6 = t;
  t = SSLsetAnnotations(d_6, w_24);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, h_24, e_25, z_24);
  f_6 = t;
  t = SSLsetAnnotations(f_6, f_24);
  v_24 = t;
  t = a_24;
  {
    static ATerm h_3 (ATerm t)
    {
      t = appl_2_0(i_3, _id, t);
      if(((i_23 != NULL) && (i_23 != t)))
        _fail(t);
      else
        i_23 = t;
      return(t);
    }
    t = oncetd_1_0(h_3, t);
  }
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, v_24, e_24);
  k_6 = t;
  t = SSLsetAnnotations(k_6, j_23);
  t = not_null(z_22);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(i_23));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(i_23));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(i_23));
        }
    }
  t = x_29(t);
  return(t);
}
static ATerm d_1 (ATerm q_0, ATerm t)
{
  ATerm s_0 = NULL;
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_0 = NULL,y_0 = NULL,z_0 = NULL;
  z_0 = t;
  if(match_cons(t, sym__2))
    {
      u_0 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_3 (ATerm t)
            {
              t = y_0;
              return(t);
            }
            t = u_0;
            t = at_end_1_0(x_3, t);
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            t = d_1(z_0, t);
          }
      }
    }
  else
    {
      t = d_1(z_0, t);
    }
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,v_1 = NULL,y_1 = NULL,b_2 = NULL,d_2 = NULL,g_2 = NULL,i_2 = NULL,j_2 = NULL;
  s_1 = t;
  if(match_cons(t, sym_prod_3))
    {
      t_1 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
      {
        ATerm x_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = t_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_16 = ATgetFirst((ATermList) t);
      v_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_16 = ATgetFirst((ATermList) t);
      y_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_1;
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_17 = ATgetFirst((ATermList) t);
            b_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_17);
        t = b_2;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_2;
            {
              ATerm d_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm f_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_17);
                  t = s_1;
                }
              else
                {
                  t = d_17;
                  if(match_cons(t, sym_cf_1))
                    {
                      j_2 = ATgetArgument(t, 0);
                      t = j_2;
                      {
                        ATerm g_17 = t;
                        int h_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm i_17 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_17);
                            t = s_1;
                          }
                        else
                          {
                            t = g_17;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm j_17 = ATgetArgument(t, 0);
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
                          ATerm k_17 = ATgetArgument(t, 0);
                          ATerm p_17 = ATgetArgument(t, 1);
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
                ATerm q_17 = ATgetFirst((ATermList) t);
                d_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_2;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_17 = ATgetFirst((ATermList) t);
                g_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_2;
            if(match_cons(t, sym_cf_1))
              {
                j_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_2;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm t_17 = ATgetArgument(t, 0);
                ATerm u_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_1;
          }
      }
    else
      {
        t = a_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm v_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_1;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
  q_3 = t;
  if(match_cons(t, sym_appl_2))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
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
      v_3 = ATgetFirst((ATermList) t);
      w_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_3 = ATgetFirst((ATermList) t);
      p_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
        t = p_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_3;
        t = is_conc_0_0(t);
        t = t_3;
        t = r_0(t);
        c_4 = t;
        t = v_3;
        t = r_0(t);
        d_4 = t;
        t = o_3;
        t = r_0(t);
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(CheckATermList(e_4), d_4));
        t = conc_0_0(t);
      }
    }
  else
    {
      ATerm l_1 = NULL,m_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_3;
      t = is_conc_0_0(t);
      t = t_3;
      t = r_0(t);
      l_1 = t;
      t = v_3;
      t = r_0(t);
      m_1 = t;
      {
        ATerm w_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 = NULL,h_2 = NULL;
            t = m_1;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = m_1;
              }
            else
              {
                ATerm u_2 = NULL,v_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_2 = ATgetFirst((ATermList) t);
                    h_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_1);
                u_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), e_2);
                v_9 = t;
                t = SSLsetAnnotations(v_9, u_2);
              }
            t = (ATerm) ATmakeAppl(sym__2, l_1, m_1);
            t = conc_0_0(t);
            LocalPopChoice(y_17);
          }
        else
          {
            t = w_17;
            t = (ATerm) ATmakeAppl(sym_Conc_2, l_1, m_1);
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm m_82 (ATerm), ATerm s_21, ATerm r_21, ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,b_7 = NULL,c_7 = NULL;
  t = s_21;
  if(match_cons(t, sym_prod_3))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      ATerm d_18 = ATgetArgument(t, 1);
      b_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_7;
  {
    static ATerm y_3 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(y_3, t);
  }
  t = not_null(c_7);
  if(match_string(t, "sorts"))
    {
      t = term_e_18;
    }
  else
    {
      if(match_string(t, "imports"))
        {
          t = term_h_18;
        }
      else
        {
          if(match_string(t, "id"))
            {
              t = term_i_18;
            }
          else
            {
              if(match_string(t, "hiddens"))
                {
                  t = term_k_18;
                }
              else
                {
                  if(match_string(t, "exports"))
                    {
                      t = term_m_18;
                    }
                  else
                    {
                      if(match_string(t, "module"))
                        {
                          t = term_v_19;
                        }
                      else
                        {
                          t = not_null(c_7);
                        }
                    }
                }
            }
        }
    }
  x_6 = t;
  t = r_21;
  t = map_1_0(m_82, t);
  y_6 = t;
  t = SSL_mkterm(x_6, y_6);
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,m_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL,v_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym_prod_3))
    {
      d_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
      {
        ATerm a_20 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_5 = ATgetFirst((ATermList) t);
      r_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = s_5;
  if(match_cons(t, sym_iter_1))
    {
      u_5 = ATgetArgument(t, 0);
      t = u_5;
      if((m_5 != t))
        {
          _fail(t);
        }
      t = c_5;
    }
  else
    {
      ATerm b_20 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              u_5 = ATgetArgument(t, 0);
              {
                ATerm e_20 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(d_20);
          t = u_5;
          if((m_5 != t))
            {
              _fail(t);
            }
          t = c_5;
        }
      else
        {
          t = b_20;
          if(match_cons(t, sym_cf_1))
            {
              u_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_5;
          if(match_cons(t, sym_cf_1))
            {
              p_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_5;
          if(match_cons(t, sym_iter_1))
            {
              v_5 = ATgetArgument(t, 0);
              t = v_5;
              if((p_5 != t))
                {
                  _fail(t);
                }
              t = c_5;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  v_5 = ATgetArgument(t, 0);
                  {
                    ATerm f_20 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = v_5;
              if((p_5 != t))
                {
                  _fail(t);
                }
              t = c_5;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm m_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  m_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
      {
        ATerm k_20 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_6;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm n_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_20);
        t = m_6;
      }
    else
      {
        t = l_20;
        {
          ATerm o_20 = t;
          int r_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm s_20 = ATgetArgument(t, 0);
                  ATerm t_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(r_20);
              t = m_6;
            }
          else
            {
              t = o_20;
              if(match_cons(t, sym_cf_1))
                {
                  q_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_6;
              {
                ATerm u_20 = t;
                int v_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm w_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(v_20);
                    t = m_6;
                  }
                else
                  {
                    t = u_20;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm e_21 = ATgetArgument(t, 0);
                        ATerm h_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = m_6;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_11 = NULL,c_11 = NULL,g_11 = NULL,h_11 = NULL,j_11 = NULL;
      a_11 = t;
      if(match_cons(t, sym_appl_2))
        {
          c_11 = ATgetArgument(t, 0);
          g_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_11;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_11;
              t = x_7(t_82, c_11, g_11, t);
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
              {
                ATerm o_21 = t;
                int p_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_11;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(p_21);
                  }
                else
                  {
                    t = o_21;
                    {
                      ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
                      t = c_11;
                      if(match_cons(t, sym_prod_3))
                        {
                          m_4 = ATgetArgument(t, 0);
                          n_4 = ATgetArgument(t, 1);
                          {
                            ATerm q_21 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = m_4;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = n_4;
                      {
                        ATerm u_21 = t;
                        int v_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm w_21 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(v_21);
                            t = c_11;
                          }
                        else
                          {
                            t = u_21;
                            if(match_cons(t, sym_cf_1))
                              {
                                o_4 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = o_4;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm i_22 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = c_11;
                          }
                      }
                      t = term_j_22;
                    }
                  }
              }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_11 = ATgetFirst((ATermList) t);
              j_11 = (ATerm) ATgetNext((ATermList) t);
              t = j_11;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm k_22 = t;
                  int l_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_11;
                      t = x_7(t_82, c_11, g_11, t);
                      LocalPopChoice(l_22);
                    }
                  else
                    {
                      t = k_22;
                      {
                        ATerm m_22 = t;
                        int n_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_11 = NULL;
                            t = c_11;
                            t = is_ins_0_0(t);
                            t = h_11;
                            t = t_82(t);
                            v_11 = t;
                            t = (ATerm) ATinsert(ATempty, v_11);
                            LocalPopChoice(n_22);
                          }
                        else
                          {
                            t = m_22;
                            {
                              ATerm z_4 = NULL,b_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
                              t = c_11;
                              if(match_cons(t, sym_prod_3))
                                {
                                  b_5 = ATgetArgument(t, 0);
                                  h_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_22 = ATgetArgument(t, 2);
                                  }
                                }
                              else
                                _fail(t);
                              t = b_5;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  e_5 = ATgetFirst((ATermList) t);
                                  g_5 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = g_5;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = h_5;
                              if(match_cons(t, sym_opt_1))
                                {
                                  i_5 = ATgetArgument(t, 0);
                                  t = i_5;
                                  if((e_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = c_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      i_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = e_5;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      f_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_5;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      j_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_5;
                                  if((f_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = c_11;
                                }
                              t = h_11;
                              t = t_82(t);
                              z_4 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, z_4);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = a_11;
                  t = x_7(t_82, c_11, g_11, t);
                }
            }
          else
            {
              t = a_11;
              t = x_7(t_82, c_11, g_11, t);
            }
        }
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = ReplConsConc_1_0(t_82, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      f_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13;
  if(match_cons(t, sym_prod_3))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      {
        ATerm p_22 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = g_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      b_13 = (ATerm) ATgetNext((ATermList) t);
      t = b_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_13;
      if(match_cons(t, sym_opt_1))
        {
          i_13 = ATgetArgument(t, 0);
          t = l_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_13 = ATgetFirst((ATermList) t);
              d_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_13;
          if((z_12 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = c_13;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              i_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_12;
          if(match_cons(t, sym_cf_1))
            {
              a_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_13;
          if(match_cons(t, sym_opt_1))
            {
              j_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_13 = ATgetFirst((ATermList) t);
              d_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_13;
          if((a_13 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = c_13;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_13;
      if(match_cons(t, sym_opt_1))
        {
          i_13 = ATgetArgument(t, 0);
          t = l_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              i_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_13;
          if(match_cons(t, sym_opt_1))
            {
              j_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm r_22 = t;
  if((PushChoice() == 0))
    {
      ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
      t_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          u_19 = ATgetArgument(t, 0);
          s_19 = ATgetArgument(t, 1);
          {
            ATerm m_21 = NULL,t_21 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,f_10 = NULL,e_10 = NULL,u_22 = NULL;
            t = SSLgetAnnotations(t_19);
            m_21 = t;
            t = u_19;
            if(match_cons(t, sym_prod_3))
              {
                c_22 = ATgetArgument(t, 0);
                d_22 = ATgetArgument(t, 1);
                e_22 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_19);
            t_21 = t;
            t = d_22;
            if(match_cons(t, sym_cf_1))
              {
                u_22 = ATgetArgument(t, 0);
                {
                  ATerm c_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,c_10 = NULL,a_10 = NULL;
                  t = SSLgetAnnotations(d_22);
                  c_23 = t;
                  t = u_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      f_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_22);
                  e_23 = t;
                  t = f_23;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, f_23);
                  a_10 = t;
                  t = SSLsetAnnotations(a_10, e_23);
                  g_23 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, g_23);
                  c_10 = t;
                  t = SSLsetAnnotations(c_10, c_23);
                }
              }
            else
              {
                ATerm m_23 = NULL,d_10 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    u_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_22);
                m_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, u_22);
                d_10 = t;
                t = SSLsetAnnotations(d_10, m_23);
              }
            f_22 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, c_22, f_22, e_22);
            e_10 = t;
            t = SSLsetAnnotations(e_10, t_21);
            g_22 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, g_22, s_19);
            f_10 = t;
            t = SSLsetAnnotations(f_10, m_21);
          }
        }
      else
        {
          ATerm r_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,l_10 = NULL,j_10 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              u_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_19);
          r_23 = t;
          t = u_19;
          if(match_cons(t, sym_opt_1))
            {
              u_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_19);
          t_23 = t;
          t = u_23;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, u_23);
          j_10 = t;
          t = SSLsetAnnotations(j_10, t_23);
          v_23 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, v_23);
          l_10 = t;
          t = SSLsetAnnotations(l_10, r_23);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_22;
    }
  return(t);
}
ATerm implodeAsfix_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm v_30 = NULL;
  static ATerm z_34 (ATerm t)
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        {
          ATerm v_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
              u_34 = t;
              if(match_cons(t, sym_appl_2))
                {
                  v_34 = ATgetArgument(t, 0);
                  t_34 = ATgetArgument(t, 1);
                  {
                    ATerm x_22 = t;
                    int y_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = u_34;
                        t = h_83(t);
                        t = u_34;
                        t = skip_concrete_1_0(z_34, t);
                        LocalPopChoice(y_22);
                      }
                    else
                      {
                        t = x_22;
                        {
                          ATerm l_17 = NULL,r_17 = NULL,m_10 = NULL;
                          t = SSLgetAnnotations(u_34);
                          l_17 = t;
                          t = t_34;
                          t = filter_1_0(z_3, t);
                          r_17 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, v_34, r_17);
                          m_10 = t;
                          t = SSLsetAnnotations(m_10, l_17);
                          {
                            ATerm a_23 = t;
                            int b_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = z_34(t);
                                LocalPopChoice(b_23);
                              }
                            else
                              {
                                t = a_23;
                                {
                                  ATerm d_23 = t;
                                  int h_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ReplCons_1_0(z_34, t);
                                      LocalPopChoice(h_23);
                                    }
                                  else
                                    {
                                      t = d_23;
                                      {
                                        ATerm l_23 = t;
                                        int n_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                w_19 = ATgetArgument(t, 0);
                                                x_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = x_19;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                y_19 = ATgetFirst((ATermList) t);
                                                z_19 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = z_19;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = w_19;
                                            t = injection_0_0(t);
                                            t = y_19;
                                            t = z_34(t);
                                            LocalPopChoice(n_23);
                                          }
                                        else
                                          {
                                            t = l_23;
                                            {
                                              ATerm o_23 = t;
                                              int p_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Tuple_0_0(t);
                                                  t = z_34(t);
                                                  LocalPopChoice(p_23);
                                                }
                                              else
                                                {
                                                  t = o_23;
                                                  t = FlatAlt_0_0(t);
                                                  t = z_34(t);
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
                      v_34 = ATgetArgument(t, 0);
                      {
                        ATerm q_23 = t;
                        int s_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = u_34;
                            t = h_83(t);
                            t = u_34;
                            t = skip_concrete_1_0(z_34, t);
                            LocalPopChoice(s_23);
                          }
                        else
                          {
                            t = q_23;
                            {
                              ATerm c_24 = NULL,g_24 = NULL,n_10 = NULL;
                              t = SSLgetAnnotations(u_34);
                              c_24 = t;
                              t = v_34;
                              t = map_1_0(z_34, t);
                              g_24 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, g_24);
                              n_10 = t;
                              t = SSLsetAnnotations(n_10, c_24);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = u_34;
                      t = h_83(t);
                      t = u_34;
                      t = skip_concrete_1_0(z_34, t);
                    }
                }
              LocalPopChoice(w_22);
            }
          else
            {
              t = v_22;
              t = SRTS_all(z_34, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      v_30 = ATgetArgument(t, 0);
      {
        ATerm w_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_30;
  t = z_34(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm m_36 = NULL,o_36 = NULL,r_36 = NULL,s_36 = NULL,w_36 = NULL;
  m_36 = t;
  if(match_cons(t, sym_appl_2))
    {
      o_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_36;
  if(match_cons(t, sym_prod_3))
    {
      ATerm x_23 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
      {
        ATerm y_23 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = r_36;
  {
    ATerm z_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm d_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_24);
        {
          ATerm p_24 = NULL;
          t = term_i_24;
          p_24 = t;
          t = SSL_mkterm(p_24, w_36);
        }
      }
    else
      {
        t = z_23;
        {
          ATerm b_25 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              s_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_36;
          if(match_cons(t, sym_seq_1))
            {
              ATerm j_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_i_24;
          b_25 = t;
          t = SSL_mkterm(b_25, w_36);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm c_85 (ATerm), ATerm t)
{
  static ATerm a_4 (ATerm t)
  {
    t = topdown_1_0(c_85, t);
    return(t);
  }
  t = c_85(t);
  t = SRTS_all(a_4, t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,x_41 = NULL,y_41 = NULL,c_42 = NULL;
  static ATerm j_43 (ATerm t)
  {
    ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,k_42 = NULL;
    if(match_cons(t, sym__2))
      {
        e_42 = ATgetArgument(t, 0);
        k_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_42;
    if(match_cons(t, sym_alt_2))
      {
        f_42 = ATgetArgument(t, 0);
        g_42 = ATgetArgument(t, 1);
        {
          ATerm k_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_42;
              if(((r_37 != NULL) && (r_37 != t)))
                _fail(t);
              else
                r_37 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, k_42, not_null(t_37));
              LocalPopChoice(m_24);
            }
          else
            {
              t = k_24;
              {
                ATerm n_24 = t;
                int o_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_42;
                    if(((r_37 != NULL) && (r_37 != t)))
                      _fail(t);
                    else
                      r_37 = t;
                    t = g_42;
                    if(((s_37 != NULL) && (s_37 != t)))
                      _fail(t);
                    else
                      s_37 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, k_42, not_null(t_37));
                    LocalPopChoice(o_24);
                  }
                else
                  {
                    t = n_24;
                    {
                      ATerm w_42 = NULL,y_42 = NULL;
                      t = term_p_11;
                      y_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_42, term_p_11);
                      t = u_8(k_42, y_42, t);
                      w_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_42, w_42);
                      t = j_43(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = e_42;
        if(((r_37 != NULL) && (r_37 != t)))
          _fail(t);
        else
          r_37 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, k_42, not_null(t_37));
      }
    return(t);
  }
  x_41 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_41 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL,p_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,d_27 = NULL,i_27 = NULL,j_27 = NULL,q_13 = NULL,p_13 = NULL,o_13 = NULL,n_13 = NULL,r_27 = NULL;
        t = SSLgetAnnotations(x_41);
        h_26 = t;
        t = y_41;
        if(match_cons(t, sym_prod_3))
          {
            s_26 = ATgetArgument(t, 0);
            t_26 = ATgetArgument(t, 1);
            u_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_41);
        p_26 = t;
        t = s_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_27 = ATgetFirst((ATermList) t);
            d_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_26);
        z_26 = t;
        t = a_27;
        if(match_cons(t, sym_cf_1))
          {
            r_27 = ATgetArgument(t, 0);
            {
              ATerm t_24 = t;
              int u_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_28 = NULL,m_13 = NULL;
                  t = SSLgetAnnotations(a_27);
                  b_28 = t;
                  t = r_27;
                  if(((r_37 != NULL) && (r_37 != t)))
                    _fail(t);
                  else
                    r_37 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, r_27);
                  m_13 = t;
                  t = SSLsetAnnotations(m_13, b_28);
                  LocalPopChoice(u_24);
                }
              else
                {
                  t = t_24;
                  t = a_27;
                  if(((r_37 != NULL) && (r_37 != t)))
                    _fail(t);
                  else
                    r_37 = t;
                  t = a_27;
                }
            }
          }
        else
          {
            t = a_27;
            if(((r_37 != NULL) && (r_37 != t)))
              _fail(t);
            else
              r_37 = t;
            t = a_27;
          }
        i_27 = t;
        t = d_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_27), i_27);
        n_13 = t;
        t = SSLsetAnnotations(n_13, z_26);
        j_27 = t;
        t = t_26;
        if(match_cons(t, sym_cf_1))
          {
            x_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_26);
        w_26 = t;
        t = x_26;
        if(match_cons(t, sym_alt_2))
          {
            o_37 = ATgetArgument(t, 0);
            p_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, x_26);
        o_13 = t;
        t = SSLsetAnnotations(o_13, w_26);
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, j_27, y_26, u_26);
        p_13 = t;
        t = SSLsetAnnotations(p_13, p_26);
        v_26 = t;
        t = c_42;
        if(((t_37 != NULL) && (t_37 != t)))
          _fail(t);
        else
          t_37 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, v_26, c_42);
        q_13 = t;
        t = SSLsetAnnotations(q_13, h_26);
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        {
          ATerm d_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,n_29 = NULL,q_29 = NULL,s_29 = NULL,v_29 = NULL,w_29 = NULL,z_29 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,a_14 = NULL,z_13 = NULL,y_13 = NULL,r_13 = NULL;
          t = SSLgetAnnotations(x_41);
          d_29 = t;
          t = y_41;
          if(match_cons(t, sym_prod_3))
            {
              k_29 = ATgetArgument(t, 0);
              l_29 = ATgetArgument(t, 1);
              n_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_41);
          j_29 = t;
          t = k_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_30 = ATgetFirst((ATermList) t);
              c_30 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_29);
          z_29 = t;
          t = b_30;
          if(((r_37 != NULL) && (r_37 != t)))
            _fail(t);
          else
            r_37 = t;
          t = c_30;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(c_30), b_30);
          r_13 = t;
          t = SSLsetAnnotations(r_13, z_29);
          d_30 = t;
          t = l_29;
          if(match_cons(t, sym_lex_1))
            {
              v_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_29);
          s_29 = t;
          t = v_29;
          if(match_cons(t, sym_alt_2))
            {
              o_37 = ATgetArgument(t, 0);
              p_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, v_29);
          y_13 = t;
          t = SSLsetAnnotations(y_13, s_29);
          w_29 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, d_30, w_29, n_29);
          z_13 = t;
          t = SSLsetAnnotations(z_13, j_29);
          q_29 = t;
          t = c_42;
          if(((t_37 != NULL) && (t_37 != t)))
            _fail(t);
          else
            t_37 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, q_29, c_42);
          a_14 = t;
          t = SSLsetAnnotations(a_14, d_29);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, o_37, p_37), term_p_11);
  t = j_43(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  if(match_cons(t, sym_sort_1))
    {
      m_45 = ATgetArgument(t, 0);
      {
        ATerm k_30 = NULL,n_14 = NULL;
        t = SSLgetAnnotations(l_45);
        k_30 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, m_45);
        n_14 = t;
        t = SSLsetAnnotations(n_14, k_30);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          m_45 = ATgetArgument(t, 0);
          {
            ATerm r_30 = NULL,t_30 = NULL,o_14 = NULL;
            t = SSLgetAnnotations(l_45);
            r_30 = t;
            t = m_45;
            t = injective_alt_0_0(t);
            t_30 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, t_30);
            o_14 = t;
            t = SSLsetAnnotations(o_14, r_30);
          }
        }
      else
        {
          ATerm g_31 = NULL,p_31 = NULL,q_31 = NULL,r_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              m_45 = ATgetArgument(t, 0);
              n_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_45);
          g_31 = t;
          t = m_45;
          t = injective_alt_0_0(t);
          p_31 = t;
          t = n_45;
          t = injective_alt_0_0(t);
          q_31 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, p_31, q_31);
          r_14 = t;
          t = SSLsetAnnotations(r_14, g_31);
        }
    }
  return(t);
}
static ATerm c_60 (ATerm d_49, ATerm e_49, ATerm k_49, ATerm m_49, ATerm t)
{
  ATerm n_49 = NULL,t_49 = NULL,b_50 = NULL,d_50 = NULL,e_50 = NULL,k_50 = NULL,l_50 = NULL,o_50 = NULL,q_50 = NULL,f_15 = NULL,b_15 = NULL,a_15 = NULL;
  t = SSLgetAnnotations(m_49);
  n_49 = t;
  t = d_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_50 = ATgetFirst((ATermList) t);
      e_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  b_50 = t;
  t = d_50;
  if(match_cons(t, sym_varsym_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_50);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, o_50);
  a_15 = t;
  t = SSLsetAnnotations(a_15, l_50);
  q_50 = t;
  t = e_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_50), q_50);
  b_15 = t;
  t = SSLsetAnnotations(b_15, b_50);
  k_50 = t;
  t = k_49;
  {
    ATerm a_25 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(b_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_25;
      }
  }
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, k_50, e_49, t_49);
  f_15 = t;
  t = SSLsetAnnotations(f_15, n_49);
  return(t);
}
static ATerm i_60 (ATerm i_51, ATerm j_51, ATerm k_51, ATerm l_51, ATerm t)
{
  ATerm m_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,n_15 = NULL,k_15 = NULL,s_52 = NULL;
  t = SSLgetAnnotations(l_51);
  m_51 = t;
  t = i_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_51 = ATgetFirst((ATermList) t);
      z_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_51);
  x_51 = t;
  t = y_51;
  if(match_cons(t, sym_sort_1))
    {
      s_52 = ATgetArgument(t, 0);
      {
        ATerm a_32 = NULL,g_15 = NULL;
        t = SSLgetAnnotations(y_51);
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, s_52);
        g_15 = t;
        t = SSLsetAnnotations(g_15, a_32);
      }
    }
  else
    {
      ATerm g_32 = NULL,n_32 = NULL,o_32 = NULL,s_32 = NULL,j_15 = NULL,h_15 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          s_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_51);
      g_32 = t;
      t = s_52;
      if(match_cons(t, sym_sort_1))
        {
          o_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_52);
      n_32 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, o_32);
      h_15 = t;
      t = SSLsetAnnotations(h_15, n_32);
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, s_32);
      j_15 = t;
      t = SSLsetAnnotations(j_15, g_32);
    }
  a_52 = t;
  t = z_51;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_51), a_52);
  k_15 = t;
  t = SSLsetAnnotations(k_15, x_51);
  b_52 = t;
  t = j_51;
  t = injective_alt_0_0(t);
  v_51 = t;
  t = k_51;
  {
    ATerm l_25 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(h_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_25;
      }
  }
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, b_52, v_51, w_51);
  n_15 = t;
  t = SSLsetAnnotations(n_15, m_51);
  return(t);
}
static ATerm j_60 (ATerm w_52, ATerm x_52, ATerm y_52, ATerm z_52, ATerm t)
{
  ATerm a_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,i_16 = NULL,p_15 = NULL;
  t = SSLgetAnnotations(z_52);
  a_53 = t;
  t = w_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_53 = ATgetFirst((ATermList) t);
      i_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_52);
  g_53 = t;
  t = h_53;
  {
    ATerm m_25 = t;
    if((PushChoice() == 0))
      {
        ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,o_15 = NULL;
        o_53 = t;
        if(match_cons(t, sym_lit_1))
          {
            n_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_53);
        m_53 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, n_53);
        o_15 = t;
        t = SSLsetAnnotations(o_15, m_53);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_25;
      }
  }
  j_53 = t;
  t = i_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_53), j_53);
  p_15 = t;
  t = SSLsetAnnotations(p_15, g_53);
  k_53 = t;
  t = x_52;
  {
    static ATerm o_60 (ATerm t)
    {
      ATerm n_57 = NULL,o_57 = NULL,s_57 = NULL;
      n_57 = t;
      if(match_cons(t, sym_sort_1))
        {
          o_57 = ATgetArgument(t, 0);
          {
            ATerm b_33 = NULL,u_15 = NULL;
            t = SSLgetAnnotations(n_57);
            b_33 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, o_57);
            u_15 = t;
            t = SSLsetAnnotations(u_15, b_33);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              o_57 = ATgetArgument(t, 0);
              {
                ATerm o_33 = NULL,q_33 = NULL,y_15 = NULL;
                t = SSLgetAnnotations(n_57);
                o_33 = t;
                t = o_57;
                t = o_60(t);
                q_33 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, q_33);
                y_15 = t;
                t = SSLsetAnnotations(y_15, o_33);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  o_57 = ATgetArgument(t, 0);
                  {
                    ATerm o_34 = NULL,f_35 = NULL,z_15 = NULL;
                    t = SSLgetAnnotations(n_57);
                    o_34 = t;
                    t = o_57;
                    t = o_60(t);
                    f_35 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, f_35);
                    z_15 = t;
                    t = SSLsetAnnotations(z_15, o_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      o_57 = ATgetArgument(t, 0);
                      {
                        ATerm m_35 = NULL,o_35 = NULL,b_16 = NULL;
                        t = SSLgetAnnotations(n_57);
                        m_35 = t;
                        t = o_57;
                        t = o_60(t);
                        o_35 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, o_35);
                        b_16 = t;
                        t = SSLsetAnnotations(b_16, m_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          o_57 = ATgetArgument(t, 0);
                          {
                            ATerm u_35 = NULL,w_35 = NULL,c_16 = NULL;
                            t = SSLgetAnnotations(n_57);
                            u_35 = t;
                            t = o_57;
                            t = o_60(t);
                            w_35 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, w_35);
                            c_16 = t;
                            t = SSLsetAnnotations(c_16, u_35);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              o_57 = ATgetArgument(t, 0);
                              s_57 = ATgetArgument(t, 1);
                              {
                                ATerm j_36 = NULL,t_36 = NULL,y_36 = NULL,z_36 = NULL,b_37 = NULL,e_16 = NULL,d_16 = NULL;
                                t = SSLgetAnnotations(n_57);
                                j_36 = t;
                                t = o_57;
                                t = o_60(t);
                                t_36 = t;
                                t = s_57;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    z_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(s_57);
                                y_36 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, z_36);
                                d_16 = t;
                                t = SSLsetAnnotations(d_16, y_36);
                                b_37 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_sep_2, t_36, b_37);
                                e_16 = t;
                                t = SSLsetAnnotations(e_16, j_36);
                              }
                            }
                          else
                            {
                              ATerm j_37 = NULL,m_37 = NULL,n_37 = NULL,q_37 = NULL,y_37 = NULL,g_16 = NULL,f_16 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  o_57 = ATgetArgument(t, 0);
                                  s_57 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(n_57);
                              j_37 = t;
                              t = o_57;
                              t = o_60(t);
                              m_37 = t;
                              t = s_57;
                              if(match_cons(t, sym_lit_1))
                                {
                                  q_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(s_57);
                              n_37 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, q_37);
                              f_16 = t;
                              t = SSLsetAnnotations(f_16, n_37);
                              y_37 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_37, y_37);
                              g_16 = t;
                              t = SSLsetAnnotations(g_16, j_37);
                            }
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = o_60(t);
  }
  e_53 = t;
  t = y_52;
  {
    ATerm p_25 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(i_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_25;
      }
  }
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, k_53, e_53, f_53);
  i_16 = t;
  t = SSLsetAnnotations(i_16, a_53);
  return(t);
}
static ATerm k_60 (ATerm e_58, ATerm f_58, ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm k_58 = NULL,w_58 = NULL,j_16 = NULL;
  t = SSLgetAnnotations(h_58);
  k_58 = t;
  t = g_58;
  t = oncetd_1_0(j_4, t);
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, e_58, f_58, w_58);
  j_16 = t;
  t = SSLsetAnnotations(j_16, k_58);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_50 = NULL,e_51 = NULL,f_51 = NULL,d_15 = NULL;
  f_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      e_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_51);
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, e_51);
  d_15 = t;
  t = SSLsetAnnotations(d_15, z_50);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,m_15 = NULL;
  v_52 = t;
  if(match_cons(t, sym_cons_1))
    {
      u_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_52);
  t_52 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, u_52);
  m_15 = t;
  t = SSLsetAnnotations(m_15, t_52);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,d_58 = NULL,h_16 = NULL;
  d_58 = t;
  if(match_cons(t, sym_cons_1))
    {
      x_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, x_57);
  h_16 = t;
  t = SSLsetAnnotations(h_16, w_57);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  if(match_string(t, "bracket"))
    {
      t = y_58;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = y_58;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm z_58 = NULL,e_59 = NULL,f_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,n_59 = NULL,o_59 = NULL,s_59 = NULL,u_59 = NULL,v_59 = NULL;
  n_59 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_59 = ATgetArgument(t, 0);
      s_59 = ATgetArgument(t, 1);
      v_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_59;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = s_59;
      if(match_cons(t, sym_cf_1))
        {
          u_59 = ATgetArgument(t, 0);
          t = u_59;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              k_59 = ATgetArgument(t, 0);
              e_59 = ATgetArgument(t, 1);
              t = o_59;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_59 = ATgetFirst((ATermList) t);
                  j_59 = (ATerm) ATgetNext((ATermList) t);
                  t = j_59;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = f_59;
                      if(match_cons(t, sym_cf_1))
                        {
                          h_59 = ATgetArgument(t, 0);
                          t = h_59;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              i_59 = ATgetArgument(t, 0);
                              z_58 = ATgetArgument(t, 1);
                              {
                                ATerm z_25 = t;
                                int d_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = c_60(o_59, s_59, v_59, n_59, t);
                                    LocalPopChoice(d_26);
                                  }
                                else
                                  {
                                    t = z_25;
                                    {
                                      ATerm g_26 = t;
                                      int l_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = i_60(o_59, s_59, v_59, n_59, t);
                                          LocalPopChoice(l_26);
                                        }
                                      else
                                        {
                                          t = g_26;
                                          {
                                            ATerm n_26 = t;
                                            int e_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = j_60(o_59, s_59, v_59, n_59, t);
                                                LocalPopChoice(e_27);
                                              }
                                            else
                                              {
                                                t = n_26;
                                                {
                                                  ATerm f_27 = t;
                                                  int h_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = k_59;
                                                      if((i_59 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = e_59;
                                                      if((z_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = n_59;
                                                      LocalPopChoice(h_27);
                                                    }
                                                  else
                                                    {
                                                      t = f_27;
                                                      t = k_60(o_59, s_59, v_59, n_59, t);
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
                              ATerm k_27 = t;
                              int l_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = c_60(o_59, s_59, v_59, n_59, t);
                                  LocalPopChoice(l_27);
                                }
                              else
                                {
                                  t = k_27;
                                  {
                                    ATerm m_27 = t;
                                    int n_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = i_60(o_59, s_59, v_59, n_59, t);
                                        LocalPopChoice(n_27);
                                      }
                                    else
                                      {
                                        t = m_27;
                                        {
                                          ATerm q_27 = t;
                                          int s_27 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_60(o_59, s_59, v_59, n_59, t);
                                              LocalPopChoice(s_27);
                                            }
                                          else
                                            {
                                              t = q_27;
                                              t = k_60(o_59, s_59, v_59, n_59, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm t_27 = t;
                          int w_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = c_60(o_59, s_59, v_59, n_59, t);
                              LocalPopChoice(w_27);
                            }
                          else
                            {
                              t = t_27;
                              {
                                ATerm x_27 = t;
                                int y_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = i_60(o_59, s_59, v_59, n_59, t);
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
                                          t = j_60(o_59, s_59, v_59, n_59, t);
                                          LocalPopChoice(a_28);
                                        }
                                      else
                                        {
                                          t = z_27;
                                          t = k_60(o_59, s_59, v_59, n_59, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = f_59;
                      {
                        ATerm c_28 = t;
                        int d_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_60(o_59, s_59, v_59, n_59, t);
                            LocalPopChoice(d_28);
                          }
                        else
                          {
                            t = c_28;
                            {
                              ATerm e_28 = t;
                              int f_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_60(o_59, s_59, v_59, n_59, t);
                                  LocalPopChoice(f_28);
                                }
                              else
                                {
                                  t = e_28;
                                  {
                                    ATerm g_28 = t;
                                    int i_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = j_60(o_59, s_59, v_59, n_59, t);
                                        LocalPopChoice(i_28);
                                      }
                                    else
                                      {
                                        t = g_28;
                                        t = k_60(o_59, s_59, v_59, n_59, t);
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
                  ATerm k_28 = t;
                  int m_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = c_60(o_59, s_59, v_59, n_59, t);
                      LocalPopChoice(m_28);
                    }
                  else
                    {
                      t = k_28;
                      {
                        ATerm t_28 = t;
                        int u_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = i_60(o_59, s_59, v_59, n_59, t);
                            LocalPopChoice(u_28);
                          }
                        else
                          {
                            t = t_28;
                            {
                              ATerm v_28 = t;
                              int w_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_60(o_59, s_59, v_59, n_59, t);
                                  LocalPopChoice(w_28);
                                }
                              else
                                {
                                  t = v_28;
                                  t = k_60(o_59, s_59, v_59, n_59, t);
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
                  k_59 = ATgetArgument(t, 0);
                  t = o_59;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_59 = ATgetFirst((ATermList) t);
                      j_59 = (ATerm) ATgetNext((ATermList) t);
                      t = j_59;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = f_59;
                          if(match_cons(t, sym_cf_1))
                            {
                              h_59 = ATgetArgument(t, 0);
                              t = h_59;
                              if(match_cons(t, sym_iter_1))
                                {
                                  i_59 = ATgetArgument(t, 0);
                                  {
                                    ATerm x_28 = t;
                                    int y_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = c_60(o_59, s_59, v_59, n_59, t);
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
                                              t = i_60(o_59, s_59, v_59, n_59, t);
                                              LocalPopChoice(c_29);
                                            }
                                          else
                                            {
                                              t = a_29;
                                              {
                                                ATerm e_29 = t;
                                                int g_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = j_60(o_59, s_59, v_59, n_59, t);
                                                    LocalPopChoice(g_29);
                                                  }
                                                else
                                                  {
                                                    t = e_29;
                                                    {
                                                      ATerm h_29 = t;
                                                      int i_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_59;
                                                          if((i_59 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = n_59;
                                                          LocalPopChoice(i_29);
                                                        }
                                                      else
                                                        {
                                                          t = h_29;
                                                          t = k_60(o_59, s_59, v_59, n_59, t);
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
                                  ATerm m_29 = t;
                                  int o_29 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = c_60(o_59, s_59, v_59, n_59, t);
                                      LocalPopChoice(o_29);
                                    }
                                  else
                                    {
                                      t = m_29;
                                      {
                                        ATerm p_29 = t;
                                        int y_29 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = i_60(o_59, s_59, v_59, n_59, t);
                                            LocalPopChoice(y_29);
                                          }
                                        else
                                          {
                                            t = p_29;
                                            {
                                              ATerm a_30 = t;
                                              int e_30 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = j_60(o_59, s_59, v_59, n_59, t);
                                                  LocalPopChoice(e_30);
                                                }
                                              else
                                                {
                                                  t = a_30;
                                                  t = k_60(o_59, s_59, v_59, n_59, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm f_30 = t;
                              int g_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = c_60(o_59, s_59, v_59, n_59, t);
                                  LocalPopChoice(g_30);
                                }
                              else
                                {
                                  t = f_30;
                                  {
                                    ATerm h_30 = t;
                                    int i_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = i_60(o_59, s_59, v_59, n_59, t);
                                        LocalPopChoice(i_30);
                                      }
                                    else
                                      {
                                        t = h_30;
                                        {
                                          ATerm j_30 = t;
                                          int l_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_60(o_59, s_59, v_59, n_59, t);
                                              LocalPopChoice(l_30);
                                            }
                                          else
                                            {
                                              t = j_30;
                                              t = k_60(o_59, s_59, v_59, n_59, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = f_59;
                          {
                            ATerm m_30 = t;
                            int n_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = c_60(o_59, s_59, v_59, n_59, t);
                                LocalPopChoice(n_30);
                              }
                            else
                              {
                                t = m_30;
                                {
                                  ATerm o_30 = t;
                                  int p_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_60(o_59, s_59, v_59, n_59, t);
                                      LocalPopChoice(p_30);
                                    }
                                  else
                                    {
                                      t = o_30;
                                      {
                                        ATerm q_30 = t;
                                        int s_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = j_60(o_59, s_59, v_59, n_59, t);
                                            LocalPopChoice(s_30);
                                          }
                                        else
                                          {
                                            t = q_30;
                                            t = k_60(o_59, s_59, v_59, n_59, t);
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
                      ATerm u_30 = t;
                      int w_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_60(o_59, s_59, v_59, n_59, t);
                          LocalPopChoice(w_30);
                        }
                      else
                        {
                          t = u_30;
                          {
                            ATerm x_30 = t;
                            int y_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_60(o_59, s_59, v_59, n_59, t);
                                LocalPopChoice(y_30);
                              }
                            else
                              {
                                t = x_30;
                                {
                                  ATerm z_30 = t;
                                  int a_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_60(o_59, s_59, v_59, n_59, t);
                                      LocalPopChoice(a_31);
                                    }
                                  else
                                    {
                                      t = z_30;
                                      t = k_60(o_59, s_59, v_59, n_59, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = o_59;
                  {
                    ATerm b_31 = t;
                    int c_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_60(o_59, s_59, v_59, n_59, t);
                        LocalPopChoice(c_31);
                      }
                    else
                      {
                        t = b_31;
                        {
                          ATerm d_31 = t;
                          int e_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_60(o_59, s_59, v_59, n_59, t);
                              LocalPopChoice(e_31);
                            }
                          else
                            {
                              t = d_31;
                              {
                                ATerm f_31 = t;
                                int h_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = j_60(o_59, s_59, v_59, n_59, t);
                                    LocalPopChoice(h_31);
                                  }
                                else
                                  {
                                    t = f_31;
                                    t = k_60(o_59, s_59, v_59, n_59, t);
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
              u_59 = ATgetArgument(t, 0);
              t = u_59;
              if(match_string(t, "<START>"))
                {
                  t = o_59;
                  {
                    ATerm i_31 = t;
                    int j_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_60(o_59, s_59, v_59, n_59, t);
                        LocalPopChoice(j_31);
                      }
                    else
                      {
                        t = i_31;
                        {
                          ATerm k_31 = t;
                          int l_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_60(o_59, s_59, v_59, n_59, t);
                              LocalPopChoice(l_31);
                            }
                          else
                            {
                              t = k_31;
                              {
                                ATerm m_31 = t;
                                int n_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = j_60(o_59, s_59, v_59, n_59, t);
                                    LocalPopChoice(n_31);
                                  }
                                else
                                  {
                                    t = m_31;
                                    {
                                      ATerm o_31 = t;
                                      int r_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = k_60(o_59, s_59, v_59, n_59, t);
                                          LocalPopChoice(r_31);
                                        }
                                      else
                                        {
                                          t = o_31;
                                          t = n_59;
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
                  t = o_59;
                  {
                    ATerm s_31 = t;
                    int t_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_60(o_59, s_59, v_59, n_59, t);
                        LocalPopChoice(t_31);
                      }
                    else
                      {
                        t = s_31;
                        {
                          ATerm u_31 = t;
                          int v_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_60(o_59, s_59, v_59, n_59, t);
                              LocalPopChoice(v_31);
                            }
                          else
                            {
                              t = u_31;
                              {
                                ATerm w_31 = t;
                                int x_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = j_60(o_59, s_59, v_59, n_59, t);
                                    LocalPopChoice(x_31);
                                  }
                                else
                                  {
                                    t = w_31;
                                    t = k_60(o_59, s_59, v_59, n_59, t);
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
              t = o_59;
              {
                ATerm y_31 = t;
                int z_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_60(o_59, s_59, v_59, n_59, t);
                    LocalPopChoice(z_31);
                  }
                else
                  {
                    t = y_31;
                    {
                      ATerm b_32 = t;
                      int c_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_60(o_59, s_59, v_59, n_59, t);
                          LocalPopChoice(c_32);
                        }
                      else
                        {
                          t = b_32;
                          {
                            ATerm d_32 = t;
                            int e_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_60(o_59, s_59, v_59, n_59, t);
                                LocalPopChoice(e_32);
                              }
                            else
                              {
                                t = d_32;
                                t = k_60(o_59, s_59, v_59, n_59, t);
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
      t = o_59;
      {
        ATerm f_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_60(o_59, s_59, v_59, n_59, t);
            LocalPopChoice(h_32);
          }
        else
          {
            t = f_32;
            {
              ATerm i_32 = t;
              int j_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_60(o_59, s_59, v_59, n_59, t);
                  LocalPopChoice(j_32);
                }
              else
                {
                  t = i_32;
                  {
                    ATerm k_32 = t;
                    int l_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_60(o_59, s_59, v_59, n_59, t);
                        LocalPopChoice(l_32);
                      }
                    else
                      {
                        t = k_32;
                        t = k_60(o_59, s_59, v_59, n_59, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  static ATerm k_4 (ATerm t)
  {
    t = bottomup_1_0(d_85, t);
    return(t);
  }
  t = SRTS_all(k_4, t);
  t = d_85(t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm r_61 = NULL,t_62 = NULL,u_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      a_63 = ATgetArgument(t, 0);
      b_63 = ATgetArgument(t, 1);
      t = a_63;
      if(match_cons(t, sym_Ins_1))
        {
          u_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_62 = ATgetFirst((ATermList) t);
          r_61 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(r_61), t_62), u_62);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              t_62 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, t_62), u_62);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, u_62);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          a_63 = ATgetArgument(t, 0);
          b_63 = ATgetArgument(t, 1);
          c_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_63), (ATerm) ATinsert(ATempty, b_63)), a_63);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm i_65 = NULL,p_65 = NULL,d_66 = NULL,i_66 = NULL,k_66 = NULL,p_66 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      d_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
      t = p_66;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = d_66;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = d_66;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  i_66 = ATgetArgument(t, 0);
                  k_66 = ATgetArgument(t, 1);
                  t = d_66;
                }
              else
                {
                  t = d_66;
                }
            }
        }
      else
        {
          t = d_66;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = p_66;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  i_66 = ATgetArgument(t, 0);
                  k_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, i_66, (ATerm) ATmakeAppl(sym_Conc_2, k_66, p_66));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          d_66 = ATgetArgument(t, 0);
          p_66 = ATgetArgument(t, 1);
          p_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_66;
      if(match_cons(t, sym_Conc_3))
        {
          i_66 = ATgetArgument(t, 0);
          k_66 = ATgetArgument(t, 1);
          i_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, i_66, k_66, (ATerm) ATmakeAppl(sym_Conc_3, i_65, p_66, p_65));
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_68 = NULL,b_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_68 = ATgetFirst((ATermList) t);
          b_68 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, a_68), b_68);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              a_68 = ATgetArgument(t, 0);
              b_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, a_68, (ATerm) ATmakeAppl(sym_Ins_1, b_68));
        }
      LocalPopChoice(p_32);
    }
  else
    {
      t = m_32;
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            {
              ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL,i_38 = NULL,l_38 = NULL,q_38 = NULL,r_38 = NULL,m_17 = NULL;
              v_68 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  w_68 = ATgetArgument(t, 0);
                  x_68 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_68);
              i_38 = t;
              t = w_68;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_38 = ATgetFirst((ATermList) t);
                  r_38 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, q_38), r_38);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      q_38 = ATgetArgument(t, 0);
                      r_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, q_38, (ATerm) ATmakeAppl(sym_Ins_1, r_38));
                }
              l_38 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, l_38, x_68);
              m_17 = t;
              t = SSLsetAnnotations(m_17, i_38);
            }
          }
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_2_0(l_4, _id, t);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,l_39 = NULL,q_39 = NULL,n_17 = NULL;
        h_69 = t;
        if(match_cons(t, sym_Conc_2))
          {
            i_69 = ATgetArgument(t, 0);
            j_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_69);
        l_39 = t;
        t = j_69;
        t = conc_to_cons_0_0(t);
        q_39 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, i_69, q_39);
        n_17 = t;
        t = SSLsetAnnotations(n_17, l_39);
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
  }
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,s_69 = NULL,o_17 = NULL;
            t = CTC2_0_0(t);
            s_69 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_69 = ATgetFirst((ATermList) t);
                m_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_69);
            k_69 = t;
            t = l_69;
            t = conc_to_cons_0_0(t);
            n_69 = t;
            t = (ATerm) ATinsert(CheckATermList(m_69), n_69);
            o_17 = t;
            t = SSLsetAnnotations(o_17, k_69);
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            {
              ATerm u_69 = NULL;
              if(match_cons(t, sym_Ins_1))
                {
                  u_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, u_69);
            }
          }
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
      }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm k_72 = NULL,p_72 = NULL,r_72 = NULL,t_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      z_72 = ATgetArgument(t, 0);
      j_73 = ATgetArgument(t, 1);
      {
        ATerm z_32 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_73 = ATgetFirst((ATermList) t);
      i_73 = (ATerm) ATgetNext((ATermList) t);
      t = i_73;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_73;
          if(match_cons(t, sym_opt_1))
            {
              k_73 = ATgetArgument(t, 0);
              t = k_73;
              if((a_73 != t))
                {
                  _fail(t);
                }
              t = term_a_33;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  k_73 = ATgetArgument(t, 0);
                  t = a_73;
                  if(match_cons(t, sym_cf_1))
                    {
                      b_73 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = k_73;
                  if(match_cons(t, sym_opt_1))
                    {
                      l_73 = ATgetArgument(t, 0);
                      t = l_73;
                      if((b_73 != t))
                        {
                          _fail(t);
                        }
                      t = term_a_33;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          l_73 = ATgetArgument(t, 0);
                          t = l_73;
                          if((b_73 != t))
                            {
                              _fail(t);
                            }
                          t = term_c_33;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              l_73 = ATgetArgument(t, 0);
                              {
                                ATerm d_33 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = l_73;
                          if((b_73 != t))
                            {
                              _fail(t);
                            }
                          t = term_c_33;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      k_73 = ATgetArgument(t, 0);
                      t = k_73;
                      if((a_73 != t))
                        {
                          _fail(t);
                        }
                      t = term_c_33;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          k_73 = ATgetArgument(t, 0);
                          {
                            ATerm e_33 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = k_73;
                      if((a_73 != t))
                        {
                          _fail(t);
                        }
                      t = term_c_33;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_33 = ATgetFirst((ATermList) t);
              k_72 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_72;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = j_73;
              {
                ATerm g_33 = t;
                int h_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm i_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_33);
                    t = term_j_33;
                  }
                else
                  {
                    t = g_33;
                    if(match_cons(t, sym_cf_1))
                      {
                        k_73 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = k_73;
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm k_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_j_33;
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_33 = ATgetFirst((ATermList) t);
                  p_72 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_72;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = j_73;
                  {
                    ATerm m_33 = t;
                    int n_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm p_33 = ATgetArgument(t, 0);
                            ATerm r_33 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(n_33);
                        t = term_j_33;
                      }
                    else
                      {
                        t = m_33;
                        if(match_cons(t, sym_cf_1))
                          {
                            k_73 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = k_73;
                        {
                          ATerm s_33 = t;
                          int t_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_1))
                                {
                                  ATerm u_33 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(t_33);
                              t = term_j_33;
                            }
                          else
                            {
                              t = s_33;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm v_33 = ATgetArgument(t, 0);
                                  ATerm w_33 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = term_j_33;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_33 = ATgetFirst((ATermList) t);
                      r_72 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = r_72;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_33 = ATgetFirst((ATermList) t);
                      t_72 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = t_72;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_73;
                  if(match_cons(t, sym_cf_1))
                    {
                      k_73 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = k_73;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm z_33 = ATgetArgument(t, 0);
                      ATerm a_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_j_33;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_73;
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm d_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(c_34);
            t = term_e_34;
          }
        else
          {
            t = b_34;
            if(match_cons(t, sym_cf_1))
              {
                k_73 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_73;
            if(match_cons(t, sym_opt_1))
              {
                ATerm f_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_e_34;
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  static ATerm a_74 (ATerm t)
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_86(t);
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = SRTS_one(a_74, t);
      }
    return(t);
  }
  t = a_74(t);
  return(t);
}
static ATerm c_8 (ATerm d_21, ATerm c_21, ATerm t)
{
  ATerm f_74 = NULL,s_74 = NULL;
  t = d_21;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_74 = NULL,r_74 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm k_34 = ATgetArgument(t, 0);
            ATerm l_34 = ATgetArgument(t, 1);
            m_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_74;
        {
          static ATerm p_4 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((r_74 != NULL) && (r_74 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_74 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(p_4, t);
        }
        t = not_null(r_74);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = Constr1_0_0(t);
      }
  }
  s_74 = t;
  if(match_string(t, "sorts"))
    {
      t = term_e_18;
    }
  else
    {
      if(match_string(t, "imports"))
        {
          t = term_h_18;
        }
      else
        {
          if(match_string(t, "id"))
            {
              t = term_i_18;
            }
          else
            {
              if(match_string(t, "hiddens"))
                {
                  t = term_k_18;
                }
              else
                {
                  if(match_string(t, "exports"))
                    {
                      t = term_m_18;
                    }
                  else
                    {
                      if(match_string(t, "module"))
                        {
                          t = term_v_19;
                        }
                      else
                        {
                          t = s_74;
                        }
                    }
                }
            }
        }
    }
  f_74 = t;
  t = SSL_mkterm(f_74, c_21);
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      i_75 = ATgetArgument(t, 0);
      j_75 = ATgetArgument(t, 1);
      {
        ATerm m_34 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_75;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_75;
  {
    ATerm n_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm q_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_34);
        t = term_r_34;
      }
    else
      {
        t = n_34;
        {
          ATerm s_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm x_34 = ATgetArgument(t, 0);
                  ATerm y_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(w_34);
              t = term_r_34;
            }
          else
            {
              t = s_34;
              if(match_cons(t, sym_cf_1))
                {
                  k_75 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_75;
              {
                ATerm a_35 = t;
                int b_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm c_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(b_35);
                    t = term_r_34;
                  }
                else
                  {
                    t = a_35;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm d_35 = ATgetArgument(t, 0);
                        ATerm e_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_r_34;
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  z_76 = t;
  if(match_cons(t, sym_appl_2))
    {
      x_76 = ATgetArgument(t, 0);
      y_76 = ATgetArgument(t, 1);
      {
        ATerm g_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_40 = NULL,r_40 = NULL,w_40 = NULL,y_40 = NULL,x_17 = NULL;
            t = SSLgetAnnotations(z_76);
            n_40 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, x_76, y_76);
            x_17 = t;
            t = SSLsetAnnotations(x_17, n_40);
            r_40 = t;
            if(match_cons(t, sym_appl_2))
              {
                w_40 = ATgetArgument(t, 0);
                y_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm i_35 = t;
              int j_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_40;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  LocalPopChoice(j_35);
                }
              else
                {
                  t = i_35;
                  t = r_40;
                  t = c_8(w_40, y_40, t);
                }
            }
            LocalPopChoice(h_35);
          }
        else
          {
            t = g_35;
            t = z_76;
          }
      }
    }
  else
    {
      t = z_76;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(q_4, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL;
  o_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_77;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_77 = ATgetFirst((ATermList) t);
          q_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_41 = NULL,a_42 = NULL,b_42 = NULL,z_17 = NULL;
            t = SSLgetAnnotations(o_77);
            u_41 = t;
            t = p_77;
            t = v_98(t);
            a_42 = t;
            t = q_77;
            t = filter_1_0(v_98, t);
            b_42 = t;
            t = (ATerm) ATinsert(CheckATermList(b_42), a_42);
            z_17 = t;
            t = SSLsetAnnotations(z_17, u_41);
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
            t = q_77;
            t = filter_1_0(v_98, t);
          }
      }
    }
  return(t);
}
static ATerm a_83 (ATerm n_79, ATerm t)
{
  static ATerm c_83 (ATerm t)
  {
    ATerm o_79 = NULL,p_79 = NULL,r_79 = NULL,s_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
    o_79 = t;
    if(match_cons(t, sym_appl_2))
      {
        p_79 = ATgetArgument(t, 0);
        w_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_79;
    if(match_cons(t, sym_prod_3))
      {
        ATerm n_35 = ATgetArgument(t, 0);
        r_79 = ATgetArgument(t, 1);
        {
          ATerm p_35 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = r_79;
    if(match_cons(t, sym_cf_1))
      {
        s_79 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = s_79;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm q_35 = ATgetArgument(t, 0);
        ATerm r_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_79;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_79 = ATgetFirst((ATermList) t);
        y_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = y_79;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, x_79);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_79 = ATgetFirst((ATermList) t);
            a_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_80;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_80 = ATgetFirst((ATermList) t);
            c_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_80;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm m_80 = NULL,n_80 = NULL;
            t = x_79;
            t = c_83(t);
            m_80 = t;
            t = b_80;
            t = c_83(t);
            n_80 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_80), (ATerm) ATinsert(ATempty, z_79)), m_80);
            t = concat_0_0(t);
          }
        else
          {
            ATerm u_80 = NULL,v_80 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_80 = ATgetFirst((ATermList) t);
                e_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_80;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_80 = ATgetFirst((ATermList) t);
                g_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_79;
            t = c_83(t);
            u_80 = t;
            t = f_80;
            t = c_83(t);
            v_80 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_80), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_80), b_80), z_79)), u_80);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = n_79;
  t = c_83(t);
  return(t);
}
static ATerm b_83 (ATerm w_80, ATerm t)
{
  static ATerm k_83 (ATerm t)
  {
    ATerm x_80 = NULL,y_80 = NULL,a_81 = NULL,b_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL;
    x_80 = t;
    if(match_cons(t, sym_appl_2))
      {
        y_80 = ATgetArgument(t, 0);
        e_81 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = y_80;
    if(match_cons(t, sym_prod_3))
      {
        ATerm s_35 = ATgetArgument(t, 0);
        a_81 = ATgetArgument(t, 1);
        {
          ATerm t_35 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = a_81;
    if(match_cons(t, sym_cf_1))
      {
        b_81 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = b_81;
    if(match_cons(t, sym_iter_1))
      {
        ATerm v_35 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_81;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_81 = ATgetFirst((ATermList) t);
        g_81 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = g_81;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, f_81);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_81 = ATgetFirst((ATermList) t);
            i_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_81;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm p_81 = NULL,q_81 = NULL;
            t = f_81;
            t = k_83(t);
            p_81 = t;
            t = h_81;
            t = k_83(t);
            q_81 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, q_81), p_81);
            t = concat_0_0(t);
          }
        else
          {
            ATerm v_81 = NULL,w_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_81 = ATgetFirst((ATermList) t);
                k_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_81;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_81;
            t = k_83(t);
            v_81 = t;
            t = j_81;
            t = k_83(t);
            w_81 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_81), (ATerm) ATinsert(ATempty, h_81)), v_81);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = w_80;
  t = k_83(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL;
  z_81 = t;
  if(match_cons(t, sym_appl_2))
    {
      a_82 = ATgetArgument(t, 0);
      o_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_82;
  if(match_cons(t, sym_prod_3))
    {
      b_82 = ATgetArgument(t, 0);
      g_82 = ATgetArgument(t, 1);
      {
        ATerm x_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = g_82;
  if(match_cons(t, sym_cf_1))
    {
      h_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_82;
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm a_36 = ATgetArgument(t, 0);
            ATerm b_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_35);
        t = o_82;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_82 = ATgetFirst((ATermList) t);
            q_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_82;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_82;
            {
              ATerm c_36 = t;
              int d_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_83(z_81, t);
                  LocalPopChoice(d_36);
                }
              else
                {
                  t = c_36;
                  t = (ATerm) ATinsert(ATempty, p_82);
                }
            }
          }
        else
          {
            t = b_82;
            t = a_83(z_81, t);
          }
      }
    else
      {
        t = y_35;
        {
          ATerm e_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm g_36 = ATgetArgument(t, 0);
                  ATerm h_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(f_36);
              t = b_82;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_82;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_82 = ATgetFirst((ATermList) t);
                      f_82 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_82;
                  if(match_cons(t, sym_cf_1))
                    {
                      d_82 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = d_82;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm i_36 = ATgetArgument(t, 0);
                      ATerm k_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_82;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_82;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_82 = ATgetFirst((ATermList) t);
                      q_82 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_82;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_82;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = e_36;
              {
                ATerm l_36 = t;
                int n_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm p_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_36);
                    t = o_82;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        p_82 = ATgetFirst((ATermList) t);
                        q_82 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = q_82;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = b_82;
                        {
                          ATerm q_36 = t;
                          int u_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = b_83(z_81, t);
                              LocalPopChoice(u_36);
                            }
                          else
                            {
                              t = q_36;
                              t = (ATerm) ATinsert(ATempty, p_82);
                            }
                        }
                      }
                    else
                      {
                        t = b_82;
                        t = b_83(z_81, t);
                      }
                  }
                else
                  {
                    t = l_36;
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm v_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_82;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = o_82;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            c_82 = ATgetFirst((ATermList) t);
                            f_82 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = c_82;
                        if(match_cons(t, sym_cf_1))
                          {
                            d_82 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = d_82;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm x_36 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = f_82;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = o_82;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            p_82 = ATgetFirst((ATermList) t);
                            q_82 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = q_82;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = p_82;
                        t = FlatList_0_0(t);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_83 = ATgetFirst((ATermList) t);
      v_83 = (ATerm) ATgetNext((ATermList) t);
      t = v_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_83 = ATgetFirst((ATermList) t);
          t_83 = (ATerm) ATgetNext((ATermList) t);
          t = s_83;
          if(match_int(t, 34))
            {
              t = u_83;
              if(match_int(t, 92))
                {
                  ATerm a_37 = t;
                  int c_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_83 = NULL;
                      t = t_83;
                      t = De_Escape_0_0(t);
                      y_83 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_83), term_d_37);
                      LocalPopChoice(c_37);
                    }
                  else
                    {
                      t = a_37;
                      {
                        ATerm b_84 = NULL;
                        t = v_83;
                        t = De_Escape_0_0(t);
                        b_84 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_84), u_83);
                      }
                    }
                }
              else
                {
                  ATerm h_84 = NULL;
                  t = v_83;
                  t = De_Escape_0_0(t);
                  h_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_84), u_83);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = u_83;
                  if(match_int(t, 92))
                    {
                      ATerm e_37 = t;
                      int f_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_84 = NULL;
                          t = t_83;
                          t = De_Escape_0_0(t);
                          j_84 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_84), term_g_37);
                          LocalPopChoice(f_37);
                        }
                      else
                        {
                          t = e_37;
                          {
                            ATerm m_84 = NULL;
                            t = v_83;
                            t = De_Escape_0_0(t);
                            m_84 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_84), u_83);
                          }
                        }
                    }
                  else
                    {
                      ATerm p_84 = NULL;
                      t = v_83;
                      t = De_Escape_0_0(t);
                      p_84 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_84), u_83);
                    }
                }
              else
                {
                  ATerm s_84 = NULL;
                  t = v_83;
                  t = De_Escape_0_0(t);
                  s_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_84), u_83);
                }
            }
        }
      else
        {
          ATerm v_84 = NULL;
          t = v_83;
          t = De_Escape_0_0(t);
          v_84 = t;
          t = (ATerm) ATinsert(CheckATermList(v_84), u_83);
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
  ATerm f_85 = NULL,g_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL;
  g_85 = t;
  t = SSL_explode_string(g_85);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_85 = ATgetFirst((ATermList) t);
      m_85 = (ATerm) ATgetNext((ATermList) t);
      t = m_85;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_85 = ATgetFirst((ATermList) t);
          k_85 = (ATerm) ATgetNext((ATermList) t);
          t = j_85;
          if(match_int(t, 34))
            {
              t = l_85;
              if(match_int(t, 92))
                {
                  ATerm h_37 = t;
                  int i_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_85 = NULL;
                      t = k_85;
                      t = De_Escape_0_0(t);
                      p_85 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_85), term_d_37);
                      LocalPopChoice(i_37);
                    }
                  else
                    {
                      t = h_37;
                      {
                        ATerm s_85 = NULL;
                        t = m_85;
                        t = De_Escape_0_0(t);
                        s_85 = t;
                        t = (ATerm) ATinsert(CheckATermList(s_85), l_85);
                      }
                    }
                }
              else
                {
                  ATerm v_85 = NULL;
                  t = m_85;
                  t = De_Escape_0_0(t);
                  v_85 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_85), l_85);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = l_85;
                  if(match_int(t, 92))
                    {
                      ATerm k_37 = t;
                      int l_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_85 = NULL;
                          t = k_85;
                          t = De_Escape_0_0(t);
                          x_85 = t;
                          t = (ATerm) ATinsert(CheckATermList(x_85), term_g_37);
                          LocalPopChoice(l_37);
                        }
                      else
                        {
                          t = k_37;
                          {
                            ATerm a_86 = NULL;
                            t = m_85;
                            t = De_Escape_0_0(t);
                            a_86 = t;
                            t = (ATerm) ATinsert(CheckATermList(a_86), l_85);
                          }
                        }
                    }
                  else
                    {
                      ATerm d_86 = NULL;
                      t = m_85;
                      t = De_Escape_0_0(t);
                      d_86 = t;
                      t = (ATerm) ATinsert(CheckATermList(d_86), l_85);
                    }
                }
              else
                {
                  ATerm i_86 = NULL;
                  t = m_85;
                  t = De_Escape_0_0(t);
                  i_86 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_86), l_85);
                }
            }
        }
      else
        {
          ATerm l_86 = NULL;
          t = m_85;
          t = De_Escape_0_0(t);
          l_86 = t;
          t = (ATerm) ATinsert(CheckATermList(l_86), l_85);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  f_85 = t;
  t = SSL_implode_string(f_85);
  return(t);
}
ATerm at_last_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  static ATerm j_87 (ATerm t)
  {
    ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL;
    g_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_87 = ATgetFirst((ATermList) t);
        i_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_37 = t;
      int v_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_42 = NULL,b_18 = NULL;
          t = SSLgetAnnotations(g_87);
          u_42 = t;
          t = i_87;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(i_87), h_87);
          b_18 = t;
          t = SSLsetAnnotations(b_18, u_42);
          t = p_92(t);
          LocalPopChoice(v_37);
        }
      else
        {
          t = u_37;
          {
            ATerm n_43 = NULL,q_43 = NULL,c_18 = NULL;
            t = SSLgetAnnotations(g_87);
            n_43 = t;
            t = i_87;
            t = j_87(t);
            q_43 = t;
            t = (ATerm) ATinsert(CheckATermList(q_43), h_87);
            c_18 = t;
            t = SSLsetAnnotations(c_18, n_43);
          }
        }
    }
    return(t);
  }
  t = j_87(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_37 = ATgetFirst((ATermList) t);
      if(((ATgetType(w_37) != AT_INT) || (ATgetInt((ATermInt) w_37) != 34)))
        _fail(t);
      {
        ATerm x_37 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(x_37) != AT_LIST) || !(ATisEmpty(x_37))))
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
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  q_87 = t;
  t = SSL_explode_string(q_87);
  m_87 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_87 = ATgetFirst((ATermList) t);
      {
        ATerm z_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_87;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = m_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_38 = ATgetFirst((ATermList) t);
      o_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_87;
  t = at_last_1_0(r_4, t);
  n_87 = t;
  t = SSL_implode_string(n_87);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_b_38);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_38);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_38);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL;
  l_88 = t;
  if(match_cons(t, sym_cf_1))
    {
      j_88 = ATgetArgument(t, 0);
      {
        ATerm n_88 = NULL;
        t = j_88;
        t = PpSym_0_0(t);
        n_88 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_38)), n_88), (ATerm) ATinsert(ATempty, term_e_38));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          j_88 = ATgetArgument(t, 0);
          {
            ATerm p_88 = NULL;
            t = j_88;
            t = PpSym_0_0(t);
            p_88 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_38)), p_88), (ATerm) ATinsert(ATempty, term_e_38));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_h_38);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  j_88 = ATgetArgument(t, 0);
                  k_88 = ATgetArgument(t, 1);
                  {
                    ATerm s_88 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(k_88), j_88);
                    t = map_1_0(PpSym_0_0, t);
                    s_88 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_38)), s_88), (ATerm) ATinsert(ATempty, term_j_38));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      j_88 = ATgetArgument(t, 0);
                      t = j_88;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(s_4, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          j_88 = ATgetArgument(t, 0);
                          t = j_88;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(t_4, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              j_88 = ATgetArgument(t, 0);
                              t = j_88;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(u_4, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  j_88 = ATgetArgument(t, 0);
                                  k_88 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_88 = NULL,z_88 = NULL;
                                    t = j_88;
                                    t = PpSym_0_0(t);
                                    y_88 = t;
                                    t = k_88;
                                    t = PpSym_0_0(t);
                                    z_88 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_38)), z_88), y_88), (ATerm) ATinsert(ATempty, term_m_38));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      j_88 = ATgetArgument(t, 0);
                                      k_88 = ATgetArgument(t, 1);
                                      {
                                        ATerm c_89 = NULL,d_89 = NULL;
                                        t = j_88;
                                        t = PpSym_0_0(t);
                                        c_89 = t;
                                        t = k_88;
                                        t = PpSym_0_0(t);
                                        d_89 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_38)), d_89), c_89), (ATerm) ATinsert(ATempty, term_m_38));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm p_38 = t;
                                      int s_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              j_88 = ATgetArgument(t, 0);
                                              {
                                                ATerm t_38 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(s_38);
                                          {
                                            ATerm f_89 = NULL;
                                            t = j_88;
                                            t = PpSym_0_0(t);
                                            f_89 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_38)), f_89);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = p_38;
                                          {
                                            ATerm v_38 = t;
                                            int w_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    j_88 = ATgetArgument(t, 0);
                                                    k_88 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_38 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(w_38);
                                                {
                                                  ATerm j_89 = NULL,k_89 = NULL;
                                                  t = j_88;
                                                  t = PpSym_0_0(t);
                                                  j_89 = t;
                                                  t = k_88;
                                                  t = PpSym_0_0(t);
                                                  k_89 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_38)), k_89), j_89);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = v_38;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    j_88 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_89 = NULL;
                                                      t = j_88;
                                                      t = PpSym_0_0(t);
                                                      m_89 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, m_89), (ATerm) ATinsert(ATempty, term_y_38));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        j_88 = ATgetArgument(t, 0);
                                                        k_88 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_89 = NULL,q_89 = NULL;
                                                          t = j_88;
                                                          t = PpSym_0_0(t);
                                                          p_89 = t;
                                                          t = k_88;
                                                          t = PpSym_0_0(t);
                                                          q_89 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_89), (ATerm) ATinsert(ATempty, term_z_38)), p_89);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            j_88 = ATgetArgument(t, 0);
                                                            k_88 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_89 = NULL,u_89 = NULL;
                                                              t = j_88;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              t_89 = t;
                                                              t = k_88;
                                                              t = PpSym_0_0(t);
                                                              u_89 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_89), (ATerm) ATinsert(ATempty, term_a_39)), t_89);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                j_88 = ATgetArgument(t, 0);
                                                                k_88 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm x_89 = NULL,y_89 = NULL;
                                                                  t = j_88;
                                                                  t = PpSym_0_0(t);
                                                                  x_89 = t;
                                                                  t = k_88;
                                                                  t = PpSym_0_0(t);
                                                                  y_89 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_89), (ATerm) ATinsert(ATempty, term_b_39)), x_89);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    j_88 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm a_90 = NULL;
                                                                      t = j_88;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      a_90 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(a_90), term_c_39);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        j_88 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, j_88);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            j_88 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm g_44 = NULL;
                                                                              t = j_88;
                                                                              {
                                                                                ATerm d_39 = t;
                                                                                int e_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(e_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_39;
                                                                                  }
                                                                              }
                                                                              g_44 = t;
                                                                              t = (ATerm) ATinsert(ATempty, g_44);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm f_39 = t;
                                                                            int g_39 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    j_88 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm h_39 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(g_39);
                                                                                {
                                                                                  ATerm x_44 = NULL;
                                                                                  t = j_88;
                                                                                  {
                                                                                    ATerm i_39 = t;
                                                                                    int j_39 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(j_39);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_39;
                                                                                      }
                                                                                  }
                                                                                  x_44 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, x_44);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = f_39;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_k_39);
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
static ATerm c_92 (ATerm p_90, ATerm q_90, ATerm r_90, ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL;
  t = p_90;
  if(match_cons(t, sym_cf_1))
    {
      w_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_90;
  {
    ATerm m_39 = t;
    if((PushChoice() == 0))
      {
        ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL,f_18 = NULL;
        a_91 = t;
        if(match_cons(t, sym_sort_1))
          {
            z_90 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_91);
        y_90 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, z_90);
        f_18 = t;
        t = SSLsetAnnotations(f_18, y_90);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_39;
      }
  }
  t = PpSym_0_0(t);
  v_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_39)), v_90), (ATerm) ATinsert(ATempty, term_n_39));
  t = concat_0_0(t);
  x_90 = t;
  t = SSL_concat_strings(x_90);
  u_90 = t;
  t = SSL_mkterm(u_90, q_90);
  return(t);
}
static ATerm d_92 (ATerm b_91, ATerm c_91, ATerm e_91, ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,n_91 = NULL,g_18 = NULL;
  t = b_91;
  if(match_cons(t, sym_cf_1))
    {
      j_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_91;
  if(match_cons(t, sym_sort_1))
    {
      n_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_91);
  l_91 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, n_91);
  g_18 = t;
  t = SSLsetAnnotations(g_18, l_91);
  t = PpSym_0_0(t);
  k_91 = t;
  t = SSL_concat_strings(k_91);
  i_91 = t;
  t = SSL_mkterm(i_91, c_91);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,t_91 = NULL,u_91 = NULL,w_91 = NULL,x_91 = NULL,a_92 = NULL;
  q_91 = t;
  if(match_cons(t, sym_appl_2))
    {
      r_91 = ATgetArgument(t, 0);
      w_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_91;
  if(match_cons(t, sym_prod_3))
    {
      ATerm o_39 = ATgetArgument(t, 0);
      t_91 = ATgetArgument(t, 1);
      {
        ATerm p_39 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = w_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_91 = ATgetFirst((ATermList) t);
      a_92 = (ATerm) ATgetNext((ATermList) t);
      t = a_92;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = t_91;
          if(match_cons(t, sym_sort_1))
            {
              u_91 = ATgetArgument(t, 0);
              t = u_91;
              if(match_string(t, "<START>"))
                {
                  ATerm r_39 = t;
                  int s_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = c_92(t_91, w_91, q_91, t);
                      LocalPopChoice(s_39);
                    }
                  else
                    {
                      t = r_39;
                      {
                        ATerm v_39 = t;
                        int w_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = d_92(t_91, w_91, q_91, t);
                            LocalPopChoice(w_39);
                          }
                        else
                          {
                            t = v_39;
                            t = x_91;
                          }
                      }
                    }
                }
              else
                {
                  ATerm x_39 = t;
                  int y_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = c_92(t_91, w_91, q_91, t);
                      LocalPopChoice(y_39);
                    }
                  else
                    {
                      t = x_39;
                      t = d_92(t_91, w_91, q_91, t);
                    }
                }
            }
          else
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_92(t_91, w_91, q_91, t);
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  t = d_92(t_91, w_91, q_91, t);
                }
            }
        }
      else
        {
          t = t_91;
          {
            ATerm b_40 = t;
            int c_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_92(t_91, w_91, q_91, t);
                LocalPopChoice(c_40);
              }
            else
              {
                t = b_40;
                t = d_92(t_91, w_91, q_91, t);
              }
          }
        }
    }
  else
    {
      t = t_91;
      {
        ATerm d_40 = t;
        int e_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_92(t_91, w_91, q_91, t);
            LocalPopChoice(e_40);
          }
        else
          {
            t = d_40;
            t = d_92(t_91, w_91, q_91, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t)
{
  static ATerm g_92 (ATerm t)
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_84(t);
        t = g_92(t);
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = d_84(t);
      }
    return(t);
  }
  t = g_92(t);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL;
  u_92 = t;
  if(match_cons(t, sym_appl_2))
    {
      v_92 = ATgetArgument(t, 0);
      b_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_92;
  if(match_cons(t, sym_prod_3))
    {
      ATerm h_40 = ATgetArgument(t, 0);
      x_92 = ATgetArgument(t, 1);
      {
        ATerm i_40 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = x_92;
  if(match_cons(t, sym_cf_1))
    {
      y_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_92;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(b_93);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          z_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_92;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = b_93;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_j_40;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_93 = ATgetFirst((ATermList) t);
              d_93 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_93;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, c_93));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  static ATerm t_93 (ATerm t)
  {
    ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
    s_93 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_93 = ATgetFirst((ATermList) t);
        r_93 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_45 = NULL,z_45 = NULL,j_18 = NULL;
          t = SSLgetAnnotations(s_93);
          w_45 = t;
          t = r_93;
          t = t_93(t);
          z_45 = t;
          t = (ATerm) ATinsert(CheckATermList(z_45), q_93);
          j_18 = t;
          t = SSLsetAnnotations(j_18, w_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_93;
        t = e_92(t);
      }
    return(t);
  }
  t = t_93(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL;
  w_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_93;
    }
  else
    {
      static ATerm v_4 (ATerm t)
      {
        t = not_null(y_93);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_93 = ATgetFirst((ATermList) t);
          if(((y_93 != NULL) && (y_93 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_93;
      t = at_end_1_0(v_4, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm e_94 = NULL;
  static ATerm v_94 (ATerm t)
  {
    ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
    s_94 = t;
    if(match_cons(t, sym_appl_2))
      {
        q_94 = ATgetArgument(t, 0);
        r_94 = ATgetArgument(t, 1);
        {
          ATerm k_40 = t;
          int l_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_46 = NULL,j_46 = NULL,m_46 = NULL,l_18 = NULL;
              t = SSLgetAnnotations(s_94);
              j_46 = t;
              t = r_94;
              t = map_1_0(v_94, t);
              m_46 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, q_94, m_46);
              l_18 = t;
              t = SSLsetAnnotations(l_18, j_46);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm m_40 = ATgetArgument(t, 0);
                  i_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_46;
              t = concat_0_0(t);
              LocalPopChoice(l_40);
            }
          else
            {
              t = k_40;
              t = (ATerm) ATinsert(ATempty, s_94);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, s_94);
      }
    return(t);
  }
  t = v_94(t);
  e_94 = t;
  t = SSL_implode_string(e_94);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm n_95 = NULL,p_95 = NULL,q_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL;
  t_95 = t;
  if(match_cons(t, sym_appl_2))
    {
      u_95 = ATgetArgument(t, 0);
      {
        ATerm o_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_95;
  if(match_cons(t, sym_prod_3))
    {
      v_95 = ATgetArgument(t, 0);
      w_95 = ATgetArgument(t, 1);
      {
        ATerm p_40 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = w_95;
  {
    ATerm q_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm t_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_40);
        t = v_95;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_95 = ATgetFirst((ATermList) t);
            p_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_95;
        if(match_cons(t, sym_lex_1))
          {
            ATerm u_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_95;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_95;
        t = yield_0_0(t);
      }
    else
      {
        t = q_40;
        {
          ATerm v_40 = t;
          int x_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm z_40 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(x_40);
              t = t_95;
              t = yield_0_0(t);
            }
          else
            {
              t = v_40;
              {
                ATerm e_41 = t;
                int f_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm g_41 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(f_41);
                    {
                      ATerm a_96 = NULL;
                      t = t_95;
                      t = yield_0_0(t);
                      a_96 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, a_96);
                    }
                  }
                else
                  {
                    t = e_41;
                    if(match_cons(t, sym_varsym_1))
                      {
                        x_95 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_95;
                    if(match_cons(t, sym_cf_1))
                      {
                        q_95 = ATgetArgument(t, 0);
                        t = q_95;
                        {
                          ATerm h_41 = t;
                          int i_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm j_41 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(i_41);
                              t = v_95;
                              {
                                ATerm k_41 = t;
                                int l_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_96 = NULL;
                                    t = t_95;
                                    t = yield_0_0(t);
                                    b_96 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, b_96);
                                    LocalPopChoice(l_41);
                                  }
                                else
                                  {
                                    t = k_41;
                                    {
                                      ATerm c_96 = NULL;
                                      t = t_95;
                                      t = yield_0_0(t);
                                      c_96 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, c_96);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = h_41;
                              {
                                ATerm m_41 = t;
                                int n_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm o_41 = ATgetArgument(t, 0);
                                        ATerm p_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(n_41);
                                    t = v_95;
                                    {
                                      ATerm q_41 = t;
                                      int r_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_96 = NULL;
                                          t = t_95;
                                          t = yield_0_0(t);
                                          d_96 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, d_96);
                                          LocalPopChoice(r_41);
                                        }
                                      else
                                        {
                                          t = q_41;
                                          {
                                            ATerm e_96 = NULL;
                                            t = t_95;
                                            t = yield_0_0(t);
                                            e_96 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, e_96);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = m_41;
                                    {
                                      ATerm s_41 = t;
                                      int t_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm v_41 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(t_41);
                                          t = v_95;
                                          {
                                            ATerm w_41 = t;
                                            int z_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm f_96 = NULL;
                                                t = t_95;
                                                t = yield_0_0(t);
                                                f_96 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, f_96);
                                                LocalPopChoice(z_41);
                                              }
                                            else
                                              {
                                                t = w_41;
                                                {
                                                  ATerm g_96 = NULL;
                                                  t = t_95;
                                                  t = yield_0_0(t);
                                                  g_96 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, g_96);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = s_41;
                                          {
                                            ATerm d_42 = t;
                                            int h_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm i_42 = ATgetArgument(t, 0);
                                                    ATerm j_42 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(h_42);
                                                t = v_95;
                                                {
                                                  ATerm l_42 = t;
                                                  int m_42 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_96 = NULL;
                                                      t = t_95;
                                                      t = yield_0_0(t);
                                                      h_96 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, h_96);
                                                      LocalPopChoice(m_42);
                                                    }
                                                  else
                                                    {
                                                      t = l_42;
                                                      {
                                                        ATerm i_96 = NULL;
                                                        t = t_95;
                                                        t = yield_0_0(t);
                                                        i_96 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, i_96);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = d_42;
                                                {
                                                  ATerm j_96 = NULL;
                                                  t = t_95;
                                                  t = yield_0_0(t);
                                                  j_96 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, j_96);
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
                        ATerm k_96 = NULL;
                        t = t_95;
                        t = yield_0_0(t);
                        k_96 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, k_96);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  t = h_85(t);
  {
    static ATerm w_4 (ATerm t)
    {
      t = downup2_2_0(h_85, i_85, t);
      return(t);
    }
    t = SRTS_all(w_4, t);
  }
  t = i_85(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if(!(match_cons(t, sym_FlatLex_0)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLayout_0)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  f_70 = t;
  if(match_cons(t, sym_appl_2))
    {
      d_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
      {
        ATerm r_42 = t;
        int s_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_75 = NULL,r_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,d_19 = NULL,v_18 = NULL;
            t = SSLgetAnnotations(f_70);
            o_75 = t;
            t = d_70;
            if(match_cons(t, sym_prod_3))
              {
                v_75 = ATgetArgument(t, 0);
                w_75 = ATgetArgument(t, 1);
                x_75 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_70);
            u_75 = t;
            t = v_75;
            t = filter_1_0(n_5, t);
            y_75 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, y_75, w_75, x_75);
            v_18 = t;
            t = SSLsetAnnotations(v_18, u_75);
            z_75 = t;
            t = e_70;
            t = filter_1_0(o_5, t);
            r_75 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, z_75, r_75);
            d_19 = t;
            t = SSLsetAnnotations(d_19, o_75);
            LocalPopChoice(s_42);
          }
        else
          {
            t = r_42;
            t = f_70;
          }
      }
    }
  else
    {
      t = f_70;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_42 = t;
  if((PushChoice() == 0))
    {
      ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL;
      q_78 = t;
      if(match_cons(t, sym_appl_2))
        {
          r_78 = ATgetArgument(t, 0);
          p_78 = ATgetArgument(t, 1);
          {
            ATerm m_86 = NULL,v_86 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,r_18 = NULL,q_18 = NULL,p_18 = NULL,o_18 = NULL;
            t = SSLgetAnnotations(q_78);
            m_86 = t;
            t = r_78;
            if(match_cons(t, sym_prod_3))
              {
                r_87 = ATgetArgument(t, 0);
                s_87 = ATgetArgument(t, 1);
                t_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_78);
            v_86 = t;
            t = s_87;
            if(match_cons(t, sym_cf_1))
              {
                f_90 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_87);
            v_87 = t;
            t = f_90;
            if(match_cons(t, sym_opt_1))
              {
                i_90 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_90);
            h_90 = t;
            t = i_90;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, i_90);
            o_18 = t;
            t = SSLsetAnnotations(o_18, h_90);
            j_90 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, j_90);
            p_18 = t;
            t = SSLsetAnnotations(p_18, v_87);
            g_90 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, r_87, g_90, t_87);
            q_18 = t;
            t = SSLsetAnnotations(q_18, v_86);
            u_87 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, u_87, p_78);
            r_18 = t;
            t = SSLsetAnnotations(r_18, m_86);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              r_78 = ATgetArgument(t, 0);
              {
                ATerm p_91 = NULL,f_92 = NULL,h_92 = NULL,i_92 = NULL,t_18 = NULL,s_18 = NULL;
                t = SSLgetAnnotations(q_78);
                p_91 = t;
                t = r_78;
                if(match_cons(t, sym_opt_1))
                  {
                    h_92 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_78);
                f_92 = t;
                t = h_92;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, h_92);
                s_18 = t;
                t = SSLsetAnnotations(s_18, f_92);
                i_92 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, i_92);
                t_18 = t;
                t = SSLsetAnnotations(t_18, p_91);
              }
            }
          else
            {
              ATerm o_92 = NULL,u_18 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  r_78 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_78);
              o_92 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, r_78);
              u_18 = t;
              t = SSLsetAnnotations(u_18, o_92);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_42;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm v_42 = t;
  if((PushChoice() == 0))
    {
      ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL;
      n_83 = t;
      if(match_cons(t, sym_appl_2))
        {
          o_83 = ATgetArgument(t, 0);
          m_83 = ATgetArgument(t, 1);
          {
            ATerm y_94 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,z_18 = NULL,y_18 = NULL,x_18 = NULL,w_18 = NULL;
            t = SSLgetAnnotations(n_83);
            y_94 = t;
            t = o_83;
            if(match_cons(t, sym_prod_3))
              {
                c_95 = ATgetArgument(t, 0);
                d_95 = ATgetArgument(t, 1);
                e_95 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_83);
            b_95 = t;
            t = d_95;
            if(match_cons(t, sym_cf_1))
              {
                h_95 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_95);
            g_95 = t;
            t = h_95;
            if(match_cons(t, sym_opt_1))
              {
                k_95 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_95);
            j_95 = t;
            t = k_95;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, k_95);
            w_18 = t;
            t = SSLsetAnnotations(w_18, j_95);
            l_95 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, l_95);
            x_18 = t;
            t = SSLsetAnnotations(x_18, g_95);
            i_95 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, c_95, i_95, e_95);
            y_18 = t;
            t = SSLsetAnnotations(y_18, b_95);
            f_95 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, f_95, m_83);
            z_18 = t;
            t = SSLsetAnnotations(z_18, y_94);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              o_83 = ATgetArgument(t, 0);
              {
                ATerm q_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,b_19 = NULL,a_19 = NULL;
                t = SSLgetAnnotations(n_83);
                q_96 = t;
                t = o_83;
                if(match_cons(t, sym_opt_1))
                  {
                    t_96 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_83);
                s_96 = t;
                t = t_96;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, t_96);
                a_19 = t;
                t = SSLsetAnnotations(a_19, s_96);
                u_96 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, u_96);
                b_19 = t;
                t = SSLsetAnnotations(b_19, q_96);
              }
            }
          else
            {
              ATerm a_97 = NULL,c_19 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  o_83 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_83);
              a_97 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, o_83);
              c_19 = t;
              t = SSLsetAnnotations(c_19, a_97);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_42;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = repeat_2_0(ApplToSort_0_0, _id, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm x_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      LocalPopChoice(z_42);
    }
  else
    {
      t = x_42;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveLit_0)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(a_6, t);
      LocalPopChoice(b_43);
    }
  else
    {
      t = a_43;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm c_43 = t;
  if((PushChoice() == 0))
    {
      ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL,h_19 = NULL;
      e_112 = t;
      if(match_cons(t, sym_lit_1))
        {
          d_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_112);
      c_112 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, d_112);
      h_19 = t;
      t = SSLsetAnnotations(h_19, c_112);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_43;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if(!(match_cons(t, sym_ReplaceAppl_0)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(!(match_cons(t, sym_FlatInj_0)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_122 = NULL,g_122 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          f_122 = ATgetArgument(t, 0);
          {
            ATerm f_43 = ATgetArgument(t, 1);
            if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
              {
                g_122 = ATgetFirst((ATermList) f_43);
                {
                  ATerm g_43 = (ATerm) ATgetNext((ATermList) f_43);
                  if(((ATgetType(g_43) != AT_LIST) || !(ATisEmpty(g_43))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = f_122;
      t = injection_0_0(t);
      t = g_122;
      LocalPopChoice(e_43);
    }
  else
    {
      t = d_43;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_FlatAltOpt_0)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm h_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      LocalPopChoice(i_43);
    }
  else
    {
      t = h_43;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(!(match_cons(t, sym_RemoveSeq_0)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      LocalPopChoice(l_43);
    }
  else
    {
      t = k_43;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_RemovePT_0)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Concrete_0)))
    _fail(t);
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm l_98 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL,z_105 = NULL,a_106 = NULL,b_106 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,x_102 = NULL,y_102 = NULL,z_102 = NULL,y_98 = NULL,z_98 = NULL;
  l_98 = t;
  if(match_cons(t, sym__2))
    {
      y_98 = ATgetArgument(t, 0);
      z_98 = ATgetArgument(t, 1);
      {
        ATerm m_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_46 = NULL,x_46 = NULL,y_46 = NULL,n_18 = NULL;
            t = SSLgetAnnotations(l_98);
            u_46 = t;
            t = y_98;
            t = fetch_1_0(x_4, t);
            x_46 = t;
            t = z_98;
            t = downup2_2_0(y_4, a_5, t);
            y_46 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_46, y_46);
            n_18 = t;
            t = SSLsetAnnotations(n_18, u_46);
            LocalPopChoice(o_43);
          }
        else
          {
            t = m_43;
            t = l_98;
          }
      }
    }
  else
    {
      t = l_98;
    }
  z_102 = t;
  if(match_cons(t, sym__2))
    {
      x_102 = ATgetArgument(t, 0);
      y_102 = ATgetArgument(t, 1);
      {
        ATerm p_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_63 = NULL,c_64 = NULL,d_64 = NULL,e_19 = NULL;
            t = SSLgetAnnotations(z_102);
            z_63 = t;
            t = x_102;
            t = fetch_1_0(k_5, t);
            c_64 = t;
            t = y_102;
            t = topdown_1_0(l_5, t);
            d_64 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
            e_19 = t;
            t = SSLsetAnnotations(e_19, z_63);
            LocalPopChoice(r_43);
          }
        else
          {
            t = p_43;
            t = z_102;
          }
      }
    }
  else
    {
      t = z_102;
    }
  o_103 = t;
  if(match_cons(t, sym__2))
    {
      m_103 = ATgetArgument(t, 0);
      n_103 = ATgetArgument(t, 1);
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_97 = NULL,l_97 = NULL,m_97 = NULL,f_19 = NULL;
            t = SSLgetAnnotations(o_103);
            i_97 = t;
            t = m_103;
            t = fetch_1_0(ApplToSort_0_0, t);
            l_97 = t;
            t = n_103;
            t = topdown_1_0(q_5, t);
            m_97 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_97, m_97);
            f_19 = t;
            t = SSLsetAnnotations(f_19, i_97);
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            t = o_103;
          }
      }
    }
  else
    {
      t = o_103;
    }
  e_104 = t;
  if(match_cons(t, sym__2))
    {
      c_104 = ATgetArgument(t, 0);
      d_104 = ATgetArgument(t, 1);
      {
        ATerm u_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_97 = NULL,a_98 = NULL,b_98 = NULL,g_19 = NULL;
            t = SSLgetAnnotations(e_104);
            x_97 = t;
            t = c_104;
            t = fetch_1_0(FlatList_0_0, t);
            a_98 = t;
            t = d_104;
            t = topdown_1_0(t_5, t);
            b_98 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_98, b_98);
            g_19 = t;
            t = SSLsetAnnotations(g_19, x_97);
            LocalPopChoice(x_43);
          }
        else
          {
            t = u_43;
            t = e_104;
          }
      }
    }
  else
    {
      t = e_104;
    }
  x_104 = t;
  if(match_cons(t, sym__2))
    {
      v_104 = ATgetArgument(t, 0);
      w_104 = ATgetArgument(t, 1);
      {
        ATerm y_43 = t;
        int z_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_109 = NULL,k_111 = NULL,l_111 = NULL,i_19 = NULL;
            t = SSLgetAnnotations(x_104);
            o_109 = t;
            t = v_104;
            t = fetch_1_0(w_5, t);
            k_111 = t;
            t = w_104;
            t = topdown_1_0(y_5, t);
            l_111 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_111, l_111);
            i_19 = t;
            t = SSLsetAnnotations(i_19, o_109);
            LocalPopChoice(z_43);
          }
        else
          {
            t = y_43;
            t = x_104;
          }
      }
    }
  else
    {
      t = x_104;
    }
  l_105 = t;
  if(match_cons(t, sym__2))
    {
      j_105 = ATgetArgument(t, 0);
      k_105 = ATgetArgument(t, 1);
      {
        ATerm a_44 = t;
        int b_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_115 = NULL,g_116 = NULL,l_116 = NULL,j_19 = NULL;
            t = SSLgetAnnotations(l_105);
            f_115 = t;
            t = j_105;
            t = fetch_1_0(b_6, t);
            g_116 = t;
            t = k_105;
            t = replace_appl_0_0(t);
            l_116 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_116, l_116);
            j_19 = t;
            t = SSLsetAnnotations(j_19, f_115);
            LocalPopChoice(b_44);
          }
        else
          {
            t = a_44;
            t = l_105;
          }
      }
    }
  else
    {
      t = l_105;
    }
  b_106 = t;
  if(match_cons(t, sym__2))
    {
      z_105 = ATgetArgument(t, 0);
      a_106 = ATgetArgument(t, 1);
      {
        ATerm c_44 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_119 = NULL,n_120 = NULL,v_120 = NULL,l_19 = NULL;
            t = SSLgetAnnotations(b_106);
            s_119 = t;
            t = z_105;
            t = fetch_1_0(c_6, t);
            n_120 = t;
            t = a_106;
            t = bottomup_1_0(e_6, t);
            v_120 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_120, v_120);
            l_19 = t;
            t = SSLsetAnnotations(l_19, s_119);
            LocalPopChoice(d_44);
          }
        else
          {
            t = c_44;
            t = b_106;
          }
      }
    }
  else
    {
      t = b_106;
    }
  t_106 = t;
  if(match_cons(t, sym__2))
    {
      r_106 = ATgetArgument(t, 0);
      s_106 = ATgetArgument(t, 1);
      {
        ATerm e_44 = t;
        int f_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_124 = NULL,r_125 = NULL,s_125 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(t_106);
            x_124 = t;
            t = r_106;
            t = fetch_1_0(j_6, t);
            r_125 = t;
            t = s_106;
            t = topdown_1_0(r_6, t);
            s_125 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_125, s_125);
            n_19 = t;
            t = SSLsetAnnotations(n_19, x_124);
            LocalPopChoice(f_44);
          }
        else
          {
            t = e_44;
            t = t_106;
          }
      }
    }
  else
    {
      t = t_106;
    }
  j_107 = t;
  if(match_cons(t, sym__2))
    {
      h_107 = ATgetArgument(t, 0);
      i_107 = ATgetArgument(t, 1);
      {
        ATerm h_44 = t;
        int i_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_127 = NULL,t_127 = NULL,u_127 = NULL,o_19 = NULL;
            t = SSLgetAnnotations(j_107);
            q_127 = t;
            t = h_107;
            t = fetch_1_0(s_6, t);
            t_127 = t;
            t = i_107;
            t = topdown_1_0(t_6, t);
            u_127 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_127, u_127);
            o_19 = t;
            t = SSLsetAnnotations(o_19, q_127);
            LocalPopChoice(i_44);
          }
        else
          {
            t = h_44;
            t = j_107;
          }
      }
    }
  else
    {
      t = j_107;
    }
  x_107 = t;
  if(match_cons(t, sym__2))
    {
      v_107 = ATgetArgument(t, 0);
      w_107 = ATgetArgument(t, 1);
      {
        ATerm j_44 = t;
        int k_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_128 = NULL,h_128 = NULL,i_128 = NULL,p_19 = NULL;
            t = SSLgetAnnotations(x_107);
            e_128 = t;
            t = v_107;
            t = fetch_1_0(v_6, t);
            h_128 = t;
            t = w_107;
            if(match_cons(t, sym_parsetree_2))
              {
                i_128 = ATgetArgument(t, 0);
                {
                  ATerm l_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, h_128, i_128);
            p_19 = t;
            t = SSLsetAnnotations(p_19, e_128);
            LocalPopChoice(k_44);
          }
        else
          {
            t = j_44;
            t = x_107;
          }
      }
    }
  else
    {
      t = x_107;
    }
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL,q_19 = NULL;
            if((l_98 != t))
              {
                _fail(t);
              }
            if(match_cons(t, sym__2))
              {
                b_108 = ATgetArgument(t, 0);
                c_108 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_98);
            a_108 = t;
            t = b_108;
            t = fetch_1_0(w_6, t);
            d_108 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_108, c_108);
            q_19 = t;
            t = SSLsetAnnotations(q_19, a_108);
            LocalPopChoice(p_44);
            {
              ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,r_19 = NULL;
              i_108 = t;
              if(match_cons(t, sym__2))
                {
                  f_108 = ATgetArgument(t, 0);
                  g_108 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_108);
              e_108 = t;
              t = g_108;
              t = implodeAsfix_1_0(_id, t);
              h_108 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_108, h_108);
              r_19 = t;
              t = SSLsetAnnotations(r_19, e_108);
            }
          }
        else
          {
            t = o_44;
            {
              ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,c_20 = NULL;
              o_108 = t;
              if(match_cons(t, sym__2))
                {
                  l_108 = ATgetArgument(t, 0);
                  m_108 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_108);
              k_108 = t;
              t = m_108;
              t = implodeAsfix_1_0(_fail, t);
              n_108 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_108, n_108);
              c_20 = t;
              t = SSLsetAnnotations(c_20, k_108);
            }
          }
        LocalPopChoice(n_44);
      }
    else
      {
        t = m_44;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm k_109 = NULL;
  t = SSL_fputc(a_41, b_41);
  k_109 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_109);
  return(t);
}
static ATerm o_8 (ATerm i_26, ATerm j_26, ATerm t)
{
  ATerm l_109 = NULL;
  t = SSL_write_term_to_stream_text(i_26, j_26);
  l_109 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_109);
  return(t);
}
static ATerm q_8 (ATerm f_91 (ATerm), ATerm y_217, ATerm m_26, ATerm t)
{
  ATerm m_109 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_217, term_q_44);
  t = t_8(t);
  m_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_109, m_26);
  t = f_91(t);
  t = fclose_0_0(t);
  t = m_26;
  return(t);
}
static ATerm p_8 (ATerm e_26, ATerm f_26, ATerm t)
{
  ATerm n_109 = NULL;
  t = SSL_write_term_to_stream_baf(e_26, f_26);
  n_109 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_109);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_44 = ATgetArgument(t, 0);
      if(match_cons(r_44, sym_Stream_1))
        {
          w_128 = ATgetArgument(r_44, 0);
        }
      else
        _fail(t);
      x_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8(w_128, x_128, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL,m_129 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_44 = ATgetArgument(t, 0);
      if(match_cons(s_44, sym_Stream_1))
        {
          l_129 = ATgetArgument(s_44, 0);
        }
      else
        _fail(t);
      m_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(l_129, m_129, t);
  i_129 = t;
  t = term_t_44;
  j_129 = t;
  t = i_129;
  if(match_cons(t, sym_Stream_1))
    {
      k_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_44, i_129);
  t = n_8(j_129, k_129, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL,v_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL,a_110 = NULL,b_110 = NULL,b_111 = NULL,c_111 = NULL,r_25 = NULL,q_25 = NULL;
  s_109 = t;
  if(match_cons(t, sym__2))
    {
      z_109 = ATgetArgument(t, 0);
      a_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_109);
  y_109 = t;
  t = z_109;
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_6 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_109 != NULL) && (r_109 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_109 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_6, t);
        LocalPopChoice(v_44);
      }
    else
      {
        t = u_44;
        t = term_w_44;
        r_109 = t;
      }
  }
  b_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_110, a_110);
  q_25 = t;
  t = SSLsetAnnotations(q_25, y_109);
  t = s_109;
  if(match_cons(t, sym__2))
    {
      u_109 = ATgetArgument(t, 0);
      v_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_109);
  t_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_109, (ATerm) ATmakeAppl(sym__2, not_null(r_109), v_109));
  r_25 = t;
  t = SSLsetAnnotations(r_25, t_109);
  x_109 = t;
  if(match_cons(t, sym__2))
    {
      b_111 = ATgetArgument(t, 0);
      c_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,y_25 = NULL;
        t = SSLgetAnnotations(x_109);
        p_128 = t;
        t = b_111;
        t = fetch_1_0(a_7, t);
        s_128 = t;
        t = c_111;
        if(match_cons(t, sym__2))
          {
            u_128 = ATgetArgument(t, 0);
            v_128 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_8(e_7, u_128, v_128, t);
        t_128 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_128, t_128);
        y_25 = t;
        t = SSLsetAnnotations(y_25, p_128);
        LocalPopChoice(z_44);
      }
    else
      {
        t = y_44;
        {
          ATerm c_129 = NULL,f_129 = NULL,g_129 = NULL,h_129 = NULL,g_27 = NULL;
          t = SSLgetAnnotations(x_109);
          c_129 = t;
          t = c_111;
          if(match_cons(t, sym__2))
            {
              g_129 = ATgetArgument(t, 0);
              h_129 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_8(f_7, g_129, h_129, t);
          f_129 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_111, f_129);
          g_27 = t;
          t = SSLsetAnnotations(g_27, c_129);
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
ATerm apply_strategy_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm f_111 = NULL,g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL;
  j_111 = t;
  t = dtime_0_0(t);
  t = j_111;
  t = u_112(t);
  i_111 = t;
  t = dtime_0_0(t);
  f_111 = t;
  t = i_111;
  if(match_cons(t, sym__2))
    {
      g_111 = ATgetArgument(t, 0);
      h_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_111), (ATerm) ATmakeAppl(sym_Runtime_1, f_111)), h_111);
  return(t);
}
static ATerm x_111 (ATerm r_111, ATerm t)
{
  t = SSL_fclose(r_111);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_111 = NULL,v_111 = NULL;
  v_111 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_111 = ATgetArgument(t, 0);
      {
        ATerm a_45 = t;
        int b_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_111);
            LocalPopChoice(b_45);
          }
        else
          {
            t = a_45;
            t = x_111(v_111, t);
          }
      }
    }
  else
    {
      t = x_111(v_111, t);
    }
  return(t);
}
static ATerm r_8 (ATerm k_26, ATerm t)
{
  t = SSL_read_term_from_stream(k_26);
  return(t);
}
static ATerm s_8 (ATerm c_41, ATerm d_41, ATerm t)
{
  ATerm y_111 = NULL;
  t = SSL_fopen(c_41, d_41);
  y_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_111);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_111 = NULL;
  t = SSL_stdin_stream();
  z_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_111);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_112 = NULL;
  t = SSL_stdout_stream();
  a_112 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_112);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_112 = NULL;
  t = SSL_stderr_stream();
  b_112 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_112);
  return(t);
}
static ATerm m_113 (ATerm h_112, ATerm t)
{
  ATerm i_112 = NULL;
  t = SSL_explode_term(h_112);
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_45 = ATgetArgument(t, 1);
        if(((ATgetType(d_45) == AT_LIST) && !(ATisEmpty(d_45))))
          {
            i_112 = ATgetFirst((ATermList) d_45);
            {
              ATerm e_45 = (ATerm) ATgetNext((ATermList) d_45);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_112;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_112;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_112;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_112;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_113 (ATerm l_112, ATerm m_112, ATerm n_112, ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,t_112 = NULL,o_27 = NULL;
  t = SSLgetAnnotations(n_112);
  q_112 = t;
  t = l_112;
  if(match_cons(t, sym_Path_1))
    {
      t_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_112, m_112);
  o_27 = t;
  t = SSLsetAnnotations(o_27, q_112);
  if(match_cons(t, sym__2))
    {
      o_112 = ATgetArgument(t, 0);
      p_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8(o_112, p_112, t);
  return(t);
}
static ATerm o_113 (ATerm w_112, ATerm x_112, ATerm y_112, ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,h_113 = NULL,p_27 = NULL;
  t = SSLgetAnnotations(y_112);
  b_113 = t;
  t = SSL_is_string(w_112);
  h_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_113, x_112);
  p_27 = t;
  t = SSLsetAnnotations(p_27, b_113);
  if(match_cons(t, sym__2))
    {
      z_112 = ATgetArgument(t, 0);
      a_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8(z_112, a_113, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
  j_113 = t;
  if(match_cons(t, sym__2))
    {
      k_113 = ATgetArgument(t, 0);
      l_113 = ATgetArgument(t, 1);
      {
        ATerm f_45 = t;
        int g_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_113(j_113, t);
            LocalPopChoice(g_45);
          }
        else
          {
            t = f_45;
            {
              ATerm h_45 = t;
              int i_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_113(k_113, l_113, j_113, t);
                  LocalPopChoice(i_45);
                }
              else
                {
                  t = h_45;
                  t = o_113(k_113, l_113, j_113, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_113(j_113, t);
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_j_45;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_113 = NULL,q_113 = NULL,r_113 = NULL;
  ATerm k_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_113 = NULL;
      t_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_113, term_p_45);
      t = t_8(t);
      LocalPopChoice(o_45);
    }
  else
    {
      t = k_45;
      t = debug_1_0(g_7, t);
      _fail(t);
    }
  q_113 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_8(r_113, t);
  p_113 = t;
  t = q_113;
  t = fclose_0_0(t);
  t = p_113;
  return(t);
}
ATerm fetch_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  static ATerm v_114 (ATerm t)
  {
    ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
    s_114 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_114 = ATgetFirst((ATermList) t);
        u_114 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_45 = t;
      int r_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_129 = NULL,b_130 = NULL,u_27 = NULL;
          t = SSLgetAnnotations(s_114);
          y_129 = t;
          t = t_114;
          t = y_91(t);
          b_130 = t;
          t = (ATerm) ATinsert(CheckATermList(u_114), b_130);
          u_27 = t;
          t = SSLsetAnnotations(u_27, y_129);
          LocalPopChoice(r_45);
        }
      else
        {
          t = q_45;
          {
            ATerm j_130 = NULL,m_130 = NULL,v_27 = NULL;
            t = SSLgetAnnotations(s_114);
            j_130 = t;
            t = u_114;
            t = v_114(t);
            m_130 = t;
            t = (ATerm) ATinsert(CheckATermList(m_130), t_114);
            v_27 = t;
            t = SSLsetAnnotations(v_27, j_130);
          }
        }
    }
    return(t);
  }
  t = v_114(t);
  return(t);
}
static ATerm m_8 (ATerm t_39, ATerm u_39, ATerm t)
{
  t = SSL_strcat(t_39, u_39);
  return(t);
}
ATerm debug_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  ATerm y_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL;
  y_114 = t;
  t = d_91(t);
  a_115 = t;
  t = term_m_11;
  b_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_114), a_115);
  c_115 = t;
  t = SSL_printnl(b_115, c_115);
  t = y_114;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(t_45);
    }
  else
    {
      t = s_45;
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_u_45;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_115 = NULL;
      j_115 = t;
      t = SSL_is_string(j_115);
      LocalPopChoice(x_45);
    }
  else
    {
      t = v_45;
      {
        ATerm y_45 = t;
        int a_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_7, t);
            LocalPopChoice(a_46);
          }
        else
          {
            t = y_45;
            {
              ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL;
              p_115 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_115 = ATgetArgument(t, 0);
                  t = q_115;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_115 = ATgetArgument(t, 0);
                      t = q_115;
                      {
                        ATerm b_46 = t;
                        int c_46 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(c_46);
                          }
                        else
                          {
                            t = b_46;
                            t = debug_1_0(o_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_115 = NULL,w_115 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_115 = ATgetArgument(t, 0);
                          r_115 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_115;
                      t = eval_config_0_0(t);
                      v_115 = t;
                      t = r_115;
                      t = eval_config_0_0(t);
                      w_115 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_115, w_115);
                      t = m_8(v_115, w_115, t);
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
  ATerm a_116 = NULL,b_116 = NULL;
  a_116 = t;
  t = term_d_46;
  b_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_46, a_116);
  t = w_8(b_116, a_116, t);
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_116 = NULL,d_116 = NULL;
        t = eval_config_0_0(t);
        c_116 = t;
        t = term_d_46;
        d_116 = t;
        t = SSL_table_put(d_116, a_116, c_116);
        t = c_116;
        LocalPopChoice(f_46);
      }
    else
      {
        t = e_46;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm h_116 = NULL;
  h_116 = t;
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_116 = NULL;
        t = term_k_46;
        t = get_config_0_0(t);
        j_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_116, term_l_46);
        t = geq_0_0(t);
        t = h_116;
        t = e_106(t);
        LocalPopChoice(h_46);
      }
    else
      {
        t = g_46;
        t = h_116;
      }
  }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm m_116 = NULL;
  m_116 = t;
  if(match_string(t, "-k"))
    {
      t = m_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_116;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
  n_116 = t;
  t = SSL_string_to_int(n_116);
  o_116 = t;
  t = term_n_46;
  p_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, o_116);
  t = z_8(p_116, o_116, t);
  t = n_116;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_o_46;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_7, u_7, v_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm r_116 = NULL;
  r_116 = t;
  if(match_string(t, "-S"))
    {
      t = r_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_116;
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm s_116 = NULL,t_116 = NULL;
  t = term_k_46;
  s_116 = t;
  t = term_p_46;
  t_116 = t;
  t = term_q_46;
  t = z_8(s_116, t_116, t);
  t = term_r_46;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL;
  u_116 = t;
  t = SSL_string_to_int(u_116);
  v_116 = t;
  t = term_k_46;
  w_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_46, v_116);
  t = z_8(w_116, v_116, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_116);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL;
  t = term_v_46;
  x_116 = t;
  t = term_l_11;
  y_116 = t;
  t = term_w_46;
  t = z_8(x_116, y_116, t);
  t = term_z_46;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_a_47;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_7, y_7, z_7, t);
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      {
        ATerm d_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_8, d_8, e_8, t);
            LocalPopChoice(e_47);
          }
        else
          {
            t = d_47;
            t = Option_3_0(f_8, g_8, h_8, t);
          }
      }
    }
  return(t);
}
static ATerm z_8 (ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm z_116 = NULL;
  t = term_d_46;
  z_116 = t;
  t = SSL_table_put(z_116, w_49, x_49);
  t = (ATerm) ATmakeAppl(sym__3, term_d_46, w_49, x_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL;
      t = term_l_11;
      t = e_0(t);
      e_117 = t;
      t = term_f_47;
      f_117 = t;
      t = term_g_47;
      g_117 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, e_117);
      t = x_8(f_117, g_117, e_117, t);
      _fail(t);
    }
  else
    {
      ATerm j_117 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_117 = ATgetFirst((ATermList) t);
          d_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_117;
      t = c_0(t);
      t = term_l_11;
      t = d_0(t);
      j_117 = t;
      t = (ATerm) ATinsert(CheckATermList(d_117), j_117);
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm l_117 = NULL;
  l_117 = t;
  if(match_string(t, "-o"))
    {
      t = l_117;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_117;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL;
  m_117 = t;
  t = term_h_47;
  n_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_47, m_117);
  t = z_8(n_117, m_117, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_117);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_i_47;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_8, y_8, a_9, t);
  return(t);
}
static ATerm x_8 (ATerm g_52, ATerm h_52, ATerm f_52, ATerm t)
{
  ATerm p_117 = NULL,q_117 = NULL,r_117 = NULL;
  p_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_47 = ATgetArgument(t, 0);
            ATerm m_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
        t = w_8(g_52, h_52, t);
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        t = (ATerm) ATempty;
      }
  }
  q_117 = t;
  t = (ATerm) ATinsert(CheckATermList(q_117), f_52);
  r_117 = t;
  t = SSL_table_put(g_52, h_52, r_117);
  t = p_117;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL;
      t = term_l_11;
      t = p_0(t);
      c_118 = t;
      t = term_f_47;
      d_118 = t;
      t = term_g_47;
      e_118 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, c_118);
      t = x_8(d_118, e_118, c_118, t);
      _fail(t);
    }
  else
    {
      ATerm i_118 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_117 = ATgetFirst((ATermList) t);
          z_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_117;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_118 = ATgetFirst((ATermList) t);
          b_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_117;
      t = n_0(t);
      t = a_118;
      t = o_0(t);
      i_118 = t;
      t = (ATerm) ATinsert(CheckATermList(b_118), i_118);
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm k_118 = NULL;
  k_118 = t;
  if(match_string(t, "-i"))
    {
      t = k_118;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_118;
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL;
  l_118 = t;
  t = term_n_47;
  m_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_47, l_118);
  t = z_8(m_118, l_118, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_118);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_o_47;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_9, d_9, e_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_11;
  t = whoami_0_0(t);
  o_118 = t;
  t = term_m_11;
  q_118 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_47), o_118);
  r_118 = t;
  t = SSL_printnl(q_118, r_118);
  t = term_p_11;
  p_118 = t;
  t = SSL_exit(p_118);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_47;
  t = get_config_0_0(t);
  return(t);
}
static ATerm u_8 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_43, w_43);
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
      t = SSL_addr(v_43, w_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL;
  t_118 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_118;
      t = r_97(t);
    }
  else
    {
      ATerm y_118 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_118 = ATgetFirst((ATermList) t);
          v_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_118;
      t = foldr_2_0(r_97, s_97, t);
      y_118 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_118, y_118);
      t = s_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm d_131 = NULL,e_131 = NULL;
  if(match_cons(t, sym__2))
    {
      d_131 = ATgetArgument(t, 0);
      e_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(d_131, e_131, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_119 = NULL,z_130 = NULL,a_131 = NULL;
  t = times_0_0(t);
  a_131 = t;
  t = SSL_explode_term(a_131);
  if(match_cons(t, sym__2))
    {
      ATerm t_47 = ATgetArgument(t, 0);
      z_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_130;
  t = foldr_2_0(f_9, g_9, t);
  b_119 = t;
  t = SSL_TicksToSeconds(b_119);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_119 = NULL,n_119 = NULL,o_119 = NULL;
  m_119 = t;
  if(match_cons(t, sym__2))
    {
      n_119 = ATgetArgument(t, 0);
      o_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_119;
        if((n_119 != t))
          {
            _fail(t);
          }
        t = m_119;
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        t = (ATerm) ATmakeAppl(sym__2, n_119, o_119);
        {
          ATerm w_47 = t;
          int x_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_119, o_119);
              LocalPopChoice(x_47);
            }
          else
            {
              t = w_47;
              t = SSL_gtr(n_119, o_119);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_119, o_119);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_106 (ATerm), ATerm t)
{
  ATerm t_119 = NULL;
  t_119 = t;
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_119 = NULL;
        t = term_k_46;
        t = get_config_0_0(t);
        v_119 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_119, term_p_11);
        t = geq_0_0(t);
        t = t_119;
        t = d_106(t);
        LocalPopChoice(z_47);
      }
    else
      {
        t = y_47;
        t = t_119;
      }
  }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm x_119 = NULL,y_119 = NULL,a_120 = NULL,b_120 = NULL;
  t = run_time_0_0(t);
  x_119 = t;
  t = term_l_11;
  t = whoami_0_0(t);
  y_119 = t;
  t = term_m_11;
  a_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_48), x_119), term_a_48), y_119);
  b_120 = t;
  t = SSL_printnl(a_120, b_120);
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_48), x_119), term_a_48), y_119));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_120 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_46;
  c_120 = t;
  t = SSL_exit(c_120);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL;
  l_120 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_120;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_120 = ATgetArgument(t, 0);
          {
            ATerm q_131 = NULL,h_28 = NULL;
            t = SSLgetAnnotations(l_120);
            q_131 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_120);
            h_28 = t;
            t = SSLsetAnnotations(h_28, q_131);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_120;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_113 (ATerm), ATerm t)
{
  ATerm c_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_48;
      t = get_config_0_0(t);
      LocalPopChoice(d_48);
    }
  else
    {
      t = c_48;
      t = fetch_1_0(i_9, t);
    }
  t = s_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_120 = NULL,p_120 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_120 = ATgetFirst((ATermList) t);
      p_120 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_120 = NULL,u_120 = NULL;
        static ATerm j_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_120)), not_null(u_120));
          return(t);
        }
        t = p_120;
        t = k_0(t);
        if(((t_120 != NULL) && (t_120 != t)))
          _fail(t);
        else
          t_120 = t;
        t = o_120;
        t = i_0(t);
        if(((u_120 != NULL) && (u_120 != t)))
          _fail(t);
        else
          u_120 = t;
        t = p_120;
        t = reverse_acc_2_0(i_0, j_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_11;
      t = k_0(t);
    }
  return(t);
}
static ATerm w_8 (ATerm x_53, ATerm y_53, ATerm t)
{
  t = SSL_table_get(x_53, y_53);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm h_121 = NULL,c_132 = NULL,d_132 = NULL;
  h_121 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_121), term_f_48);
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(h_48);
      }
    else
      {
        t = g_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_121), term_f_48));
      }
  }
  c_132 = t;
  t = term_w_44;
  d_132 = t;
  t = SSL_printnl(d_132, c_132);
  t = (ATerm) ATinsert(ATinsert(ATempty, h_121), term_f_48);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_120 = NULL,z_120 = NULL,a_121 = NULL,z_131 = NULL,a_132 = NULL;
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_47;
      t = get_config_0_0(t);
      y_120 = t;
      LocalPopChoice(j_48);
    }
  else
    {
      t = i_48;
      {
        static ATerm l_9 (ATerm t)
        {
          ATerm b_121 = NULL,c_121 = NULL,d_121 = NULL,j_28 = NULL;
          d_121 = t;
          if(match_cons(t, sym_Program_1))
            {
              c_121 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_121);
          b_121 = t;
          t = c_121;
          if(((y_120 != NULL) && (y_120 != t)))
            _fail(t);
          else
            y_120 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, c_121);
          j_28 = t;
          t = SSLsetAnnotations(j_28, b_121);
          return(t);
        }
        t = fetch_1_0(l_9, t);
      }
    }
  {
    ATerm k_48 = t;
    int l_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_131 = NULL,x_131 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_48), not_null(y_120)), term_m_48);
        {
          ATerm o_48 = t;
          int p_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(p_48);
            }
          else
            {
              t = o_48;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_48), not_null(y_120)), term_m_48));
            }
        }
        w_131 = t;
        t = term_w_44;
        x_131 = t;
        t = SSL_printnl(x_131, w_131);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_48), not_null(y_120)), term_m_48);
        LocalPopChoice(l_48);
      }
    else
      {
        t = k_48;
      }
  }
  t = term_q_48;
  {
    ATerm r_48 = t;
    int s_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(s_48);
      }
    else
      {
        t = r_48;
        t = (ATerm) ATinsert(ATempty, term_q_48);
      }
  }
  z_131 = t;
  t = term_w_44;
  a_132 = t;
  t = SSL_printnl(a_132, z_131);
  t = term_f_47;
  z_120 = t;
  t = term_g_47;
  a_121 = t;
  t = term_t_48;
  t = w_8(z_120, a_121, t);
  t = reverse_acc_2_0(_id, m_9, t);
  t = map_1_0(n_9, t);
  {
    ATerm u_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_132 = NULL,g_132 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_48), term_y_48), term_x_48), term_w_48);
        {
          ATerm a_49 = t;
          int b_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(b_49);
            }
          else
            {
              t = a_49;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_48), term_y_48), term_x_48), term_w_48));
            }
        }
        f_132 = t;
        t = term_w_44;
        g_132 = t;
        t = SSL_printnl(g_132, f_132);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_48), term_y_48), term_x_48), term_w_48);
        LocalPopChoice(v_48);
      }
    else
      {
        t = u_48;
      }
  }
  return(t);
}
ATerm map_1_0 (ATerm o_91 (ATerm), ATerm t)
{
  static ATerm y_121 (ATerm t)
  {
    ATerm v_121 = NULL,w_121 = NULL,x_121 = NULL;
    v_121 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_121;
      }
    else
      {
        ATerm k_132 = NULL,n_132 = NULL,o_132 = NULL,l_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_121 = ATgetFirst((ATermList) t);
            x_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_121);
        k_132 = t;
        t = w_121;
        t = o_91(t);
        n_132 = t;
        t = x_121;
        t = y_121(t);
        o_132 = t;
        t = (ATerm) ATinsert(CheckATermList(o_132), n_132);
        l_28 = t;
        t = SSLsetAnnotations(l_28, k_132);
      }
    return(t);
  }
  t = y_121(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm c_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_122 = NULL;
      j_122 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_122;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_49 = ATgetFirst((ATermList) t);
              ATerm h_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_122;
        }
      LocalPopChoice(f_49);
    }
  else
    {
      t = c_49;
      {
        static ATerm a_124 (ATerm t)
        {
          ATerm x_123 = NULL,y_123 = NULL,z_123 = NULL;
          y_123 = t;
          if(match_cons(t, sym_iter_1))
            {
              z_123 = ATgetArgument(t, 0);
              {
                ATerm c_133 = NULL,n_28 = NULL;
                t = SSLgetAnnotations(y_123);
                c_133 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, z_123);
                n_28 = t;
                t = SSLsetAnnotations(n_28, c_133);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  z_123 = ATgetArgument(t, 0);
                  x_123 = ATgetArgument(t, 1);
                  {
                    ATerm k_133 = NULL,o_28 = NULL;
                    t = SSLgetAnnotations(y_123);
                    k_133 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, z_123, x_123);
                    o_28 = t;
                    t = SSLsetAnnotations(o_28, k_133);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      z_123 = ATgetArgument(t, 0);
                      {
                        ATerm t_133 = NULL,p_28 = NULL;
                        t = SSLgetAnnotations(y_123);
                        t_133 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, z_123);
                        p_28 = t;
                        t = SSLsetAnnotations(p_28, t_133);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          z_123 = ATgetArgument(t, 0);
                          x_123 = ATgetArgument(t, 1);
                          {
                            ATerm b_134 = NULL,q_28 = NULL;
                            t = SSLgetAnnotations(y_123);
                            b_134 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, z_123, x_123);
                            q_28 = t;
                            t = SSLsetAnnotations(q_28, b_134);
                          }
                        }
                      else
                        {
                          ATerm k_134 = NULL,m_134 = NULL,s_28 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              z_123 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(y_123);
                          k_134 = t;
                          t = z_123;
                          {
                            static ATerm p_9 (ATerm t)
                            {
                              ATerm i_49 = t;
                              int j_49 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_134 = NULL,u_134 = NULL;
                                  u_134 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      t_134 = ATgetArgument(t, 0);
                                      {
                                        ATerm a_135 = NULL,r_28 = NULL;
                                        t = SSLgetAnnotations(u_134);
                                        a_135 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, t_134);
                                        r_28 = t;
                                        t = SSLsetAnnotations(r_28, a_135);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = u_134;
                                    }
                                  LocalPopChoice(j_49);
                                }
                              else
                                {
                                  t = i_49;
                                  t = a_124(t);
                                }
                              return(t);
                            }
                            t = map_1_0(p_9, t);
                          }
                          m_134 = t;
                          t = (ATerm) ATmakeAppl(sym_seq_1, m_134);
                          s_28 = t;
                          t = SSLsetAnnotations(s_28, k_134);
                        }
                    }
                }
            }
          return(t);
        }
        t = a_124(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL,h_135 = NULL;
  t = term_q_47;
  t = get_config_0_0(t);
  f_135 = t;
  {
    ATerm l_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(o_49);
      }
    else
      {
        t = l_49;
        t = (ATerm) ATinsert(ATempty, f_135);
      }
  }
  g_135 = t;
  t = term_w_44;
  h_135 = t;
  t = SSL_printnl(h_135, g_135);
  t = f_135;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL;
  t = term_p_49;
  k_124 = t;
  t = term_l_11;
  l_124 = t;
  t = term_q_49;
  t = z_8(k_124, l_124, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_r_49;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL;
  t = term_p_49;
  o_124 = t;
  t = term_l_11;
  p_124 = t;
  t = term_q_49;
  t = z_8(o_124, p_124, t);
  t = term_s_49;
  m_124 = t;
  t = term_l_11;
  n_124 = t;
  t = term_u_49;
  t = z_8(m_124, n_124, t);
  t = term_v_49;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_y_49;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_9, r_9, s_9, t);
      LocalPopChoice(a_50);
    }
  else
    {
      t = z_49;
      t = Option_3_0(w_9, x_9, y_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,z_28 = NULL;
  v_124 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_124 = ATgetFirst((ATermList) t);
      s_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_124);
  q_124 = t;
  t = r_124;
  t = r_63(t);
  t_124 = t;
  t = s_124;
  t = s_63(t);
  u_124 = t;
  t = (ATerm) ATinsert(CheckATermList(u_124), t_124);
  z_28 = t;
  t = SSLsetAnnotations(z_28, q_124);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL,f_125 = NULL,g_125 = NULL,b_29 = NULL;
  a_125 = t;
  {
    ATerm c_50 = t;
    int f_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_50;
        t = z_108(t);
        LocalPopChoice(f_50);
      }
    else
      {
        t = c_50;
      }
  }
  t = a_125;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_125 = ATgetFirst((ATermList) t);
      d_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_125);
  b_125 = t;
  t = term_q_47;
  g_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_47, c_125);
  t = z_8(g_125, c_125, t);
  t = d_125;
  {
    static ATerm q_125 (ATerm t)
    {
      ATerm h_50 = t;
      int i_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_50 = t;
          int m_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_125 = NULL;
              j_125 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_125;
              LocalPopChoice(m_50);
            }
          else
            {
              t = j_50;
              t = z_108(t);
              t = Cons_2_0(_id, q_125, t);
            }
          LocalPopChoice(i_50);
        }
      else
        {
          t = h_50;
          {
            ATerm m_125 = NULL,n_125 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_125 = ATgetFirst((ATermList) t);
                n_125 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_125), (ATerm) ATmakeAppl(sym_Undefined_1, m_125));
          }
        }
      return(t);
    }
    t = q_125(t);
  }
  f_125 = t;
  t = (ATerm) ATinsert(CheckATermList(f_125), (ATerm) ATmakeAppl(sym_Program_1, c_125));
  b_29 = t;
  t = SSLsetAnnotations(b_29, b_125);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm c_126 = NULL;
  c_126 = t;
  if(match_string(t, "--help"))
    {
      t = c_126;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_126;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_126;
        }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm d_126 = NULL,e_126 = NULL;
  t = term_e_48;
  d_126 = t;
  t = term_l_11;
  e_126 = t;
  t = term_n_50;
  t = z_8(d_126, e_126, t);
  t = term_p_50;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_r_50;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm v_125 = NULL,w_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL;
  x_125 = t;
  t = term_f_47;
  z_125 = t;
  t = term_g_47;
  a_126 = t;
  t = (ATerm) ATempty;
  b_126 = t;
  t = SSL_table_put(z_125, a_126, b_126);
  t = x_125;
  {
    static ATerm z_9 (ATerm t)
    {
      ATerm s_50 = t;
      int t_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_108(t);
          LocalPopChoice(t_50);
        }
      else
        {
          t = s_50;
          {
            ATerm u_50 = t;
            int v_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_10, g_10, h_10, t);
                LocalPopChoice(v_50);
              }
            else
              {
                t = u_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_9, t);
  }
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_126 = NULL;
        l_126 = t;
        {
          ATerm y_50 = t;
          int a_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_135 = NULL;
              t = l_126;
              {
                ATerm b_51 = t;
                int c_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_48;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_51);
                  }
                else
                  {
                    t = b_51;
                    t = fetch_1_0(k_10, t);
                  }
              }
              t = l_126;
              t = default_system_usage_0_0(t);
              t = term_p_46;
              k_135 = t;
              t = SSL_exit(k_135);
              LocalPopChoice(a_51);
            }
          else
            {
              t = y_50;
              {
                ATerm o_135 = NULL;
                t = term_p_49;
                t = get_config_0_0(t);
                t = l_126;
                t = default_system_about_0_0(t);
                t = term_p_46;
                o_135 = t;
                t = SSL_exit(o_135);
              }
            }
        }
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        {
          ATerm d_51 = t;
          int g_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_126 = NULL,n_126 = NULL,o_126 = NULL;
              static ATerm o_10 (ATerm t)
              {
                ATerm p_126 = NULL,q_126 = NULL,r_126 = NULL,f_29 = NULL;
                r_126 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_126 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_126);
                p_126 = t;
                t = q_126;
                if(((v_125 != NULL) && (v_125 != t)))
                  _fail(t);
                else
                  v_125 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_126);
                f_29 = t;
                t = SSLsetAnnotations(f_29, p_126);
                return(t);
              }
              t = fetch_1_0(o_10, t);
              t = term_m_11;
              n_126 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_125)), term_h_51);
              o_126 = t;
              t = SSL_printnl(n_126, o_126);
              t = (ATerm) ATmakeAppl(sym__2, term_m_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_125)), term_h_51));
              t = default_system_usage_0_0(t);
              t = term_p_11;
              m_126 = t;
              t = SSL_exit(m_126);
              LocalPopChoice(g_51);
            }
          else
            {
              t = d_51;
            }
        }
      }
  }
  w_125 = t;
  t = term_f_47;
  y_125 = t;
  t = SSL_table_destroy(y_125);
  t = w_125;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL;
  t = parse_options_1_0(u_113, t);
  w_126 = t;
  t = term_n_51;
  z_126 = t;
  t = SSL_table_create(z_126);
  t = term_n_51;
  x_126 = t;
  t = term_o_51;
  y_126 = t;
  t = SSL_table_put(x_126, y_126, w_126);
  t = w_126;
  t = w_113(t);
  {
    ATerm p_51 = t;
    int q_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_113, t);
        LocalPopChoice(q_51);
      }
    else
      {
        t = p_51;
        {
          ATerm r_51 = t;
          int s_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_113(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_51);
            }
          else
            {
              t = r_51;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = if_verbose2_1_0(i_11, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm a_127 = NULL,b_127 = NULL;
  t = term_t_51;
  a_127 = t;
  t = term_l_11;
  b_127 = t;
  t = term_u_51;
  t = z_8(a_127, b_127, t);
  t = term_c_52;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_d_52;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL;
  c_127 = t;
  t = term_q_47;
  t = get_config_0_0(t);
  d_127 = t;
  t = term_m_11;
  e_127 = t;
  t = (ATerm) ATinsert(ATempty, d_127);
  f_127 = t;
  t = SSL_printnl(e_127, f_127);
  t = c_127;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t)
{
  static ATerm s_10 (ATerm t)
  {
    ATerm e_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_113(t);
        LocalPopChoice(i_52);
      }
    else
      {
        t = e_52;
        {
          ATerm j_52 = t;
          int k_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(k_52);
            }
          else
            {
              t = j_52;
              {
                ATerm l_52 = t;
                int m_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(m_52);
                  }
                else
                  {
                    t = l_52;
                    {
                      ATerm n_52 = t;
                      int o_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(w_10, z_10, b_11, t);
                          LocalPopChoice(o_52);
                        }
                      else
                        {
                          t = n_52;
                          {
                            ATerm p_52 = t;
                            int q_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(q_52);
                              }
                            else
                              {
                                t = p_52;
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
  static ATerm u_10 (ATerm t)
  {
    ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL;
    h_127 = t;
    {
      ATerm r_52 = t;
      int b_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm k_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_127 != NULL) && (g_127 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_127 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_11, t);
          LocalPopChoice(b_53);
        }
      else
        {
          t = r_52;
          t = term_c_53;
          g_127 = t;
        }
    }
    t = not_null(g_127);
    t = ReadFromFile_0_0(t);
    i_127 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_127, i_127);
    t = apply_strategy_1_0(d_113, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(s_10, f_113, t_10, u_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(implode_0_0, implode_options_0_0, default_usage_0_0, t);
  return(t);
}

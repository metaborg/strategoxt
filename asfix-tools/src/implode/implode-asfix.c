#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Ins_1;
Symbol sym_Conc_2;
Symbol sym_Conc_3;
Symbol sym_Snoc_2;
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
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_s_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_r_47;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_m_46;
ATerm term_j_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_w_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_p_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_q_39;
ATerm term_m_39;
ATerm term_j_39;
ATerm term_g_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_w_35;
ATerm term_w_34;
ATerm term_u_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_l_30;
ATerm term_c_30;
ATerm term_r_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_19;
ATerm term_y_17;
ATerm term_i_16;
ATerm term_d_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym__2, term_n_42, term_o_42);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_42);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym__2, term_w_42, term_f_42);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym__2, term_f_43, term_g_43);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_f_42);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym__2, term_d_48, term_f_42);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym__2, term_v_45, term_f_42);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym__2, term_w_40, term_f_42);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm j_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm annotation_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm n_88 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm skip_concrete_1_0 (ATerm y_84 (ATerm), ATerm t);
static ATerm u_0 (ATerm f_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm y_8 (ATerm f_84 (ATerm), ATerm s_21, ATerm r_21, ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplCons_1_0 (ATerm m_84 (ATerm), ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm a_85 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_86 (ATerm), ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm u_58 (ATerm k_47, ATerm n_47, ATerm o_47, ATerm p_47, ATerm t);
static ATerm v_58 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm k_49, ATerm t);
static ATerm w_58 (ATerm l_52, ATerm q_52, ATerm w_52, ATerm z_52, ATerm t);
static ATerm a_59 (ATerm b_57, ATerm f_57, ATerm g_57, ATerm i_57, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm w_86 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_87 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm s_100 (ATerm), ATerm t);
static ATerm g_79 (ATerm a_76, ATerm t);
static ATerm h_79 (ATerm j_77, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm j_94 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm i_88 (ATerm y_86, ATerm z_86, ATerm c_87, ATerm t);
static ATerm j_88 (ATerm m_87, ATerm n_87, ATerm o_87, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm implode_0_0 (ATerm t);
static ATerm m_9 (ATerm g_41, ATerm h_41, ATerm t);
static ATerm n_9 (ATerm i_26, ATerm j_26, ATerm t);
static ATerm p_9 (ATerm y_92 (ATerm), ATerm j_223, ATerm o_26, ATerm t);
static ATerm o_9 (ATerm e_26, ATerm f_26, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_1_0 (ATerm k_116 (ATerm), ATerm t);
static ATerm d_101 (ATerm x_100, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_9 (ATerm k_26, ATerm t);
static ATerm r_9 (ATerm i_41, ATerm j_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_102 (ATerm n_101, ATerm t);
static ATerm p_102 (ATerm r_101, ATerm s_101, ATerm t_101, ATerm t);
static ATerm q_102 (ATerm b_102, ATerm c_102, ATerm d_102, ATerm t);
static ATerm s_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm l_116 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_10 (ATerm z_50, ATerm a_51, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_9 (ATerm j_53, ATerm k_53, ATerm i_53, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm implode_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_9 (ATerm c_44, ATerm d_44, ATerm t);
ATerm foldr_2_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_108 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm need_help_1_0 (ATerm b_116 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_93 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_9 (ATerm z_39, ATerm a_40, ATerm t);
ATerm debug_1_0 (ATerm w_92 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm x_9 (ATerm a_55, ATerm b_55, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_111 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm parse_options_1_0 (ATerm a_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,a_0 = NULL;
  e_15 = t;
  if(match_cons(t, sym_cons_1))
    {
      d_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_15);
  c_15 = t;
  t = d_15;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, d_15);
  a_0 = t;
  t = SSLsetAnnotations(a_0, c_15);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm b_10 = t;
  if((PushChoice() == 0))
    {
      ATerm w_17 = NULL,z_17 = NULL,b_18 = NULL;
      z_17 = t;
      if(match_cons(t, sym_appl_2))
        {
          b_18 = ATgetArgument(t, 0);
          w_17 = ATgetArgument(t, 1);
          {
            ATerm l_6 = NULL,x_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,j_1 = NULL,i_1 = NULL,r_7 = NULL;
            t = SSLgetAnnotations(z_17);
            l_6 = t;
            t = b_18;
            if(match_cons(t, sym_prod_3))
              {
                b_7 = ATgetArgument(t, 0);
                c_7 = ATgetArgument(t, 1);
                d_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_18);
            x_6 = t;
            t = c_7;
            if(match_cons(t, sym_cf_1))
              {
                r_7 = ATgetArgument(t, 0);
                {
                  ATerm y_7 = NULL,g_8 = NULL,k_8 = NULL,o_8 = NULL,x_0 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(c_7);
                  y_7 = t;
                  t = r_7;
                  if(match_cons(t, sym_opt_1))
                    {
                      k_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_7);
                  g_8 = t;
                  t = k_8;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, k_8);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, g_8);
                  o_8 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, o_8);
                  x_0 = t;
                  t = SSLsetAnnotations(x_0, y_7);
                }
              }
            else
              {
                ATerm s_8 = NULL,y_0 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    r_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_7);
                s_8 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, r_7);
                y_0 = t;
                t = SSLsetAnnotations(y_0, s_8);
              }
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, b_7, e_7, d_7);
            i_1 = t;
            t = SSLsetAnnotations(i_1, x_6);
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, f_7, w_17);
            j_1 = t;
            t = SSLsetAnnotations(j_1, l_6);
          }
        }
      else
        {
          ATerm f_9 = NULL,k_9 = NULL,l_9 = NULL,u_9 = NULL,l_1 = NULL,k_1 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              b_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_17);
          f_9 = t;
          t = b_18;
          if(match_cons(t, sym_opt_1))
            {
              l_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_18);
          k_9 = t;
          t = l_9;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, l_9);
          k_1 = t;
          t = SSLsetAnnotations(k_1, k_9);
          u_9 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, u_9);
          l_1 = t;
          t = SSLsetAnnotations(l_1, f_9);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_10;
    }
  {
    ATerm c_10 = t;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,o_18 = NULL,p_18 = NULL,r_18 = NULL,y_18 = NULL,e_19 = NULL,i_19 = NULL,i_20 = NULL,s_2 = NULL,i_2 = NULL;
        i_20 = t;
        if(match_cons(t, sym_appl_2))
          {
            i_18 = ATgetArgument(t, 0);
            j_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_20);
        h_18 = t;
        t = i_18;
        if(match_cons(t, sym_prod_3))
          {
            p_18 = ATgetArgument(t, 0);
            r_18 = ATgetArgument(t, 1);
            y_18 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_18);
        o_18 = t;
        t = r_18;
        t = oncetd_1_0(t_0, t);
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, p_18, e_19, y_18);
        i_2 = t;
        t = SSLsetAnnotations(i_2, o_18);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, i_19, j_18);
        s_2 = t;
        t = SSLsetAnnotations(s_2, h_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_10;
      }
  }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm j_20 = NULL,p_20 = NULL,q_20 = NULL,w_1 = NULL;
  q_20 = t;
  if(match_cons(t, sym_lex_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, p_20);
  w_1 = t;
  t = SSLsetAnnotations(w_1, j_20);
  return(t);
}
ATerm annotation_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,v_14 = NULL,w_14 = NULL,b_15 = NULL,v_0 = NULL,h_0 = NULL,b_0 = NULL;
  b_15 = t;
  if(match_cons(t, sym_appl_2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_15);
  d_14 = t;
  t = e_14;
  if(match_cons(t, sym_prod_3))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
      p_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_14);
  g_14 = t;
  t = p_14;
  if(match_cons(t, sym_attrs_1))
    {
      s_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_14);
  r_14 = t;
  t = s_14;
  t = oncetd_1_0(j_0, t);
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, v_14);
  b_0 = t;
  t = SSLsetAnnotations(b_0, r_14);
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, n_14, o_14, w_14);
  h_0 = t;
  t = SSLsetAnnotations(h_0, g_14);
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, q_14, f_14);
  v_0 = t;
  t = SSLsetAnnotations(v_0, d_14);
  t = f_14;
  t = filter_1_0(s_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_13 = ATgetFirst((ATermList) t);
      y_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_13;
  t = x_84(t);
  z_13 = t;
  t = y_13;
  t = w_84(t);
  a_14 = t;
  t = term_d_10;
  b_14 = t;
  t = (ATerm) ATinsert(CheckATermList(a_14), z_13);
  c_14 = t;
  t = SSL_mkterm(b_14, c_14);
  return(t);
}
ATerm alltd_1_0 (ATerm n_88 (ATerm), ATerm t)
{
  static ATerm g_21 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_88(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = SRTS_all(g_21, t);
      }
    return(t);
  }
  t = g_21(t);
  return(t);
}
ATerm appl_2_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL,u_21 = NULL,i_3 = NULL;
  u_21 = t;
  if(match_cons(t, sym_appl_2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_21);
  n_21 = t;
  t = o_21;
  t = y_77(t);
  q_21 = t;
  t = p_21;
  t = z_77(t);
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, q_21, t_21);
  i_3 = t;
  t = SSLsetAnnotations(i_3, n_21);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,d_6 = NULL,b_6 = NULL;
  m_25 = t;
  if(match_cons(t, sym_prod_3))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
      h_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_25);
  e_25 = t;
  t = g_25;
  if(match_cons(t, sym_cf_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_25);
  i_25 = t;
  t = j_25;
  t = oncetd_1_0(c_1, t);
  k_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, k_25);
  b_6 = t;
  t = SSLsetAnnotations(b_6, i_25);
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, f_25, l_25, h_25);
  d_6 = t;
  t = SSLsetAnnotations(d_6, e_25);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm n_25 = NULL,q_25 = NULL,r_25 = NULL,a_6 = NULL;
  r_25 = t;
  if(match_cons(t, sym_sort_1))
    {
      q_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, q_25);
  a_6 = t;
  t = SSLsetAnnotations(a_6, n_25);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,f_6 = NULL;
  j_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      i_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_11);
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, i_11);
  f_6 = t;
  t = SSLsetAnnotations(f_6, h_11);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,h_7 = NULL;
  j_12 = t;
  if(match_cons(t, sym_cons_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_12);
  h_12 = t;
  t = i_12;
  if(match_string(t, "FromTerm"))
    {
      t = i_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("FromApp", 0, ATtrue)))
        _fail(t);
      t = i_12;
    }
  t = (ATerm) ATmakeAppl(sym_cons_1, i_12);
  h_7 = t;
  t = SSLsetAnnotations(h_7, h_12);
  return(t);
}
ATerm skip_concrete_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,h_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,a_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL,l_24 = NULL,q_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,e_6 = NULL,z_5 = NULL,y_5 = NULL,c_4 = NULL,a_4 = NULL;
  static ATerm h_29 (ATerm t)
  {
    static ATerm d_1 (ATerm t)
    {
      ATerm g_10 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_28 = NULL,f_29 = NULL,g_29 = NULL;
          x_28 = t;
          if(match_cons(t, sym_appl_2))
            {
              f_29 = ATgetArgument(t, 0);
              g_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm n_10 = t;
            int p_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_10 = NULL,t_10 = NULL,u_10 = NULL,w_10 = NULL,b_11 = NULL,c_11 = NULL,e_11 = NULL,h_6 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(x_28);
                o_10 = t;
                t = f_29;
                if(match_cons(t, sym_prod_3))
                  {
                    u_10 = ATgetArgument(t, 0);
                    w_10 = ATgetArgument(t, 1);
                    b_11 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_29);
                t_10 = t;
                t = u_10;
                t = SRTS_one(e_1, t);
                c_11 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, c_11, w_10, b_11);
                g_6 = t;
                t = SSLsetAnnotations(g_6, t_10);
                e_11 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, e_11, g_29);
                h_6 = t;
                t = SSLsetAnnotations(h_6, o_10);
                t = y_84(t);
                LocalPopChoice(p_10);
              }
            else
              {
                t = n_10;
                {
                  ATerm u_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
                  t = SSLgetAnnotations(x_28);
                  u_11 = t;
                  t = f_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      y_11 = ATgetArgument(t, 0);
                      z_11 = ATgetArgument(t, 1);
                      a_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_29);
                  x_11 = t;
                  t = a_12;
                  if(match_cons(t, sym_attrs_1))
                    {
                      d_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_12);
                  c_12 = t;
                  t = d_12;
                  t = oncetd_1_0(f_1, t);
                  e_12 = t;
                  t = (ATerm) ATmakeAppl(sym_attrs_1, e_12);
                  i_7 = t;
                  t = SSLsetAnnotations(i_7, c_12);
                  f_12 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, y_11, z_11, f_12);
                  j_7 = t;
                  t = SSLsetAnnotations(j_7, x_11);
                  b_12 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, b_12, g_29);
                  k_7 = t;
                  t = SSLsetAnnotations(k_7, u_11);
                  t = y_84(t);
                }
              }
          }
          LocalPopChoice(j_10);
        }
      else
        {
          t = g_10;
          t = annotation_2_0(y_84, h_29, t);
        }
      return(t);
    }
    t = alltd_1_0(d_1, t);
    return(t);
  }
  x_24 = t;
  if(match_cons(t, sym_appl_2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_24);
  q_22 = t;
  t = r_22;
  if(match_cons(t, sym_prod_3))
    {
      x_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
      z_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_22);
  u_22 = t;
  t = y_22;
  if(match_cons(t, sym_cf_1))
    {
      h_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_22);
  f_24 = t;
  t = h_24;
  if(match_cons(t, sym_sort_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_24);
  q_24 = t;
  t = v_24;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, v_24);
  a_4 = t;
  t = SSLsetAnnotations(a_4, q_24);
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, w_24);
  c_4 = t;
  t = SSLsetAnnotations(c_4, f_24);
  l_24 = t;
  t = z_22;
  if(match_cons(t, sym_attrs_1))
    {
      k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_22);
  j_23 = t;
  t = k_23;
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,v_5 = NULL,u_5 = NULL;
      d_25 = t;
      if(match_cons(t, sym_term_1))
        {
          z_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_25);
      y_24 = t;
      t = z_24;
      if(match_cons(t, sym_cons_1))
        {
          b_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_24);
      a_25 = t;
      t = b_25;
      if(((b_22 != NULL) && (b_22 != t)))
        _fail(t);
      else
        b_22 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, b_25);
      u_5 = t;
      t = SSLsetAnnotations(u_5, a_25);
      c_25 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, c_25);
      v_5 = t;
      t = SSLsetAnnotations(v_5, y_24);
      return(t);
    }
    t = SRTS_one(z_0, t);
  }
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, a_24);
  y_5 = t;
  t = SSLsetAnnotations(y_5, j_23);
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, x_22, l_24, e_24);
  z_5 = t;
  t = SSLsetAnnotations(z_5, u_22);
  i_23 = t;
  t = s_22;
  {
    static ATerm a_1 (ATerm t)
    {
      t = appl_2_0(b_1, _id, t);
      if(((h_22 != NULL) && (h_22 != t)))
        _fail(t);
      else
        h_22 = t;
      return(t);
    }
    t = oncetd_1_0(a_1, t);
  }
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, i_23, t_22);
  e_6 = t;
  t = SSLsetAnnotations(e_6, q_22);
  t = not_null(b_22);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(h_22));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(h_22));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(h_22));
        }
    }
  t = h_29(t);
  return(t);
}
static ATerm u_0 (ATerm f_0, ATerm t)
{
  ATerm g_0 = NULL;
  t = SSL_explode_term(f_0);
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL,q_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym__2))
    {
      l_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_1 (ATerm t)
            {
              t = m_0;
              return(t);
            }
            t = l_0;
            t = at_end_1_0(m_1, t);
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            t = u_0(q_0, t);
          }
      }
    }
  else
    {
      t = u_0(q_0, t);
    }
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,s_1 = NULL,u_1 = NULL,x_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL;
  n_1 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_1 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
      {
        ATerm v_10 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_10 = ATgetFirst((ATermList) t);
      q_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_10 = ATgetFirst((ATermList) t);
      s_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_1;
  {
    ATerm z_10 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_11 = ATgetFirst((ATermList) t);
            u_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_11);
        t = u_1;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_2;
            {
              ATerm g_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm l_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_11);
                  t = n_1;
                }
              else
                {
                  t = g_11;
                  if(match_cons(t, sym_cf_1))
                    {
                      c_2 = ATgetArgument(t, 0);
                      t = c_2;
                      {
                        ATerm m_11 = t;
                        int n_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm o_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(n_11);
                            t = n_1;
                          }
                        else
                          {
                            t = m_11;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm p_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = n_1;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm q_11 = ATgetArgument(t, 0);
                          ATerm r_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_1;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_11 = ATgetFirst((ATermList) t);
                x_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_11 = ATgetFirst((ATermList) t);
                a_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_2;
            if(match_cons(t, sym_cf_1))
              {
                c_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_2;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm v_11 = ATgetArgument(t, 0);
                ATerm w_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_1;
          }
      }
    else
      {
        t = z_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm g_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_1;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
  m_3 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_3 = ATgetFirst((ATermList) t);
      q_3 = (ATerm) ATgetNext((ATermList) t);
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
      k_3 = ATgetFirst((ATermList) t);
      l_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
        t = l_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_3;
        t = is_conc_0_0(t);
        t = p_3;
        t = r_0(t);
        x_3 = t;
        t = r_3;
        t = r_0(t);
        y_3 = t;
        t = k_3;
        t = r_0(t);
        z_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(CheckATermList(z_3), y_3));
        t = conc_0_0(t);
      }
    }
  else
    {
      ATerm g_1 = NULL,h_1 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_3;
      t = is_conc_0_0(t);
      t = p_3;
      t = r_0(t);
      g_1 = t;
      t = r_3;
      t = r_0(t);
      h_1 = t;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 = NULL,h_2 = NULL;
            t = h_1;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = h_1;
              }
            else
              {
                ATerm p_2 = NULL,m_8 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_2 = ATgetFirst((ATermList) t);
                    h_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_1);
                p_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), e_2);
                m_8 = t;
                t = SSLsetAnnotations(m_8, p_2);
              }
            t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
            t = conc_0_0(t);
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            t = (ATerm) ATmakeAppl(sym_Conc_2, g_1, h_1);
          }
      }
    }
  return(t);
}
static ATerm y_8 (ATerm f_84 (ATerm), ATerm s_21, ATerm r_21, ATerm t)
{
  ATerm w_6 = NULL,z_6 = NULL,a_7 = NULL;
  t = s_21;
  if(match_cons(t, sym_prod_3))
    {
      ATerm m_12 = ATgetArgument(t, 0);
      ATerm n_12 = ATgetArgument(t, 1);
      z_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_6;
  {
    static ATerm p_1 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((a_7 != NULL) && (a_7 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(p_1, t);
  }
  t = r_21;
  t = map_1_0(f_84, t);
  w_6 = t;
  t = SSL_mkterm(not_null(a_7), w_6);
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm v_4 = NULL,x_4 = NULL,z_4 = NULL,b_5 = NULL,d_5 = NULL,f_5 = NULL,h_5 = NULL,j_5 = NULL;
  v_4 = t;
  if(match_cons(t, sym_prod_3))
    {
      x_4 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
      {
        ATerm o_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = x_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_4 = ATgetFirst((ATermList) t);
      d_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_5;
  if(match_cons(t, sym_iter_1))
    {
      h_5 = ATgetArgument(t, 0);
      t = h_5;
      if((z_4 != t))
        {
          _fail(t);
        }
      t = v_4;
    }
  else
    {
      ATerm p_12 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              h_5 = ATgetArgument(t, 0);
              {
                ATerm j_13 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(c_13);
          t = h_5;
          if((z_4 != t))
            {
              _fail(t);
            }
          t = v_4;
        }
      else
        {
          t = p_12;
          if(match_cons(t, sym_cf_1))
            {
              h_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_4;
          if(match_cons(t, sym_cf_1))
            {
              b_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_5;
          if(match_cons(t, sym_iter_1))
            {
              j_5 = ATgetArgument(t, 0);
              t = j_5;
              if((b_5 != t))
                {
                  _fail(t);
                }
              t = v_4;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  j_5 = ATgetArgument(t, 0);
                  {
                    ATerm l_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = j_5;
              if((b_5 != t))
                {
                  _fail(t);
                }
              t = v_4;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm n_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
      {
        ATerm m_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_6;
  {
    ATerm n_13 = t;
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
        t = n_6;
      }
    else
      {
        t = n_13;
        {
          ATerm q_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm t_13 = ATgetArgument(t, 0);
                  ATerm u_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(s_13);
              t = n_6;
            }
          else
            {
              t = q_13;
              if(match_cons(t, sym_cf_1))
                {
                  r_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_6;
              {
                ATerm v_13 = t;
                int w_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm h_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_13);
                    t = n_6;
                  }
                else
                  {
                    t = v_13;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm i_14 = ATgetArgument(t, 0);
                        ATerm j_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = n_6;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm k_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 = NULL,i_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
      h_10 = t;
      if(match_cons(t, sym_appl_2))
        {
          i_10 = ATgetArgument(t, 0);
          k_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_10;
              t = y_8(m_84, i_10, k_10, t);
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              {
                ATerm b_16 = t;
                int c_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(c_16);
                  }
                else
                  {
                    t = b_16;
                    {
                      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
                      t = i_10;
                      if(match_cons(t, sym_prod_3))
                        {
                          h_4 = ATgetArgument(t, 0);
                          i_4 = ATgetArgument(t, 1);
                          {
                            ATerm d_16 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = h_4;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = i_4;
                      {
                        ATerm e_16 = t;
                        int f_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm g_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(f_16);
                            t = i_10;
                          }
                        else
                          {
                            t = e_16;
                            if(match_cons(t, sym_cf_1))
                              {
                                j_4 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = j_4;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm h_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = i_10;
                          }
                      }
                      t = term_i_16;
                    }
                  }
              }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_10 = ATgetFirst((ATermList) t);
              m_10 = (ATerm) ATgetNext((ATermList) t);
              t = m_10;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm j_16 = t;
                  int k_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_10;
                      t = y_8(m_84, i_10, k_10, t);
                      LocalPopChoice(k_16);
                    }
                  else
                    {
                      t = j_16;
                      {
                        ATerm l_16 = t;
                        int m_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_11 = NULL;
                            t = i_10;
                            t = is_ins_0_0(t);
                            t = l_10;
                            t = m_84(t);
                            a_11 = t;
                            t = (ATerm) ATinsert(ATempty, a_11);
                            LocalPopChoice(m_16);
                          }
                        else
                          {
                            t = l_16;
                            {
                              ATerm u_4 = NULL,y_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL;
                              t = i_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  y_4 = ATgetArgument(t, 0);
                                  g_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_16 = ATgetArgument(t, 2);
                                  }
                                }
                              else
                                _fail(t);
                              t = y_4;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  a_5 = ATgetFirst((ATermList) t);
                                  e_5 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = e_5;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = g_5;
                              if(match_cons(t, sym_opt_1))
                                {
                                  i_5 = ATgetArgument(t, 0);
                                  t = i_5;
                                  if((a_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = i_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      i_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_5;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      c_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_5;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      k_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_5;
                                  if((c_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = i_10;
                                }
                              t = l_10;
                              t = m_84(t);
                              u_4 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, u_4);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = h_10;
                  t = y_8(m_84, i_10, k_10, t);
                }
            }
          else
            {
              t = h_10;
              t = y_8(m_84, i_10, k_10, t);
            }
        }
      LocalPopChoice(u_14);
    }
  else
    {
      t = k_14;
      t = ReplConsConc_1_0(m_84, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,x_12 = NULL,y_12 = NULL,b_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      e_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_13;
  if(match_cons(t, sym_prod_3))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
      {
        ATerm o_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = f_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_12 = ATgetFirst((ATermList) t);
      x_12 = (ATerm) ATgetNext((ATermList) t);
      t = x_12;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_13;
      if(match_cons(t, sym_opt_1))
        {
          h_13 = ATgetArgument(t, 0);
          t = k_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_12 = ATgetFirst((ATermList) t);
              b_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_13;
          if((u_12 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = y_12;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              h_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_12;
          if(match_cons(t, sym_cf_1))
            {
              v_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_13;
          if(match_cons(t, sym_opt_1))
            {
              i_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_12 = ATgetFirst((ATermList) t);
              b_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_13;
          if((v_12 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = y_12;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_13;
      if(match_cons(t, sym_opt_1))
        {
          h_13 = ATgetArgument(t, 0);
          t = k_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              h_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_13;
          if(match_cons(t, sym_opt_1))
            {
              i_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_16 = t;
  if((PushChoice() == 0))
    {
      ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
      u_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          v_19 = ATgetArgument(t, 0);
          t_19 = ATgetArgument(t, 1);
          {
            ATerm h_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,a_9 = NULL,z_8 = NULL,l_22 = NULL;
            t = SSLgetAnnotations(u_19);
            h_21 = t;
            t = v_19;
            if(match_cons(t, sym_prod_3))
              {
                l_21 = ATgetArgument(t, 0);
                m_21 = ATgetArgument(t, 1);
                v_21 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_19);
            k_21 = t;
            t = m_21;
            if(match_cons(t, sym_cf_1))
              {
                l_22 = ATgetArgument(t, 0);
                {
                  ATerm a_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,t_8 = NULL,r_8 = NULL;
                  t = SSLgetAnnotations(m_21);
                  a_23 = t;
                  t = l_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      d_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_22);
                  c_23 = t;
                  t = d_23;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, d_23);
                  r_8 = t;
                  t = SSLsetAnnotations(r_8, c_23);
                  e_23 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, e_23);
                  t_8 = t;
                  t = SSLsetAnnotations(t_8, a_23);
                }
              }
            else
              {
                ATerm h_23 = NULL,x_8 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    l_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_21);
                h_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, l_22);
                x_8 = t;
                t = SSLsetAnnotations(x_8, h_23);
              }
            w_21 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, l_21, w_21, v_21);
            z_8 = t;
            t = SSLsetAnnotations(z_8, k_21);
            x_21 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, x_21, t_19);
            a_9 = t;
            t = SSLsetAnnotations(a_9, h_21);
          }
        }
      else
        {
          ATerm p_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,c_9 = NULL,b_9 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              v_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_19);
          p_23 = t;
          t = v_19;
          if(match_cons(t, sym_opt_1))
            {
              s_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_19);
          r_23 = t;
          t = s_23;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, s_23);
          b_9 = t;
          t = SSLsetAnnotations(b_9, r_23);
          t_23 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, t_23);
          c_9 = t;
          t = SSLsetAnnotations(c_9, p_23);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_16;
    }
  return(t);
}
ATerm implodeAsfix_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  ATerm w_29 = NULL;
  static ATerm o_34 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_33 = NULL,f_34 = NULL,g_34 = NULL;
              f_34 = t;
              if(match_cons(t, sym_appl_2))
                {
                  g_34 = ATgetArgument(t, 0);
                  x_33 = ATgetArgument(t, 1);
                  {
                    ATerm u_16 = t;
                    int v_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_34;
                        t = a_85(t);
                        t = f_34;
                        t = skip_concrete_1_0(o_34, t);
                        LocalPopChoice(v_16);
                      }
                    else
                      {
                        t = u_16;
                        {
                          ATerm s_17 = NULL,a_18 = NULL,d_9 = NULL;
                          t = SSLgetAnnotations(f_34);
                          s_17 = t;
                          t = x_33;
                          t = filter_1_0(r_1, t);
                          a_18 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, g_34, a_18);
                          d_9 = t;
                          t = SSLsetAnnotations(d_9, s_17);
                          {
                            ATerm w_16 = t;
                            int x_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = o_34(t);
                                LocalPopChoice(x_16);
                              }
                            else
                              {
                                t = w_16;
                                {
                                  ATerm y_16 = t;
                                  int c_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ReplCons_1_0(o_34, t);
                                      LocalPopChoice(c_17);
                                    }
                                  else
                                    {
                                      t = y_16;
                                      {
                                        ATerm d_17 = t;
                                        int e_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                x_19 = ATgetArgument(t, 0);
                                                y_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = y_19;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                z_19 = ATgetFirst((ATermList) t);
                                                a_20 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = a_20;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = x_19;
                                            t = injection_0_0(t);
                                            t = z_19;
                                            t = o_34(t);
                                            LocalPopChoice(e_17);
                                          }
                                        else
                                          {
                                            t = d_17;
                                            {
                                              ATerm g_17 = t;
                                              int i_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Tuple_0_0(t);
                                                  t = o_34(t);
                                                  LocalPopChoice(i_17);
                                                }
                                              else
                                                {
                                                  t = g_17;
                                                  t = FlatAlt_0_0(t);
                                                  t = o_34(t);
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
                      g_34 = ATgetArgument(t, 0);
                      {
                        ATerm l_17 = t;
                        int m_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_34;
                            t = a_85(t);
                            t = f_34;
                            t = skip_concrete_1_0(o_34, t);
                            LocalPopChoice(m_17);
                          }
                        else
                          {
                            t = l_17;
                            {
                              ATerm z_23 = NULL,c_24 = NULL,g_9 = NULL;
                              t = SSLgetAnnotations(f_34);
                              z_23 = t;
                              t = g_34;
                              t = map_1_0(o_34, t);
                              c_24 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, c_24);
                              g_9 = t;
                              t = SSLsetAnnotations(g_9, z_23);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = f_34;
                      t = a_85(t);
                      t = f_34;
                      t = skip_concrete_1_0(o_34, t);
                    }
                }
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              t = SRTS_all(o_34, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      w_29 = ATgetArgument(t, 0);
      {
        ATerm o_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_29;
  t = o_34(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,p_35 = NULL,q_35 = NULL,v_35 = NULL;
  m_35 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_35;
  if(match_cons(t, sym_prod_3))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      p_35 = ATgetArgument(t, 1);
      {
        ATerm r_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_35;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm x_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_17);
        {
          ATerm n_24 = NULL;
          t = term_y_17;
          n_24 = t;
          t = SSL_mkterm(n_24, v_35);
        }
      }
    else
      {
        t = t_17;
        {
          ATerm u_24 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              q_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_35;
          if(match_cons(t, sym_seq_1))
            {
              ATerm c_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_y_17;
          u_24 = t;
          t = SSL_mkterm(u_24, v_35);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(v_86, t);
    return(t);
  }
  t = v_86(t);
  t = SRTS_all(t_1, t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm w_36 = NULL,z_36 = NULL,a_37 = NULL,c_37 = NULL,e_37 = NULL,x_40 = NULL,y_40 = NULL,a_41 = NULL;
  static ATerm r_42 (ATerm t)
  {
    ATerm e_41 = NULL,f_41 = NULL,m_41 = NULL,o_41 = NULL;
    if(match_cons(t, sym__2))
      {
        e_41 = ATgetArgument(t, 0);
        o_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_41;
    if(match_cons(t, sym_alt_2))
      {
        f_41 = ATgetArgument(t, 0);
        m_41 = ATgetArgument(t, 1);
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_41;
              if(((a_37 != NULL) && (a_37 != t)))
                _fail(t);
              else
                a_37 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, o_41, not_null(e_37));
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              {
                ATerm g_18 = t;
                int g_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_41;
                    if(((a_37 != NULL) && (a_37 != t)))
                      _fail(t);
                    else
                      a_37 = t;
                    t = m_41;
                    if(((c_37 != NULL) && (c_37 != t)))
                      _fail(t);
                    else
                      c_37 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, o_41, not_null(e_37));
                    LocalPopChoice(g_19);
                  }
                else
                  {
                    t = g_18;
                    {
                      ATerm h_42 = NULL,i_42 = NULL;
                      t = term_h_19;
                      i_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_41, term_h_19);
                      t = t_9(o_41, i_42, t);
                      h_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_41, h_42);
                      t = r_42(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = e_41;
        if(((a_37 != NULL) && (a_37 != t)))
          _fail(t);
        else
          a_37 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, o_41, not_null(e_37));
      }
    return(t);
  }
  x_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL,s_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,l_27 = NULL,m_27 = NULL,w_12 = NULL,t_12 = NULL,s_12 = NULL,r_12 = NULL,z_27 = NULL;
        t = SSLgetAnnotations(x_40);
        n_26 = t;
        t = y_40;
        if(match_cons(t, sym_prod_3))
          {
            v_26 = ATgetArgument(t, 0);
            w_26 = ATgetArgument(t, 1);
            x_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_40);
        s_26 = t;
        t = v_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_27 = ATgetFirst((ATermList) t);
            e_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_26);
        c_27 = t;
        t = d_27;
        if(match_cons(t, sym_cf_1))
          {
            z_27 = ATgetArgument(t, 0);
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_28 = NULL,q_12 = NULL;
                  t = SSLgetAnnotations(d_27);
                  q_28 = t;
                  t = z_27;
                  if(((a_37 != NULL) && (a_37 != t)))
                    _fail(t);
                  else
                    a_37 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, z_27);
                  q_12 = t;
                  t = SSLsetAnnotations(q_12, q_28);
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                  t = d_27;
                  if(((a_37 != NULL) && (a_37 != t)))
                    _fail(t);
                  else
                    a_37 = t;
                  t = d_27;
                }
            }
          }
        else
          {
            t = d_27;
            if(((a_37 != NULL) && (a_37 != t)))
              _fail(t);
            else
              a_37 = t;
            t = d_27;
          }
        l_27 = t;
        t = e_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_27), l_27);
        r_12 = t;
        t = SSLsetAnnotations(r_12, c_27);
        m_27 = t;
        t = w_26;
        if(match_cons(t, sym_cf_1))
          {
            a_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_26);
        z_26 = t;
        t = a_27;
        if(match_cons(t, sym_alt_2))
          {
            w_36 = ATgetArgument(t, 0);
            z_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, a_27);
        s_12 = t;
        t = SSLsetAnnotations(s_12, z_26);
        b_27 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, m_27, b_27, x_26);
        t_12 = t;
        t = SSLsetAnnotations(t_12, s_26);
        y_26 = t;
        t = a_41;
        if(((e_37 != NULL) && (e_37 != t)))
          _fail(t);
        else
          e_37 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, y_26, a_41);
        w_12 = t;
        t = SSLsetAnnotations(w_12, n_26);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          ATerm z_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,r_13 = NULL,d_13 = NULL,a_13 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(x_40);
          z_28 = t;
          t = y_40;
          if(match_cons(t, sym_prod_3))
            {
              d_29 = ATgetArgument(t, 0);
              e_29 = ATgetArgument(t, 1);
              k_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_40);
          c_29 = t;
          t = d_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_29 = ATgetFirst((ATermList) t);
              r_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_29);
          p_29 = t;
          t = q_29;
          if(((a_37 != NULL) && (a_37 != t)))
            _fail(t);
          else
            a_37 = t;
          t = r_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(r_29), q_29);
          z_12 = t;
          t = SSLsetAnnotations(z_12, p_29);
          s_29 = t;
          t = e_29;
          if(match_cons(t, sym_lex_1))
            {
              n_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_29);
          m_29 = t;
          t = n_29;
          if(match_cons(t, sym_alt_2))
            {
              w_36 = ATgetArgument(t, 0);
              z_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, n_29);
          a_13 = t;
          t = SSLsetAnnotations(a_13, m_29);
          o_29 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, s_29, o_29, k_29);
          d_13 = t;
          t = SSLsetAnnotations(d_13, c_29);
          l_29 = t;
          t = a_41;
          if(((e_37 != NULL) && (e_37 != t)))
            _fail(t);
          else
            e_37 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, l_29, a_41);
          r_13 = t;
          t = SSLsetAnnotations(r_13, z_28);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, w_36, z_36), term_h_19);
  t = r_42(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,p_44 = NULL;
  m_44 = t;
  if(match_cons(t, sym_sort_1))
    {
      n_44 = ATgetArgument(t, 0);
      {
        ATerm h_30 = NULL,l_14 = NULL;
        t = SSLgetAnnotations(m_44);
        h_30 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, n_44);
        l_14 = t;
        t = SSLsetAnnotations(l_14, h_30);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          n_44 = ATgetArgument(t, 0);
          {
            ATerm v_30 = NULL,x_30 = NULL,m_14 = NULL;
            t = SSLgetAnnotations(m_44);
            v_30 = t;
            t = n_44;
            t = injective_alt_0_0(t);
            x_30 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, x_30);
            m_14 = t;
            t = SSLsetAnnotations(m_14, v_30);
          }
        }
      else
        {
          ATerm o_31 = NULL,t_31 = NULL,v_31 = NULL,t_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              n_44 = ATgetArgument(t, 0);
              p_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_44);
          o_31 = t;
          t = n_44;
          t = injective_alt_0_0(t);
          t_31 = t;
          t = p_44;
          t = injective_alt_0_0(t);
          v_31 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, t_31, v_31);
          t_14 = t;
          t = SSLsetAnnotations(t_14, o_31);
        }
    }
  return(t);
}
static ATerm u_58 (ATerm k_47, ATerm n_47, ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm q_47 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,q_48 = NULL,u_48 = NULL,g_15 = NULL,a_15 = NULL,z_14 = NULL;
  t = SSLgetAnnotations(p_47);
  q_47 = t;
  t = k_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_48 = ATgetFirst((ATermList) t);
      k_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_47);
  g_48 = t;
  t = h_48;
  if(match_cons(t, sym_varsym_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_48);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, q_48);
  z_14 = t;
  t = SSLsetAnnotations(z_14, m_48);
  u_48 = t;
  t = k_48;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_48), u_48);
  a_15 = t;
  t = SSLsetAnnotations(a_15, g_48);
  l_48 = t;
  t = o_47;
  {
    ATerm n_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(v_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_19;
      }
  }
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, l_48, n_47, f_48);
  g_15 = t;
  t = SSLsetAnnotations(g_15, q_47);
  return(t);
}
static ATerm v_58 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm k_49, ATerm t)
{
  ATerm m_49 = NULL,e_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,p_50 = NULL,q_50 = NULL,m_15 = NULL,k_15 = NULL,x_51 = NULL;
  t = SSLgetAnnotations(k_49);
  m_49 = t;
  t = f_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_50 = ATgetFirst((ATermList) t);
      m_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_49);
  k_50 = t;
  t = l_50;
  if(match_cons(t, sym_sort_1))
    {
      x_51 = ATgetArgument(t, 0);
      {
        ATerm l_32 = NULL,h_15 = NULL;
        t = SSLgetAnnotations(l_50);
        l_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, x_51);
        h_15 = t;
        t = SSLsetAnnotations(h_15, l_32);
      }
    }
  else
    {
      ATerm t_32 = NULL,x_32 = NULL,a_33 = NULL,e_33 = NULL,j_15 = NULL,i_15 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          x_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_50);
      t_32 = t;
      t = x_51;
      if(match_cons(t, sym_sort_1))
        {
          a_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_51);
      x_32 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, a_33);
      i_15 = t;
      t = SSLsetAnnotations(i_15, x_32);
      e_33 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, e_33);
      j_15 = t;
      t = SSLsetAnnotations(j_15, t_32);
    }
  p_50 = t;
  t = m_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_50), p_50);
  k_15 = t;
  t = SSLsetAnnotations(k_15, k_50);
  q_50 = t;
  t = g_49;
  t = injective_alt_0_0(t);
  e_50 = t;
  t = h_49;
  {
    ATerm o_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_19;
      }
  }
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, q_50, e_50, j_50);
  m_15 = t;
  t = SSLsetAnnotations(m_15, m_49);
  return(t);
}
static ATerm w_58 (ATerm l_52, ATerm q_52, ATerm w_52, ATerm z_52, ATerm t)
{
  ATerm a_53 = NULL,e_53 = NULL,f_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,z_15 = NULL,o_15 = NULL;
  t = SSLgetAnnotations(z_52);
  a_53 = t;
  t = l_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_53 = ATgetFirst((ATermList) t);
      n_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_52);
  l_53 = t;
  t = m_53;
  {
    ATerm p_19 = t;
    if((PushChoice() == 0))
      {
        ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,n_15 = NULL;
        t_53 = t;
        if(match_cons(t, sym_lit_1))
          {
            s_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_53);
        r_53 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, s_53);
        n_15 = t;
        t = SSLsetAnnotations(n_15, r_53);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_19;
      }
  }
  o_53 = t;
  t = n_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_53), o_53);
  o_15 = t;
  t = SSLsetAnnotations(o_15, l_53);
  p_53 = t;
  t = q_52;
  {
    static ATerm g_59 (ATerm t)
    {
      ATerm p_56 = NULL,w_56 = NULL,x_56 = NULL;
      p_56 = t;
      if(match_cons(t, sym_sort_1))
        {
          w_56 = ATgetArgument(t, 0);
          {
            ATerm m_33 = NULL,p_15 = NULL;
            t = SSLgetAnnotations(p_56);
            m_33 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, w_56);
            p_15 = t;
            t = SSLsetAnnotations(p_15, m_33);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              w_56 = ATgetArgument(t, 0);
              {
                ATerm z_33 = NULL,b_34 = NULL,q_15 = NULL;
                t = SSLgetAnnotations(p_56);
                z_33 = t;
                t = w_56;
                t = g_59(t);
                b_34 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, b_34);
                q_15 = t;
                t = SSLsetAnnotations(q_15, z_33);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  w_56 = ATgetArgument(t, 0);
                  {
                    ATerm l_34 = NULL,p_34 = NULL,r_15 = NULL;
                    t = SSLgetAnnotations(p_56);
                    l_34 = t;
                    t = w_56;
                    t = g_59(t);
                    p_34 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, p_34);
                    r_15 = t;
                    t = SSLsetAnnotations(r_15, l_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      w_56 = ATgetArgument(t, 0);
                      {
                        ATerm b_35 = NULL,l_35 = NULL,s_15 = NULL;
                        t = SSLgetAnnotations(p_56);
                        b_35 = t;
                        t = w_56;
                        t = g_59(t);
                        l_35 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, l_35);
                        s_15 = t;
                        t = SSLsetAnnotations(s_15, b_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          w_56 = ATgetArgument(t, 0);
                          {
                            ATerm b_36 = NULL,d_36 = NULL,t_15 = NULL;
                            t = SSLgetAnnotations(p_56);
                            b_36 = t;
                            t = w_56;
                            t = g_59(t);
                            d_36 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, d_36);
                            t_15 = t;
                            t = SSLsetAnnotations(t_15, b_36);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              w_56 = ATgetArgument(t, 0);
                              x_56 = ATgetArgument(t, 1);
                              {
                                ATerm k_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,v_15 = NULL,u_15 = NULL;
                                t = SSLgetAnnotations(p_56);
                                k_36 = t;
                                t = w_56;
                                t = g_59(t);
                                n_36 = t;
                                t = x_56;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    p_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(x_56);
                                o_36 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, p_36);
                                u_15 = t;
                                t = SSLsetAnnotations(u_15, o_36);
                                q_36 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_sep_2, n_36, q_36);
                                v_15 = t;
                                t = SSLsetAnnotations(v_15, k_36);
                              }
                            }
                          else
                            {
                              ATerm b_37 = NULL,h_37 = NULL,j_37 = NULL,l_37 = NULL,n_37 = NULL,x_15 = NULL,w_15 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  w_56 = ATgetArgument(t, 0);
                                  x_56 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(p_56);
                              b_37 = t;
                              t = w_56;
                              t = g_59(t);
                              h_37 = t;
                              t = x_56;
                              if(match_cons(t, sym_lit_1))
                                {
                                  l_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(x_56);
                              j_37 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, l_37);
                              w_15 = t;
                              t = SSLsetAnnotations(w_15, j_37);
                              n_37 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, h_37, n_37);
                              x_15 = t;
                              t = SSLsetAnnotations(x_15, b_37);
                            }
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = g_59(t);
  }
  e_53 = t;
  t = w_52;
  {
    ATerm q_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(z_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_19;
      }
  }
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, p_53, e_53, f_53);
  z_15 = t;
  t = SSLsetAnnotations(z_15, a_53);
  return(t);
}
static ATerm a_59 (ATerm b_57, ATerm f_57, ATerm g_57, ATerm i_57, ATerm t)
{
  ATerm m_57 = NULL,s_57 = NULL,a_16 = NULL;
  t = SSLgetAnnotations(i_57);
  m_57 = t;
  t = g_57;
  t = oncetd_1_0(d_2, t);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, b_57, f_57, s_57);
  a_16 = t;
  t = SSLsetAnnotations(a_16, m_57);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm x_48 = NULL,c_49 = NULL,d_49 = NULL,f_15 = NULL;
  d_49 = t;
  if(match_cons(t, sym_cons_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, c_49);
  f_15 = t;
  t = SSLsetAnnotations(f_15, x_48);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm a_52 = NULL,c_52 = NULL,h_52 = NULL,l_15 = NULL;
  h_52 = t;
  if(match_cons(t, sym_cons_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_52);
  a_52 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, c_52);
  l_15 = t;
  t = SSLsetAnnotations(l_15, a_52);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,y_15 = NULL;
  a_57 = t;
  if(match_cons(t, sym_cons_1))
    {
      z_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_57);
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, z_56);
  y_15 = t;
  t = SSLsetAnnotations(y_15, y_56);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  if(match_string(t, "bracket"))
    {
      t = u_57;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = u_57;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,z_57 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  h_58 = t;
  if(match_cons(t, sym_prod_3))
    {
      i_58 = ATgetArgument(t, 0);
      j_58 = ATgetArgument(t, 1);
      l_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_58;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = j_58;
      if(match_cons(t, sym_cf_1))
        {
          k_58 = ATgetArgument(t, 0);
          t = k_58;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              e_58 = ATgetArgument(t, 0);
              w_57 = ATgetArgument(t, 1);
              t = i_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_57 = ATgetFirst((ATermList) t);
                  d_58 = (ATerm) ATgetNext((ATermList) t);
                  t = d_58;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = z_57;
                      if(match_cons(t, sym_cf_1))
                        {
                          b_58 = ATgetArgument(t, 0);
                          t = b_58;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              c_58 = ATgetArgument(t, 0);
                              v_57 = ATgetArgument(t, 1);
                              {
                                ATerm r_19 = t;
                                int s_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = u_58(i_58, j_58, l_58, h_58, t);
                                    LocalPopChoice(s_19);
                                  }
                                else
                                  {
                                    t = r_19;
                                    {
                                      ATerm w_19 = t;
                                      int b_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = v_58(i_58, j_58, l_58, h_58, t);
                                          LocalPopChoice(b_20);
                                        }
                                      else
                                        {
                                          t = w_19;
                                          {
                                            ATerm c_20 = t;
                                            int d_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = w_58(i_58, j_58, l_58, h_58, t);
                                                LocalPopChoice(d_20);
                                              }
                                            else
                                              {
                                                t = c_20;
                                                {
                                                  ATerm e_20 = t;
                                                  int f_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = e_58;
                                                      if((c_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = w_57;
                                                      if((v_57 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = h_58;
                                                      LocalPopChoice(f_20);
                                                    }
                                                  else
                                                    {
                                                      t = e_20;
                                                      t = a_59(i_58, j_58, l_58, h_58, t);
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
                              ATerm g_20 = t;
                              int h_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = u_58(i_58, j_58, l_58, h_58, t);
                                  LocalPopChoice(h_20);
                                }
                              else
                                {
                                  t = g_20;
                                  {
                                    ATerm k_20 = t;
                                    int l_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = v_58(i_58, j_58, l_58, h_58, t);
                                        LocalPopChoice(l_20);
                                      }
                                    else
                                      {
                                        t = k_20;
                                        {
                                          ATerm m_20 = t;
                                          int r_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = w_58(i_58, j_58, l_58, h_58, t);
                                              LocalPopChoice(r_20);
                                            }
                                          else
                                            {
                                              t = m_20;
                                              t = a_59(i_58, j_58, l_58, h_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm s_20 = t;
                          int u_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = u_58(i_58, j_58, l_58, h_58, t);
                              LocalPopChoice(u_20);
                            }
                          else
                            {
                              t = s_20;
                              {
                                ATerm w_20 = t;
                                int z_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = v_58(i_58, j_58, l_58, h_58, t);
                                    LocalPopChoice(z_20);
                                  }
                                else
                                  {
                                    t = w_20;
                                    {
                                      ATerm a_21 = t;
                                      int b_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = w_58(i_58, j_58, l_58, h_58, t);
                                          LocalPopChoice(b_21);
                                        }
                                      else
                                        {
                                          t = a_21;
                                          t = a_59(i_58, j_58, l_58, h_58, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = z_57;
                      {
                        ATerm c_21 = t;
                        int f_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = u_58(i_58, j_58, l_58, h_58, t);
                            LocalPopChoice(f_21);
                          }
                        else
                          {
                            t = c_21;
                            {
                              ATerm i_21 = t;
                              int j_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = v_58(i_58, j_58, l_58, h_58, t);
                                  LocalPopChoice(j_21);
                                }
                              else
                                {
                                  t = i_21;
                                  {
                                    ATerm y_21 = t;
                                    int e_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = w_58(i_58, j_58, l_58, h_58, t);
                                        LocalPopChoice(e_22);
                                      }
                                    else
                                      {
                                        t = y_21;
                                        t = a_59(i_58, j_58, l_58, h_58, t);
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
                  ATerm f_22 = t;
                  int g_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_58(i_58, j_58, l_58, h_58, t);
                      LocalPopChoice(g_22);
                    }
                  else
                    {
                      t = f_22;
                      {
                        ATerm i_22 = t;
                        int j_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_58(i_58, j_58, l_58, h_58, t);
                            LocalPopChoice(j_22);
                          }
                        else
                          {
                            t = i_22;
                            {
                              ATerm k_22 = t;
                              int m_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = w_58(i_58, j_58, l_58, h_58, t);
                                  LocalPopChoice(m_22);
                                }
                              else
                                {
                                  t = k_22;
                                  t = a_59(i_58, j_58, l_58, h_58, t);
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
                  e_58 = ATgetArgument(t, 0);
                  t = i_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_57 = ATgetFirst((ATermList) t);
                      d_58 = (ATerm) ATgetNext((ATermList) t);
                      t = d_58;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = z_57;
                          if(match_cons(t, sym_cf_1))
                            {
                              b_58 = ATgetArgument(t, 0);
                              t = b_58;
                              if(match_cons(t, sym_iter_1))
                                {
                                  c_58 = ATgetArgument(t, 0);
                                  {
                                    ATerm o_22 = t;
                                    int p_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = u_58(i_58, j_58, l_58, h_58, t);
                                        LocalPopChoice(p_22);
                                      }
                                    else
                                      {
                                        t = o_22;
                                        {
                                          ATerm v_22 = t;
                                          int w_22 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = v_58(i_58, j_58, l_58, h_58, t);
                                              LocalPopChoice(w_22);
                                            }
                                          else
                                            {
                                              t = v_22;
                                              {
                                                ATerm b_23 = t;
                                                int f_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_58(i_58, j_58, l_58, h_58, t);
                                                    LocalPopChoice(f_23);
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                    {
                                                      ATerm g_23 = t;
                                                      int l_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = e_58;
                                                          if((c_58 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = h_58;
                                                          LocalPopChoice(l_23);
                                                        }
                                                      else
                                                        {
                                                          t = g_23;
                                                          t = a_59(i_58, j_58, l_58, h_58, t);
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
                                  ATerm m_23 = t;
                                  int n_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = u_58(i_58, j_58, l_58, h_58, t);
                                      LocalPopChoice(n_23);
                                    }
                                  else
                                    {
                                      t = m_23;
                                      {
                                        ATerm o_23 = t;
                                        int q_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = v_58(i_58, j_58, l_58, h_58, t);
                                            LocalPopChoice(q_23);
                                          }
                                        else
                                          {
                                            t = o_23;
                                            {
                                              ATerm u_23 = t;
                                              int v_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = w_58(i_58, j_58, l_58, h_58, t);
                                                  LocalPopChoice(v_23);
                                                }
                                              else
                                                {
                                                  t = u_23;
                                                  t = a_59(i_58, j_58, l_58, h_58, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm w_23 = t;
                              int x_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = u_58(i_58, j_58, l_58, h_58, t);
                                  LocalPopChoice(x_23);
                                }
                              else
                                {
                                  t = w_23;
                                  {
                                    ATerm y_23 = t;
                                    int b_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = v_58(i_58, j_58, l_58, h_58, t);
                                        LocalPopChoice(b_24);
                                      }
                                    else
                                      {
                                        t = y_23;
                                        {
                                          ATerm d_24 = t;
                                          int g_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = w_58(i_58, j_58, l_58, h_58, t);
                                              LocalPopChoice(g_24);
                                            }
                                          else
                                            {
                                              t = d_24;
                                              t = a_59(i_58, j_58, l_58, h_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = z_57;
                          {
                            ATerm i_24 = t;
                            int j_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_58(i_58, j_58, l_58, h_58, t);
                                LocalPopChoice(j_24);
                              }
                            else
                              {
                                t = i_24;
                                {
                                  ATerm k_24 = t;
                                  int m_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_58(i_58, j_58, l_58, h_58, t);
                                      LocalPopChoice(m_24);
                                    }
                                  else
                                    {
                                      t = k_24;
                                      {
                                        ATerm o_24 = t;
                                        int p_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = w_58(i_58, j_58, l_58, h_58, t);
                                            LocalPopChoice(p_24);
                                          }
                                        else
                                          {
                                            t = o_24;
                                            t = a_59(i_58, j_58, l_58, h_58, t);
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
                      ATerm r_24 = t;
                      int s_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_58(i_58, j_58, l_58, h_58, t);
                          LocalPopChoice(s_24);
                        }
                      else
                        {
                          t = r_24;
                          {
                            ATerm t_24 = t;
                            int o_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = v_58(i_58, j_58, l_58, h_58, t);
                                LocalPopChoice(o_25);
                              }
                            else
                              {
                                t = t_24;
                                {
                                  ATerm p_25 = t;
                                  int s_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = w_58(i_58, j_58, l_58, h_58, t);
                                      LocalPopChoice(s_25);
                                    }
                                  else
                                    {
                                      t = p_25;
                                      t = a_59(i_58, j_58, l_58, h_58, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = i_58;
                  {
                    ATerm u_25 = t;
                    int v_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = u_58(i_58, j_58, l_58, h_58, t);
                        LocalPopChoice(v_25);
                      }
                    else
                      {
                        t = u_25;
                        {
                          ATerm w_25 = t;
                          int y_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = v_58(i_58, j_58, l_58, h_58, t);
                              LocalPopChoice(y_25);
                            }
                          else
                            {
                              t = w_25;
                              {
                                ATerm a_26 = t;
                                int b_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = w_58(i_58, j_58, l_58, h_58, t);
                                    LocalPopChoice(b_26);
                                  }
                                else
                                  {
                                    t = a_26;
                                    t = a_59(i_58, j_58, l_58, h_58, t);
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
              k_58 = ATgetArgument(t, 0);
              t = k_58;
              if(match_string(t, "<START>"))
                {
                  t = i_58;
                  {
                    ATerm c_26 = t;
                    int d_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = u_58(i_58, j_58, l_58, h_58, t);
                        LocalPopChoice(d_26);
                      }
                    else
                      {
                        t = c_26;
                        {
                          ATerm g_26 = t;
                          int h_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = v_58(i_58, j_58, l_58, h_58, t);
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
                                    t = w_58(i_58, j_58, l_58, h_58, t);
                                    LocalPopChoice(m_26);
                                  }
                                else
                                  {
                                    t = l_26;
                                    {
                                      ATerm p_26 = t;
                                      int q_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = a_59(i_58, j_58, l_58, h_58, t);
                                          LocalPopChoice(q_26);
                                        }
                                      else
                                        {
                                          t = p_26;
                                          t = h_58;
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
                  t = i_58;
                  {
                    ATerm r_26 = t;
                    int t_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = u_58(i_58, j_58, l_58, h_58, t);
                        LocalPopChoice(t_26);
                      }
                    else
                      {
                        t = r_26;
                        {
                          ATerm u_26 = t;
                          int f_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = v_58(i_58, j_58, l_58, h_58, t);
                              LocalPopChoice(f_27);
                            }
                          else
                            {
                              t = u_26;
                              {
                                ATerm g_27 = t;
                                int h_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = w_58(i_58, j_58, l_58, h_58, t);
                                    LocalPopChoice(h_27);
                                  }
                                else
                                  {
                                    t = g_27;
                                    t = a_59(i_58, j_58, l_58, h_58, t);
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
              t = i_58;
              {
                ATerm i_27 = t;
                int j_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_58(i_58, j_58, l_58, h_58, t);
                    LocalPopChoice(j_27);
                  }
                else
                  {
                    t = i_27;
                    {
                      ATerm k_27 = t;
                      int n_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_58(i_58, j_58, l_58, h_58, t);
                          LocalPopChoice(n_27);
                        }
                      else
                        {
                          t = k_27;
                          {
                            ATerm o_27 = t;
                            int p_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_58(i_58, j_58, l_58, h_58, t);
                                LocalPopChoice(p_27);
                              }
                            else
                              {
                                t = o_27;
                                t = a_59(i_58, j_58, l_58, h_58, t);
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
      t = i_58;
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_58(i_58, j_58, l_58, h_58, t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            {
              ATerm s_27 = t;
              int t_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_58(i_58, j_58, l_58, h_58, t);
                  LocalPopChoice(t_27);
                }
              else
                {
                  t = s_27;
                  {
                    ATerm u_27 = t;
                    int v_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_58(i_58, j_58, l_58, h_58, t);
                        LocalPopChoice(v_27);
                      }
                    else
                      {
                        t = u_27;
                        t = a_59(i_58, j_58, l_58, h_58, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  static ATerm f_2 (ATerm t)
  {
    t = bottomup_1_0(w_86, t);
    return(t);
  }
  t = SRTS_all(f_2, t);
  t = w_86(t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,p_60 = NULL,t_60 = NULL,v_60 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      p_60 = ATgetArgument(t, 0);
      t_60 = ATgetArgument(t, 1);
      t = p_60;
      if(match_cons(t, sym_Ins_1))
        {
          l_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_60 = ATgetFirst((ATermList) t);
          j_60 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(j_60), k_60), l_60);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              k_60 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, k_60), l_60);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, l_60);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          p_60 = ATgetArgument(t, 0);
          t_60 = ATgetArgument(t, 1);
          v_60 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_60), (ATerm) ATinsert(ATempty, t_60)), p_60);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm y_61 = NULL,e_62 = NULL,g_62 = NULL,h_62 = NULL,m_62 = NULL,n_62 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      g_62 = ATgetArgument(t, 0);
      n_62 = ATgetArgument(t, 1);
      t = n_62;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_62;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = g_62;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  h_62 = ATgetArgument(t, 0);
                  m_62 = ATgetArgument(t, 1);
                  t = g_62;
                }
              else
                {
                  t = g_62;
                }
            }
        }
      else
        {
          t = g_62;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = n_62;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  h_62 = ATgetArgument(t, 0);
                  m_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, h_62, (ATerm) ATmakeAppl(sym_Conc_2, m_62, n_62));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          g_62 = ATgetArgument(t, 0);
          n_62 = ATgetArgument(t, 1);
          e_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_62;
      if(match_cons(t, sym_Conc_3))
        {
          h_62 = ATgetArgument(t, 0);
          m_62 = ATgetArgument(t, 1);
          y_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, h_62, m_62, (ATerm) ATmakeAppl(sym_Conc_3, y_61, n_62, e_62));
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_65 = NULL,g_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_65 = ATgetFirst((ATermList) t);
          g_65 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, f_65), g_65);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              f_65 = ATgetArgument(t, 0);
              g_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, f_65, (ATerm) ATmakeAppl(sym_Ins_1, g_65));
        }
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm y_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            LocalPopChoice(a_28);
          }
        else
          {
            t = y_27;
            {
              ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,b_38 = NULL,p_38 = NULL,v_38 = NULL,x_38 = NULL,z_16 = NULL;
              c_66 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  d_66 = ATgetArgument(t, 0);
                  e_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_66);
              b_38 = t;
              t = d_66;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_38 = ATgetFirst((ATermList) t);
                  x_38 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, v_38), x_38);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      v_38 = ATgetArgument(t, 0);
                      x_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, v_38, (ATerm) ATmakeAppl(sym_Ins_1, x_38));
                }
              p_38 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, p_38, e_66);
              z_16 = t;
              t = SSLsetAnnotations(z_16, b_38);
            }
          }
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_2_0(g_2, _id, t);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,n_39 = NULL,r_39 = NULL,a_17 = NULL;
        x_66 = t;
        if(match_cons(t, sym_Conc_2))
          {
            y_66 = ATgetArgument(t, 0);
            z_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_66);
        n_39 = t;
        t = z_66;
        t = conc_to_cons_0_0(t);
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, y_66, r_39);
        a_17 = t;
        t = SSLsetAnnotations(a_17, n_39);
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
  }
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,g_67 = NULL,b_17 = NULL;
            t = CTC2_0_0(t);
            g_67 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_67 = ATgetFirst((ATermList) t);
                c_67 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_67);
            a_67 = t;
            t = b_67;
            t = conc_to_cons_0_0(t);
            d_67 = t;
            t = (ATerm) ATinsert(CheckATermList(c_67), d_67);
            b_17 = t;
            t = SSLsetAnnotations(b_17, a_67);
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            {
              ATerm j_67 = NULL;
              if(match_cons(t, sym_Ins_1))
                {
                  j_67 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, j_67);
            }
          }
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
      }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm p_69 = NULL,u_69 = NULL,x_69 = NULL,z_69 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      j_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
      {
        ATerm h_28 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_70 = ATgetFirst((ATermList) t);
      m_70 = (ATerm) ATgetNext((ATermList) t);
      t = m_70;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_70;
          if(match_cons(t, sym_opt_1))
            {
              o_70 = ATgetArgument(t, 0);
              t = o_70;
              if((k_70 != t))
                {
                  _fail(t);
                }
              t = term_i_28;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  o_70 = ATgetArgument(t, 0);
                  t = k_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      l_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_70;
                  if(match_cons(t, sym_opt_1))
                    {
                      p_70 = ATgetArgument(t, 0);
                      t = p_70;
                      if((l_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_i_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          p_70 = ATgetArgument(t, 0);
                          t = p_70;
                          if((l_70 != t))
                            {
                              _fail(t);
                            }
                          t = term_j_28;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              p_70 = ATgetArgument(t, 0);
                              {
                                ATerm k_28 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = p_70;
                          if((l_70 != t))
                            {
                              _fail(t);
                            }
                          t = term_j_28;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      o_70 = ATgetArgument(t, 0);
                      t = o_70;
                      if((k_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_j_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          o_70 = ATgetArgument(t, 0);
                          {
                            ATerm l_28 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = o_70;
                      if((k_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_j_28;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_28 = ATgetFirst((ATermList) t);
              p_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = p_69;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = n_70;
              {
                ATerm n_28 = t;
                int o_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm p_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_28);
                    t = term_r_28;
                  }
                else
                  {
                    t = n_28;
                    if(match_cons(t, sym_cf_1))
                      {
                        o_70 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = o_70;
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm s_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_r_28;
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_28 = ATgetFirst((ATermList) t);
                  u_69 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_69;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = n_70;
                  {
                    ATerm u_28 = t;
                    int v_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm w_28 = ATgetArgument(t, 0);
                            ATerm y_28 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_28);
                        t = term_r_28;
                      }
                    else
                      {
                        t = u_28;
                        if(match_cons(t, sym_cf_1))
                          {
                            o_70 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = o_70;
                        {
                          ATerm a_29 = t;
                          int b_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_1))
                                {
                                  ATerm i_29 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(b_29);
                              t = term_r_28;
                            }
                          else
                            {
                              t = a_29;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm j_29 = ATgetArgument(t, 0);
                                  ATerm t_29 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = term_r_28;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm u_29 = ATgetFirst((ATermList) t);
                      x_69 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = x_69;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm v_29 = ATgetFirst((ATermList) t);
                      z_69 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = z_69;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      o_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_70;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm x_29 = ATgetArgument(t, 0);
                      ATerm y_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_r_28;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_70;
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm b_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(a_30);
            t = term_c_30;
          }
        else
          {
            t = z_29;
            if(match_cons(t, sym_cf_1))
              {
                o_70 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_70;
            if(match_cons(t, sym_opt_1))
              {
                ATerm d_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_c_30;
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  static ATerm e_71 (ATerm t)
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_87(t);
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = SRTS_one(e_71, t);
      }
    return(t);
  }
  t = e_71(t);
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      w_71 = ATgetArgument(t, 0);
      x_71 = ATgetArgument(t, 1);
      {
        ATerm g_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = w_71;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_71;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm k_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_30);
        t = term_l_30;
      }
    else
      {
        t = i_30;
        {
          ATerm m_30 = t;
          int n_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm o_30 = ATgetArgument(t, 0);
                  ATerm p_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(n_30);
              t = term_l_30;
            }
          else
            {
              t = m_30;
              if(match_cons(t, sym_cf_1))
                {
                  y_71 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = y_71;
              {
                ATerm q_30 = t;
                int r_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm s_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_30);
                    t = term_l_30;
                  }
                else
                  {
                    t = q_30;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm t_30 = ATgetArgument(t, 0);
                        ATerm u_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_l_30;
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
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
  l_73 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_73 = ATgetArgument(t, 0);
      k_73 = ATgetArgument(t, 1);
      {
        ATerm w_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_41 = NULL,r_41 = NULL,s_42 = NULL,t_42 = NULL,f_17 = NULL;
            t = SSLgetAnnotations(l_73);
            l_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, j_73, k_73);
            f_17 = t;
            t = SSLsetAnnotations(f_17, l_41);
            r_41 = t;
            if(match_cons(t, sym_appl_2))
              {
                s_42 = ATgetArgument(t, 0);
                t_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm z_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_42;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = z_30;
                  {
                    ATerm l_43 = NULL;
                    t = s_42;
                    {
                      ATerm b_31 = t;
                      int c_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_43 = NULL,b_44 = NULL;
                          if(match_cons(t, sym_prod_3))
                            {
                              ATerm d_31 = ATgetArgument(t, 0);
                              ATerm e_31 = ATgetArgument(t, 1);
                              x_43 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = x_43;
                          {
                            static ATerm k_2 (ATerm t)
                            {
                              if(match_cons(t, sym_cons_1))
                                {
                                  if(((b_44 != NULL) && (b_44 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    b_44 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1_0(k_2, t);
                          }
                          t = not_null(b_44);
                          LocalPopChoice(c_31);
                        }
                      else
                        {
                          t = b_31;
                          t = Constr1_0_0(t);
                        }
                    }
                    l_43 = t;
                    t = SSL_mkterm(l_43, t_42);
                  }
                }
            }
            LocalPopChoice(y_30);
          }
        else
          {
            t = w_30;
            t = l_73;
          }
      }
    }
  else
    {
      t = l_73;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(j_2, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
  b_74 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_74;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_74 = ATgetFirst((ATermList) t);
          d_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_44 = NULL,w_44 = NULL,x_44 = NULL,h_17 = NULL;
            t = SSLgetAnnotations(b_74);
            o_44 = t;
            t = c_74;
            t = s_100(t);
            w_44 = t;
            t = d_74;
            t = filter_1_0(s_100, t);
            x_44 = t;
            t = (ATerm) ATinsert(CheckATermList(x_44), w_44);
            h_17 = t;
            t = SSLsetAnnotations(h_17, o_44);
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            t = d_74;
            t = filter_1_0(s_100, t);
          }
      }
    }
  return(t);
}
static ATerm g_79 (ATerm a_76, ATerm t)
{
  static ATerm i_79 (ATerm t)
  {
    ATerm b_76 = NULL,c_76 = NULL,e_76 = NULL,f_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
    b_76 = t;
    if(match_cons(t, sym_appl_2))
      {
        c_76 = ATgetArgument(t, 0);
        j_76 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = c_76;
    if(match_cons(t, sym_prod_3))
      {
        ATerm h_31 = ATgetArgument(t, 0);
        e_76 = ATgetArgument(t, 1);
        {
          ATerm i_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = e_76;
    if(match_cons(t, sym_cf_1))
      {
        f_76 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_76;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm j_31 = ATgetArgument(t, 0);
        ATerm k_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_76;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_76 = ATgetFirst((ATermList) t);
        l_76 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = l_76;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, k_76);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_76 = ATgetFirst((ATermList) t);
            n_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_76;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_76 = ATgetFirst((ATermList) t);
            p_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_76;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm z_76 = NULL,a_77 = NULL;
            t = k_76;
            t = i_79(t);
            z_76 = t;
            t = o_76;
            t = i_79(t);
            a_77 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_77), (ATerm) ATinsert(ATempty, m_76)), z_76);
            t = concat_0_0(t);
          }
        else
          {
            ATerm h_77 = NULL,i_77 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_76 = ATgetFirst((ATermList) t);
                r_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_76;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_76 = ATgetFirst((ATermList) t);
                t_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_76;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_76;
            t = i_79(t);
            h_77 = t;
            t = s_76;
            t = i_79(t);
            i_77 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_77), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_76), o_76), m_76)), h_77);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = a_76;
  t = i_79(t);
  return(t);
}
static ATerm h_79 (ATerm j_77, ATerm t)
{
  static ATerm j_79 (ATerm t)
  {
    ATerm k_77 = NULL,l_77 = NULL,n_77 = NULL,o_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
    k_77 = t;
    if(match_cons(t, sym_appl_2))
      {
        l_77 = ATgetArgument(t, 0);
        r_77 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = l_77;
    if(match_cons(t, sym_prod_3))
      {
        ATerm l_31 = ATgetArgument(t, 0);
        n_77 = ATgetArgument(t, 1);
        {
          ATerm m_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = n_77;
    if(match_cons(t, sym_cf_1))
      {
        o_77 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = o_77;
    if(match_cons(t, sym_iter_1))
      {
        ATerm n_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = r_77;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_77 = ATgetFirst((ATermList) t);
        t_77 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = t_77;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, s_77);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_77 = ATgetFirst((ATermList) t);
            v_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_77;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm e_78 = NULL,f_78 = NULL;
            t = s_77;
            t = j_79(t);
            e_78 = t;
            t = u_77;
            t = j_79(t);
            f_78 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, f_78), e_78);
            t = concat_0_0(t);
          }
        else
          {
            ATerm k_78 = NULL,l_78 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_77 = ATgetFirst((ATermList) t);
                x_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_77;
            t = j_79(t);
            k_78 = t;
            t = w_77;
            t = j_79(t);
            l_78 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_78), (ATerm) ATinsert(ATempty, u_77)), k_78);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = j_77;
  t = j_79(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
  o_78 = t;
  if(match_cons(t, sym_appl_2))
    {
      p_78 = ATgetArgument(t, 0);
      z_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_78;
  if(match_cons(t, sym_prod_3))
    {
      q_78 = ATgetArgument(t, 0);
      v_78 = ATgetArgument(t, 1);
      {
        ATerm p_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_78;
  if(match_cons(t, sym_cf_1))
    {
      w_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_78;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm s_31 = ATgetArgument(t, 0);
            ATerm u_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(r_31);
        t = z_78;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_79 = ATgetFirst((ATermList) t);
            b_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_79;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_78;
            {
              ATerm w_31 = t;
              int x_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_79(o_78, t);
                  LocalPopChoice(x_31);
                }
              else
                {
                  t = w_31;
                  t = (ATerm) ATinsert(ATempty, a_79);
                }
            }
          }
        else
          {
            t = q_78;
            t = g_79(o_78, t);
          }
      }
    else
      {
        t = q_31;
        {
          ATerm y_31 = t;
          int z_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm a_32 = ATgetArgument(t, 0);
                  ATerm b_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(z_31);
              t = q_78;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = z_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_78 = ATgetFirst((ATermList) t);
                      u_78 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = r_78;
                  if(match_cons(t, sym_cf_1))
                    {
                      s_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = s_78;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm c_32 = ATgetArgument(t, 0);
                      ATerm d_32 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_78;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_79 = ATgetFirst((ATermList) t);
                      b_79 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = b_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_79;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = y_31;
              {
                ATerm e_32 = t;
                int f_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm g_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(f_32);
                    t = z_78;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        a_79 = ATgetFirst((ATermList) t);
                        b_79 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = b_79;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = q_78;
                        {
                          ATerm h_32 = t;
                          int i_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_79(o_78, t);
                              LocalPopChoice(i_32);
                            }
                          else
                            {
                              t = h_32;
                              t = (ATerm) ATinsert(ATempty, a_79);
                            }
                        }
                      }
                    else
                      {
                        t = q_78;
                        t = h_79(o_78, t);
                      }
                  }
                else
                  {
                    t = e_32;
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm j_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = q_78;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = z_78;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            r_78 = ATgetFirst((ATermList) t);
                            u_78 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = r_78;
                        if(match_cons(t, sym_cf_1))
                          {
                            s_78 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = s_78;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm k_32 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = u_78;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = z_78;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            a_79 = ATgetFirst((ATermList) t);
                            b_79 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = b_79;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = a_79;
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
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_79 = ATgetFirst((ATermList) t);
      u_79 = (ATerm) ATgetNext((ATermList) t);
      t = u_79;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_79 = ATgetFirst((ATermList) t);
          s_79 = (ATerm) ATgetNext((ATermList) t);
          t = r_79;
          if(match_int(t, 34))
            {
              t = t_79;
              if(match_int(t, 92))
                {
                  ATerm m_32 = t;
                  int n_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_79 = NULL;
                      t = s_79;
                      t = De_Escape_0_0(t);
                      x_79 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_79), term_o_32);
                      LocalPopChoice(n_32);
                    }
                  else
                    {
                      t = m_32;
                      {
                        ATerm a_80 = NULL;
                        t = u_79;
                        t = De_Escape_0_0(t);
                        a_80 = t;
                        t = (ATerm) ATinsert(CheckATermList(a_80), t_79);
                      }
                    }
                }
              else
                {
                  ATerm d_80 = NULL;
                  t = u_79;
                  t = De_Escape_0_0(t);
                  d_80 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_80), t_79);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = t_79;
                  if(match_int(t, 92))
                    {
                      ATerm p_32 = t;
                      int q_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_80 = NULL;
                          t = s_79;
                          t = De_Escape_0_0(t);
                          f_80 = t;
                          t = (ATerm) ATinsert(CheckATermList(f_80), term_r_32);
                          LocalPopChoice(q_32);
                        }
                      else
                        {
                          t = p_32;
                          {
                            ATerm i_80 = NULL;
                            t = u_79;
                            t = De_Escape_0_0(t);
                            i_80 = t;
                            t = (ATerm) ATinsert(CheckATermList(i_80), t_79);
                          }
                        }
                    }
                  else
                    {
                      ATerm l_80 = NULL;
                      t = u_79;
                      t = De_Escape_0_0(t);
                      l_80 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_80), t_79);
                    }
                }
              else
                {
                  ATerm o_80 = NULL;
                  t = u_79;
                  t = De_Escape_0_0(t);
                  o_80 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_80), t_79);
                }
            }
        }
      else
        {
          ATerm r_80 = NULL;
          t = u_79;
          t = De_Escape_0_0(t);
          r_80 = t;
          t = (ATerm) ATinsert(CheckATermList(r_80), t_79);
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
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL;
  a_81 = t;
  t = SSL_explode_string(a_81);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_81 = ATgetFirst((ATermList) t);
      e_81 = (ATerm) ATgetNext((ATermList) t);
      t = e_81;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_81 = ATgetFirst((ATermList) t);
          c_81 = (ATerm) ATgetNext((ATermList) t);
          t = b_81;
          if(match_int(t, 34))
            {
              t = d_81;
              if(match_int(t, 92))
                {
                  ATerm s_32 = t;
                  int u_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_81 = NULL;
                      t = c_81;
                      t = De_Escape_0_0(t);
                      h_81 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_81), term_o_32);
                      LocalPopChoice(u_32);
                    }
                  else
                    {
                      t = s_32;
                      {
                        ATerm k_81 = NULL;
                        t = e_81;
                        t = De_Escape_0_0(t);
                        k_81 = t;
                        t = (ATerm) ATinsert(CheckATermList(k_81), d_81);
                      }
                    }
                }
              else
                {
                  ATerm n_81 = NULL;
                  t = e_81;
                  t = De_Escape_0_0(t);
                  n_81 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_81), d_81);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = d_81;
                  if(match_int(t, 92))
                    {
                      ATerm v_32 = t;
                      int w_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_81 = NULL;
                          t = c_81;
                          t = De_Escape_0_0(t);
                          p_81 = t;
                          t = (ATerm) ATinsert(CheckATermList(p_81), term_r_32);
                          LocalPopChoice(w_32);
                        }
                      else
                        {
                          t = v_32;
                          {
                            ATerm s_81 = NULL;
                            t = e_81;
                            t = De_Escape_0_0(t);
                            s_81 = t;
                            t = (ATerm) ATinsert(CheckATermList(s_81), d_81);
                          }
                        }
                    }
                  else
                    {
                      ATerm v_81 = NULL;
                      t = e_81;
                      t = De_Escape_0_0(t);
                      v_81 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_81), d_81);
                    }
                }
              else
                {
                  ATerm y_81 = NULL;
                  t = e_81;
                  t = De_Escape_0_0(t);
                  y_81 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_81), d_81);
                }
            }
        }
      else
        {
          ATerm b_82 = NULL;
          t = e_81;
          t = De_Escape_0_0(t);
          b_82 = t;
          t = (ATerm) ATinsert(CheckATermList(b_82), d_81);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  z_80 = t;
  t = SSL_implode_string(z_80);
  return(t);
}
ATerm at_last_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  static ATerm x_82 (ATerm t)
  {
    ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
    u_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_82 = ATgetFirst((ATermList) t);
        w_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_32 = t;
      int z_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_45 = NULL,j_17 = NULL;
          t = SSLgetAnnotations(u_82);
          f_45 = t;
          t = w_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(w_82), v_82);
          j_17 = t;
          t = SSLsetAnnotations(j_17, f_45);
          t = j_94(t);
          LocalPopChoice(z_32);
        }
      else
        {
          t = y_32;
          {
            ATerm p_45 = NULL,s_45 = NULL,k_17 = NULL;
            t = SSLgetAnnotations(u_82);
            p_45 = t;
            t = w_82;
            t = x_82(t);
            s_45 = t;
            t = (ATerm) ATinsert(CheckATermList(s_45), v_82);
            k_17 = t;
            t = SSLsetAnnotations(k_17, p_45);
          }
        }
    }
    return(t);
  }
  t = x_82(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(b_33) != AT_INT) || (ATgetInt((ATermInt) b_33) != 34)))
        _fail(t);
      {
        ATerm c_33 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(c_33) != AT_LIST) || !(ATisEmpty(c_33))))
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
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
  e_83 = t;
  t = SSL_explode_string(e_83);
  a_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_83 = ATgetFirst((ATermList) t);
      {
        ATerm d_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_83;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = a_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_33 = ATgetFirst((ATermList) t);
      c_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_83;
  t = at_last_1_0(l_2, t);
  b_83 = t;
  t = SSL_implode_string(b_83);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_33);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_33);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_33);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
  z_83 = t;
  if(match_cons(t, sym_cf_1))
    {
      x_83 = ATgetArgument(t, 0);
      {
        ATerm c_84 = NULL;
        t = x_83;
        t = PpSym_0_0(t);
        c_84 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_33)), c_84), (ATerm) ATinsert(ATempty, term_j_33));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          x_83 = ATgetArgument(t, 0);
          {
            ATerm h_84 = NULL;
            t = x_83;
            t = PpSym_0_0(t);
            h_84 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_33)), h_84), (ATerm) ATinsert(ATempty, term_j_33));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_n_33);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  x_83 = ATgetArgument(t, 0);
                  y_83 = ATgetArgument(t, 1);
                  {
                    ATerm k_84 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(y_83), x_83);
                    t = map_1_0(PpSym_0_0, t);
                    k_84 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_33)), k_84), (ATerm) ATinsert(ATempty, term_o_33));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      x_83 = ATgetArgument(t, 0);
                      t = x_83;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(m_2, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          x_83 = ATgetArgument(t, 0);
                          t = x_83;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(n_2, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              x_83 = ATgetArgument(t, 0);
                              t = x_83;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(o_2, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  x_83 = ATgetArgument(t, 0);
                                  y_83 = ATgetArgument(t, 1);
                                  {
                                    ATerm v_84 = NULL,d_85 = NULL;
                                    t = x_83;
                                    t = PpSym_0_0(t);
                                    v_84 = t;
                                    t = y_83;
                                    t = PpSym_0_0(t);
                                    d_85 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_33)), d_85), v_84), (ATerm) ATinsert(ATempty, term_q_33));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      x_83 = ATgetArgument(t, 0);
                                      y_83 = ATgetArgument(t, 1);
                                      {
                                        ATerm g_85 = NULL,h_85 = NULL;
                                        t = x_83;
                                        t = PpSym_0_0(t);
                                        g_85 = t;
                                        t = y_83;
                                        t = PpSym_0_0(t);
                                        h_85 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_33)), h_85), g_85), (ATerm) ATinsert(ATempty, term_q_33));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_33 = t;
                                      int u_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              x_83 = ATgetArgument(t, 0);
                                              {
                                                ATerm v_33 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(u_33);
                                          {
                                            ATerm j_85 = NULL;
                                            t = x_83;
                                            t = PpSym_0_0(t);
                                            j_85 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_33)), j_85);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = t_33;
                                          {
                                            ATerm y_33 = t;
                                            int a_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    x_83 = ATgetArgument(t, 0);
                                                    y_83 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_34 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(a_34);
                                                {
                                                  ATerm n_85 = NULL,o_85 = NULL;
                                                  t = x_83;
                                                  t = PpSym_0_0(t);
                                                  n_85 = t;
                                                  t = y_83;
                                                  t = PpSym_0_0(t);
                                                  o_85 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_33)), o_85), n_85);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = y_33;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    x_83 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_85 = NULL;
                                                      t = x_83;
                                                      t = PpSym_0_0(t);
                                                      q_85 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, q_85), (ATerm) ATinsert(ATempty, term_d_34));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        x_83 = ATgetArgument(t, 0);
                                                        y_83 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_85 = NULL,u_85 = NULL;
                                                          t = x_83;
                                                          t = PpSym_0_0(t);
                                                          t_85 = t;
                                                          t = y_83;
                                                          t = PpSym_0_0(t);
                                                          u_85 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_85), (ATerm) ATinsert(ATempty, term_e_34)), t_85);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            x_83 = ATgetArgument(t, 0);
                                                            y_83 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_86 = NULL,b_86 = NULL;
                                                              t = x_83;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              a_86 = t;
                                                              t = y_83;
                                                              t = PpSym_0_0(t);
                                                              b_86 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_86), (ATerm) ATinsert(ATempty, term_h_34)), a_86);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                x_83 = ATgetArgument(t, 0);
                                                                y_83 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm e_86 = NULL,f_86 = NULL;
                                                                  t = x_83;
                                                                  t = PpSym_0_0(t);
                                                                  e_86 = t;
                                                                  t = y_83;
                                                                  t = PpSym_0_0(t);
                                                                  f_86 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_86), (ATerm) ATinsert(ATempty, term_i_34)), e_86);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    x_83 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm h_86 = NULL;
                                                                      t = x_83;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      h_86 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(h_86), term_j_34);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        x_83 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, x_83);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            x_83 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm a_46 = NULL;
                                                                              t = x_83;
                                                                              {
                                                                                ATerm k_34 = t;
                                                                                int m_34 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(m_34);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = k_34;
                                                                                  }
                                                                              }
                                                                              a_46 = t;
                                                                              t = (ATerm) ATinsert(ATempty, a_46);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm n_34 = t;
                                                                            int q_34 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    x_83 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm r_34 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(q_34);
                                                                                {
                                                                                  ATerm i_46 = NULL;
                                                                                  t = x_83;
                                                                                  {
                                                                                    ATerm s_34 = t;
                                                                                    int t_34 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(t_34);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_34;
                                                                                      }
                                                                                  }
                                                                                  i_46 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, i_46);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_34;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_u_34);
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
static ATerm i_88 (ATerm y_86, ATerm z_86, ATerm c_87, ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL;
  t = y_86;
  if(match_cons(t, sym_cf_1))
    {
      h_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_87;
  {
    ATerm v_34 = t;
    if((PushChoice() == 0))
      {
        ATerm j_87 = NULL,k_87 = NULL,l_87 = NULL,n_17 = NULL;
        l_87 = t;
        if(match_cons(t, sym_sort_1))
          {
            k_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_87);
        j_87 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, k_87);
        n_17 = t;
        t = SSLsetAnnotations(n_17, j_87);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_34;
      }
  }
  t = PpSym_0_0(t);
  g_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_34)), g_87), (ATerm) ATinsert(ATempty, term_w_34));
  t = concat_0_0(t);
  i_87 = t;
  t = SSL_concat_strings(i_87);
  f_87 = t;
  t = SSL_mkterm(f_87, z_86);
  return(t);
}
static ATerm j_88 (ATerm m_87, ATerm n_87, ATerm o_87, ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,q_17 = NULL;
  t = m_87;
  if(match_cons(t, sym_cf_1))
    {
      s_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_87;
  if(match_cons(t, sym_sort_1))
    {
      v_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_87);
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, v_87);
  q_17 = t;
  t = SSLsetAnnotations(q_17, u_87);
  t = PpSym_0_0(t);
  t_87 = t;
  t = SSL_concat_strings(t_87);
  r_87 = t;
  t = SSL_mkterm(r_87, n_87);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,b_88 = NULL,c_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  w_87 = t;
  if(match_cons(t, sym_appl_2))
    {
      x_87 = ATgetArgument(t, 0);
      e_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_87;
  if(match_cons(t, sym_prod_3))
    {
      ATerm x_34 = ATgetArgument(t, 0);
      b_88 = ATgetArgument(t, 1);
      {
        ATerm y_34 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_88 = ATgetFirst((ATermList) t);
      g_88 = (ATerm) ATgetNext((ATermList) t);
      t = g_88;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_88;
          if(match_cons(t, sym_sort_1))
            {
              c_88 = ATgetArgument(t, 0);
              t = c_88;
              if(match_string(t, "<START>"))
                {
                  ATerm z_34 = t;
                  int a_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_88(b_88, e_88, w_87, t);
                      LocalPopChoice(a_35);
                    }
                  else
                    {
                      t = z_34;
                      {
                        ATerm c_35 = t;
                        int d_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_88(b_88, e_88, w_87, t);
                            LocalPopChoice(d_35);
                          }
                        else
                          {
                            t = c_35;
                            t = f_88;
                          }
                      }
                    }
                }
              else
                {
                  ATerm e_35 = t;
                  int f_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_88(b_88, e_88, w_87, t);
                      LocalPopChoice(f_35);
                    }
                  else
                    {
                      t = e_35;
                      t = j_88(b_88, e_88, w_87, t);
                    }
                }
            }
          else
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_88(b_88, e_88, w_87, t);
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  t = j_88(b_88, e_88, w_87, t);
                }
            }
        }
      else
        {
          t = b_88;
          {
            ATerm i_35 = t;
            int j_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_88(b_88, e_88, w_87, t);
                LocalPopChoice(j_35);
              }
            else
              {
                t = i_35;
                t = j_88(b_88, e_88, w_87, t);
              }
          }
        }
    }
  else
    {
      t = b_88;
      {
        ATerm k_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_88(b_88, e_88, w_87, t);
            LocalPopChoice(o_35);
          }
        else
          {
            t = k_35;
            t = j_88(b_88, e_88, w_87, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  static ATerm k_88 (ATerm t)
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_85(t);
        t = k_88(t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = w_85(t);
      }
    return(t);
  }
  t = k_88(t);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL;
  y_88 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_88 = ATgetArgument(t, 0);
      f_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_88;
  if(match_cons(t, sym_prod_3))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      b_89 = ATgetArgument(t, 1);
      {
        ATerm u_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = b_89;
  if(match_cons(t, sym_cf_1))
    {
      c_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_89;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(f_89);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          d_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_89;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = f_89;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_w_35;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_89 = ATgetFirst((ATermList) t);
              h_89 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_89;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, g_89));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  static ATerm x_89 (ATerm t)
  {
    ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
    w_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_89 = ATgetFirst((ATermList) t);
        v_89 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_46 = NULL,y_46 = NULL,v_17 = NULL;
          t = SSLgetAnnotations(w_89);
          v_46 = t;
          t = v_89;
          t = x_89(t);
          y_46 = t;
          t = (ATerm) ATinsert(CheckATermList(y_46), u_89);
          v_17 = t;
          t = SSLsetAnnotations(v_17, v_46);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_89;
        t = y_93(t);
      }
    return(t);
  }
  t = x_89(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL;
  a_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_90;
    }
  else
    {
      static ATerm q_2 (ATerm t)
      {
        t = not_null(c_90);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_90 = ATgetFirst((ATermList) t);
          if(((c_90 != NULL) && (c_90 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_90;
      t = at_end_1_0(q_2, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm i_90 = NULL;
  static ATerm z_90 (ATerm t)
  {
    ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL;
    w_90 = t;
    if(match_cons(t, sym_appl_2))
      {
        u_90 = ATgetArgument(t, 0);
        v_90 = ATgetArgument(t, 1);
        {
          ATerm x_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_47 = NULL,i_47 = NULL,m_47 = NULL,f_18 = NULL;
              t = SSLgetAnnotations(w_90);
              i_47 = t;
              t = v_90;
              t = map_1_0(z_90, t);
              m_47 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, u_90, m_47);
              f_18 = t;
              t = SSLsetAnnotations(f_18, i_47);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm z_35 = ATgetArgument(t, 0);
                  h_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_47;
              t = concat_0_0(t);
              LocalPopChoice(y_35);
            }
          else
            {
              t = x_35;
              t = (ATerm) ATinsert(ATempty, w_90);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, w_90);
      }
    return(t);
  }
  t = z_90(t);
  i_90 = t;
  t = SSL_implode_string(i_90);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm r_91 = NULL,t_91 = NULL,u_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
  x_91 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_91 = ATgetArgument(t, 0);
      {
        ATerm a_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_91;
  if(match_cons(t, sym_prod_3))
    {
      z_91 = ATgetArgument(t, 0);
      a_92 = ATgetArgument(t, 1);
      {
        ATerm c_36 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_92;
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm g_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_36);
        t = z_91;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_91 = ATgetFirst((ATermList) t);
            t_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_91;
        if(match_cons(t, sym_lex_1))
          {
            ATerm h_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_91;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_91;
        t = yield_0_0(t);
      }
    else
      {
        t = e_36;
        {
          ATerm i_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm l_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(j_36);
              t = x_91;
              t = yield_0_0(t);
            }
          else
            {
              t = i_36;
              {
                ATerm m_36 = t;
                int r_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm s_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_36);
                    {
                      ATerm e_92 = NULL;
                      t = x_91;
                      t = yield_0_0(t);
                      e_92 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, e_92);
                    }
                  }
                else
                  {
                    t = m_36;
                    if(match_cons(t, sym_varsym_1))
                      {
                        b_92 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_92;
                    if(match_cons(t, sym_cf_1))
                      {
                        u_91 = ATgetArgument(t, 0);
                        t = u_91;
                        {
                          ATerm t_36 = t;
                          int u_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm v_36 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(u_36);
                              t = z_91;
                              {
                                ATerm x_36 = t;
                                int y_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_92 = NULL;
                                    t = x_91;
                                    t = yield_0_0(t);
                                    f_92 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, f_92);
                                    LocalPopChoice(y_36);
                                  }
                                else
                                  {
                                    t = x_36;
                                    {
                                      ATerm g_92 = NULL;
                                      t = x_91;
                                      t = yield_0_0(t);
                                      g_92 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, g_92);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = t_36;
                              {
                                ATerm d_37 = t;
                                int f_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm g_37 = ATgetArgument(t, 0);
                                        ATerm i_37 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(f_37);
                                    t = z_91;
                                    {
                                      ATerm k_37 = t;
                                      int m_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_92 = NULL;
                                          t = x_91;
                                          t = yield_0_0(t);
                                          h_92 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, h_92);
                                          LocalPopChoice(m_37);
                                        }
                                      else
                                        {
                                          t = k_37;
                                          {
                                            ATerm i_92 = NULL;
                                            t = x_91;
                                            t = yield_0_0(t);
                                            i_92 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, i_92);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = d_37;
                                    {
                                      ATerm o_37 = t;
                                      int p_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm q_37 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(p_37);
                                          t = z_91;
                                          {
                                            ATerm r_37 = t;
                                            int s_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm j_92 = NULL;
                                                t = x_91;
                                                t = yield_0_0(t);
                                                j_92 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, j_92);
                                                LocalPopChoice(s_37);
                                              }
                                            else
                                              {
                                                t = r_37;
                                                {
                                                  ATerm k_92 = NULL;
                                                  t = x_91;
                                                  t = yield_0_0(t);
                                                  k_92 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, k_92);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = o_37;
                                          {
                                            ATerm t_37 = t;
                                            int u_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm v_37 = ATgetArgument(t, 0);
                                                    ATerm w_37 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(u_37);
                                                t = z_91;
                                                {
                                                  ATerm x_37 = t;
                                                  int y_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_92 = NULL;
                                                      t = x_91;
                                                      t = yield_0_0(t);
                                                      l_92 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, l_92);
                                                      LocalPopChoice(y_37);
                                                    }
                                                  else
                                                    {
                                                      t = x_37;
                                                      {
                                                        ATerm m_92 = NULL;
                                                        t = x_91;
                                                        t = yield_0_0(t);
                                                        m_92 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, m_92);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = t_37;
                                                {
                                                  ATerm n_92 = NULL;
                                                  t = x_91;
                                                  t = yield_0_0(t);
                                                  n_92 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, n_92);
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
                        ATerm o_92 = NULL;
                        t = x_91;
                        t = yield_0_0(t);
                        o_92 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, o_92);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t)
{
  t = a_87(t);
  {
    static ATerm r_2 (ATerm t)
    {
      t = downup2_2_0(a_87, b_87, t);
      return(t);
    }
    t = SRTS_all(r_2, t);
  }
  t = b_87(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL;
  v_97 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_97 = ATgetArgument(t, 0);
      u_97 = ATgetArgument(t, 1);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_52 = NULL,y_52 = NULL,g_53 = NULL,h_53 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,d_19 = NULL,u_18 = NULL;
            t = SSLgetAnnotations(v_97);
            u_52 = t;
            t = t_97;
            if(match_cons(t, sym_prod_3))
              {
                h_53 = ATgetArgument(t, 0);
                d_55 = ATgetArgument(t, 1);
                e_55 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_97);
            g_53 = t;
            t = h_53;
            t = filter_1_0(w_2, t);
            f_55 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, f_55, d_55, e_55);
            u_18 = t;
            t = SSLsetAnnotations(u_18, g_53);
            g_55 = t;
            t = u_97;
            t = filter_1_0(x_2, t);
            y_52 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, g_55, y_52);
            d_19 = t;
            t = SSLsetAnnotations(d_19, u_52);
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = v_97;
          }
      }
    }
  else
    {
      t = v_97;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm g_38 = t;
  if((PushChoice() == 0))
    {
      ATerm y_57 = NULL,a_58 = NULL,f_58 = NULL;
      a_58 = t;
      if(match_cons(t, sym_appl_2))
        {
          f_58 = ATgetArgument(t, 0);
          y_57 = ATgetArgument(t, 1);
          {
            ATerm o_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,n_18 = NULL,m_18 = NULL,l_18 = NULL,k_18 = NULL;
            t = SSLgetAnnotations(a_58);
            o_61 = t;
            t = f_58;
            if(match_cons(t, sym_prod_3))
              {
                s_61 = ATgetArgument(t, 0);
                t_61 = ATgetArgument(t, 1);
                u_61 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_58);
            r_61 = t;
            t = t_61;
            if(match_cons(t, sym_cf_1))
              {
                x_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_61);
            w_61 = t;
            t = x_61;
            if(match_cons(t, sym_opt_1))
              {
                b_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_61);
            a_62 = t;
            t = b_62;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, b_62);
            k_18 = t;
            t = SSLsetAnnotations(k_18, a_62);
            c_62 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, c_62);
            l_18 = t;
            t = SSLsetAnnotations(l_18, w_61);
            z_61 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, s_61, z_61, u_61);
            m_18 = t;
            t = SSLsetAnnotations(m_18, r_61);
            v_61 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, v_61, y_57);
            n_18 = t;
            t = SSLsetAnnotations(n_18, o_61);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              f_58 = ATgetArgument(t, 0);
              {
                ATerm t_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,s_18 = NULL,q_18 = NULL;
                t = SSLgetAnnotations(a_58);
                t_62 = t;
                t = f_58;
                if(match_cons(t, sym_opt_1))
                  {
                    y_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_58);
                x_62 = t;
                t = y_62;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, y_62);
                q_18 = t;
                t = SSLsetAnnotations(q_18, x_62);
                z_62 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, z_62);
                s_18 = t;
                t = SSLsetAnnotations(s_18, t_62);
              }
            }
          else
            {
              ATerm m_63 = NULL,t_18 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  f_58 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_58);
              m_63 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, f_58);
              t_18 = t;
              t = SSLsetAnnotations(t_18, m_63);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_38;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm h_38 = t;
  if((PushChoice() == 0))
    {
      ATerm m_60 = NULL,n_60 = NULL,q_60 = NULL;
      n_60 = t;
      if(match_cons(t, sym_appl_2))
        {
          q_60 = ATgetArgument(t, 0);
          m_60 = ATgetArgument(t, 1);
          {
            ATerm u_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,z_18 = NULL,x_18 = NULL,w_18 = NULL,v_18 = NULL;
            t = SSLgetAnnotations(n_60);
            u_63 = t;
            t = q_60;
            if(match_cons(t, sym_prod_3))
              {
                y_63 = ATgetArgument(t, 0);
                z_63 = ATgetArgument(t, 1);
                a_64 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_60);
            x_63 = t;
            t = z_63;
            if(match_cons(t, sym_cf_1))
              {
                d_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_63);
            c_64 = t;
            t = d_64;
            if(match_cons(t, sym_opt_1))
              {
                g_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_64);
            f_64 = t;
            t = g_64;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, g_64);
            v_18 = t;
            t = SSLsetAnnotations(v_18, f_64);
            h_64 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, h_64);
            w_18 = t;
            t = SSLsetAnnotations(w_18, c_64);
            e_64 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, y_63, e_64, a_64);
            x_18 = t;
            t = SSLsetAnnotations(x_18, x_63);
            b_64 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, b_64, m_60);
            z_18 = t;
            t = SSLsetAnnotations(z_18, u_63);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              q_60 = ATgetArgument(t, 0);
              {
                ATerm p_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,b_19 = NULL,a_19 = NULL;
                t = SSLgetAnnotations(n_60);
                p_64 = t;
                t = q_60;
                if(match_cons(t, sym_opt_1))
                  {
                    u_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_60);
                t_64 = t;
                t = u_64;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, u_64);
                a_19 = t;
                t = SSLsetAnnotations(a_19, t_64);
                v_64 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, v_64);
                b_19 = t;
                t = SSLsetAnnotations(b_19, p_64);
              }
            }
          else
            {
              ATerm b_65 = NULL,c_19 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  q_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_60);
              b_65 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, q_60);
              c_19 = t;
              t = SSLsetAnnotations(c_19, b_65);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_38;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = repeat_2_0(ApplToSort_0_0, _id, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(b_3, t);
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm m_38 = t;
  if((PushChoice() == 0))
    {
      ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,f_19 = NULL;
      m_98 = t;
      if(match_cons(t, sym_lit_1))
        {
          l_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_98);
      k_98 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, l_98);
      f_19 = t;
      t = SSLsetAnnotations(f_19, k_98);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_38;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_66 = NULL,s_66 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          r_66 = ATgetArgument(t, 0);
          {
            ATerm q_38 = ATgetArgument(t, 1);
            if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
              {
                s_66 = ATgetFirst((ATermList) q_38);
                {
                  ATerm r_38 = (ATerm) ATgetNext((ATermList) q_38);
                  if(((ATgetType(r_38) != AT_LIST) || !(ATisEmpty(r_38))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = r_66;
      t = injection_0_0(t);
      t = s_66;
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm u_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      LocalPopChoice(w_38);
    }
  else
    {
      t = u_38;
    }
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm e_94 = NULL,r_99 = NULL,l_99 = NULL,d_99 = NULL,y_98 = NULL,t_98 = NULL,q_98 = NULL,i_98 = NULL,d_98 = NULL,z_97 = NULL,n_94 = NULL;
  e_94 = t;
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_39;
        t = get_config_0_0(t);
        t = e_94;
        t = downup2_2_0(t_2, u_2, t);
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
      }
  }
  n_94 = t;
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_39;
        t = get_config_0_0(t);
        t = n_94;
        t = topdown_1_0(v_2, t);
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = n_94;
      }
  }
  z_97 = t;
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_39;
        t = get_config_0_0(t);
        t = z_97;
        t = topdown_1_0(y_2, t);
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        t = z_97;
      }
  }
  d_98 = t;
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_39;
        t = get_config_0_0(t);
        t = d_98;
        t = topdown_1_0(z_2, t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = d_98;
      }
  }
  i_98 = t;
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_39;
        t = get_config_0_0(t);
        t = i_98;
        t = topdown_1_0(a_3, t);
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        t = i_98;
      }
  }
  q_98 = t;
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_39;
        t = get_config_0_0(t);
        t = q_98;
        t = replace_appl_0_0(t);
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = q_98;
      }
  }
  t_98 = t;
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_39;
        t = get_config_0_0(t);
        t = t_98;
        t = bottomup_1_0(c_3, t);
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        t = t_98;
      }
  }
  y_98 = t;
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_39;
        t = get_config_0_0(t);
        t = y_98;
        t = topdown_1_0(d_3, t);
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = y_98;
      }
  }
  d_99 = t;
  {
    ATerm y_39 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_40;
        t = get_config_0_0(t);
        t = d_99;
        t = topdown_1_0(e_3, t);
        LocalPopChoice(b_40);
      }
    else
      {
        t = y_39;
        t = d_99;
      }
  }
  l_99 = t;
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_67 = NULL;
        t = term_f_40;
        t = get_config_0_0(t);
        t = l_99;
        if(match_cons(t, sym_parsetree_2))
          {
            e_67 = ATgetArgument(t, 0);
            {
              ATerm g_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = e_67;
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
        t = l_99;
      }
  }
  r_99 = t;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_99;
        if((e_94 != t))
          {
            _fail(t);
          }
        t = r_99;
        {
          ATerm j_40 = t;
          int k_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_l_40;
              t = get_config_0_0(t);
              t = r_99;
              LocalPopChoice(k_40);
              t = implodeAsfix_1_0(_id, t);
            }
          else
            {
              t = j_40;
              t = implodeAsfix_1_0(_fail, t);
            }
        }
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = r_99;
      }
  }
  return(t);
}
static ATerm m_9 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm c_100 = NULL;
  t = SSL_fputc(g_41, h_41);
  c_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_100);
  return(t);
}
static ATerm n_9 (ATerm i_26, ATerm j_26, ATerm t)
{
  ATerm d_100 = NULL;
  t = SSL_write_term_to_stream_text(i_26, j_26);
  d_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_100);
  return(t);
}
static ATerm p_9 (ATerm y_92 (ATerm), ATerm j_223, ATerm o_26, ATerm t)
{
  ATerm e_100 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_223, term_m_40);
  t = s_9(t);
  e_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_100, o_26);
  t = y_92(t);
  t = fclose_0_0(t);
  t = o_26;
  return(t);
}
static ATerm o_9 (ATerm e_26, ATerm f_26, ATerm t)
{
  ATerm f_100 = NULL;
  t = SSL_write_term_to_stream_baf(e_26, f_26);
  f_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_100);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if(match_cons(n_40, sym_Stream_1))
        {
          i_100 = ATgetArgument(n_40, 0);
        }
      else
        _fail(t);
      j_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(i_100, j_100, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_40 = ATgetArgument(t, 0);
      if(match_cons(o_40, sym_Stream_1))
        {
          n_100 = ATgetArgument(o_40, 0);
        }
      else
        _fail(t);
      o_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(n_100, o_100, t);
  k_100 = t;
  t = term_p_40;
  l_100 = t;
  t = k_100;
  if(match_cons(t, sym_Stream_1))
    {
      m_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_40, k_100);
  t = m_9(l_100, m_100, t);
  return(t);
}
ATerm output_1_0 (ATerm k_116 (ATerm), ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL;
  t = k_116(t);
  h_100 = t;
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_40;
        t = get_config_0_0(t);
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        t = term_t_40;
      }
  }
  g_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_100, h_100);
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_40;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, g_100, h_100);
        LocalPopChoice(v_40);
        if(match_cons(t, sym__2))
          {
            ATerm z_40 = ATgetArgument(t, 0);
            ATerm b_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_9(f_3, g_100, h_100, t);
      }
    else
      {
        t = u_40;
        if(match_cons(t, sym__2))
          {
            ATerm c_41 = ATgetArgument(t, 0);
            ATerm d_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_9(g_3, g_100, h_100, t);
      }
  }
  return(t);
}
static ATerm d_101 (ATerm x_100, ATerm t)
{
  t = SSL_fclose(x_100);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL;
  b_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_101 = ATgetArgument(t, 0);
      {
        ATerm k_41 = t;
        int n_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_101);
            LocalPopChoice(n_41);
          }
        else
          {
            t = k_41;
            t = d_101(b_101, t);
          }
      }
    }
  else
    {
      t = d_101(b_101, t);
    }
  return(t);
}
static ATerm q_9 (ATerm k_26, ATerm t)
{
  t = SSL_read_term_from_stream(k_26);
  return(t);
}
static ATerm r_9 (ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm e_101 = NULL;
  t = SSL_fopen(i_41, j_41);
  e_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_101);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_101 = NULL;
  t = SSL_stdin_stream();
  f_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_101);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_101 = NULL;
  t = SSL_stdout_stream();
  g_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_101);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_101 = NULL;
  t = SSL_stderr_stream();
  h_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_101);
  return(t);
}
static ATerm o_102 (ATerm n_101, ATerm t)
{
  ATerm o_101 = NULL;
  t = SSL_explode_term(n_101);
  if(match_cons(t, sym__2))
    {
      ATerm p_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_41 = ATgetArgument(t, 1);
        if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
          {
            o_101 = ATgetFirst((ATermList) q_41);
            {
              ATerm s_41 = (ATerm) ATgetNext((ATermList) q_41);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_101;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_101;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_101;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_101;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_102 (ATerm r_101, ATerm s_101, ATerm t_101, ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,z_101 = NULL,n_20 = NULL;
  t = SSLgetAnnotations(t_101);
  w_101 = t;
  t = r_101;
  if(match_cons(t, sym_Path_1))
    {
      z_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_101, s_101);
  n_20 = t;
  t = SSLsetAnnotations(n_20, w_101);
  if(match_cons(t, sym__2))
    {
      u_101 = ATgetArgument(t, 0);
      v_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(u_101, v_101, t);
  return(t);
}
static ATerm q_102 (ATerm b_102, ATerm c_102, ATerm d_102, ATerm t)
{
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL,j_102 = NULL,o_20 = NULL;
  t = SSLgetAnnotations(d_102);
  g_102 = t;
  t = SSL_is_string(b_102);
  j_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_102, c_102);
  o_20 = t;
  t = SSLsetAnnotations(o_20, g_102);
  if(match_cons(t, sym__2))
    {
      e_102 = ATgetArgument(t, 0);
      f_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(e_102, f_102, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL;
  l_102 = t;
  if(match_cons(t, sym__2))
    {
      m_102 = ATgetArgument(t, 0);
      n_102 = ATgetArgument(t, 1);
      {
        ATerm t_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_102(l_102, t);
            LocalPopChoice(u_41);
          }
        else
          {
            t = t_41;
            {
              ATerm v_41 = t;
              int w_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_102(m_102, n_102, l_102, t);
                  LocalPopChoice(w_41);
                }
              else
                {
                  t = v_41;
                  t = q_102(m_102, n_102, l_102, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_102(l_102, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL,z_102 = NULL;
  z_102 = t;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_102, term_z_41);
        t = s_9(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        {
          ATerm a_68 = NULL,b_68 = NULL;
          t = term_a_42;
          b_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_42, z_102);
          t = w_9(b_68, z_102, t);
          a_68 = t;
          t = SSL_perror(a_68);
          _fail(t);
        }
      }
  }
  t_102 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(u_102, t);
  s_102 = t;
  t = t_102;
  t = fclose_0_0(t);
  t = s_102;
  return(t);
}
ATerm input_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_42;
      t = get_config_0_0(t);
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      t = term_e_42;
    }
  t = ReadFromFile_0_0(t);
  t = l_116(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL;
  c_103 = t;
  t = term_f_42;
  t = whoami_0_0(t);
  d_103 = t;
  t = term_g_42;
  f_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_42), d_103), term_j_42);
  g_103 = t;
  t = SSL_printnl(f_103, g_103);
  t = term_h_19;
  e_103 = t;
  t = SSL_exit(e_103);
  t = c_103;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm i_103 = NULL;
  i_103 = t;
  if(match_string(t, "-k"))
    {
      t = i_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_103;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL;
  j_103 = t;
  t = SSL_string_to_int(j_103);
  k_103 = t;
  t = term_l_42;
  l_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_42, k_103);
  t = a_10(l_103, k_103, t);
  t = j_103;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_m_42;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, j_3, t_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm n_103 = NULL;
  n_103 = t;
  if(match_string(t, "-S"))
    {
      t = n_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_103;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm o_103 = NULL,p_103 = NULL;
  t = term_n_42;
  o_103 = t;
  t = term_o_42;
  p_103 = t;
  t = term_p_42;
  t = a_10(o_103, p_103, t);
  t = term_q_42;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_u_42;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL;
  q_103 = t;
  t = SSL_string_to_int(q_103);
  r_103 = t;
  t = term_n_42;
  s_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_42, r_103);
  t = a_10(s_103, r_103, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_103);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL;
  t = term_w_42;
  t_103 = t;
  t = term_f_42;
  u_103 = t;
  t = term_x_42;
  t = a_10(t_103, u_103, t);
  t = term_y_42;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_z_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_43 = t;
  int b_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      LocalPopChoice(b_43);
    }
  else
    {
      t = a_43;
      {
        ATerm c_43 = t;
        int d_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_4, d_4, e_4, t);
            LocalPopChoice(d_43);
          }
        else
          {
            t = c_43;
            t = Option_3_0(f_4, g_4, k_4, t);
          }
      }
    }
  return(t);
}
static ATerm a_10 (ATerm z_50, ATerm a_51, ATerm t)
{
  ATerm v_103 = NULL;
  t = term_e_43;
  v_103 = t;
  t = SSL_table_put(v_103, z_50, a_51);
  t = (ATerm) ATmakeAppl(sym__3, term_e_43, z_50, a_51);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL;
      t = term_f_42;
      t = e_0(t);
      c_104 = t;
      t = term_f_43;
      d_104 = t;
      t = term_g_43;
      e_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_43, term_g_43, c_104);
      t = y_9(d_104, e_104, c_104, t);
      _fail(t);
    }
  else
    {
      ATerm h_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_104 = ATgetFirst((ATermList) t);
          b_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_104;
      t = c_0(t);
      t = term_f_42;
      t = d_0(t);
      h_104 = t;
      t = (ATerm) ATinsert(CheckATermList(b_104), h_104);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm j_104 = NULL;
  j_104 = t;
  if(match_string(t, "-o"))
    {
      t = j_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_104;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL;
  k_104 = t;
  t = term_s_40;
  l_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_40, k_104);
  t = a_10(l_104, k_104, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_104);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_h_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
static ATerm y_9 (ATerm j_53, ATerm k_53, ATerm i_53, ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_43 = ATgetArgument(t, 0);
            ATerm m_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
        t = x_9(j_53, k_53, t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        t = (ATerm) ATempty;
      }
  }
  o_104 = t;
  t = (ATerm) ATinsert(CheckATermList(o_104), i_53);
  p_104 = t;
  t = SSL_table_put(j_53, k_53, p_104);
  t = n_104;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL;
      t = term_f_42;
      t = p_0(t);
      a_105 = t;
      t = term_f_43;
      b_105 = t;
      t = term_g_43;
      c_105 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_43, term_g_43, a_105);
      t = y_9(b_105, c_105, a_105, t);
      _fail(t);
    }
  else
    {
      ATerm g_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_104 = ATgetFirst((ATermList) t);
          x_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_104;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_104 = ATgetFirst((ATermList) t);
          z_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_104;
      t = n_0(t);
      t = y_104;
      t = o_0(t);
      g_105 = t;
      t = (ATerm) ATinsert(CheckATermList(z_104), g_105);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm i_105 = NULL;
  i_105 = t;
  if(match_string(t, "-i"))
    {
      t = i_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_105;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm j_105 = NULL,k_105 = NULL;
  j_105 = t;
  t = term_d_42;
  k_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_42, j_105);
  t = a_10(k_105, j_105, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_105);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_n_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lex", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm l_105 = NULL,m_105 = NULL;
  l_105 = t;
  t = term_a_39;
  m_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, l_105);
  t = a_10(m_105, l_105, t);
  t = l_105;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL;
  n_105 = t;
  t = term_d_39;
  o_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_39, n_105);
  t = a_10(o_105, n_105, t);
  t = n_105;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_p_43;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm p_105 = NULL,q_105 = NULL;
  p_105 = t;
  t = term_m_39;
  q_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_39, p_105);
  t = a_10(q_105, p_105, t);
  t = p_105;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_q_43;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm r_105 = NULL,s_105 = NULL;
  r_105 = t;
  t = term_x_39;
  s_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, r_105);
  t = a_10(s_105, r_105, t);
  t = r_105;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_r_43;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL;
  t_105 = t;
  t = term_q_39;
  u_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_39, t_105);
  t = a_10(u_105, t_105, t);
  t = t_105;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_s_43;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm v_105 = NULL,w_105 = NULL;
  v_105 = t;
  t = term_g_39;
  w_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_39, v_105);
  t = a_10(w_105, v_105, t);
  t = v_105;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_t_43;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL;
  x_105 = t;
  t = term_u_39;
  y_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_39, x_105);
  t = a_10(y_105, x_105, t);
  t = x_105;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_u_43;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm z_105 = NULL,a_106 = NULL;
  z_105 = t;
  t = term_j_39;
  a_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_39, z_105);
  t = a_10(a_106, z_105, t);
  t = z_105;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm b_106 = NULL,c_106 = NULL;
  b_106 = t;
  t = term_c_40;
  c_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_40, b_106);
  t = a_10(c_106, b_106, t);
  t = b_106;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_w_43;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--pt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm d_106 = NULL,e_106 = NULL;
  d_106 = t;
  t = term_f_40;
  e_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, d_106);
  t = a_10(e_106, d_106, t);
  t = d_106;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_y_43;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--concrete", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL;
  f_106 = t;
  t = term_l_40;
  g_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_40, f_106);
  t = a_10(g_106, f_106, t);
  t = f_106;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_z_43;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm a_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, s_4, t_4, t);
      LocalPopChoice(e_44);
    }
  else
    {
      t = a_44;
      {
        ATerm f_44 = t;
        int g_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_4, l_5, m_5, t);
            LocalPopChoice(g_44);
          }
        else
          {
            t = f_44;
            {
              ATerm h_44 = t;
              int i_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_5, o_5, p_5, t);
                  LocalPopChoice(i_44);
                }
              else
                {
                  t = h_44;
                  {
                    ATerm j_44 = t;
                    int k_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(q_5, r_5, s_5, t);
                        LocalPopChoice(k_44);
                      }
                    else
                      {
                        t = j_44;
                        {
                          ATerm l_44 = t;
                          int q_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(t_5, w_5, x_5, t);
                              LocalPopChoice(q_44);
                            }
                          else
                            {
                              t = l_44;
                              {
                                ATerm r_44 = t;
                                int s_44 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(c_6, i_6, j_6, t);
                                    LocalPopChoice(s_44);
                                  }
                                else
                                  {
                                    t = r_44;
                                    {
                                      ATerm t_44 = t;
                                      int u_44 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(k_6, m_6, o_6, t);
                                          LocalPopChoice(u_44);
                                        }
                                      else
                                        {
                                          t = t_44;
                                          {
                                            ATerm v_44 = t;
                                            int y_44 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(s_6, t_6, u_6, t);
                                                LocalPopChoice(y_44);
                                              }
                                            else
                                              {
                                                t = v_44;
                                                {
                                                  ATerm z_44 = t;
                                                  int a_45 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(v_6, y_6, g_7, t);
                                                      LocalPopChoice(a_45);
                                                    }
                                                  else
                                                    {
                                                      t = z_44;
                                                      {
                                                        ATerm b_45 = t;
                                                        int c_45 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(l_7, m_7, n_7, t);
                                                            LocalPopChoice(c_45);
                                                          }
                                                        else
                                                          {
                                                            t = b_45;
                                                            t = Option_3_0(o_7, p_7, q_7, t);
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
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_42;
  t = whoami_0_0(t);
  h_106 = t;
  t = term_g_42;
  j_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_45), h_106);
  k_106 = t;
  t = SSL_printnl(j_106, k_106);
  t = term_h_19;
  i_106 = t;
  t = SSL_exit(i_106);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_45;
  t = get_config_0_0(t);
  return(t);
}
static ATerm t_9 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_44, d_44);
      LocalPopChoice(h_45);
    }
  else
    {
      t = g_45;
      t = SSL_addr(c_44, d_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t)
{
  ATerm m_106 = NULL,n_106 = NULL,o_106 = NULL;
  m_106 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_106;
      t = o_99(t);
    }
  else
    {
      ATerm r_106 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_106 = ATgetFirst((ATermList) t);
          o_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_106;
      t = foldr_2_0(o_99, p_99, t);
      r_106 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_106, r_106);
      t = p_99(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_o_42;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL;
  if(match_cons(t, sym__2))
    {
      h_68 = ATgetArgument(t, 0);
      i_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(h_68, i_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_106 = NULL,d_68 = NULL,e_68 = NULL;
  t = times_0_0(t);
  e_68 = t;
  t = SSL_explode_term(e_68);
  if(match_cons(t, sym__2))
    {
      ATerm i_45 = ATgetArgument(t, 0);
      d_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_68;
  t = foldr_2_0(s_7, t_7, t);
  u_106 = t;
  t = SSL_TicksToSeconds(u_106);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
  f_107 = t;
  if(match_cons(t, sym__2))
    {
      g_107 = ATgetArgument(t, 0);
      h_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_107;
        if((g_107 != t))
          {
            _fail(t);
          }
        t = f_107;
        LocalPopChoice(k_45);
      }
    else
      {
        t = j_45;
        t = (ATerm) ATmakeAppl(sym__2, g_107, h_107);
        {
          ATerm l_45 = t;
          int m_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_107, h_107);
              LocalPopChoice(m_45);
            }
          else
            {
              t = l_45;
              t = SSL_gtr(g_107, h_107);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_107, h_107);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm l_107 = NULL;
  l_107 = t;
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_107 = NULL;
        t = term_n_42;
        t = get_config_0_0(t);
        n_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_107, term_h_19);
        t = geq_0_0(t);
        t = l_107;
        t = f_108(t);
        LocalPopChoice(o_45);
      }
    else
      {
        t = n_45;
        t = l_107;
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL,s_107 = NULL,t_107 = NULL;
  t = run_time_0_0(t);
  p_107 = t;
  t = term_f_42;
  t = whoami_0_0(t);
  q_107 = t;
  t = term_g_42;
  s_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_45), p_107), term_q_45), q_107);
  t_107 = t;
  t = SSL_printnl(s_107, t_107);
  t = (ATerm) ATmakeAppl(sym__2, term_g_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_45), p_107), term_q_45), q_107));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_107 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_42;
  u_107 = t;
  t = SSL_exit(u_107);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL;
  d_108 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_108;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_108 = ATgetArgument(t, 0);
          {
            ATerm u_68 = NULL,t_20 = NULL;
            t = SSLgetAnnotations(d_108);
            u_68 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_108);
            t_20 = t;
            t = SSLsetAnnotations(t_20, u_68);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_108;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_116 (ATerm), ATerm t)
{
  ATerm t_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_45;
      t = get_config_0_0(t);
      LocalPopChoice(u_45);
    }
  else
    {
      t = t_45;
      t = fetch_1_0(v_7, t);
    }
  t = b_116(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_108 = ATgetFirst((ATermList) t);
      i_108 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_108 = NULL,n_108 = NULL;
        static ATerm w_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_108)), not_null(n_108));
          return(t);
        }
        t = i_108;
        t = k_0(t);
        if(((m_108 != NULL) && (m_108 != t)))
          _fail(t);
        else
          m_108 = t;
        t = h_108;
        t = i_0(t);
        if(((n_108 != NULL) && (n_108 != t)))
          _fail(t);
        else
          n_108 = t;
        t = i_108;
        t = reverse_acc_2_0(i_0, w_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_42;
      t = k_0(t);
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm a_109 = NULL,g_69 = NULL,h_69 = NULL;
  a_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_109), term_w_45);
  {
    ATerm x_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(y_45);
      }
    else
      {
        t = x_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_109), term_w_45));
      }
  }
  g_69 = t;
  t = term_t_40;
  h_69 = t;
  t = SSL_printnl(h_69, g_69);
  t = (ATerm) ATinsert(ATinsert(ATempty, a_109), term_w_45);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL,t_108 = NULL,d_69 = NULL,e_69 = NULL;
  ATerm z_45 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_45;
      t = get_config_0_0(t);
      r_108 = t;
      LocalPopChoice(b_46);
    }
  else
    {
      t = z_45;
      {
        static ATerm x_7 (ATerm t)
        {
          ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL,v_20 = NULL;
          w_108 = t;
          if(match_cons(t, sym_Program_1))
            {
              v_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_108);
          u_108 = t;
          t = v_108;
          if(((r_108 != NULL) && (r_108 != t)))
            _fail(t);
          else
            r_108 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, v_108);
          v_20 = t;
          t = SSLsetAnnotations(v_20, u_108);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_69 = NULL,b_69 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_46), not_null(r_108)), term_e_46);
        {
          ATerm g_46 = t;
          int h_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(h_46);
            }
          else
            {
              t = g_46;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_46), not_null(r_108)), term_e_46));
            }
        }
        a_69 = t;
        t = term_t_40;
        b_69 = t;
        t = SSL_printnl(b_69, a_69);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_46), not_null(r_108)), term_e_46);
        LocalPopChoice(d_46);
      }
    else
      {
        t = c_46;
      }
  }
  t = term_j_46;
  {
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(l_46);
      }
    else
      {
        t = k_46;
        t = (ATerm) ATinsert(ATempty, term_j_46);
      }
  }
  d_69 = t;
  t = term_t_40;
  e_69 = t;
  t = SSL_printnl(e_69, d_69);
  t = term_f_43;
  s_108 = t;
  t = term_g_43;
  t_108 = t;
  t = term_m_46;
  t = x_9(s_108, t_108, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(a_8, t);
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_69 = NULL,k_69 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_46), term_r_46), term_q_46), term_p_46);
        {
          ATerm t_46 = t;
          int u_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(u_46);
            }
          else
            {
              t = t_46;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_46), term_r_46), term_q_46), term_p_46));
            }
        }
        j_69 = t;
        t = term_t_40;
        k_69 = t;
        t = SSL_printnl(k_69, j_69);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_46), term_r_46), term_q_46), term_p_46);
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  static ATerm z_109 (ATerm t)
  {
    ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL;
    w_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_109 = ATgetFirst((ATermList) t);
        y_109 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_46 = t;
      int x_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_69 = NULL,v_69 = NULL,x_20 = NULL;
          t = SSLgetAnnotations(w_109);
          q_69 = t;
          t = x_109;
          t = r_93(t);
          v_69 = t;
          t = (ATerm) ATinsert(CheckATermList(y_109), v_69);
          x_20 = t;
          t = SSLsetAnnotations(x_20, q_69);
          LocalPopChoice(x_46);
        }
      else
        {
          t = w_46;
          {
            ATerm w_70 = NULL,z_70 = NULL,y_20 = NULL;
            t = SSLgetAnnotations(w_109);
            w_70 = t;
            t = y_109;
            t = z_109(t);
            z_70 = t;
            t = (ATerm) ATinsert(CheckATermList(z_70), x_109);
            y_20 = t;
            t = SSLsetAnnotations(y_20, w_70);
          }
        }
    }
    return(t);
  }
  t = z_109(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_110 = NULL;
      l_110 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = l_110;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_47 = ATgetFirst((ATermList) t);
              ATerm c_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_110;
        }
      LocalPopChoice(a_47);
    }
  else
    {
      t = z_46;
      {
        static ATerm e_112 (ATerm t)
        {
          ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL;
          c_112 = t;
          if(match_cons(t, sym_iter_1))
            {
              d_112 = ATgetArgument(t, 0);
              {
                ATerm q_71 = NULL,d_21 = NULL;
                t = SSLgetAnnotations(c_112);
                q_71 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, d_112);
                d_21 = t;
                t = SSLsetAnnotations(d_21, q_71);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  d_112 = ATgetArgument(t, 0);
                  b_112 = ATgetArgument(t, 1);
                  {
                    ATerm g_72 = NULL,e_21 = NULL;
                    t = SSLgetAnnotations(c_112);
                    g_72 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, d_112, b_112);
                    e_21 = t;
                    t = SSLsetAnnotations(e_21, g_72);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      d_112 = ATgetArgument(t, 0);
                      {
                        ATerm i_74 = NULL,z_21 = NULL;
                        t = SSLgetAnnotations(c_112);
                        i_74 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, d_112);
                        z_21 = t;
                        t = SSLsetAnnotations(z_21, i_74);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          d_112 = ATgetArgument(t, 0);
                          b_112 = ATgetArgument(t, 1);
                          {
                            ATerm q_74 = NULL,a_22 = NULL;
                            t = SSLgetAnnotations(c_112);
                            q_74 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, d_112, b_112);
                            a_22 = t;
                            t = SSLsetAnnotations(a_22, q_74);
                          }
                        }
                      else
                        {
                          ATerm z_74 = NULL,b_75 = NULL,d_22 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              d_112 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(c_112);
                          z_74 = t;
                          t = d_112;
                          {
                            static ATerm b_8 (ATerm t)
                            {
                              ATerm d_47 = t;
                              int e_47 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_75 = NULL,j_75 = NULL;
                                  j_75 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      i_75 = ATgetArgument(t, 0);
                                      {
                                        ATerm p_75 = NULL,c_22 = NULL;
                                        t = SSLgetAnnotations(j_75);
                                        p_75 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, i_75);
                                        c_22 = t;
                                        t = SSLsetAnnotations(c_22, p_75);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = j_75;
                                    }
                                  LocalPopChoice(e_47);
                                }
                              else
                                {
                                  t = d_47;
                                  t = e_112(t);
                                }
                              return(t);
                            }
                            t = map_1_0(b_8, t);
                          }
                          b_75 = t;
                          t = (ATerm) ATmakeAppl(sym_seq_1, b_75);
                          d_22 = t;
                          t = SSLsetAnnotations(d_22, z_74);
                        }
                    }
                }
            }
          return(t);
        }
        t = e_112(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
  t = term_e_45;
  t = get_config_0_0(t);
  u_75 = t;
  {
    ATerm f_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(g_47);
      }
    else
      {
        t = f_47;
        t = (ATerm) ATinsert(ATempty, u_75);
      }
  }
  v_75 = t;
  t = term_t_40;
  w_75 = t;
  t = SSL_printnl(w_75, v_75);
  t = u_75;
  return(t);
}
static ATerm w_9 (ATerm z_39, ATerm a_40, ATerm t)
{
  t = SSL_strcat(z_39, a_40);
  return(t);
}
ATerm debug_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL;
  o_112 = t;
  t = w_92(t);
  p_112 = t;
  t = term_g_42;
  q_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_112), p_112);
  r_112 = t;
  t = SSL_printnl(q_112, r_112);
  t = o_112;
  return(t);
}
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  static ATerm g_113 (ATerm t)
  {
    ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
    d_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_113;
      }
    else
      {
        ATerm k_79 = NULL,n_79 = NULL,o_79 = NULL,n_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_113 = ATgetFirst((ATermList) t);
            f_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_113);
        k_79 = t;
        t = e_113;
        t = h_93(t);
        n_79 = t;
        t = f_113;
        t = g_113(t);
        o_79 = t;
        t = (ATerm) ATinsert(CheckATermList(o_79), n_79);
        n_22 = t;
        t = SSLsetAnnotations(n_22, k_79);
      }
    return(t);
  }
  t = g_113(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm j_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(l_47);
    }
  else
    {
      t = j_47;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_r_47;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_113 = NULL;
      o_113 = t;
      t = SSL_is_string(o_113);
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      {
        ATerm u_47 = t;
        int v_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_8, t);
            LocalPopChoice(v_47);
          }
        else
          {
            t = u_47;
            {
              ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL;
              u_113 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_113 = ATgetArgument(t, 0);
                  t = v_113;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_113 = ATgetArgument(t, 0);
                      t = v_113;
                      {
                        ATerm w_47 = t;
                        int x_47 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(x_47);
                          }
                        else
                          {
                            t = w_47;
                            t = debug_1_0(d_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_114 = NULL,b_114 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_113 = ATgetArgument(t, 0);
                          w_113 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_113;
                      t = eval_config_0_0(t);
                      a_114 = t;
                      t = w_113;
                      t = eval_config_0_0(t);
                      b_114 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_114, b_114);
                      t = w_9(a_114, b_114, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_9 (ATerm a_55, ATerm b_55, ATerm t)
{
  t = SSL_table_get(a_55, b_55);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_114 = NULL,g_114 = NULL;
  f_114 = t;
  t = term_e_43;
  g_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, f_114);
  t = x_9(g_114, f_114, t);
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_114 = NULL,i_114 = NULL;
        t = eval_config_0_0(t);
        h_114 = t;
        t = term_e_43;
        i_114 = t;
        t = SSL_table_put(i_114, f_114, h_114);
        t = h_114;
        LocalPopChoice(z_47);
      }
    else
      {
        t = y_47;
      }
  }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm l_114 = NULL,m_114 = NULL;
  t = term_a_48;
  l_114 = t;
  t = term_f_42;
  m_114 = t;
  t = term_b_48;
  t = a_10(l_114, m_114, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm n_114 = NULL,o_114 = NULL,p_114 = NULL,q_114 = NULL;
  t = term_a_48;
  p_114 = t;
  t = term_f_42;
  q_114 = t;
  t = term_b_48;
  t = a_10(p_114, q_114, t);
  t = term_d_48;
  n_114 = t;
  t = term_f_42;
  o_114 = t;
  t = term_e_48;
  t = a_10(n_114, o_114, t);
  t = term_i_48;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_j_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_48 = t;
  int o_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, f_8, h_8, t);
      LocalPopChoice(o_48);
    }
  else
    {
      t = n_48;
      t = Option_3_0(i_8, j_8, l_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_65 (ATerm), ATerm l_65 (ATerm), ATerm t)
{
  ATerm r_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,t_25 = NULL;
  w_114 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_114 = ATgetFirst((ATermList) t);
      t_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_114);
  r_114 = t;
  t = s_114;
  t = k_65(t);
  u_114 = t;
  t = t_114;
  t = l_65(t);
  v_114 = t;
  t = (ATerm) ATinsert(CheckATermList(v_114), u_114);
  t_25 = t;
  t = SSLsetAnnotations(t_25, r_114);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL,g_115 = NULL,h_115 = NULL,x_25 = NULL;
  b_115 = t;
  {
    ATerm p_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_48;
        t = b_111(t);
        LocalPopChoice(r_48);
      }
    else
      {
        t = p_48;
      }
  }
  t = b_115;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_115 = ATgetFirst((ATermList) t);
      e_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_115);
  c_115 = t;
  t = term_e_45;
  h_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_45, d_115);
  t = a_10(h_115, d_115, t);
  t = e_115;
  {
    static ATerm r_115 (ATerm t)
    {
      ATerm t_48 = t;
      int v_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_48 = t;
          int y_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_115 = NULL;
              k_115 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_115;
              LocalPopChoice(y_48);
            }
          else
            {
              t = w_48;
              t = b_111(t);
              t = Cons_2_0(_id, r_115, t);
            }
          LocalPopChoice(v_48);
        }
      else
        {
          t = t_48;
          {
            ATerm n_115 = NULL,o_115 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_115 = ATgetFirst((ATermList) t);
                o_115 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_115), (ATerm) ATmakeAppl(sym_Undefined_1, n_115));
          }
        }
      return(t);
    }
    t = r_115(t);
  }
  g_115 = t;
  t = (ATerm) ATinsert(CheckATermList(g_115), (ATerm) ATmakeAppl(sym_Program_1, d_115));
  x_25 = t;
  t = SSLsetAnnotations(x_25, c_115);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm i_116 = NULL;
  i_116 = t;
  if(match_string(t, "--help"))
    {
      t = i_116;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_116;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_116;
        }
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm j_116 = NULL,m_116 = NULL;
  t = term_v_45;
  j_116 = t;
  t = term_f_42;
  m_116 = t;
  t = term_z_48;
  t = a_10(j_116, m_116, t);
  t = term_a_49;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_b_49;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_111 (ATerm), ATerm t)
{
  ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL,c_116 = NULL,h_116 = NULL;
  y_115 = t;
  t = term_f_43;
  a_116 = t;
  t = term_g_43;
  c_116 = t;
  t = (ATerm) ATempty;
  h_116 = t;
  t = SSL_table_put(a_116, c_116, h_116);
  t = y_115;
  {
    static ATerm n_8 (ATerm t)
    {
      ATerm e_49 = t;
      int i_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_111(t);
          LocalPopChoice(i_49);
        }
      else
        {
          t = e_49;
          {
            ATerm j_49 = t;
            int l_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_8, q_8, u_8, t);
                LocalPopChoice(l_49);
              }
            else
              {
                t = j_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_8, t);
  }
  {
    ATerm n_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_116 = NULL;
        t_116 = t;
        {
          ATerm p_49 = t;
          int q_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_83 = NULL;
              t = t_116;
              {
                ATerm r_49 = t;
                int s_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_45;
                    t = get_config_0_0(t);
                    LocalPopChoice(s_49);
                  }
                else
                  {
                    t = r_49;
                    t = fetch_1_0(v_8, t);
                  }
              }
              t = t_116;
              t = default_system_usage_0_0(t);
              t = term_o_42;
              h_83 = t;
              t = SSL_exit(h_83);
              LocalPopChoice(q_49);
            }
          else
            {
              t = p_49;
              {
                ATerm d_84 = NULL;
                t = term_a_48;
                t = get_config_0_0(t);
                t = t_116;
                t = default_system_about_0_0(t);
                t = term_o_42;
                d_84 = t;
                t = SSL_exit(d_84);
              }
            }
        }
        LocalPopChoice(o_49);
      }
    else
      {
        t = n_49;
        {
          ATerm t_49 = t;
          int u_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL;
              static ATerm w_8 (ATerm t)
              {
                ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL,z_25 = NULL;
                z_116 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_116 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_116);
                x_116 = t;
                t = y_116;
                if(((w_115 != NULL) && (w_115 != t)))
                  _fail(t);
                else
                  w_115 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_116);
                z_25 = t;
                t = SSLsetAnnotations(z_25, x_116);
                return(t);
              }
              t = fetch_1_0(w_8, t);
              t = term_g_42;
              v_116 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_115)), term_v_49);
              w_116 = t;
              t = SSL_printnl(v_116, w_116);
              t = (ATerm) ATmakeAppl(sym__2, term_g_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_115)), term_v_49));
              t = default_system_usage_0_0(t);
              t = term_h_19;
              u_116 = t;
              t = SSL_exit(u_116);
              LocalPopChoice(u_49);
            }
          else
            {
              t = t_49;
            }
        }
      }
  }
  x_115 = t;
  t = term_f_43;
  z_115 = t;
  t = SSL_table_destroy(z_115);
  t = x_115;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL;
  t = parse_options_1_0(d_116, t);
  e_117 = t;
  t = term_w_49;
  h_117 = t;
  t = SSL_table_create(h_117);
  t = term_w_49;
  f_117 = t;
  t = term_x_49;
  g_117 = t;
  t = SSL_table_put(f_117, g_117, e_117);
  t = e_117;
  t = f_116(t);
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_116, t);
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
        {
          ATerm a_50 = t;
          int b_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_116(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_50);
            }
          else
            {
              t = a_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_options_0_0(t);
      LocalPopChoice(d_50);
    }
  else
    {
      t = c_50;
      {
        ATerm f_50 = t;
        int g_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(g_50);
          }
        else
          {
            t = f_50;
            {
              ATerm h_50 = t;
              int i_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(i_50);
                }
              else
                {
                  t = h_50;
                  {
                    ATerm n_50 = t;
                    int o_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(i_9, j_9, v_9, t);
                        LocalPopChoice(o_50);
                      }
                    else
                      {
                        t = n_50;
                        {
                          ATerm r_50 = t;
                          int s_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(s_50);
                            }
                          else
                            {
                              t = r_50;
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
static ATerm h_9 (ATerm t)
{
  t = input_1_0(z_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm k_117 = NULL,l_117 = NULL;
  t = term_w_40;
  k_117 = t;
  t = term_f_42;
  l_117 = t;
  t = term_t_50;
  t = a_10(k_117, l_117, t);
  t = term_u_50;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_v_50;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = output_1_0(implode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_9, default_usage_0_0, _id, h_9, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Ins_1;
Symbol sym_Conc_2;
Symbol sym_Conc_3;
Symbol sym_Snoc_2;
Symbol sym_seq_1;
Symbol sym_ToTerm_1;
Symbol sym_ToStrategy_1;
Symbol sym_ToBuild_1;
Symbol sym_layout_1;
Symbol sym_meta_listvar_1;
Symbol sym_meta_var_1;
Symbol sym_Undefined_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Conc_2;
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
Symbol sym_Hashtable_1;
Symbol sym_Path_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_layout_0;
Symbol sym_varsym_1;
Symbol sym_func_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_sort_1;
Symbol sym_seq_2;
Symbol sym_alt_2;
Symbol sym_opt_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_lit_1;
Symbol sym_empty_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_alt_2;
Symbol sym_seq_2;
Symbol sym_label_2;
Symbol sym_lit_1;
Symbol sym_sort_1;
Symbol sym_alt_2;
Symbol sym_func_2;
Symbol sym_pair_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_opt_1;
Symbol sym_seq_2;
Symbol sym_empty_0;
Symbol sym_layout_0;
Symbol sym_varsym_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_prod_3;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_bracket_0;
Symbol sym_term_1;
Symbol sym_appl_2;
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
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
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
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
}
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_z_49;
ATerm term_w_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_p_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_g_47;
ATerm term_b_47;
ATerm term_y_46;
ATerm term_v_46;
ATerm term_t_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_k_45;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_c_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_b_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_o_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_d_41;
ATerm term_a_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_n_35;
ATerm term_o_34;
ATerm term_m_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_t_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_o_32;
ATerm term_k_32;
ATerm term_h_30;
ATerm term_z_29;
ATerm term_n_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_h_18;
ATerm term_v_17;
ATerm term_k_16;
ATerm term_l_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_b_39);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_f_39);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_k_39);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_p_39);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_t_39);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_x_39);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_b_40);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_f_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_j_40);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_n_40);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_u_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_d_41);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_o_41);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_o_42);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym__2, term_y_42, term_z_42);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_42);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym__2, term_h_43, term_s_42);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_m_45);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_y_42);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_f_46);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym__2, term_q_43, term_r_43);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym__2, term_y_47, term_s_42);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_c_48, term_s_42);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym__2, term_f_46, term_s_42);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym__3, term_q_43, term_r_43, (ATerm) ATempty);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_y_47);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym__2, term_o_41, term_s_42);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm i_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm annotation_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm j_106 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm skip_concrete_1_0 (ATerm y_100 (ATerm), ATerm t);
static ATerm u_0 (ATerm c_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm z_8 (ATerm f_100 (ATerm), ATerm n_21, ATerm m_21, ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplCons_1_0 (ATerm m_100 (ATerm), ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm a_101 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_104 (ATerm), ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm k_59 (ATerm t_47, ATerm a_48, ATerm d_48, ATerm e_48, ATerm t);
static ATerm m_59 (ATerm l_49, ATerm p_49, ATerm q_49, ATerm r_49, ATerm t);
static ATerm n_59 (ATerm r_51, ATerm x_51, ATerm y_51, ATerm e_52, ATerm t);
static ATerm o_59 (ATerm s_57, ATerm t_57, ATerm u_57, ATerm v_57, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm v_105 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_119 (ATerm), ATerm t);
static ATerm u_81 (ATerm t_77, ATerm t);
static ATerm v_81 (ATerm c_79, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm f_112 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm v_89 (ATerm p_88, ATerm q_88, ATerm r_88, ATerm t);
static ATerm w_89 (ATerm b_89, ATerm c_89, ATerm d_89, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_111 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t);
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
static ATerm n_9 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm o_9 (ATerm l_37, ATerm m_37, ATerm t);
static ATerm q_9 (ATerm u_110 (ATerm), ATerm w_310, ATerm r_37, ATerm t);
static ATerm p_9 (ATerm h_37, ATerm i_37, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_1_0 (ATerm e_135 (ATerm), ATerm t);
static ATerm v_103 (ATerm m_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_9 (ATerm n_37, ATerm t);
static ATerm s_9 (ATerm k_51, ATerm l_51, ATerm t);
static ATerm t_9 (ATerm i_53, ATerm j_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_105 (ATerm f_104, ATerm t);
static ATerm l_105 (ATerm j_104, ATerm k_104, ATerm l_104, ATerm t);
static ATerm m_105 (ATerm v_104, ATerm y_104, ATerm z_104, ATerm t);
static ATerm u_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm f_135 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_10 (ATerm a_72, ATerm b_72, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_10 (ATerm m_58, ATerm n_58, ATerm l_58, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
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
static ATerm v_9 (ATerm v_56, ATerm w_56, ATerm t);
ATerm foldr_2_0 (ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_127 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm need_help_1_0 (ATerm v_134 (ATerm), ATerm t);
static ATerm e_10 (ATerm e_63, ATerm f_63, ATerm g_63, ATerm t);
ATerm lookup_table_0_1 (ATerm y_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_63, ATerm n_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm x_9 (ATerm j_63, ATerm k_63, ATerm t);
static ATerm y_9 (ATerm o_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_111 (ATerm), ATerm t);
ATerm map_1_0 (ATerm d_111 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_10 (ATerm h_63, ATerm i_63, ATerm t);
static ATerm a_10 (ATerm f_60, ATerm g_60, ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_129 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm parse_options_1_0 (ATerm v_129 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_134 (ATerm), ATerm y_134 (ATerm), ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,a_0 = NULL;
  r_15 = t;
  if(match_cons(t, sym_cons_1))
    {
      q_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_15);
  p_15 = t;
  t = q_15;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, q_15);
  a_0 = t;
  t = SSLsetAnnotations(a_0, p_15);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm j_9 = t;
  if((PushChoice() == 0))
    {
      ATerm s_18 = NULL,t_18 = NULL,v_18 = NULL;
      t_18 = t;
      if(match_cons(t, sym_appl_2))
        {
          v_18 = ATgetArgument(t, 0);
          s_18 = ATgetArgument(t, 1);
          {
            ATerm l_6 = NULL,u_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,j_1 = NULL,i_1 = NULL,r_7 = NULL;
            t = SSLgetAnnotations(t_18);
            l_6 = t;
            t = v_18;
            if(match_cons(t, sym_prod_3))
              {
                b_7 = ATgetArgument(t, 0);
                c_7 = ATgetArgument(t, 1);
                d_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_18);
            u_6 = t;
            t = c_7;
            if(match_cons(t, sym_cf_1))
              {
                r_7 = ATgetArgument(t, 0);
                {
                  ATerm y_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,x_0 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(c_7);
                  y_7 = t;
                  t = r_7;
                  if(match_cons(t, sym_opt_1))
                    {
                      b_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_7);
                  a_8 = t;
                  t = b_8;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, b_8);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, a_8);
                  c_8 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, c_8);
                  x_0 = t;
                  t = SSLsetAnnotations(x_0, y_7);
                }
              }
            else
              {
                ATerm i_8 = NULL,y_0 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    r_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_7);
                i_8 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, r_7);
                y_0 = t;
                t = SSLsetAnnotations(y_0, i_8);
              }
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, b_7, e_7, d_7);
            i_1 = t;
            t = SSLsetAnnotations(i_1, u_6);
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, f_7, s_18);
            j_1 = t;
            t = SSLsetAnnotations(j_1, l_6);
          }
        }
      else
        {
          ATerm q_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,l_1 = NULL,k_1 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              v_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_18);
          q_8 = t;
          t = v_18;
          if(match_cons(t, sym_opt_1))
            {
              v_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_18);
          u_8 = t;
          t = v_8;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, v_8);
          k_1 = t;
          t = SSLsetAnnotations(k_1, u_8);
          w_8 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, w_8);
          l_1 = t;
          t = SSLsetAnnotations(l_1, q_8);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_9;
    }
  {
    ATerm k_9 = t;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL,e_19 = NULL,b_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,k_21 = NULL,l_21 = NULL,o_21 = NULL,s_2 = NULL,i_2 = NULL;
        o_21 = t;
        if(match_cons(t, sym_appl_2))
          {
            e_19 = ATgetArgument(t, 0);
            b_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_21);
        y_18 = t;
        t = e_19;
        if(match_cons(t, sym_prod_3))
          {
            x_20 = ATgetArgument(t, 0);
            y_20 = ATgetArgument(t, 1);
            z_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_19);
        w_20 = t;
        t = y_20;
        t = oncetd_1_0(t_0, t);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, x_20, k_21, z_20);
        i_2 = t;
        t = SSLsetAnnotations(i_2, w_20);
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, l_21, b_20);
        s_2 = t;
        t = SSLsetAnnotations(s_2, y_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_9;
      }
  }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,w_1 = NULL;
  s_21 = t;
  if(match_cons(t, sym_lex_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_21);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, r_21);
  w_1 = t;
  t = SSLsetAnnotations(w_1, q_21);
  return(t);
}
ATerm annotation_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,z_14 = NULL,a_15 = NULL,e_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,v_0 = NULL,h_0 = NULL,b_0 = NULL;
  o_15 = t;
  if(match_cons(t, sym_appl_2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_15);
  t_14 = t;
  t = u_14;
  if(match_cons(t, sym_prod_3))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  w_14 = t;
  t = e_15;
  if(match_cons(t, sym_attrs_1))
    {
      i_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_15);
  h_15 = t;
  t = i_15;
  t = oncetd_1_0(i_0, t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, m_15);
  b_0 = t;
  t = SSLsetAnnotations(b_0, h_15);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, z_14, a_15, n_15);
  h_0 = t;
  t = SSLsetAnnotations(h_0, w_14);
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, g_15, v_14);
  v_0 = t;
  t = SSLsetAnnotations(v_0, t_14);
  t = v_14;
  t = filter_1_0(s_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_14 = ATgetFirst((ATermList) t);
      i_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_14;
  t = x_100(t);
  j_14 = t;
  t = i_14;
  t = w_100(t);
  k_14 = t;
  t = term_l_9;
  r_14 = t;
  t = (ATerm) ATinsert(CheckATermList(k_14), j_14);
  s_14 = t;
  t = SSL_mkterm(r_14, s_14);
  return(t);
}
ATerm alltd_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  static ATerm c_22 (ATerm t);
  static ATerm c_22 (ATerm t)
  {
    ATerm m_9 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_106(t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = m_9;
        t = SRTS_all(c_22, t);
      }
    return(t);
  }
  t = c_22(t);
  return(t);
}
ATerm appl_2_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,s_22 = NULL,i_3 = NULL;
  s_22 = t;
  if(match_cons(t, sym_appl_2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_22);
  l_22 = t;
  t = m_22;
  t = g_94(t);
  o_22 = t;
  t = n_22;
  t = h_94(t);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, o_22, p_22);
  i_3 = t;
  t = SSLsetAnnotations(i_3, l_22);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,u_25 = NULL,v_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,a_6 = NULL,y_5 = NULL;
  b_26 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      r_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_26);
  o_25 = t;
  t = q_25;
  if(match_cons(t, sym_cf_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_25);
  u_25 = t;
  t = v_25;
  t = oncetd_1_0(c_1, t);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, z_25);
  y_5 = t;
  t = SSLsetAnnotations(y_5, u_25);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, p_25, a_26, r_25);
  a_6 = t;
  t = SSLsetAnnotations(a_6, o_25);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,x_5 = NULL;
  e_26 = t;
  if(match_cons(t, sym_sort_1))
    {
      d_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_26);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, d_26);
  x_5 = t;
  t = SSLsetAnnotations(x_5, c_26);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm y_10 = NULL,a_11 = NULL,f_11 = NULL,c_6 = NULL;
  f_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_11);
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, a_11);
  c_6 = t;
  t = SSLsetAnnotations(c_6, y_10);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,h_7 = NULL;
  n_12 = t;
  if(match_cons(t, sym_cons_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  l_12 = t;
  t = m_12;
  if(match_string(t, "FromTerm"))
    {
      t = m_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("FromApp", 0, ATtrue)))
        _fail(t);
      t = m_12;
    }
  t = (ATerm) ATmakeAppl(sym_cons_1, m_12);
  h_7 = t;
  t = SSLsetAnnotations(h_7, l_12);
  return(t);
}
ATerm skip_concrete_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,c_24 = NULL,g_24 = NULL,l_24 = NULL,q_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,b_6 = NULL,w_5 = NULL,v_5 = NULL,c_4 = NULL,b_4 = NULL;
  static ATerm d_29 (ATerm t);
  static ATerm d_29 (ATerm t)
  {
    static ATerm d_1 (ATerm t);
    static ATerm d_1 (ATerm t)
    {
      ATerm i_10 = t;
      int m_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
          a_29 = t;
          if(match_cons(t, sym_appl_2))
            {
              b_29 = ATgetArgument(t, 0);
              c_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm o_10 = t;
            int p_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_9 = NULL,j_10 = NULL,k_10 = NULL,n_10 = NULL,s_10 = NULL,t_10 = NULL,w_10 = NULL,h_6 = NULL,e_6 = NULL;
                t = SSLgetAnnotations(a_29);
                z_9 = t;
                t = b_29;
                if(match_cons(t, sym_prod_3))
                  {
                    k_10 = ATgetArgument(t, 0);
                    n_10 = ATgetArgument(t, 1);
                    s_10 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_29);
                j_10 = t;
                t = k_10;
                t = SRTS_one(e_1, t);
                t_10 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, t_10, n_10, s_10);
                e_6 = t;
                t = SSLsetAnnotations(e_6, j_10);
                w_10 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, w_10, c_29);
                h_6 = t;
                t = SSLsetAnnotations(h_6, z_9);
                t = y_100(t);
                LocalPopChoice(p_10);
              }
            else
              {
                t = o_10;
                {
                  ATerm o_11 = NULL,u_11 = NULL,w_11 = NULL,x_11 = NULL,c_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
                  t = SSLgetAnnotations(a_29);
                  o_11 = t;
                  t = b_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      w_11 = ATgetArgument(t, 0);
                      x_11 = ATgetArgument(t, 1);
                      c_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_29);
                  u_11 = t;
                  t = c_12;
                  if(match_cons(t, sym_attrs_1))
                    {
                      h_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_12);
                  g_12 = t;
                  t = h_12;
                  t = oncetd_1_0(f_1, t);
                  i_12 = t;
                  t = (ATerm) ATmakeAppl(sym_attrs_1, i_12);
                  i_7 = t;
                  t = SSLsetAnnotations(i_7, g_12);
                  j_12 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, w_11, x_11, j_12);
                  j_7 = t;
                  t = SSLsetAnnotations(j_7, u_11);
                  f_12 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, f_12, c_29);
                  k_7 = t;
                  t = SSLsetAnnotations(k_7, o_11);
                  t = y_100(t);
                }
              }
          }
          LocalPopChoice(m_10);
        }
      else
        {
          t = i_10;
          t = annotation_2_0(y_100, d_29, t);
        }
      return(t);
    }
    t = alltd_1_0(d_1, t);
    return(t);
  }
  h_25 = t;
  if(match_cons(t, sym_appl_2))
    {
      g_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_25);
  c_24 = t;
  t = g_24;
  if(match_cons(t, sym_prod_3))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
      v_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_24);
  s_24 = t;
  t = u_24;
  if(match_cons(t, sym_cf_1))
    {
      c_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  b_25 = t;
  t = c_25;
  if(match_cons(t, sym_sort_1))
    {
      f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  e_25 = t;
  t = f_25;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, f_25);
  b_4 = t;
  t = SSLsetAnnotations(b_4, e_25);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, g_25);
  c_4 = t;
  t = SSLsetAnnotations(c_4, b_25);
  d_25 = t;
  t = v_24;
  if(match_cons(t, sym_attrs_1))
    {
      y_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_24);
  x_24 = t;
  t = y_24;
  {
    static ATerm z_0 (ATerm t);
    static ATerm z_0 (ATerm t)
    {
      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,s_5 = NULL,r_5 = NULL;
      n_25 = t;
      if(match_cons(t, sym_term_1))
        {
          j_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_25);
      i_25 = t;
      t = j_25;
      if(match_cons(t, sym_cons_1))
        {
          l_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_25);
      k_25 = t;
      t = l_25;
      if(((z_23 != NULL) && (z_23 != t)))
        _fail(t);
      else
        z_23 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, l_25);
      r_5 = t;
      t = SSLsetAnnotations(r_5, k_25);
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, m_25);
      s_5 = t;
      t = SSLsetAnnotations(s_5, i_25);
      return(t);
    }
    t = SRTS_one(z_0, t);
  }
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, z_24);
  v_5 = t;
  t = SSLsetAnnotations(v_5, x_24);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, t_24, d_25, a_25);
  w_5 = t;
  t = SSLsetAnnotations(w_5, s_24);
  w_24 = t;
  t = l_24;
  {
    static ATerm a_1 (ATerm t);
    static ATerm a_1 (ATerm t)
    {
      t = appl_2_0(b_1, _id, t);
      if(((a_24 != NULL) && (a_24 != t)))
        _fail(t);
      else
        a_24 = t;
      return(t);
    }
    t = oncetd_1_0(a_1, t);
  }
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, w_24, q_24);
  b_6 = t;
  t = SSLsetAnnotations(b_6, c_24);
  t = not_null(z_23);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(a_24));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(a_24));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(a_24));
        }
    }
  t = d_29(t);
  return(t);
}
static ATerm u_0 (ATerm c_0, ATerm t)
{
  ATerm e_0 = NULL;
  t = SSL_explode_term(c_0);
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_0 = NULL,m_0 = NULL,n_0 = NULL;
  n_0 = t;
  if(match_cons(t, sym__2))
    {
      k_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
      {
        ATerm r_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_1 (ATerm t);
            static ATerm m_1 (ATerm t)
            {
              t = m_0;
              return(t);
            }
            t = k_0;
            t = at_end_1_0(m_1, t);
            LocalPopChoice(x_10);
          }
        else
          {
            t = r_10;
            t = u_0(n_0, t);
          }
      }
    }
  else
    {
      t = u_0(n_0, t);
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
        ATerm d_11 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_11 = ATgetFirst((ATermList) t);
      q_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_11 = ATgetFirst((ATermList) t);
      s_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_1;
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_11 = ATgetFirst((ATermList) t);
            u_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_11);
        t = u_1;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_2;
            {
              ATerm k_11 = t;
              int l_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm m_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_11);
                  t = n_1;
                }
              else
                {
                  t = k_11;
                  if(match_cons(t, sym_cf_1))
                    {
                      c_2 = ATgetArgument(t, 0);
                      t = c_2;
                      {
                        ATerm n_11 = t;
                        int p_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm q_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(p_11);
                            t = n_1;
                          }
                        else
                          {
                            t = n_11;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm r_11 = ATgetArgument(t, 0);
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
                          ATerm s_11 = ATgetArgument(t, 0);
                          ATerm t_11 = ATgetArgument(t, 1);
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
                ATerm y_11 = ATgetFirst((ATermList) t);
                x_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_11 = ATgetFirst((ATermList) t);
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
                ATerm a_12 = ATgetArgument(t, 0);
                ATerm b_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_1;
          }
      }
    else
      {
        t = h_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm d_12 = ATgetArgument(t, 0);
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
        ATerm x_3 = NULL,z_3 = NULL,a_4 = NULL;
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
        z_3 = t;
        t = k_3;
        t = r_0(t);
        a_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(CheckATermList(a_4), z_3));
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
        ATerm e_12 = t;
        int k_12 = stack_ptr;
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
                ATerm p_2 = NULL,a_9 = NULL;
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
                a_9 = t;
                t = SSLsetAnnotations(a_9, p_2);
              }
            t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
            t = conc_0_0(t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = e_12;
            t = (ATerm) ATmakeAppl(sym_Conc_2, g_1, h_1);
          }
      }
    }
  return(t);
}
static ATerm z_8 (ATerm f_100 (ATerm), ATerm n_21, ATerm m_21, ATerm t)
{
  ATerm x_6 = NULL,z_6 = NULL,a_7 = NULL;
  t = n_21;
  if(match_cons(t, sym_prod_3))
    {
      ATerm o_12 = ATgetArgument(t, 0);
      ATerm p_12 = ATgetArgument(t, 1);
      z_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_6;
  {
    static ATerm p_1 (ATerm t);
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
  t = m_21;
  t = map_1_0(f_100, t);
  x_6 = t;
  t = SSL_mkterm(not_null(a_7), x_6);
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm y_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL,q_5 = NULL;
  y_4 = t;
  if(match_cons(t, sym_prod_3))
    {
      a_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
      {
        ATerm q_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_5 = ATgetFirst((ATermList) t);
      g_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = i_5;
  if(match_cons(t, sym_iter_1))
    {
      k_5 = ATgetArgument(t, 0);
      t = k_5;
      if((c_5 != t))
        {
          _fail(t);
        }
      t = y_4;
    }
  else
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              k_5 = ATgetArgument(t, 0);
              {
                ATerm t_12 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(s_12);
          t = k_5;
          if((c_5 != t))
            {
              _fail(t);
            }
          t = y_4;
        }
      else
        {
          t = r_12;
          if(match_cons(t, sym_cf_1))
            {
              k_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_5;
          if(match_cons(t, sym_cf_1))
            {
              e_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_5;
          if(match_cons(t, sym_iter_1))
            {
              q_5 = ATgetArgument(t, 0);
              t = q_5;
              if((e_5 != t))
                {
                  _fail(t);
                }
              t = y_4;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  q_5 = ATgetArgument(t, 0);
                  {
                    ATerm d_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = q_5;
              if((e_5 != t))
                {
                  _fail(t);
                }
              t = y_4;
            }
        }
    }
  return(t);
}
ATerm is_nil_0_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,s_6 = NULL;
  o_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
      {
        ATerm e_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_6;
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm h_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_13);
        t = o_6;
      }
    else
      {
        t = f_13;
        {
          ATerm n_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm v_13 = ATgetArgument(t, 0);
                  ATerm w_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(t_13);
              t = o_6;
            }
          else
            {
              t = n_13;
              if(match_cons(t, sym_cf_1))
                {
                  s_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_6;
              {
                ATerm x_13 = t;
                int y_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm z_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_13);
                    t = o_6;
                  }
                else
                  {
                    t = x_13;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm a_14 = ATgetArgument(t, 0);
                        ATerm b_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = o_6;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,v_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL;
      u_10 = t;
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
          ATerm e_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_10;
              t = z_8(m_100, v_10, z_10, t);
              LocalPopChoice(m_14);
            }
          else
            {
              t = e_14;
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(o_14);
                  }
                else
                  {
                    t = n_14;
                    {
                      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
                      t = v_10;
                      if(match_cons(t, sym_prod_3))
                        {
                          h_4 = ATgetArgument(t, 0);
                          i_4 = ATgetArgument(t, 1);
                          {
                            ATerm f_16 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = h_4;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = i_4;
                      {
                        ATerm g_16 = t;
                        int h_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm i_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_16);
                            t = v_10;
                          }
                        else
                          {
                            t = g_16;
                            if(match_cons(t, sym_cf_1))
                              {
                                j_4 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = j_4;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm j_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_10;
                          }
                      }
                      t = term_k_16;
                    }
                  }
              }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_11 = ATgetFirst((ATermList) t);
              c_11 = (ATerm) ATgetNext((ATermList) t);
              t = c_11;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm l_16 = t;
                  int m_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_10;
                      t = z_8(m_100, v_10, z_10, t);
                      LocalPopChoice(m_16);
                    }
                  else
                    {
                      t = l_16;
                      {
                        ATerm n_16 = t;
                        int o_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_11 = NULL;
                            t = v_10;
                            t = is_ins_0_0(t);
                            t = b_11;
                            t = m_100(t);
                            v_11 = t;
                            t = (ATerm) ATinsert(ATempty, v_11);
                            LocalPopChoice(o_16);
                          }
                        else
                          {
                            t = n_16;
                            {
                              ATerm t_4 = NULL,v_4 = NULL,x_4 = NULL,z_4 = NULL,b_5 = NULL,d_5 = NULL,f_5 = NULL,h_5 = NULL;
                              t = v_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  v_4 = ATgetArgument(t, 0);
                                  d_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_16 = ATgetArgument(t, 2);
                                  }
                                }
                              else
                                _fail(t);
                              t = v_4;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  x_4 = ATgetFirst((ATermList) t);
                                  b_5 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = b_5;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = d_5;
                              if(match_cons(t, sym_opt_1))
                                {
                                  f_5 = ATgetArgument(t, 0);
                                  t = f_5;
                                  if((x_4 != t))
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
                                  t = x_4;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      z_4 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_5;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      h_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = h_5;
                                  if((z_4 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = v_10;
                                }
                              t = b_11;
                              t = m_100(t);
                              t_4 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, t_4);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = u_10;
                  t = z_8(m_100, v_10, z_10, t);
                }
            }
          else
            {
              t = u_10;
              t = z_8(m_100, v_10, z_10, t);
            }
        }
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = ReplConsConc_1_0(m_100, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,u_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      o_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_13;
  if(match_cons(t, sym_prod_3))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
      {
        ATerm q_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_13 = ATgetFirst((ATermList) t);
      k_13 = (ATerm) ATgetNext((ATermList) t);
      t = k_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_13;
      if(match_cons(t, sym_opt_1))
        {
          r_13 = ATgetArgument(t, 0);
          t = u_13;
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
          t = r_13;
          if((i_13 != t))
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
              r_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_13;
          if(match_cons(t, sym_cf_1))
            {
              j_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_13;
          if(match_cons(t, sym_opt_1))
            {
              s_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_13;
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
          t = s_13;
          if((j_13 != t))
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
      t = q_13;
      if(match_cons(t, sym_opt_1))
        {
          r_13 = ATgetArgument(t, 0);
          t = u_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              r_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_13;
          if(match_cons(t, sym_opt_1))
            {
              s_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm r_16 = t;
  if((PushChoice() == 0))
    {
      ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
      r_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          s_19 = ATgetArgument(t, 0);
          q_19 = ATgetArgument(t, 1);
          {
            ATerm a_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,i_9 = NULL,h_9 = NULL,h_22 = NULL;
            t = SSLgetAnnotations(r_19);
            a_21 = t;
            t = s_19;
            if(match_cons(t, sym_prod_3))
              {
                e_21 = ATgetArgument(t, 0);
                f_21 = ATgetArgument(t, 1);
                g_21 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_19);
            d_21 = t;
            t = f_21;
            if(match_cons(t, sym_cf_1))
              {
                h_22 = ATgetArgument(t, 0);
                {
                  ATerm u_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,d_9 = NULL,c_9 = NULL;
                  t = SSLgetAnnotations(f_21);
                  u_22 = t;
                  t = h_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      x_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_22);
                  w_22 = t;
                  t = x_22;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, x_22);
                  c_9 = t;
                  t = SSLsetAnnotations(c_9, w_22);
                  y_22 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, y_22);
                  d_9 = t;
                  t = SSLsetAnnotations(d_9, u_22);
                }
              }
            else
              {
                ATerm b_23 = NULL,g_9 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    h_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_21);
                b_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, h_22);
                g_9 = t;
                t = SSLsetAnnotations(g_9, b_23);
              }
            h_21 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, e_21, h_21, g_21);
            h_9 = t;
            t = SSLsetAnnotations(h_9, d_21);
            i_21 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, i_21, q_19);
            i_9 = t;
            t = SSLsetAnnotations(i_9, a_21);
          }
        }
      else
        {
          ATerm g_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,c_10 = NULL,w_9 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              s_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_19);
          g_23 = t;
          t = s_19;
          if(match_cons(t, sym_opt_1))
            {
              j_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_19);
          i_23 = t;
          t = j_23;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, j_23);
          w_9 = t;
          t = SSLsetAnnotations(w_9, i_23);
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, k_23);
          c_10 = t;
          t = SSLsetAnnotations(c_10, g_23);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_16;
    }
  return(t);
}
ATerm implodeAsfix_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  ATerm u_29 = NULL;
  static ATerm j_34 (ATerm t);
  static ATerm j_34 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
              e_34 = t;
              if(match_cons(t, sym_appl_2))
                {
                  f_34 = ATgetArgument(t, 0);
                  d_34 = ATgetArgument(t, 1);
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_34;
                        t = a_101(t);
                        t = e_34;
                        t = skip_concrete_1_0(j_34, t);
                        LocalPopChoice(x_16);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm o_17 = NULL,s_17 = NULL,g_10 = NULL;
                          t = SSLgetAnnotations(e_34);
                          o_17 = t;
                          t = d_34;
                          t = filter_1_0(r_1, t);
                          s_17 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, f_34, s_17);
                          g_10 = t;
                          t = SSLsetAnnotations(g_10, o_17);
                          {
                            ATerm y_16 = t;
                            int z_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = j_34(t);
                                LocalPopChoice(z_16);
                              }
                            else
                              {
                                t = y_16;
                                {
                                  ATerm a_17 = t;
                                  int b_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ReplCons_1_0(j_34, t);
                                      LocalPopChoice(b_17);
                                    }
                                  else
                                    {
                                      t = a_17;
                                      {
                                        ATerm c_17 = t;
                                        int g_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                u_19 = ATgetArgument(t, 0);
                                                v_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = v_19;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                w_19 = ATgetFirst((ATermList) t);
                                                x_19 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = x_19;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = u_19;
                                            t = injection_0_0(t);
                                            t = w_19;
                                            t = j_34(t);
                                            LocalPopChoice(g_17);
                                          }
                                        else
                                          {
                                            t = c_17;
                                            {
                                              ATerm h_17 = t;
                                              int i_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Tuple_0_0(t);
                                                  t = j_34(t);
                                                  LocalPopChoice(i_17);
                                                }
                                              else
                                                {
                                                  t = h_17;
                                                  t = FlatAlt_0_0(t);
                                                  t = j_34(t);
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
                      f_34 = ATgetArgument(t, 0);
                      {
                        ATerm j_17 = t;
                        int k_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_34;
                            t = a_101(t);
                            t = e_34;
                            t = skip_concrete_1_0(j_34, t);
                            LocalPopChoice(k_17);
                          }
                        else
                          {
                            t = j_17;
                            {
                              ATerm q_23 = NULL,s_23 = NULL,l_10 = NULL;
                              t = SSLgetAnnotations(e_34);
                              q_23 = t;
                              t = f_34;
                              t = map_1_0(j_34, t);
                              s_23 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, s_23);
                              l_10 = t;
                              t = SSLsetAnnotations(l_10, q_23);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = e_34;
                      t = a_101(t);
                      t = e_34;
                      t = skip_concrete_1_0(j_34, t);
                    }
                }
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = SRTS_all(j_34, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      u_29 = ATgetArgument(t, 0);
      {
        ATerm l_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_29;
  t = j_34(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm k_35 = NULL,m_35 = NULL,q_35 = NULL,r_35 = NULL,x_35 = NULL;
  k_35 = t;
  if(match_cons(t, sym_appl_2))
    {
      m_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_35;
  if(match_cons(t, sym_prod_3))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
      {
        ATerm q_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_35;
  {
    ATerm r_17 = t;
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
          ATerm b_24 = NULL;
          t = term_v_17;
          b_24 = t;
          t = SSL_mkterm(b_24, x_35);
        }
      }
    else
      {
        t = r_17;
        {
          ATerm j_24 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              r_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_35;
          if(match_cons(t, sym_seq_1))
            {
              ATerm y_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_v_17;
          j_24 = t;
          t = SSL_mkterm(j_24, x_35);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(r_104, t);
    return(t);
  }
  t = r_104(t);
  t = SRTS_all(t_1, t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,x_40 = NULL,e_41 = NULL,f_41 = NULL;
  static ATerm a_43 (ATerm t);
  static ATerm a_43 (ATerm t)
  {
    ATerm j_41 = NULL,k_41 = NULL,r_41 = NULL,v_41 = NULL;
    if(match_cons(t, sym__2))
      {
        j_41 = ATgetArgument(t, 0);
        v_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_41;
    if(match_cons(t, sym_alt_2))
      {
        k_41 = ATgetArgument(t, 0);
        r_41 = ATgetArgument(t, 1);
        {
          ATerm z_17 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_41;
              if(((z_36 != NULL) && (z_36 != t)))
                _fail(t);
              else
                z_36 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, v_41, not_null(b_37));
              LocalPopChoice(c_18);
            }
          else
            {
              t = z_17;
              {
                ATerm d_18 = t;
                int f_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_41;
                    if(((z_36 != NULL) && (z_36 != t)))
                      _fail(t);
                    else
                      z_36 = t;
                    t = r_41;
                    if(((a_37 != NULL) && (a_37 != t)))
                      _fail(t);
                    else
                      a_37 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, v_41, not_null(b_37));
                    LocalPopChoice(f_18);
                  }
                else
                  {
                    t = d_18;
                    {
                      ATerm n_42 = NULL,p_42 = NULL;
                      t = term_h_18;
                      p_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_41, term_h_18);
                      t = v_9(v_41, p_42, t);
                      n_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_41, n_42);
                      t = a_43(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = j_41;
        if(((z_36 != NULL) && (z_36 != t)))
          _fail(t);
        else
          z_36 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, v_41, not_null(b_37));
      }
    return(t);
  }
  x_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      e_41 = ATgetArgument(t, 0);
      f_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_25 = NULL,g_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,c_27 = NULL,d_27 = NULL,g_27 = NULL,y_12 = NULL,x_12 = NULL,w_12 = NULL,v_12 = NULL,u_27 = NULL;
        t = SSLgetAnnotations(x_40);
        x_25 = t;
        t = e_41;
        if(match_cons(t, sym_prod_3))
          {
            k_26 = ATgetArgument(t, 0);
            l_26 = ATgetArgument(t, 1);
            m_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_41);
        g_26 = t;
        t = k_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_26 = ATgetFirst((ATermList) t);
            c_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_26);
        u_26 = t;
        t = v_26;
        if(match_cons(t, sym_cf_1))
          {
            u_27 = ATgetArgument(t, 0);
            {
              ATerm g_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_28 = NULL,u_12 = NULL;
                  t = SSLgetAnnotations(v_26);
                  j_28 = t;
                  t = u_27;
                  if(((z_36 != NULL) && (z_36 != t)))
                    _fail(t);
                  else
                    z_36 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, u_27);
                  u_12 = t;
                  t = SSLsetAnnotations(u_12, j_28);
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = g_19;
                  t = v_26;
                  if(((z_36 != NULL) && (z_36 != t)))
                    _fail(t);
                  else
                    z_36 = t;
                  t = v_26;
                }
            }
          }
        else
          {
            t = v_26;
            if(((z_36 != NULL) && (z_36 != t)))
              _fail(t);
            else
              z_36 = t;
            t = v_26;
          }
        d_27 = t;
        t = c_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(c_27), d_27);
        v_12 = t;
        t = SSLsetAnnotations(v_12, u_26);
        g_27 = t;
        t = l_26;
        if(match_cons(t, sym_cf_1))
          {
            s_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_26);
        p_26 = t;
        t = s_26;
        if(match_cons(t, sym_alt_2))
          {
            x_36 = ATgetArgument(t, 0);
            y_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, s_26);
        w_12 = t;
        t = SSLsetAnnotations(w_12, p_26);
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, g_27, t_26, m_26);
        x_12 = t;
        t = SSLsetAnnotations(x_12, g_26);
        n_26 = t;
        t = f_41;
        if(((b_37 != NULL) && (b_37 != t)))
          _fail(t);
        else
          b_37 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, n_26, f_41);
        y_12 = t;
        t = SSLsetAnnotations(y_12, x_25);
        LocalPopChoice(f_19);
      }
    else
      {
        t = d_19;
        {
          ATerm q_28 = NULL,t_28 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,c_13 = NULL,b_13 = NULL,a_13 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(x_40);
          q_28 = t;
          t = e_41;
          if(match_cons(t, sym_prod_3))
            {
              g_29 = ATgetArgument(t, 0);
              h_29 = ATgetArgument(t, 1);
              i_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_41);
          t_28 = t;
          t = g_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_29 = ATgetFirst((ATermList) t);
              p_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_29);
          n_29 = t;
          t = o_29;
          if(((z_36 != NULL) && (z_36 != t)))
            _fail(t);
          else
            z_36 = t;
          t = p_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(p_29), o_29);
          z_12 = t;
          t = SSLsetAnnotations(z_12, n_29);
          q_29 = t;
          t = h_29;
          if(match_cons(t, sym_lex_1))
            {
              l_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_29);
          k_29 = t;
          t = l_29;
          if(match_cons(t, sym_alt_2))
            {
              x_36 = ATgetArgument(t, 0);
              y_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, l_29);
          a_13 = t;
          t = SSLsetAnnotations(a_13, k_29);
          m_29 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, q_29, m_29, i_29);
          b_13 = t;
          t = SSLsetAnnotations(b_13, t_28);
          j_29 = t;
          t = f_41;
          if(((b_37 != NULL) && (b_37 != t)))
            _fail(t);
          else
            b_37 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, j_29, f_41);
          c_13 = t;
          t = SSLsetAnnotations(c_13, q_28);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, x_36, y_36), term_h_18);
  t = a_43(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm v_44 = NULL,y_44 = NULL,z_44 = NULL;
  v_44 = t;
  if(match_cons(t, sym_sort_1))
    {
      y_44 = ATgetArgument(t, 0);
      {
        ATerm y_29 = NULL,f_14 = NULL;
        t = SSLgetAnnotations(v_44);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, y_44);
        f_14 = t;
        t = SSLsetAnnotations(f_14, y_29);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          y_44 = ATgetArgument(t, 0);
          {
            ATerm m_30 = NULL,s_30 = NULL,g_14 = NULL;
            t = SSLgetAnnotations(v_44);
            m_30 = t;
            t = y_44;
            t = injective_alt_0_0(t);
            s_30 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, s_30);
            g_14 = t;
            t = SSLsetAnnotations(g_14, m_30);
          }
        }
      else
        {
          ATerm f_31 = NULL,m_31 = NULL,p_31 = NULL,l_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              y_44 = ATgetArgument(t, 0);
              z_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_44);
          f_31 = t;
          t = y_44;
          t = injective_alt_0_0(t);
          m_31 = t;
          t = z_44;
          t = injective_alt_0_0(t);
          p_31 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, m_31, p_31);
          l_14 = t;
          t = SSLsetAnnotations(l_14, f_31);
        }
    }
  return(t);
}
static ATerm k_59 (ATerm t_47, ATerm a_48, ATerm d_48, ATerm e_48, ATerm t)
{
  ATerm f_48 = NULL,j_48 = NULL,n_48 = NULL,q_48 = NULL,s_48 = NULL,w_48 = NULL,x_48 = NULL,c_49 = NULL,e_49 = NULL,y_14 = NULL,q_14 = NULL,p_14 = NULL;
  t = SSLgetAnnotations(e_48);
  f_48 = t;
  t = t_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_48 = ATgetFirst((ATermList) t);
      s_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_47);
  n_48 = t;
  t = q_48;
  if(match_cons(t, sym_varsym_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_48);
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, c_49);
  p_14 = t;
  t = SSLsetAnnotations(p_14, x_48);
  e_49 = t;
  t = s_48;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_48), e_49);
  q_14 = t;
  t = SSLsetAnnotations(q_14, n_48);
  w_48 = t;
  t = d_48;
  {
    ATerm i_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(v_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_19;
      }
  }
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, w_48, a_48, j_48);
  y_14 = t;
  t = SSLsetAnnotations(y_14, f_48);
  return(t);
}
static ATerm m_59 (ATerm l_49, ATerm p_49, ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm s_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,k_15 = NULL,f_15 = NULL,f_51 = NULL;
  t = SSLgetAnnotations(r_49);
  s_49 = t;
  t = l_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_50 = ATgetFirst((ATermList) t);
      g_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  c_50 = t;
  t = f_50;
  if(match_cons(t, sym_sort_1))
    {
      f_51 = ATgetArgument(t, 0);
      {
        ATerm d_32 = NULL,b_15 = NULL;
        t = SSLgetAnnotations(f_50);
        d_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, f_51);
        b_15 = t;
        t = SSLsetAnnotations(b_15, d_32);
      }
    }
  else
    {
      ATerm m_32 = NULL,r_32 = NULL,v_32 = NULL,z_32 = NULL,d_15 = NULL,c_15 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          f_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_50);
      m_32 = t;
      t = f_51;
      if(match_cons(t, sym_sort_1))
        {
          v_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_51);
      r_32 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, v_32);
      c_15 = t;
      t = SSLsetAnnotations(c_15, r_32);
      z_32 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, z_32);
      d_15 = t;
      t = SSLsetAnnotations(d_15, m_32);
    }
  h_50 = t;
  t = g_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_50), h_50);
  f_15 = t;
  t = SSLsetAnnotations(f_15, c_50);
  i_50 = t;
  t = p_49;
  t = injective_alt_0_0(t);
  a_50 = t;
  t = q_49;
  {
    ATerm j_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_19;
      }
  }
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, i_50, a_50, b_50);
  k_15 = t;
  t = SSLsetAnnotations(k_15, s_49);
  return(t);
}
static ATerm n_59 (ATerm r_51, ATerm x_51, ATerm y_51, ATerm e_52, ATerm t)
{
  ATerm f_52 = NULL,n_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,t_52 = NULL,w_52 = NULL,x_52 = NULL,d_16 = NULL,s_15 = NULL;
  t = SSLgetAnnotations(e_52);
  f_52 = t;
  t = r_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_52 = ATgetFirst((ATermList) t);
      t_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_51);
  q_52 = t;
  t = r_52;
  {
    ATerm k_19 = t;
    if((PushChoice() == 0))
      {
        ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,l_15 = NULL;
        c_53 = t;
        if(match_cons(t, sym_lit_1))
          {
            b_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_53);
        a_53 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, b_53);
        l_15 = t;
        t = SSLsetAnnotations(l_15, a_53);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_19;
      }
  }
  w_52 = t;
  t = t_52;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_52), w_52);
  s_15 = t;
  t = SSLsetAnnotations(s_15, q_52);
  x_52 = t;
  t = x_51;
  {
    static ATerm r_59 (ATerm t);
    static ATerm r_59 (ATerm t)
    {
      ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
      m_57 = t;
      if(match_cons(t, sym_sort_1))
        {
          n_57 = ATgetArgument(t, 0);
          {
            ATerm h_33 = NULL,t_15 = NULL;
            t = SSLgetAnnotations(m_57);
            h_33 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, n_57);
            t_15 = t;
            t = SSLsetAnnotations(t_15, h_33);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              n_57 = ATgetArgument(t, 0);
              {
                ATerm q_33 = NULL,w_33 = NULL,u_15 = NULL;
                t = SSLgetAnnotations(m_57);
                q_33 = t;
                t = n_57;
                t = r_59(t);
                w_33 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, w_33);
                u_15 = t;
                t = SSLsetAnnotations(u_15, q_33);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  n_57 = ATgetArgument(t, 0);
                  {
                    ATerm r_34 = NULL,t_34 = NULL,v_15 = NULL;
                    t = SSLgetAnnotations(m_57);
                    r_34 = t;
                    t = n_57;
                    t = r_59(t);
                    t_34 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, t_34);
                    v_15 = t;
                    t = SSLsetAnnotations(v_15, r_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      n_57 = ATgetArgument(t, 0);
                      {
                        ATerm b_35 = NULL,j_35 = NULL,w_15 = NULL;
                        t = SSLgetAnnotations(m_57);
                        b_35 = t;
                        t = n_57;
                        t = r_59(t);
                        j_35 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, j_35);
                        w_15 = t;
                        t = SSLsetAnnotations(w_15, b_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          n_57 = ATgetArgument(t, 0);
                          {
                            ATerm w_35 = NULL,b_36 = NULL,x_15 = NULL;
                            t = SSLgetAnnotations(m_57);
                            w_35 = t;
                            t = n_57;
                            t = r_59(t);
                            b_36 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, b_36);
                            x_15 = t;
                            t = SSLsetAnnotations(x_15, w_35);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              n_57 = ATgetArgument(t, 0);
                              o_57 = ATgetArgument(t, 1);
                              {
                                ATerm i_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,z_15 = NULL,y_15 = NULL;
                                t = SSLgetAnnotations(m_57);
                                i_36 = t;
                                t = n_57;
                                t = r_59(t);
                                l_36 = t;
                                t = o_57;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    n_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(o_57);
                                m_36 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, n_36);
                                y_15 = t;
                                t = SSLsetAnnotations(y_15, m_36);
                                o_36 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_sep_2, l_36, o_36);
                                z_15 = t;
                                t = SSLsetAnnotations(z_15, i_36);
                              }
                            }
                          else
                            {
                              ATerm w_36 = NULL,k_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,b_16 = NULL,a_16 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  n_57 = ATgetArgument(t, 0);
                                  o_57 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(m_57);
                              w_36 = t;
                              t = n_57;
                              t = r_59(t);
                              k_37 = t;
                              t = o_57;
                              if(match_cons(t, sym_lit_1))
                                {
                                  p_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(o_57);
                              o_37 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, p_37);
                              a_16 = t;
                              t = SSLsetAnnotations(a_16, o_37);
                              q_37 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, k_37, q_37);
                              b_16 = t;
                              t = SSLsetAnnotations(b_16, w_36);
                            }
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = r_59(t);
  }
  n_52 = t;
  t = y_51;
  {
    ATerm l_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(z_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_19;
      }
  }
  p_52 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, x_52, n_52, p_52);
  d_16 = t;
  t = SSLsetAnnotations(d_16, f_52);
  return(t);
}
static ATerm o_59 (ATerm s_57, ATerm t_57, ATerm u_57, ATerm v_57, ATerm t)
{
  ATerm w_57 = NULL,a_58 = NULL,e_16 = NULL;
  t = SSLgetAnnotations(v_57);
  w_57 = t;
  t = u_57;
  t = oncetd_1_0(d_2, t);
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, s_57, t_57, a_58);
  e_16 = t;
  t = SSLsetAnnotations(e_16, w_57);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,x_14 = NULL;
  i_49 = t;
  if(match_cons(t, sym_cons_1))
    {
      h_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_49);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, h_49);
  x_14 = t;
  t = SSLsetAnnotations(x_14, g_49);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm m_51 = NULL,o_51 = NULL,p_51 = NULL,j_15 = NULL;
  p_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_51);
  m_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, o_51);
  j_15 = t;
  t = SSLsetAnnotations(j_15, m_51);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,c_16 = NULL;
  r_57 = t;
  if(match_cons(t, sym_cons_1))
    {
      q_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_57);
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, q_57);
  c_16 = t;
  t = SSLsetAnnotations(c_16, p_57);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  if(match_string(t, "bracket"))
    {
      t = d_58;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = d_58;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,w_58 = NULL;
  o_58 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_58 = ATgetArgument(t, 0);
      q_58 = ATgetArgument(t, 1);
      w_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_58;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = q_58;
      if(match_cons(t, sym_cf_1))
        {
          r_58 = ATgetArgument(t, 0);
          t = r_58;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              k_58 = ATgetArgument(t, 0);
              f_58 = ATgetArgument(t, 1);
              t = p_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_58 = ATgetFirst((ATermList) t);
                  j_58 = (ATerm) ATgetNext((ATermList) t);
                  t = j_58;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = g_58;
                      if(match_cons(t, sym_cf_1))
                        {
                          h_58 = ATgetArgument(t, 0);
                          t = h_58;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              i_58 = ATgetArgument(t, 0);
                              e_58 = ATgetArgument(t, 1);
                              {
                                ATerm m_19 = t;
                                int n_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_59(p_58, q_58, w_58, o_58, t);
                                    LocalPopChoice(n_19);
                                  }
                                else
                                  {
                                    t = m_19;
                                    {
                                      ATerm o_19 = t;
                                      int p_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = m_59(p_58, q_58, w_58, o_58, t);
                                          LocalPopChoice(p_19);
                                        }
                                      else
                                        {
                                          t = o_19;
                                          {
                                            ATerm t_19 = t;
                                            int y_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = n_59(p_58, q_58, w_58, o_58, t);
                                                LocalPopChoice(y_19);
                                              }
                                            else
                                              {
                                                t = t_19;
                                                {
                                                  ATerm z_19 = t;
                                                  int a_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = k_58;
                                                      if((i_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = f_58;
                                                      if((e_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = o_58;
                                                      LocalPopChoice(a_20);
                                                    }
                                                  else
                                                    {
                                                      t = z_19;
                                                      t = o_59(p_58, q_58, w_58, o_58, t);
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
                              ATerm c_20 = t;
                              int d_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = k_59(p_58, q_58, w_58, o_58, t);
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
                                        t = m_59(p_58, q_58, w_58, o_58, t);
                                        LocalPopChoice(f_20);
                                      }
                                    else
                                      {
                                        t = e_20;
                                        {
                                          ATerm g_20 = t;
                                          int h_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_59(p_58, q_58, w_58, o_58, t);
                                              LocalPopChoice(h_20);
                                            }
                                          else
                                            {
                                              t = g_20;
                                              t = o_59(p_58, q_58, w_58, o_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm i_20 = t;
                          int l_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = k_59(p_58, q_58, w_58, o_58, t);
                              LocalPopChoice(l_20);
                            }
                          else
                            {
                              t = i_20;
                              {
                                ATerm m_20 = t;
                                int o_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = m_59(p_58, q_58, w_58, o_58, t);
                                    LocalPopChoice(o_20);
                                  }
                                else
                                  {
                                    t = m_20;
                                    {
                                      ATerm q_20 = t;
                                      int t_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = n_59(p_58, q_58, w_58, o_58, t);
                                          LocalPopChoice(t_20);
                                        }
                                      else
                                        {
                                          t = q_20;
                                          t = o_59(p_58, q_58, w_58, o_58, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = g_58;
                      {
                        ATerm u_20 = t;
                        int v_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = k_59(p_58, q_58, w_58, o_58, t);
                            LocalPopChoice(v_20);
                          }
                        else
                          {
                            t = u_20;
                            {
                              ATerm b_21 = t;
                              int c_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = m_59(p_58, q_58, w_58, o_58, t);
                                  LocalPopChoice(c_21);
                                }
                              else
                                {
                                  t = b_21;
                                  {
                                    ATerm j_21 = t;
                                    int p_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_59(p_58, q_58, w_58, o_58, t);
                                        LocalPopChoice(p_21);
                                      }
                                    else
                                      {
                                        t = j_21;
                                        t = o_59(p_58, q_58, w_58, o_58, t);
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
                  ATerm t_21 = t;
                  int v_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_59(p_58, q_58, w_58, o_58, t);
                      LocalPopChoice(v_21);
                    }
                  else
                    {
                      t = t_21;
                      {
                        ATerm d_22 = t;
                        int e_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = m_59(p_58, q_58, w_58, o_58, t);
                            LocalPopChoice(e_22);
                          }
                        else
                          {
                            t = d_22;
                            {
                              ATerm f_22 = t;
                              int g_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = n_59(p_58, q_58, w_58, o_58, t);
                                  LocalPopChoice(g_22);
                                }
                              else
                                {
                                  t = f_22;
                                  t = o_59(p_58, q_58, w_58, o_58, t);
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
                  k_58 = ATgetArgument(t, 0);
                  t = p_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_58 = ATgetFirst((ATermList) t);
                      j_58 = (ATerm) ATgetNext((ATermList) t);
                      t = j_58;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = g_58;
                          if(match_cons(t, sym_cf_1))
                            {
                              h_58 = ATgetArgument(t, 0);
                              t = h_58;
                              if(match_cons(t, sym_iter_1))
                                {
                                  i_58 = ATgetArgument(t, 0);
                                  {
                                    ATerm i_22 = t;
                                    int j_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = k_59(p_58, q_58, w_58, o_58, t);
                                        LocalPopChoice(j_22);
                                      }
                                    else
                                      {
                                        t = i_22;
                                        {
                                          ATerm k_22 = t;
                                          int q_22 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = m_59(p_58, q_58, w_58, o_58, t);
                                              LocalPopChoice(q_22);
                                            }
                                          else
                                            {
                                              t = k_22;
                                              {
                                                ATerm r_22 = t;
                                                int t_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = n_59(p_58, q_58, w_58, o_58, t);
                                                    LocalPopChoice(t_22);
                                                  }
                                                else
                                                  {
                                                    t = r_22;
                                                    {
                                                      ATerm v_22 = t;
                                                      int z_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_58;
                                                          if((i_58 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = o_58;
                                                          LocalPopChoice(z_22);
                                                        }
                                                      else
                                                        {
                                                          t = v_22;
                                                          t = o_59(p_58, q_58, w_58, o_58, t);
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
                                  int c_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = k_59(p_58, q_58, w_58, o_58, t);
                                      LocalPopChoice(c_23);
                                    }
                                  else
                                    {
                                      t = a_23;
                                      {
                                        ATerm d_23 = t;
                                        int e_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = m_59(p_58, q_58, w_58, o_58, t);
                                            LocalPopChoice(e_23);
                                          }
                                        else
                                          {
                                            t = d_23;
                                            {
                                              ATerm f_23 = t;
                                              int h_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = n_59(p_58, q_58, w_58, o_58, t);
                                                  LocalPopChoice(h_23);
                                                }
                                              else
                                                {
                                                  t = f_23;
                                                  t = o_59(p_58, q_58, w_58, o_58, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm l_23 = t;
                              int m_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = k_59(p_58, q_58, w_58, o_58, t);
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
                                        t = m_59(p_58, q_58, w_58, o_58, t);
                                        LocalPopChoice(o_23);
                                      }
                                    else
                                      {
                                        t = n_23;
                                        {
                                          ATerm p_23 = t;
                                          int r_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_59(p_58, q_58, w_58, o_58, t);
                                              LocalPopChoice(r_23);
                                            }
                                          else
                                            {
                                              t = p_23;
                                              t = o_59(p_58, q_58, w_58, o_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = g_58;
                          {
                            ATerm t_23 = t;
                            int u_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_59(p_58, q_58, w_58, o_58, t);
                                LocalPopChoice(u_23);
                              }
                            else
                              {
                                t = t_23;
                                {
                                  ATerm v_23 = t;
                                  int w_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = m_59(p_58, q_58, w_58, o_58, t);
                                      LocalPopChoice(w_23);
                                    }
                                  else
                                    {
                                      t = v_23;
                                      {
                                        ATerm x_23 = t;
                                        int y_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_59(p_58, q_58, w_58, o_58, t);
                                            LocalPopChoice(y_23);
                                          }
                                        else
                                          {
                                            t = x_23;
                                            t = o_59(p_58, q_58, w_58, o_58, t);
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
                      int e_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = k_59(p_58, q_58, w_58, o_58, t);
                          LocalPopChoice(e_24);
                        }
                      else
                        {
                          t = d_24;
                          {
                            ATerm f_24 = t;
                            int h_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_59(p_58, q_58, w_58, o_58, t);
                                LocalPopChoice(h_24);
                              }
                            else
                              {
                                t = f_24;
                                {
                                  ATerm i_24 = t;
                                  int k_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = n_59(p_58, q_58, w_58, o_58, t);
                                      LocalPopChoice(k_24);
                                    }
                                  else
                                    {
                                      t = i_24;
                                      t = o_59(p_58, q_58, w_58, o_58, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = p_58;
                  {
                    ATerm m_24 = t;
                    int n_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_59(p_58, q_58, w_58, o_58, t);
                        LocalPopChoice(n_24);
                      }
                    else
                      {
                        t = m_24;
                        {
                          ATerm p_24 = t;
                          int s_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = m_59(p_58, q_58, w_58, o_58, t);
                              LocalPopChoice(s_25);
                            }
                          else
                            {
                              t = p_24;
                              {
                                ATerm t_25 = t;
                                int w_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_59(p_58, q_58, w_58, o_58, t);
                                    LocalPopChoice(w_25);
                                  }
                                else
                                  {
                                    t = t_25;
                                    t = o_59(p_58, q_58, w_58, o_58, t);
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
              r_58 = ATgetArgument(t, 0);
              t = r_58;
              if(match_string(t, "<START>"))
                {
                  t = p_58;
                  {
                    ATerm y_25 = t;
                    int f_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_59(p_58, q_58, w_58, o_58, t);
                        LocalPopChoice(f_26);
                      }
                    else
                      {
                        t = y_25;
                        {
                          ATerm h_26 = t;
                          int i_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = m_59(p_58, q_58, w_58, o_58, t);
                              LocalPopChoice(i_26);
                            }
                          else
                            {
                              t = h_26;
                              {
                                ATerm j_26 = t;
                                int q_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_59(p_58, q_58, w_58, o_58, t);
                                    LocalPopChoice(q_26);
                                  }
                                else
                                  {
                                    t = j_26;
                                    {
                                      ATerm r_26 = t;
                                      int w_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = o_59(p_58, q_58, w_58, o_58, t);
                                          LocalPopChoice(w_26);
                                        }
                                      else
                                        {
                                          t = r_26;
                                          t = o_58;
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
                  t = p_58;
                  {
                    ATerm x_26 = t;
                    int y_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_59(p_58, q_58, w_58, o_58, t);
                        LocalPopChoice(y_26);
                      }
                    else
                      {
                        t = x_26;
                        {
                          ATerm z_26 = t;
                          int a_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = m_59(p_58, q_58, w_58, o_58, t);
                              LocalPopChoice(a_27);
                            }
                          else
                            {
                              t = z_26;
                              {
                                ATerm b_27 = t;
                                int e_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_59(p_58, q_58, w_58, o_58, t);
                                    LocalPopChoice(e_27);
                                  }
                                else
                                  {
                                    t = b_27;
                                    t = o_59(p_58, q_58, w_58, o_58, t);
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
              t = p_58;
              {
                ATerm f_27 = t;
                int h_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_59(p_58, q_58, w_58, o_58, t);
                    LocalPopChoice(h_27);
                  }
                else
                  {
                    t = f_27;
                    {
                      ATerm i_27 = t;
                      int j_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = m_59(p_58, q_58, w_58, o_58, t);
                          LocalPopChoice(j_27);
                        }
                      else
                        {
                          t = i_27;
                          {
                            ATerm k_27 = t;
                            int l_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_59(p_58, q_58, w_58, o_58, t);
                                LocalPopChoice(l_27);
                              }
                            else
                              {
                                t = k_27;
                                t = o_59(p_58, q_58, w_58, o_58, t);
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
      t = p_58;
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_59(p_58, q_58, w_58, o_58, t);
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            {
              ATerm o_27 = t;
              int p_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_59(p_58, q_58, w_58, o_58, t);
                  LocalPopChoice(p_27);
                }
              else
                {
                  t = o_27;
                  {
                    ATerm q_27 = t;
                    int r_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_59(p_58, q_58, w_58, o_58, t);
                        LocalPopChoice(r_27);
                      }
                    else
                      {
                        t = q_27;
                        t = o_59(p_58, q_58, w_58, o_58, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  static ATerm f_2 (ATerm t);
  static ATerm f_2 (ATerm t)
  {
    t = bottomup_1_0(s_104, t);
    return(t);
  }
  t = SRTS_all(f_2, t);
  t = s_104(t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm w_60 = NULL,a_61 = NULL,b_61 = NULL,h_61 = NULL,k_61 = NULL,l_61 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      h_61 = ATgetArgument(t, 0);
      k_61 = ATgetArgument(t, 1);
      t = h_61;
      if(match_cons(t, sym_Ins_1))
        {
          b_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_61 = ATgetFirst((ATermList) t);
          w_60 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_60), a_61), b_61);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              a_61 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, a_61), b_61);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, b_61);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          h_61 = ATgetArgument(t, 0);
          k_61 = ATgetArgument(t, 1);
          l_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_61), (ATerm) ATinsert(ATempty, k_61)), h_61);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,i_62 = NULL,m_62 = NULL,p_62 = NULL,q_62 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      i_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
      t = q_62;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = i_62;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = i_62;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  m_62 = ATgetArgument(t, 0);
                  p_62 = ATgetArgument(t, 1);
                  t = i_62;
                }
              else
                {
                  t = i_62;
                }
            }
        }
      else
        {
          t = i_62;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = q_62;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  m_62 = ATgetArgument(t, 0);
                  p_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, m_62, (ATerm) ATmakeAppl(sym_Conc_2, p_62, q_62));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          i_62 = ATgetArgument(t, 0);
          q_62 = ATgetArgument(t, 1);
          g_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_62;
      if(match_cons(t, sym_Conc_3))
        {
          m_62 = ATgetArgument(t, 0);
          p_62 = ATgetArgument(t, 1);
          f_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, m_62, p_62, (ATerm) ATmakeAppl(sym_Conc_3, f_62, q_62, g_62));
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_65 = NULL,d_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_65 = ATgetFirst((ATermList) t);
          d_65 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, c_65), d_65);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              c_65 = ATgetArgument(t, 0);
              d_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, c_65, (ATerm) ATmakeAppl(sym_Ins_1, d_65));
        }
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            {
              ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,b_38 = NULL,g_38 = NULL,l_38 = NULL,p_38 = NULL,d_17 = NULL;
              v_66 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  w_66 = ATgetArgument(t, 0);
                  x_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_66);
              b_38 = t;
              t = w_66;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_38 = ATgetFirst((ATermList) t);
                  p_38 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, l_38), p_38);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      l_38 = ATgetArgument(t, 0);
                      p_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, l_38, (ATerm) ATmakeAppl(sym_Ins_1, p_38));
                }
              g_38 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, g_38, x_66);
              d_17 = t;
              t = SSLsetAnnotations(d_17, b_38);
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
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_67 = NULL,w_67 = NULL,x_67 = NULL,i_39 = NULL,o_39 = NULL,e_17 = NULL;
        t_67 = t;
        if(match_cons(t, sym_Conc_2))
          {
            w_67 = ATgetArgument(t, 0);
            x_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_67);
        i_39 = t;
        t = x_67;
        t = conc_to_cons_0_0(t);
        o_39 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, w_67, o_39);
        e_17 = t;
        t = SSLsetAnnotations(e_17, i_39);
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
  }
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_67 = NULL,z_67 = NULL,c_68 = NULL,e_68 = NULL,f_68 = NULL,f_17 = NULL;
            t = CTC2_0_0(t);
            f_68 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_67 = ATgetFirst((ATermList) t);
                c_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_68);
            y_67 = t;
            t = z_67;
            t = conc_to_cons_0_0(t);
            e_68 = t;
            t = (ATerm) ATinsert(CheckATermList(c_68), e_68);
            f_17 = t;
            t = SSLsetAnnotations(f_17, y_67);
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm h_68 = NULL;
              if(match_cons(t, sym_Ins_1))
                {
                  h_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, h_68);
            }
          }
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
      }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm y_69 = NULL,b_70 = NULL,d_70 = NULL,f_70 = NULL,k_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      k_70 = ATgetArgument(t, 0);
      p_70 = ATgetArgument(t, 1);
      {
        ATerm d_28 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_70 = ATgetFirst((ATermList) t);
      o_70 = (ATerm) ATgetNext((ATermList) t);
      t = o_70;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = p_70;
          if(match_cons(t, sym_opt_1))
            {
              q_70 = ATgetArgument(t, 0);
              t = q_70;
              if((m_70 != t))
                {
                  _fail(t);
                }
              t = term_e_28;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  q_70 = ATgetArgument(t, 0);
                  t = m_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      n_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_70;
                  if(match_cons(t, sym_opt_1))
                    {
                      r_70 = ATgetArgument(t, 0);
                      t = r_70;
                      if((n_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_e_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          r_70 = ATgetArgument(t, 0);
                          t = r_70;
                          if((n_70 != t))
                            {
                              _fail(t);
                            }
                          t = term_f_28;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              r_70 = ATgetArgument(t, 0);
                              {
                                ATerm g_28 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = r_70;
                          if((n_70 != t))
                            {
                              _fail(t);
                            }
                          t = term_f_28;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      q_70 = ATgetArgument(t, 0);
                      t = q_70;
                      if((m_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_f_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          q_70 = ATgetArgument(t, 0);
                          {
                            ATerm h_28 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = q_70;
                      if((m_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_f_28;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_28 = ATgetFirst((ATermList) t);
              y_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_69;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = p_70;
              {
                ATerm k_28 = t;
                int l_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm m_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_28);
                    t = term_n_28;
                  }
                else
                  {
                    t = k_28;
                    if(match_cons(t, sym_cf_1))
                      {
                        q_70 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = q_70;
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm o_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_n_28;
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_28 = ATgetFirst((ATermList) t);
                  b_70 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_70;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = p_70;
                  {
                    ATerm r_28 = t;
                    int s_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm u_28 = ATgetArgument(t, 0);
                            ATerm v_28 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_28);
                        t = term_n_28;
                      }
                    else
                      {
                        t = r_28;
                        if(match_cons(t, sym_cf_1))
                          {
                            q_70 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = q_70;
                        {
                          ATerm w_28 = t;
                          int x_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_1))
                                {
                                  ATerm y_28 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(x_28);
                              t = term_n_28;
                            }
                          else
                            {
                              t = w_28;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm z_28 = ATgetArgument(t, 0);
                                  ATerm e_29 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = term_n_28;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm f_29 = ATgetFirst((ATermList) t);
                      d_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = d_70;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm r_29 = ATgetFirst((ATermList) t);
                      f_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = f_70;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      q_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_70;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm s_29 = ATgetArgument(t, 0);
                      ATerm t_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_n_28;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_70;
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm x_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(w_29);
            t = term_z_29;
          }
        else
          {
            t = v_29;
            if(match_cons(t, sym_cf_1))
              {
                q_70 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_70;
            if(match_cons(t, sym_opt_1))
              {
                ATerm a_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_z_29;
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  static ATerm n_71 (ATerm t);
  static ATerm n_71 (ATerm t)
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_105(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = SRTS_one(n_71, t);
      }
    return(t);
  }
  t = n_71(t);
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      c_72 = ATgetArgument(t, 0);
      d_72 = ATgetArgument(t, 1);
      {
        ATerm d_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = d_72;
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm g_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_30);
        t = term_h_30;
      }
    else
      {
        t = e_30;
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm k_30 = ATgetArgument(t, 0);
                  ATerm l_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(j_30);
              t = term_h_30;
            }
          else
            {
              t = i_30;
              if(match_cons(t, sym_cf_1))
                {
                  e_72 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_72;
              {
                ATerm n_30 = t;
                int o_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm p_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_30);
                    t = term_h_30;
                  }
                else
                  {
                    t = n_30;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm q_30 = ATgetArgument(t, 0);
                        ATerm r_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_h_30;
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
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
  q_74 = t;
  if(match_cons(t, sym_appl_2))
    {
      o_74 = ATgetArgument(t, 0);
      p_74 = ATgetArgument(t, 1);
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_41 = NULL,m_41 = NULL,g_42 = NULL,i_42 = NULL,m_17 = NULL;
            t = SSLgetAnnotations(q_74);
            g_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, o_74, p_74);
            m_17 = t;
            t = SSLsetAnnotations(m_17, g_41);
            m_41 = t;
            if(match_cons(t, sym_appl_2))
              {
                g_42 = ATgetArgument(t, 0);
                i_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm v_30 = t;
              int w_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_42;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  LocalPopChoice(w_30);
                }
              else
                {
                  t = v_30;
                  {
                    ATerm c_43 = NULL;
                    t = g_42;
                    {
                      ATerm x_30 = t;
                      int y_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_43 = NULL,l_43 = NULL;
                          if(match_cons(t, sym_prod_3))
                            {
                              ATerm z_30 = ATgetArgument(t, 0);
                              ATerm a_31 = ATgetArgument(t, 1);
                              g_43 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = g_43;
                          {
                            static ATerm k_2 (ATerm t);
                            static ATerm k_2 (ATerm t)
                            {
                              if(match_cons(t, sym_cons_1))
                                {
                                  if(((l_43 != NULL) && (l_43 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    l_43 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1_0(k_2, t);
                          }
                          t = not_null(l_43);
                          LocalPopChoice(y_30);
                        }
                      else
                        {
                          t = x_30;
                          t = Constr1_0_0(t);
                        }
                    }
                    c_43 = t;
                    t = SSL_mkterm(c_43, i_42);
                  }
                }
            }
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            t = q_74;
          }
      }
    }
  else
    {
      t = q_74;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(j_2, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
  u_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_75;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_75 = ATgetFirst((ATermList) t);
          w_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_43 = NULL,b_44 = NULL,d_44 = NULL,p_17 = NULL;
            t = SSLgetAnnotations(u_75);
            w_43 = t;
            t = v_75;
            t = g_119(t);
            b_44 = t;
            t = w_75;
            t = filter_1_0(g_119, t);
            d_44 = t;
            t = (ATerm) ATinsert(CheckATermList(d_44), b_44);
            p_17 = t;
            t = SSLsetAnnotations(p_17, w_43);
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = w_75;
            t = filter_1_0(g_119, t);
          }
      }
    }
  return(t);
}
static ATerm u_81 (ATerm t_77, ATerm t)
{
  static ATerm w_81 (ATerm t);
  static ATerm w_81 (ATerm t)
  {
    ATerm u_77 = NULL,v_77 = NULL,x_77 = NULL,y_77 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL;
    u_77 = t;
    if(match_cons(t, sym_appl_2))
      {
        v_77 = ATgetArgument(t, 0);
        c_78 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = v_77;
    if(match_cons(t, sym_prod_3))
      {
        ATerm d_31 = ATgetArgument(t, 0);
        x_77 = ATgetArgument(t, 1);
        {
          ATerm e_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = x_77;
    if(match_cons(t, sym_cf_1))
      {
        y_77 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = y_77;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm g_31 = ATgetArgument(t, 0);
        ATerm h_31 = ATgetArgument(t, 1);
      }
    else
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
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, d_78);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_78 = ATgetFirst((ATermList) t);
            g_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_78;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_78 = ATgetFirst((ATermList) t);
            i_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_78;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm s_78 = NULL,t_78 = NULL;
            t = d_78;
            t = w_81(t);
            s_78 = t;
            t = h_78;
            t = w_81(t);
            t_78 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_78), (ATerm) ATinsert(ATempty, f_78)), s_78);
            t = concat_0_0(t);
          }
        else
          {
            ATerm a_79 = NULL,b_79 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_78 = ATgetFirst((ATermList) t);
                k_78 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_78;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_78 = ATgetFirst((ATermList) t);
                m_78 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_78;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_78;
            t = w_81(t);
            a_79 = t;
            t = l_78;
            t = w_81(t);
            b_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_79), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_78), h_78), f_78)), a_79);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = t_77;
  t = w_81(t);
  return(t);
}
static ATerm v_81 (ATerm c_79, ATerm t)
{
  static ATerm x_81 (ATerm t);
  static ATerm x_81 (ATerm t)
  {
    ATerm d_79 = NULL,e_79 = NULL,g_79 = NULL,h_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL;
    d_79 = t;
    if(match_cons(t, sym_appl_2))
      {
        e_79 = ATgetArgument(t, 0);
        k_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_79;
    if(match_cons(t, sym_prod_3))
      {
        ATerm i_31 = ATgetArgument(t, 0);
        g_79 = ATgetArgument(t, 1);
        {
          ATerm j_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = g_79;
    if(match_cons(t, sym_cf_1))
      {
        h_79 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = h_79;
    if(match_cons(t, sym_iter_1))
      {
        ATerm k_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = k_79;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_79 = ATgetFirst((ATermList) t);
        m_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = m_79;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, l_79);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_79 = ATgetFirst((ATermList) t);
            o_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_79;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm v_79 = NULL,w_79 = NULL;
            t = l_79;
            t = x_81(t);
            v_79 = t;
            t = n_79;
            t = x_81(t);
            w_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, w_79), v_79);
            t = concat_0_0(t);
          }
        else
          {
            ATerm y_80 = NULL,z_80 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_79 = ATgetFirst((ATermList) t);
                q_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_79;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_79;
            t = x_81(t);
            y_80 = t;
            t = p_79;
            t = x_81(t);
            z_80 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_80), (ATerm) ATinsert(ATempty, n_79)), y_80);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = c_79;
  t = x_81(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
  c_81 = t;
  if(match_cons(t, sym_appl_2))
    {
      d_81 = ATgetArgument(t, 0);
      n_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_81;
  if(match_cons(t, sym_prod_3))
    {
      e_81 = ATgetArgument(t, 0);
      j_81 = ATgetArgument(t, 1);
      {
        ATerm l_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_81;
  if(match_cons(t, sym_cf_1))
    {
      k_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_81;
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm q_31 = ATgetArgument(t, 0);
            ATerm r_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(o_31);
        t = n_81;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_81 = ATgetFirst((ATermList) t);
            p_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_81;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_81;
            {
              ATerm s_31 = t;
              int t_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_81(c_81, t);
                  LocalPopChoice(t_31);
                }
              else
                {
                  t = s_31;
                  t = (ATerm) ATinsert(ATempty, o_81);
                }
            }
          }
        else
          {
            t = e_81;
            t = u_81(c_81, t);
          }
      }
    else
      {
        t = n_31;
        {
          ATerm u_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm w_31 = ATgetArgument(t, 0);
                  ATerm x_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(v_31);
              t = e_81;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = n_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_81 = ATgetFirst((ATermList) t);
                      i_81 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = f_81;
                  if(match_cons(t, sym_cf_1))
                    {
                      g_81 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_81;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm y_31 = ATgetArgument(t, 0);
                      ATerm z_31 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_81;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_81 = ATgetFirst((ATermList) t);
                      p_81 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = p_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_81;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = u_31;
              {
                ATerm a_32 = t;
                int b_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm c_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(b_32);
                    t = n_81;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        o_81 = ATgetFirst((ATermList) t);
                        p_81 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = p_81;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = e_81;
                        {
                          ATerm e_32 = t;
                          int f_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = v_81(c_81, t);
                              LocalPopChoice(f_32);
                            }
                          else
                            {
                              t = e_32;
                              t = (ATerm) ATinsert(ATempty, o_81);
                            }
                        }
                      }
                    else
                      {
                        t = e_81;
                        t = v_81(c_81, t);
                      }
                  }
                else
                  {
                    t = a_32;
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm g_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_81;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = n_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            f_81 = ATgetFirst((ATermList) t);
                            i_81 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = f_81;
                        if(match_cons(t, sym_cf_1))
                          {
                            g_81 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = g_81;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm h_32 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = i_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = n_81;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            o_81 = ATgetFirst((ATermList) t);
                            p_81 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = p_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = o_81;
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
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_82 = ATgetFirst((ATermList) t);
      i_82 = (ATerm) ATgetNext((ATermList) t);
      t = i_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_82 = ATgetFirst((ATermList) t);
          g_82 = (ATerm) ATgetNext((ATermList) t);
          t = f_82;
          if(match_int(t, 34))
            {
              t = h_82;
              if(match_int(t, 92))
                {
                  ATerm i_32 = t;
                  int j_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_82 = NULL;
                      t = g_82;
                      t = De_Escape_0_0(t);
                      l_82 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_82), term_k_32);
                      LocalPopChoice(j_32);
                    }
                  else
                    {
                      t = i_32;
                      {
                        ATerm o_82 = NULL;
                        t = i_82;
                        t = De_Escape_0_0(t);
                        o_82 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_82), h_82);
                      }
                    }
                }
              else
                {
                  ATerm r_82 = NULL;
                  t = i_82;
                  t = De_Escape_0_0(t);
                  r_82 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_82), h_82);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = h_82;
                  if(match_int(t, 92))
                    {
                      ATerm l_32 = t;
                      int n_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_82 = NULL;
                          t = g_82;
                          t = De_Escape_0_0(t);
                          t_82 = t;
                          t = (ATerm) ATinsert(CheckATermList(t_82), term_o_32);
                          LocalPopChoice(n_32);
                        }
                      else
                        {
                          t = l_32;
                          {
                            ATerm w_82 = NULL;
                            t = i_82;
                            t = De_Escape_0_0(t);
                            w_82 = t;
                            t = (ATerm) ATinsert(CheckATermList(w_82), h_82);
                          }
                        }
                    }
                  else
                    {
                      ATerm z_82 = NULL;
                      t = i_82;
                      t = De_Escape_0_0(t);
                      z_82 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_82), h_82);
                    }
                }
              else
                {
                  ATerm c_83 = NULL;
                  t = i_82;
                  t = De_Escape_0_0(t);
                  c_83 = t;
                  t = (ATerm) ATinsert(CheckATermList(c_83), h_82);
                }
            }
        }
      else
        {
          ATerm f_83 = NULL;
          t = i_82;
          t = De_Escape_0_0(t);
          f_83 = t;
          t = (ATerm) ATinsert(CheckATermList(f_83), h_82);
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
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
  o_83 = t;
  t = SSL_explode_string(o_83);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_83 = ATgetFirst((ATermList) t);
      s_83 = (ATerm) ATgetNext((ATermList) t);
      t = s_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_83 = ATgetFirst((ATermList) t);
          q_83 = (ATerm) ATgetNext((ATermList) t);
          t = p_83;
          if(match_int(t, 34))
            {
              t = r_83;
              if(match_int(t, 92))
                {
                  ATerm p_32 = t;
                  int q_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_83 = NULL;
                      t = q_83;
                      t = De_Escape_0_0(t);
                      v_83 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_83), term_k_32);
                      LocalPopChoice(q_32);
                    }
                  else
                    {
                      t = p_32;
                      {
                        ATerm y_83 = NULL;
                        t = s_83;
                        t = De_Escape_0_0(t);
                        y_83 = t;
                        t = (ATerm) ATinsert(CheckATermList(y_83), r_83);
                      }
                    }
                }
              else
                {
                  ATerm b_84 = NULL;
                  t = s_83;
                  t = De_Escape_0_0(t);
                  b_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(b_84), r_83);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = r_83;
                  if(match_int(t, 92))
                    {
                      ATerm s_32 = t;
                      int t_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_84 = NULL;
                          t = q_83;
                          t = De_Escape_0_0(t);
                          d_84 = t;
                          t = (ATerm) ATinsert(CheckATermList(d_84), term_o_32);
                          LocalPopChoice(t_32);
                        }
                      else
                        {
                          t = s_32;
                          {
                            ATerm g_84 = NULL;
                            t = s_83;
                            t = De_Escape_0_0(t);
                            g_84 = t;
                            t = (ATerm) ATinsert(CheckATermList(g_84), r_83);
                          }
                        }
                    }
                  else
                    {
                      ATerm j_84 = NULL;
                      t = s_83;
                      t = De_Escape_0_0(t);
                      j_84 = t;
                      t = (ATerm) ATinsert(CheckATermList(j_84), r_83);
                    }
                }
              else
                {
                  ATerm m_84 = NULL;
                  t = s_83;
                  t = De_Escape_0_0(t);
                  m_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_84), r_83);
                }
            }
        }
      else
        {
          ATerm p_84 = NULL;
          t = s_83;
          t = De_Escape_0_0(t);
          p_84 = t;
          t = (ATerm) ATinsert(CheckATermList(p_84), r_83);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  n_83 = t;
  t = SSL_implode_string(n_83);
  return(t);
}
ATerm at_last_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  static ATerm l_85 (ATerm t);
  static ATerm l_85 (ATerm t)
  {
    ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
    i_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_85 = ATgetFirst((ATermList) t);
        k_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_44 = NULL,w_17 = NULL;
          t = SSLgetAnnotations(i_85);
          t_44 = t;
          t = k_85;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(k_85), j_85);
          w_17 = t;
          t = SSLsetAnnotations(w_17, t_44);
          t = f_112(t);
          LocalPopChoice(w_32);
        }
      else
        {
          t = u_32;
          {
            ATerm l_45 = NULL,o_45 = NULL,x_17 = NULL;
            t = SSLgetAnnotations(i_85);
            l_45 = t;
            t = k_85;
            t = l_85(t);
            o_45 = t;
            t = (ATerm) ATinsert(CheckATermList(o_45), j_85);
            x_17 = t;
            t = SSLsetAnnotations(x_17, l_45);
          }
        }
    }
    return(t);
  }
  t = l_85(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_32 = ATgetFirst((ATermList) t);
      if(((ATgetType(x_32) != AT_INT) || (ATgetInt((ATermInt) x_32) != 34)))
        _fail(t);
      {
        ATerm y_32 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(y_32) != AT_LIST) || !(ATisEmpty(y_32))))
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
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  s_85 = t;
  t = SSL_explode_string(s_85);
  o_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_85 = ATgetFirst((ATermList) t);
      {
        ATerm a_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_85;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = o_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_33 = ATgetFirst((ATermList) t);
      q_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_85;
  t = at_last_1_0(l_2, t);
  p_85 = t;
  t = SSL_implode_string(p_85);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_33);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_33);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_33);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
  p_86 = t;
  if(match_cons(t, sym_cf_1))
    {
      n_86 = ATgetArgument(t, 0);
      {
        ATerm r_86 = NULL;
        t = n_86;
        t = PpSym_0_0(t);
        r_86 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_33)), r_86), (ATerm) ATinsert(ATempty, term_f_33));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          n_86 = ATgetArgument(t, 0);
          {
            ATerm t_86 = NULL;
            t = n_86;
            t = PpSym_0_0(t);
            t_86 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_33)), t_86), (ATerm) ATinsert(ATempty, term_f_33));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_j_33);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  n_86 = ATgetArgument(t, 0);
                  o_86 = ATgetArgument(t, 1);
                  {
                    ATerm w_86 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(o_86), n_86);
                    t = map_1_0(PpSym_0_0, t);
                    w_86 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_33)), w_86), (ATerm) ATinsert(ATempty, term_k_33));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      n_86 = ATgetArgument(t, 0);
                      t = n_86;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(m_2, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          n_86 = ATgetArgument(t, 0);
                          t = n_86;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(n_2, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              n_86 = ATgetArgument(t, 0);
                              t = n_86;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(o_2, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  n_86 = ATgetArgument(t, 0);
                                  o_86 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_87 = NULL,d_87 = NULL;
                                    t = n_86;
                                    t = PpSym_0_0(t);
                                    c_87 = t;
                                    t = o_86;
                                    t = PpSym_0_0(t);
                                    d_87 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_33)), d_87), c_87), (ATerm) ATinsert(ATempty, term_m_33));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      n_86 = ATgetArgument(t, 0);
                                      o_86 = ATgetArgument(t, 1);
                                      {
                                        ATerm g_87 = NULL,h_87 = NULL;
                                        t = n_86;
                                        t = PpSym_0_0(t);
                                        g_87 = t;
                                        t = o_86;
                                        t = PpSym_0_0(t);
                                        h_87 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_33)), h_87), g_87), (ATerm) ATinsert(ATempty, term_m_33));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm p_33 = t;
                                      int r_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              n_86 = ATgetArgument(t, 0);
                                              {
                                                ATerm s_33 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(r_33);
                                          {
                                            ATerm j_87 = NULL;
                                            t = n_86;
                                            t = PpSym_0_0(t);
                                            j_87 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_33)), j_87);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = p_33;
                                          {
                                            ATerm u_33 = t;
                                            int v_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    n_86 = ATgetArgument(t, 0);
                                                    o_86 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_33 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(v_33);
                                                {
                                                  ATerm n_87 = NULL,o_87 = NULL;
                                                  t = n_86;
                                                  t = PpSym_0_0(t);
                                                  n_87 = t;
                                                  t = o_86;
                                                  t = PpSym_0_0(t);
                                                  o_87 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_33)), o_87), n_87);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = u_33;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    n_86 = ATgetArgument(t, 0);
                                                    o_86 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_87 = NULL,s_87 = NULL;
                                                      t = n_86;
                                                      t = PpSym_0_0(t);
                                                      r_87 = t;
                                                      t = o_86;
                                                      t = PpSym_0_0(t);
                                                      s_87 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_87), (ATerm) ATinsert(ATempty, term_y_33)), r_87);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        n_86 = ATgetArgument(t, 0);
                                                        o_86 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_87 = NULL,w_87 = NULL;
                                                          t = n_86;
                                                          t = filter_1_0(PpSym_0_0, t);
                                                          t = concat_0_0(t);
                                                          v_87 = t;
                                                          t = o_86;
                                                          t = PpSym_0_0(t);
                                                          w_87 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_87), (ATerm) ATinsert(ATempty, term_z_33)), v_87);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            n_86 = ATgetArgument(t, 0);
                                                            o_86 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_87 = NULL,a_88 = NULL;
                                                              t = n_86;
                                                              t = PpSym_0_0(t);
                                                              z_87 = t;
                                                              t = o_86;
                                                              t = PpSym_0_0(t);
                                                              a_88 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_88), (ATerm) ATinsert(ATempty, term_a_34)), z_87);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                n_86 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, n_86);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    n_86 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm w_45 = NULL;
                                                                      t = n_86;
                                                                      {
                                                                        ATerm b_34 = t;
                                                                        int c_34 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = de_quote_0_0(t);
                                                                            t = de_escape_0_0(t);
                                                                            LocalPopChoice(c_34);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = b_34;
                                                                          }
                                                                      }
                                                                      w_45 = t;
                                                                      t = (ATerm) ATinsert(ATempty, w_45);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm g_34 = t;
                                                                    int h_34 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            n_86 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm i_34 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(h_34);
                                                                        {
                                                                          ATerm e_46 = NULL;
                                                                          t = n_86;
                                                                          {
                                                                            ATerm k_34 = t;
                                                                            int l_34 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = de_quote_0_0(t);
                                                                                t = de_escape_0_0(t);
                                                                                LocalPopChoice(l_34);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = k_34;
                                                                              }
                                                                          }
                                                                          e_46 = t;
                                                                          t = (ATerm) ATinsert(ATempty, e_46);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_34;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_m_34);
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
static ATerm v_89 (ATerm p_88, ATerm q_88, ATerm r_88, ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  t = p_88;
  if(match_cons(t, sym_cf_1))
    {
      w_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_88;
  {
    ATerm n_34 = t;
    if((PushChoice() == 0))
      {
        ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,a_18 = NULL;
        a_89 = t;
        if(match_cons(t, sym_sort_1))
          {
            z_88 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_89);
        y_88 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, z_88);
        a_18 = t;
        t = SSLsetAnnotations(a_18, y_88);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_34;
      }
  }
  t = PpSym_0_0(t);
  v_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_34)), v_88), (ATerm) ATinsert(ATempty, term_o_34));
  t = concat_0_0(t);
  x_88 = t;
  t = SSL_concat_strings(x_88);
  u_88 = t;
  t = SSL_mkterm(u_88, q_88);
  return(t);
}
static ATerm w_89 (ATerm b_89, ATerm c_89, ATerm d_89, ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,b_18 = NULL;
  t = b_89;
  if(match_cons(t, sym_cf_1))
    {
      h_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_89;
  if(match_cons(t, sym_sort_1))
    {
      k_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_89);
  j_89 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, k_89);
  b_18 = t;
  t = SSLsetAnnotations(b_18, j_89);
  t = PpSym_0_0(t);
  i_89 = t;
  t = SSL_concat_strings(i_89);
  g_89 = t;
  t = SSL_mkterm(g_89, c_89);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,o_89 = NULL,p_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL;
  l_89 = t;
  if(match_cons(t, sym_appl_2))
    {
      m_89 = ATgetArgument(t, 0);
      r_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_89;
  if(match_cons(t, sym_prod_3))
    {
      ATerm p_34 = ATgetArgument(t, 0);
      o_89 = ATgetArgument(t, 1);
      {
        ATerm q_34 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = r_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_89 = ATgetFirst((ATermList) t);
      t_89 = (ATerm) ATgetNext((ATermList) t);
      t = t_89;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = o_89;
          if(match_cons(t, sym_sort_1))
            {
              p_89 = ATgetArgument(t, 0);
              t = p_89;
              if(match_string(t, "<START>"))
                {
                  ATerm s_34 = t;
                  int u_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_89(o_89, r_89, l_89, t);
                      LocalPopChoice(u_34);
                    }
                  else
                    {
                      t = s_34;
                      {
                        ATerm v_34 = t;
                        int w_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_89(o_89, r_89, l_89, t);
                            LocalPopChoice(w_34);
                          }
                        else
                          {
                            t = v_34;
                            t = s_89;
                          }
                      }
                    }
                }
              else
                {
                  ATerm x_34 = t;
                  int y_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_89(o_89, r_89, l_89, t);
                      LocalPopChoice(y_34);
                    }
                  else
                    {
                      t = x_34;
                      t = w_89(o_89, r_89, l_89, t);
                    }
                }
            }
          else
            {
              ATerm z_34 = t;
              int a_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_89(o_89, r_89, l_89, t);
                  LocalPopChoice(a_35);
                }
              else
                {
                  t = z_34;
                  t = w_89(o_89, r_89, l_89, t);
                }
            }
        }
      else
        {
          t = o_89;
          {
            ATerm c_35 = t;
            int d_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_89(o_89, r_89, l_89, t);
                LocalPopChoice(d_35);
              }
            else
              {
                t = c_35;
                t = w_89(o_89, r_89, l_89, t);
              }
          }
        }
    }
  else
    {
      t = o_89;
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_89(o_89, r_89, l_89, t);
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            t = w_89(o_89, r_89, l_89, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t)
{
  static ATerm x_89 (ATerm t);
  static ATerm x_89 (ATerm t)
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_103(t);
        t = x_89(t);
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        t = s_103(t);
      }
    return(t);
  }
  t = x_89(t);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL;
  j_90 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_90 = ATgetArgument(t, 0);
      q_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_90;
  if(match_cons(t, sym_prod_3))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      m_90 = ATgetArgument(t, 1);
      {
        ATerm l_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = m_90;
  if(match_cons(t, sym_cf_1))
    {
      n_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_90;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(q_90);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          o_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_90;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = q_90;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_n_35;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_90 = ATgetFirst((ATermList) t);
              s_90 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_90;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, r_90));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_111 (ATerm), ATerm t)
{
  static ATerm i_91 (ATerm t);
  static ATerm i_91 (ATerm t)
  {
    ATerm f_91 = NULL,g_91 = NULL,h_91 = NULL;
    h_91 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_91 = ATgetFirst((ATermList) t);
        g_91 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_46 = NULL,u_46 = NULL,e_18 = NULL;
          t = SSLgetAnnotations(h_91);
          r_46 = t;
          t = g_91;
          t = i_91(t);
          u_46 = t;
          t = (ATerm) ATinsert(CheckATermList(u_46), f_91);
          e_18 = t;
          t = SSLsetAnnotations(e_18, r_46);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_91;
        t = u_111(t);
      }
    return(t);
  }
  t = i_91(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL;
  l_91 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_91;
    }
  else
    {
      static ATerm q_2 (ATerm t);
      static ATerm q_2 (ATerm t)
      {
        t = not_null(n_91);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_91 = ATgetFirst((ATermList) t);
          if(((n_91 != NULL) && (n_91 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_91;
      t = at_end_1_0(q_2, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm t_91 = NULL;
  static ATerm k_92 (ATerm t);
  static ATerm k_92 (ATerm t)
  {
    ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL;
    h_92 = t;
    if(match_cons(t, sym_appl_2))
      {
        f_92 = ATgetArgument(t, 0);
        g_92 = ATgetArgument(t, 1);
        {
          ATerm o_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_47 = NULL,e_47 = NULL,h_47 = NULL,g_18 = NULL;
              t = SSLgetAnnotations(h_92);
              e_47 = t;
              t = g_92;
              t = map_1_0(k_92, t);
              h_47 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, f_92, h_47);
              g_18 = t;
              t = SSLsetAnnotations(g_18, e_47);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm s_35 = ATgetArgument(t, 0);
                  d_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_47;
              t = concat_0_0(t);
              LocalPopChoice(p_35);
            }
          else
            {
              t = o_35;
              t = (ATerm) ATinsert(ATempty, h_92);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, h_92);
      }
    return(t);
  }
  t = k_92(t);
  t_91 = t;
  t = SSL_implode_string(t_91);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm c_93 = NULL,e_93 = NULL,f_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL;
  i_93 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_93 = ATgetArgument(t, 0);
      {
        ATerm t_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_93;
  if(match_cons(t, sym_prod_3))
    {
      k_93 = ATgetArgument(t, 0);
      l_93 = ATgetArgument(t, 1);
      {
        ATerm u_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = l_93;
  {
    ATerm v_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm z_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_35);
        t = k_93;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_93 = ATgetFirst((ATermList) t);
            e_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_93;
        if(match_cons(t, sym_lex_1))
          {
            ATerm a_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_93;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_93;
        t = yield_0_0(t);
      }
    else
      {
        t = v_35;
        {
          ATerm c_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm e_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(d_36);
              t = i_93;
              t = yield_0_0(t);
            }
          else
            {
              t = c_36;
              {
                ATerm f_36 = t;
                int g_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm h_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(g_36);
                    {
                      ATerm p_93 = NULL;
                      t = i_93;
                      t = yield_0_0(t);
                      p_93 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, p_93);
                    }
                  }
                else
                  {
                    t = f_36;
                    if(match_cons(t, sym_varsym_1))
                      {
                        m_93 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_93;
                    if(match_cons(t, sym_cf_1))
                      {
                        f_93 = ATgetArgument(t, 0);
                        t = f_93;
                        {
                          ATerm j_36 = t;
                          int k_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm p_36 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_36);
                              t = k_93;
                              {
                                ATerm q_36 = t;
                                int r_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_93 = NULL;
                                    t = i_93;
                                    t = yield_0_0(t);
                                    q_93 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, q_93);
                                    LocalPopChoice(r_36);
                                  }
                                else
                                  {
                                    t = q_36;
                                    {
                                      ATerm r_93 = NULL;
                                      t = i_93;
                                      t = yield_0_0(t);
                                      r_93 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, r_93);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = j_36;
                              {
                                ATerm s_36 = t;
                                int t_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm u_36 = ATgetArgument(t, 0);
                                        ATerm v_36 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(t_36);
                                    t = k_93;
                                    {
                                      ATerm c_37 = t;
                                      int d_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_93 = NULL;
                                          t = i_93;
                                          t = yield_0_0(t);
                                          s_93 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, s_93);
                                          LocalPopChoice(d_37);
                                        }
                                      else
                                        {
                                          t = c_37;
                                          {
                                            ATerm t_93 = NULL;
                                            t = i_93;
                                            t = yield_0_0(t);
                                            t_93 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, t_93);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = s_36;
                                    {
                                      ATerm e_37 = t;
                                      int f_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm g_37 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(f_37);
                                          t = k_93;
                                          {
                                            ATerm j_37 = t;
                                            int s_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm u_93 = NULL;
                                                t = i_93;
                                                t = yield_0_0(t);
                                                u_93 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, u_93);
                                                LocalPopChoice(s_37);
                                              }
                                            else
                                              {
                                                t = j_37;
                                                {
                                                  ATerm v_93 = NULL;
                                                  t = i_93;
                                                  t = yield_0_0(t);
                                                  v_93 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, v_93);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = e_37;
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
                                                t = k_93;
                                                {
                                                  ATerm x_37 = t;
                                                  int y_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_93 = NULL;
                                                      t = i_93;
                                                      t = yield_0_0(t);
                                                      w_93 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, w_93);
                                                      LocalPopChoice(y_37);
                                                    }
                                                  else
                                                    {
                                                      t = x_37;
                                                      {
                                                        ATerm x_93 = NULL;
                                                        t = i_93;
                                                        t = yield_0_0(t);
                                                        x_93 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, x_93);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = t_37;
                                                {
                                                  ATerm y_93 = NULL;
                                                  t = i_93;
                                                  t = yield_0_0(t);
                                                  y_93 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, y_93);
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
                        ATerm z_93 = NULL;
                        t = i_93;
                        t = yield_0_0(t);
                        z_93 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, z_93);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  t = w_104(t);
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      t = downup2_2_0(w_104, x_104, t);
      return(t);
    }
    t = SRTS_all(r_2, t);
  }
  t = x_104(t);
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
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
  b_99 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_98 = ATgetArgument(t, 0);
      a_99 = ATgetArgument(t, 1);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_53 = NULL,q_53 = NULL,r_53 = NULL,t_53 = NULL,u_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,b_19 = NULL,p_18 = NULL;
            t = SSLgetAnnotations(b_99);
            m_53 = t;
            t = z_98;
            if(match_cons(t, sym_prod_3))
              {
                t_53 = ATgetArgument(t, 0);
                u_53 = ATgetArgument(t, 1);
                w_53 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_98);
            r_53 = t;
            t = t_53;
            t = filter_1_0(w_2, t);
            x_53 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, x_53, u_53, w_53);
            p_18 = t;
            t = SSLsetAnnotations(p_18, r_53);
            y_53 = t;
            t = a_99;
            t = filter_1_0(x_2, t);
            q_53 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, y_53, q_53);
            b_19 = t;
            t = SSLsetAnnotations(b_19, m_53);
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = b_99;
          }
      }
    }
  else
    {
      t = b_99;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm h_38 = t;
  if((PushChoice() == 0))
    {
      ATerm b_56 = NULL,d_56 = NULL,e_56 = NULL;
      d_56 = t;
      if(match_cons(t, sym_appl_2))
        {
          e_56 = ATgetArgument(t, 0);
          b_56 = ATgetArgument(t, 1);
          {
            ATerm f_61 = NULL,j_61 = NULL,s_61 = NULL,t_61 = NULL,v_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,l_18 = NULL,k_18 = NULL,j_18 = NULL,i_18 = NULL;
            t = SSLgetAnnotations(d_56);
            f_61 = t;
            t = e_56;
            if(match_cons(t, sym_prod_3))
              {
                s_61 = ATgetArgument(t, 0);
                t_61 = ATgetArgument(t, 1);
                v_61 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_56);
            j_61 = t;
            t = t_61;
            if(match_cons(t, sym_cf_1))
              {
                a_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_61);
            z_61 = t;
            t = a_62;
            if(match_cons(t, sym_opt_1))
              {
                d_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_62);
            c_62 = t;
            t = d_62;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, d_62);
            i_18 = t;
            t = SSLsetAnnotations(i_18, c_62);
            e_62 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, e_62);
            j_18 = t;
            t = SSLsetAnnotations(j_18, z_61);
            b_62 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, s_61, b_62, v_61);
            k_18 = t;
            t = SSLsetAnnotations(k_18, j_61);
            y_61 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, y_61, b_56);
            l_18 = t;
            t = SSLsetAnnotations(l_18, f_61);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              e_56 = ATgetArgument(t, 0);
              {
                ATerm t_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,n_18 = NULL,m_18 = NULL;
                t = SSLgetAnnotations(d_56);
                t_62 = t;
                t = e_56;
                if(match_cons(t, sym_opt_1))
                  {
                    x_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_56);
                w_62 = t;
                t = x_62;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, x_62);
                m_18 = t;
                t = SSLsetAnnotations(m_18, w_62);
                y_62 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, y_62);
                n_18 = t;
                t = SSLsetAnnotations(n_18, t_62);
              }
            }
          else
            {
              ATerm x_63 = NULL,o_18 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  e_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_56);
              x_63 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, e_56);
              o_18 = t;
              t = SSLsetAnnotations(o_18, x_63);
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
static ATerm x_2 (ATerm t)
{
  ATerm i_38 = t;
  if((PushChoice() == 0))
    {
      ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
      l_60 = t;
      if(match_cons(t, sym_appl_2))
        {
          m_60 = ATgetArgument(t, 0);
          k_60 = ATgetArgument(t, 1);
          {
            ATerm j_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,w_18 = NULL,u_18 = NULL,r_18 = NULL,q_18 = NULL;
            t = SSLgetAnnotations(l_60);
            j_64 = t;
            t = m_60;
            if(match_cons(t, sym_prod_3))
              {
                o_64 = ATgetArgument(t, 0);
                p_64 = ATgetArgument(t, 1);
                q_64 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_60);
            n_64 = t;
            t = p_64;
            if(match_cons(t, sym_cf_1))
              {
                t_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_64);
            s_64 = t;
            t = t_64;
            if(match_cons(t, sym_opt_1))
              {
                w_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_64);
            v_64 = t;
            t = w_64;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, w_64);
            q_18 = t;
            t = SSLsetAnnotations(q_18, v_64);
            x_64 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, x_64);
            r_18 = t;
            t = SSLsetAnnotations(r_18, s_64);
            u_64 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, o_64, u_64, q_64);
            u_18 = t;
            t = SSLsetAnnotations(u_18, n_64);
            r_64 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, r_64, k_60);
            w_18 = t;
            t = SSLsetAnnotations(w_18, j_64);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              m_60 = ATgetArgument(t, 0);
              {
                ATerm j_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,z_18 = NULL,x_18 = NULL;
                t = SSLgetAnnotations(l_60);
                j_65 = t;
                t = m_60;
                if(match_cons(t, sym_opt_1))
                  {
                    m_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_60);
                l_65 = t;
                t = m_65;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, m_65);
                x_18 = t;
                t = SSLsetAnnotations(x_18, l_65);
                n_65 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, n_65);
                z_18 = t;
                t = SSLsetAnnotations(z_18, j_65);
              }
            }
          else
            {
              ATerm b_66 = NULL,a_19 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  m_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_60);
              b_66 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, m_60);
              a_19 = t;
              t = SSLsetAnnotations(a_19, b_66);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_38;
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
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      LocalPopChoice(k_38);
    }
  else
    {
      t = j_38;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(b_3, t);
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm o_38 = t;
  if((PushChoice() == 0))
    {
      ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL,c_19 = NULL;
      y_99 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_99);
      w_99 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_99);
      c_19 = t;
      t = SSLsetAnnotations(c_19, w_99);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_38;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_66 = NULL,q_66 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          p_66 = ATgetArgument(t, 0);
          {
            ATerm s_38 = ATgetArgument(t, 1);
            if(((ATgetType(s_38) == AT_LIST) && !(ATisEmpty(s_38))))
              {
                q_66 = ATgetFirst((ATermList) s_38);
                {
                  ATerm t_38 = (ATerm) ATgetNext((ATermList) s_38);
                  if(((ATgetType(t_38) != AT_LIST) || !(ATisEmpty(t_38))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = p_66;
      t = injection_0_0(t);
      t = q_66;
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
    }
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm i_95 = NULL,c_102 = NULL,w_101 = NULL,k_101 = NULL,d_101 = NULL,l_100 = NULL,g_100 = NULL,s_99 = NULL,l_99 = NULL,f_99 = NULL,r_95 = NULL;
  i_95 = t;
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_95 = NULL,k_95 = NULL;
        t = term_a_39;
        j_95 = t;
        t = term_b_39;
        k_95 = t;
        t = term_c_39;
        t = a_10(j_95, k_95, t);
        t = i_95;
        t = downup2_2_0(t_2, u_2, t);
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
      }
  }
  r_95 = t;
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_95 = NULL,u_95 = NULL;
        t = term_a_39;
        t_95 = t;
        t = term_f_39;
        u_95 = t;
        t = term_g_39;
        t = a_10(t_95, u_95, t);
        t = r_95;
        t = topdown_1_0(v_2, t);
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        t = r_95;
      }
  }
  f_99 = t;
  {
    ATerm h_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_99 = NULL,i_99 = NULL;
        t = term_a_39;
        h_99 = t;
        t = term_k_39;
        i_99 = t;
        t = term_l_39;
        t = a_10(h_99, i_99, t);
        t = f_99;
        t = topdown_1_0(y_2, t);
        LocalPopChoice(j_39);
      }
    else
      {
        t = h_39;
        t = f_99;
      }
  }
  l_99 = t;
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_99 = NULL,o_99 = NULL;
        t = term_a_39;
        n_99 = t;
        t = term_p_39;
        o_99 = t;
        t = term_q_39;
        t = a_10(n_99, o_99, t);
        t = l_99;
        t = topdown_1_0(z_2, t);
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        t = l_99;
      }
  }
  s_99 = t;
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_99 = NULL,v_99 = NULL;
        t = term_a_39;
        u_99 = t;
        t = term_t_39;
        v_99 = t;
        t = term_u_39;
        t = a_10(u_99, v_99, t);
        t = s_99;
        t = topdown_1_0(a_3, t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = s_99;
      }
  }
  g_100 = t;
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_100 = NULL,j_100 = NULL;
        t = term_a_39;
        i_100 = t;
        t = term_x_39;
        j_100 = t;
        t = term_y_39;
        t = a_10(i_100, j_100, t);
        t = g_100;
        t = replace_appl_0_0(t);
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = g_100;
      }
  }
  l_100 = t;
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_100 = NULL,t_100 = NULL;
        t = term_a_39;
        s_100 = t;
        t = term_b_40;
        t_100 = t;
        t = term_c_40;
        t = a_10(s_100, t_100, t);
        t = l_100;
        t = bottomup_1_0(c_3, t);
        LocalPopChoice(a_40);
      }
    else
      {
        t = z_39;
        t = l_100;
      }
  }
  d_101 = t;
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_101 = NULL,g_101 = NULL;
        t = term_a_39;
        f_101 = t;
        t = term_f_40;
        g_101 = t;
        t = term_g_40;
        t = a_10(f_101, g_101, t);
        t = d_101;
        t = topdown_1_0(d_3, t);
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
        t = d_101;
      }
  }
  k_101 = t;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_101 = NULL,n_101 = NULL;
        t = term_a_39;
        m_101 = t;
        t = term_j_40;
        n_101 = t;
        t = term_k_40;
        t = a_10(m_101, n_101, t);
        t = k_101;
        t = topdown_1_0(e_3, t);
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = k_101;
      }
  }
  w_101 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_66 = NULL,c_67 = NULL,d_67 = NULL;
        t = term_a_39;
        c_67 = t;
        t = term_n_40;
        d_67 = t;
        t = term_o_40;
        t = a_10(c_67, d_67, t);
        t = w_101;
        if(match_cons(t, sym_parsetree_2))
          {
            z_66 = ATgetArgument(t, 0);
            {
              ATerm p_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = z_66;
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = w_101;
      }
  }
  c_102 = t;
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_102;
        if((i_95 != t))
          {
            _fail(t);
          }
        t = c_102;
        {
          ATerm s_40 = t;
          int t_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_67 = NULL,m_67 = NULL;
              t = term_a_39;
              l_67 = t;
              t = term_u_40;
              m_67 = t;
              t = term_v_40;
              t = a_10(l_67, m_67, t);
              t = c_102;
              LocalPopChoice(t_40);
              t = implodeAsfix_1_0(_id, t);
            }
          else
            {
              t = s_40;
              t = implodeAsfix_1_0(_fail, t);
            }
        }
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        t = c_102;
      }
  }
  return(t);
}
static ATerm n_9 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm n_102 = NULL;
  t = SSL_fputc(g_53, h_53);
  n_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_102);
  return(t);
}
static ATerm o_9 (ATerm l_37, ATerm m_37, ATerm t)
{
  ATerm o_102 = NULL;
  t = SSL_write_term_to_stream_text(l_37, m_37);
  o_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_102);
  return(t);
}
static ATerm q_9 (ATerm u_110 (ATerm), ATerm w_310, ATerm r_37, ATerm t)
{
  ATerm p_102 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_310, term_w_40);
  t = u_9(t);
  p_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_102, r_37);
  t = u_110(t);
  t = fclose_0_0(t);
  t = r_37;
  return(t);
}
static ATerm p_9 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm q_102 = NULL;
  t = SSL_write_term_to_stream_baf(h_37, i_37);
  q_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_102);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm y_102 = NULL,z_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_40 = ATgetArgument(t, 0);
      if(match_cons(y_40, sym_Stream_1))
        {
          y_102 = ATgetArgument(y_40, 0);
        }
      else
        _fail(t);
      z_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(y_102, z_102, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm a_103 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_40 = ATgetArgument(t, 0);
      if(match_cons(z_40, sym_Stream_1))
        {
          d_103 = ATgetArgument(z_40, 0);
        }
      else
        _fail(t);
      e_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(d_103, e_103, t);
  a_103 = t;
  t = term_a_41;
  b_103 = t;
  t = a_103;
  if(match_cons(t, sym_Stream_1))
    {
      c_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_41, a_103);
  t = n_9(b_103, c_103, t);
  return(t);
}
ATerm output_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm r_102 = NULL,s_102 = NULL;
  t = e_135(t);
  s_102 = t;
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_102 = NULL,v_102 = NULL;
        t = term_a_39;
        t_102 = t;
        t = term_d_41;
        v_102 = t;
        t = term_h_41;
        t = a_10(t_102, v_102, t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = term_i_41;
      }
  }
  r_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_102, s_102);
  {
    ATerm l_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_102 = NULL,x_102 = NULL;
        t = term_a_39;
        w_102 = t;
        t = term_o_41;
        x_102 = t;
        t = term_p_41;
        t = a_10(w_102, x_102, t);
        t = (ATerm) ATmakeAppl(sym__2, r_102, s_102);
        LocalPopChoice(n_41);
        if(match_cons(t, sym__2))
          {
            ATerm q_41 = ATgetArgument(t, 0);
            ATerm s_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_9(f_3, r_102, s_102, t);
      }
    else
      {
        t = l_41;
        if(match_cons(t, sym__2))
          {
            ATerm t_41 = ATgetArgument(t, 0);
            ATerm u_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_9(g_3, r_102, s_102, t);
      }
  }
  return(t);
}
static ATerm v_103 (ATerm m_103, ATerm t)
{
  t = SSL_fclose(m_103);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL;
  q_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_103 = ATgetArgument(t, 0);
      {
        ATerm w_41 = t;
        int x_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_103);
            LocalPopChoice(x_41);
          }
        else
          {
            t = w_41;
            t = v_103(q_103, t);
          }
      }
    }
  else
    {
      t = v_103(q_103, t);
    }
  return(t);
}
static ATerm r_9 (ATerm n_37, ATerm t)
{
  t = SSL_read_term_from_stream(n_37);
  return(t);
}
static ATerm s_9 (ATerm k_51, ATerm l_51, ATerm t)
{
  t = SSL_strcat(k_51, l_51);
  return(t);
}
static ATerm t_9 (ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm w_103 = NULL;
  t = SSL_fopen(i_53, j_53);
  w_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_103);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_103 = NULL;
  t = SSL_stdin_stream();
  x_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_103);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_103 = NULL;
  t = SSL_stdout_stream();
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_103);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_103 = NULL;
  t = SSL_stderr_stream();
  z_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_103);
  return(t);
}
static ATerm k_105 (ATerm f_104, ATerm t)
{
  ATerm g_104 = NULL;
  t = SSL_explode_term(f_104);
  if(match_cons(t, sym__2))
    {
      ATerm y_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_41 = ATgetArgument(t, 1);
        if(((ATgetType(z_41) == AT_LIST) && !(ATisEmpty(z_41))))
          {
            g_104 = ATgetFirst((ATermList) z_41);
            {
              ATerm a_42 = (ATerm) ATgetNext((ATermList) z_41);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_104;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_104;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_104;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_104;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_105 (ATerm j_104, ATerm k_104, ATerm l_104, ATerm t)
{
  ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL,t_104 = NULL,j_20 = NULL;
  t = SSLgetAnnotations(l_104);
  o_104 = t;
  t = j_104;
  if(match_cons(t, sym_Path_1))
    {
      t_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_104, k_104);
  j_20 = t;
  t = SSLsetAnnotations(j_20, o_104);
  if(match_cons(t, sym__2))
    {
      m_104 = ATgetArgument(t, 0);
      n_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(m_104, n_104, t);
  return(t);
}
static ATerm m_105 (ATerm v_104, ATerm y_104, ATerm z_104, ATerm t)
{
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL,f_105 = NULL,k_20 = NULL;
  t = SSLgetAnnotations(z_104);
  c_105 = t;
  t = SSL_is_string(v_104);
  f_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_105, y_104);
  k_20 = t;
  t = SSLsetAnnotations(k_20, c_105);
  if(match_cons(t, sym__2))
    {
      a_105 = ATgetArgument(t, 0);
      b_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(a_105, b_105, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL;
  h_105 = t;
  if(match_cons(t, sym__2))
    {
      i_105 = ATgetArgument(t, 0);
      j_105 = ATgetArgument(t, 1);
      {
        ATerm b_42 = t;
        int c_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_105(h_105, t);
            LocalPopChoice(c_42);
          }
        else
          {
            t = b_42;
            {
              ATerm d_42 = t;
              int e_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_105(i_105, j_105, h_105, t);
                  LocalPopChoice(e_42);
                }
              else
                {
                  t = d_42;
                  t = m_105(i_105, j_105, h_105, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_105(h_105, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL,x_105 = NULL;
  x_105 = t;
  {
    ATerm f_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_105, term_j_42);
        t = u_9(t);
        LocalPopChoice(h_42);
      }
    else
      {
        t = f_42;
        {
          ATerm p_68 = NULL,q_68 = NULL;
          t = term_k_42;
          q_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_42, x_105);
          t = s_9(q_68, x_105, t);
          p_68 = t;
          t = SSL_perror(p_68);
          _fail(t);
        }
      }
  }
  p_105 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_9(q_105, t);
  o_105 = t;
  t = p_105;
  t = fclose_0_0(t);
  t = o_105;
  return(t);
}
ATerm input_1_0 (ATerm f_135 (ATerm), ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_106 = NULL,b_106 = NULL;
      t = term_a_39;
      a_106 = t;
      t = term_o_42;
      b_106 = t;
      t = term_q_42;
      t = a_10(a_106, b_106, t);
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
      t = term_r_42;
    }
  t = ReadFromFile_0_0(t);
  t = f_135(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL,g_106 = NULL;
  c_106 = t;
  t = term_s_42;
  t = whoami_0_0(t);
  d_106 = t;
  t = term_t_42;
  f_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_42), d_106), term_u_42);
  g_106 = t;
  t = SSL_printnl(f_106, g_106);
  t = term_h_18;
  e_106 = t;
  t = SSL_exit(e_106);
  t = c_106;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm i_106 = NULL;
  i_106 = t;
  if(match_string(t, "-k"))
    {
      t = i_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_106;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  l_106 = t;
  t = SSL_string_to_int(l_106);
  m_106 = t;
  t = term_w_42;
  n_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_42, m_106);
  t = d_10(n_106, m_106, t);
  t = l_106;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, j_3, t_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm p_106 = NULL;
  p_106 = t;
  if(match_string(t, "-S"))
    {
      t = p_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_106;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL;
  t = term_y_42;
  q_106 = t;
  t = term_z_42;
  r_106 = t;
  t = term_b_43;
  t = d_10(q_106, r_106, t);
  t = term_d_43;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_e_43;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  s_106 = t;
  t = SSL_string_to_int(s_106);
  t_106 = t;
  t = term_y_42;
  u_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_42, t_106);
  t = d_10(u_106, t_106, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_106);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_f_43;
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
  ATerm v_106 = NULL,w_106 = NULL;
  t = term_h_43;
  v_106 = t;
  t = term_s_42;
  w_106 = t;
  t = term_i_43;
  t = d_10(v_106, w_106, t);
  t = term_j_43;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_k_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      {
        ATerm o_43 = t;
        int p_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_3, d_4, e_4, t);
            LocalPopChoice(p_43);
          }
        else
          {
            t = o_43;
            t = Option_3_0(f_4, g_4, k_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_10 (ATerm a_72, ATerm b_72, ATerm t)
{
  ATerm x_106 = NULL,y_106 = NULL;
  t = term_a_39;
  x_106 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_39, a_72, b_72);
  t = lookup_table_0_1(x_106, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(a_72, b_72, y_106, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_39, a_72, b_72);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_107 = NULL,d_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL;
      t = term_s_42;
      t = g_0(t);
      e_107 = t;
      t = term_q_43;
      f_107 = t;
      t = term_r_43;
      g_107 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_43, term_r_43, e_107);
      t = b_10(f_107, g_107, e_107, t);
      _fail(t);
    }
  else
    {
      ATerm j_107 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_107 = ATgetFirst((ATermList) t);
          d_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_107;
      t = d_0(t);
      t = term_s_42;
      t = f_0(t);
      j_107 = t;
      t = (ATerm) ATinsert(CheckATermList(d_107), j_107);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_107 = NULL;
  l_107 = t;
  if(match_string(t, "-o"))
    {
      t = l_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_107;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm m_107 = NULL,n_107 = NULL;
  m_107 = t;
  t = term_d_41;
  n_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_41, m_107);
  t = d_10(n_107, m_107, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_107);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
static ATerm b_10 (ATerm m_58, ATerm n_58, ATerm l_58, ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL;
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_43 = ATgetArgument(t, 0);
            ATerm x_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
        t = a_10(m_58, n_58, t);
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
        t = (ATerm) ATempty;
      }
  }
  q_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_58, n_58, (ATerm) ATinsert(CheckATermList(q_107), l_58));
  t = lookup_table_0_1(m_58, t);
  t_107 = t;
  t = (ATerm) ATinsert(CheckATermList(q_107), l_58);
  r_107 = t;
  t = t_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(n_58, r_107, s_107, t);
  t = p_107;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
      t = term_s_42;
      t = q_0(t);
      e_108 = t;
      t = term_q_43;
      f_108 = t;
      t = term_r_43;
      g_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_43, term_r_43, e_108);
      t = b_10(f_108, g_108, e_108, t);
      _fail(t);
    }
  else
    {
      ATerm k_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_108 = ATgetFirst((ATermList) t);
          b_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_108 = ATgetFirst((ATermList) t);
          d_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_108;
      t = o_0(t);
      t = c_108;
      t = p_0(t);
      k_108 = t;
      t = (ATerm) ATinsert(CheckATermList(d_108), k_108);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm m_108 = NULL;
  m_108 = t;
  if(match_string(t, "-i"))
    {
      t = m_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_108;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm n_108 = NULL,o_108 = NULL;
  n_108 = t;
  t = term_o_42;
  o_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_42, n_108);
  t = d_10(o_108, n_108, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_108);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_y_43;
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
  ATerm p_108 = NULL,q_108 = NULL;
  p_108 = t;
  t = term_b_39;
  q_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_39, p_108);
  t = d_10(q_108, p_108, t);
  t = p_108;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_z_43;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL;
  r_108 = t;
  t = term_f_39;
  s_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_39, r_108);
  t = d_10(s_108, r_108, t);
  t = r_108;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lit", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_108 = NULL,u_108 = NULL;
  t_108 = t;
  t = term_t_39;
  u_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_39, t_108);
  t = d_10(u_108, t_108, t);
  t = t_108;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_c_44;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--alt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL;
  v_108 = t;
  t = term_f_40;
  w_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, v_108);
  t = d_10(w_108, v_108, t);
  t = v_108;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL;
  x_108 = t;
  t = term_x_39;
  y_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, x_108);
  t = d_10(y_108, x_108, t);
  t = x_108;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm z_108 = NULL,a_109 = NULL;
  z_108 = t;
  t = term_k_39;
  a_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_39, z_108);
  t = d_10(a_109, z_108, t);
  t = z_108;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_g_44;
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
  ATerm b_109 = NULL,c_109 = NULL;
  b_109 = t;
  t = term_b_40;
  c_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_40, b_109);
  t = d_10(c_109, b_109, t);
  t = b_109;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--list", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm d_109 = NULL,e_109 = NULL;
  d_109 = t;
  t = term_p_39;
  e_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_39, d_109);
  t = d_10(e_109, d_109, t);
  t = d_109;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm f_109 = NULL,g_109 = NULL;
  f_109 = t;
  t = term_j_40;
  g_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_40, f_109);
  t = d_10(g_109, f_109, t);
  t = f_109;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_j_44;
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
  ATerm h_109 = NULL,i_109 = NULL;
  h_109 = t;
  t = term_n_40;
  i_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_40, h_109);
  t = d_10(i_109, h_109, t);
  t = h_109;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_k_44;
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
  ATerm j_109 = NULL,k_109 = NULL;
  j_109 = t;
  t = term_u_40;
  k_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_40, j_109);
  t = d_10(k_109, j_109, t);
  t = j_109;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_l_44;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm m_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, s_4, u_4, t);
      LocalPopChoice(n_44);
    }
  else
    {
      t = m_44;
      {
        ATerm o_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_4, j_5, l_5, t);
            LocalPopChoice(p_44);
          }
        else
          {
            t = o_44;
            {
              ATerm q_44 = t;
              int r_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_5, n_5, o_5, t);
                  LocalPopChoice(r_44);
                }
              else
                {
                  t = q_44;
                  {
                    ATerm s_44 = t;
                    int u_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(p_5, t_5, u_5, t);
                        LocalPopChoice(u_44);
                      }
                    else
                      {
                        t = s_44;
                        {
                          ATerm w_44 = t;
                          int x_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(z_5, d_6, f_6, t);
                              LocalPopChoice(x_44);
                            }
                          else
                            {
                              t = w_44;
                              {
                                ATerm a_45 = t;
                                int b_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(g_6, i_6, j_6, t);
                                    LocalPopChoice(b_45);
                                  }
                                else
                                  {
                                    t = a_45;
                                    {
                                      ATerm c_45 = t;
                                      int d_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(k_6, m_6, n_6, t);
                                          LocalPopChoice(d_45);
                                        }
                                      else
                                        {
                                          t = c_45;
                                          {
                                            ATerm e_45 = t;
                                            int f_45 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(r_6, t_6, v_6, t);
                                                LocalPopChoice(f_45);
                                              }
                                            else
                                              {
                                                t = e_45;
                                                {
                                                  ATerm g_45 = t;
                                                  int h_45 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(w_6, y_6, g_7, t);
                                                      LocalPopChoice(h_45);
                                                    }
                                                  else
                                                    {
                                                      t = g_45;
                                                      {
                                                        ATerm i_45 = t;
                                                        int j_45 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(l_7, m_7, n_7, t);
                                                            LocalPopChoice(j_45);
                                                          }
                                                        else
                                                          {
                                                            t = i_45;
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
  ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_42;
  t = whoami_0_0(t);
  l_109 = t;
  t = term_t_42;
  n_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_45), l_109);
  o_109 = t;
  t = SSL_printnl(n_109, o_109);
  t = term_h_18;
  m_109 = t;
  t = SSL_exit(m_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL;
  t = term_a_39;
  p_109 = t;
  t = term_m_45;
  q_109 = t;
  t = term_n_45;
  t = a_10(p_109, q_109, t);
  return(t);
}
static ATerm v_9 (ATerm v_56, ATerm w_56, ATerm t)
{
  ATerm p_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_56, w_56);
      LocalPopChoice(q_45);
    }
  else
    {
      t = p_45;
      t = SSL_addr(v_56, w_56);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t)
{
  ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
  s_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_109;
      t = c_118(t);
    }
  else
    {
      ATerm x_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_109 = ATgetFirst((ATermList) t);
          u_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_109;
      t = foldr_2_0(c_118, d_118, t);
      x_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_109, x_109);
      t = d_118(t);
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
  t = term_z_42;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL;
  if(match_cons(t, sym__2))
    {
      w_68 = ATgetArgument(t, 0);
      x_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(w_68, x_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_110 = NULL,s_68 = NULL,t_68 = NULL;
  t = times_0_0(t);
  t_68 = t;
  t = SSL_explode_term(t_68);
  if(match_cons(t, sym__2))
    {
      ATerm r_45 = ATgetArgument(t, 0);
      s_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_68;
  t = foldr_2_0(s_7, t_7, t);
  a_110 = t;
  t = SSL_TicksToSeconds(a_110);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL;
  l_110 = t;
  if(match_cons(t, sym__2))
    {
      m_110 = ATgetArgument(t, 0);
      n_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_110;
        if((m_110 != t))
          {
            _fail(t);
          }
        t = l_110;
        LocalPopChoice(t_45);
      }
    else
      {
        t = s_45;
        t = (ATerm) ATmakeAppl(sym__2, m_110, n_110);
        {
          ATerm u_45 = t;
          int v_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_110, n_110);
              LocalPopChoice(v_45);
            }
          else
            {
              t = u_45;
              t = SSL_gtr(m_110, n_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_110, n_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_127 (ATerm), ATerm t)
{
  ATerm r_110 = NULL;
  r_110 = t;
  {
    ATerm x_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_110 = NULL,v_110 = NULL,w_110 = NULL;
        t = term_a_39;
        v_110 = t;
        t = term_y_42;
        w_110 = t;
        t = term_z_45;
        t = a_10(v_110, w_110, t);
        t_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_110, term_h_18);
        t = geq_0_0(t);
        t = r_110;
        t = a_127(t);
        LocalPopChoice(y_45);
      }
    else
      {
        t = x_45;
        t = r_110;
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,c_111 = NULL,f_111 = NULL;
  t = run_time_0_0(t);
  y_110 = t;
  t = term_s_42;
  t = whoami_0_0(t);
  z_110 = t;
  t = term_t_42;
  c_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_46), y_110), term_a_46), z_110);
  f_111 = t;
  t = SSL_printnl(c_111, f_111);
  t = (ATerm) ATmakeAppl(sym__2, term_t_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_46), y_110), term_a_46), z_110));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_42;
  g_111 = t;
  t = SSL_exit(g_111);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm s_111 = NULL,t_111 = NULL;
  t_111 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_111;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_111 = ATgetArgument(t, 0);
          {
            ATerm j_69 = NULL,n_20 = NULL;
            t = SSLgetAnnotations(t_111);
            j_69 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_111);
            n_20 = t;
            t = SSLsetAnnotations(n_20, j_69);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_111;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_134 (ATerm), ATerm t)
{
  ATerm c_46 = t;
  int d_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_111 = NULL,k_111 = NULL;
      t = term_a_39;
      j_111 = t;
      t = term_f_46;
      k_111 = t;
      t = term_g_46;
      t = a_10(j_111, k_111, t);
      LocalPopChoice(d_46);
    }
  else
    {
      t = c_46;
      t = fetch_1_0(v_7, t);
    }
  t = v_134(t);
  return(t);
}
static ATerm e_10 (ATerm e_63, ATerm f_63, ATerm g_63, ATerm t)
{
  ATerm x_111 = NULL;
  t = SSL_hashtable_put(g_63, e_63, f_63);
  x_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_111);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_59, ATerm t)
{
  ATerm i_112 = NULL;
  t = table_hashtable_0_0(t);
  i_112 = t;
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_69 = NULL;
        t = i_112;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_10(y_59, p_69, t);
        LocalPopChoice(i_46);
      }
    else
      {
        t = h_46;
        {
          ATerm v_69 = NULL;
          t = y_59;
          t = table_create_0_0(t);
          t = i_112;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_10(y_59, v_69, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_63, ATerm n_63, ATerm t)
{
  ATerm l_112 = NULL;
  t = SSL_hashtable_create(m_63, n_63);
  l_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_112);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,q_112 = NULL,r_112 = NULL;
  m_112 = t;
  t = term_j_46;
  q_112 = t;
  t = term_k_46;
  r_112 = t;
  t = m_112;
  t = new_hashtable_0_2(q_112, r_112, t);
  n_112 = t;
  t = m_112;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(m_112, n_112, o_112, t);
  t = m_112;
  return(t);
}
static ATerm x_9 (ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm s_112 = NULL;
  t = SSL_hashtable_remove(k_63, j_63);
  s_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_112);
  return(t);
}
static ATerm y_9 (ATerm o_63, ATerm t)
{
  ATerm t_112 = NULL;
  t = SSL_hashtable_destroy(o_63);
  t_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_112);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_112 = NULL;
  t = SSL_table_hashtable();
  u_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_112);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_112 = NULL,w_112 = NULL,x_112 = NULL,y_112 = NULL;
  v_112 = t;
  t = table_hashtable_0_0(t);
  w_112 = t;
  t = lookup_table_0_1(v_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_9(y_112, t);
  t = w_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_9(v_112, x_112, t);
  t = v_112;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_113 = NULL,b_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_113 = ATgetFirst((ATermList) t);
      b_113 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_113 = NULL,g_113 = NULL;
        static ATerm w_7 (ATerm t);
        static ATerm w_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_113)), not_null(g_113));
          return(t);
        }
        t = b_113;
        t = l_0(t);
        if(((f_113 != NULL) && (f_113 != t)))
          _fail(t);
        else
          f_113 = t;
        t = a_113;
        t = j_0(t);
        if(((g_113 != NULL) && (g_113 != t)))
          _fail(t);
        else
          g_113 = t;
        t = b_113;
        t = reverse_acc_2_0(j_0, w_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_42;
      t = l_0(t);
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm v_113 = NULL,v_70 = NULL,z_70 = NULL;
  v_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_113), term_l_46);
  {
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(n_46);
      }
    else
      {
        t = m_46;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_113), term_l_46));
      }
  }
  v_70 = t;
  t = term_i_41;
  z_70 = t;
  t = SSL_printnl(z_70, v_70);
  t = (ATerm) ATinsert(ATinsert(ATempty, v_113), term_l_46);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL,l_70 = NULL,s_70 = NULL;
  ATerm o_46 = t;
  int p_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_113 = NULL,o_113 = NULL;
      t = term_a_39;
      n_113 = t;
      t = term_m_45;
      o_113 = t;
      t = term_n_45;
      t = a_10(n_113, o_113, t);
      k_113 = t;
      LocalPopChoice(p_46);
    }
  else
    {
      t = o_46;
      {
        static ATerm x_7 (ATerm t);
        static ATerm x_7 (ATerm t)
        {
          ATerm p_113 = NULL,q_113 = NULL,r_113 = NULL,p_20 = NULL;
          r_113 = t;
          if(match_cons(t, sym_Program_1))
            {
              q_113 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_113);
          p_113 = t;
          t = q_113;
          if(((k_113 != NULL) && (k_113 != t)))
            _fail(t);
          else
            k_113 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, q_113);
          p_20 = t;
          t = SSLsetAnnotations(p_20, p_113);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  {
    ATerm q_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_69 = NULL,i_70 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_46), not_null(k_113)), term_t_46);
        {
          ATerm w_46 = t;
          int x_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(x_46);
            }
          else
            {
              t = w_46;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_46), not_null(k_113)), term_t_46));
            }
        }
        z_69 = t;
        t = term_i_41;
        i_70 = t;
        t = SSL_printnl(i_70, z_69);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_46), not_null(k_113)), term_t_46);
        LocalPopChoice(s_46);
      }
    else
      {
        t = q_46;
      }
  }
  t = term_y_46;
  {
    ATerm z_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(a_47);
      }
    else
      {
        t = z_46;
        t = (ATerm) ATinsert(ATempty, term_y_46);
      }
  }
  l_70 = t;
  t = term_i_41;
  s_70 = t;
  t = SSL_printnl(s_70, l_70);
  t = term_q_43;
  l_113 = t;
  t = term_r_43;
  m_113 = t;
  t = term_b_47;
  t = a_10(l_113, m_113, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(d_8, t);
  {
    ATerm c_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_71 = NULL,c_71 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_47), term_j_47), term_i_47), term_g_47);
        {
          ATerm l_47 = t;
          int m_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(m_47);
            }
          else
            {
              t = l_47;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_47), term_j_47), term_i_47), term_g_47));
            }
        }
        b_71 = t;
        t = term_i_41;
        c_71 = t;
        t = SSL_printnl(c_71, b_71);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_47), term_j_47), term_i_47), term_g_47);
        LocalPopChoice(f_47);
      }
    else
      {
        t = c_47;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  static ATerm u_114 (ATerm t);
  static ATerm u_114 (ATerm t)
  {
    ATerm r_114 = NULL,s_114 = NULL,t_114 = NULL;
    r_114 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_114 = ATgetFirst((ATermList) t);
        t_114 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_47 = t;
      int o_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_71 = NULL,o_71 = NULL,r_20 = NULL;
          t = SSLgetAnnotations(r_114);
          i_71 = t;
          t = s_114;
          t = n_111(t);
          o_71 = t;
          t = (ATerm) ATinsert(CheckATermList(t_114), o_71);
          r_20 = t;
          t = SSLsetAnnotations(r_20, i_71);
          LocalPopChoice(o_47);
        }
      else
        {
          t = n_47;
          {
            ATerm w_71 = NULL,g_72 = NULL,s_20 = NULL;
            t = SSLgetAnnotations(r_114);
            w_71 = t;
            t = t_114;
            t = u_114(t);
            g_72 = t;
            t = (ATerm) ATinsert(CheckATermList(g_72), s_114);
            s_20 = t;
            t = SSLsetAnnotations(s_20, w_71);
          }
        }
    }
    return(t);
  }
  t = u_114(t);
  return(t);
}
ATerm map_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  static ATerm l_115 (ATerm t);
  static ATerm l_115 (ATerm t)
  {
    ATerm i_115 = NULL,j_115 = NULL,k_115 = NULL;
    i_115 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_115;
      }
    else
      {
        ATerm r_72 = NULL,u_72 = NULL,x_72 = NULL,u_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_115 = ATgetFirst((ATermList) t);
            k_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_115);
        r_72 = t;
        t = j_115;
        t = d_111(t);
        u_72 = t;
        t = k_115;
        t = l_115(t);
        x_72 = t;
        t = (ATerm) ATinsert(CheckATermList(x_72), u_72);
        u_21 = t;
        t = SSLsetAnnotations(u_21, r_72);
      }
    return(t);
  }
  t = l_115(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_115 = NULL;
      w_115 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_115;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_47 = ATgetFirst((ATermList) t);
              ATerm s_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_115;
        }
      LocalPopChoice(q_47);
    }
  else
    {
      t = p_47;
      {
        static ATerm n_117 (ATerm t);
        static ATerm n_117 (ATerm t)
        {
          ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL;
          l_117 = t;
          if(match_cons(t, sym_iter_1))
            {
              m_117 = ATgetArgument(t, 0);
              {
                ATerm x_73 = NULL,w_21 = NULL;
                t = SSLgetAnnotations(l_117);
                x_73 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, m_117);
                w_21 = t;
                t = SSLsetAnnotations(w_21, x_73);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  m_117 = ATgetArgument(t, 0);
                  k_117 = ATgetArgument(t, 1);
                  {
                    ATerm t_74 = NULL,x_21 = NULL;
                    t = SSLgetAnnotations(l_117);
                    t_74 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, m_117, k_117);
                    x_21 = t;
                    t = SSLsetAnnotations(x_21, t_74);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      m_117 = ATgetArgument(t, 0);
                      {
                        ATerm f_75 = NULL,y_21 = NULL;
                        t = SSLgetAnnotations(l_117);
                        f_75 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, m_117);
                        y_21 = t;
                        t = SSLsetAnnotations(y_21, f_75);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          m_117 = ATgetArgument(t, 0);
                          k_117 = ATgetArgument(t, 1);
                          {
                            ATerm b_76 = NULL,z_21 = NULL;
                            t = SSLgetAnnotations(l_117);
                            b_76 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_117, k_117);
                            z_21 = t;
                            t = SSLsetAnnotations(z_21, b_76);
                          }
                        }
                      else
                        {
                          ATerm k_76 = NULL,m_76 = NULL,b_22 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              m_117 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(l_117);
                          k_76 = t;
                          t = m_117;
                          {
                            static ATerm e_8 (ATerm t);
                            static ATerm e_8 (ATerm t)
                            {
                              ATerm u_47 = t;
                              int v_47 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_76 = NULL,u_76 = NULL;
                                  u_76 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      t_76 = ATgetArgument(t, 0);
                                      {
                                        ATerm a_77 = NULL,a_22 = NULL;
                                        t = SSLgetAnnotations(u_76);
                                        a_77 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, t_76);
                                        a_22 = t;
                                        t = SSLsetAnnotations(a_22, a_77);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = u_76;
                                    }
                                  LocalPopChoice(v_47);
                                }
                              else
                                {
                                  t = u_47;
                                  t = n_117(t);
                                }
                              return(t);
                            }
                            t = map_1_0(e_8, t);
                          }
                          m_76 = t;
                          t = (ATerm) ATmakeAppl(sym_seq_1, m_76);
                          b_22 = t;
                          t = SSLsetAnnotations(b_22, k_76);
                        }
                    }
                }
            }
          return(t);
        }
        t = n_117(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_117 = NULL,y_117 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
  t = term_a_39;
  x_117 = t;
  t = term_m_45;
  y_117 = t;
  t = term_n_45;
  t = a_10(x_117, y_117, t);
  f_77 = t;
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(x_47);
      }
    else
      {
        t = w_47;
        t = (ATerm) ATinsert(ATempty, f_77);
      }
  }
  g_77 = t;
  t = term_i_41;
  h_77 = t;
  t = SSL_printnl(h_77, g_77);
  t = f_77;
  return(t);
}
static ATerm f_10 (ATerm h_63, ATerm i_63, ATerm t)
{
  t = SSL_hashtable_get(i_63, h_63);
  return(t);
}
static ATerm a_10 (ATerm f_60, ATerm g_60, ATerm t)
{
  ATerm z_117 = NULL;
  t = lookup_table_0_1(f_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(g_60, z_117, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm b_118 = NULL,e_118 = NULL;
  t = term_y_47;
  b_118 = t;
  t = term_s_42;
  e_118 = t;
  t = term_z_47;
  t = d_10(b_118, e_118, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm f_118 = NULL,g_118 = NULL,h_118 = NULL,i_118 = NULL;
  t = term_y_47;
  h_118 = t;
  t = term_s_42;
  i_118 = t;
  t = term_z_47;
  t = d_10(h_118, i_118, t);
  t = term_c_48;
  f_118 = t;
  t = term_s_42;
  g_118 = t;
  t = term_g_48;
  t = d_10(f_118, g_118, t);
  t = term_h_48;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_48 = t;
  int l_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_8, g_8, h_8, t);
      LocalPopChoice(l_48);
    }
  else
    {
      t = k_48;
      t = Option_3_0(j_8, k_8, l_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,o_24 = NULL;
  o_118 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_118 = ATgetFirst((ATermList) t);
      l_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_118);
  j_118 = t;
  t = k_118;
  t = c_86(t);
  m_118 = t;
  t = l_118;
  t = d_86(t);
  n_118 = t;
  t = (ATerm) ATinsert(CheckATermList(n_118), m_118);
  o_24 = t;
  t = SSLsetAnnotations(o_24, j_118);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_129 (ATerm), ATerm t)
{
  ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL,y_118 = NULL,z_118 = NULL,r_24 = NULL;
  t_118 = t;
  {
    ATerm m_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_48;
        t = w_129(t);
        LocalPopChoice(o_48);
      }
    else
      {
        t = m_48;
      }
  }
  t = t_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_118 = ATgetFirst((ATermList) t);
      w_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_118);
  u_118 = t;
  t = term_m_45;
  z_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_45, v_118);
  t = d_10(z_118, v_118, t);
  t = w_118;
  {
    static ATerm k_119 (ATerm t);
    static ATerm k_119 (ATerm t)
    {
      ATerm r_48 = t;
      int t_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_48 = t;
          int v_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_119 = NULL;
              c_119 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_119;
              LocalPopChoice(v_48);
            }
          else
            {
              t = u_48;
              t = w_129(t);
              t = Cons_2_0(_id, k_119, t);
            }
          LocalPopChoice(t_48);
        }
      else
        {
          t = r_48;
          {
            ATerm f_119 = NULL,h_119 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_119 = ATgetFirst((ATermList) t);
                h_119 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_119), (ATerm) ATmakeAppl(sym_Undefined_1, f_119));
          }
        }
      return(t);
    }
    t = k_119(t);
  }
  y_118 = t;
  t = (ATerm) ATinsert(CheckATermList(y_118), (ATerm) ATmakeAppl(sym_Program_1, v_118));
  r_24 = t;
  t = SSLsetAnnotations(r_24, u_118);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm x_119 = NULL;
  x_119 = t;
  if(match_string(t, "--help"))
    {
      t = x_119;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_119;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_119;
        }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL;
  t = term_f_46;
  y_119 = t;
  t = term_s_42;
  z_119 = t;
  t = term_y_48;
  t = d_10(y_119, z_119, t);
  t = term_z_48;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_a_49;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL;
  r_119 = t;
  t = term_q_43;
  s_119 = t;
  t = term_b_49;
  t = lookup_table_0_1(s_119, t);
  w_119 = t;
  t = term_r_43;
  t_119 = t;
  t = (ATerm) ATempty;
  u_119 = t;
  t = w_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(t_119, u_119, v_119, t);
  t = r_119;
  {
    static ATerm m_8 (ATerm t);
    static ATerm m_8 (ATerm t)
    {
      ATerm d_49 = t;
      int f_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_129(t);
          LocalPopChoice(f_49);
        }
      else
        {
          t = d_49;
          {
            ATerm j_49 = t;
            int k_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_8, o_8, p_8, t);
                LocalPopChoice(k_49);
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
    t = parse_options_p__1_0(m_8, t);
  }
  {
    ATerm m_49 = t;
    int n_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_120 = NULL;
        k_120 = t;
        {
          ATerm o_49 = t;
          int t_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_77 = NULL;
              t = k_120;
              {
                ATerm u_49 = t;
                int v_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_77 = NULL,m_77 = NULL;
                    t = term_a_39;
                    l_77 = t;
                    t = term_f_46;
                    m_77 = t;
                    t = term_g_46;
                    t = a_10(l_77, m_77, t);
                    LocalPopChoice(v_49);
                  }
                else
                  {
                    t = u_49;
                    t = fetch_1_0(r_8, t);
                  }
              }
              t = k_120;
              t = default_system_usage_0_0(t);
              t = term_z_42;
              k_77 = t;
              t = SSL_exit(k_77);
              LocalPopChoice(t_49);
            }
          else
            {
              t = o_49;
              {
                ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
                t = term_a_39;
                r_77 = t;
                t = term_y_47;
                s_77 = t;
                t = term_w_49;
                t = a_10(r_77, s_77, t);
                t = k_120;
                t = default_system_about_0_0(t);
                t = term_z_42;
                q_77 = t;
                t = SSL_exit(q_77);
              }
            }
        }
        LocalPopChoice(n_49);
      }
    else
      {
        t = m_49;
        {
          ATerm x_49 = t;
          int y_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL;
              static ATerm s_8 (ATerm t);
              static ATerm s_8 (ATerm t)
              {
                ATerm o_120 = NULL,p_120 = NULL,q_120 = NULL,o_26 = NULL;
                q_120 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_120 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_120);
                o_120 = t;
                t = p_120;
                if(((p_119 != NULL) && (p_119 != t)))
                  _fail(t);
                else
                  p_119 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_120);
                o_26 = t;
                t = SSLsetAnnotations(o_26, o_120);
                return(t);
              }
              t = fetch_1_0(s_8, t);
              t = term_t_42;
              m_120 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_119)), term_z_49);
              n_120 = t;
              t = SSL_printnl(m_120, n_120);
              t = (ATerm) ATmakeAppl(sym__2, term_t_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_119)), term_z_49));
              t = default_system_usage_0_0(t);
              t = term_h_18;
              l_120 = t;
              t = SSL_exit(l_120);
              LocalPopChoice(y_49);
            }
          else
            {
              t = x_49;
            }
        }
      }
  }
  q_119 = t;
  t = term_q_43;
  t = table_destroy_0_0(t);
  t = q_119;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_134 (ATerm), ATerm y_134 (ATerm), ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t)
{
  ATerm v_120 = NULL,w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL;
  t = parse_options_1_0(x_134, t);
  v_120 = t;
  t = term_d_50;
  t = table_create_0_0(t);
  t = term_d_50;
  w_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_50, term_e_50, v_120);
  t = lookup_table_0_1(w_120, t);
  z_120 = t;
  t = term_e_50;
  x_120 = t;
  t = z_120;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(x_120, v_120, y_120, t);
  t = v_120;
  t = z_134(t);
  {
    ATerm j_50 = t;
    int k_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_134, t);
        LocalPopChoice(k_50);
      }
    else
      {
        t = j_50;
        {
          ATerm l_50 = t;
          int m_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_50);
            }
          else
            {
              t = l_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm n_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_options_0_0(t);
      LocalPopChoice(o_50);
    }
  else
    {
      t = n_50;
      {
        ATerm p_50 = t;
        int q_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(q_50);
          }
        else
          {
            t = p_50;
            {
              ATerm r_50 = t;
              int s_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(s_50);
                }
              else
                {
                  t = r_50;
                  {
                    ATerm t_50 = t;
                    int u_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_8, b_9, e_9, t);
                        LocalPopChoice(u_50);
                      }
                    else
                      {
                        t = t_50;
                        {
                          ATerm v_50 = t;
                          int w_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(w_50);
                            }
                          else
                            {
                              t = v_50;
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
static ATerm x_8 (ATerm t)
{
  t = input_1_0(f_9, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm b_121 = NULL,c_121 = NULL;
  t = term_o_41;
  b_121 = t;
  t = term_s_42;
  c_121 = t;
  t = term_x_50;
  t = d_10(b_121, c_121, t);
  t = term_y_50;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_z_50;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = output_1_0(implode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_8, default_usage_0_0, _id, x_8, t);
  return(t);
}

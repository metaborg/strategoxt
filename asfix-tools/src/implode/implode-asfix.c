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
Symbol sym_Undefined_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_d_50;
ATerm term_h_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_u_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_f_48;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_o_47;
ATerm term_j_47;
ATerm term_g_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_s_45;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_n_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_u_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_q_41;
ATerm term_o_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_e_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_s_35;
ATerm term_w_34;
ATerm term_q_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_e_34;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_o_30;
ATerm term_e_30;
ATerm term_t_28;
ATerm term_m_28;
ATerm term_l_28;
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
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_b_39);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_g_39);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_l_39);
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
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_b_40);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_h_40);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_l_40);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_p_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_w_40);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_g_41);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_o_41);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_u_42);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym__2, term_e_43, term_f_43);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_43);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__2, term_n_43, term_y_42);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_u_45);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_e_43);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_n_46);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym__2, term_x_43, term_y_43);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym__2, term_f_48, term_y_42);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym__2, term_l_48, term_y_42);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym__2, term_n_46, term_y_42);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym__3, term_x_43, term_y_43, (ATerm) ATempty);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_f_48);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym__2, term_o_41, term_y_42);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm i_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm annotation_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm z_102 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm skip_concrete_1_0 (ATerm g_99 (ATerm), ATerm t);
static ATerm u_0 (ATerm c_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm z_8 (ATerm n_98 (ATerm), ATerm n_21, ATerm m_21, ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplCons_1_0 (ATerm u_98 (ATerm), ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm i_99 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm h_101 (ATerm), ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm q_59 (ATerm g_48, ATerm h_48, ATerm i_48, ATerm t_48, ATerm t);
static ATerm s_59 (ATerm y_49, ATerm z_49, ATerm a_50, ATerm b_50, ATerm t);
static ATerm t_59 (ATerm f_52, ATerm i_52, ATerm k_52, ATerm l_52, ATerm t);
static ATerm u_59 (ATerm w_57, ATerm x_57, ATerm y_57, ATerm z_57, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm i_101 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm l_102 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm w_115 (ATerm), ATerm t);
static ATerm w_81 (ATerm t_77, ATerm t);
static ATerm x_81 (ATerm z_79, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm v_108 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm v_89 (ATerm p_88, ATerm q_88, ATerm r_88, ATerm t);
static ATerm w_89 (ATerm b_89, ATerm c_89, ATerm d_89, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm k_108 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t);
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
static ATerm n_9 (ATerm y_41, ATerm z_41, ATerm t);
static ATerm o_9 (ATerm d_26, ATerm e_26, ATerm t);
static ATerm q_9 (ATerm k_107 (ATerm), ATerm e_240, ATerm j_26, ATerm t);
static ATerm p_9 (ATerm z_25, ATerm a_26, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_1_0 (ATerm a_133 (ATerm), ATerm t);
static ATerm d_104 (ATerm x_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_9 (ATerm f_26, ATerm t);
static ATerm s_9 (ATerm c_40, ATerm d_40, ATerm t);
static ATerm t_9 (ATerm a_42, ATerm b_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_105 (ATerm n_104, ATerm t);
static ATerm p_105 (ATerm r_104, ATerm s_104, ATerm t_104, ATerm t);
static ATerm q_105 (ATerm b_105, ATerm c_105, ATerm d_105, ATerm t);
static ATerm u_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_133 (ATerm), ATerm t);
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
static ATerm d_10 (ATerm c_68, ATerm d_68, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_10 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm t);
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
static ATerm v_9 (ATerm t_44, ATerm u_44, ATerm t);
ATerm foldr_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_124 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm t);
static ATerm e_10 (ATerm k_62, ATerm l_62, ATerm m_62, ATerm t);
ATerm lookup_table_0_1 (ATerm e_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_62, ATerm t_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm x_9 (ATerm p_62, ATerm q_62, ATerm t);
static ATerm y_9 (ATerm u_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_108 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_107 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_10 (ATerm n_62, ATerm o_62, ATerm t);
static ATerm a_10 (ATerm l_59, ATerm m_59, ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_127 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm parse_options_1_0 (ATerm r_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t);
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
ATerm annotation_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
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
  t = f_99(t);
  j_14 = t;
  t = i_14;
  t = e_99(t);
  k_14 = t;
  t = term_l_9;
  r_14 = t;
  t = (ATerm) ATinsert(CheckATermList(k_14), j_14);
  s_14 = t;
  t = SSL_mkterm(r_14, s_14);
  return(t);
}
ATerm alltd_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  static ATerm c_22 (ATerm t);
  static ATerm c_22 (ATerm t)
  {
    ATerm m_9 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_102(t);
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
ATerm appl_2_0 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm t)
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
  t = c_92(t);
  o_22 = t;
  t = n_22;
  t = d_92(t);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, o_22, p_22);
  i_3 = t;
  t = SSLsetAnnotations(i_3, l_22);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,u_25 = NULL,v_25 = NULL,b_26 = NULL,c_26 = NULL,g_26 = NULL,a_6 = NULL,y_5 = NULL;
  g_26 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      r_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_26);
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
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, b_26);
  y_5 = t;
  t = SSLsetAnnotations(y_5, u_25);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, p_25, c_26, r_25);
  a_6 = t;
  t = SSLsetAnnotations(a_6, o_25);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm h_26 = NULL,k_26 = NULL,l_26 = NULL,x_5 = NULL;
  l_26 = t;
  if(match_cons(t, sym_sort_1))
    {
      k_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, k_26);
  x_5 = t;
  t = SSLsetAnnotations(x_5, h_26);
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
ATerm skip_concrete_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,c_24 = NULL,g_24 = NULL,l_24 = NULL,q_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,b_6 = NULL,w_5 = NULL,v_5 = NULL,c_4 = NULL,b_4 = NULL;
  static ATerm r_29 (ATerm t);
  static ATerm r_29 (ATerm t)
  {
    static ATerm d_1 (ATerm t);
    static ATerm d_1 (ATerm t)
    {
      ATerm i_10 = t;
      int m_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
          o_29 = t;
          if(match_cons(t, sym_appl_2))
            {
              p_29 = ATgetArgument(t, 0);
              q_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm o_10 = t;
            int p_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_9 = NULL,j_10 = NULL,k_10 = NULL,n_10 = NULL,s_10 = NULL,t_10 = NULL,w_10 = NULL,h_6 = NULL,e_6 = NULL;
                t = SSLgetAnnotations(o_29);
                z_9 = t;
                t = p_29;
                if(match_cons(t, sym_prod_3))
                  {
                    k_10 = ATgetArgument(t, 0);
                    n_10 = ATgetArgument(t, 1);
                    s_10 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_29);
                j_10 = t;
                t = k_10;
                t = SRTS_one(e_1, t);
                t_10 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, t_10, n_10, s_10);
                e_6 = t;
                t = SSLsetAnnotations(e_6, j_10);
                w_10 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, w_10, q_29);
                h_6 = t;
                t = SSLsetAnnotations(h_6, z_9);
                t = g_99(t);
                LocalPopChoice(p_10);
              }
            else
              {
                t = o_10;
                {
                  ATerm o_11 = NULL,u_11 = NULL,w_11 = NULL,x_11 = NULL,c_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
                  t = SSLgetAnnotations(o_29);
                  o_11 = t;
                  t = p_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      w_11 = ATgetArgument(t, 0);
                      x_11 = ATgetArgument(t, 1);
                      c_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_29);
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
                  t = (ATerm) ATmakeAppl(sym_appl_2, f_12, q_29);
                  k_7 = t;
                  t = SSLsetAnnotations(k_7, o_11);
                  t = g_99(t);
                }
              }
          }
          LocalPopChoice(m_10);
        }
      else
        {
          t = i_10;
          t = annotation_2_0(g_99, r_29, t);
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
  t = r_29(t);
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
static ATerm z_8 (ATerm n_98 (ATerm), ATerm n_21, ATerm m_21, ATerm t)
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
  t = map_1_0(n_98, t);
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
ATerm ReplCons_1_0 (ATerm u_98 (ATerm), ATerm t)
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
              t = z_8(u_98, v_10, z_10, t);
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
                      t = z_8(u_98, v_10, z_10, t);
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
                            t = u_98(t);
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
                              t = u_98(t);
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
                  t = z_8(u_98, v_10, z_10, t);
                }
            }
          else
            {
              t = u_10;
              t = z_8(u_98, v_10, z_10, t);
            }
        }
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = ReplConsConc_1_0(u_98, t);
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
ATerm implodeAsfix_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm i_30 = NULL;
  static ATerm z_34 (ATerm t);
  static ATerm z_34 (ATerm t)
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
              ATerm s_34 = NULL,u_34 = NULL,v_34 = NULL;
              u_34 = t;
              if(match_cons(t, sym_appl_2))
                {
                  v_34 = ATgetArgument(t, 0);
                  s_34 = ATgetArgument(t, 1);
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = u_34;
                        t = i_99(t);
                        t = u_34;
                        t = skip_concrete_1_0(z_34, t);
                        LocalPopChoice(x_16);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm o_17 = NULL,s_17 = NULL,g_10 = NULL;
                          t = SSLgetAnnotations(u_34);
                          o_17 = t;
                          t = s_34;
                          t = filter_1_0(r_1, t);
                          s_17 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, v_34, s_17);
                          g_10 = t;
                          t = SSLsetAnnotations(g_10, o_17);
                          {
                            ATerm y_16 = t;
                            int z_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = z_34(t);
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
                                      t = ReplCons_1_0(z_34, t);
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
                                            t = z_34(t);
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
                                                  t = z_34(t);
                                                  LocalPopChoice(i_17);
                                                }
                                              else
                                                {
                                                  t = h_17;
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
                        ATerm j_17 = t;
                        int k_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = u_34;
                            t = i_99(t);
                            t = u_34;
                            t = skip_concrete_1_0(z_34, t);
                            LocalPopChoice(k_17);
                          }
                        else
                          {
                            t = j_17;
                            {
                              ATerm q_23 = NULL,s_23 = NULL,l_10 = NULL;
                              t = SSLgetAnnotations(u_34);
                              q_23 = t;
                              t = v_34;
                              t = map_1_0(z_34, t);
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
                      t = u_34;
                      t = i_99(t);
                      t = u_34;
                      t = skip_concrete_1_0(z_34, t);
                    }
                }
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = SRTS_all(z_34, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      i_30 = ATgetArgument(t, 0);
      {
        ATerm l_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_30;
  t = z_34(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm w_35 = NULL,z_35 = NULL,c_36 = NULL,d_36 = NULL,k_36 = NULL;
  w_35 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_35 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_35;
  if(match_cons(t, sym_prod_3))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
      {
        ATerm q_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_36;
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
          t = SSL_mkterm(b_24, k_36);
        }
      }
    else
      {
        t = r_17;
        {
          ATerm j_24 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              d_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_36;
          if(match_cons(t, sym_seq_1))
            {
              ATerm y_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_v_17;
          j_24 = t;
          t = SSL_mkterm(j_24, k_36);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(h_101, t);
    return(t);
  }
  t = h_101(t);
  t = SRTS_all(t_1, t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm j_37 = NULL,o_37 = NULL,p_37 = NULL,u_37 = NULL,v_37 = NULL,e_41 = NULL,f_41 = NULL,h_41 = NULL;
  static ATerm i_43 (ATerm t);
  static ATerm i_43 (ATerm t)
  {
    ATerm p_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
    if(match_cons(t, sym__2))
      {
        p_41 = ATgetArgument(t, 0);
        u_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_41;
    if(match_cons(t, sym_alt_2))
      {
        s_41 = ATgetArgument(t, 0);
        t_41 = ATgetArgument(t, 1);
        {
          ATerm z_17 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_41;
              if(((p_37 != NULL) && (p_37 != t)))
                _fail(t);
              else
                p_37 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, u_41, not_null(v_37));
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
                    t = s_41;
                    if(((p_37 != NULL) && (p_37 != t)))
                      _fail(t);
                    else
                      p_37 = t;
                    t = t_41;
                    if(((u_37 != NULL) && (u_37 != t)))
                      _fail(t);
                    else
                      u_37 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, u_41, not_null(v_37));
                    LocalPopChoice(f_18);
                  }
                else
                  {
                    t = d_18;
                    {
                      ATerm t_42 = NULL,v_42 = NULL;
                      t = term_h_18;
                      v_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_41, term_h_18);
                      t = v_9(u_41, v_42, t);
                      t_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_41, t_42);
                      t = i_43(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = p_41;
        if(((p_37 != NULL) && (p_37 != t)))
          _fail(t);
        else
          p_37 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, u_41, not_null(v_37));
      }
    return(t);
  }
  e_41 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_41 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_25 = NULL,m_26 = NULL,n_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,e_27 = NULL,y_12 = NULL,x_12 = NULL,w_12 = NULL,v_12 = NULL,j_27 = NULL;
        t = SSLgetAnnotations(e_41);
        x_25 = t;
        t = f_41;
        if(match_cons(t, sym_prod_3))
          {
            n_26 = ATgetArgument(t, 0);
            r_26 = ATgetArgument(t, 1);
            s_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_41);
        m_26 = t;
        t = n_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_26 = ATgetFirst((ATermList) t);
            z_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_26);
        x_26 = t;
        t = y_26;
        if(match_cons(t, sym_cf_1))
          {
            j_27 = ATgetArgument(t, 0);
            {
              ATerm g_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_28 = NULL,u_12 = NULL;
                  t = SSLgetAnnotations(y_26);
                  g_28 = t;
                  t = j_27;
                  if(((p_37 != NULL) && (p_37 != t)))
                    _fail(t);
                  else
                    p_37 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, j_27);
                  u_12 = t;
                  t = SSLsetAnnotations(u_12, g_28);
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = g_19;
                  t = y_26;
                  if(((p_37 != NULL) && (p_37 != t)))
                    _fail(t);
                  else
                    p_37 = t;
                  t = y_26;
                }
            }
          }
        else
          {
            t = y_26;
            if(((p_37 != NULL) && (p_37 != t)))
              _fail(t);
            else
              p_37 = t;
            t = y_26;
          }
        b_27 = t;
        t = z_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_26), b_27);
        v_12 = t;
        t = SSLsetAnnotations(v_12, x_26);
        e_27 = t;
        t = r_26;
        if(match_cons(t, sym_cf_1))
          {
            v_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_26);
        u_26 = t;
        t = v_26;
        if(match_cons(t, sym_alt_2))
          {
            j_37 = ATgetArgument(t, 0);
            o_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, v_26);
        w_12 = t;
        t = SSLsetAnnotations(w_12, u_26);
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, e_27, w_26, s_26);
        x_12 = t;
        t = SSLsetAnnotations(x_12, m_26);
        t_26 = t;
        t = h_41;
        if(((v_37 != NULL) && (v_37 != t)))
          _fail(t);
        else
          v_37 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, t_26, h_41);
        y_12 = t;
        t = SSLsetAnnotations(y_12, x_25);
        LocalPopChoice(f_19);
      }
    else
      {
        t = d_19;
        {
          ATerm u_28 = NULL,z_28 = NULL,a_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,c_13 = NULL,b_13 = NULL,a_13 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(e_41);
          u_28 = t;
          t = f_41;
          if(match_cons(t, sym_prod_3))
            {
              a_29 = ATgetArgument(t, 0);
              c_29 = ATgetArgument(t, 1);
              d_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_41);
          z_28 = t;
          t = a_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_29 = ATgetFirst((ATermList) t);
              v_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_29);
          i_29 = t;
          t = u_29;
          if(((p_37 != NULL) && (p_37 != t)))
            _fail(t);
          else
            p_37 = t;
          t = v_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(v_29), u_29);
          z_12 = t;
          t = SSLsetAnnotations(z_12, i_29);
          w_29 = t;
          t = c_29;
          if(match_cons(t, sym_lex_1))
            {
              g_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_29);
          f_29 = t;
          t = g_29;
          if(match_cons(t, sym_alt_2))
            {
              j_37 = ATgetArgument(t, 0);
              o_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, g_29);
          a_13 = t;
          t = SSLsetAnnotations(a_13, f_29);
          h_29 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, w_29, h_29, d_29);
          b_13 = t;
          t = SSLsetAnnotations(b_13, z_28);
          e_29 = t;
          t = h_41;
          if(((v_37 != NULL) && (v_37 != t)))
            _fail(t);
          else
            v_37 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, e_29, h_41);
          c_13 = t;
          t = SSLsetAnnotations(c_13, u_28);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, j_37, o_37), term_h_18);
  t = i_43(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,m_45 = NULL;
  i_45 = t;
  if(match_cons(t, sym_sort_1))
    {
      j_45 = ATgetArgument(t, 0);
      {
        ATerm d_30 = NULL,f_14 = NULL;
        t = SSLgetAnnotations(i_45);
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, j_45);
        f_14 = t;
        t = SSLsetAnnotations(f_14, d_30);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          j_45 = ATgetArgument(t, 0);
          {
            ATerm m_30 = NULL,q_30 = NULL,g_14 = NULL;
            t = SSLgetAnnotations(i_45);
            m_30 = t;
            t = j_45;
            t = injective_alt_0_0(t);
            q_30 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, q_30);
            g_14 = t;
            t = SSLsetAnnotations(g_14, m_30);
          }
        }
      else
        {
          ATerm c_31 = NULL,j_31 = NULL,k_31 = NULL,l_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              j_45 = ATgetArgument(t, 0);
              m_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_45);
          c_31 = t;
          t = j_45;
          t = injective_alt_0_0(t);
          j_31 = t;
          t = m_45;
          t = injective_alt_0_0(t);
          k_31 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, j_31, k_31);
          l_14 = t;
          t = SSLsetAnnotations(l_14, c_31);
        }
    }
  return(t);
}
static ATerm q_59 (ATerm g_48, ATerm h_48, ATerm i_48, ATerm t_48, ATerm t)
{
  ATerm w_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,g_49 = NULL,j_49 = NULL,l_49 = NULL,p_49 = NULL,s_49 = NULL,y_14 = NULL,q_14 = NULL,p_14 = NULL;
  t = SSLgetAnnotations(t_48);
  w_48 = t;
  t = g_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_49 = ATgetFirst((ATermList) t);
      g_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_48);
  b_49 = t;
  t = c_49;
  if(match_cons(t, sym_varsym_1))
    {
      p_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_49);
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, p_49);
  p_14 = t;
  t = SSLsetAnnotations(p_14, l_49);
  s_49 = t;
  t = g_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_49), s_49);
  q_14 = t;
  t = SSLsetAnnotations(q_14, b_49);
  j_49 = t;
  t = i_48;
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
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, j_49, h_48, a_49);
  y_14 = t;
  t = SSLsetAnnotations(y_14, w_48);
  return(t);
}
static ATerm s_59 (ATerm y_49, ATerm z_49, ATerm a_50, ATerm b_50, ATerm t)
{
  ATerm e_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,p_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,k_15 = NULL,f_15 = NULL,s_51 = NULL;
  t = SSLgetAnnotations(b_50);
  e_50 = t;
  t = y_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_50 = ATgetFirst((ATermList) t);
      s_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_49);
  m_50 = t;
  t = p_50;
  if(match_cons(t, sym_sort_1))
    {
      s_51 = ATgetArgument(t, 0);
      {
        ATerm a_32 = NULL,b_15 = NULL;
        t = SSLgetAnnotations(p_50);
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, s_51);
        b_15 = t;
        t = SSLsetAnnotations(b_15, a_32);
      }
    }
  else
    {
      ATerm j_32 = NULL,q_32 = NULL,r_32 = NULL,t_32 = NULL,d_15 = NULL,c_15 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          s_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_50);
      j_32 = t;
      t = s_51;
      if(match_cons(t, sym_sort_1))
        {
          r_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_51);
      q_32 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, r_32);
      c_15 = t;
      t = SSLsetAnnotations(c_15, q_32);
      t_32 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, t_32);
      d_15 = t;
      t = SSLsetAnnotations(d_15, j_32);
    }
  t_50 = t;
  t = s_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_50), t_50);
  f_15 = t;
  t = SSLsetAnnotations(f_15, m_50);
  u_50 = t;
  t = z_49;
  t = injective_alt_0_0(t);
  k_50 = t;
  t = a_50;
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
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, u_50, k_50, l_50);
  k_15 = t;
  t = SSLsetAnnotations(k_15, e_50);
  return(t);
}
static ATerm t_59 (ATerm f_52, ATerm i_52, ATerm k_52, ATerm l_52, ATerm t)
{
  ATerm p_52 = NULL,w_52 = NULL,x_52 = NULL,a_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,g_53 = NULL,d_16 = NULL,s_15 = NULL;
  t = SSLgetAnnotations(l_52);
  p_52 = t;
  t = f_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_53 = ATgetFirst((ATermList) t);
      d_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_52);
  a_53 = t;
  t = c_53;
  {
    ATerm k_19 = t;
    if((PushChoice() == 0))
      {
        ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,l_15 = NULL;
        m_53 = t;
        if(match_cons(t, sym_lit_1))
          {
            l_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_53);
        k_53 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, l_53);
        l_15 = t;
        t = SSLsetAnnotations(l_15, k_53);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_19;
      }
  }
  e_53 = t;
  t = d_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_53), e_53);
  s_15 = t;
  t = SSLsetAnnotations(s_15, a_53);
  g_53 = t;
  t = i_52;
  {
    static ATerm x_59 (ATerm t);
    static ATerm x_59 (ATerm t)
    {
      ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
      n_57 = t;
      if(match_cons(t, sym_sort_1))
        {
          o_57 = ATgetArgument(t, 0);
          {
            ATerm c_33 = NULL,t_15 = NULL;
            t = SSLgetAnnotations(n_57);
            c_33 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, o_57);
            t_15 = t;
            t = SSLsetAnnotations(t_15, c_33);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              o_57 = ATgetArgument(t, 0);
              {
                ATerm r_33 = NULL,v_33 = NULL,u_15 = NULL;
                t = SSLgetAnnotations(n_57);
                r_33 = t;
                t = o_57;
                t = x_59(t);
                v_33 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, v_33);
                u_15 = t;
                t = SSLsetAnnotations(u_15, r_33);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  o_57 = ATgetArgument(t, 0);
                  {
                    ATerm f_34 = NULL,h_34 = NULL,v_15 = NULL;
                    t = SSLgetAnnotations(n_57);
                    f_34 = t;
                    t = o_57;
                    t = x_59(t);
                    h_34 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, h_34);
                    v_15 = t;
                    t = SSLsetAnnotations(v_15, f_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      o_57 = ATgetArgument(t, 0);
                      {
                        ATerm t_34 = NULL,h_35 = NULL,w_15 = NULL;
                        t = SSLgetAnnotations(n_57);
                        t_34 = t;
                        t = o_57;
                        t = x_59(t);
                        h_35 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, h_35);
                        w_15 = t;
                        t = SSLsetAnnotations(w_15, t_34);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          o_57 = ATgetArgument(t, 0);
                          {
                            ATerm q_35 = NULL,y_35 = NULL,x_15 = NULL;
                            t = SSLgetAnnotations(n_57);
                            q_35 = t;
                            t = o_57;
                            t = x_59(t);
                            y_35 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, y_35);
                            x_15 = t;
                            t = SSLsetAnnotations(x_15, q_35);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              o_57 = ATgetArgument(t, 0);
                              p_57 = ATgetArgument(t, 1);
                              {
                                ATerm m_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,z_15 = NULL,y_15 = NULL;
                                t = SSLgetAnnotations(n_57);
                                m_36 = t;
                                t = o_57;
                                t = x_59(t);
                                r_36 = t;
                                t = p_57;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    t_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(p_57);
                                s_36 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, t_36);
                                y_15 = t;
                                t = SSLsetAnnotations(y_15, s_36);
                                u_36 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_sep_2, r_36, u_36);
                                z_15 = t;
                                t = SSLsetAnnotations(z_15, m_36);
                              }
                            }
                          else
                            {
                              ATerm c_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,b_16 = NULL,a_16 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  o_57 = ATgetArgument(t, 0);
                                  p_57 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(n_57);
                              c_37 = t;
                              t = o_57;
                              t = x_59(t);
                              f_37 = t;
                              t = p_57;
                              if(match_cons(t, sym_lit_1))
                                {
                                  h_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(p_57);
                              g_37 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, h_37);
                              a_16 = t;
                              t = SSLsetAnnotations(a_16, g_37);
                              i_37 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, f_37, i_37);
                              b_16 = t;
                              t = SSLsetAnnotations(b_16, c_37);
                            }
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = x_59(t);
  }
  w_52 = t;
  t = k_52;
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
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, g_53, w_52, x_52);
  d_16 = t;
  t = SSLsetAnnotations(d_16, p_52);
  return(t);
}
static ATerm u_59 (ATerm w_57, ATerm x_57, ATerm y_57, ATerm z_57, ATerm t)
{
  ATerm a_58 = NULL,e_58 = NULL,e_16 = NULL;
  t = SSLgetAnnotations(z_57);
  a_58 = t;
  t = y_57;
  t = oncetd_1_0(d_2, t);
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, w_57, x_57, e_58);
  e_16 = t;
  t = SSLsetAnnotations(e_16, a_58);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,x_49 = NULL,x_14 = NULL;
  x_49 = t;
  if(match_cons(t, sym_cons_1))
    {
      v_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_49);
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, v_49);
  x_14 = t;
  t = SSLsetAnnotations(x_14, u_49);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm t_51 = NULL,y_51 = NULL,e_52 = NULL,j_15 = NULL;
  e_52 = t;
  if(match_cons(t, sym_cons_1))
    {
      y_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_52);
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, y_51);
  j_15 = t;
  t = SSLsetAnnotations(j_15, t_51);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm q_57 = NULL,u_57 = NULL,v_57 = NULL,c_16 = NULL;
  v_57 = t;
  if(match_cons(t, sym_cons_1))
    {
      u_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_57);
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, u_57);
  c_16 = t;
  t = SSLsetAnnotations(c_16, q_57);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  if(match_string(t, "bracket"))
    {
      t = g_58;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = g_58;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,w_58 = NULL;
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
              n_58 = ATgetArgument(t, 0);
              i_58 = ATgetArgument(t, 1);
              t = p_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_58 = ATgetFirst((ATermList) t);
                  m_58 = (ATerm) ATgetNext((ATermList) t);
                  t = m_58;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = j_58;
                      if(match_cons(t, sym_cf_1))
                        {
                          k_58 = ATgetArgument(t, 0);
                          t = k_58;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              l_58 = ATgetArgument(t, 0);
                              h_58 = ATgetArgument(t, 1);
                              {
                                ATerm m_19 = t;
                                int n_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = q_59(p_58, q_58, w_58, o_58, t);
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
                                          t = s_59(p_58, q_58, w_58, o_58, t);
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
                                                t = t_59(p_58, q_58, w_58, o_58, t);
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
                                                      t = n_58;
                                                      if((l_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = i_58;
                                                      if((h_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = o_58;
                                                      LocalPopChoice(a_20);
                                                    }
                                                  else
                                                    {
                                                      t = z_19;
                                                      t = u_59(p_58, q_58, w_58, o_58, t);
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
                                  t = q_59(p_58, q_58, w_58, o_58, t);
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
                                        t = s_59(p_58, q_58, w_58, o_58, t);
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
                                              t = t_59(p_58, q_58, w_58, o_58, t);
                                              LocalPopChoice(h_20);
                                            }
                                          else
                                            {
                                              t = g_20;
                                              t = u_59(p_58, q_58, w_58, o_58, t);
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
                              t = q_59(p_58, q_58, w_58, o_58, t);
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
                                    t = s_59(p_58, q_58, w_58, o_58, t);
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
                                          t = t_59(p_58, q_58, w_58, o_58, t);
                                          LocalPopChoice(t_20);
                                        }
                                      else
                                        {
                                          t = q_20;
                                          t = u_59(p_58, q_58, w_58, o_58, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = j_58;
                      {
                        ATerm u_20 = t;
                        int v_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = q_59(p_58, q_58, w_58, o_58, t);
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
                                  t = s_59(p_58, q_58, w_58, o_58, t);
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
                                        t = t_59(p_58, q_58, w_58, o_58, t);
                                        LocalPopChoice(p_21);
                                      }
                                    else
                                      {
                                        t = j_21;
                                        t = u_59(p_58, q_58, w_58, o_58, t);
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
                      t = q_59(p_58, q_58, w_58, o_58, t);
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
                            t = s_59(p_58, q_58, w_58, o_58, t);
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
                                  t = t_59(p_58, q_58, w_58, o_58, t);
                                  LocalPopChoice(g_22);
                                }
                              else
                                {
                                  t = f_22;
                                  t = u_59(p_58, q_58, w_58, o_58, t);
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
                  n_58 = ATgetArgument(t, 0);
                  t = p_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_58 = ATgetFirst((ATermList) t);
                      m_58 = (ATerm) ATgetNext((ATermList) t);
                      t = m_58;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = j_58;
                          if(match_cons(t, sym_cf_1))
                            {
                              k_58 = ATgetArgument(t, 0);
                              t = k_58;
                              if(match_cons(t, sym_iter_1))
                                {
                                  l_58 = ATgetArgument(t, 0);
                                  {
                                    ATerm i_22 = t;
                                    int j_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = q_59(p_58, q_58, w_58, o_58, t);
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
                                              t = s_59(p_58, q_58, w_58, o_58, t);
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
                                                    t = t_59(p_58, q_58, w_58, o_58, t);
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
                                                          t = n_58;
                                                          if((l_58 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = o_58;
                                                          LocalPopChoice(z_22);
                                                        }
                                                      else
                                                        {
                                                          t = v_22;
                                                          t = u_59(p_58, q_58, w_58, o_58, t);
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
                                      t = q_59(p_58, q_58, w_58, o_58, t);
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
                                            t = s_59(p_58, q_58, w_58, o_58, t);
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
                                                  t = t_59(p_58, q_58, w_58, o_58, t);
                                                  LocalPopChoice(h_23);
                                                }
                                              else
                                                {
                                                  t = f_23;
                                                  t = u_59(p_58, q_58, w_58, o_58, t);
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
                                  t = q_59(p_58, q_58, w_58, o_58, t);
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
                                        t = s_59(p_58, q_58, w_58, o_58, t);
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
                                              t = t_59(p_58, q_58, w_58, o_58, t);
                                              LocalPopChoice(r_23);
                                            }
                                          else
                                            {
                                              t = p_23;
                                              t = u_59(p_58, q_58, w_58, o_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = j_58;
                          {
                            ATerm t_23 = t;
                            int u_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = q_59(p_58, q_58, w_58, o_58, t);
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
                                      t = s_59(p_58, q_58, w_58, o_58, t);
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
                                            t = t_59(p_58, q_58, w_58, o_58, t);
                                            LocalPopChoice(y_23);
                                          }
                                        else
                                          {
                                            t = x_23;
                                            t = u_59(p_58, q_58, w_58, o_58, t);
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
                          t = q_59(p_58, q_58, w_58, o_58, t);
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
                                t = s_59(p_58, q_58, w_58, o_58, t);
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
                                      t = t_59(p_58, q_58, w_58, o_58, t);
                                      LocalPopChoice(k_24);
                                    }
                                  else
                                    {
                                      t = i_24;
                                      t = u_59(p_58, q_58, w_58, o_58, t);
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
                        t = q_59(p_58, q_58, w_58, o_58, t);
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
                              t = s_59(p_58, q_58, w_58, o_58, t);
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
                                    t = t_59(p_58, q_58, w_58, o_58, t);
                                    LocalPopChoice(w_25);
                                  }
                                else
                                  {
                                    t = t_25;
                                    t = u_59(p_58, q_58, w_58, o_58, t);
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
                    int i_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = q_59(p_58, q_58, w_58, o_58, t);
                        LocalPopChoice(i_26);
                      }
                    else
                      {
                        t = y_25;
                        {
                          ATerm o_26 = t;
                          int p_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_59(p_58, q_58, w_58, o_58, t);
                              LocalPopChoice(p_26);
                            }
                          else
                            {
                              t = o_26;
                              {
                                ATerm q_26 = t;
                                int c_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = t_59(p_58, q_58, w_58, o_58, t);
                                    LocalPopChoice(c_27);
                                  }
                                else
                                  {
                                    t = q_26;
                                    {
                                      ATerm d_27 = t;
                                      int f_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = u_59(p_58, q_58, w_58, o_58, t);
                                          LocalPopChoice(f_27);
                                        }
                                      else
                                        {
                                          t = d_27;
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
                    ATerm g_27 = t;
                    int h_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = q_59(p_58, q_58, w_58, o_58, t);
                        LocalPopChoice(h_27);
                      }
                    else
                      {
                        t = g_27;
                        {
                          ATerm i_27 = t;
                          int k_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_59(p_58, q_58, w_58, o_58, t);
                              LocalPopChoice(k_27);
                            }
                          else
                            {
                              t = i_27;
                              {
                                ATerm l_27 = t;
                                int m_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = t_59(p_58, q_58, w_58, o_58, t);
                                    LocalPopChoice(m_27);
                                  }
                                else
                                  {
                                    t = l_27;
                                    t = u_59(p_58, q_58, w_58, o_58, t);
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
                ATerm n_27 = t;
                int o_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = q_59(p_58, q_58, w_58, o_58, t);
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
                          t = s_59(p_58, q_58, w_58, o_58, t);
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
                                t = t_59(p_58, q_58, w_58, o_58, t);
                                LocalPopChoice(s_27);
                              }
                            else
                              {
                                t = r_27;
                                t = u_59(p_58, q_58, w_58, o_58, t);
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
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_59(p_58, q_58, w_58, o_58, t);
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            {
              ATerm v_27 = t;
              int w_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_59(p_58, q_58, w_58, o_58, t);
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
                        t = t_59(p_58, q_58, w_58, o_58, t);
                        LocalPopChoice(y_27);
                      }
                    else
                      {
                        t = x_27;
                        t = u_59(p_58, q_58, w_58, o_58, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  static ATerm f_2 (ATerm t);
  static ATerm f_2 (ATerm t)
  {
    t = bottomup_1_0(i_101, t);
    return(t);
  }
  t = SRTS_all(f_2, t);
  t = i_101(t);
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
  ATerm f_62 = NULL,g_62 = NULL,i_62 = NULL,w_62 = NULL,z_62 = NULL,a_63 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      i_62 = ATgetArgument(t, 0);
      a_63 = ATgetArgument(t, 1);
      t = a_63;
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
                  w_62 = ATgetArgument(t, 0);
                  z_62 = ATgetArgument(t, 1);
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
              t = a_63;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  w_62 = ATgetArgument(t, 0);
                  z_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, w_62, (ATerm) ATmakeAppl(sym_Conc_2, z_62, a_63));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          i_62 = ATgetArgument(t, 0);
          a_63 = ATgetArgument(t, 1);
          g_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_62;
      if(match_cons(t, sym_Conc_3))
        {
          w_62 = ATgetArgument(t, 0);
          z_62 = ATgetArgument(t, 1);
          f_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, w_62, z_62, (ATerm) ATmakeAppl(sym_Conc_3, f_62, a_63, g_62));
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
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
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,t_37 = NULL,d_38 = NULL,j_38 = NULL,k_38 = NULL,d_17 = NULL;
              v_66 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  w_66 = ATgetArgument(t, 0);
                  x_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_66);
              t_37 = t;
              t = w_66;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_38 = ATgetFirst((ATermList) t);
                  k_38 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, j_38), k_38);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      j_38 = ATgetArgument(t, 0);
                      k_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, j_38, (ATerm) ATmakeAppl(sym_Ins_1, k_38));
                }
              d_38 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, d_38, x_66);
              d_17 = t;
              t = SSLsetAnnotations(d_17, t_37);
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
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_67 = NULL,w_67 = NULL,x_67 = NULL,e_39 = NULL,k_39 = NULL,e_17 = NULL;
        t_67 = t;
        if(match_cons(t, sym_Conc_2))
          {
            w_67 = ATgetArgument(t, 0);
            x_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_67);
        e_39 = t;
        t = x_67;
        t = conc_to_cons_0_0(t);
        k_39 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, w_67, k_39);
        e_17 = t;
        t = SSLsetAnnotations(e_17, e_39);
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
  }
  {
    ATerm f_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_67 = NULL,z_67 = NULL,e_68 = NULL,g_68 = NULL,h_68 = NULL,f_17 = NULL;
            t = CTC2_0_0(t);
            h_68 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_67 = ATgetFirst((ATermList) t);
                e_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_68);
            y_67 = t;
            t = z_67;
            t = conc_to_cons_0_0(t);
            g_68 = t;
            t = (ATerm) ATinsert(CheckATermList(e_68), g_68);
            f_17 = t;
            t = SSLsetAnnotations(f_17, y_67);
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm j_68 = NULL;
              if(match_cons(t, sym_Ins_1))
                {
                  j_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, j_68);
            }
          }
        LocalPopChoice(h_28);
      }
    else
      {
        t = f_28;
      }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm h_70 = NULL,k_70 = NULL,m_70 = NULL,o_70 = NULL,t_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      t_70 = ATgetArgument(t, 0);
      y_70 = ATgetArgument(t, 1);
      {
        ATerm k_28 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = t_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_70 = ATgetFirst((ATermList) t);
      x_70 = (ATerm) ATgetNext((ATermList) t);
      t = x_70;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_70;
          if(match_cons(t, sym_opt_1))
            {
              z_70 = ATgetArgument(t, 0);
              t = z_70;
              if((v_70 != t))
                {
                  _fail(t);
                }
              t = term_l_28;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  z_70 = ATgetArgument(t, 0);
                  t = v_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      w_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_70;
                  if(match_cons(t, sym_opt_1))
                    {
                      a_71 = ATgetArgument(t, 0);
                      t = a_71;
                      if((w_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_l_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          a_71 = ATgetArgument(t, 0);
                          t = a_71;
                          if((w_70 != t))
                            {
                              _fail(t);
                            }
                          t = term_m_28;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              a_71 = ATgetArgument(t, 0);
                              {
                                ATerm n_28 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = a_71;
                          if((w_70 != t))
                            {
                              _fail(t);
                            }
                          t = term_m_28;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      z_70 = ATgetArgument(t, 0);
                      t = z_70;
                      if((v_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_m_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          z_70 = ATgetArgument(t, 0);
                          {
                            ATerm o_28 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = z_70;
                      if((v_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_m_28;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_28 = ATgetFirst((ATermList) t);
              h_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_70;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = y_70;
              {
                ATerm q_28 = t;
                int r_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm s_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_28);
                    t = term_t_28;
                  }
                else
                  {
                    t = q_28;
                    if(match_cons(t, sym_cf_1))
                      {
                        z_70 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = z_70;
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm v_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_t_28;
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_28 = ATgetFirst((ATermList) t);
                  k_70 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_70;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = y_70;
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm b_29 = ATgetArgument(t, 0);
                            ATerm j_29 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_28);
                        t = term_t_28;
                      }
                    else
                      {
                        t = x_28;
                        if(match_cons(t, sym_cf_1))
                          {
                            z_70 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = z_70;
                        {
                          ATerm k_29 = t;
                          int l_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_1))
                                {
                                  ATerm m_29 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(l_29);
                              t = term_t_28;
                            }
                          else
                            {
                              t = k_29;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm n_29 = ATgetArgument(t, 0);
                                  ATerm s_29 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = term_t_28;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_29 = ATgetFirst((ATermList) t);
                      m_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = m_70;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_29 = ATgetFirst((ATermList) t);
                      o_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_70;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = y_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      z_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_70;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm y_29 = ATgetArgument(t, 0);
                      ATerm z_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_t_28;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_70;
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm c_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(b_30);
            t = term_e_30;
          }
        else
          {
            t = a_30;
            if(match_cons(t, sym_cf_1))
              {
                z_70 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_70;
            if(match_cons(t, sym_opt_1))
              {
                ATerm f_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_e_30;
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  static ATerm w_71 (ATerm t);
  static ATerm w_71 (ATerm t)
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_102(t);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        t = SRTS_one(w_71, t);
      }
    return(t);
  }
  t = w_71(t);
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      j_72 = ATgetArgument(t, 0);
      k_72 = ATgetArgument(t, 1);
      {
        ATerm j_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = k_72;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm n_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_30);
        t = term_o_30;
      }
    else
      {
        t = k_30;
        {
          ATerm p_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm s_30 = ATgetArgument(t, 0);
                  ATerm t_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(r_30);
              t = term_o_30;
            }
          else
            {
              t = p_30;
              if(match_cons(t, sym_cf_1))
                {
                  l_72 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_72;
              {
                ATerm u_30 = t;
                int v_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm w_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(v_30);
                    t = term_o_30;
                  }
                else
                  {
                    t = u_30;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm x_30 = ATgetArgument(t, 0);
                        ATerm y_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_o_30;
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
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_41 = NULL,l_41 = NULL,l_42 = NULL,n_42 = NULL,m_17 = NULL;
            t = SSLgetAnnotations(q_74);
            i_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, o_74, p_74);
            m_17 = t;
            t = SSLsetAnnotations(m_17, i_41);
            l_41 = t;
            if(match_cons(t, sym_appl_2))
              {
                l_42 = ATgetArgument(t, 0);
                n_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm b_31 = t;
              int d_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_42;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  LocalPopChoice(d_31);
                }
              else
                {
                  t = b_31;
                  {
                    ATerm h_43 = NULL;
                    t = l_42;
                    {
                      ATerm e_31 = t;
                      int f_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_43 = NULL,o_43 = NULL;
                          if(match_cons(t, sym_prod_3))
                            {
                              ATerm g_31 = ATgetArgument(t, 0);
                              ATerm h_31 = ATgetArgument(t, 1);
                              m_43 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = m_43;
                          {
                            static ATerm k_2 (ATerm t);
                            static ATerm k_2 (ATerm t)
                            {
                              if(match_cons(t, sym_cons_1))
                                {
                                  if(((o_43 != NULL) && (o_43 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    o_43 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1_0(k_2, t);
                          }
                          t = not_null(o_43);
                          LocalPopChoice(f_31);
                        }
                      else
                        {
                          t = e_31;
                          t = Constr1_0_0(t);
                        }
                    }
                    h_43 = t;
                    t = SSL_mkterm(h_43, n_42);
                  }
                }
            }
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
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
ATerm filter_1_0 (ATerm w_115 (ATerm), ATerm t)
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
        ATerm i_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_43 = NULL,d_44 = NULL,h_44 = NULL,p_17 = NULL;
            t = SSLgetAnnotations(u_75);
            v_43 = t;
            t = v_75;
            t = w_115(t);
            d_44 = t;
            t = w_75;
            t = filter_1_0(w_115, t);
            h_44 = t;
            t = (ATerm) ATinsert(CheckATermList(h_44), d_44);
            p_17 = t;
            t = SSLsetAnnotations(p_17, v_43);
            LocalPopChoice(l_31);
          }
        else
          {
            t = i_31;
            t = w_75;
            t = filter_1_0(w_115, t);
          }
      }
    }
  return(t);
}
static ATerm w_81 (ATerm t_77, ATerm t)
{
  static ATerm y_81 (ATerm t);
  static ATerm y_81 (ATerm t)
  {
    ATerm u_77 = NULL,v_77 = NULL,x_77 = NULL,y_77 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
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
        ATerm m_31 = ATgetArgument(t, 0);
        x_77 = ATgetArgument(t, 1);
        {
          ATerm n_31 = ATgetArgument(t, 2);
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
        ATerm o_31 = ATgetArgument(t, 0);
        ATerm p_31 = ATgetArgument(t, 1);
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
            c_79 = ATgetFirst((ATermList) t);
            d_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_79;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_79 = ATgetFirst((ATermList) t);
            f_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_79;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm p_79 = NULL,q_79 = NULL;
            t = d_78;
            t = y_81(t);
            p_79 = t;
            t = e_79;
            t = y_81(t);
            q_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_79), (ATerm) ATinsert(ATempty, c_79)), p_79);
            t = concat_0_0(t);
          }
        else
          {
            ATerm x_79 = NULL,y_79 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_79 = ATgetFirst((ATermList) t);
                h_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_79;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_79 = ATgetFirst((ATermList) t);
                j_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_79;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_78;
            t = y_81(t);
            x_79 = t;
            t = i_79;
            t = y_81(t);
            y_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_79), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_79), e_79), c_79)), x_79);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = t_77;
  t = y_81(t);
  return(t);
}
static ATerm x_81 (ATerm z_79, ATerm t)
{
  static ATerm z_81 (ATerm t);
  static ATerm z_81 (ATerm t)
  {
    ATerm c_80 = NULL,d_80 = NULL,f_80 = NULL,g_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL;
    c_80 = t;
    if(match_cons(t, sym_appl_2))
      {
        d_80 = ATgetArgument(t, 0);
        j_80 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = d_80;
    if(match_cons(t, sym_prod_3))
      {
        ATerm q_31 = ATgetArgument(t, 0);
        f_80 = ATgetArgument(t, 1);
        {
          ATerm r_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = f_80;
    if(match_cons(t, sym_cf_1))
      {
        g_80 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = g_80;
    if(match_cons(t, sym_iter_1))
      {
        ATerm s_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = j_80;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_80 = ATgetFirst((ATermList) t);
        l_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = l_80;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, k_80);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_80 = ATgetFirst((ATermList) t);
            n_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_80;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm u_80 = NULL,v_80 = NULL;
            t = k_80;
            t = z_81(t);
            u_80 = t;
            t = m_80;
            t = z_81(t);
            v_80 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, v_80), u_80);
            t = concat_0_0(t);
          }
        else
          {
            ATerm a_81 = NULL,b_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_80 = ATgetFirst((ATermList) t);
                p_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_80;
            t = z_81(t);
            a_81 = t;
            t = o_80;
            t = z_81(t);
            b_81 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_81), (ATerm) ATinsert(ATempty, m_80)), a_81);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = z_79;
  t = z_81(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL;
  e_81 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_81 = ATgetArgument(t, 0);
      p_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_81;
  if(match_cons(t, sym_prod_3))
    {
      g_81 = ATgetArgument(t, 0);
      l_81 = ATgetArgument(t, 1);
      {
        ATerm t_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = l_81;
  if(match_cons(t, sym_cf_1))
    {
      m_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_81;
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm w_31 = ATgetArgument(t, 0);
            ATerm x_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_31);
        t = p_81;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_81 = ATgetFirst((ATermList) t);
            r_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_81;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_81;
            {
              ATerm y_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_81(e_81, t);
                  LocalPopChoice(z_31);
                }
              else
                {
                  t = y_31;
                  t = (ATerm) ATinsert(ATempty, q_81);
                }
            }
          }
        else
          {
            t = g_81;
            t = w_81(e_81, t);
          }
      }
    else
      {
        t = u_31;
        {
          ATerm b_32 = t;
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
              t = g_81;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = p_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_81 = ATgetFirst((ATermList) t);
                      k_81 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = h_81;
                  if(match_cons(t, sym_cf_1))
                    {
                      i_81 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_81;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm f_32 = ATgetArgument(t, 0);
                      ATerm g_32 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = k_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_81;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_81 = ATgetFirst((ATermList) t);
                      r_81 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = r_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_81;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = b_32;
              {
                ATerm h_32 = t;
                int i_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm k_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_32);
                    t = p_81;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        q_81 = ATgetFirst((ATermList) t);
                        r_81 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = r_81;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = g_81;
                        {
                          ATerm l_32 = t;
                          int m_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = x_81(e_81, t);
                              LocalPopChoice(m_32);
                            }
                          else
                            {
                              t = l_32;
                              t = (ATerm) ATinsert(ATempty, q_81);
                            }
                        }
                      }
                    else
                      {
                        t = g_81;
                        t = x_81(e_81, t);
                      }
                  }
                else
                  {
                    t = h_32;
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm n_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = g_81;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = p_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            h_81 = ATgetFirst((ATermList) t);
                            k_81 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = h_81;
                        if(match_cons(t, sym_cf_1))
                          {
                            i_81 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = i_81;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm o_32 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = k_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = p_81;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            q_81 = ATgetFirst((ATermList) t);
                            r_81 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = r_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = q_81;
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
  ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_82 = ATgetFirst((ATermList) t);
      k_82 = (ATerm) ATgetNext((ATermList) t);
      t = k_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_82 = ATgetFirst((ATermList) t);
          i_82 = (ATerm) ATgetNext((ATermList) t);
          t = h_82;
          if(match_int(t, 34))
            {
              t = j_82;
              if(match_int(t, 92))
                {
                  ATerm p_32 = t;
                  int s_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_82 = NULL;
                      t = i_82;
                      t = De_Escape_0_0(t);
                      n_82 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_82), term_u_32);
                      LocalPopChoice(s_32);
                    }
                  else
                    {
                      t = p_32;
                      {
                        ATerm q_82 = NULL;
                        t = k_82;
                        t = De_Escape_0_0(t);
                        q_82 = t;
                        t = (ATerm) ATinsert(CheckATermList(q_82), j_82);
                      }
                    }
                }
              else
                {
                  ATerm t_82 = NULL;
                  t = k_82;
                  t = De_Escape_0_0(t);
                  t_82 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_82), j_82);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = j_82;
                  if(match_int(t, 92))
                    {
                      ATerm v_32 = t;
                      int w_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_82 = NULL;
                          t = i_82;
                          t = De_Escape_0_0(t);
                          v_82 = t;
                          t = (ATerm) ATinsert(CheckATermList(v_82), term_x_32);
                          LocalPopChoice(w_32);
                        }
                      else
                        {
                          t = v_32;
                          {
                            ATerm y_82 = NULL;
                            t = k_82;
                            t = De_Escape_0_0(t);
                            y_82 = t;
                            t = (ATerm) ATinsert(CheckATermList(y_82), j_82);
                          }
                        }
                    }
                  else
                    {
                      ATerm b_83 = NULL;
                      t = k_82;
                      t = De_Escape_0_0(t);
                      b_83 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_83), j_82);
                    }
                }
              else
                {
                  ATerm e_83 = NULL;
                  t = k_82;
                  t = De_Escape_0_0(t);
                  e_83 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_83), j_82);
                }
            }
        }
      else
        {
          ATerm h_83 = NULL;
          t = k_82;
          t = De_Escape_0_0(t);
          h_83 = t;
          t = (ATerm) ATinsert(CheckATermList(h_83), j_82);
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
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  q_83 = t;
  t = SSL_explode_string(q_83);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_83 = ATgetFirst((ATermList) t);
      u_83 = (ATerm) ATgetNext((ATermList) t);
      t = u_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_83 = ATgetFirst((ATermList) t);
          s_83 = (ATerm) ATgetNext((ATermList) t);
          t = r_83;
          if(match_int(t, 34))
            {
              t = t_83;
              if(match_int(t, 92))
                {
                  ATerm y_32 = t;
                  int z_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_83 = NULL;
                      t = s_83;
                      t = De_Escape_0_0(t);
                      x_83 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_83), term_u_32);
                      LocalPopChoice(z_32);
                    }
                  else
                    {
                      t = y_32;
                      {
                        ATerm a_84 = NULL;
                        t = u_83;
                        t = De_Escape_0_0(t);
                        a_84 = t;
                        t = (ATerm) ATinsert(CheckATermList(a_84), t_83);
                      }
                    }
                }
              else
                {
                  ATerm d_84 = NULL;
                  t = u_83;
                  t = De_Escape_0_0(t);
                  d_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_84), t_83);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = t_83;
                  if(match_int(t, 92))
                    {
                      ATerm a_33 = t;
                      int b_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_84 = NULL;
                          t = s_83;
                          t = De_Escape_0_0(t);
                          f_84 = t;
                          t = (ATerm) ATinsert(CheckATermList(f_84), term_x_32);
                          LocalPopChoice(b_33);
                        }
                      else
                        {
                          t = a_33;
                          {
                            ATerm i_84 = NULL;
                            t = u_83;
                            t = De_Escape_0_0(t);
                            i_84 = t;
                            t = (ATerm) ATinsert(CheckATermList(i_84), t_83);
                          }
                        }
                    }
                  else
                    {
                      ATerm l_84 = NULL;
                      t = u_83;
                      t = De_Escape_0_0(t);
                      l_84 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_84), t_83);
                    }
                }
              else
                {
                  ATerm o_84 = NULL;
                  t = u_83;
                  t = De_Escape_0_0(t);
                  o_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_84), t_83);
                }
            }
        }
      else
        {
          ATerm r_84 = NULL;
          t = u_83;
          t = De_Escape_0_0(t);
          r_84 = t;
          t = (ATerm) ATinsert(CheckATermList(r_84), t_83);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  p_83 = t;
  t = SSL_implode_string(p_83);
  return(t);
}
ATerm at_last_1_0 (ATerm v_108 (ATerm), ATerm t)
{
  static ATerm n_85 (ATerm t);
  static ATerm n_85 (ATerm t)
  {
    ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL;
    k_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_85 = ATgetFirst((ATermList) t);
        m_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_33 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_44 = NULL,w_17 = NULL;
          t = SSLgetAnnotations(k_85);
          s_44 = t;
          t = m_85;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(m_85), l_85);
          w_17 = t;
          t = SSLsetAnnotations(w_17, s_44);
          t = v_108(t);
          LocalPopChoice(e_33);
        }
      else
        {
          t = d_33;
          {
            ATerm t_45 = NULL,w_45 = NULL,x_17 = NULL;
            t = SSLgetAnnotations(k_85);
            t_45 = t;
            t = m_85;
            t = n_85(t);
            w_45 = t;
            t = (ATerm) ATinsert(CheckATermList(w_45), l_85);
            x_17 = t;
            t = SSLsetAnnotations(x_17, t_45);
          }
        }
    }
    return(t);
  }
  t = n_85(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(f_33) != AT_INT) || (ATgetInt((ATermInt) f_33) != 34)))
        _fail(t);
      {
        ATerm g_33 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(g_33) != AT_LIST) || !(ATisEmpty(g_33))))
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
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL;
  u_85 = t;
  t = SSL_explode_string(u_85);
  q_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_85 = ATgetFirst((ATermList) t);
      {
        ATerm h_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_85;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = q_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_33 = ATgetFirst((ATermList) t);
      s_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_85;
  t = at_last_1_0(l_2, t);
  r_85 = t;
  t = SSL_implode_string(r_85);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_33);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_33);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_33);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_33)), r_86), (ATerm) ATinsert(ATempty, term_m_33));
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_33)), t_86), (ATerm) ATinsert(ATempty, term_m_33));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_p_33);
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_33)), w_86), (ATerm) ATinsert(ATempty, term_q_33));
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
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_33)), d_87), c_87), (ATerm) ATinsert(ATempty, term_t_33));
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
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_33)), h_87), g_87), (ATerm) ATinsert(ATempty, term_t_33));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm x_33 = t;
                                      int y_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              n_86 = ATgetArgument(t, 0);
                                              {
                                                ATerm z_33 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(y_33);
                                          {
                                            ATerm j_87 = NULL;
                                            t = n_86;
                                            t = PpSym_0_0(t);
                                            j_87 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_34)), j_87);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = x_33;
                                          {
                                            ATerm b_34 = t;
                                            int c_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    n_86 = ATgetArgument(t, 0);
                                                    o_86 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_34 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(c_34);
                                                {
                                                  ATerm n_87 = NULL,o_87 = NULL;
                                                  t = n_86;
                                                  t = PpSym_0_0(t);
                                                  n_87 = t;
                                                  t = o_86;
                                                  t = PpSym_0_0(t);
                                                  o_87 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_34)), o_87), n_87);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = b_34;
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
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_87), (ATerm) ATinsert(ATempty, term_e_34)), r_87);
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
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_87), (ATerm) ATinsert(ATempty, term_g_34)), v_87);
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
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_88), (ATerm) ATinsert(ATempty, term_i_34)), z_87);
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
                                                                      ATerm e_46 = NULL;
                                                                      t = n_86;
                                                                      {
                                                                        ATerm j_34 = t;
                                                                        int k_34 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = de_quote_0_0(t);
                                                                            t = de_escape_0_0(t);
                                                                            LocalPopChoice(k_34);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = j_34;
                                                                          }
                                                                      }
                                                                      e_46 = t;
                                                                      t = (ATerm) ATinsert(ATempty, e_46);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm l_34 = t;
                                                                    int m_34 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            n_86 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm n_34 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(m_34);
                                                                        {
                                                                          ATerm m_46 = NULL;
                                                                          t = n_86;
                                                                          {
                                                                            ATerm o_34 = t;
                                                                            int p_34 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = de_quote_0_0(t);
                                                                                t = de_escape_0_0(t);
                                                                                LocalPopChoice(p_34);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = o_34;
                                                                              }
                                                                          }
                                                                          m_46 = t;
                                                                          t = (ATerm) ATinsert(ATempty, m_46);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_34;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_q_34);
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
    ATerm r_34 = t;
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
        t = r_34;
      }
  }
  t = PpSym_0_0(t);
  v_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_34)), v_88), (ATerm) ATinsert(ATempty, term_w_34));
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
      ATerm x_34 = ATgetArgument(t, 0);
      o_89 = ATgetArgument(t, 1);
      {
        ATerm y_34 = ATgetArgument(t, 2);
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
                  ATerm a_35 = t;
                  int b_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_89(o_89, r_89, l_89, t);
                      LocalPopChoice(b_35);
                    }
                  else
                    {
                      t = a_35;
                      {
                        ATerm c_35 = t;
                        int d_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_89(o_89, r_89, l_89, t);
                            LocalPopChoice(d_35);
                          }
                        else
                          {
                            t = c_35;
                            t = s_89;
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
          else
            {
              ATerm g_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_89(o_89, r_89, l_89, t);
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = g_35;
                  t = w_89(o_89, r_89, l_89, t);
                }
            }
        }
      else
        {
          t = o_89;
          {
            ATerm j_35 = t;
            int k_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_89(o_89, r_89, l_89, t);
                LocalPopChoice(k_35);
              }
            else
              {
                t = j_35;
                t = w_89(o_89, r_89, l_89, t);
              }
          }
        }
    }
  else
    {
      t = o_89;
      {
        ATerm l_35 = t;
        int m_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_89(o_89, r_89, l_89, t);
            LocalPopChoice(m_35);
          }
        else
          {
            t = l_35;
            t = w_89(o_89, r_89, l_89, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t)
{
  static ATerm x_89 (ATerm t);
  static ATerm x_89 (ATerm t)
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_100(t);
        t = x_89(t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = i_100(t);
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
      ATerm p_35 = ATgetArgument(t, 0);
      m_90 = ATgetArgument(t, 1);
      {
        ATerm r_35 = ATgetArgument(t, 2);
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
          t = term_s_35;
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
ATerm at_end_1_0 (ATerm k_108 (ATerm), ATerm t)
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
          ATerm z_46 = NULL,c_47 = NULL,e_18 = NULL;
          t = SSLgetAnnotations(h_91);
          z_46 = t;
          t = g_91;
          t = i_91(t);
          c_47 = t;
          t = (ATerm) ATinsert(CheckATermList(c_47), f_91);
          e_18 = t;
          t = SSLsetAnnotations(e_18, z_46);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_91;
        t = k_108(t);
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
  static ATerm m_92 (ATerm t);
  static ATerm m_92 (ATerm t)
  {
    ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL;
    j_92 = t;
    if(match_cons(t, sym_appl_2))
      {
        h_92 = ATgetArgument(t, 0);
        i_92 = ATgetArgument(t, 1);
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_47 = NULL,m_47 = NULL,p_47 = NULL,g_18 = NULL;
              t = SSLgetAnnotations(j_92);
              m_47 = t;
              t = i_92;
              t = map_1_0(m_92, t);
              p_47 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, h_92, p_47);
              g_18 = t;
              t = SSLsetAnnotations(g_18, m_47);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm v_35 = ATgetArgument(t, 0);
                  l_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_47;
              t = concat_0_0(t);
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              t = (ATerm) ATinsert(ATempty, j_92);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, j_92);
      }
    return(t);
  }
  t = m_92(t);
  t_91 = t;
  t = SSL_implode_string(t_91);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm e_93 = NULL,g_93 = NULL,h_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
  k_93 = t;
  if(match_cons(t, sym_appl_2))
    {
      l_93 = ATgetArgument(t, 0);
      {
        ATerm x_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_93;
  if(match_cons(t, sym_prod_3))
    {
      m_93 = ATgetArgument(t, 0);
      n_93 = ATgetArgument(t, 1);
      {
        ATerm a_36 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_93;
  {
    ATerm b_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm f_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_36);
        t = m_93;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_93 = ATgetFirst((ATermList) t);
            g_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_93;
        if(match_cons(t, sym_lex_1))
          {
            ATerm g_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_93;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_93;
        t = yield_0_0(t);
      }
    else
      {
        t = b_36;
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm j_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(i_36);
              t = k_93;
              t = yield_0_0(t);
            }
          else
            {
              t = h_36;
              {
                ATerm l_36 = t;
                int n_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm o_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_36);
                    {
                      ATerm r_93 = NULL;
                      t = k_93;
                      t = yield_0_0(t);
                      r_93 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, r_93);
                    }
                  }
                else
                  {
                    t = l_36;
                    if(match_cons(t, sym_varsym_1))
                      {
                        o_93 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = o_93;
                    if(match_cons(t, sym_cf_1))
                      {
                        h_93 = ATgetArgument(t, 0);
                        t = h_93;
                        {
                          ATerm p_36 = t;
                          int q_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm v_36 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(q_36);
                              t = m_93;
                              {
                                ATerm w_36 = t;
                                int x_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_93 = NULL;
                                    t = k_93;
                                    t = yield_0_0(t);
                                    s_93 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, s_93);
                                    LocalPopChoice(x_36);
                                  }
                                else
                                  {
                                    t = w_36;
                                    {
                                      ATerm t_93 = NULL;
                                      t = k_93;
                                      t = yield_0_0(t);
                                      t_93 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, t_93);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = p_36;
                              {
                                ATerm y_36 = t;
                                int z_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm a_37 = ATgetArgument(t, 0);
                                        ATerm b_37 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(z_36);
                                    t = m_93;
                                    {
                                      ATerm d_37 = t;
                                      int e_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_93 = NULL;
                                          t = k_93;
                                          t = yield_0_0(t);
                                          u_93 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, u_93);
                                          LocalPopChoice(e_37);
                                        }
                                      else
                                        {
                                          t = d_37;
                                          {
                                            ATerm v_93 = NULL;
                                            t = k_93;
                                            t = yield_0_0(t);
                                            v_93 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, v_93);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = y_36;
                                    {
                                      ATerm k_37 = t;
                                      int l_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm m_37 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(l_37);
                                          t = m_93;
                                          {
                                            ATerm n_37 = t;
                                            int q_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm w_93 = NULL;
                                                t = k_93;
                                                t = yield_0_0(t);
                                                w_93 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, w_93);
                                                LocalPopChoice(q_37);
                                              }
                                            else
                                              {
                                                t = n_37;
                                                {
                                                  ATerm x_93 = NULL;
                                                  t = k_93;
                                                  t = yield_0_0(t);
                                                  x_93 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, x_93);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = k_37;
                                          {
                                            ATerm r_37 = t;
                                            int s_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm w_37 = ATgetArgument(t, 0);
                                                    ATerm x_37 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(s_37);
                                                t = m_93;
                                                {
                                                  ATerm y_37 = t;
                                                  int z_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_93 = NULL;
                                                      t = k_93;
                                                      t = yield_0_0(t);
                                                      y_93 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, y_93);
                                                      LocalPopChoice(z_37);
                                                    }
                                                  else
                                                    {
                                                      t = y_37;
                                                      {
                                                        ATerm z_93 = NULL;
                                                        t = k_93;
                                                        t = yield_0_0(t);
                                                        z_93 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, z_93);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = r_37;
                                                {
                                                  ATerm a_94 = NULL;
                                                  t = k_93;
                                                  t = yield_0_0(t);
                                                  a_94 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, a_94);
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
                        ATerm b_94 = NULL;
                        t = k_93;
                        t = yield_0_0(t);
                        b_94 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, b_94);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t)
{
  t = m_101(t);
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      t = downup2_2_0(m_101, n_101, t);
      return(t);
    }
    t = SRTS_all(r_2, t);
  }
  t = n_101(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm c_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      LocalPopChoice(e_38);
    }
  else
    {
      t = c_38;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL,r_99 = NULL;
  r_99 = t;
  if(match_cons(t, sym_appl_2))
    {
      p_99 = ATgetArgument(t, 0);
      q_99 = ATgetArgument(t, 1);
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,b_19 = NULL,p_18 = NULL;
            t = SSLgetAnnotations(r_99);
            n_53 = t;
            t = p_99;
            if(match_cons(t, sym_prod_3))
              {
                u_53 = ATgetArgument(t, 0);
                v_53 = ATgetArgument(t, 1);
                x_53 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_99);
            t_53 = t;
            t = u_53;
            t = filter_1_0(w_2, t);
            y_53 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, y_53, v_53, x_53);
            p_18 = t;
            t = SSLsetAnnotations(p_18, t_53);
            z_53 = t;
            t = q_99;
            t = filter_1_0(x_2, t);
            s_53 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, z_53, s_53);
            b_19 = t;
            t = SSLsetAnnotations(b_19, n_53);
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            t = r_99;
          }
      }
    }
  else
    {
      t = r_99;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm h_38 = t;
  if((PushChoice() == 0))
    {
      ATerm d_56 = NULL,e_56 = NULL,g_56 = NULL;
      e_56 = t;
      if(match_cons(t, sym_appl_2))
        {
          g_56 = ATgetArgument(t, 0);
          d_56 = ATgetArgument(t, 1);
          {
            ATerm f_61 = NULL,j_61 = NULL,s_61 = NULL,t_61 = NULL,v_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,l_18 = NULL,k_18 = NULL,j_18 = NULL,i_18 = NULL;
            t = SSLgetAnnotations(e_56);
            f_61 = t;
            t = g_56;
            if(match_cons(t, sym_prod_3))
              {
                s_61 = ATgetArgument(t, 0);
                t_61 = ATgetArgument(t, 1);
                v_61 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_56);
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
            t = (ATerm) ATmakeAppl(sym_appl_2, y_61, d_56);
            l_18 = t;
            t = SSLsetAnnotations(l_18, f_61);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              g_56 = ATgetArgument(t, 0);
              {
                ATerm d_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,n_18 = NULL,m_18 = NULL;
                t = SSLgetAnnotations(e_56);
                d_63 = t;
                t = g_56;
                if(match_cons(t, sym_opt_1))
                  {
                    h_63 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_56);
                g_63 = t;
                t = h_63;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, h_63);
                m_18 = t;
                t = SSLsetAnnotations(m_18, g_63);
                i_63 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, i_63);
                n_18 = t;
                t = SSLsetAnnotations(n_18, d_63);
              }
            }
          else
            {
              ATerm x_63 = NULL,o_18 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  g_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_56);
              x_63 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, g_56);
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
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(b_3, t);
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm p_38 = t;
  if((PushChoice() == 0))
    {
      ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL,c_19 = NULL;
      r_100 = t;
      if(match_cons(t, sym_lit_1))
        {
          q_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_100);
      p_100 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, q_100);
      c_19 = t;
      t = SSLsetAnnotations(c_19, p_100);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_38;
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
  ATerm i_95 = NULL,k_102 = NULL,e_102 = NULL,s_101 = NULL,j_101 = NULL,a_101 = NULL,v_100 = NULL,l_100 = NULL,b_100 = NULL,v_99 = NULL,r_95 = NULL;
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
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_95 = NULL,u_95 = NULL;
        t = term_a_39;
        t_95 = t;
        t = term_g_39;
        u_95 = t;
        t = term_h_39;
        t = a_10(t_95, u_95, t);
        t = r_95;
        t = topdown_1_0(v_2, t);
        LocalPopChoice(f_39);
      }
    else
      {
        t = d_39;
        t = r_95;
      }
  }
  v_99 = t;
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_99 = NULL,y_99 = NULL;
        t = term_a_39;
        x_99 = t;
        t = term_l_39;
        y_99 = t;
        t = term_m_39;
        t = a_10(x_99, y_99, t);
        t = v_99;
        t = topdown_1_0(y_2, t);
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        t = v_99;
      }
  }
  b_100 = t;
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_100 = NULL,e_100 = NULL;
        t = term_a_39;
        d_100 = t;
        t = term_p_39;
        e_100 = t;
        t = term_q_39;
        t = a_10(d_100, e_100, t);
        t = b_100;
        t = topdown_1_0(z_2, t);
        LocalPopChoice(o_39);
      }
    else
      {
        t = n_39;
        t = b_100;
      }
  }
  l_100 = t;
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_100 = NULL,o_100 = NULL;
        t = term_a_39;
        n_100 = t;
        t = term_t_39;
        o_100 = t;
        t = term_u_39;
        t = a_10(n_100, o_100, t);
        t = l_100;
        t = topdown_1_0(a_3, t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = l_100;
      }
  }
  v_100 = t;
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_100 = NULL,y_100 = NULL;
        t = term_a_39;
        x_100 = t;
        t = term_x_39;
        y_100 = t;
        t = term_y_39;
        t = a_10(x_100, y_100, t);
        t = v_100;
        t = replace_appl_0_0(t);
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = v_100;
      }
  }
  a_101 = t;
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_101 = NULL,d_101 = NULL;
        t = term_a_39;
        c_101 = t;
        t = term_b_40;
        d_101 = t;
        t = term_e_40;
        t = a_10(c_101, d_101, t);
        t = a_101;
        t = bottomup_1_0(c_3, t);
        LocalPopChoice(a_40);
      }
    else
      {
        t = z_39;
        t = a_101;
      }
  }
  j_101 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_101 = NULL,o_101 = NULL;
        t = term_a_39;
        l_101 = t;
        t = term_h_40;
        o_101 = t;
        t = term_i_40;
        t = a_10(l_101, o_101, t);
        t = j_101;
        t = topdown_1_0(d_3, t);
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = j_101;
      }
  }
  s_101 = t;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_101 = NULL,v_101 = NULL;
        t = term_a_39;
        u_101 = t;
        t = term_l_40;
        v_101 = t;
        t = term_m_40;
        t = a_10(u_101, v_101, t);
        t = s_101;
        t = topdown_1_0(e_3, t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        t = s_101;
      }
  }
  e_102 = t;
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_66 = NULL,c_67 = NULL,d_67 = NULL;
        t = term_a_39;
        c_67 = t;
        t = term_p_40;
        d_67 = t;
        t = term_q_40;
        t = a_10(c_67, d_67, t);
        t = e_102;
        if(match_cons(t, sym_parsetree_2))
          {
            z_66 = ATgetArgument(t, 0);
            {
              ATerm r_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = z_66;
        LocalPopChoice(o_40);
      }
    else
      {
        t = n_40;
        t = e_102;
      }
  }
  k_102 = t;
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_102;
        if((i_95 != t))
          {
            _fail(t);
          }
        t = k_102;
        {
          ATerm u_40 = t;
          int v_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_67 = NULL,m_67 = NULL;
              t = term_a_39;
              l_67 = t;
              t = term_w_40;
              m_67 = t;
              t = term_x_40;
              t = a_10(l_67, m_67, t);
              t = k_102;
              LocalPopChoice(v_40);
              t = implodeAsfix_1_0(_id, t);
            }
          else
            {
              t = u_40;
              t = implodeAsfix_1_0(_fail, t);
            }
        }
        LocalPopChoice(t_40);
      }
    else
      {
        t = s_40;
        t = k_102;
      }
  }
  return(t);
}
static ATerm n_9 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm x_102 = NULL;
  t = SSL_fputc(y_41, z_41);
  x_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_102);
  return(t);
}
static ATerm o_9 (ATerm d_26, ATerm e_26, ATerm t)
{
  ATerm y_102 = NULL;
  t = SSL_write_term_to_stream_text(d_26, e_26);
  y_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_102);
  return(t);
}
static ATerm q_9 (ATerm k_107 (ATerm), ATerm e_240, ATerm j_26, ATerm t)
{
  ATerm b_103 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_240, term_y_40);
  t = u_9(t);
  b_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_103, j_26);
  t = k_107(t);
  t = fclose_0_0(t);
  t = j_26;
  return(t);
}
static ATerm p_9 (ATerm z_25, ATerm a_26, ATerm t)
{
  ATerm c_103 = NULL;
  t = SSL_write_term_to_stream_baf(z_25, a_26);
  c_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_103);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_40 = ATgetArgument(t, 0);
      if(match_cons(z_40, sym_Stream_1))
        {
          j_103 = ATgetArgument(z_40, 0);
        }
      else
        _fail(t);
      k_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(j_103, k_103, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_41 = ATgetArgument(t, 0);
      if(match_cons(a_41, sym_Stream_1))
        {
          o_103 = ATgetArgument(a_41, 0);
        }
      else
        _fail(t);
      p_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(o_103, p_103, t);
  l_103 = t;
  t = term_b_41;
  m_103 = t;
  t = l_103;
  if(match_cons(t, sym_Stream_1))
    {
      n_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_41, l_103);
  t = n_9(m_103, n_103, t);
  return(t);
}
ATerm output_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL;
  t = a_133(t);
  e_103 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_103 = NULL,g_103 = NULL;
        t = term_a_39;
        f_103 = t;
        t = term_g_41;
        g_103 = t;
        t = term_j_41;
        t = a_10(f_103, g_103, t);
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = term_k_41;
      }
  }
  d_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_103, e_103);
  {
    ATerm m_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_103 = NULL,i_103 = NULL;
        t = term_a_39;
        h_103 = t;
        t = term_o_41;
        i_103 = t;
        t = term_q_41;
        t = a_10(h_103, i_103, t);
        t = (ATerm) ATmakeAppl(sym__2, d_103, e_103);
        LocalPopChoice(n_41);
        if(match_cons(t, sym__2))
          {
            ATerm r_41 = ATgetArgument(t, 0);
            ATerm v_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_9(f_3, d_103, e_103, t);
      }
    else
      {
        t = m_41;
        if(match_cons(t, sym__2))
          {
            ATerm w_41 = ATgetArgument(t, 0);
            ATerm x_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_9(g_3, d_103, e_103, t);
      }
  }
  return(t);
}
static ATerm d_104 (ATerm x_103, ATerm t)
{
  t = SSL_fclose(x_103);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL;
  b_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_104 = ATgetArgument(t, 0);
      {
        ATerm c_42 = t;
        int d_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_104);
            LocalPopChoice(d_42);
          }
        else
          {
            t = c_42;
            t = d_104(b_104, t);
          }
      }
    }
  else
    {
      t = d_104(b_104, t);
    }
  return(t);
}
static ATerm r_9 (ATerm f_26, ATerm t)
{
  t = SSL_read_term_from_stream(f_26);
  return(t);
}
static ATerm s_9 (ATerm c_40, ATerm d_40, ATerm t)
{
  t = SSL_strcat(c_40, d_40);
  return(t);
}
static ATerm t_9 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm e_104 = NULL;
  t = SSL_fopen(a_42, b_42);
  e_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_104);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_104 = NULL;
  t = SSL_stdin_stream();
  f_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_104);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_104 = NULL;
  t = SSL_stdout_stream();
  g_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_104);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_104 = NULL;
  t = SSL_stderr_stream();
  h_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_104);
  return(t);
}
static ATerm o_105 (ATerm n_104, ATerm t)
{
  ATerm o_104 = NULL;
  t = SSL_explode_term(n_104);
  if(match_cons(t, sym__2))
    {
      ATerm e_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_42 = ATgetArgument(t, 1);
        if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
          {
            o_104 = ATgetFirst((ATermList) f_42);
            {
              ATerm g_42 = (ATerm) ATgetNext((ATermList) f_42);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_104;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_104;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_104;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_104;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_105 (ATerm r_104, ATerm s_104, ATerm t_104, ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL,z_104 = NULL,j_20 = NULL;
  t = SSLgetAnnotations(t_104);
  w_104 = t;
  t = r_104;
  if(match_cons(t, sym_Path_1))
    {
      z_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_104, s_104);
  j_20 = t;
  t = SSLsetAnnotations(j_20, w_104);
  if(match_cons(t, sym__2))
    {
      u_104 = ATgetArgument(t, 0);
      v_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(u_104, v_104, t);
  return(t);
}
static ATerm q_105 (ATerm b_105, ATerm c_105, ATerm d_105, ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL,g_105 = NULL,j_105 = NULL,k_20 = NULL;
  t = SSLgetAnnotations(d_105);
  g_105 = t;
  t = SSL_is_string(b_105);
  j_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_105, c_105);
  k_20 = t;
  t = SSLsetAnnotations(k_20, g_105);
  if(match_cons(t, sym__2))
    {
      e_105 = ATgetArgument(t, 0);
      f_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(e_105, f_105, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL;
  l_105 = t;
  if(match_cons(t, sym__2))
    {
      m_105 = ATgetArgument(t, 0);
      n_105 = ATgetArgument(t, 1);
      {
        ATerm h_42 = t;
        int i_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_105(l_105, t);
            LocalPopChoice(i_42);
          }
        else
          {
            t = h_42;
            {
              ATerm j_42 = t;
              int k_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_105(m_105, n_105, l_105, t);
                  LocalPopChoice(k_42);
                }
              else
                {
                  t = j_42;
                  t = q_105(m_105, n_105, l_105, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_105(l_105, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL,z_105 = NULL;
  z_105 = t;
  {
    ATerm m_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_105, term_p_42);
        t = u_9(t);
        LocalPopChoice(o_42);
      }
    else
      {
        t = m_42;
        {
          ATerm r_68 = NULL,s_68 = NULL;
          t = term_q_42;
          s_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_42, z_105);
          t = s_9(s_68, z_105, t);
          r_68 = t;
          t = SSL_perror(r_68);
          _fail(t);
        }
      }
  }
  t_105 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_9(u_105, t);
  s_105 = t;
  t = t_105;
  t = fclose_0_0(t);
  t = s_105;
  return(t);
}
ATerm input_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_106 = NULL,d_106 = NULL;
      t = term_a_39;
      c_106 = t;
      t = term_u_42;
      d_106 = t;
      t = term_w_42;
      t = a_10(c_106, d_106, t);
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      t = term_x_42;
    }
  t = ReadFromFile_0_0(t);
  t = b_133(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL;
  e_106 = t;
  t = term_y_42;
  t = whoami_0_0(t);
  f_106 = t;
  t = term_z_42;
  h_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_43), f_106), term_a_43);
  i_106 = t;
  t = SSL_printnl(h_106, i_106);
  t = term_h_18;
  g_106 = t;
  t = SSL_exit(g_106);
  t = e_106;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm k_106 = NULL;
  k_106 = t;
  if(match_string(t, "-k"))
    {
      t = k_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_106;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  l_106 = t;
  t = SSL_string_to_int(l_106);
  m_106 = t;
  t = term_c_43;
  n_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_43, m_106);
  t = d_10(n_106, m_106, t);
  t = l_106;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_d_43;
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
  t = term_e_43;
  q_106 = t;
  t = term_f_43;
  r_106 = t;
  t = term_g_43;
  t = d_10(q_106, r_106, t);
  t = term_j_43;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_k_43;
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
  t = term_e_43;
  u_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, t_106);
  t = d_10(u_106, t_106, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_106);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_l_43;
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
  t = term_n_43;
  v_106 = t;
  t = term_y_42;
  w_106 = t;
  t = term_p_43;
  t = d_10(v_106, w_106, t);
  t = term_q_43;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_r_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      LocalPopChoice(t_43);
    }
  else
    {
      t = s_43;
      {
        ATerm u_43 = t;
        int w_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_3, d_4, e_4, t);
            LocalPopChoice(w_43);
          }
        else
          {
            t = u_43;
            t = Option_3_0(f_4, g_4, k_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_10 (ATerm c_68, ATerm d_68, ATerm t)
{
  ATerm x_106 = NULL,y_106 = NULL;
  t = term_a_39;
  x_106 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_39, c_68, d_68);
  t = lookup_table_0_1(x_106, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(c_68, d_68, y_106, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_39, c_68, d_68);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_107 = NULL,d_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL;
      t = term_y_42;
      t = g_0(t);
      e_107 = t;
      t = term_x_43;
      f_107 = t;
      t = term_y_43;
      g_107 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_43, term_y_43, e_107);
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
      t = term_y_42;
      t = f_0(t);
      j_107 = t;
      t = (ATerm) ATinsert(CheckATermList(d_107), j_107);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_107 = NULL;
  m_107 = t;
  if(match_string(t, "-o"))
    {
      t = m_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_107;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm n_107 = NULL,o_107 = NULL;
  n_107 = t;
  t = term_g_41;
  o_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, n_107);
  t = d_10(o_107, n_107, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_107);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_z_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
static ATerm b_10 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm t)
{
  ATerm q_107 = NULL,s_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL;
  q_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_57, t_57);
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_44 = ATgetArgument(t, 0);
            ATerm e_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_57, t_57);
        t = a_10(s_57, t_57, t);
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = (ATerm) ATempty;
      }
  }
  s_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_57, t_57, (ATerm) ATinsert(CheckATermList(s_107), r_57));
  t = lookup_table_0_1(s_57, t);
  x_107 = t;
  t = (ATerm) ATinsert(CheckATermList(s_107), r_57);
  v_107 = t;
  t = x_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(t_57, v_107, w_107, t);
  t = q_107;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_108 = NULL,n_108 = NULL,o_108 = NULL;
      t = term_y_42;
      t = q_0(t);
      m_108 = t;
      t = term_x_43;
      n_108 = t;
      t = term_y_43;
      o_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_43, term_y_43, m_108);
      t = b_10(n_108, o_108, m_108, t);
      _fail(t);
    }
  else
    {
      ATerm s_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_108 = ATgetFirst((ATermList) t);
          h_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_108 = ATgetFirst((ATermList) t);
          j_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_108;
      t = o_0(t);
      t = i_108;
      t = p_0(t);
      s_108 = t;
      t = (ATerm) ATinsert(CheckATermList(j_108), s_108);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm u_108 = NULL;
  u_108 = t;
  if(match_string(t, "-i"))
    {
      t = u_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_108;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL;
  x_108 = t;
  t = term_u_42;
  y_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_42, x_108);
  t = d_10(y_108, x_108, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_108);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_f_44;
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
  ATerm z_108 = NULL,a_109 = NULL;
  z_108 = t;
  t = term_b_39;
  a_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_39, z_108);
  t = d_10(a_109, z_108, t);
  t = z_108;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_g_44;
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
  ATerm b_109 = NULL,c_109 = NULL;
  b_109 = t;
  t = term_g_39;
  c_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_39, b_109);
  t = d_10(c_109, b_109, t);
  t = b_109;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_i_44;
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
  ATerm d_109 = NULL,e_109 = NULL;
  d_109 = t;
  t = term_t_39;
  e_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_39, d_109);
  t = d_10(e_109, d_109, t);
  t = d_109;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_j_44;
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
  ATerm f_109 = NULL,g_109 = NULL;
  f_109 = t;
  t = term_h_40;
  g_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_40, f_109);
  t = d_10(g_109, f_109, t);
  t = f_109;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_k_44;
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
  ATerm h_109 = NULL,i_109 = NULL;
  h_109 = t;
  t = term_x_39;
  i_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, h_109);
  t = d_10(i_109, h_109, t);
  t = h_109;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_l_44;
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
  ATerm j_109 = NULL,k_109 = NULL;
  j_109 = t;
  t = term_l_39;
  k_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_39, j_109);
  t = d_10(k_109, j_109, t);
  t = j_109;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_m_44;
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
  ATerm l_109 = NULL,m_109 = NULL;
  l_109 = t;
  t = term_b_40;
  m_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_40, l_109);
  t = d_10(m_109, l_109, t);
  t = l_109;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_n_44;
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
  ATerm n_109 = NULL,o_109 = NULL;
  n_109 = t;
  t = term_p_39;
  o_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_39, n_109);
  t = d_10(o_109, n_109, t);
  t = n_109;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_o_44;
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
  ATerm p_109 = NULL,q_109 = NULL;
  p_109 = t;
  t = term_l_40;
  q_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_40, p_109);
  t = d_10(q_109, p_109, t);
  t = p_109;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_p_44;
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
  ATerm r_109 = NULL,s_109 = NULL;
  r_109 = t;
  t = term_p_40;
  s_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_40, r_109);
  t = d_10(s_109, r_109, t);
  t = r_109;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_q_44;
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
  ATerm t_109 = NULL,u_109 = NULL;
  t_109 = t;
  t = term_w_40;
  u_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_40, t_109);
  t = d_10(u_109, t_109, t);
  t = t_109;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_r_44;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, s_4, u_4, t);
      LocalPopChoice(w_44);
    }
  else
    {
      t = v_44;
      {
        ATerm x_44 = t;
        int y_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_4, j_5, l_5, t);
            LocalPopChoice(y_44);
          }
        else
          {
            t = x_44;
            {
              ATerm z_44 = t;
              int a_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_5, n_5, o_5, t);
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
                        t = Option_3_0(p_5, t_5, u_5, t);
                        LocalPopChoice(c_45);
                      }
                    else
                      {
                        t = b_45;
                        {
                          ATerm d_45 = t;
                          int e_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(z_5, d_6, f_6, t);
                              LocalPopChoice(e_45);
                            }
                          else
                            {
                              t = d_45;
                              {
                                ATerm f_45 = t;
                                int g_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(g_6, i_6, j_6, t);
                                    LocalPopChoice(g_45);
                                  }
                                else
                                  {
                                    t = f_45;
                                    {
                                      ATerm h_45 = t;
                                      int k_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(k_6, m_6, n_6, t);
                                          LocalPopChoice(k_45);
                                        }
                                      else
                                        {
                                          t = h_45;
                                          {
                                            ATerm l_45 = t;
                                            int n_45 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(r_6, t_6, v_6, t);
                                                LocalPopChoice(n_45);
                                              }
                                            else
                                              {
                                                t = l_45;
                                                {
                                                  ATerm o_45 = t;
                                                  int p_45 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(w_6, y_6, g_7, t);
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
                                                            t = Option_3_0(l_7, m_7, n_7, t);
                                                            LocalPopChoice(r_45);
                                                          }
                                                        else
                                                          {
                                                            t = q_45;
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
  ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_42;
  t = whoami_0_0(t);
  v_109 = t;
  t = term_z_42;
  x_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_45), v_109);
  y_109 = t;
  t = SSL_printnl(x_109, y_109);
  t = term_h_18;
  w_109 = t;
  t = SSL_exit(w_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL;
  t = term_a_39;
  z_109 = t;
  t = term_u_45;
  a_110 = t;
  t = term_v_45;
  t = a_10(z_109, a_110, t);
  return(t);
}
static ATerm v_9 (ATerm t_44, ATerm u_44, ATerm t)
{
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_44, u_44);
      LocalPopChoice(y_45);
    }
  else
    {
      t = x_45;
      t = SSL_addr(t_44, u_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL,e_110 = NULL;
  c_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_110;
      t = s_114(t);
    }
  else
    {
      ATerm h_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_110 = ATgetFirst((ATermList) t);
          e_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_110;
      t = foldr_2_0(s_114, t_114, t);
      h_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_110, h_110);
      t = t_114(t);
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
  t = term_f_43;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL;
  if(match_cons(t, sym__2))
    {
      y_68 = ATgetArgument(t, 0);
      z_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(y_68, z_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_110 = NULL,u_68 = NULL,v_68 = NULL;
  t = times_0_0(t);
  v_68 = t;
  t = SSL_explode_term(v_68);
  if(match_cons(t, sym__2))
    {
      ATerm z_45 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_68;
  t = foldr_2_0(s_7, t_7, t);
  k_110 = t;
  t = SSL_TicksToSeconds(k_110);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL,x_110 = NULL;
  v_110 = t;
  if(match_cons(t, sym__2))
    {
      w_110 = ATgetArgument(t, 0);
      x_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_46 = t;
    int b_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_110;
        if((w_110 != t))
          {
            _fail(t);
          }
        t = v_110;
        LocalPopChoice(b_46);
      }
    else
      {
        t = a_46;
        t = (ATerm) ATmakeAppl(sym__2, w_110, x_110);
        {
          ATerm c_46 = t;
          int d_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_110, x_110);
              LocalPopChoice(d_46);
            }
          else
            {
              t = c_46;
              t = SSL_gtr(w_110, x_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_110, x_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_124 (ATerm), ATerm t)
{
  ATerm b_111 = NULL;
  b_111 = t;
  {
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL;
        t = term_a_39;
        e_111 = t;
        t = term_e_43;
        f_111 = t;
        t = term_h_46;
        t = a_10(e_111, f_111, t);
        d_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_111, term_h_18);
        t = geq_0_0(t);
        t = b_111;
        t = w_124(t);
        LocalPopChoice(g_46);
      }
    else
      {
        t = f_46;
        t = b_111;
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,k_111 = NULL,l_111 = NULL;
  t = run_time_0_0(t);
  h_111 = t;
  t = term_y_42;
  t = whoami_0_0(t);
  i_111 = t;
  t = term_z_42;
  k_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_46), h_111), term_i_46), i_111);
  l_111 = t;
  t = SSL_printnl(k_111, l_111);
  t = (ATerm) ATmakeAppl(sym__2, term_z_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_46), h_111), term_i_46), i_111));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_43;
  m_111 = t;
  t = SSL_exit(m_111);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL;
  x_111 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_111;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_111 = ATgetArgument(t, 0);
          {
            ATerm l_69 = NULL,n_20 = NULL;
            t = SSLgetAnnotations(x_111);
            l_69 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_111);
            n_20 = t;
            t = SSLsetAnnotations(n_20, l_69);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_111;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm k_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_111 = NULL,q_111 = NULL;
      t = term_a_39;
      p_111 = t;
      t = term_n_46;
      q_111 = t;
      t = term_o_46;
      t = a_10(p_111, q_111, t);
      LocalPopChoice(l_46);
    }
  else
    {
      t = k_46;
      t = fetch_1_0(v_7, t);
    }
  t = r_132(t);
  return(t);
}
static ATerm e_10 (ATerm k_62, ATerm l_62, ATerm m_62, ATerm t)
{
  ATerm z_111 = NULL;
  t = SSL_hashtable_put(m_62, k_62, l_62);
  z_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_111);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_59, ATerm t)
{
  ATerm i_112 = NULL;
  t = table_hashtable_0_0(t);
  i_112 = t;
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_69 = NULL;
        t = i_112;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_10(e_59, r_69, t);
        LocalPopChoice(q_46);
      }
    else
      {
        t = p_46;
        {
          ATerm w_69 = NULL;
          t = e_59;
          t = table_create_0_0(t);
          t = i_112;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_10(e_59, w_69, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_62, ATerm t_62, ATerm t)
{
  ATerm l_112 = NULL;
  t = SSL_hashtable_create(s_62, t_62);
  l_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_112);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,q_112 = NULL,r_112 = NULL;
  m_112 = t;
  t = term_r_46;
  q_112 = t;
  t = term_s_46;
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
static ATerm x_9 (ATerm p_62, ATerm q_62, ATerm t)
{
  ATerm s_112 = NULL;
  t = SSL_hashtable_remove(q_62, p_62);
  s_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_112);
  return(t);
}
static ATerm y_9 (ATerm u_62, ATerm t)
{
  ATerm t_112 = NULL;
  t = SSL_hashtable_destroy(u_62);
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
      t = term_y_42;
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
  ATerm v_113 = NULL,g_70 = NULL,i_70 = NULL;
  v_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_113), term_t_46);
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_113), term_t_46));
      }
  }
  g_70 = t;
  t = term_k_41;
  i_70 = t;
  t = SSL_printnl(i_70, g_70);
  t = (ATerm) ATinsert(ATinsert(ATempty, v_113), term_t_46);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL,d_70 = NULL,e_70 = NULL;
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_113 = NULL,o_113 = NULL;
      t = term_a_39;
      n_113 = t;
      t = term_u_45;
      o_113 = t;
      t = term_v_45;
      t = a_10(n_113, o_113, t);
      k_113 = t;
      LocalPopChoice(x_46);
    }
  else
    {
      t = w_46;
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
    ATerm y_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_69 = NULL,b_70 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(k_113)), term_b_47);
        {
          ATerm e_47 = t;
          int f_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(f_47);
            }
          else
            {
              t = e_47;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(k_113)), term_b_47));
            }
        }
        z_69 = t;
        t = term_k_41;
        b_70 = t;
        t = SSL_printnl(b_70, z_69);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(k_113)), term_b_47);
        LocalPopChoice(a_47);
      }
    else
      {
        t = y_46;
      }
  }
  t = term_g_47;
  {
    ATerm h_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(i_47);
      }
    else
      {
        t = h_47;
        t = (ATerm) ATinsert(ATempty, term_g_47);
      }
  }
  d_70 = t;
  t = term_k_41;
  e_70 = t;
  t = SSL_printnl(e_70, d_70);
  t = term_x_43;
  l_113 = t;
  t = term_y_43;
  m_113 = t;
  t = term_j_47;
  t = a_10(l_113, m_113, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(d_8, t);
  {
    ATerm k_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_70 = NULL,u_70 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_47), term_r_47), term_q_47), term_o_47);
        {
          ATerm t_47 = t;
          int u_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(u_47);
            }
          else
            {
              t = t_47;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_47), term_r_47), term_q_47), term_o_47));
            }
        }
        s_70 = t;
        t = term_k_41;
        u_70 = t;
        t = SSL_printnl(u_70, s_70);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_47), term_r_47), term_q_47), term_o_47);
        LocalPopChoice(n_47);
      }
    else
      {
        t = k_47;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  static ATerm w_114 (ATerm t);
  static ATerm w_114 (ATerm t)
  {
    ATerm r_114 = NULL,u_114 = NULL,v_114 = NULL;
    r_114 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_114 = ATgetFirst((ATermList) t);
        v_114 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_47 = t;
      int w_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_71 = NULL,l_71 = NULL,r_20 = NULL;
          t = SSLgetAnnotations(r_114);
          i_71 = t;
          t = u_114;
          t = d_108(t);
          l_71 = t;
          t = (ATerm) ATinsert(CheckATermList(v_114), l_71);
          r_20 = t;
          t = SSLsetAnnotations(r_20, i_71);
          LocalPopChoice(w_47);
        }
      else
        {
          t = v_47;
          {
            ATerm y_71 = NULL,b_72 = NULL,s_20 = NULL;
            t = SSLgetAnnotations(r_114);
            y_71 = t;
            t = v_114;
            t = w_114(t);
            b_72 = t;
            t = (ATerm) ATinsert(CheckATermList(b_72), u_114);
            s_20 = t;
            t = SSLsetAnnotations(s_20, y_71);
          }
        }
    }
    return(t);
  }
  t = w_114(t);
  return(t);
}
ATerm map_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  static ATerm n_115 (ATerm t);
  static ATerm n_115 (ATerm t)
  {
    ATerm k_115 = NULL,l_115 = NULL,m_115 = NULL;
    k_115 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_115;
      }
    else
      {
        ATerm p_72 = NULL,u_72 = NULL,v_72 = NULL,u_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_115 = ATgetFirst((ATermList) t);
            m_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_115);
        p_72 = t;
        t = l_115;
        t = t_107(t);
        u_72 = t;
        t = m_115;
        t = n_115(t);
        v_72 = t;
        t = (ATerm) ATinsert(CheckATermList(v_72), u_72);
        u_21 = t;
        t = SSLsetAnnotations(u_21, p_72);
      }
    return(t);
  }
  t = n_115(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm x_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_115 = NULL;
      z_115 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_115;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_47 = ATgetFirst((ATermList) t);
              ATerm a_48 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_115;
        }
      LocalPopChoice(y_47);
    }
  else
    {
      t = x_47;
      {
        static ATerm q_117 (ATerm t);
        static ATerm q_117 (ATerm t)
        {
          ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL;
          o_117 = t;
          if(match_cons(t, sym_iter_1))
            {
              p_117 = ATgetArgument(t, 0);
              {
                ATerm w_73 = NULL,w_21 = NULL;
                t = SSLgetAnnotations(o_117);
                w_73 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, p_117);
                w_21 = t;
                t = SSLsetAnnotations(w_21, w_73);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  p_117 = ATgetArgument(t, 0);
                  n_117 = ATgetArgument(t, 1);
                  {
                    ATerm t_74 = NULL,x_21 = NULL;
                    t = SSLgetAnnotations(o_117);
                    t_74 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, p_117, n_117);
                    x_21 = t;
                    t = SSLsetAnnotations(x_21, t_74);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      p_117 = ATgetArgument(t, 0);
                      {
                        ATerm f_75 = NULL,y_21 = NULL;
                        t = SSLgetAnnotations(o_117);
                        f_75 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, p_117);
                        y_21 = t;
                        t = SSLsetAnnotations(y_21, f_75);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          p_117 = ATgetArgument(t, 0);
                          n_117 = ATgetArgument(t, 1);
                          {
                            ATerm b_76 = NULL,z_21 = NULL;
                            t = SSLgetAnnotations(o_117);
                            b_76 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, p_117, n_117);
                            z_21 = t;
                            t = SSLsetAnnotations(z_21, b_76);
                          }
                        }
                      else
                        {
                          ATerm k_76 = NULL,m_76 = NULL,b_22 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              p_117 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(o_117);
                          k_76 = t;
                          t = p_117;
                          {
                            static ATerm e_8 (ATerm t);
                            static ATerm e_8 (ATerm t)
                            {
                              ATerm b_48 = t;
                              int c_48 = stack_ptr;
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
                                  LocalPopChoice(c_48);
                                }
                              else
                                {
                                  t = b_48;
                                  t = q_117(t);
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
        t = q_117(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_118 = NULL,b_118 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
  t = term_a_39;
  a_118 = t;
  t = term_u_45;
  b_118 = t;
  t = term_v_45;
  t = a_10(a_118, b_118, t);
  f_77 = t;
  {
    ATerm d_48 = t;
    int e_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(e_48);
      }
    else
      {
        t = d_48;
        t = (ATerm) ATinsert(ATempty, f_77);
      }
  }
  g_77 = t;
  t = term_k_41;
  h_77 = t;
  t = SSL_printnl(h_77, g_77);
  t = f_77;
  return(t);
}
static ATerm f_10 (ATerm n_62, ATerm o_62, ATerm t)
{
  t = SSL_hashtable_get(o_62, n_62);
  return(t);
}
static ATerm a_10 (ATerm l_59, ATerm m_59, ATerm t)
{
  ATerm c_118 = NULL;
  t = lookup_table_0_1(l_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(m_59, c_118, t);
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
  ATerm e_118 = NULL,f_118 = NULL;
  t = term_f_48;
  e_118 = t;
  t = term_y_42;
  f_118 = t;
  t = term_j_48;
  t = d_10(e_118, f_118, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_k_48;
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
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL;
  t = term_f_48;
  i_118 = t;
  t = term_y_42;
  j_118 = t;
  t = term_j_48;
  t = d_10(i_118, j_118, t);
  t = term_l_48;
  g_118 = t;
  t = term_y_42;
  h_118 = t;
  t = term_m_48;
  t = d_10(g_118, h_118, t);
  t = term_n_48;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_o_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_8, g_8, h_8, t);
      LocalPopChoice(q_48);
    }
  else
    {
      t = p_48;
      t = Option_3_0(j_8, k_8, l_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,o_24 = NULL;
  p_118 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_118 = ATgetFirst((ATermList) t);
      m_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_118);
  k_118 = t;
  t = l_118;
  t = a_80(t);
  n_118 = t;
  t = m_118;
  t = b_80(t);
  o_118 = t;
  t = (ATerm) ATinsert(CheckATermList(o_118), n_118);
  o_24 = t;
  t = SSLsetAnnotations(o_24, k_118);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,z_118 = NULL,a_119 = NULL,r_24 = NULL;
  u_118 = t;
  {
    ATerm r_48 = t;
    int s_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_48;
        t = s_127(t);
        LocalPopChoice(s_48);
      }
    else
      {
        t = r_48;
      }
  }
  t = u_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_118 = ATgetFirst((ATermList) t);
      x_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_118);
  v_118 = t;
  t = term_u_45;
  a_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_45, w_118);
  t = d_10(a_119, w_118, t);
  t = x_118;
  {
    static ATerm m_119 (ATerm t);
    static ATerm m_119 (ATerm t)
    {
      ATerm v_48 = t;
      int x_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_48 = t;
          int z_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_119 = NULL;
              d_119 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_119;
              LocalPopChoice(z_48);
            }
          else
            {
              t = y_48;
              t = s_127(t);
              t = Cons_2_0(_id, m_119, t);
            }
          LocalPopChoice(x_48);
        }
      else
        {
          t = v_48;
          {
            ATerm i_119 = NULL,j_119 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_119 = ATgetFirst((ATermList) t);
                j_119 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_119), (ATerm) ATmakeAppl(sym_Undefined_1, i_119));
          }
        }
      return(t);
    }
    t = m_119(t);
  }
  z_118 = t;
  t = (ATerm) ATinsert(CheckATermList(z_118), (ATerm) ATmakeAppl(sym_Program_1, w_118));
  r_24 = t;
  t = SSLsetAnnotations(r_24, v_118);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm z_119 = NULL;
  z_119 = t;
  if(match_string(t, "--help"))
    {
      t = z_119;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_119;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_119;
        }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm a_120 = NULL,b_120 = NULL;
  t = term_n_46;
  a_120 = t;
  t = term_y_42;
  b_120 = t;
  t = term_d_49;
  t = d_10(a_120, b_120, t);
  t = term_e_49;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_f_49;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_127 (ATerm), ATerm t)
{
  ATerm r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL;
  t_119 = t;
  t = term_x_43;
  u_119 = t;
  t = term_h_49;
  t = lookup_table_0_1(u_119, t);
  y_119 = t;
  t = term_y_43;
  v_119 = t;
  t = (ATerm) ATempty;
  w_119 = t;
  t = y_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(v_119, w_119, x_119, t);
  t = t_119;
  {
    static ATerm m_8 (ATerm t);
    static ATerm m_8 (ATerm t)
    {
      ATerm i_49 = t;
      int k_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_127(t);
          LocalPopChoice(k_49);
        }
      else
        {
          t = i_49;
          {
            ATerm m_49 = t;
            int n_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_8, o_8, p_8, t);
                LocalPopChoice(n_49);
              }
            else
              {
                t = m_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_8, t);
  }
  {
    ATerm o_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_120 = NULL;
        m_120 = t;
        {
          ATerm r_49 = t;
          int t_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_77 = NULL;
              t = m_120;
              {
                ATerm w_49 = t;
                int c_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_77 = NULL,m_77 = NULL;
                    t = term_a_39;
                    l_77 = t;
                    t = term_n_46;
                    m_77 = t;
                    t = term_o_46;
                    t = a_10(l_77, m_77, t);
                    LocalPopChoice(c_50);
                  }
                else
                  {
                    t = w_49;
                    t = fetch_1_0(r_8, t);
                  }
              }
              t = m_120;
              t = default_system_usage_0_0(t);
              t = term_f_43;
              k_77 = t;
              t = SSL_exit(k_77);
              LocalPopChoice(t_49);
            }
          else
            {
              t = r_49;
              {
                ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
                t = term_a_39;
                r_77 = t;
                t = term_f_48;
                s_77 = t;
                t = term_d_50;
                t = a_10(r_77, s_77, t);
                t = m_120;
                t = default_system_about_0_0(t);
                t = term_f_43;
                q_77 = t;
                t = SSL_exit(q_77);
              }
            }
        }
        LocalPopChoice(q_49);
      }
    else
      {
        t = o_49;
        {
          ATerm f_50 = t;
          int g_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL;
              static ATerm s_8 (ATerm t);
              static ATerm s_8 (ATerm t)
              {
                ATerm q_120 = NULL,r_120 = NULL,s_120 = NULL,a_27 = NULL;
                s_120 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_120 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_120);
                q_120 = t;
                t = r_120;
                if(((r_119 != NULL) && (r_119 != t)))
                  _fail(t);
                else
                  r_119 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_120);
                a_27 = t;
                t = SSLsetAnnotations(a_27, q_120);
                return(t);
              }
              t = fetch_1_0(s_8, t);
              t = term_z_42;
              o_120 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_119)), term_h_50);
              p_120 = t;
              t = SSL_printnl(o_120, p_120);
              t = (ATerm) ATmakeAppl(sym__2, term_z_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_119)), term_h_50));
              t = default_system_usage_0_0(t);
              t = term_h_18;
              n_120 = t;
              t = SSL_exit(n_120);
              LocalPopChoice(g_50);
            }
          else
            {
              t = f_50;
            }
        }
      }
  }
  s_119 = t;
  t = term_x_43;
  t = table_destroy_0_0(t);
  t = s_119;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t)
{
  ATerm x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL,b_121 = NULL;
  t = parse_options_1_0(t_132, t);
  x_120 = t;
  t = term_i_50;
  t = table_create_0_0(t);
  t = term_i_50;
  y_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_50, term_j_50, x_120);
  t = lookup_table_0_1(y_120, t);
  b_121 = t;
  t = term_j_50;
  z_120 = t;
  t = b_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(z_120, x_120, a_121, t);
  t = x_120;
  t = v_132(t);
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_132, t);
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        {
          ATerm q_50 = t;
          int r_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_50);
            }
          else
            {
              t = q_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm v_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_options_0_0(t);
      LocalPopChoice(w_50);
    }
  else
    {
      t = v_50;
      {
        ATerm x_50 = t;
        int y_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(y_50);
          }
        else
          {
            t = x_50;
            {
              ATerm z_50 = t;
              int a_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(a_51);
                }
              else
                {
                  t = z_50;
                  {
                    ATerm b_51 = t;
                    int c_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_8, b_9, e_9, t);
                        LocalPopChoice(c_51);
                      }
                    else
                      {
                        t = b_51;
                        {
                          ATerm d_51 = t;
                          int e_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(e_51);
                            }
                          else
                            {
                              t = d_51;
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
  ATerm d_121 = NULL,e_121 = NULL;
  t = term_o_41;
  d_121 = t;
  t = term_y_42;
  e_121 = t;
  t = term_f_51;
  t = d_10(d_121, e_121, t);
  t = term_g_51;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_h_51;
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

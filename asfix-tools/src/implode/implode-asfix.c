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
Symbol sym_Path_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_n_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_e_50;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_v_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
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
ATerm term_t_45;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_n_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_h_43;
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
ATerm term_v_42;
ATerm term_r_42;
ATerm term_p_42;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_j_41;
ATerm term_g_41;
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
ATerm term_d_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_h_39;
ATerm term_f_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_r_35;
ATerm term_v_34;
ATerm term_q_34;
ATerm term_h_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_a_34;
ATerm term_v_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_x_32;
ATerm term_s_32;
ATerm term_o_30;
ATerm term_e_30;
ATerm term_t_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_h_18;
ATerm term_w_17;
ATerm term_k_16;
ATerm term_m_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
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
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeInt(34);
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
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_b_39);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_f_39);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_k_39);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_p_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_v_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_z_39);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_d_40);
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
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_j_41);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_s_41);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_v_42);
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
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym__2, term_e_43, term_f_43);
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
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
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
  term_j_47 = (ATerm) ATmakeAppl(sym__2, term_y_43, term_z_43);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_y_42);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym__2, term_m_48, term_y_42);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym__2, term_n_46, term_y_42);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym__3, term_y_43, term_z_43, (ATerm) ATempty);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_j_48);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym__2, term_s_41, term_y_42);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm f_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm o_0 (ATerm t);
ATerm annotation_2_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm c_99 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm skip_concrete_1_0 (ATerm j_95 (ATerm), ATerm t);
static ATerm s_0 (ATerm c_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm a_9 (ATerm q_94 (ATerm), ATerm f_21, ATerm e_21, ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplCons_1_0 (ATerm x_94 (ATerm), ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm l_95 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_97 (ATerm), ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm c_59 (ATerm f_48, ATerm g_48, ATerm h_48, ATerm i_48, ATerm t);
static ATerm h_59 (ATerm x_49, ATerm y_49, ATerm z_49, ATerm a_50, ATerm t);
static ATerm l_59 (ATerm e_52, ATerm f_52, ATerm i_52, ATerm k_52, ATerm t);
static ATerm m_59 (ATerm s_57, ATerm t_57, ATerm u_57, ATerm v_57, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm o_98 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_111 (ATerm), ATerm t);
static ATerm v_81 (ATerm r_78, ATerm t);
static ATerm w_81 (ATerm a_80, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm y_104 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm w_89 (ATerm q_88, ATerm r_88, ATerm s_88, ATerm t);
static ATerm x_89 (ATerm c_89, ATerm d_89, ATerm e_89, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t);
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
static ATerm o_9 (ATerm a_41, ATerm b_41, ATerm t);
static ATerm p_9 (ATerm v_25, ATerm w_25, ATerm t);
static ATerm r_9 (ATerm n_103 (ATerm), ATerm l_236, ATerm b_26, ATerm t);
static ATerm q_9 (ATerm r_25, ATerm s_25, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_1_0 (ATerm z_128 (ATerm), ATerm t);
static ATerm i_104 (ATerm a_104, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_9 (ATerm x_25, ATerm t);
static ATerm t_9 (ATerm t_39, ATerm u_39, ATerm t);
static ATerm u_9 (ATerm c_41, ATerm d_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_105 (ATerm u_104, ATerm t);
static ATerm y_105 (ATerm a_105, ATerm b_105, ATerm c_105, ATerm t);
static ATerm z_105 (ATerm k_105, ATerm l_105, ATerm m_105, ATerm t);
static ATerm v_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm a_129 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_10 (ATerm j_59, ATerm k_59, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_10 (ATerm o_61, ATerm p_61, ATerm n_61, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
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
static ATerm w_9 (ATerm v_43, ATerm w_43, ATerm t);
ATerm foldr_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_120 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm need_help_1_0 (ATerm q_128 (ATerm), ATerm t);
static ATerm f_10 (ATerm g_66, ATerm h_66, ATerm i_66, ATerm t);
ATerm lookup_table_0_1 (ATerm a_63, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_66, ATerm p_66, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_9 (ATerm l_66, ATerm m_66, ATerm t);
static ATerm z_9 (ATerm q_66, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_103 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_10 (ATerm j_66, ATerm k_66, ATerm t);
static ATerm b_10 (ATerm h_63, ATerm i_63, ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_123 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm parse_options_1_0 (ATerm o_123 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,a_0 = NULL;
  q_15 = t;
  if(match_cons(t, sym_cons_1))
    {
      p_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_15);
  o_15 = t;
  t = p_15;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, p_15);
  a_0 = t;
  t = SSLsetAnnotations(a_0, o_15);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm k_9 = t;
  if((PushChoice() == 0))
    {
      ATerm n_18 = NULL,s_18 = NULL,t_18 = NULL;
      s_18 = t;
      if(match_cons(t, sym_appl_2))
        {
          t_18 = ATgetArgument(t, 0);
          n_18 = ATgetArgument(t, 1);
          {
            ATerm m_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,j_1 = NULL,i_1 = NULL,r_7 = NULL;
            t = SSLgetAnnotations(s_18);
            m_6 = t;
            t = t_18;
            if(match_cons(t, sym_prod_3))
              {
                b_7 = ATgetArgument(t, 0);
                c_7 = ATgetArgument(t, 1);
                d_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_18);
            a_7 = t;
            t = c_7;
            if(match_cons(t, sym_cf_1))
              {
                r_7 = ATgetArgument(t, 0);
                {
                  ATerm y_7 = NULL,a_8 = NULL,b_8 = NULL,e_8 = NULL,x_0 = NULL,w_0 = NULL;
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
                  e_8 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, e_8);
                  x_0 = t;
                  t = SSLsetAnnotations(x_0, y_7);
                }
              }
            else
              {
                ATerm k_8 = NULL,y_0 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    r_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_7);
                k_8 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, r_7);
                y_0 = t;
                t = SSLsetAnnotations(y_0, k_8);
              }
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, b_7, e_7, d_7);
            i_1 = t;
            t = SSLsetAnnotations(i_1, a_7);
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, f_7, n_18);
            j_1 = t;
            t = SSLsetAnnotations(j_1, m_6);
          }
        }
      else
        {
          ATerm t_8 = NULL,v_8 = NULL,w_8 = NULL,e_9 = NULL,x_1 = NULL,m_1 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              t_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_18);
          t_8 = t;
          t = t_18;
          if(match_cons(t, sym_opt_1))
            {
              w_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_18);
          v_8 = t;
          t = w_8;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, w_8);
          m_1 = t;
          t = SSLsetAnnotations(m_1, v_8);
          e_9 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, e_9);
          x_1 = t;
          t = SSLsetAnnotations(x_1, t_8);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_9;
    }
  {
    ATerm l_9 = t;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL,y_18 = NULL,t_19 = NULL,c_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,g_21 = NULL,j_21 = NULL,s_2 = NULL,i_2 = NULL;
        j_21 = t;
        if(match_cons(t, sym_appl_2))
          {
            y_18 = ATgetArgument(t, 0);
            t_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_21);
        v_18 = t;
        t = y_18;
        if(match_cons(t, sym_prod_3))
          {
            q_20 = ATgetArgument(t, 0);
            r_20 = ATgetArgument(t, 1);
            s_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_18);
        c_20 = t;
        t = r_20;
        t = oncetd_1_0(o_0, t);
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, q_20, t_20, s_20);
        i_2 = t;
        t = SSLsetAnnotations(i_2, c_20);
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, g_21, t_19);
        s_2 = t;
        t = SSLsetAnnotations(s_2, v_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_9;
      }
  }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm k_21 = NULL,m_21 = NULL,n_21 = NULL,a_2 = NULL;
  n_21 = t;
  if(match_cons(t, sym_lex_1))
    {
      m_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_21);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, m_21);
  a_2 = t;
  t = SSLsetAnnotations(a_2, k_21);
  return(t);
}
ATerm annotation_2_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,z_14 = NULL,a_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL,n_15 = NULL,v_0 = NULL,u_0 = NULL,b_0 = NULL;
  n_15 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_15);
  s_14 = t;
  t = t_14;
  if(match_cons(t, sym_prod_3))
    {
      w_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
      a_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_14);
  v_14 = t;
  t = a_15;
  if(match_cons(t, sym_attrs_1))
    {
      h_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_15);
  f_15 = t;
  t = h_15;
  t = oncetd_1_0(f_0, t);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, i_15);
  b_0 = t;
  t = SSLsetAnnotations(b_0, f_15);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, w_14, z_14, k_15);
  u_0 = t;
  t = SSLsetAnnotations(u_0, v_14);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, e_15, u_14);
  v_0 = t;
  t = SSLsetAnnotations(v_0, s_14);
  t = u_14;
  t = filter_1_0(n_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_14 = ATgetFirst((ATermList) t);
      h_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_14;
  t = i_95(t);
  i_14 = t;
  t = h_14;
  t = h_95(t);
  j_14 = t;
  t = term_m_9;
  k_14 = t;
  t = (ATerm) ATinsert(CheckATermList(j_14), i_14);
  r_14 = t;
  t = SSL_mkterm(k_14, r_14);
  return(t);
}
ATerm alltd_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  static ATerm f_22 (ATerm t);
  static ATerm f_22 (ATerm t)
  {
    ATerm x_9 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_99(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = x_9;
        t = SRTS_all(f_22, t);
      }
    return(t);
  }
  t = f_22(t);
  return(t);
}
ATerm appl_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,v_22 = NULL,h_3 = NULL;
  v_22 = t;
  if(match_cons(t, sym_appl_2))
    {
      h_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_22);
  g_22 = t;
  t = h_22;
  t = l_88(t);
  l_22 = t;
  t = k_22;
  t = m_88(t);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, l_22, m_22);
  h_3 = t;
  t = SSLsetAnnotations(h_3, g_22);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,t_25 = NULL,z_25 = NULL,c_26 = NULL,g_26 = NULL,h_26 = NULL,c_6 = NULL,b_6 = NULL;
  h_26 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
      q_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_26);
  n_25 = t;
  t = p_25;
  if(match_cons(t, sym_cf_1))
    {
      z_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_25);
  t_25 = t;
  t = z_25;
  t = oncetd_1_0(c_1, t);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, c_26);
  b_6 = t;
  t = SSLsetAnnotations(b_6, t_25);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, o_25, g_26, q_25);
  c_6 = t;
  t = SSLsetAnnotations(c_6, n_25);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm i_26 = NULL,o_26 = NULL,p_26 = NULL,z_5 = NULL;
  p_26 = t;
  if(match_cons(t, sym_sort_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_26);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, o_26);
  z_5 = t;
  t = SSLsetAnnotations(z_5, i_26);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm a_11 = NULL,f_11 = NULL,g_11 = NULL,f_6 = NULL;
  g_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      f_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_11);
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, f_11);
  f_6 = t;
  t = SSLsetAnnotations(f_6, a_11);
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
ATerm skip_concrete_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,d_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,d_6 = NULL,y_5 = NULL,x_5 = NULL,b_4 = NULL,a_4 = NULL;
  static ATerm q_29 (ATerm t);
  static ATerm q_29 (ATerm t)
  {
    static ATerm d_1 (ATerm t);
    static ATerm d_1 (ATerm t)
    {
      ATerm j_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
          n_29 = t;
          if(match_cons(t, sym_appl_2))
            {
              o_29 = ATgetArgument(t, 0);
              p_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm m_10 = t;
            int o_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_10 = NULL,k_10 = NULL,n_10 = NULL,s_10 = NULL,t_10 = NULL,w_10 = NULL,x_10 = NULL,h_6 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(n_29);
                h_10 = t;
                t = o_29;
                if(match_cons(t, sym_prod_3))
                  {
                    n_10 = ATgetArgument(t, 0);
                    s_10 = ATgetArgument(t, 1);
                    t_10 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_29);
                k_10 = t;
                t = n_10;
                t = SRTS_one(e_1, t);
                w_10 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, w_10, s_10, t_10);
                g_6 = t;
                t = SSLsetAnnotations(g_6, k_10);
                x_10 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, x_10, p_29);
                h_6 = t;
                t = SSLsetAnnotations(h_6, h_10);
                t = j_95(t);
                LocalPopChoice(o_10);
              }
            else
              {
                t = m_10;
                {
                  ATerm r_11 = NULL,w_11 = NULL,x_11 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
                  t = SSLgetAnnotations(n_29);
                  r_11 = t;
                  t = o_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      x_11 = ATgetArgument(t, 0);
                      d_12 = ATgetArgument(t, 1);
                      e_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_29);
                  w_11 = t;
                  t = e_12;
                  if(match_cons(t, sym_attrs_1))
                    {
                      h_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_12);
                  g_12 = t;
                  t = h_12;
                  t = oncetd_1_0(f_1, t);
                  i_12 = t;
                  t = (ATerm) ATmakeAppl(sym_attrs_1, i_12);
                  i_7 = t;
                  t = SSLsetAnnotations(i_7, g_12);
                  j_12 = t;
                  t = (ATerm) ATmakeAppl(sym_prod_3, x_11, d_12, j_12);
                  j_7 = t;
                  t = SSLsetAnnotations(j_7, w_11);
                  f_12 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, f_12, p_29);
                  k_7 = t;
                  t = SSLsetAnnotations(k_7, r_11);
                  t = j_95(t);
                }
              }
          }
          LocalPopChoice(l_10);
        }
      else
        {
          t = j_10;
          t = annotation_2_0(j_95, q_29, t);
        }
      return(t);
    }
    t = alltd_1_0(d_1, t);
    return(t);
  }
  g_25 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_25);
  m_24 = t;
  t = n_24;
  if(match_cons(t, sym_prod_3))
    {
      s_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
      u_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_24);
  q_24 = t;
  t = t_24;
  if(match_cons(t, sym_cf_1))
    {
      b_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_24);
  a_25 = t;
  t = b_25;
  if(match_cons(t, sym_sort_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  d_25 = t;
  t = e_25;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, e_25);
  a_4 = t;
  t = SSLsetAnnotations(a_4, d_25);
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, f_25);
  b_4 = t;
  t = SSLsetAnnotations(b_4, a_25);
  c_25 = t;
  t = u_24;
  if(match_cons(t, sym_attrs_1))
    {
      x_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  w_24 = t;
  t = x_24;
  {
    static ATerm z_0 (ATerm t);
    static ATerm z_0 (ATerm t)
    {
      ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,w_5 = NULL,t_5 = NULL;
      m_25 = t;
      if(match_cons(t, sym_term_1))
        {
          i_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_25);
      h_25 = t;
      t = i_25;
      if(match_cons(t, sym_cons_1))
        {
          k_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_25);
      j_25 = t;
      t = k_25;
      if(((y_23 != NULL) && (y_23 != t)))
        _fail(t);
      else
        y_23 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, k_25);
      t_5 = t;
      t = SSLsetAnnotations(t_5, j_25);
      l_25 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, l_25);
      w_5 = t;
      t = SSLsetAnnotations(w_5, h_25);
      return(t);
    }
    t = SRTS_one(z_0, t);
  }
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, y_24);
  x_5 = t;
  t = SSLsetAnnotations(x_5, w_24);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, s_24, c_25, z_24);
  y_5 = t;
  t = SSLsetAnnotations(y_5, q_24);
  v_24 = t;
  t = o_24;
  {
    static ATerm a_1 (ATerm t);
    static ATerm a_1 (ATerm t)
    {
      t = appl_2_0(b_1, _id, t);
      if(((d_24 != NULL) && (d_24 != t)))
        _fail(t);
      else
        d_24 = t;
      return(t);
    }
    t = oncetd_1_0(a_1, t);
  }
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, v_24, p_24);
  d_6 = t;
  t = SSLsetAnnotations(d_6, m_24);
  t = not_null(y_23);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(d_24));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(d_24));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(d_24));
        }
    }
  t = q_29(t);
  return(t);
}
static ATerm s_0 (ATerm c_0, ATerm t)
{
  ATerm e_0 = NULL;
  t = SSL_explode_term(c_0);
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_10) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm i_0 = NULL,j_0 = NULL,k_0 = NULL;
  k_0 = t;
  if(match_cons(t, sym__2))
    {
      i_0 = ATgetArgument(t, 0);
      j_0 = ATgetArgument(t, 1);
      {
        ATerm q_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_1 (ATerm t);
            static ATerm k_1 (ATerm t)
            {
              t = j_0;
              return(t);
            }
            t = i_0;
            t = at_end_1_0(k_1, t);
            LocalPopChoice(y_10);
          }
        else
          {
            t = q_10;
            t = s_0(k_0, t);
          }
      }
    }
  else
    {
      t = s_0(k_0, t);
    }
  return(t);
}
ATerm is_conc_0_0 (ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,p_1 = NULL,r_1 = NULL,t_1 = NULL,v_1 = NULL,y_1 = NULL,z_1 = NULL,b_2 = NULL;
  l_1 = t;
  if(match_cons(t, sym_prod_3))
    {
      n_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
      {
        ATerm c_11 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_11 = ATgetFirst((ATermList) t);
      p_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_11 = ATgetFirst((ATermList) t);
      r_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_1;
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_11 = ATgetFirst((ATermList) t);
            t_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_11);
        t = t_1;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_1;
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
                  t = l_1;
                }
              else
                {
                  t = k_11;
                  if(match_cons(t, sym_cf_1))
                    {
                      b_2 = ATgetArgument(t, 0);
                      t = b_2;
                      {
                        ATerm n_11 = t;
                        int o_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm p_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(o_11);
                            t = l_1;
                          }
                        else
                          {
                            t = n_11;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm q_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_1;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          ATerm t_11 = ATgetArgument(t, 0);
                          ATerm u_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_1;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_11 = ATgetFirst((ATermList) t);
                v_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_11 = ATgetFirst((ATermList) t);
                y_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_1;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_1;
            if(match_cons(t, sym_cf_1))
              {
                b_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_2;
            if(match_cons(t, sym_iter_sep_2))
              {
                ATerm z_11 = ATgetArgument(t, 0);
                ATerm a_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_1;
          }
      }
    else
      {
        t = h_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_1;
        if(match_cons(t, sym_iter_1))
          {
            ATerm b_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_1;
      }
  }
  return(t);
}
ATerm ReplConsConc_1_0 (ATerm t_0 (ATerm), ATerm t)
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
        t = t_0(t);
        x_3 = t;
        t = r_3;
        t = t_0(t);
        y_3 = t;
        t = k_3;
        t = t_0(t);
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
      t = t_0(t);
      g_1 = t;
      t = r_3;
      t = t_0(t);
      h_1 = t;
      {
        ATerm c_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 = NULL,h_2 = NULL;
            t = h_1;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = h_1;
              }
            else
              {
                ATerm p_2 = NULL,y_8 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_2 = ATgetFirst((ATermList) t);
                    h_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_1);
                p_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), g_2);
                y_8 = t;
                t = SSLsetAnnotations(y_8, p_2);
              }
            t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
            t = conc_0_0(t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = c_12;
            t = (ATerm) ATmakeAppl(sym_Conc_2, g_1, h_1);
          }
      }
    }
  return(t);
}
static ATerm a_9 (ATerm q_94 (ATerm), ATerm f_21, ATerm e_21, ATerm t)
{
  ATerm w_6 = NULL,y_6 = NULL,z_6 = NULL;
  t = f_21;
  if(match_cons(t, sym_prod_3))
    {
      ATerm o_12 = ATgetArgument(t, 0);
      ATerm p_12 = ATgetArgument(t, 1);
      y_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_6;
  {
    static ATerm o_1 (ATerm t);
    static ATerm o_1 (ATerm t)
    {
      if(match_cons(t, sym_cons_1))
        {
          if(((z_6 != NULL) && (z_6 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(o_1, t);
  }
  t = e_21;
  t = map_1_0(q_94, t);
  w_6 = t;
  t = SSL_mkterm(not_null(z_6), w_6);
  return(t);
}
ATerm is_ins_0_0 (ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL,b_5 = NULL,d_5 = NULL,f_5 = NULL,h_5 = NULL,j_5 = NULL,l_5 = NULL;
  x_4 = t;
  if(match_cons(t, sym_prod_3))
    {
      z_4 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
      {
        ATerm q_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_5 = ATgetFirst((ATermList) t);
      f_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_5;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
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
      t = x_4;
    }
  else
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              j_5 = ATgetArgument(t, 0);
              {
                ATerm t_12 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(s_12);
          t = j_5;
          if((b_5 != t))
            {
              _fail(t);
            }
          t = x_4;
        }
      else
        {
          t = r_12;
          if(match_cons(t, sym_cf_1))
            {
              j_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_5;
          if(match_cons(t, sym_cf_1))
            {
              d_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_5;
          if(match_cons(t, sym_iter_1))
            {
              l_5 = ATgetArgument(t, 0);
              t = l_5;
              if((d_5 != t))
                {
                  _fail(t);
                }
              t = x_4;
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  l_5 = ATgetArgument(t, 0);
                  {
                    ATerm d_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = l_5;
              if((d_5 != t))
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
      {
        ATerm f_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_6;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm m_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_13);
        t = n_6;
      }
    else
      {
        t = g_13;
        {
          ATerm s_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm v_13 = ATgetArgument(t, 0);
                  ATerm w_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(u_13);
              t = n_6;
            }
          else
            {
              t = s_13;
              if(match_cons(t, sym_cf_1))
                {
                  q_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_6;
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
                    t = n_6;
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
                    t = n_6;
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReplCons_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10 = NULL,u_10 = NULL,v_10 = NULL,z_10 = NULL,b_11 = NULL;
      r_10 = t;
      if(match_cons(t, sym_appl_2))
        {
          u_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm e_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_10;
              t = a_9(x_94, u_10, v_10, t);
              LocalPopChoice(n_14);
            }
          else
            {
              t = e_14;
              {
                ATerm o_14 = t;
                int p_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(p_14);
                  }
                else
                  {
                    t = o_14;
                    {
                      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
                      t = u_10;
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
                            t = u_10;
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
                            t = u_10;
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
              z_10 = ATgetFirst((ATermList) t);
              b_11 = (ATerm) ATgetNext((ATermList) t);
              t = b_11;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm l_16 = t;
                  int m_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_10;
                      t = a_9(x_94, u_10, v_10, t);
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
                            ATerm s_11 = NULL;
                            t = u_10;
                            t = is_ins_0_0(t);
                            t = z_10;
                            t = x_94(t);
                            s_11 = t;
                            t = (ATerm) ATinsert(ATempty, s_11);
                            LocalPopChoice(o_16);
                          }
                        else
                          {
                            t = n_16;
                            {
                              ATerm t_4 = NULL,w_4 = NULL,y_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL;
                              t = u_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  w_4 = ATgetArgument(t, 0);
                                  e_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_16 = ATgetArgument(t, 2);
                                  }
                                }
                              else
                                _fail(t);
                              t = w_4;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  y_4 = ATgetFirst((ATermList) t);
                                  c_5 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = c_5;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = e_5;
                              if(match_cons(t, sym_opt_1))
                                {
                                  g_5 = ATgetArgument(t, 0);
                                  t = g_5;
                                  if((y_4 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = u_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      g_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_4;
                                  if(match_cons(t, sym_cf_1))
                                    {
                                      a_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_5;
                                  if(match_cons(t, sym_opt_1))
                                    {
                                      i_5 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_5;
                                  if((a_5 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = u_10;
                                }
                              t = z_10;
                              t = x_94(t);
                              t_4 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, t_4);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = r_10;
                  t = a_9(x_94, u_10, v_10, t);
                }
            }
          else
            {
              t = r_10;
              t = a_9(x_94, u_10, v_10, t);
            }
        }
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = ReplConsConc_1_0(x_94, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm e_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      n_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13;
  if(match_cons(t, sym_prod_3))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
      {
        ATerm q_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_13 = ATgetFirst((ATermList) t);
      j_13 = (ATerm) ATgetNext((ATermList) t);
      t = j_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_13;
      if(match_cons(t, sym_opt_1))
        {
          q_13 = ATgetArgument(t, 0);
          t = t_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_13 = ATgetFirst((ATermList) t);
              l_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_13;
          if((e_13 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = k_13;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              q_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_13;
          if(match_cons(t, sym_cf_1))
            {
              i_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_13;
          if(match_cons(t, sym_opt_1))
            {
              r_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_13 = ATgetFirst((ATermList) t);
              l_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_13;
          if((i_13 != t))
            {
              _fail(t);
            }
          t = is_list_0_0(t);
          t = k_13;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_13;
      if(match_cons(t, sym_opt_1))
        {
          q_13 = ATgetArgument(t, 0);
          t = t_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              q_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_13;
          if(match_cons(t, sym_opt_1))
            {
              r_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_13;
          t = is_list_0_0(t);
          t = (ATerm) ATempty;
        }
    }
  return(t);
}
static ATerm q_1 (ATerm t)
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
            ATerm b_21 = NULL,h_21 = NULL,i_21 = NULL,l_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,h_9 = NULL,g_9 = NULL,j_22 = NULL;
            t = SSLgetAnnotations(r_19);
            b_21 = t;
            t = s_19;
            if(match_cons(t, sym_prod_3))
              {
                i_21 = ATgetArgument(t, 0);
                l_21 = ATgetArgument(t, 1);
                p_21 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_19);
            h_21 = t;
            t = l_21;
            if(match_cons(t, sym_cf_1))
              {
                j_22 = ATgetArgument(t, 0);
                {
                  ATerm t_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,c_9 = NULL,b_9 = NULL;
                  t = SSLgetAnnotations(l_21);
                  t_22 = t;
                  t = j_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      x_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_22);
                  w_22 = t;
                  t = x_22;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, x_22);
                  b_9 = t;
                  t = SSLsetAnnotations(b_9, w_22);
                  y_22 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, y_22);
                  c_9 = t;
                  t = SSLsetAnnotations(c_9, t_22);
                }
              }
            else
              {
                ATerm b_23 = NULL,d_9 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    j_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_21);
                b_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, j_22);
                d_9 = t;
                t = SSLsetAnnotations(d_9, b_23);
              }
            q_21 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, i_21, q_21, p_21);
            g_9 = t;
            t = SSLsetAnnotations(g_9, h_21);
            r_21 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, r_21, q_19);
            h_9 = t;
            t = SSLsetAnnotations(h_9, b_21);
          }
        }
      else
        {
          ATerm g_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,n_9 = NULL,i_9 = NULL;
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
          i_9 = t;
          t = SSLsetAnnotations(i_9, i_23);
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, k_23);
          n_9 = t;
          t = SSLsetAnnotations(n_9, g_23);
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
ATerm implodeAsfix_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm h_30 = NULL;
  static ATerm y_34 (ATerm t);
  static ATerm y_34 (ATerm t)
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
              ATerm r_34 = NULL,s_34 = NULL,u_34 = NULL;
              s_34 = t;
              if(match_cons(t, sym_appl_2))
                {
                  u_34 = ATgetArgument(t, 0);
                  r_34 = ATgetArgument(t, 1);
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_34;
                        t = l_95(t);
                        t = s_34;
                        t = skip_concrete_1_0(y_34, t);
                        LocalPopChoice(x_16);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm q_17 = NULL,t_17 = NULL,a_10 = NULL;
                          t = SSLgetAnnotations(s_34);
                          q_17 = t;
                          t = r_34;
                          t = filter_1_0(q_1, t);
                          t_17 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, u_34, t_17);
                          a_10 = t;
                          t = SSLsetAnnotations(a_10, q_17);
                          {
                            ATerm y_16 = t;
                            int z_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = y_34(t);
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
                                      t = ReplCons_1_0(y_34, t);
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
                                            ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                v_19 = ATgetArgument(t, 0);
                                                w_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = w_19;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                x_19 = ATgetFirst((ATermList) t);
                                                y_19 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = y_19;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = v_19;
                                            t = injection_0_0(t);
                                            t = x_19;
                                            t = y_34(t);
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
                                                  t = y_34(t);
                                                  LocalPopChoice(i_17);
                                                }
                                              else
                                                {
                                                  t = h_17;
                                                  t = FlatAlt_0_0(t);
                                                  t = y_34(t);
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
                      u_34 = ATgetArgument(t, 0);
                      {
                        ATerm j_17 = t;
                        int k_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = s_34;
                            t = l_95(t);
                            t = s_34;
                            t = skip_concrete_1_0(y_34, t);
                            LocalPopChoice(k_17);
                          }
                        else
                          {
                            t = j_17;
                            {
                              ATerm q_23 = NULL,s_23 = NULL,d_10 = NULL;
                              t = SSLgetAnnotations(s_34);
                              q_23 = t;
                              t = u_34;
                              t = map_1_0(y_34, t);
                              s_23 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, s_23);
                              d_10 = t;
                              t = SSLsetAnnotations(d_10, q_23);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = s_34;
                      t = l_95(t);
                      t = s_34;
                      t = skip_concrete_1_0(y_34, t);
                    }
                }
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = SRTS_all(y_34, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      h_30 = ATgetArgument(t, 0);
      {
        ATerm m_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_30;
  t = y_34(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,a_36 = NULL,c_36 = NULL,j_36 = NULL;
  v_35 = t;
  if(match_cons(t, sym_appl_2))
    {
      w_35 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_35;
  if(match_cons(t, sym_prod_3))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
      {
        ATerm p_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_36;
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm v_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_17);
        {
          ATerm a_24 = NULL;
          t = term_w_17;
          a_24 = t;
          t = SSL_mkterm(a_24, j_36);
        }
      }
    else
      {
        t = r_17;
        {
          ATerm h_24 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              c_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_36;
          if(match_cons(t, sym_seq_1))
            {
              ATerm y_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_w_17;
          h_24 = t;
          t = SSL_mkterm(h_24, j_36);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  static ATerm s_1 (ATerm t);
  static ATerm s_1 (ATerm t)
  {
    t = topdown_1_0(k_97, t);
    return(t);
  }
  t = k_97(t);
  t = SRTS_all(s_1, t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,o_37 = NULL,p_37 = NULL,u_37 = NULL,z_40 = NULL,l_41 = NULL,m_41 = NULL;
  static ATerm g_43 (ATerm t);
  static ATerm g_43 (ATerm t)
  {
    ATerm v_41 = NULL,w_41 = NULL,z_41 = NULL,a_42 = NULL;
    if(match_cons(t, sym__2))
      {
        v_41 = ATgetArgument(t, 0);
        a_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = v_41;
    if(match_cons(t, sym_alt_2))
      {
        w_41 = ATgetArgument(t, 0);
        z_41 = ATgetArgument(t, 1);
        {
          ATerm z_17 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_41;
              if(((o_37 != NULL) && (o_37 != t)))
                _fail(t);
              else
                o_37 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, a_42, not_null(u_37));
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
                    t = w_41;
                    if(((o_37 != NULL) && (o_37 != t)))
                      _fail(t);
                    else
                      o_37 = t;
                    t = z_41;
                    if(((p_37 != NULL) && (p_37 != t)))
                      _fail(t);
                    else
                      p_37 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, a_42, not_null(u_37));
                    LocalPopChoice(f_18);
                  }
                else
                  {
                    t = d_18;
                    {
                      ATerm q_42 = NULL,t_42 = NULL;
                      t = term_h_18;
                      t_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_42, term_h_18);
                      t = w_9(a_42, t_42, t);
                      q_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_41, q_42);
                      t = g_43(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = v_41;
        if(((o_37 != NULL) && (o_37 != t)))
          _fail(t);
        else
          o_37 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, a_42, not_null(u_37));
      }
    return(t);
  }
  z_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,r_26 = NULL,s_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,e_27 = NULL,f_27 = NULL,y_12 = NULL,x_12 = NULL,w_12 = NULL,v_12 = NULL,n_27 = NULL;
        t = SSLgetAnnotations(z_40);
        e_26 = t;
        t = l_41;
        if(match_cons(t, sym_prod_3))
          {
            l_26 = ATgetArgument(t, 0);
            m_26 = ATgetArgument(t, 1);
            n_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_41);
        k_26 = t;
        t = l_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_26 = ATgetFirst((ATermList) t);
            b_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_26);
        y_26 = t;
        t = z_26;
        if(match_cons(t, sym_cf_1))
          {
            n_27 = ATgetArgument(t, 0);
            {
              ATerm g_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_28 = NULL,u_12 = NULL;
                  t = SSLgetAnnotations(z_26);
                  j_28 = t;
                  t = n_27;
                  if(((o_37 != NULL) && (o_37 != t)))
                    _fail(t);
                  else
                    o_37 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, n_27);
                  u_12 = t;
                  t = SSLsetAnnotations(u_12, j_28);
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = g_19;
                  t = z_26;
                  if(((o_37 != NULL) && (o_37 != t)))
                    _fail(t);
                  else
                    o_37 = t;
                  t = z_26;
                }
            }
          }
        else
          {
            t = z_26;
            if(((o_37 != NULL) && (o_37 != t)))
              _fail(t);
            else
              o_37 = t;
            t = z_26;
          }
        e_27 = t;
        t = b_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_27), e_27);
        v_12 = t;
        t = SSLsetAnnotations(v_12, y_26);
        f_27 = t;
        t = m_26;
        if(match_cons(t, sym_cf_1))
          {
            w_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_26);
        s_26 = t;
        t = w_26;
        if(match_cons(t, sym_alt_2))
          {
            i_37 = ATgetArgument(t, 0);
            j_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, w_26);
        w_12 = t;
        t = SSLsetAnnotations(w_12, s_26);
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, f_27, x_26, n_26);
        x_12 = t;
        t = SSLsetAnnotations(x_12, k_26);
        r_26 = t;
        t = m_41;
        if(((u_37 != NULL) && (u_37 != t)))
          _fail(t);
        else
          u_37 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, r_26, m_41);
        y_12 = t;
        t = SSLsetAnnotations(y_12, e_26);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        {
          ATerm w_28 = NULL,a_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,c_13 = NULL,b_13 = NULL,a_13 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(z_40);
          w_28 = t;
          t = l_41;
          if(match_cons(t, sym_prod_3))
            {
              c_29 = ATgetArgument(t, 0);
              d_29 = ATgetArgument(t, 1);
              e_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_41);
          a_29 = t;
          t = c_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_29 = ATgetFirst((ATermList) t);
              v_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_29);
          t_29 = t;
          t = u_29;
          if(((o_37 != NULL) && (o_37 != t)))
            _fail(t);
          else
            o_37 = t;
          t = v_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(v_29), u_29);
          z_12 = t;
          t = SSLsetAnnotations(z_12, t_29);
          w_29 = t;
          t = d_29;
          if(match_cons(t, sym_lex_1))
            {
              h_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_29);
          g_29 = t;
          t = h_29;
          if(match_cons(t, sym_alt_2))
            {
              i_37 = ATgetArgument(t, 0);
              j_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, h_29);
          a_13 = t;
          t = SSLsetAnnotations(a_13, g_29);
          i_29 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, w_29, i_29, e_29);
          b_13 = t;
          t = SSLsetAnnotations(b_13, a_29);
          f_29 = t;
          t = m_41;
          if(((u_37 != NULL) && (u_37 != t)))
            _fail(t);
          else
            u_37 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, f_29, m_41);
          c_13 = t;
          t = SSLsetAnnotations(c_13, w_28);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, i_37, j_37), term_h_18);
  t = g_43(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  if(match_cons(t, sym_sort_1))
    {
      l_45 = ATgetArgument(t, 0);
      {
        ATerm d_30 = NULL,f_14 = NULL;
        t = SSLgetAnnotations(k_45);
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, l_45);
        f_14 = t;
        t = SSLsetAnnotations(f_14, d_30);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          l_45 = ATgetArgument(t, 0);
          {
            ATerm n_30 = NULL,u_30 = NULL,l_14 = NULL;
            t = SSLgetAnnotations(k_45);
            n_30 = t;
            t = l_45;
            t = injective_alt_0_0(t);
            u_30 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, u_30);
            l_14 = t;
            t = SSLsetAnnotations(l_14, n_30);
          }
        }
      else
        {
          ATerm h_31 = NULL,k_31 = NULL,n_31 = NULL,m_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              l_45 = ATgetArgument(t, 0);
              m_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_45);
          h_31 = t;
          t = l_45;
          t = injective_alt_0_0(t);
          k_31 = t;
          t = m_45;
          t = injective_alt_0_0(t);
          n_31 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, k_31, n_31);
          m_14 = t;
          t = SSLsetAnnotations(m_14, h_31);
        }
    }
  return(t);
}
static ATerm c_59 (ATerm f_48, ATerm g_48, ATerm h_48, ATerm i_48, ATerm t)
{
  ATerm t_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,g_49 = NULL,j_49 = NULL,l_49 = NULL,p_49 = NULL,b_15 = NULL,x_14 = NULL,q_14 = NULL;
  t = SSLgetAnnotations(i_48);
  t_48 = t;
  t = f_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_49 = ATgetFirst((ATermList) t);
      c_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_48);
  a_49 = t;
  t = b_49;
  if(match_cons(t, sym_varsym_1))
    {
      l_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_49);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, l_49);
  q_14 = t;
  t = SSLsetAnnotations(q_14, j_49);
  p_49 = t;
  t = c_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_49), p_49);
  x_14 = t;
  t = SSLsetAnnotations(x_14, a_49);
  g_49 = t;
  t = h_48;
  {
    ATerm i_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(u_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_19;
      }
  }
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, g_49, g_48, z_48);
  b_15 = t;
  t = SSLsetAnnotations(b_15, t_48);
  return(t);
}
static ATerm h_59 (ATerm x_49, ATerm y_49, ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm b_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,p_50 = NULL,s_50 = NULL,t_50 = NULL,m_15 = NULL,j_15 = NULL,r_51 = NULL;
  t = SSLgetAnnotations(a_50);
  b_50 = t;
  t = x_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_50 = ATgetFirst((ATermList) t);
      p_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_49);
  l_50 = t;
  t = m_50;
  if(match_cons(t, sym_sort_1))
    {
      r_51 = ATgetArgument(t, 0);
      {
        ATerm d_32 = NULL,c_15 = NULL;
        t = SSLgetAnnotations(m_50);
        d_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, r_51);
        c_15 = t;
        t = SSLsetAnnotations(c_15, d_32);
      }
    }
  else
    {
      ATerm m_32 = NULL,r_32 = NULL,t_32 = NULL,w_32 = NULL,g_15 = NULL,d_15 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          r_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_50);
      m_32 = t;
      t = r_51;
      if(match_cons(t, sym_sort_1))
        {
          t_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_51);
      r_32 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, t_32);
      d_15 = t;
      t = SSLsetAnnotations(d_15, r_32);
      w_32 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, w_32);
      g_15 = t;
      t = SSLsetAnnotations(g_15, m_32);
    }
  s_50 = t;
  t = p_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_50), s_50);
  j_15 = t;
  t = SSLsetAnnotations(j_15, l_50);
  t_50 = t;
  t = y_49;
  t = injective_alt_0_0(t);
  j_50 = t;
  t = z_49;
  {
    ATerm j_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(w_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_19;
      }
  }
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, t_50, j_50, k_50);
  m_15 = t;
  t = SSLsetAnnotations(m_15, b_50);
  return(t);
}
static ATerm l_59 (ATerm e_52, ATerm f_52, ATerm i_52, ATerm k_52, ATerm t)
{
  ATerm l_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,a_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,d_16 = NULL,s_15 = NULL;
  t = SSLgetAnnotations(k_52);
  l_52 = t;
  t = e_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_53 = ATgetFirst((ATermList) t);
      c_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_52);
  x_52 = t;
  t = a_53;
  {
    ATerm k_19 = t;
    if((PushChoice() == 0))
      {
        ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,r_15 = NULL;
        l_53 = t;
        if(match_cons(t, sym_lit_1))
          {
            k_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_53);
        j_53 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, k_53);
        r_15 = t;
        t = SSLsetAnnotations(r_15, j_53);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_19;
      }
  }
  d_53 = t;
  t = c_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_53), d_53);
  s_15 = t;
  t = SSLsetAnnotations(s_15, x_52);
  e_53 = t;
  t = f_52;
  {
    static ATerm p_59 (ATerm t);
    static ATerm p_59 (ATerm t)
    {
      ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
      m_57 = t;
      if(match_cons(t, sym_sort_1))
        {
          n_57 = ATgetArgument(t, 0);
          {
            ATerm d_33 = NULL,t_15 = NULL;
            t = SSLgetAnnotations(m_57);
            d_33 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, n_57);
            t_15 = t;
            t = SSLsetAnnotations(t_15, d_33);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              n_57 = ATgetArgument(t, 0);
              {
                ATerm u_33 = NULL,y_33 = NULL,u_15 = NULL;
                t = SSLgetAnnotations(m_57);
                u_33 = t;
                t = n_57;
                t = p_59(t);
                y_33 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, y_33);
                u_15 = t;
                t = SSLsetAnnotations(u_15, u_33);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  n_57 = ATgetArgument(t, 0);
                  {
                    ATerm g_34 = NULL,i_34 = NULL,v_15 = NULL;
                    t = SSLgetAnnotations(m_57);
                    g_34 = t;
                    t = n_57;
                    t = p_59(t);
                    i_34 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, i_34);
                    v_15 = t;
                    t = SSLsetAnnotations(v_15, g_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      n_57 = ATgetArgument(t, 0);
                      {
                        ATerm f_35 = NULL,h_35 = NULL,w_15 = NULL;
                        t = SSLgetAnnotations(m_57);
                        f_35 = t;
                        t = n_57;
                        t = p_59(t);
                        h_35 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, h_35);
                        w_15 = t;
                        t = SSLsetAnnotations(w_15, f_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          n_57 = ATgetArgument(t, 0);
                          {
                            ATerm x_35 = NULL,b_36 = NULL,x_15 = NULL;
                            t = SSLgetAnnotations(m_57);
                            x_35 = t;
                            t = n_57;
                            t = p_59(t);
                            b_36 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, b_36);
                            x_15 = t;
                            t = SSLsetAnnotations(x_15, x_35);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              n_57 = ATgetArgument(t, 0);
                              o_57 = ATgetArgument(t, 1);
                              {
                                ATerm o_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,z_15 = NULL,y_15 = NULL;
                                t = SSLgetAnnotations(m_57);
                                o_36 = t;
                                t = n_57;
                                t = p_59(t);
                                r_36 = t;
                                t = o_57;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    t_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(o_57);
                                s_36 = t;
                                t = (ATerm) ATmakeAppl(sym_lit_1, t_36);
                                y_15 = t;
                                t = SSLsetAnnotations(y_15, s_36);
                                u_36 = t;
                                t = (ATerm) ATmakeAppl(sym_iter_sep_2, r_36, u_36);
                                z_15 = t;
                                t = SSLsetAnnotations(z_15, o_36);
                              }
                            }
                          else
                            {
                              ATerm c_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,b_16 = NULL,a_16 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  n_57 = ATgetArgument(t, 0);
                                  o_57 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(m_57);
                              c_37 = t;
                              t = n_57;
                              t = p_59(t);
                              f_37 = t;
                              t = o_57;
                              if(match_cons(t, sym_lit_1))
                                {
                                  h_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(o_57);
                              g_37 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, h_37);
                              a_16 = t;
                              t = SSLsetAnnotations(a_16, g_37);
                              k_37 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, f_37, k_37);
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
    t = p_59(t);
  }
  v_52 = t;
  t = i_52;
  {
    ATerm l_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(c_2, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_19;
      }
  }
  w_52 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, e_53, v_52, w_52);
  d_16 = t;
  t = SSLsetAnnotations(d_16, l_52);
  return(t);
}
static ATerm m_59 (ATerm s_57, ATerm t_57, ATerm u_57, ATerm v_57, ATerm t)
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
static ATerm u_1 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,y_14 = NULL;
  v_49 = t;
  if(match_cons(t, sym_cons_1))
    {
      u_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_49);
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, u_49);
  y_14 = t;
  t = SSLsetAnnotations(y_14, t_49);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,y_51 = NULL,l_15 = NULL;
  y_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      t_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_51);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, t_51);
  l_15 = t;
  t = SSLsetAnnotations(l_15, s_51);
  return(t);
}
static ATerm c_2 (ATerm t)
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
  ATerm c_58 = NULL;
  c_58 = t;
  if(match_string(t, "bracket"))
    {
      t = c_58;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = c_58;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  k_58 = t;
  if(match_cons(t, sym_prod_3))
    {
      l_58 = ATgetArgument(t, 0);
      m_58 = ATgetArgument(t, 1);
      o_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_58;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = m_58;
      if(match_cons(t, sym_cf_1))
        {
          n_58 = ATgetArgument(t, 0);
          t = n_58;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              j_58 = ATgetArgument(t, 0);
              e_58 = ATgetArgument(t, 1);
              t = l_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_58 = ATgetFirst((ATermList) t);
                  i_58 = (ATerm) ATgetNext((ATermList) t);
                  t = i_58;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = f_58;
                      if(match_cons(t, sym_cf_1))
                        {
                          g_58 = ATgetArgument(t, 0);
                          t = g_58;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              h_58 = ATgetArgument(t, 0);
                              d_58 = ATgetArgument(t, 1);
                              {
                                ATerm m_19 = t;
                                int n_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = c_59(l_58, m_58, o_58, k_58, t);
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
                                          t = h_59(l_58, m_58, o_58, k_58, t);
                                          LocalPopChoice(p_19);
                                        }
                                      else
                                        {
                                          t = o_19;
                                          {
                                            ATerm u_19 = t;
                                            int z_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = l_59(l_58, m_58, o_58, k_58, t);
                                                LocalPopChoice(z_19);
                                              }
                                            else
                                              {
                                                t = u_19;
                                                {
                                                  ATerm a_20 = t;
                                                  int b_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = j_58;
                                                      if((h_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = e_58;
                                                      if((d_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = k_58;
                                                      LocalPopChoice(b_20);
                                                    }
                                                  else
                                                    {
                                                      t = a_20;
                                                      t = m_59(l_58, m_58, o_58, k_58, t);
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
                              ATerm d_20 = t;
                              int e_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = c_59(l_58, m_58, o_58, k_58, t);
                                  LocalPopChoice(e_20);
                                }
                              else
                                {
                                  t = d_20;
                                  {
                                    ATerm f_20 = t;
                                    int g_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = h_59(l_58, m_58, o_58, k_58, t);
                                        LocalPopChoice(g_20);
                                      }
                                    else
                                      {
                                        t = f_20;
                                        {
                                          ATerm h_20 = t;
                                          int i_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = l_59(l_58, m_58, o_58, k_58, t);
                                              LocalPopChoice(i_20);
                                            }
                                          else
                                            {
                                              t = h_20;
                                              t = m_59(l_58, m_58, o_58, k_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm j_20 = t;
                          int m_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = c_59(l_58, m_58, o_58, k_58, t);
                              LocalPopChoice(m_20);
                            }
                          else
                            {
                              t = j_20;
                              {
                                ATerm n_20 = t;
                                int p_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_59(l_58, m_58, o_58, k_58, t);
                                    LocalPopChoice(p_20);
                                  }
                                else
                                  {
                                    t = n_20;
                                    {
                                      ATerm v_20 = t;
                                      int y_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = l_59(l_58, m_58, o_58, k_58, t);
                                          LocalPopChoice(y_20);
                                        }
                                      else
                                        {
                                          t = v_20;
                                          t = m_59(l_58, m_58, o_58, k_58, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = f_58;
                      {
                        ATerm z_20 = t;
                        int a_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_59(l_58, m_58, o_58, k_58, t);
                            LocalPopChoice(a_21);
                          }
                        else
                          {
                            t = z_20;
                            {
                              ATerm c_21 = t;
                              int d_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = h_59(l_58, m_58, o_58, k_58, t);
                                  LocalPopChoice(d_21);
                                }
                              else
                                {
                                  t = c_21;
                                  {
                                    ATerm o_21 = t;
                                    int s_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = l_59(l_58, m_58, o_58, k_58, t);
                                        LocalPopChoice(s_21);
                                      }
                                    else
                                      {
                                        t = o_21;
                                        t = m_59(l_58, m_58, o_58, k_58, t);
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
                      t = c_59(l_58, m_58, o_58, k_58, t);
                      LocalPopChoice(v_21);
                    }
                  else
                    {
                      t = t_21;
                      {
                        ATerm c_22 = t;
                        int d_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = h_59(l_58, m_58, o_58, k_58, t);
                            LocalPopChoice(d_22);
                          }
                        else
                          {
                            t = c_22;
                            {
                              ATerm e_22 = t;
                              int i_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = l_59(l_58, m_58, o_58, k_58, t);
                                  LocalPopChoice(i_22);
                                }
                              else
                                {
                                  t = e_22;
                                  t = m_59(l_58, m_58, o_58, k_58, t);
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
                  j_58 = ATgetArgument(t, 0);
                  t = l_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_58 = ATgetFirst((ATermList) t);
                      i_58 = (ATerm) ATgetNext((ATermList) t);
                      t = i_58;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = f_58;
                          if(match_cons(t, sym_cf_1))
                            {
                              g_58 = ATgetArgument(t, 0);
                              t = g_58;
                              if(match_cons(t, sym_iter_1))
                                {
                                  h_58 = ATgetArgument(t, 0);
                                  {
                                    ATerm n_22 = t;
                                    int o_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = c_59(l_58, m_58, o_58, k_58, t);
                                        LocalPopChoice(o_22);
                                      }
                                    else
                                      {
                                        t = n_22;
                                        {
                                          ATerm p_22 = t;
                                          int q_22 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_59(l_58, m_58, o_58, k_58, t);
                                              LocalPopChoice(q_22);
                                            }
                                          else
                                            {
                                              t = p_22;
                                              {
                                                ATerm r_22 = t;
                                                int s_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = l_59(l_58, m_58, o_58, k_58, t);
                                                    LocalPopChoice(s_22);
                                                  }
                                                else
                                                  {
                                                    t = r_22;
                                                    {
                                                      ATerm u_22 = t;
                                                      int z_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_58;
                                                          if((h_58 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = k_58;
                                                          LocalPopChoice(z_22);
                                                        }
                                                      else
                                                        {
                                                          t = u_22;
                                                          t = m_59(l_58, m_58, o_58, k_58, t);
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
                                      t = c_59(l_58, m_58, o_58, k_58, t);
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
                                            t = h_59(l_58, m_58, o_58, k_58, t);
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
                                                  t = l_59(l_58, m_58, o_58, k_58, t);
                                                  LocalPopChoice(h_23);
                                                }
                                              else
                                                {
                                                  t = f_23;
                                                  t = m_59(l_58, m_58, o_58, k_58, t);
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
                                  t = c_59(l_58, m_58, o_58, k_58, t);
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
                                        t = h_59(l_58, m_58, o_58, k_58, t);
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
                                              t = l_59(l_58, m_58, o_58, k_58, t);
                                              LocalPopChoice(r_23);
                                            }
                                          else
                                            {
                                              t = p_23;
                                              t = m_59(l_58, m_58, o_58, k_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = f_58;
                          {
                            ATerm t_23 = t;
                            int u_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = c_59(l_58, m_58, o_58, k_58, t);
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
                                      t = h_59(l_58, m_58, o_58, k_58, t);
                                      LocalPopChoice(w_23);
                                    }
                                  else
                                    {
                                      t = v_23;
                                      {
                                        ATerm x_23 = t;
                                        int z_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = l_59(l_58, m_58, o_58, k_58, t);
                                            LocalPopChoice(z_23);
                                          }
                                        else
                                          {
                                            t = x_23;
                                            t = m_59(l_58, m_58, o_58, k_58, t);
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
                      ATerm b_24 = t;
                      int c_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_59(l_58, m_58, o_58, k_58, t);
                          LocalPopChoice(c_24);
                        }
                      else
                        {
                          t = b_24;
                          {
                            ATerm e_24 = t;
                            int f_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_59(l_58, m_58, o_58, k_58, t);
                                LocalPopChoice(f_24);
                              }
                            else
                              {
                                t = e_24;
                                {
                                  ATerm g_24 = t;
                                  int i_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = l_59(l_58, m_58, o_58, k_58, t);
                                      LocalPopChoice(i_24);
                                    }
                                  else
                                    {
                                      t = g_24;
                                      t = m_59(l_58, m_58, o_58, k_58, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = l_58;
                  {
                    ATerm j_24 = t;
                    int k_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_59(l_58, m_58, o_58, k_58, t);
                        LocalPopChoice(k_24);
                      }
                    else
                      {
                        t = j_24;
                        {
                          ATerm r_24 = t;
                          int y_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_59(l_58, m_58, o_58, k_58, t);
                              LocalPopChoice(y_25);
                            }
                          else
                            {
                              t = r_24;
                              {
                                ATerm a_26 = t;
                                int d_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = l_59(l_58, m_58, o_58, k_58, t);
                                    LocalPopChoice(d_26);
                                  }
                                else
                                  {
                                    t = a_26;
                                    t = m_59(l_58, m_58, o_58, k_58, t);
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
              n_58 = ATgetArgument(t, 0);
              t = n_58;
              if(match_string(t, "<START>"))
                {
                  t = l_58;
                  {
                    ATerm f_26 = t;
                    int j_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_59(l_58, m_58, o_58, k_58, t);
                        LocalPopChoice(j_26);
                      }
                    else
                      {
                        t = f_26;
                        {
                          ATerm q_26 = t;
                          int t_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_59(l_58, m_58, o_58, k_58, t);
                              LocalPopChoice(t_26);
                            }
                          else
                            {
                              t = q_26;
                              {
                                ATerm u_26 = t;
                                int a_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = l_59(l_58, m_58, o_58, k_58, t);
                                    LocalPopChoice(a_27);
                                  }
                                else
                                  {
                                    t = u_26;
                                    {
                                      ATerm c_27 = t;
                                      int d_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = m_59(l_58, m_58, o_58, k_58, t);
                                          LocalPopChoice(d_27);
                                        }
                                      else
                                        {
                                          t = c_27;
                                          t = k_58;
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
                  t = l_58;
                  {
                    ATerm g_27 = t;
                    int h_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_59(l_58, m_58, o_58, k_58, t);
                        LocalPopChoice(h_27);
                      }
                    else
                      {
                        t = g_27;
                        {
                          ATerm i_27 = t;
                          int j_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_59(l_58, m_58, o_58, k_58, t);
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
                                    t = l_59(l_58, m_58, o_58, k_58, t);
                                    LocalPopChoice(l_27);
                                  }
                                else
                                  {
                                    t = k_27;
                                    t = m_59(l_58, m_58, o_58, k_58, t);
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
              t = l_58;
              {
                ATerm m_27 = t;
                int o_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_59(l_58, m_58, o_58, k_58, t);
                    LocalPopChoice(o_27);
                  }
                else
                  {
                    t = m_27;
                    {
                      ATerm p_27 = t;
                      int q_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_59(l_58, m_58, o_58, k_58, t);
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
                                t = l_59(l_58, m_58, o_58, k_58, t);
                                LocalPopChoice(s_27);
                              }
                            else
                              {
                                t = r_27;
                                t = m_59(l_58, m_58, o_58, k_58, t);
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
      t = l_58;
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_59(l_58, m_58, o_58, k_58, t);
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
                  t = h_59(l_58, m_58, o_58, k_58, t);
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
                        t = l_59(l_58, m_58, o_58, k_58, t);
                        LocalPopChoice(y_27);
                      }
                    else
                      {
                        t = x_27;
                        t = m_59(l_58, m_58, o_58, k_58, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  static ATerm e_2 (ATerm t);
  static ATerm e_2 (ATerm t)
  {
    t = bottomup_1_0(l_97, t);
    return(t);
  }
  t = SRTS_all(e_2, t);
  t = l_97(t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,t_60 = NULL,b_61 = NULL,f_61 = NULL,i_61 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      b_61 = ATgetArgument(t, 0);
      f_61 = ATgetArgument(t, 1);
      t = b_61;
      if(match_cons(t, sym_Ins_1))
        {
          t_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_60 = ATgetFirst((ATermList) t);
          o_60 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_60), p_60), t_60);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              p_60 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, p_60), t_60);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, t_60);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          b_61 = ATgetArgument(t, 0);
          f_61 = ATgetArgument(t, 1);
          i_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_61), (ATerm) ATinsert(ATempty, f_61)), b_61);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,k_62 = NULL,l_62 = NULL,p_62 = NULL,s_62 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      k_62 = ATgetArgument(t, 0);
      s_62 = ATgetArgument(t, 1);
      t = s_62;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_62;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = k_62;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  l_62 = ATgetArgument(t, 0);
                  p_62 = ATgetArgument(t, 1);
                  t = k_62;
                }
              else
                {
                  t = k_62;
                }
            }
        }
      else
        {
          t = k_62;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = s_62;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  l_62 = ATgetArgument(t, 0);
                  p_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, l_62, (ATerm) ATmakeAppl(sym_Conc_2, p_62, s_62));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          k_62 = ATgetArgument(t, 0);
          s_62 = ATgetArgument(t, 1);
          i_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_62;
      if(match_cons(t, sym_Conc_3))
        {
          l_62 = ATgetArgument(t, 0);
          p_62 = ATgetArgument(t, 1);
          h_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, l_62, p_62, (ATerm) ATmakeAppl(sym_Conc_3, h_62, s_62, i_62));
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_65 = NULL,b_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_65 = ATgetFirst((ATermList) t);
          b_65 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, a_65), b_65);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              a_65 = ATgetArgument(t, 0);
              b_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, a_65, (ATerm) ATmakeAppl(sym_Ins_1, b_65));
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
              ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,z_37 = NULL,e_38 = NULL,k_38 = NULL,l_38 = NULL,d_17 = NULL;
              d_67 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  e_67 = ATgetArgument(t, 0);
                  f_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_67);
              z_37 = t;
              t = e_67;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_38 = ATgetFirst((ATermList) t);
                  l_38 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, k_38), l_38);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      k_38 = ATgetArgument(t, 0);
                      l_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, k_38, (ATerm) ATmakeAppl(sym_Ins_1, l_38));
                }
              e_38 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, e_38, f_67);
              d_17 = t;
              t = SSLsetAnnotations(d_17, z_37);
            }
          }
      }
    }
  return(t);
}
ATerm conc_to_cons_0_0 (ATerm t)
{
  t = repeat_2_0(f_2, _id, t);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_67 = NULL,c_68 = NULL,f_68 = NULL,g_39 = NULL,m_39 = NULL,e_17 = NULL;
        y_67 = t;
        if(match_cons(t, sym_Conc_2))
          {
            c_68 = ATgetArgument(t, 0);
            f_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_67);
        g_39 = t;
        t = f_68;
        t = conc_to_cons_0_0(t);
        m_39 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, c_68, m_39);
        e_17 = t;
        t = SSLsetAnnotations(e_17, g_39);
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
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,l_68 = NULL,n_68 = NULL,f_17 = NULL;
            t = CTC2_0_0(t);
            n_68 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_68 = ATgetFirst((ATermList) t);
                i_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_68);
            g_68 = t;
            t = h_68;
            t = conc_to_cons_0_0(t);
            l_68 = t;
            t = (ATerm) ATinsert(CheckATermList(i_68), l_68);
            f_17 = t;
            t = SSLsetAnnotations(f_17, g_68);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            {
              ATerm p_68 = NULL;
              if(match_cons(t, sym_Ins_1))
                {
                  p_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, p_68);
            }
          }
        LocalPopChoice(g_28);
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
  ATerm c_70 = NULL,j_70 = NULL,l_70 = NULL,n_70 = NULL,q_70 = NULL,t_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      q_70 = ATgetArgument(t, 0);
      x_70 = ATgetArgument(t, 1);
      {
        ATerm k_28 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_70 = ATgetFirst((ATermList) t);
      w_70 = (ATerm) ATgetNext((ATermList) t);
      t = w_70;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = x_70;
          if(match_cons(t, sym_opt_1))
            {
              y_70 = ATgetArgument(t, 0);
              t = y_70;
              if((t_70 != t))
                {
                  _fail(t);
                }
              t = term_l_28;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  y_70 = ATgetArgument(t, 0);
                  t = t_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      v_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
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
                                ATerm n_28 = ATgetArgument(t, 1);
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
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      y_70 = ATgetArgument(t, 0);
                      t = y_70;
                      if((t_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_m_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          y_70 = ATgetArgument(t, 0);
                          {
                            ATerm o_28 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = y_70;
                      if((t_70 != t))
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
              c_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = c_70;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = x_70;
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
                        y_70 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = y_70;
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm u_28 = ATgetArgument(t, 0);
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
                  ATerm v_28 = ATgetFirst((ATermList) t);
                  j_70 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_70;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = x_70;
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm z_28 = ATgetArgument(t, 0);
                            ATerm b_29 = ATgetArgument(t, 1);
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
                            y_70 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = y_70;
                        {
                          ATerm j_29 = t;
                          int k_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_1))
                                {
                                  ATerm l_29 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_29);
                              t = term_t_28;
                            }
                          else
                            {
                              t = j_29;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm m_29 = ATgetArgument(t, 0);
                                  ATerm r_29 = ATgetArgument(t, 1);
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
                      ATerm s_29 = ATgetFirst((ATermList) t);
                      l_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = l_70;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_29 = ATgetFirst((ATermList) t);
                      n_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = n_70;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      y_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_70;
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
      t = x_70;
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
                y_70 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_70;
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
ATerm oncetd_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  static ATerm v_71 (ATerm t);
  static ATerm v_71 (ATerm t)
  {
    ATerm g_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_98(t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = g_30;
        t = SRTS_one(v_71, t);
      }
    return(t);
  }
  t = v_71(t);
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      i_72 = ATgetArgument(t, 0);
      j_72 = ATgetArgument(t, 1);
      {
        ATerm j_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_72;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm m_30 = ATgetArgument(t, 0);
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
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm r_30 = ATgetArgument(t, 0);
                  ATerm s_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(q_30);
              t = term_o_30;
            }
          else
            {
              t = p_30;
              if(match_cons(t, sym_cf_1))
                {
                  k_72 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_72;
              {
                ATerm t_30 = t;
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
                    t = t_30;
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
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
  p_74 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_74 = ATgetArgument(t, 0);
      o_74 = ATgetArgument(t, 1);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_41 = NULL,q_41 = NULL,n_42 = NULL,o_42 = NULL,l_17 = NULL;
            t = SSLgetAnnotations(p_74);
            k_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, n_74, o_74);
            l_17 = t;
            t = SSLsetAnnotations(l_17, k_41);
            q_41 = t;
            if(match_cons(t, sym_appl_2))
              {
                n_42 = ATgetArgument(t, 0);
                o_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm b_31 = t;
              int c_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_42;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  LocalPopChoice(c_31);
                }
              else
                {
                  t = b_31;
                  {
                    ATerm i_43 = NULL;
                    t = n_42;
                    {
                      ATerm d_31 = t;
                      int e_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_43 = NULL,o_43 = NULL;
                          if(match_cons(t, sym_prod_3))
                            {
                              ATerm f_31 = ATgetArgument(t, 0);
                              ATerm g_31 = ATgetArgument(t, 1);
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
                          LocalPopChoice(e_31);
                        }
                      else
                        {
                          t = d_31;
                          t = Constr1_0_0(t);
                        }
                    }
                    i_43 = t;
                    t = SSL_mkterm(i_43, o_42);
                  }
                }
            }
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            t = p_74;
          }
      }
    }
  else
    {
      t = p_74;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(j_2, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  s_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_76;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_76 = ATgetFirst((ATermList) t);
          u_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_44 = NULL,k_44 = NULL,n_44 = NULL,n_17 = NULL;
            t = SSLgetAnnotations(s_76);
            c_44 = t;
            t = t_76;
            t = z_111(t);
            k_44 = t;
            t = u_76;
            t = filter_1_0(z_111, t);
            n_44 = t;
            t = (ATerm) ATinsert(CheckATermList(n_44), k_44);
            n_17 = t;
            t = SSLsetAnnotations(n_17, c_44);
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            t = u_76;
            t = filter_1_0(z_111, t);
          }
      }
    }
  return(t);
}
static ATerm v_81 (ATerm r_78, ATerm t)
{
  static ATerm x_81 (ATerm t);
  static ATerm x_81 (ATerm t)
  {
    ATerm s_78 = NULL,t_78 = NULL,v_78 = NULL,w_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL;
    s_78 = t;
    if(match_cons(t, sym_appl_2))
      {
        t_78 = ATgetArgument(t, 0);
        a_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = t_78;
    if(match_cons(t, sym_prod_3))
      {
        ATerm l_31 = ATgetArgument(t, 0);
        v_78 = ATgetArgument(t, 1);
        {
          ATerm m_31 = ATgetArgument(t, 2);
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
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm o_31 = ATgetArgument(t, 0);
        ATerm p_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = a_79;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_79 = ATgetFirst((ATermList) t);
        c_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = c_79;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, b_79);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_79 = ATgetFirst((ATermList) t);
            e_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_79;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_79 = ATgetFirst((ATermList) t);
            g_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_79;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm q_79 = NULL,r_79 = NULL;
            t = b_79;
            t = x_81(t);
            q_79 = t;
            t = f_79;
            t = x_81(t);
            r_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_79), (ATerm) ATinsert(ATempty, d_79)), q_79);
            t = concat_0_0(t);
          }
        else
          {
            ATerm y_79 = NULL,z_79 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_79 = ATgetFirst((ATermList) t);
                i_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_79;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_79 = ATgetFirst((ATermList) t);
                k_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_79;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_79;
            t = x_81(t);
            y_79 = t;
            t = j_79;
            t = x_81(t);
            z_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_79), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_79), f_79), d_79)), y_79);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = r_78;
  t = x_81(t);
  return(t);
}
static ATerm w_81 (ATerm a_80, ATerm t)
{
  static ATerm y_81 (ATerm t);
  static ATerm y_81 (ATerm t)
  {
    ATerm b_80 = NULL,c_80 = NULL,e_80 = NULL,f_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
    b_80 = t;
    if(match_cons(t, sym_appl_2))
      {
        c_80 = ATgetArgument(t, 0);
        i_80 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = c_80;
    if(match_cons(t, sym_prod_3))
      {
        ATerm q_31 = ATgetArgument(t, 0);
        e_80 = ATgetArgument(t, 1);
        {
          ATerm r_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = e_80;
    if(match_cons(t, sym_cf_1))
      {
        f_80 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_80;
    if(match_cons(t, sym_iter_1))
      {
        ATerm s_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = i_80;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_80 = ATgetFirst((ATermList) t);
        k_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = k_80;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, j_80);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_80 = ATgetFirst((ATermList) t);
            m_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_80;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm t_80 = NULL,u_80 = NULL;
            t = j_80;
            t = y_81(t);
            t_80 = t;
            t = l_80;
            t = y_81(t);
            u_80 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, u_80), t_80);
            t = concat_0_0(t);
          }
        else
          {
            ATerm z_80 = NULL,a_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_80 = ATgetFirst((ATermList) t);
                o_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_80;
            t = y_81(t);
            z_80 = t;
            t = n_80;
            t = y_81(t);
            a_81 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_81), (ATerm) ATinsert(ATempty, l_80)), z_80);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = a_80;
  t = y_81(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL;
  d_81 = t;
  if(match_cons(t, sym_appl_2))
    {
      e_81 = ATgetArgument(t, 0);
      o_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_81;
  if(match_cons(t, sym_prod_3))
    {
      f_81 = ATgetArgument(t, 0);
      k_81 = ATgetArgument(t, 1);
      {
        ATerm t_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_81;
  if(match_cons(t, sym_cf_1))
    {
      l_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_81;
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
        t = o_81;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_81 = ATgetFirst((ATermList) t);
            q_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_81;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_81;
            {
              ATerm y_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_81(d_81, t);
                  LocalPopChoice(z_31);
                }
              else
                {
                  t = y_31;
                  t = (ATerm) ATinsert(ATempty, p_81);
                }
            }
          }
        else
          {
            t = f_81;
            t = v_81(d_81, t);
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
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm c_32 = ATgetArgument(t, 0);
                  ATerm e_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(b_32);
              t = f_81;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_81 = ATgetFirst((ATermList) t);
                      j_81 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_81;
                  if(match_cons(t, sym_cf_1))
                    {
                      h_81 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = h_81;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm f_32 = ATgetArgument(t, 0);
                      ATerm g_32 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_81;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_81 = ATgetFirst((ATermList) t);
                      q_81 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_81;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = a_32;
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
                    t = o_81;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        p_81 = ATgetFirst((ATermList) t);
                        q_81 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = q_81;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = f_81;
                        {
                          ATerm k_32 = t;
                          int l_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = w_81(d_81, t);
                              LocalPopChoice(l_32);
                            }
                          else
                            {
                              t = k_32;
                              t = (ATerm) ATinsert(ATempty, p_81);
                            }
                        }
                      }
                    else
                      {
                        t = f_81;
                        t = w_81(d_81, t);
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
                    t = f_81;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = o_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            g_81 = ATgetFirst((ATermList) t);
                            j_81 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = g_81;
                        if(match_cons(t, sym_cf_1))
                          {
                            h_81 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = h_81;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm o_32 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = j_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = o_81;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            p_81 = ATgetFirst((ATermList) t);
                            q_81 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = q_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = p_81;
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
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_82 = ATgetFirst((ATermList) t);
      j_82 = (ATerm) ATgetNext((ATermList) t);
      t = j_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_82 = ATgetFirst((ATermList) t);
          h_82 = (ATerm) ATgetNext((ATermList) t);
          t = g_82;
          if(match_int(t, 34))
            {
              t = i_82;
              if(match_int(t, 92))
                {
                  ATerm p_32 = t;
                  int q_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_82 = NULL;
                      t = h_82;
                      t = De_Escape_0_0(t);
                      m_82 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_82), term_s_32);
                      LocalPopChoice(q_32);
                    }
                  else
                    {
                      t = p_32;
                      {
                        ATerm p_82 = NULL;
                        t = j_82;
                        t = De_Escape_0_0(t);
                        p_82 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_82), i_82);
                      }
                    }
                }
              else
                {
                  ATerm s_82 = NULL;
                  t = j_82;
                  t = De_Escape_0_0(t);
                  s_82 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_82), i_82);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = i_82;
                  if(match_int(t, 92))
                    {
                      ATerm u_32 = t;
                      int v_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_82 = NULL;
                          t = h_82;
                          t = De_Escape_0_0(t);
                          u_82 = t;
                          t = (ATerm) ATinsert(CheckATermList(u_82), term_x_32);
                          LocalPopChoice(v_32);
                        }
                      else
                        {
                          t = u_32;
                          {
                            ATerm x_82 = NULL;
                            t = j_82;
                            t = De_Escape_0_0(t);
                            x_82 = t;
                            t = (ATerm) ATinsert(CheckATermList(x_82), i_82);
                          }
                        }
                    }
                  else
                    {
                      ATerm a_83 = NULL;
                      t = j_82;
                      t = De_Escape_0_0(t);
                      a_83 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_83), i_82);
                    }
                }
              else
                {
                  ATerm d_83 = NULL;
                  t = j_82;
                  t = De_Escape_0_0(t);
                  d_83 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_83), i_82);
                }
            }
        }
      else
        {
          ATerm g_83 = NULL;
          t = j_82;
          t = De_Escape_0_0(t);
          g_83 = t;
          t = (ATerm) ATinsert(CheckATermList(g_83), i_82);
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
  ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL;
  p_83 = t;
  t = SSL_explode_string(p_83);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_83 = ATgetFirst((ATermList) t);
      t_83 = (ATerm) ATgetNext((ATermList) t);
      t = t_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_83 = ATgetFirst((ATermList) t);
          r_83 = (ATerm) ATgetNext((ATermList) t);
          t = q_83;
          if(match_int(t, 34))
            {
              t = s_83;
              if(match_int(t, 92))
                {
                  ATerm y_32 = t;
                  int z_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_83 = NULL;
                      t = r_83;
                      t = De_Escape_0_0(t);
                      w_83 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_83), term_s_32);
                      LocalPopChoice(z_32);
                    }
                  else
                    {
                      t = y_32;
                      {
                        ATerm z_83 = NULL;
                        t = t_83;
                        t = De_Escape_0_0(t);
                        z_83 = t;
                        t = (ATerm) ATinsert(CheckATermList(z_83), s_83);
                      }
                    }
                }
              else
                {
                  ATerm c_84 = NULL;
                  t = t_83;
                  t = De_Escape_0_0(t);
                  c_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(c_84), s_83);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = s_83;
                  if(match_int(t, 92))
                    {
                      ATerm a_33 = t;
                      int b_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_84 = NULL;
                          t = r_83;
                          t = De_Escape_0_0(t);
                          e_84 = t;
                          t = (ATerm) ATinsert(CheckATermList(e_84), term_x_32);
                          LocalPopChoice(b_33);
                        }
                      else
                        {
                          t = a_33;
                          {
                            ATerm h_84 = NULL;
                            t = t_83;
                            t = De_Escape_0_0(t);
                            h_84 = t;
                            t = (ATerm) ATinsert(CheckATermList(h_84), s_83);
                          }
                        }
                    }
                  else
                    {
                      ATerm k_84 = NULL;
                      t = t_83;
                      t = De_Escape_0_0(t);
                      k_84 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_84), s_83);
                    }
                }
              else
                {
                  ATerm n_84 = NULL;
                  t = t_83;
                  t = De_Escape_0_0(t);
                  n_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_84), s_83);
                }
            }
        }
      else
        {
          ATerm q_84 = NULL;
          t = t_83;
          t = De_Escape_0_0(t);
          q_84 = t;
          t = (ATerm) ATinsert(CheckATermList(q_84), s_83);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  o_83 = t;
  t = SSL_implode_string(o_83);
  return(t);
}
ATerm at_last_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  static ATerm m_85 (ATerm t);
  static ATerm m_85 (ATerm t)
  {
    ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
    j_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_85 = ATgetFirst((ATermList) t);
        l_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_33 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_44 = NULL,u_17 = NULL;
          t = SSLgetAnnotations(j_85);
          v_44 = t;
          t = l_85;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(l_85), k_85);
          u_17 = t;
          t = SSLsetAnnotations(u_17, v_44);
          t = y_104(t);
          LocalPopChoice(e_33);
        }
      else
        {
          t = c_33;
          {
            ATerm r_45 = NULL,w_45 = NULL,x_17 = NULL;
            t = SSLgetAnnotations(j_85);
            r_45 = t;
            t = l_85;
            t = m_85(t);
            w_45 = t;
            t = (ATerm) ATinsert(CheckATermList(w_45), k_85);
            x_17 = t;
            t = SSLsetAnnotations(x_17, r_45);
          }
        }
    }
    return(t);
  }
  t = m_85(t);
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
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
  t_85 = t;
  t = SSL_explode_string(t_85);
  p_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_85 = ATgetFirst((ATermList) t);
      {
        ATerm h_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_85;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = p_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_33 = ATgetFirst((ATermList) t);
      r_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_85;
  t = at_last_1_0(l_2, t);
  q_85 = t;
  t = SSL_implode_string(q_85);
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
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
  o_86 = t;
  if(match_cons(t, sym_cf_1))
    {
      m_86 = ATgetArgument(t, 0);
      {
        ATerm q_86 = NULL;
        t = m_86;
        t = PpSym_0_0(t);
        q_86 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_33)), q_86), (ATerm) ATinsert(ATempty, term_m_33));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          m_86 = ATgetArgument(t, 0);
          {
            ATerm s_86 = NULL;
            t = m_86;
            t = PpSym_0_0(t);
            s_86 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_33)), s_86), (ATerm) ATinsert(ATempty, term_m_33));
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
                  m_86 = ATgetArgument(t, 0);
                  n_86 = ATgetArgument(t, 1);
                  {
                    ATerm v_86 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(n_86), m_86);
                    t = map_1_0(PpSym_0_0, t);
                    v_86 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_33)), v_86), (ATerm) ATinsert(ATempty, term_q_33));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      m_86 = ATgetArgument(t, 0);
                      t = m_86;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(m_2, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          m_86 = ATgetArgument(t, 0);
                          t = m_86;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(n_2, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              m_86 = ATgetArgument(t, 0);
                              t = m_86;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(o_2, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  m_86 = ATgetArgument(t, 0);
                                  n_86 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_87 = NULL,c_87 = NULL;
                                    t = m_86;
                                    t = PpSym_0_0(t);
                                    b_87 = t;
                                    t = n_86;
                                    t = PpSym_0_0(t);
                                    c_87 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_33)), c_87), b_87), (ATerm) ATinsert(ATempty, term_s_33));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      m_86 = ATgetArgument(t, 0);
                                      n_86 = ATgetArgument(t, 1);
                                      {
                                        ATerm f_87 = NULL,g_87 = NULL;
                                        t = m_86;
                                        t = PpSym_0_0(t);
                                        f_87 = t;
                                        t = n_86;
                                        t = PpSym_0_0(t);
                                        g_87 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_33)), g_87), f_87), (ATerm) ATinsert(ATempty, term_s_33));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm w_33 = t;
                                      int x_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              m_86 = ATgetArgument(t, 0);
                                              {
                                                ATerm z_33 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(x_33);
                                          {
                                            ATerm i_87 = NULL;
                                            t = m_86;
                                            t = PpSym_0_0(t);
                                            i_87 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_34)), i_87);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = w_33;
                                          {
                                            ATerm b_34 = t;
                                            int c_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    m_86 = ATgetArgument(t, 0);
                                                    n_86 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_34 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(c_34);
                                                {
                                                  ATerm m_87 = NULL,n_87 = NULL;
                                                  t = m_86;
                                                  t = PpSym_0_0(t);
                                                  m_87 = t;
                                                  t = n_86;
                                                  t = PpSym_0_0(t);
                                                  n_87 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_34)), n_87), m_87);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = b_34;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    m_86 = ATgetArgument(t, 0);
                                                    n_86 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_87 = NULL,r_87 = NULL;
                                                      t = m_86;
                                                      t = PpSym_0_0(t);
                                                      q_87 = t;
                                                      t = n_86;
                                                      t = PpSym_0_0(t);
                                                      r_87 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_87), (ATerm) ATinsert(ATempty, term_e_34)), q_87);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        m_86 = ATgetArgument(t, 0);
                                                        n_86 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_87 = NULL,v_87 = NULL;
                                                          t = m_86;
                                                          t = filter_1_0(PpSym_0_0, t);
                                                          t = concat_0_0(t);
                                                          u_87 = t;
                                                          t = n_86;
                                                          t = PpSym_0_0(t);
                                                          v_87 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_87), (ATerm) ATinsert(ATempty, term_f_34)), u_87);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            m_86 = ATgetArgument(t, 0);
                                                            n_86 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm y_87 = NULL,z_87 = NULL;
                                                              t = m_86;
                                                              t = PpSym_0_0(t);
                                                              y_87 = t;
                                                              t = n_86;
                                                              t = PpSym_0_0(t);
                                                              z_87 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_87), (ATerm) ATinsert(ATempty, term_h_34)), y_87);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                m_86 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, m_86);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    m_86 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm e_46 = NULL;
                                                                      t = m_86;
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
                                                                            m_86 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm n_34 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(m_34);
                                                                        {
                                                                          ATerm m_46 = NULL;
                                                                          t = m_86;
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
static ATerm w_89 (ATerm q_88, ATerm r_88, ATerm s_88, ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL;
  t = q_88;
  if(match_cons(t, sym_cf_1))
    {
      x_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_88;
  {
    ATerm t_34 = t;
    if((PushChoice() == 0))
      {
        ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL,a_18 = NULL;
        b_89 = t;
        if(match_cons(t, sym_sort_1))
          {
            a_89 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_89);
        z_88 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, a_89);
        a_18 = t;
        t = SSLsetAnnotations(a_18, z_88);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_34;
      }
  }
  t = PpSym_0_0(t);
  w_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_34)), w_88), (ATerm) ATinsert(ATempty, term_v_34));
  t = concat_0_0(t);
  y_88 = t;
  t = SSL_concat_strings(y_88);
  v_88 = t;
  t = SSL_mkterm(v_88, r_88);
  return(t);
}
static ATerm x_89 (ATerm c_89, ATerm d_89, ATerm e_89, ATerm t)
{
  ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,b_18 = NULL;
  t = c_89;
  if(match_cons(t, sym_cf_1))
    {
      i_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_89;
  if(match_cons(t, sym_sort_1))
    {
      l_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_89);
  k_89 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, l_89);
  b_18 = t;
  t = SSLsetAnnotations(b_18, k_89);
  t = PpSym_0_0(t);
  j_89 = t;
  t = SSL_concat_strings(j_89);
  h_89 = t;
  t = SSL_mkterm(h_89, d_89);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL,p_89 = NULL,q_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL;
  m_89 = t;
  if(match_cons(t, sym_appl_2))
    {
      n_89 = ATgetArgument(t, 0);
      s_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_89;
  if(match_cons(t, sym_prod_3))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      p_89 = ATgetArgument(t, 1);
      {
        ATerm x_34 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_89 = ATgetFirst((ATermList) t);
      u_89 = (ATerm) ATgetNext((ATermList) t);
      t = u_89;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = p_89;
          if(match_cons(t, sym_sort_1))
            {
              q_89 = ATgetArgument(t, 0);
              t = q_89;
              if(match_string(t, "<START>"))
                {
                  ATerm z_34 = t;
                  int a_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_89(p_89, s_89, m_89, t);
                      LocalPopChoice(a_35);
                    }
                  else
                    {
                      t = z_34;
                      {
                        ATerm b_35 = t;
                        int c_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_89(p_89, s_89, m_89, t);
                            LocalPopChoice(c_35);
                          }
                        else
                          {
                            t = b_35;
                            t = t_89;
                          }
                      }
                    }
                }
              else
                {
                  ATerm d_35 = t;
                  int e_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_89(p_89, s_89, m_89, t);
                      LocalPopChoice(e_35);
                    }
                  else
                    {
                      t = d_35;
                      t = x_89(p_89, s_89, m_89, t);
                    }
                }
            }
          else
            {
              ATerm g_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_89(p_89, s_89, m_89, t);
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = g_35;
                  t = x_89(p_89, s_89, m_89, t);
                }
            }
        }
      else
        {
          t = p_89;
          {
            ATerm j_35 = t;
            int k_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_89(p_89, s_89, m_89, t);
                LocalPopChoice(k_35);
              }
            else
              {
                t = j_35;
                t = x_89(p_89, s_89, m_89, t);
              }
          }
        }
    }
  else
    {
      t = p_89;
      {
        ATerm l_35 = t;
        int m_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_89(p_89, s_89, m_89, t);
            LocalPopChoice(m_35);
          }
        else
          {
            t = l_35;
            t = x_89(p_89, s_89, m_89, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  static ATerm y_89 (ATerm t);
  static ATerm y_89 (ATerm t)
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_96(t);
        t = y_89(t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = l_96(t);
      }
    return(t);
  }
  t = y_89(t);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  k_90 = t;
  if(match_cons(t, sym_appl_2))
    {
      l_90 = ATgetArgument(t, 0);
      r_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_90;
  if(match_cons(t, sym_prod_3))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      n_90 = ATgetArgument(t, 1);
      {
        ATerm q_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_90;
  if(match_cons(t, sym_cf_1))
    {
      o_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_90;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(r_90);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          p_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_90;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = r_90;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_r_35;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_90 = ATgetFirst((ATermList) t);
              t_90 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_90;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, s_90));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  static ATerm j_91 (ATerm t);
  static ATerm j_91 (ATerm t)
  {
    ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL;
    i_91 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_91 = ATgetFirst((ATermList) t);
        h_91 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_46 = NULL,c_47 = NULL,e_18 = NULL;
          t = SSLgetAnnotations(i_91);
          z_46 = t;
          t = h_91;
          t = j_91(t);
          c_47 = t;
          t = (ATerm) ATinsert(CheckATermList(c_47), g_91);
          e_18 = t;
          t = SSLsetAnnotations(e_18, z_46);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_91;
        t = n_104(t);
      }
    return(t);
  }
  t = j_91(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL;
  m_91 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_91;
    }
  else
    {
      static ATerm q_2 (ATerm t);
      static ATerm q_2 (ATerm t)
      {
        t = not_null(o_91);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_91 = ATgetFirst((ATermList) t);
          if(((o_91 != NULL) && (o_91 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_91;
      t = at_end_1_0(q_2, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm u_91 = NULL;
  static ATerm l_92 (ATerm t);
  static ATerm l_92 (ATerm t)
  {
    ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
    i_92 = t;
    if(match_cons(t, sym_appl_2))
      {
        g_92 = ATgetArgument(t, 0);
        h_92 = ATgetArgument(t, 1);
        {
          ATerm s_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_47 = NULL,m_47 = NULL,p_47 = NULL,g_18 = NULL;
              t = SSLgetAnnotations(i_92);
              m_47 = t;
              t = h_92;
              t = map_1_0(l_92, t);
              p_47 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, g_92, p_47);
              g_18 = t;
              t = SSLsetAnnotations(g_18, m_47);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm u_35 = ATgetArgument(t, 0);
                  l_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_47;
              t = concat_0_0(t);
              LocalPopChoice(t_35);
            }
          else
            {
              t = s_35;
              t = (ATerm) ATinsert(ATempty, i_92);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, i_92);
      }
    return(t);
  }
  t = l_92(t);
  u_91 = t;
  t = SSL_implode_string(u_91);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm d_93 = NULL,f_93 = NULL,g_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL;
  j_93 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_93 = ATgetArgument(t, 0);
      {
        ATerm y_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_93;
  if(match_cons(t, sym_prod_3))
    {
      l_93 = ATgetArgument(t, 0);
      m_93 = ATgetArgument(t, 1);
      {
        ATerm z_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = m_93;
  {
    ATerm d_36 = t;
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
        t = l_93;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_93 = ATgetFirst((ATermList) t);
            f_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_93;
        if(match_cons(t, sym_lex_1))
          {
            ATerm g_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_93;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_93;
        t = yield_0_0(t);
      }
    else
      {
        t = d_36;
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm k_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(i_36);
              t = j_93;
              t = yield_0_0(t);
            }
          else
            {
              t = h_36;
              {
                ATerm l_36 = t;
                int m_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm n_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_36);
                    {
                      ATerm q_93 = NULL;
                      t = j_93;
                      t = yield_0_0(t);
                      q_93 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, q_93);
                    }
                  }
                else
                  {
                    t = l_36;
                    if(match_cons(t, sym_varsym_1))
                      {
                        n_93 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_93;
                    if(match_cons(t, sym_cf_1))
                      {
                        g_93 = ATgetArgument(t, 0);
                        t = g_93;
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
                              t = l_93;
                              {
                                ATerm w_36 = t;
                                int x_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_93 = NULL;
                                    t = j_93;
                                    t = yield_0_0(t);
                                    r_93 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, r_93);
                                    LocalPopChoice(x_36);
                                  }
                                else
                                  {
                                    t = w_36;
                                    {
                                      ATerm s_93 = NULL;
                                      t = j_93;
                                      t = yield_0_0(t);
                                      s_93 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, s_93);
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
                                    t = l_93;
                                    {
                                      ATerm d_37 = t;
                                      int e_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_93 = NULL;
                                          t = j_93;
                                          t = yield_0_0(t);
                                          t_93 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, t_93);
                                          LocalPopChoice(e_37);
                                        }
                                      else
                                        {
                                          t = d_37;
                                          {
                                            ATerm u_93 = NULL;
                                            t = j_93;
                                            t = yield_0_0(t);
                                            u_93 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, u_93);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = y_36;
                                    {
                                      ATerm l_37 = t;
                                      int m_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm n_37 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(m_37);
                                          t = l_93;
                                          {
                                            ATerm q_37 = t;
                                            int r_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_93 = NULL;
                                                t = j_93;
                                                t = yield_0_0(t);
                                                v_93 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, v_93);
                                                LocalPopChoice(r_37);
                                              }
                                            else
                                              {
                                                t = q_37;
                                                {
                                                  ATerm w_93 = NULL;
                                                  t = j_93;
                                                  t = yield_0_0(t);
                                                  w_93 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, w_93);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = l_37;
                                          {
                                            ATerm s_37 = t;
                                            int t_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm v_37 = ATgetArgument(t, 0);
                                                    ATerm w_37 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(t_37);
                                                t = l_93;
                                                {
                                                  ATerm x_37 = t;
                                                  int y_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_93 = NULL;
                                                      t = j_93;
                                                      t = yield_0_0(t);
                                                      x_93 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, x_93);
                                                      LocalPopChoice(y_37);
                                                    }
                                                  else
                                                    {
                                                      t = x_37;
                                                      {
                                                        ATerm y_93 = NULL;
                                                        t = j_93;
                                                        t = yield_0_0(t);
                                                        y_93 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, y_93);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = s_37;
                                                {
                                                  ATerm z_93 = NULL;
                                                  t = j_93;
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
                            }
                        }
                      }
                    else
                      {
                        ATerm a_94 = NULL;
                        t = j_93;
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
  return(t);
}
ATerm downup2_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  t = p_97(t);
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      t = downup2_2_0(p_97, q_97, t);
      return(t);
    }
    t = SRTS_all(r_2, t);
  }
  t = q_97(t);
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
  ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL;
  b_100 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_99 = ATgetArgument(t, 0);
      a_100 = ATgetArgument(t, 1);
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,c_19 = NULL,q_18 = NULL;
            t = SSLgetAnnotations(b_100);
            o_53 = t;
            t = z_99;
            if(match_cons(t, sym_prod_3))
              {
                v_53 = ATgetArgument(t, 0);
                x_53 = ATgetArgument(t, 1);
                y_53 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_99);
            u_53 = t;
            t = v_53;
            t = filter_1_0(w_2, t);
            z_53 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, z_53, x_53, y_53);
            q_18 = t;
            t = SSLsetAnnotations(q_18, u_53);
            a_54 = t;
            t = a_100;
            t = filter_1_0(x_2, t);
            t_53 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, a_54, t_53);
            c_19 = t;
            t = SSLsetAnnotations(c_19, o_53);
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            t = b_100;
          }
      }
    }
  else
    {
      t = b_100;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm h_38 = t;
  if((PushChoice() == 0))
    {
      ATerm e_56 = NULL,g_56 = NULL,h_56 = NULL;
      g_56 = t;
      if(match_cons(t, sym_appl_2))
        {
          h_56 = ATgetArgument(t, 0);
          e_56 = ATgetArgument(t, 1);
          {
            ATerm c_61 = NULL,g_61 = NULL,h_61 = NULL,l_61 = NULL,m_61 = NULL,v_61 = NULL,w_61 = NULL,y_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,l_18 = NULL,k_18 = NULL,j_18 = NULL,i_18 = NULL;
            t = SSLgetAnnotations(g_56);
            c_61 = t;
            t = h_56;
            if(match_cons(t, sym_prod_3))
              {
                h_61 = ATgetArgument(t, 0);
                l_61 = ATgetArgument(t, 1);
                m_61 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_56);
            g_61 = t;
            t = l_61;
            if(match_cons(t, sym_cf_1))
              {
                y_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_61);
            w_61 = t;
            t = y_61;
            if(match_cons(t, sym_opt_1))
              {
                c_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_61);
            b_62 = t;
            t = c_62;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, c_62);
            i_18 = t;
            t = SSLsetAnnotations(i_18, b_62);
            d_62 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, d_62);
            j_18 = t;
            t = SSLsetAnnotations(j_18, w_61);
            a_62 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, h_61, a_62, m_61);
            k_18 = t;
            t = SSLsetAnnotations(k_18, g_61);
            v_61 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, v_61, e_56);
            l_18 = t;
            t = SSLsetAnnotations(l_18, c_61);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              h_56 = ATgetArgument(t, 0);
              {
                ATerm q_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,o_18 = NULL,m_18 = NULL;
                t = SSLgetAnnotations(g_56);
                q_62 = t;
                t = h_56;
                if(match_cons(t, sym_opt_1))
                  {
                    w_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_56);
                v_62 = t;
                t = w_62;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, w_62);
                m_18 = t;
                t = SSLsetAnnotations(m_18, v_62);
                x_62 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, x_62);
                o_18 = t;
                t = SSLsetAnnotations(o_18, q_62);
              }
            }
          else
            {
              ATerm f_63 = NULL,p_18 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  h_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_56);
              f_63 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, h_56);
              p_18 = t;
              t = SSLsetAnnotations(p_18, f_63);
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
      ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
      i_60 = t;
      if(match_cons(t, sym_appl_2))
        {
          j_60 = ATgetArgument(t, 0);
          h_60 = ATgetArgument(t, 1);
          {
            ATerm y_63 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,x_18 = NULL,w_18 = NULL,u_18 = NULL,r_18 = NULL;
            t = SSLgetAnnotations(i_60);
            y_63 = t;
            t = j_60;
            if(match_cons(t, sym_prod_3))
              {
                g_64 = ATgetArgument(t, 0);
                h_64 = ATgetArgument(t, 1);
                i_64 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_60);
            f_64 = t;
            t = h_64;
            if(match_cons(t, sym_cf_1))
              {
                l_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_64);
            k_64 = t;
            t = l_64;
            if(match_cons(t, sym_opt_1))
              {
                o_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_64);
            n_64 = t;
            t = o_64;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, o_64);
            r_18 = t;
            t = SSLsetAnnotations(r_18, n_64);
            p_64 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, p_64);
            u_18 = t;
            t = SSLsetAnnotations(u_18, k_64);
            m_64 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, g_64, m_64, i_64);
            w_18 = t;
            t = SSLsetAnnotations(w_18, f_64);
            j_64 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, j_64, h_60);
            x_18 = t;
            t = SSLsetAnnotations(x_18, y_63);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              j_60 = ATgetArgument(t, 0);
              {
                ATerm w_64 = NULL,y_64 = NULL,d_65 = NULL,e_65 = NULL,a_19 = NULL,z_18 = NULL;
                t = SSLgetAnnotations(i_60);
                w_64 = t;
                t = j_60;
                if(match_cons(t, sym_opt_1))
                  {
                    d_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_60);
                y_64 = t;
                t = d_65;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, d_65);
                z_18 = t;
                t = SSLsetAnnotations(z_18, y_64);
                e_65 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, e_65);
                a_19 = t;
                t = SSLsetAnnotations(a_19, w_64);
              }
            }
          else
            {
              ATerm m_65 = NULL,b_19 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  j_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_60);
              m_65 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, j_60);
              b_19 = t;
              t = SSLsetAnnotations(b_19, m_65);
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
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      LocalPopChoice(m_38);
    }
  else
    {
      t = j_38;
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
      ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL,d_19 = NULL;
      y_100 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_100);
      w_100 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_100);
      d_19 = t;
      t = SSLsetAnnotations(d_19, w_100);
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
      ATerm e_66 = NULL,f_66 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          e_66 = ATgetArgument(t, 0);
          {
            ATerm s_38 = ATgetArgument(t, 1);
            if(((ATgetType(s_38) == AT_LIST) && !(ATisEmpty(s_38))))
              {
                f_66 = ATgetFirst((ATermList) s_38);
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
      t = e_66;
      t = injection_0_0(t);
      t = f_66;
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
  ATerm x_95 = NULL,n_102 = NULL,h_102 = NULL,v_101 = NULL,o_101 = NULL,h_101 = NULL,c_101 = NULL,s_100 = NULL,l_100 = NULL,f_100 = NULL,g_96 = NULL;
  x_95 = t;
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_95 = NULL,z_95 = NULL;
        t = term_a_39;
        y_95 = t;
        t = term_b_39;
        z_95 = t;
        t = term_c_39;
        t = b_10(y_95, z_95, t);
        t = x_95;
        t = downup2_2_0(t_2, u_2, t);
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
      }
  }
  g_96 = t;
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_96 = NULL,j_96 = NULL;
        t = term_a_39;
        i_96 = t;
        t = term_f_39;
        j_96 = t;
        t = term_h_39;
        t = b_10(i_96, j_96, t);
        t = g_96;
        t = topdown_1_0(v_2, t);
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        t = g_96;
      }
  }
  f_100 = t;
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_100 = NULL,i_100 = NULL;
        t = term_a_39;
        h_100 = t;
        t = term_k_39;
        i_100 = t;
        t = term_l_39;
        t = b_10(h_100, i_100, t);
        t = f_100;
        t = topdown_1_0(y_2, t);
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        t = f_100;
      }
  }
  l_100 = t;
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_100 = NULL,o_100 = NULL;
        t = term_a_39;
        n_100 = t;
        t = term_p_39;
        o_100 = t;
        t = term_q_39;
        t = b_10(n_100, o_100, t);
        t = l_100;
        t = topdown_1_0(z_2, t);
        LocalPopChoice(o_39);
      }
    else
      {
        t = n_39;
        t = l_100;
      }
  }
  s_100 = t;
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_100 = NULL,v_100 = NULL;
        t = term_a_39;
        u_100 = t;
        t = term_v_39;
        v_100 = t;
        t = term_w_39;
        t = b_10(u_100, v_100, t);
        t = s_100;
        t = topdown_1_0(a_3, t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = s_100;
      }
  }
  c_101 = t;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_101 = NULL,f_101 = NULL;
        t = term_a_39;
        e_101 = t;
        t = term_z_39;
        f_101 = t;
        t = term_a_40;
        t = b_10(e_101, f_101, t);
        t = c_101;
        t = replace_appl_0_0(t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        t = c_101;
      }
  }
  h_101 = t;
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_101 = NULL,k_101 = NULL;
        t = term_a_39;
        j_101 = t;
        t = term_d_40;
        k_101 = t;
        t = term_e_40;
        t = b_10(j_101, k_101, t);
        t = h_101;
        t = bottomup_1_0(c_3, t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = h_101;
      }
  }
  o_101 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_101 = NULL,r_101 = NULL;
        t = term_a_39;
        q_101 = t;
        t = term_h_40;
        r_101 = t;
        t = term_i_40;
        t = b_10(q_101, r_101, t);
        t = o_101;
        t = topdown_1_0(d_3, t);
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = o_101;
      }
  }
  v_101 = t;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_101 = NULL,y_101 = NULL;
        t = term_a_39;
        x_101 = t;
        t = term_l_40;
        y_101 = t;
        t = term_m_40;
        t = b_10(x_101, y_101, t);
        t = v_101;
        t = topdown_1_0(e_3, t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        t = v_101;
      }
  }
  h_102 = t;
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
        t = term_a_39;
        x_66 = t;
        t = term_p_40;
        y_66 = t;
        t = term_q_40;
        t = b_10(x_66, y_66, t);
        t = h_102;
        if(match_cons(t, sym_parsetree_2))
          {
            w_66 = ATgetArgument(t, 0);
            {
              ATerm r_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = w_66;
        LocalPopChoice(o_40);
      }
    else
      {
        t = n_40;
        t = h_102;
      }
  }
  n_102 = t;
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_102;
        if((x_95 != t))
          {
            _fail(t);
          }
        t = n_102;
        {
          ATerm u_40 = t;
          int v_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_67 = NULL,i_67 = NULL;
              t = term_a_39;
              h_67 = t;
              t = term_w_40;
              i_67 = t;
              t = term_x_40;
              t = b_10(h_67, i_67, t);
              t = n_102;
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
        t = n_102;
      }
  }
  return(t);
}
static ATerm o_9 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm y_102 = NULL;
  t = SSL_fputc(a_41, b_41);
  y_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_102);
  return(t);
}
static ATerm p_9 (ATerm v_25, ATerm w_25, ATerm t)
{
  ATerm z_102 = NULL;
  t = SSL_write_term_to_stream_text(v_25, w_25);
  z_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_102);
  return(t);
}
static ATerm r_9 (ATerm n_103 (ATerm), ATerm l_236, ATerm b_26, ATerm t)
{
  ATerm a_103 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_236, term_y_40);
  t = v_9(t);
  a_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_103, b_26);
  t = n_103(t);
  t = fclose_0_0(t);
  t = b_26;
  return(t);
}
static ATerm q_9 (ATerm r_25, ATerm s_25, ATerm t)
{
  ATerm b_103 = NULL;
  t = SSL_write_term_to_stream_baf(r_25, s_25);
  b_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_103);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      if(match_cons(e_41, sym_Stream_1))
        {
          i_103 = ATgetArgument(e_41, 0);
        }
      else
        _fail(t);
      j_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9(i_103, j_103, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL,o_103 = NULL,p_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_41 = ATgetArgument(t, 0);
      if(match_cons(f_41, sym_Stream_1))
        {
          o_103 = ATgetArgument(f_41, 0);
        }
      else
        _fail(t);
      p_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(o_103, p_103, t);
  k_103 = t;
  t = term_g_41;
  l_103 = t;
  t = k_103;
  if(match_cons(t, sym_Stream_1))
    {
      m_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, k_103);
  t = o_9(l_103, m_103, t);
  return(t);
}
ATerm output_1_0 (ATerm z_128 (ATerm), ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL;
  t = z_128(t);
  d_103 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_103 = NULL,f_103 = NULL;
        t = term_a_39;
        e_103 = t;
        t = term_j_41;
        f_103 = t;
        t = term_n_41;
        t = b_10(e_103, f_103, t);
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
        t = term_o_41;
      }
  }
  c_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_103, d_103);
  {
    ATerm p_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_103 = NULL,h_103 = NULL;
        t = term_a_39;
        g_103 = t;
        t = term_s_41;
        h_103 = t;
        t = term_t_41;
        t = b_10(g_103, h_103, t);
        t = (ATerm) ATmakeAppl(sym__2, c_103, d_103);
        LocalPopChoice(r_41);
        if(match_cons(t, sym__2))
          {
            ATerm u_41 = ATgetArgument(t, 0);
            ATerm x_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_9(f_3, c_103, d_103, t);
      }
    else
      {
        t = p_41;
        if(match_cons(t, sym__2))
          {
            ATerm y_41 = ATgetArgument(t, 0);
            ATerm b_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_9(g_3, c_103, d_103, t);
      }
  }
  return(t);
}
static ATerm i_104 (ATerm a_104, ATerm t)
{
  t = SSL_fclose(a_104);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL;
  e_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_104 = ATgetArgument(t, 0);
      {
        ATerm c_42 = t;
        int d_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_104);
            LocalPopChoice(d_42);
          }
        else
          {
            t = c_42;
            t = i_104(e_104, t);
          }
      }
    }
  else
    {
      t = i_104(e_104, t);
    }
  return(t);
}
static ATerm s_9 (ATerm x_25, ATerm t)
{
  t = SSL_read_term_from_stream(x_25);
  return(t);
}
static ATerm t_9 (ATerm t_39, ATerm u_39, ATerm t)
{
  t = SSL_strcat(t_39, u_39);
  return(t);
}
static ATerm u_9 (ATerm c_41, ATerm d_41, ATerm t)
{
  ATerm j_104 = NULL;
  t = SSL_fopen(c_41, d_41);
  j_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_104);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_104 = NULL;
  t = SSL_stdin_stream();
  k_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_104);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_104 = NULL;
  t = SSL_stdout_stream();
  l_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_104);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_104 = NULL;
  t = SSL_stderr_stream();
  m_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_104);
  return(t);
}
static ATerm x_105 (ATerm u_104, ATerm t)
{
  ATerm v_104 = NULL;
  t = SSL_explode_term(u_104);
  if(match_cons(t, sym__2))
    {
      ATerm e_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_42 = ATgetArgument(t, 1);
        if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
          {
            v_104 = ATgetFirst((ATermList) f_42);
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
  t = v_104;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_104;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_104;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_104;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_105 (ATerm a_105, ATerm b_105, ATerm c_105, ATerm t)
{
  ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL,i_105 = NULL,k_20 = NULL;
  t = SSLgetAnnotations(c_105);
  f_105 = t;
  t = a_105;
  if(match_cons(t, sym_Path_1))
    {
      i_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_105, b_105);
  k_20 = t;
  t = SSLsetAnnotations(k_20, f_105);
  if(match_cons(t, sym__2))
    {
      d_105 = ATgetArgument(t, 0);
      e_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(d_105, e_105, t);
  return(t);
}
static ATerm z_105 (ATerm k_105, ATerm l_105, ATerm m_105, ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL,s_105 = NULL,l_20 = NULL;
  t = SSLgetAnnotations(m_105);
  p_105 = t;
  t = SSL_is_string(k_105);
  s_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_105, l_105);
  l_20 = t;
  t = SSLsetAnnotations(l_20, p_105);
  if(match_cons(t, sym__2))
    {
      n_105 = ATgetArgument(t, 0);
      o_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(n_105, o_105, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL;
  u_105 = t;
  if(match_cons(t, sym__2))
    {
      v_105 = ATgetArgument(t, 0);
      w_105 = ATgetArgument(t, 1);
      {
        ATerm h_42 = t;
        int i_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_105(u_105, t);
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
                  t = y_105(v_105, w_105, u_105, t);
                  LocalPopChoice(k_42);
                }
              else
                {
                  t = j_42;
                  t = z_105(v_105, w_105, u_105, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_105(u_105, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL,i_106 = NULL;
  i_106 = t;
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_106, term_p_42);
        t = v_9(t);
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
        {
          ATerm d_68 = NULL,e_68 = NULL;
          t = term_r_42;
          e_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_42, i_106);
          t = t_9(e_68, i_106, t);
          d_68 = t;
          t = SSL_perror(d_68);
          _fail(t);
        }
      }
  }
  c_106 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_9(d_106, t);
  b_106 = t;
  t = c_106;
  t = fclose_0_0(t);
  t = b_106;
  return(t);
}
ATerm input_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  ATerm s_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_106 = NULL,m_106 = NULL;
      t = term_a_39;
      l_106 = t;
      t = term_v_42;
      m_106 = t;
      t = term_w_42;
      t = b_10(l_106, m_106, t);
      LocalPopChoice(u_42);
    }
  else
    {
      t = s_42;
      t = term_x_42;
    }
  t = ReadFromFile_0_0(t);
  t = a_129(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL;
  n_106 = t;
  t = term_y_42;
  t = whoami_0_0(t);
  o_106 = t;
  t = term_z_42;
  q_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_43), o_106), term_a_43);
  r_106 = t;
  t = SSL_printnl(q_106, r_106);
  t = term_h_18;
  p_106 = t;
  t = SSL_exit(p_106);
  t = n_106;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm t_106 = NULL;
  t_106 = t;
  if(match_string(t, "-k"))
    {
      t = t_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_106;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
  u_106 = t;
  t = SSL_string_to_int(u_106);
  v_106 = t;
  t = term_c_43;
  w_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_43, v_106);
  t = e_10(w_106, v_106, t);
  t = u_106;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_d_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, j_3, t_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm y_106 = NULL;
  y_106 = t;
  if(match_string(t, "-S"))
    {
      t = y_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_106;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL;
  t = term_e_43;
  z_106 = t;
  t = term_f_43;
  a_107 = t;
  t = term_h_43;
  t = e_10(z_106, a_107, t);
  t = term_j_43;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_k_43;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL;
  b_107 = t;
  t = SSL_string_to_int(b_107);
  c_107 = t;
  t = term_e_43;
  d_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, c_107);
  t = e_10(d_107, c_107, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_107);
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
  ATerm e_107 = NULL,f_107 = NULL;
  t = term_n_43;
  e_107 = t;
  t = term_y_42;
  f_107 = t;
  t = term_p_43;
  t = e_10(e_107, f_107, t);
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
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_4, d_4, e_4, t);
            LocalPopChoice(x_43);
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
static ATerm e_10 (ATerm j_59, ATerm k_59, ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL;
  t = term_a_39;
  g_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_39, j_59, k_59);
  t = lookup_table_0_1(g_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(j_59, k_59, h_107, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_39, j_59, k_59);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_107 = NULL,m_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_107 = NULL,o_107 = NULL,p_107 = NULL;
      t = term_y_42;
      t = h_0(t);
      n_107 = t;
      t = term_y_43;
      o_107 = t;
      t = term_z_43;
      p_107 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_43, term_z_43, n_107);
      t = c_10(o_107, p_107, n_107, t);
      _fail(t);
    }
  else
    {
      ATerm s_107 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_107 = ATgetFirst((ATermList) t);
          m_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_107;
      t = d_0(t);
      t = term_y_42;
      t = g_0(t);
      s_107 = t;
      t = (ATerm) ATinsert(CheckATermList(m_107), s_107);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm u_107 = NULL;
  u_107 = t;
  if(match_string(t, "-o"))
    {
      t = u_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_107;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL;
  v_107 = t;
  t = term_j_41;
  w_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_41, v_107);
  t = e_10(w_107, v_107, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_107);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
static ATerm c_10 (ATerm o_61, ATerm p_61, ATerm n_61, ATerm t)
{
  ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL;
  y_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_61, p_61);
  {
    ATerm b_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_44 = ATgetArgument(t, 0);
            ATerm f_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_61, p_61);
        t = b_10(o_61, p_61, t);
        LocalPopChoice(d_44);
      }
    else
      {
        t = b_44;
        t = (ATerm) ATempty;
      }
  }
  z_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_61, p_61, (ATerm) ATinsert(CheckATermList(z_107), n_61));
  t = lookup_table_0_1(o_61, t);
  c_108 = t;
  t = (ATerm) ATinsert(CheckATermList(z_107), n_61);
  a_108 = t;
  t = c_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(p_61, a_108, b_108, t);
  t = y_107;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_108 = NULL,o_108 = NULL,p_108 = NULL;
      t = term_y_42;
      t = r_0(t);
      n_108 = t;
      t = term_y_43;
      o_108 = t;
      t = term_z_43;
      p_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_43, term_z_43, n_108);
      t = c_10(o_108, p_108, n_108, t);
      _fail(t);
    }
  else
    {
      ATerm t_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_108 = ATgetFirst((ATermList) t);
          k_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_108 = ATgetFirst((ATermList) t);
          m_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_108;
      t = p_0(t);
      t = l_108;
      t = q_0(t);
      t_108 = t;
      t = (ATerm) ATinsert(CheckATermList(m_108), t_108);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm v_108 = NULL;
  v_108 = t;
  if(match_string(t, "-i"))
    {
      t = v_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_108;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm w_108 = NULL,x_108 = NULL;
  w_108 = t;
  t = term_v_42;
  x_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_42, w_108);
  t = e_10(x_108, w_108, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_108);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_g_44;
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
  ATerm y_108 = NULL,z_108 = NULL;
  y_108 = t;
  t = term_b_39;
  z_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_39, y_108);
  t = e_10(z_108, y_108, t);
  t = y_108;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--layout", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm a_109 = NULL,b_109 = NULL;
  a_109 = t;
  t = term_f_39;
  b_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_39, a_109);
  t = e_10(b_109, a_109, t);
  t = a_109;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_i_44;
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
  ATerm c_109 = NULL,d_109 = NULL;
  c_109 = t;
  t = term_v_39;
  d_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_39, c_109);
  t = e_10(d_109, c_109, t);
  t = c_109;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_j_44;
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
  ATerm e_109 = NULL,f_109 = NULL;
  e_109 = t;
  t = term_h_40;
  f_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_40, e_109);
  t = e_10(f_109, e_109, t);
  t = e_109;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--appl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm g_109 = NULL,h_109 = NULL;
  g_109 = t;
  t = term_z_39;
  h_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_39, g_109);
  t = e_10(h_109, g_109, t);
  t = g_109;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_m_44;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--nt", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm i_109 = NULL,j_109 = NULL;
  i_109 = t;
  t = term_k_39;
  j_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_39, i_109);
  t = e_10(j_109, i_109, t);
  t = i_109;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_o_44;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--inj", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL;
  k_109 = t;
  t = term_d_40;
  l_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_40, k_109);
  t = e_10(l_109, k_109, t);
  t = k_109;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_p_44;
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
  ATerm m_109 = NULL,n_109 = NULL;
  m_109 = t;
  t = term_p_39;
  n_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_39, m_109);
  t = e_10(n_109, m_109, t);
  t = m_109;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--seq", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL;
  o_109 = t;
  t = term_l_40;
  p_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_40, o_109);
  t = e_10(p_109, o_109, t);
  t = o_109;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_r_44;
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
  ATerm q_109 = NULL,r_109 = NULL;
  q_109 = t;
  t = term_p_40;
  r_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_40, q_109);
  t = e_10(r_109, q_109, t);
  t = q_109;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_s_44;
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
  ATerm s_109 = NULL,t_109 = NULL;
  s_109 = t;
  t = term_w_40;
  t_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_40, s_109);
  t = e_10(t_109, s_109, t);
  t = s_109;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_t_44;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm u_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, s_4, u_4, t);
      LocalPopChoice(w_44);
    }
  else
    {
      t = u_44;
      {
        ATerm x_44 = t;
        int y_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(v_4, k_5, m_5, t);
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
                  t = Option_3_0(n_5, o_5, p_5, t);
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
                        t = Option_3_0(q_5, r_5, s_5, t);
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
                              t = Option_3_0(u_5, v_5, a_6, t);
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
                                    t = Option_3_0(e_6, i_6, j_6, t);
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
                                          t = Option_3_0(k_6, l_6, r_6, t);
                                          LocalPopChoice(i_45);
                                        }
                                      else
                                        {
                                          t = h_45;
                                          {
                                            ATerm j_45 = t;
                                            int n_45 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(s_6, t_6, u_6, t);
                                                LocalPopChoice(n_45);
                                              }
                                            else
                                              {
                                                t = j_45;
                                                {
                                                  ATerm o_45 = t;
                                                  int p_45 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(v_6, x_6, g_7, t);
                                                      LocalPopChoice(p_45);
                                                    }
                                                  else
                                                    {
                                                      t = o_45;
                                                      {
                                                        ATerm q_45 = t;
                                                        int s_45 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(l_7, m_7, n_7, t);
                                                            LocalPopChoice(s_45);
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
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_42;
  t = whoami_0_0(t);
  u_109 = t;
  t = term_z_42;
  w_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_45), u_109);
  x_109 = t;
  t = SSL_printnl(w_109, x_109);
  t = term_h_18;
  v_109 = t;
  t = SSL_exit(v_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL;
  t = term_a_39;
  y_109 = t;
  t = term_u_45;
  z_109 = t;
  t = term_v_45;
  t = b_10(y_109, z_109, t);
  return(t);
}
static ATerm w_9 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_43, w_43);
      LocalPopChoice(y_45);
    }
  else
    {
      t = x_45;
      t = SSL_addr(v_43, w_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t)
{
  ATerm b_110 = NULL,c_110 = NULL,d_110 = NULL;
  b_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_110;
      t = v_110(t);
    }
  else
    {
      ATerm g_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_110 = ATgetFirst((ATermList) t);
          d_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_110;
      t = foldr_2_0(v_110, w_110, t);
      g_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_110, g_110);
      t = w_110(t);
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
  t = w_9(y_68, z_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_110 = NULL,k_68 = NULL,m_68 = NULL;
  t = times_0_0(t);
  m_68 = t;
  t = SSL_explode_term(m_68);
  if(match_cons(t, sym__2))
    {
      ATerm z_45 = ATgetArgument(t, 0);
      k_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_68;
  t = foldr_2_0(s_7, t_7, t);
  j_110 = t;
  t = SSL_TicksToSeconds(j_110);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_110 = NULL,x_110 = NULL,y_110 = NULL;
  u_110 = t;
  if(match_cons(t, sym__2))
    {
      x_110 = ATgetArgument(t, 0);
      y_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_46 = t;
    int b_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_110;
        if((x_110 != t))
          {
            _fail(t);
          }
        t = u_110;
        LocalPopChoice(b_46);
      }
    else
      {
        t = a_46;
        t = (ATerm) ATmakeAppl(sym__2, x_110, y_110);
        {
          ATerm c_46 = t;
          int d_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_110, y_110);
              LocalPopChoice(d_46);
            }
          else
            {
              t = c_46;
              t = SSL_gtr(x_110, y_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_110, y_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_120 (ATerm), ATerm t)
{
  ATerm c_111 = NULL;
  c_111 = t;
  {
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL;
        t = term_a_39;
        f_111 = t;
        t = term_e_43;
        g_111 = t;
        t = term_h_46;
        t = b_10(f_111, g_111, t);
        e_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_111, term_h_18);
        t = geq_0_0(t);
        t = c_111;
        t = t_120(t);
        LocalPopChoice(g_46);
      }
    else
      {
        t = f_46;
        t = c_111;
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm i_111 = NULL,j_111 = NULL,l_111 = NULL,m_111 = NULL;
  t = run_time_0_0(t);
  i_111 = t;
  t = term_y_42;
  t = whoami_0_0(t);
  j_111 = t;
  t = term_z_42;
  l_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_46), i_111), term_i_46), j_111);
  m_111 = t;
  t = SSL_printnl(l_111, m_111);
  t = (ATerm) ATmakeAppl(sym__2, term_z_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_46), i_111), term_i_46), j_111));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_43;
  n_111 = t;
  t = SSL_exit(n_111);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL;
  y_111 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_111;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_111 = ATgetArgument(t, 0);
          {
            ATerm l_69 = NULL,o_20 = NULL;
            t = SSLgetAnnotations(y_111);
            l_69 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_111);
            o_20 = t;
            t = SSLsetAnnotations(o_20, l_69);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_111;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_128 (ATerm), ATerm t)
{
  ATerm k_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_111 = NULL,r_111 = NULL;
      t = term_a_39;
      q_111 = t;
      t = term_n_46;
      r_111 = t;
      t = term_o_46;
      t = b_10(q_111, r_111, t);
      LocalPopChoice(l_46);
    }
  else
    {
      t = k_46;
      t = fetch_1_0(v_7, t);
    }
  t = q_128(t);
  return(t);
}
static ATerm f_10 (ATerm g_66, ATerm h_66, ATerm i_66, ATerm t)
{
  ATerm b_112 = NULL;
  t = SSL_hashtable_put(i_66, g_66, h_66);
  b_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_112);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_63, ATerm t)
{
  ATerm k_112 = NULL;
  t = table_hashtable_0_0(t);
  k_112 = t;
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_69 = NULL;
        t = k_112;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_10(a_63, r_69, t);
        LocalPopChoice(q_46);
      }
    else
      {
        t = p_46;
        {
          ATerm w_69 = NULL;
          t = a_63;
          t = table_create_0_0(t);
          t = k_112;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_10(a_63, w_69, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_66, ATerm p_66, ATerm t)
{
  ATerm n_112 = NULL;
  t = SSL_hashtable_create(o_66, p_66);
  n_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_112);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,s_112 = NULL,t_112 = NULL;
  o_112 = t;
  t = term_r_46;
  s_112 = t;
  t = term_s_46;
  t_112 = t;
  t = o_112;
  t = new_hashtable_0_2(s_112, t_112, t);
  p_112 = t;
  t = o_112;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(o_112, p_112, q_112, t);
  t = o_112;
  return(t);
}
static ATerm y_9 (ATerm l_66, ATerm m_66, ATerm t)
{
  ATerm u_112 = NULL;
  t = SSL_hashtable_remove(m_66, l_66);
  u_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_112);
  return(t);
}
static ATerm z_9 (ATerm q_66, ATerm t)
{
  ATerm v_112 = NULL;
  t = SSL_hashtable_destroy(q_66);
  v_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_112);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_112 = NULL;
  t = SSL_table_hashtable();
  w_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_112);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_112 = NULL,y_112 = NULL,z_112 = NULL,a_113 = NULL;
  x_112 = t;
  t = table_hashtable_0_0(t);
  y_112 = t;
  t = lookup_table_0_1(x_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_9(a_113, t);
  t = y_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_9(x_112, z_112, t);
  t = x_112;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_113 = NULL,d_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_113 = ATgetFirst((ATermList) t);
      d_113 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_113 = NULL,i_113 = NULL;
        static ATerm w_7 (ATerm t);
        static ATerm w_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_113)), not_null(i_113));
          return(t);
        }
        t = d_113;
        t = m_0(t);
        if(((h_113 != NULL) && (h_113 != t)))
          _fail(t);
        else
          h_113 = t;
        t = c_113;
        t = l_0(t);
        if(((i_113 != NULL) && (i_113 != t)))
          _fail(t);
        else
          i_113 = t;
        t = d_113;
        t = reverse_acc_2_0(l_0, w_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_42;
      t = m_0(t);
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm x_113 = NULL,i_70 = NULL,r_70 = NULL;
  x_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_113), term_t_46);
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
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_113), term_t_46));
      }
  }
  i_70 = t;
  t = term_o_41;
  r_70 = t;
  t = SSL_printnl(r_70, i_70);
  t = (ATerm) ATinsert(ATinsert(ATempty, x_113), term_t_46);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,e_70 = NULL,f_70 = NULL;
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_113 = NULL,q_113 = NULL;
      t = term_a_39;
      p_113 = t;
      t = term_u_45;
      q_113 = t;
      t = term_v_45;
      t = b_10(p_113, q_113, t);
      m_113 = t;
      LocalPopChoice(x_46);
    }
  else
    {
      t = w_46;
      {
        static ATerm x_7 (ATerm t);
        static ATerm x_7 (ATerm t)
        {
          ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL,u_20 = NULL;
          t_113 = t;
          if(match_cons(t, sym_Program_1))
            {
              s_113 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_113);
          r_113 = t;
          t = s_113;
          if(((m_113 != NULL) && (m_113 != t)))
            _fail(t);
          else
            m_113 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, s_113);
          u_20 = t;
          t = SSLsetAnnotations(u_20, r_113);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(m_113)), term_b_47);
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
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(m_113)), term_b_47));
            }
        }
        z_69 = t;
        t = term_o_41;
        b_70 = t;
        t = SSL_printnl(b_70, z_69);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(m_113)), term_b_47);
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
  e_70 = t;
  t = term_o_41;
  f_70 = t;
  t = SSL_printnl(f_70, e_70);
  t = term_y_43;
  n_113 = t;
  t = term_z_43;
  o_113 = t;
  t = term_j_47;
  t = b_10(n_113, o_113, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(c_8, t);
  {
    ATerm k_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_70 = NULL,b_71 = NULL;
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
        u_70 = t;
        t = term_o_41;
        b_71 = t;
        t = SSL_printnl(b_71, u_70);
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
ATerm fetch_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  static ATerm w_114 (ATerm t);
  static ATerm w_114 (ATerm t)
  {
    ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL;
    t_114 = t;
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
          ATerm j_71 = NULL,n_71 = NULL,w_20 = NULL;
          t = SSLgetAnnotations(t_114);
          j_71 = t;
          t = u_114;
          t = g_104(t);
          n_71 = t;
          t = (ATerm) ATinsert(CheckATermList(v_114), n_71);
          w_20 = t;
          t = SSLsetAnnotations(w_20, j_71);
          LocalPopChoice(w_47);
        }
      else
        {
          t = v_47;
          {
            ATerm y_71 = NULL,b_72 = NULL,x_20 = NULL;
            t = SSLgetAnnotations(t_114);
            y_71 = t;
            t = v_114;
            t = w_114(t);
            b_72 = t;
            t = (ATerm) ATinsert(CheckATermList(b_72), u_114);
            x_20 = t;
            t = SSLsetAnnotations(x_20, y_71);
          }
        }
    }
    return(t);
  }
  t = w_114(t);
  return(t);
}
ATerm map_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  static ATerm p_115 (ATerm t);
  static ATerm p_115 (ATerm t)
  {
    ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL;
    m_115 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_115;
      }
    else
      {
        ATerm r_72 = NULL,u_72 = NULL,v_72 = NULL,u_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_115 = ATgetFirst((ATermList) t);
            o_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_115);
        r_72 = t;
        t = n_115;
        t = w_103(t);
        u_72 = t;
        t = o_115;
        t = p_115(t);
        v_72 = t;
        t = (ATerm) ATinsert(CheckATermList(v_72), u_72);
        u_21 = t;
        t = SSLsetAnnotations(u_21, r_72);
      }
    return(t);
  }
  t = p_115(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm x_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_116 = NULL;
      a_116 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_116;
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
          t = a_116;
        }
      LocalPopChoice(y_47);
    }
  else
    {
      t = x_47;
      {
        static ATerm r_117 (ATerm t);
        static ATerm r_117 (ATerm t)
        {
          ATerm o_117 = NULL,p_117 = NULL,q_117 = NULL;
          p_117 = t;
          if(match_cons(t, sym_iter_1))
            {
              q_117 = ATgetArgument(t, 0);
              {
                ATerm x_73 = NULL,w_21 = NULL;
                t = SSLgetAnnotations(p_117);
                x_73 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, q_117);
                w_21 = t;
                t = SSLsetAnnotations(w_21, x_73);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  q_117 = ATgetArgument(t, 0);
                  o_117 = ATgetArgument(t, 1);
                  {
                    ATerm s_74 = NULL,x_21 = NULL;
                    t = SSLgetAnnotations(p_117);
                    s_74 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, q_117, o_117);
                    x_21 = t;
                    t = SSLsetAnnotations(x_21, s_74);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      q_117 = ATgetArgument(t, 0);
                      {
                        ATerm b_75 = NULL,y_21 = NULL;
                        t = SSLgetAnnotations(p_117);
                        b_75 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, q_117);
                        y_21 = t;
                        t = SSLsetAnnotations(y_21, b_75);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          q_117 = ATgetArgument(t, 0);
                          o_117 = ATgetArgument(t, 1);
                          {
                            ATerm j_75 = NULL,z_21 = NULL;
                            t = SSLgetAnnotations(p_117);
                            j_75 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, q_117, o_117);
                            z_21 = t;
                            t = SSLsetAnnotations(z_21, j_75);
                          }
                        }
                      else
                        {
                          ATerm u_75 = NULL,y_75 = NULL,b_22 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              q_117 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(p_117);
                          u_75 = t;
                          t = q_117;
                          {
                            static ATerm d_8 (ATerm t);
                            static ATerm d_8 (ATerm t)
                            {
                              ATerm b_48 = t;
                              int c_48 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_76 = NULL,p_76 = NULL;
                                  p_76 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      n_76 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_77 = NULL,a_22 = NULL;
                                        t = SSLgetAnnotations(p_76);
                                        c_77 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, n_76);
                                        a_22 = t;
                                        t = SSLsetAnnotations(a_22, c_77);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = p_76;
                                    }
                                  LocalPopChoice(c_48);
                                }
                              else
                                {
                                  t = b_48;
                                  t = r_117(t);
                                }
                              return(t);
                            }
                            t = map_1_0(d_8, t);
                          }
                          y_75 = t;
                          t = (ATerm) ATmakeAppl(sym_seq_1, y_75);
                          b_22 = t;
                          t = SSLsetAnnotations(b_22, u_75);
                        }
                    }
                }
            }
          return(t);
        }
        t = r_117(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
  t = term_a_39;
  b_118 = t;
  t = term_u_45;
  c_118 = t;
  t = term_v_45;
  t = b_10(b_118, c_118, t);
  h_77 = t;
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
        t = (ATerm) ATinsert(ATempty, h_77);
      }
  }
  i_77 = t;
  t = term_o_41;
  j_77 = t;
  t = SSL_printnl(j_77, i_77);
  t = h_77;
  return(t);
}
static ATerm g_10 (ATerm j_66, ATerm k_66, ATerm t)
{
  t = SSL_hashtable_get(k_66, j_66);
  return(t);
}
static ATerm b_10 (ATerm h_63, ATerm i_63, ATerm t)
{
  ATerm d_118 = NULL;
  t = lookup_table_0_1(h_63, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_10(i_63, d_118, t);
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
  ATerm f_118 = NULL,g_118 = NULL;
  t = term_j_48;
  f_118 = t;
  t = term_y_42;
  g_118 = t;
  t = term_k_48;
  t = e_10(f_118, g_118, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_l_48;
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
  ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL;
  t = term_j_48;
  j_118 = t;
  t = term_y_42;
  k_118 = t;
  t = term_k_48;
  t = e_10(j_118, k_118, t);
  t = term_m_48;
  h_118 = t;
  t = term_y_42;
  i_118 = t;
  t = term_n_48;
  t = e_10(h_118, i_118, t);
  t = term_o_48;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_p_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_48 = t;
  int r_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_8, g_8, h_8, t);
      LocalPopChoice(r_48);
    }
  else
    {
      t = q_48;
      t = Option_3_0(i_8, j_8, l_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,l_24 = NULL;
  q_118 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_118 = ATgetFirst((ATermList) t);
      n_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_118);
  l_118 = t;
  t = m_118;
  t = l_76(t);
  o_118 = t;
  t = n_118;
  t = m_76(t);
  p_118 = t;
  t = (ATerm) ATinsert(CheckATermList(p_118), o_118);
  l_24 = t;
  t = SSLsetAnnotations(l_24, l_118);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,a_119 = NULL,b_119 = NULL,u_25 = NULL;
  v_118 = t;
  {
    ATerm s_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_48;
        t = p_123(t);
        LocalPopChoice(u_48);
      }
    else
      {
        t = s_48;
      }
  }
  t = v_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_118 = ATgetFirst((ATermList) t);
      y_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_118);
  w_118 = t;
  t = term_u_45;
  b_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_45, x_118);
  t = e_10(b_119, x_118, t);
  t = y_118;
  {
    static ATerm l_119 (ATerm t);
    static ATerm l_119 (ATerm t)
    {
      ATerm w_48 = t;
      int x_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_48 = t;
          int d_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_119 = NULL;
              e_119 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_119;
              LocalPopChoice(d_49);
            }
          else
            {
              t = y_48;
              t = p_123(t);
              t = Cons_2_0(_id, l_119, t);
            }
          LocalPopChoice(x_48);
        }
      else
        {
          t = w_48;
          {
            ATerm h_119 = NULL,i_119 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_119 = ATgetFirst((ATermList) t);
                i_119 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_119), (ATerm) ATmakeAppl(sym_Undefined_1, h_119));
          }
        }
      return(t);
    }
    t = l_119(t);
  }
  a_119 = t;
  t = (ATerm) ATinsert(CheckATermList(a_119), (ATerm) ATmakeAppl(sym_Program_1, x_118));
  u_25 = t;
  t = SSLsetAnnotations(u_25, w_118);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm y_119 = NULL;
  y_119 = t;
  if(match_string(t, "--help"))
    {
      t = y_119;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_119;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_119;
        }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm z_119 = NULL,a_120 = NULL;
  t = term_n_46;
  z_119 = t;
  t = term_y_42;
  a_120 = t;
  t = term_e_49;
  t = e_10(z_119, a_120, t);
  t = term_f_49;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_h_49;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_123 (ATerm), ATerm t)
{
  ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL;
  s_119 = t;
  t = term_y_43;
  t_119 = t;
  t = term_i_49;
  t = lookup_table_0_1(t_119, t);
  x_119 = t;
  t = term_z_43;
  u_119 = t;
  t = (ATerm) ATempty;
  v_119 = t;
  t = x_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(u_119, v_119, w_119, t);
  t = s_119;
  {
    static ATerm m_8 (ATerm t);
    static ATerm m_8 (ATerm t)
    {
      ATerm k_49 = t;
      int m_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_123(t);
          LocalPopChoice(m_49);
        }
      else
        {
          t = k_49;
          {
            ATerm n_49 = t;
            int o_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_8, o_8, p_8, t);
                LocalPopChoice(o_49);
              }
            else
              {
                t = n_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_8, t);
  }
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_120 = NULL;
        l_120 = t;
        {
          ATerm s_49 = t;
          int w_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_77 = NULL;
              t = l_120;
              {
                ATerm c_50 = t;
                int d_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_77 = NULL,o_77 = NULL;
                    t = term_a_39;
                    n_77 = t;
                    t = term_n_46;
                    o_77 = t;
                    t = term_o_46;
                    t = b_10(n_77, o_77, t);
                    LocalPopChoice(d_50);
                  }
                else
                  {
                    t = c_50;
                    t = fetch_1_0(q_8, t);
                  }
              }
              t = l_120;
              t = default_system_usage_0_0(t);
              t = term_f_43;
              m_77 = t;
              t = SSL_exit(m_77);
              LocalPopChoice(w_49);
            }
          else
            {
              t = s_49;
              {
                ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
                t = term_a_39;
                t_77 = t;
                t = term_j_48;
                u_77 = t;
                t = term_e_50;
                t = b_10(t_77, u_77, t);
                t = l_120;
                t = default_system_about_0_0(t);
                t = term_f_43;
                s_77 = t;
                t = SSL_exit(s_77);
              }
            }
        }
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        {
          ATerm f_50 = t;
          int g_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL;
              static ATerm r_8 (ATerm t);
              static ATerm r_8 (ATerm t)
              {
                ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL,v_26 = NULL;
                r_120 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_120 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_120);
                p_120 = t;
                t = q_120;
                if(((q_119 != NULL) && (q_119 != t)))
                  _fail(t);
                else
                  q_119 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_120);
                v_26 = t;
                t = SSLsetAnnotations(v_26, p_120);
                return(t);
              }
              t = fetch_1_0(r_8, t);
              t = term_z_42;
              n_120 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_119)), term_h_50);
              o_120 = t;
              t = SSL_printnl(n_120, o_120);
              t = (ATerm) ATmakeAppl(sym__2, term_z_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_119)), term_h_50));
              t = default_system_usage_0_0(t);
              t = term_h_18;
              m_120 = t;
              t = SSL_exit(m_120);
              LocalPopChoice(g_50);
            }
          else
            {
              t = f_50;
            }
        }
      }
  }
  r_119 = t;
  t = term_y_43;
  t = table_destroy_0_0(t);
  t = r_119;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t)
{
  ATerm x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL,b_121 = NULL;
  t = parse_options_1_0(s_128, t);
  x_120 = t;
  t = term_i_50;
  t = table_create_0_0(t);
  t = term_i_50;
  y_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_50, term_n_50, x_120);
  t = lookup_table_0_1(y_120, t);
  b_121 = t;
  t = term_n_50;
  z_120 = t;
  t = b_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(z_120, x_120, a_121, t);
  t = x_120;
  t = u_128(t);
  {
    ATerm o_50 = t;
    int q_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_128, t);
        LocalPopChoice(q_50);
      }
    else
      {
        t = o_50;
        {
          ATerm r_50 = t;
          int u_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_50);
            }
          else
            {
              t = r_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_8 (ATerm t)
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
                        t = Option_3_0(x_8, z_8, f_9, t);
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
static ATerm u_8 (ATerm t)
{
  t = input_1_0(j_9, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm d_121 = NULL,e_121 = NULL;
  t = term_s_41;
  d_121 = t;
  t = term_y_42;
  e_121 = t;
  t = term_f_51;
  t = e_10(d_121, e_121, t);
  t = term_g_51;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_h_51;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = output_1_0(implode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_8, default_usage_0_0, _id, u_8, t);
  return(t);
}

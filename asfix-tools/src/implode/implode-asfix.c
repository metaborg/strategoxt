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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_d_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_x_49;
ATerm term_g_49;
ATerm term_d_49;
ATerm term_y_48;
ATerm term_p_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_d_48;
ATerm term_z_47;
ATerm term_m_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_g_47;
ATerm term_d_47;
ATerm term_a_47;
ATerm term_w_46;
ATerm term_u_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_r_45;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_n_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_c_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_t_35;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_q_32;
ATerm term_m_32;
ATerm term_j_30;
ATerm term_a_30;
ATerm term_p_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_d_18;
ATerm term_t_17;
ATerm term_g_16;
ATerm term_b_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_z_38);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_d_39);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_h_39);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_n_39);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_r_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_v_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_z_39);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_d_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_j_40);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_n_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_x_40);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_j_41);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_u_41);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_t_42);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym__2, term_d_43, term_f_43);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_43);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__2, term_l_43, term_w_42);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
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
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_t_45);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_d_43);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_l_46);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(sym__2, term_u_43, term_v_43);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_z_47, term_w_42);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym__2, term_h_48, term_w_42);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym__2, term_l_46, term_w_42);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_z_47);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym__2, term_u_41, term_w_42);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm j_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm annotation_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm c_89 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm skip_concrete_1_0 (ATerm n_85 (ATerm), ATerm t);
static ATerm u_0 (ATerm f_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm q_8 (ATerm u_84 (ATerm), ATerm t_21, ATerm s_21, ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplCons_1_0 (ATerm b_85 (ATerm), ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm p_85 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_87 (ATerm), ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm j_59 (ATerm a_48, ATerm b_48, ATerm c_48, ATerm e_48, ATerm t);
static ATerm n_59 (ATerm l_49, ATerm m_49, ATerm n_49, ATerm o_49, ATerm t);
static ATerm q_59 (ATerm h_52, ATerm m_52, ATerm r_52, ATerm s_52, ATerm t);
static ATerm r_59 (ATerm k_57, ATerm o_57, ATerm r_57, ATerm w_57, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm l_87 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm o_88 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_101 (ATerm), ATerm t);
static ATerm k_80 (ATerm e_77, ATerm t);
static ATerm l_80 (ATerm p_78, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm y_94 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm o_89 (ATerm e_88, ATerm f_88, ATerm g_88, ATerm t);
static ATerm p_89 (ATerm s_88, ATerm t_88, ATerm u_88, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t);
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
static ATerm e_9 (ATerm o_41, ATerm p_41, ATerm t);
static ATerm f_9 (ATerm j_26, ATerm k_26, ATerm t);
static ATerm h_9 (ATerm n_93 (ATerm), ATerm h_224, ATerm p_26, ATerm t);
static ATerm g_9 (ATerm f_26, ATerm g_26, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_1_0 (ATerm j_117 (ATerm), ATerm t);
static ATerm g_103 (ATerm a_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_9 (ATerm l_26, ATerm t);
static ATerm j_9 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm k_9 (ATerm q_41, ATerm r_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_104 (ATerm q_103, ATerm t);
static ATerm s_104 (ATerm u_103, ATerm v_103, ATerm w_103, ATerm t);
static ATerm t_104 (ATerm e_104, ATerm f_104, ATerm g_104, ATerm t);
static ATerm l_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm k_117 (ATerm), ATerm t);
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
static ATerm s_9 (ATerm h_51, ATerm i_51, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_9 (ATerm m_53, ATerm n_53, ATerm l_53, ATerm t);
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
static ATerm m_9 (ATerm k_44, ATerm l_44, ATerm t);
ATerm foldr_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_109 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_94 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_93 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_9 (ATerm d_55, ATerm e_55, ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,g_15 = NULL,a_0 = NULL;
  g_15 = t;
  if(match_cons(t, sym_cons_1))
    {
      e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_15);
  d_15 = t;
  t = e_15;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("WithAnno", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cons_1, e_15);
  a_0 = t;
  t = SSLsetAnnotations(a_0, d_15);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm y_9 = t;
  if((PushChoice() == 0))
    {
      ATerm h_18 = NULL,i_18 = NULL,k_18 = NULL;
      i_18 = t;
      if(match_cons(t, sym_appl_2))
        {
          k_18 = ATgetArgument(t, 0);
          h_18 = ATgetArgument(t, 1);
          {
            ATerm l_6 = NULL,x_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,j_1 = NULL,i_1 = NULL,r_7 = NULL;
            t = SSLgetAnnotations(i_18);
            l_6 = t;
            t = k_18;
            if(match_cons(t, sym_prod_3))
              {
                b_7 = ATgetArgument(t, 0);
                c_7 = ATgetArgument(t, 1);
                d_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_18);
            x_6 = t;
            t = c_7;
            if(match_cons(t, sym_cf_1))
              {
                r_7 = ATgetArgument(t, 0);
                {
                  ATerm y_7 = NULL,c_8 = NULL,h_8 = NULL,i_8 = NULL,x_0 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(c_7);
                  y_7 = t;
                  t = r_7;
                  if(match_cons(t, sym_opt_1))
                    {
                      h_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_7);
                  c_8 = t;
                  t = h_8;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, h_8);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, c_8);
                  i_8 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, i_8);
                  x_0 = t;
                  t = SSLsetAnnotations(x_0, y_7);
                }
              }
            else
              {
                ATerm n_8 = NULL,y_0 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    r_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_7);
                n_8 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, r_7);
                y_0 = t;
                t = SSLsetAnnotations(y_0, n_8);
              }
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, b_7, e_7, d_7);
            i_1 = t;
            t = SSLsetAnnotations(i_1, x_6);
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, f_7, h_18);
            j_1 = t;
            t = SSLsetAnnotations(j_1, l_6);
          }
        }
      else
        {
          ATerm c_9 = NULL,n_9 = NULL,o_9 = NULL,t_9 = NULL,l_1 = NULL,k_1 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              k_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_18);
          c_9 = t;
          t = k_18;
          if(match_cons(t, sym_opt_1))
            {
              o_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_18);
          n_9 = t;
          t = o_9;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, o_9);
          k_1 = t;
          t = SSLsetAnnotations(k_1, n_9);
          t_9 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, t_9);
          l_1 = t;
          t = SSLsetAnnotations(l_1, c_9);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_9;
    }
  {
    ATerm z_9 = t;
    if((PushChoice() == 0))
      {
        ATerm r_18 = NULL,x_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,q_20 = NULL,s_2 = NULL,i_2 = NULL;
        q_20 = t;
        if(match_cons(t, sym_appl_2))
          {
            x_18 = ATgetArgument(t, 0);
            c_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_20);
        r_18 = t;
        t = x_18;
        if(match_cons(t, sym_prod_3))
          {
            e_19 = ATgetArgument(t, 0);
            k_19 = ATgetArgument(t, 1);
            l_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_18);
        d_19 = t;
        t = k_19;
        t = oncetd_1_0(t_0, t);
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, e_19, m_19, l_19);
        i_2 = t;
        t = SSLsetAnnotations(i_2, d_19);
        n_19 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, n_19, c_19);
        s_2 = t;
        t = SSLsetAnnotations(s_2, r_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_9;
      }
  }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm r_20 = NULL,z_20 = NULL,a_21 = NULL,w_1 = NULL;
  a_21 = t;
  if(match_cons(t, sym_lex_1))
    {
      z_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_21);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, z_20);
  w_1 = t;
  t = SSLsetAnnotations(w_1, r_20);
  return(t);
}
ATerm annotation_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,o_14 = NULL,p_14 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,v_0 = NULL,h_0 = NULL,b_0 = NULL;
  c_15 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_15);
  i_14 = t;
  t = j_14;
  if(match_cons(t, sym_prod_3))
    {
      o_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
      t_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_14);
  l_14 = t;
  t = t_14;
  if(match_cons(t, sym_attrs_1))
    {
      z_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_14);
  w_14 = t;
  t = z_14;
  t = oncetd_1_0(j_0, t);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, a_15);
  b_0 = t;
  t = SSLsetAnnotations(b_0, w_14);
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, o_14, p_14, b_15);
  h_0 = t;
  t = SSLsetAnnotations(h_0, l_14);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, u_14, k_14);
  v_0 = t;
  t = SSLsetAnnotations(v_0, i_14);
  t = k_14;
  t = filter_1_0(s_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_13 = ATgetFirst((ATermList) t);
      x_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_13;
  t = m_85(t);
  y_13 = t;
  t = x_13;
  t = l_85(t);
  z_13 = t;
  t = term_b_10;
  g_14 = t;
  t = (ATerm) ATinsert(CheckATermList(z_13), y_13);
  h_14 = t;
  t = SSL_mkterm(g_14, h_14);
  return(t);
}
ATerm alltd_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  static ATerm f_21 (ATerm t)
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_89(t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = SRTS_all(f_21, t);
      }
    return(t);
  }
  t = f_21(t);
  return(t);
}
ATerm appl_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,i_3 = NULL;
  r_21 = t;
  if(match_cons(t, sym_appl_2))
    {
      h_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_21);
  g_21 = t;
  t = h_21;
  t = n_78(t);
  p_21 = t;
  t = o_21;
  t = o_78(t);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, p_21, q_21);
  i_3 = t;
  t = SSLsetAnnotations(i_3, g_21);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,j_25 = NULL,k_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,d_6 = NULL,b_6 = NULL;
  q_25 = t;
  if(match_cons(t, sym_prod_3))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      g_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_25);
  d_25 = t;
  t = f_25;
  if(match_cons(t, sym_cf_1))
    {
      k_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_25);
  j_25 = t;
  t = k_25;
  t = oncetd_1_0(c_1, t);
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, o_25);
  b_6 = t;
  t = SSLsetAnnotations(b_6, j_25);
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, e_25, p_25, g_25);
  d_6 = t;
  t = SSLsetAnnotations(d_6, d_25);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,a_6 = NULL;
  t_25 = t;
  if(match_cons(t, sym_sort_1))
    {
      s_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_25);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, s_25);
  a_6 = t;
  t = SSLsetAnnotations(a_6, r_25);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm b_11 = NULL,d_11 = NULL,g_11 = NULL,f_6 = NULL;
  g_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      d_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_11);
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, d_11);
  f_6 = t;
  t = SSLsetAnnotations(f_6, b_11);
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
ATerm skip_concrete_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,i_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,b_24 = NULL,f_24 = NULL,g_24 = NULL,i_24 = NULL,m_24 = NULL,r_24 = NULL,w_24 = NULL,e_6 = NULL,z_5 = NULL,y_5 = NULL,c_4 = NULL,a_4 = NULL;
  static ATerm g_29 (ATerm t)
  {
    static ATerm d_1 (ATerm t)
    {
      ATerm e_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
          d_29 = t;
          if(match_cons(t, sym_appl_2))
            {
              e_29 = ATgetArgument(t, 0);
              f_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm g_10 = t;
            int h_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_10 = NULL,n_10 = NULL,p_10 = NULL,u_10 = NULL,v_10 = NULL,x_10 = NULL,z_10 = NULL,h_6 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(d_29);
                i_10 = t;
                t = e_29;
                if(match_cons(t, sym_prod_3))
                  {
                    p_10 = ATgetArgument(t, 0);
                    u_10 = ATgetArgument(t, 1);
                    v_10 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_29);
                n_10 = t;
                t = p_10;
                t = SRTS_one(e_1, t);
                x_10 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, x_10, u_10, v_10);
                g_6 = t;
                t = SSLsetAnnotations(g_6, n_10);
                z_10 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, z_10, f_29);
                h_6 = t;
                t = SSLsetAnnotations(h_6, i_10);
                t = n_85(t);
                LocalPopChoice(h_10);
              }
            else
              {
                t = g_10;
                {
                  ATerm u_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
                  t = SSLgetAnnotations(d_29);
                  u_11 = t;
                  t = e_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      y_11 = ATgetArgument(t, 0);
                      z_11 = ATgetArgument(t, 1);
                      a_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_29);
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
                  t = (ATerm) ATmakeAppl(sym_appl_2, b_12, f_29);
                  k_7 = t;
                  t = SSLsetAnnotations(k_7, u_11);
                  t = n_85(t);
                }
              }
          }
          LocalPopChoice(f_10);
        }
      else
        {
          t = e_10;
          t = annotation_2_0(n_85, g_29, t);
        }
      return(t);
    }
    t = alltd_1_0(d_1, t);
    return(t);
  }
  w_24 = t;
  if(match_cons(t, sym_appl_2))
    {
      i_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_24);
  c_22 = t;
  t = i_22;
  if(match_cons(t, sym_prod_3))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
      y_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_22);
  t_22 = t;
  t = v_22;
  if(match_cons(t, sym_cf_1))
    {
      f_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_22);
  b_24 = t;
  t = f_24;
  if(match_cons(t, sym_sort_1))
    {
      m_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_24);
  i_24 = t;
  t = m_24;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("StrategoTerm", 0, ATtrue)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_sort_1, m_24);
  a_4 = t;
  t = SSLsetAnnotations(a_4, i_24);
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, r_24);
  c_4 = t;
  t = SSLsetAnnotations(c_4, b_24);
  g_24 = t;
  t = y_22;
  if(match_cons(t, sym_attrs_1))
    {
      j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_22);
  a_23 = t;
  t = j_23;
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,v_5 = NULL,u_5 = NULL;
      c_25 = t;
      if(match_cons(t, sym_term_1))
        {
          y_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_25);
      x_24 = t;
      t = y_24;
      if(match_cons(t, sym_cons_1))
        {
          a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_24);
      z_24 = t;
      t = a_25;
      if(((a_22 != NULL) && (a_22 != t)))
        _fail(t);
      else
        a_22 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, a_25);
      u_5 = t;
      t = SSLsetAnnotations(u_5, z_24);
      b_25 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, b_25);
      v_5 = t;
      t = SSLsetAnnotations(v_5, x_24);
      return(t);
    }
    t = SRTS_one(z_0, t);
  }
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, k_23);
  y_5 = t;
  t = SSLsetAnnotations(y_5, a_23);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, u_22, g_24, l_23);
  z_5 = t;
  t = SSLsetAnnotations(z_5, t_22);
  z_22 = t;
  t = r_22;
  {
    static ATerm a_1 (ATerm t)
    {
      t = appl_2_0(b_1, _id, t);
      if(((b_22 != NULL) && (b_22 != t)))
        _fail(t);
      else
        b_22 = t;
      return(t);
    }
    t = oncetd_1_0(a_1, t);
  }
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, z_22, s_22);
  e_6 = t;
  t = SSLsetAnnotations(e_6, c_22);
  t = not_null(a_22);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(b_22));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(b_22));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(b_22));
        }
    }
  t = g_29(t);
  return(t);
}
static ATerm u_0 (ATerm f_0, ATerm t)
{
  ATerm g_0 = NULL;
  t = SSL_explode_term(f_0);
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_10) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm m_10 = t;
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
            t = m_10;
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
        ATerm t_10 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_10 = ATgetFirst((ATermList) t);
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
    ATerm a_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_11 = ATgetFirst((ATermList) t);
            u_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_11);
        t = u_1;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_2;
            {
              ATerm f_11 = t;
              int h_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      ATerm i_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_11);
                  t = n_1;
                }
              else
                {
                  t = f_11;
                  if(match_cons(t, sym_cf_1))
                    {
                      c_2 = ATgetArgument(t, 0);
                      t = c_2;
                      {
                        ATerm j_11 = t;
                        int k_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_iter_star_1))
                              {
                                ATerm m_11 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(k_11);
                            t = n_1;
                          }
                        else
                          {
                            t = j_11;
                            if(match_cons(t, sym_iter_1))
                              {
                                ATerm n_11 = ATgetArgument(t, 0);
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
                          ATerm o_11 = ATgetArgument(t, 0);
                          ATerm p_11 = ATgetArgument(t, 1);
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
                ATerm q_11 = ATgetFirst((ATermList) t);
                x_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_11 = ATgetFirst((ATermList) t);
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
                ATerm s_11 = ATgetArgument(t, 0);
                ATerm t_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_1;
          }
      }
    else
      {
        t = a_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm v_11 = ATgetArgument(t, 0);
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
        ATerm w_11 = t;
        int g_12 = stack_ptr;
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
                ATerm p_2 = NULL,t_8 = NULL;
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
                t_8 = t;
                t = SSLsetAnnotations(t_8, p_2);
              }
            t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
            t = conc_0_0(t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = w_11;
            t = (ATerm) ATmakeAppl(sym_Conc_2, g_1, h_1);
          }
      }
    }
  return(t);
}
static ATerm q_8 (ATerm u_84 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm w_6 = NULL,z_6 = NULL,a_7 = NULL;
  t = t_21;
  if(match_cons(t, sym_prod_3))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      ATerm l_12 = ATgetArgument(t, 1);
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
  t = s_21;
  t = map_1_0(u_84, t);
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
        ATerm m_12 = ATgetArgument(t, 2);
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
      ATerm n_12 = t;
      int o_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              h_5 = ATgetArgument(t, 0);
              {
                ATerm p_12 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(o_12);
          t = h_5;
          if((z_4 != t))
            {
              _fail(t);
            }
          t = v_4;
        }
      else
        {
          t = n_12;
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
                    ATerm c_13 = ATgetArgument(t, 1);
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
        ATerm i_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_6;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_6;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm m_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_13);
        t = n_6;
      }
    else
      {
        t = k_13;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm p_13 = ATgetArgument(t, 0);
                  ATerm s_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(o_13);
              t = n_6;
            }
          else
            {
              t = n_13;
              if(match_cons(t, sym_cf_1))
                {
                  r_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_6;
              {
                ATerm t_13 = t;
                int u_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm v_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_13);
                    t = n_6;
                  }
                else
                  {
                    t = t_13;
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
ATerm ReplCons_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_10 = NULL,k_10 = NULL,o_10 = NULL,q_10 = NULL,r_10 = NULL;
      j_10 = t;
      if(match_cons(t, sym_appl_2))
        {
          k_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm e_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_10;
              t = q_8(b_85, k_10, o_10, t);
              LocalPopChoice(q_14);
            }
          else
            {
              t = e_14;
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = r_14;
                    {
                      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
                      t = k_10;
                      if(match_cons(t, sym_prod_3))
                        {
                          h_4 = ATgetArgument(t, 0);
                          i_4 = ATgetArgument(t, 1);
                          {
                            ATerm b_16 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = h_4;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = i_4;
                      {
                        ATerm c_16 = t;
                        int d_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm e_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_16);
                            t = k_10;
                          }
                        else
                          {
                            t = c_16;
                            if(match_cons(t, sym_cf_1))
                              {
                                j_4 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = j_4;
                            if(match_cons(t, sym_opt_1))
                              {
                                ATerm f_16 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = k_10;
                          }
                      }
                      t = term_g_16;
                    }
                  }
              }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_10 = ATgetFirst((ATermList) t);
              r_10 = (ATerm) ATgetNext((ATermList) t);
              t = r_10;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm h_16 = t;
                  int i_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_10;
                      t = q_8(b_85, k_10, o_10, t);
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
                            ATerm l_11 = NULL;
                            t = k_10;
                            t = is_ins_0_0(t);
                            t = q_10;
                            t = b_85(t);
                            l_11 = t;
                            t = (ATerm) ATinsert(ATempty, l_11);
                            LocalPopChoice(k_16);
                          }
                        else
                          {
                            t = j_16;
                            {
                              ATerm u_4 = NULL,y_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL;
                              t = k_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  y_4 = ATgetArgument(t, 0);
                                  g_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_16 = ATgetArgument(t, 2);
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
                                  t = k_10;
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
                                  t = k_10;
                                }
                              t = q_10;
                              t = b_85(t);
                              u_4 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, u_4);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = j_10;
                  t = q_8(b_85, k_10, o_10, t);
                }
            }
          else
            {
              t = j_10;
              t = q_8(b_85, k_10, o_10, t);
            }
        }
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = ReplConsConc_1_0(b_85, t);
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
        ATerm m_16 = ATgetArgument(t, 2);
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
static ATerm r_1 (ATerm t)
{
  ATerm n_16 = t;
  if((PushChoice() == 0))
    {
      ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
      u_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          v_19 = ATgetArgument(t, 0);
          t_19 = ATgetArgument(t, 1);
          {
            ATerm j_21 = NULL,m_21 = NULL,n_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,b_9 = NULL,a_9 = NULL,n_22 = NULL;
            t = SSLgetAnnotations(u_19);
            j_21 = t;
            t = v_19;
            if(match_cons(t, sym_prod_3))
              {
                n_21 = ATgetArgument(t, 0);
                u_21 = ATgetArgument(t, 1);
                v_21 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_19);
            m_21 = t;
            t = u_21;
            if(match_cons(t, sym_cf_1))
              {
                n_22 = ATgetArgument(t, 0);
                {
                  ATerm c_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,w_8 = NULL,v_8 = NULL;
                  t = SSLgetAnnotations(u_21);
                  c_23 = t;
                  t = n_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      f_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_22);
                  e_23 = t;
                  t = f_23;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, f_23);
                  v_8 = t;
                  t = SSLsetAnnotations(v_8, e_23);
                  g_23 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, g_23);
                  w_8 = t;
                  t = SSLsetAnnotations(w_8, c_23);
                }
              }
            else
              {
                ATerm m_23 = NULL,z_8 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    n_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_21);
                m_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, n_22);
                z_8 = t;
                t = SSLsetAnnotations(z_8, m_23);
              }
            w_21 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, n_21, w_21, v_21);
            a_9 = t;
            t = SSLsetAnnotations(a_9, m_21);
            x_21 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, x_21, t_19);
            b_9 = t;
            t = SSLsetAnnotations(b_9, j_21);
          }
        }
      else
        {
          ATerm r_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,u_9 = NULL,r_9 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              v_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_19);
          r_23 = t;
          t = v_19;
          if(match_cons(t, sym_opt_1))
            {
              u_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_19);
          t_23 = t;
          t = u_23;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, u_23);
          r_9 = t;
          t = SSLsetAnnotations(r_9, t_23);
          v_23 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, v_23);
          u_9 = t;
          t = SSLsetAnnotations(u_9, r_23);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_16;
    }
  return(t);
}
ATerm implodeAsfix_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  ATerm x_29 = NULL;
  static ATerm o_34 (ATerm t)
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = implode_lexical_0_0(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm q_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_34 = NULL,j_34 = NULL,k_34 = NULL;
              j_34 = t;
              if(match_cons(t, sym_appl_2))
                {
                  k_34 = ATgetArgument(t, 0);
                  h_34 = ATgetArgument(t, 1);
                  {
                    ATerm s_16 = t;
                    int t_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_34;
                        t = p_85(t);
                        t = j_34;
                        t = skip_concrete_1_0(o_34, t);
                        LocalPopChoice(t_16);
                      }
                    else
                      {
                        t = s_16;
                        {
                          ATerm q_17 = NULL,v_17 = NULL,v_9 = NULL;
                          t = SSLgetAnnotations(j_34);
                          q_17 = t;
                          t = h_34;
                          t = filter_1_0(r_1, t);
                          v_17 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, k_34, v_17);
                          v_9 = t;
                          t = SSLsetAnnotations(v_9, q_17);
                          {
                            ATerm u_16 = t;
                            int v_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = OptList_0_0(t);
                                t = o_34(t);
                                LocalPopChoice(v_16);
                              }
                            else
                              {
                                t = u_16;
                                {
                                  ATerm w_16 = t;
                                  int x_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ReplCons_1_0(o_34, t);
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
                                                  t = Tuple_0_0(t);
                                                  t = o_34(t);
                                                  LocalPopChoice(e_17);
                                                }
                                              else
                                                {
                                                  t = d_17;
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
                      k_34 = ATgetArgument(t, 0);
                      {
                        ATerm g_17 = t;
                        int i_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_34;
                            t = p_85(t);
                            t = j_34;
                            t = skip_concrete_1_0(o_34, t);
                            LocalPopChoice(i_17);
                          }
                        else
                          {
                            t = g_17;
                            {
                              ATerm c_24 = NULL,e_24 = NULL,a_10 = NULL;
                              t = SSLgetAnnotations(j_34);
                              c_24 = t;
                              t = k_34;
                              t = map_1_0(o_34, t);
                              e_24 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, e_24);
                              a_10 = t;
                              t = SSLsetAnnotations(a_10, c_24);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = j_34;
                      t = p_85(t);
                      t = j_34;
                      t = skip_concrete_1_0(o_34, t);
                    }
                }
              LocalPopChoice(r_16);
            }
          else
            {
              t = q_16;
              t = SRTS_all(o_34, t);
            }
        }
      }
    return(t);
  }
  if(match_cons(t, sym_parsetree_2))
    {
      x_29 = ATgetArgument(t, 0);
      {
        ATerm j_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_29;
  t = o_34(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,q_35 = NULL,r_35 = NULL,x_35 = NULL;
  n_35 = t;
  if(match_cons(t, sym_appl_2))
    {
      o_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_35;
  if(match_cons(t, sym_prod_3))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
      {
        ATerm l_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_35;
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm r_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_17);
        {
          ATerm p_24 = NULL;
          t = term_t_17;
          p_24 = t;
          t = SSL_mkterm(p_24, x_35);
        }
      }
    else
      {
        t = o_17;
        {
          ATerm h_25 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              r_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_35;
          if(match_cons(t, sym_seq_1))
            {
              ATerm w_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = term_t_17;
          h_25 = t;
          t = SSL_mkterm(h_25, x_35);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(k_87, t);
    return(t);
  }
  t = k_87(t);
  t = SRTS_all(t_1, t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm w_36 = NULL,b_37 = NULL,c_37 = NULL,h_37 = NULL,i_37 = NULL,r_40 = NULL,s_40 = NULL,u_40 = NULL;
  static ATerm z_42 (ATerm t)
  {
    ATerm f_41 = NULL,g_41 = NULL,i_41 = NULL,m_41 = NULL;
    if(match_cons(t, sym__2))
      {
        f_41 = ATgetArgument(t, 0);
        m_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = f_41;
    if(match_cons(t, sym_alt_2))
      {
        g_41 = ATgetArgument(t, 0);
        i_41 = ATgetArgument(t, 1);
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_41;
              if(((c_37 != NULL) && (c_37 != t)))
                _fail(t);
              else
                c_37 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, m_41, not_null(i_37));
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              {
                ATerm z_17 = t;
                int b_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_41;
                    if(((c_37 != NULL) && (c_37 != t)))
                      _fail(t);
                    else
                      c_37 = t;
                    t = i_41;
                    if(((h_37 != NULL) && (h_37 != t)))
                      _fail(t);
                    else
                      h_37 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, m_41, not_null(i_37));
                    LocalPopChoice(b_18);
                  }
                else
                  {
                    t = z_17;
                    {
                      ATerm i_42 = NULL,l_42 = NULL;
                      t = term_d_18;
                      l_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_41, term_d_18);
                      t = m_9(m_41, l_42, t);
                      i_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_41, i_42);
                      t = z_42(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = f_41;
        if(((c_37 != NULL) && (c_37 != t)))
          _fail(t);
        else
          c_37 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, m_41, not_null(i_37));
      }
    return(t);
  }
  r_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL,n_26 = NULL,o_26 = NULL,q_26 = NULL,r_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL,h_27 = NULL,m_27 = NULL,u_12 = NULL,t_12 = NULL,s_12 = NULL,r_12 = NULL,v_27 = NULL;
        t = SSLgetAnnotations(r_40);
        c_26 = t;
        t = s_40;
        if(match_cons(t, sym_prod_3))
          {
            o_26 = ATgetArgument(t, 0);
            q_26 = ATgetArgument(t, 1);
            r_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_40);
        n_26 = t;
        t = o_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_27 = ATgetFirst((ATermList) t);
            e_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_26);
        b_27 = t;
        t = d_27;
        if(match_cons(t, sym_cf_1))
          {
            v_27 = ATgetArgument(t, 0);
            {
              ATerm f_19 = t;
              int g_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_28 = NULL,q_12 = NULL;
                  t = SSLgetAnnotations(d_27);
                  l_28 = t;
                  t = v_27;
                  if(((c_37 != NULL) && (c_37 != t)))
                    _fail(t);
                  else
                    c_37 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, v_27);
                  q_12 = t;
                  t = SSLsetAnnotations(q_12, l_28);
                  LocalPopChoice(g_19);
                }
              else
                {
                  t = f_19;
                  t = d_27;
                  if(((c_37 != NULL) && (c_37 != t)))
                    _fail(t);
                  else
                    c_37 = t;
                  t = d_27;
                }
            }
          }
        else
          {
            t = d_27;
            if(((c_37 != NULL) && (c_37 != t)))
              _fail(t);
            else
              c_37 = t;
            t = d_27;
          }
        h_27 = t;
        t = e_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_27), h_27);
        r_12 = t;
        t = SSLsetAnnotations(r_12, b_27);
        m_27 = t;
        t = q_26;
        if(match_cons(t, sym_cf_1))
          {
            z_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_26);
        y_26 = t;
        t = z_26;
        if(match_cons(t, sym_alt_2))
          {
            w_36 = ATgetArgument(t, 0);
            b_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, z_26);
        s_12 = t;
        t = SSLsetAnnotations(s_12, y_26);
        a_27 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, m_27, a_27, r_26);
        t_12 = t;
        t = SSLsetAnnotations(t_12, n_26);
        x_26 = t;
        t = u_40;
        if(((i_37 != NULL) && (i_37 != t)))
          _fail(t);
        else
          i_37 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, x_26, u_40);
        u_12 = t;
        t = SSLsetAnnotations(u_12, c_26);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm t_28 = NULL,w_28 = NULL,x_28 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,r_13 = NULL,q_13 = NULL,w_12 = NULL,v_12 = NULL;
          t = SSLgetAnnotations(r_40);
          t_28 = t;
          t = s_40;
          if(match_cons(t, sym_prod_3))
            {
              x_28 = ATgetArgument(t, 0);
              j_29 = ATgetArgument(t, 1);
              k_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_40);
          w_28 = t;
          t = x_28;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_29 = ATgetFirst((ATermList) t);
              r_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_28);
          p_29 = t;
          t = q_29;
          if(((c_37 != NULL) && (c_37 != t)))
            _fail(t);
          else
            c_37 = t;
          t = r_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(r_29), q_29);
          v_12 = t;
          t = SSLsetAnnotations(v_12, p_29);
          s_29 = t;
          t = j_29;
          if(match_cons(t, sym_lex_1))
            {
              n_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_29);
          m_29 = t;
          t = n_29;
          if(match_cons(t, sym_alt_2))
            {
              w_36 = ATgetArgument(t, 0);
              b_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, n_29);
          w_12 = t;
          t = SSLsetAnnotations(w_12, m_29);
          o_29 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, s_29, o_29, k_29);
          q_13 = t;
          t = SSLsetAnnotations(q_13, w_28);
          l_29 = t;
          t = u_40;
          if(((i_37 != NULL) && (i_37 != t)))
            _fail(t);
          else
            i_37 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, l_29, u_40);
          r_13 = t;
          t = SSLsetAnnotations(r_13, t_28);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, w_36, b_37), term_d_18);
  t = z_42(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,d_45 = NULL;
  z_44 = t;
  if(match_cons(t, sym_sort_1))
    {
      a_45 = ATgetArgument(t, 0);
      {
        ATerm b_30 = NULL,f_14 = NULL;
        t = SSLgetAnnotations(z_44);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, a_45);
        f_14 = t;
        t = SSLsetAnnotations(f_14, b_30);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          a_45 = ATgetArgument(t, 0);
          {
            ATerm p_30 = NULL,r_30 = NULL,m_14 = NULL;
            t = SSLgetAnnotations(z_44);
            p_30 = t;
            t = a_45;
            t = injective_alt_0_0(t);
            r_30 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, r_30);
            m_14 = t;
            t = SSLsetAnnotations(m_14, p_30);
          }
        }
      else
        {
          ATerm i_31 = NULL,n_31 = NULL,q_31 = NULL,n_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              a_45 = ATgetArgument(t, 0);
              d_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_44);
          i_31 = t;
          t = a_45;
          t = injective_alt_0_0(t);
          n_31 = t;
          t = d_45;
          t = injective_alt_0_0(t);
          q_31 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, n_31, q_31);
          n_14 = t;
          t = SSLsetAnnotations(n_14, i_31);
        }
    }
  return(t);
}
static ATerm j_59 (ATerm a_48, ATerm b_48, ATerm c_48, ATerm e_48, ATerm t)
{
  ATerm f_48 = NULL,r_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,f_15 = NULL,x_14 = NULL,v_14 = NULL;
  t = SSLgetAnnotations(e_48);
  f_48 = t;
  t = a_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_48 = ATgetFirst((ATermList) t);
      x_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_48);
  v_48 = t;
  t = w_48;
  if(match_cons(t, sym_varsym_1))
    {
      b_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_48);
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, b_49);
  v_14 = t;
  t = SSLsetAnnotations(v_14, a_49);
  c_49 = t;
  t = x_48;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_48), c_49);
  x_14 = t;
  t = SSLsetAnnotations(x_14, v_48);
  z_48 = t;
  t = c_48;
  {
    ATerm h_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(v_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_19;
      }
  }
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, z_48, b_48, r_48);
  f_15 = t;
  t = SSLsetAnnotations(f_15, f_48);
  return(t);
}
static ATerm n_59 (ATerm l_49, ATerm m_49, ATerm n_49, ATerm o_49, ATerm t)
{
  ATerm s_49 = NULL,c_50 = NULL,e_50 = NULL,f_50 = NULL,l_50 = NULL,m_50 = NULL,p_50 = NULL,q_50 = NULL,m_15 = NULL,k_15 = NULL,s_51 = NULL;
  t = SSLgetAnnotations(o_49);
  s_49 = t;
  t = l_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_50 = ATgetFirst((ATermList) t);
      m_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  f_50 = t;
  t = l_50;
  if(match_cons(t, sym_sort_1))
    {
      s_51 = ATgetArgument(t, 0);
      {
        ATerm e_32 = NULL,h_15 = NULL;
        t = SSLgetAnnotations(l_50);
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, s_51);
        h_15 = t;
        t = SSLsetAnnotations(h_15, e_32);
      }
    }
  else
    {
      ATerm o_32 = NULL,s_32 = NULL,w_32 = NULL,z_32 = NULL,j_15 = NULL,i_15 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          s_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_50);
      o_32 = t;
      t = s_51;
      if(match_cons(t, sym_sort_1))
        {
          w_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_51);
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, w_32);
      i_15 = t;
      t = SSLsetAnnotations(i_15, s_32);
      z_32 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, z_32);
      j_15 = t;
      t = SSLsetAnnotations(j_15, o_32);
    }
  p_50 = t;
  t = m_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_50), p_50);
  k_15 = t;
  t = SSLsetAnnotations(k_15, f_50);
  q_50 = t;
  t = m_49;
  t = injective_alt_0_0(t);
  c_50 = t;
  t = n_49;
  {
    ATerm i_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_19;
      }
  }
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, q_50, c_50, e_50);
  m_15 = t;
  t = SSLsetAnnotations(m_15, s_49);
  return(t);
}
static ATerm q_59 (ATerm h_52, ATerm m_52, ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm t_52 = NULL,o_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,w_53 = NULL,x_53 = NULL,z_15 = NULL,o_15 = NULL;
  t = SSLgetAnnotations(s_52);
  t_52 = t;
  t = h_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_53 = ATgetFirst((ATermList) t);
      t_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_52);
  r_53 = t;
  t = s_53;
  {
    ATerm j_19 = t;
    if((PushChoice() == 0))
      {
        ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,n_15 = NULL;
        h_54 = t;
        if(match_cons(t, sym_lit_1))
          {
            g_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_54);
        f_54 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, g_54);
        n_15 = t;
        t = SSLsetAnnotations(n_15, f_54);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_19;
      }
  }
  w_53 = t;
  t = t_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_53), w_53);
  o_15 = t;
  t = SSLsetAnnotations(o_15, r_53);
  x_53 = t;
  t = m_52;
  {
    static ATerm u_59 (ATerm t)
    {
      ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
      z_56 = t;
      if(match_cons(t, sym_sort_1))
        {
          a_57 = ATgetArgument(t, 0);
          {
            ATerm g_33 = NULL,p_15 = NULL;
            t = SSLgetAnnotations(z_56);
            g_33 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, a_57);
            p_15 = t;
            t = SSLsetAnnotations(p_15, g_33);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              a_57 = ATgetArgument(t, 0);
              {
                ATerm t_33 = NULL,v_33 = NULL,q_15 = NULL;
                t = SSLgetAnnotations(z_56);
                t_33 = t;
                t = a_57;
                t = u_59(t);
                v_33 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, v_33);
                q_15 = t;
                t = SSLsetAnnotations(q_15, t_33);
              }
            }
          else
            {
              if(match_cons(t, sym_lex_1))
                {
                  a_57 = ATgetArgument(t, 0);
                  {
                    ATerm f_34 = NULL,v_34 = NULL,r_15 = NULL;
                    t = SSLgetAnnotations(z_56);
                    f_34 = t;
                    t = a_57;
                    t = u_59(t);
                    v_34 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, v_34);
                    r_15 = t;
                    t = SSLsetAnnotations(r_15, f_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      a_57 = ATgetArgument(t, 0);
                      {
                        ATerm b_35 = NULL,k_35 = NULL,s_15 = NULL;
                        t = SSLgetAnnotations(z_56);
                        b_35 = t;
                        t = a_57;
                        t = u_59(t);
                        k_35 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, k_35);
                        s_15 = t;
                        t = SSLsetAnnotations(s_15, b_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          a_57 = ATgetArgument(t, 0);
                          {
                            ATerm z_35 = NULL,b_36 = NULL,t_15 = NULL;
                            t = SSLgetAnnotations(z_56);
                            z_35 = t;
                            t = a_57;
                            t = u_59(t);
                            b_36 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, b_36);
                            t_15 = t;
                            t = SSLsetAnnotations(t_15, z_35);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              a_57 = ATgetArgument(t, 0);
                              b_57 = ATgetArgument(t, 1);
                              {
                                ATerm k_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,v_15 = NULL,u_15 = NULL;
                                t = SSLgetAnnotations(z_56);
                                k_36 = t;
                                t = a_57;
                                t = u_59(t);
                                n_36 = t;
                                t = b_57;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    p_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(b_57);
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
                              ATerm z_36 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,m_37 = NULL,x_15 = NULL,w_15 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  a_57 = ATgetArgument(t, 0);
                                  b_57 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(z_56);
                              z_36 = t;
                              t = a_57;
                              t = u_59(t);
                              e_37 = t;
                              t = b_57;
                              if(match_cons(t, sym_lit_1))
                                {
                                  g_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(b_57);
                              f_37 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, g_37);
                              w_15 = t;
                              t = SSLsetAnnotations(w_15, f_37);
                              m_37 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, e_37, m_37);
                              x_15 = t;
                              t = SSLsetAnnotations(x_15, z_36);
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
  o_53 = t;
  t = r_52;
  {
    ATerm o_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(z_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_19;
      }
  }
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, x_53, o_53, q_53);
  z_15 = t;
  t = SSLsetAnnotations(z_15, t_52);
  return(t);
}
static ATerm r_59 (ATerm k_57, ATerm o_57, ATerm r_57, ATerm w_57, ATerm t)
{
  ATerm y_57 = NULL,c_58 = NULL,a_16 = NULL;
  t = SSLgetAnnotations(w_57);
  y_57 = t;
  t = r_57;
  t = oncetd_1_0(d_2, t);
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, k_57, o_57, c_58);
  a_16 = t;
  t = SSLsetAnnotations(a_16, y_57);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,i_49 = NULL,y_14 = NULL;
  i_49 = t;
  if(match_cons(t, sym_cons_1))
    {
      f_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_49);
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, f_49);
  y_14 = t;
  t = SSLsetAnnotations(y_14, e_49);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,c_52 = NULL,l_15 = NULL;
  c_52 = t;
  if(match_cons(t, sym_cons_1))
    {
      v_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_52);
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, v_51);
  l_15 = t;
  t = SSLsetAnnotations(l_15, u_51);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,i_57 = NULL,y_15 = NULL;
  i_57 = t;
  if(match_cons(t, sym_cons_1))
    {
      d_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_57);
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, d_57);
  y_15 = t;
  t = SSLsetAnnotations(y_15, c_57);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm e_58 = NULL;
  e_58 = t;
  if(match_string(t, "bracket"))
    {
      t = e_58;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = e_58;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,l_58 = NULL,m_58 = NULL,p_58 = NULL,q_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  x_58 = t;
  if(match_cons(t, sym_prod_3))
    {
      y_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
      b_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_59;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = z_58;
      if(match_cons(t, sym_cf_1))
        {
          a_59 = ATgetArgument(t, 0);
          t = a_59;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              q_58 = ATgetArgument(t, 0);
              g_58 = ATgetArgument(t, 1);
              t = y_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_58 = ATgetFirst((ATermList) t);
                  p_58 = (ATerm) ATgetNext((ATermList) t);
                  t = p_58;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = h_58;
                      if(match_cons(t, sym_cf_1))
                        {
                          l_58 = ATgetArgument(t, 0);
                          t = l_58;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              m_58 = ATgetArgument(t, 0);
                              f_58 = ATgetArgument(t, 1);
                              {
                                ATerm p_19 = t;
                                int q_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = j_59(y_58, z_58, b_59, x_58, t);
                                    LocalPopChoice(q_19);
                                  }
                                else
                                  {
                                    t = p_19;
                                    {
                                      ATerm r_19 = t;
                                      int s_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = n_59(y_58, z_58, b_59, x_58, t);
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
                                                t = q_59(y_58, z_58, b_59, x_58, t);
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
                                                      t = q_58;
                                                      if((m_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = g_58;
                                                      if((f_58 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = x_58;
                                                      LocalPopChoice(d_20);
                                                    }
                                                  else
                                                    {
                                                      t = c_20;
                                                      t = r_59(y_58, z_58, b_59, x_58, t);
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
                              ATerm e_20 = t;
                              int f_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_59(y_58, z_58, b_59, x_58, t);
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
                                        t = n_59(y_58, z_58, b_59, x_58, t);
                                        LocalPopChoice(h_20);
                                      }
                                    else
                                      {
                                        t = g_20;
                                        {
                                          ATerm i_20 = t;
                                          int j_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = q_59(y_58, z_58, b_59, x_58, t);
                                              LocalPopChoice(j_20);
                                            }
                                          else
                                            {
                                              t = i_20;
                                              t = r_59(y_58, z_58, b_59, x_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm k_20 = t;
                          int n_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_59(y_58, z_58, b_59, x_58, t);
                              LocalPopChoice(n_20);
                            }
                          else
                            {
                              t = k_20;
                              {
                                ATerm o_20 = t;
                                int s_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_59(y_58, z_58, b_59, x_58, t);
                                    LocalPopChoice(s_20);
                                  }
                                else
                                  {
                                    t = o_20;
                                    {
                                      ATerm u_20 = t;
                                      int x_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = q_59(y_58, z_58, b_59, x_58, t);
                                          LocalPopChoice(x_20);
                                        }
                                      else
                                        {
                                          t = u_20;
                                          t = r_59(y_58, z_58, b_59, x_58, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = h_58;
                      {
                        ATerm y_20 = t;
                        int b_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = j_59(y_58, z_58, b_59, x_58, t);
                            LocalPopChoice(b_21);
                          }
                        else
                          {
                            t = y_20;
                            {
                              ATerm c_21 = t;
                              int e_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = n_59(y_58, z_58, b_59, x_58, t);
                                  LocalPopChoice(e_21);
                                }
                              else
                                {
                                  t = c_21;
                                  {
                                    ATerm i_21 = t;
                                    int k_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = q_59(y_58, z_58, b_59, x_58, t);
                                        LocalPopChoice(k_21);
                                      }
                                    else
                                      {
                                        t = i_21;
                                        t = r_59(y_58, z_58, b_59, x_58, t);
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
                  ATerm l_21 = t;
                  int y_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_59(y_58, z_58, b_59, x_58, t);
                      LocalPopChoice(y_21);
                    }
                  else
                    {
                      t = l_21;
                      {
                        ATerm j_22 = t;
                        int k_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_59(y_58, z_58, b_59, x_58, t);
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
                                  t = q_59(y_58, z_58, b_59, x_58, t);
                                  LocalPopChoice(m_22);
                                }
                              else
                                {
                                  t = l_22;
                                  t = r_59(y_58, z_58, b_59, x_58, t);
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
                  q_58 = ATgetArgument(t, 0);
                  t = y_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_58 = ATgetFirst((ATermList) t);
                      p_58 = (ATerm) ATgetNext((ATermList) t);
                      t = p_58;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = h_58;
                          if(match_cons(t, sym_cf_1))
                            {
                              l_58 = ATgetArgument(t, 0);
                              t = l_58;
                              if(match_cons(t, sym_iter_1))
                                {
                                  m_58 = ATgetArgument(t, 0);
                                  {
                                    ATerm o_22 = t;
                                    int p_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = j_59(y_58, z_58, b_59, x_58, t);
                                        LocalPopChoice(p_22);
                                      }
                                    else
                                      {
                                        t = o_22;
                                        {
                                          ATerm q_22 = t;
                                          int w_22 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_59(y_58, z_58, b_59, x_58, t);
                                              LocalPopChoice(w_22);
                                            }
                                          else
                                            {
                                              t = q_22;
                                              {
                                                ATerm x_22 = t;
                                                int b_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = q_59(y_58, z_58, b_59, x_58, t);
                                                    LocalPopChoice(b_23);
                                                  }
                                                else
                                                  {
                                                    t = x_22;
                                                    {
                                                      ATerm d_23 = t;
                                                      int h_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = q_58;
                                                          if((m_58 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = x_58;
                                                          LocalPopChoice(h_23);
                                                        }
                                                      else
                                                        {
                                                          t = d_23;
                                                          t = r_59(y_58, z_58, b_59, x_58, t);
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
                                  ATerm i_23 = t;
                                  int n_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_59(y_58, z_58, b_59, x_58, t);
                                      LocalPopChoice(n_23);
                                    }
                                  else
                                    {
                                      t = i_23;
                                      {
                                        ATerm o_23 = t;
                                        int p_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_59(y_58, z_58, b_59, x_58, t);
                                            LocalPopChoice(p_23);
                                          }
                                        else
                                          {
                                            t = o_23;
                                            {
                                              ATerm q_23 = t;
                                              int s_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = q_59(y_58, z_58, b_59, x_58, t);
                                                  LocalPopChoice(s_23);
                                                }
                                              else
                                                {
                                                  t = q_23;
                                                  t = r_59(y_58, z_58, b_59, x_58, t);
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
                                  t = j_59(y_58, z_58, b_59, x_58, t);
                                  LocalPopChoice(x_23);
                                }
                              else
                                {
                                  t = w_23;
                                  {
                                    ATerm y_23 = t;
                                    int z_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_59(y_58, z_58, b_59, x_58, t);
                                        LocalPopChoice(z_23);
                                      }
                                    else
                                      {
                                        t = y_23;
                                        {
                                          ATerm a_24 = t;
                                          int d_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = q_59(y_58, z_58, b_59, x_58, t);
                                              LocalPopChoice(d_24);
                                            }
                                          else
                                            {
                                              t = a_24;
                                              t = r_59(y_58, z_58, b_59, x_58, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = h_58;
                          {
                            ATerm h_24 = t;
                            int j_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_59(y_58, z_58, b_59, x_58, t);
                                LocalPopChoice(j_24);
                              }
                            else
                              {
                                t = h_24;
                                {
                                  ATerm k_24 = t;
                                  int l_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = n_59(y_58, z_58, b_59, x_58, t);
                                      LocalPopChoice(l_24);
                                    }
                                  else
                                    {
                                      t = k_24;
                                      {
                                        ATerm n_24 = t;
                                        int o_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = q_59(y_58, z_58, b_59, x_58, t);
                                            LocalPopChoice(o_24);
                                          }
                                        else
                                          {
                                            t = n_24;
                                            t = r_59(y_58, z_58, b_59, x_58, t);
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
                      ATerm q_24 = t;
                      int s_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_59(y_58, z_58, b_59, x_58, t);
                          LocalPopChoice(s_24);
                        }
                      else
                        {
                          t = q_24;
                          {
                            ATerm t_24 = t;
                            int u_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_59(y_58, z_58, b_59, x_58, t);
                                LocalPopChoice(u_24);
                              }
                            else
                              {
                                t = t_24;
                                {
                                  ATerm v_24 = t;
                                  int i_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = q_59(y_58, z_58, b_59, x_58, t);
                                      LocalPopChoice(i_25);
                                    }
                                  else
                                    {
                                      t = v_24;
                                      t = r_59(y_58, z_58, b_59, x_58, t);
                                    }
                                }
                              }
                          }
                        }
                    }
                }
              else
                {
                  t = y_58;
                  {
                    ATerm l_25 = t;
                    int m_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_59(y_58, z_58, b_59, x_58, t);
                        LocalPopChoice(m_25);
                      }
                    else
                      {
                        t = l_25;
                        {
                          ATerm u_25 = t;
                          int w_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = n_59(y_58, z_58, b_59, x_58, t);
                              LocalPopChoice(w_25);
                            }
                          else
                            {
                              t = u_25;
                              {
                                ATerm x_25 = t;
                                int y_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = q_59(y_58, z_58, b_59, x_58, t);
                                    LocalPopChoice(y_25);
                                  }
                                else
                                  {
                                    t = x_25;
                                    t = r_59(y_58, z_58, b_59, x_58, t);
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
              a_59 = ATgetArgument(t, 0);
              t = a_59;
              if(match_string(t, "<START>"))
                {
                  t = y_58;
                  {
                    ATerm z_25 = t;
                    int a_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_59(y_58, z_58, b_59, x_58, t);
                        LocalPopChoice(a_26);
                      }
                    else
                      {
                        t = z_25;
                        {
                          ATerm b_26 = t;
                          int e_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = n_59(y_58, z_58, b_59, x_58, t);
                              LocalPopChoice(e_26);
                            }
                          else
                            {
                              t = b_26;
                              {
                                ATerm h_26 = t;
                                int i_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = q_59(y_58, z_58, b_59, x_58, t);
                                    LocalPopChoice(i_26);
                                  }
                                else
                                  {
                                    t = h_26;
                                    {
                                      ATerm m_26 = t;
                                      int s_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = r_59(y_58, z_58, b_59, x_58, t);
                                          LocalPopChoice(s_26);
                                        }
                                      else
                                        {
                                          t = m_26;
                                          t = x_58;
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
                  t = y_58;
                  {
                    ATerm t_26 = t;
                    int u_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_59(y_58, z_58, b_59, x_58, t);
                        LocalPopChoice(u_26);
                      }
                    else
                      {
                        t = t_26;
                        {
                          ATerm v_26 = t;
                          int w_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = n_59(y_58, z_58, b_59, x_58, t);
                              LocalPopChoice(w_26);
                            }
                          else
                            {
                              t = v_26;
                              {
                                ATerm c_27 = t;
                                int f_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = q_59(y_58, z_58, b_59, x_58, t);
                                    LocalPopChoice(f_27);
                                  }
                                else
                                  {
                                    t = c_27;
                                    t = r_59(y_58, z_58, b_59, x_58, t);
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
              t = y_58;
              {
                ATerm g_27 = t;
                int i_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = j_59(y_58, z_58, b_59, x_58, t);
                    LocalPopChoice(i_27);
                  }
                else
                  {
                    t = g_27;
                    {
                      ATerm j_27 = t;
                      int k_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_59(y_58, z_58, b_59, x_58, t);
                          LocalPopChoice(k_27);
                        }
                      else
                        {
                          t = j_27;
                          {
                            ATerm l_27 = t;
                            int n_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = q_59(y_58, z_58, b_59, x_58, t);
                                LocalPopChoice(n_27);
                              }
                            else
                              {
                                t = l_27;
                                t = r_59(y_58, z_58, b_59, x_58, t);
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
      t = y_58;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_59(y_58, z_58, b_59, x_58, t);
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
                  t = n_59(y_58, z_58, b_59, x_58, t);
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
                        t = q_59(y_58, z_58, b_59, x_58, t);
                        LocalPopChoice(t_27);
                      }
                    else
                      {
                        t = s_27;
                        t = r_59(y_58, z_58, b_59, x_58, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  static ATerm f_2 (ATerm t)
  {
    t = bottomup_1_0(l_87, t);
    return(t);
  }
  t = SRTS_all(f_2, t);
  t = l_87(t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,s_60 = NULL,w_60 = NULL,x_60 = NULL,b_61 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      w_60 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
      t = w_60;
      if(match_cons(t, sym_Ins_1))
        {
          s_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_60 = ATgetFirst((ATermList) t);
          n_60 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(n_60), o_60), s_60);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              o_60 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, o_60), s_60);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, s_60);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          w_60 = ATgetArgument(t, 0);
          x_60 = ATgetArgument(t, 1);
          b_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_61), (ATerm) ATinsert(ATempty, x_60)), w_60);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm h_62 = NULL,j_62 = NULL,l_62 = NULL,m_62 = NULL,p_62 = NULL,q_62 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      l_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
      t = q_62;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = l_62;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = l_62;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  m_62 = ATgetArgument(t, 0);
                  p_62 = ATgetArgument(t, 1);
                  t = l_62;
                }
              else
                {
                  t = l_62;
                }
            }
        }
      else
        {
          t = l_62;
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
          l_62 = ATgetArgument(t, 0);
          q_62 = ATgetArgument(t, 1);
          j_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_62;
      if(match_cons(t, sym_Conc_3))
        {
          m_62 = ATgetArgument(t, 0);
          p_62 = ATgetArgument(t, 1);
          h_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, m_62, p_62, (ATerm) ATmakeAppl(sym_Conc_3, h_62, q_62, j_62));
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm u_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_65 = NULL,v_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_65 = ATgetFirst((ATermList) t);
          v_65 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, s_65), v_65);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              s_65 = ATgetArgument(t, 0);
              v_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, s_65, (ATerm) ATmakeAppl(sym_Ins_1, v_65));
        }
      LocalPopChoice(w_27);
    }
  else
    {
      t = u_27;
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC1_0_0(t);
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,y_37 = NULL,d_38 = NULL,m_38 = NULL,n_38 = NULL,z_16 = NULL;
              g_67 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  h_67 = ATgetArgument(t, 0);
                  i_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_67);
              y_37 = t;
              t = h_67;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_38 = ATgetFirst((ATermList) t);
                  n_38 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, m_38), n_38);
                }
              else
                {
                  if(match_cons(t, sym_Snoc_2))
                    {
                      m_38 = ATgetArgument(t, 0);
                      n_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Conc_2, m_38, (ATerm) ATmakeAppl(sym_Ins_1, n_38));
                }
              d_38 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, d_38, i_67);
              z_16 = t;
              t = SSLsetAnnotations(z_16, y_37);
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
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,j_39 = NULL,m_39 = NULL,a_17 = NULL;
        s_67 = t;
        if(match_cons(t, sym_Conc_2))
          {
            t_67 = ATgetArgument(t, 0);
            u_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_67);
        j_39 = t;
        t = u_67;
        t = conc_to_cons_0_0(t);
        m_39 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, t_67, m_39);
        a_17 = t;
        t = SSLsetAnnotations(a_17, j_39);
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = SRTS_all(conc_to_cons_0_0, t);
      }
  }
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,b_17 = NULL;
            t = CTC2_0_0(t);
            z_67 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_67 = ATgetFirst((ATermList) t);
                x_67 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_67);
            v_67 = t;
            t = w_67;
            t = conc_to_cons_0_0(t);
            y_67 = t;
            t = (ATerm) ATinsert(CheckATermList(x_67), y_67);
            b_17 = t;
            t = SSLsetAnnotations(b_17, v_67);
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            {
              ATerm b_68 = NULL;
              if(match_cons(t, sym_Ins_1))
                {
                  b_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, b_68);
            }
          }
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
      }
  }
  return(t);
}
ATerm Constr1_0_0 (ATerm t)
{
  ATerm j_70 = NULL,l_70 = NULL,n_70 = NULL,v_70 = NULL,y_70 = NULL,z_70 = NULL,c_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      y_70 = ATgetArgument(t, 0);
      f_71 = ATgetArgument(t, 1);
      {
        ATerm f_28 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = y_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_70 = ATgetFirst((ATermList) t);
      e_71 = (ATerm) ATgetNext((ATermList) t);
      t = e_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_71;
          if(match_cons(t, sym_opt_1))
            {
              g_71 = ATgetArgument(t, 0);
              t = g_71;
              if((z_70 != t))
                {
                  _fail(t);
                }
              t = term_g_28;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  g_71 = ATgetArgument(t, 0);
                  t = z_70;
                  if(match_cons(t, sym_cf_1))
                    {
                      c_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_71;
                  if(match_cons(t, sym_opt_1))
                    {
                      h_71 = ATgetArgument(t, 0);
                      t = h_71;
                      if((c_71 != t))
                        {
                          _fail(t);
                        }
                      t = term_g_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          h_71 = ATgetArgument(t, 0);
                          t = h_71;
                          if((c_71 != t))
                            {
                              _fail(t);
                            }
                          t = term_h_28;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              h_71 = ATgetArgument(t, 0);
                              {
                                ATerm i_28 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = h_71;
                          if((c_71 != t))
                            {
                              _fail(t);
                            }
                          t = term_h_28;
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      g_71 = ATgetArgument(t, 0);
                      t = g_71;
                      if((z_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_h_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          g_71 = ATgetArgument(t, 0);
                          {
                            ATerm j_28 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = g_71;
                      if((z_70 != t))
                        {
                          _fail(t);
                        }
                      t = term_h_28;
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_28 = ATgetFirst((ATermList) t);
              j_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_70;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = f_71;
              {
                ATerm m_28 = t;
                int n_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm o_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_28);
                    t = term_p_28;
                  }
                else
                  {
                    t = m_28;
                    if(match_cons(t, sym_cf_1))
                      {
                        g_71 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = g_71;
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm q_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_p_28;
                  }
              }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_28 = ATgetFirst((ATermList) t);
                  l_70 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_70;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = f_71;
                  {
                    ATerm s_28 = t;
                    int u_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm v_28 = ATgetArgument(t, 0);
                            ATerm y_28 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_28);
                        t = term_p_28;
                      }
                    else
                      {
                        t = s_28;
                        if(match_cons(t, sym_cf_1))
                          {
                            g_71 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = g_71;
                        {
                          ATerm z_28 = t;
                          int a_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_1))
                                {
                                  ATerm b_29 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(a_29);
                              t = term_p_28;
                            }
                          else
                            {
                              t = z_28;
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  ATerm c_29 = ATgetArgument(t, 0);
                                  ATerm h_29 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = term_p_28;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm i_29 = ATgetFirst((ATermList) t);
                      n_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = n_70;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_29 = ATgetFirst((ATermList) t);
                      v_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = v_70;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_71;
                  if(match_cons(t, sym_cf_1))
                    {
                      g_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_71;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm u_29 = ATgetArgument(t, 0);
                      ATerm v_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = term_p_28;
                }
            }
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_71;
      {
        ATerm w_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_opt_1))
              {
                ATerm z_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(y_29);
            t = term_a_30;
          }
        else
          {
            t = w_29;
            if(match_cons(t, sym_cf_1))
              {
                g_71 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_71;
            if(match_cons(t, sym_opt_1))
              {
                ATerm c_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = term_a_30;
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  static ATerm x_71 (ATerm t)
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_88(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = SRTS_one(x_71, t);
      }
    return(t);
  }
  t = x_71(t);
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,m_72 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      i_72 = ATgetArgument(t, 0);
      j_72 = ATgetArgument(t, 1);
      {
        ATerm f_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_72;
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm i_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_30);
        t = term_j_30;
      }
    else
      {
        t = g_30;
        {
          ATerm k_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm m_30 = ATgetArgument(t, 0);
                  ATerm n_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(l_30);
              t = term_j_30;
            }
          else
            {
              t = k_30;
              if(match_cons(t, sym_cf_1))
                {
                  m_72 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_72;
              {
                ATerm o_30 = t;
                int q_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm s_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_30);
                    t = term_j_30;
                  }
                else
                  {
                    t = o_30;
                    if(match_cons(t, sym_iter_star_sep_2))
                      {
                        ATerm t_30 = ATgetArgument(t, 0);
                        ATerm u_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = term_j_30;
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
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_41 = NULL,l_41 = NULL,m_42 = NULL,o_42 = NULL,f_17 = NULL;
            t = SSLgetAnnotations(p_74);
            h_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, n_74, o_74);
            f_17 = t;
            t = SSLsetAnnotations(f_17, h_41);
            l_41 = t;
            if(match_cons(t, sym_appl_2))
              {
                m_42 = ATgetArgument(t, 0);
                o_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm x_30 = t;
              int y_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_42;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  LocalPopChoice(y_30);
                }
              else
                {
                  t = x_30;
                  {
                    ATerm e_43 = NULL;
                    t = m_42;
                    {
                      ATerm z_30 = t;
                      int a_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_43 = NULL,p_43 = NULL;
                          if(match_cons(t, sym_prod_3))
                            {
                              ATerm b_31 = ATgetArgument(t, 0);
                              ATerm c_31 = ATgetArgument(t, 1);
                              i_43 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = i_43;
                          {
                            static ATerm k_2 (ATerm t)
                            {
                              if(match_cons(t, sym_cons_1))
                                {
                                  if(((p_43 != NULL) && (p_43 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    p_43 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1_0(k_2, t);
                          }
                          t = not_null(p_43);
                          LocalPopChoice(a_31);
                        }
                      else
                        {
                          t = z_30;
                          t = Constr1_0_0(t);
                        }
                    }
                    e_43 = t;
                    t = SSL_mkterm(e_43, o_42);
                  }
                }
            }
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
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
ATerm filter_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
  f_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_75;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_75 = ATgetFirst((ATermList) t);
          h_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_44 = NULL,f_44 = NULL,g_44 = NULL,h_17 = NULL;
            t = SSLgetAnnotations(f_75);
            a_44 = t;
            t = g_75;
            t = r_101(t);
            f_44 = t;
            t = h_75;
            t = filter_1_0(r_101, t);
            g_44 = t;
            t = (ATerm) ATinsert(CheckATermList(g_44), f_44);
            h_17 = t;
            t = SSLsetAnnotations(h_17, a_44);
            LocalPopChoice(e_31);
          }
        else
          {
            t = d_31;
            t = h_75;
            t = filter_1_0(r_101, t);
          }
      }
    }
  return(t);
}
static ATerm k_80 (ATerm e_77, ATerm t)
{
  static ATerm m_80 (ATerm t)
  {
    ATerm f_77 = NULL,g_77 = NULL,i_77 = NULL,j_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
    f_77 = t;
    if(match_cons(t, sym_appl_2))
      {
        g_77 = ATgetArgument(t, 0);
        n_77 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_77;
    if(match_cons(t, sym_prod_3))
      {
        ATerm f_31 = ATgetArgument(t, 0);
        i_77 = ATgetArgument(t, 1);
        {
          ATerm g_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = i_77;
    if(match_cons(t, sym_cf_1))
      {
        j_77 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = j_77;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm h_31 = ATgetArgument(t, 0);
        ATerm j_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = n_77;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_77 = ATgetFirst((ATermList) t);
        p_77 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = p_77;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, o_77);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_77 = ATgetFirst((ATermList) t);
            r_77 = (ATerm) ATgetNext((ATermList) t);
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
            ATerm d_78 = NULL,e_78 = NULL;
            t = o_77;
            t = m_80(t);
            d_78 = t;
            t = s_77;
            t = m_80(t);
            e_78 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_78), (ATerm) ATinsert(ATempty, q_77)), d_78);
            t = concat_0_0(t);
          }
        else
          {
            ATerm l_78 = NULL,m_78 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_77 = ATgetFirst((ATermList) t);
                v_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_77;
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
            t = o_77;
            t = m_80(t);
            l_78 = t;
            t = w_77;
            t = m_80(t);
            m_78 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_78), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_77), s_77), q_77)), l_78);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = e_77;
  t = m_80(t);
  return(t);
}
static ATerm l_80 (ATerm p_78, ATerm t)
{
  static ATerm n_80 (ATerm t)
  {
    ATerm q_78 = NULL,r_78 = NULL,t_78 = NULL,u_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL;
    q_78 = t;
    if(match_cons(t, sym_appl_2))
      {
        r_78 = ATgetArgument(t, 0);
        x_78 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_78;
    if(match_cons(t, sym_prod_3))
      {
        ATerm k_31 = ATgetArgument(t, 0);
        t_78 = ATgetArgument(t, 1);
        {
          ATerm l_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = t_78;
    if(match_cons(t, sym_cf_1))
      {
        u_78 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = u_78;
    if(match_cons(t, sym_iter_1))
      {
        ATerm m_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = x_78;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_78 = ATgetFirst((ATermList) t);
        z_78 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = z_78;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, y_78);
      }
    else
      {
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
            ATerm i_79 = NULL,j_79 = NULL;
            t = y_78;
            t = n_80(t);
            i_79 = t;
            t = a_79;
            t = n_80(t);
            j_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, j_79), i_79);
            t = concat_0_0(t);
          }
        else
          {
            ATerm o_79 = NULL,p_79 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_79 = ATgetFirst((ATermList) t);
                d_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_79;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_78;
            t = n_80(t);
            o_79 = t;
            t = c_79;
            t = n_80(t);
            p_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_79), (ATerm) ATinsert(ATempty, a_79)), o_79);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = p_78;
  t = n_80(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
  s_79 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_79 = ATgetArgument(t, 0);
      d_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_79;
  if(match_cons(t, sym_prod_3))
    {
      u_79 = ATgetArgument(t, 0);
      z_79 = ATgetArgument(t, 1);
      {
        ATerm o_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_79;
  if(match_cons(t, sym_cf_1))
    {
      a_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_80;
  {
    ATerm p_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_sep_2))
          {
            ATerm s_31 = ATgetArgument(t, 0);
            ATerm t_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(r_31);
        t = d_80;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_80 = ATgetFirst((ATermList) t);
            f_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_80;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_79;
            {
              ATerm u_31 = t;
              int v_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_80(s_79, t);
                  LocalPopChoice(v_31);
                }
              else
                {
                  t = u_31;
                  t = (ATerm) ATinsert(ATempty, e_80);
                }
            }
          }
        else
          {
            t = u_79;
            t = k_80(s_79, t);
          }
      }
    else
      {
        t = p_31;
        {
          ATerm w_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  ATerm y_31 = ATgetArgument(t, 0);
                  ATerm z_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(x_31);
              t = u_79;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = d_80;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_79 = ATgetFirst((ATermList) t);
                      y_79 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = v_79;
                  if(match_cons(t, sym_cf_1))
                    {
                      w_79 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_79;
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm a_32 = ATgetArgument(t, 0);
                      ATerm b_32 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_80;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_80 = ATgetFirst((ATermList) t);
                      f_80 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = f_80;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_80;
                  t = FlatList_0_0(t);
                }
            }
          else
            {
              t = w_31;
              {
                ATerm c_32 = t;
                int d_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_iter_1))
                      {
                        ATerm f_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_32);
                    t = d_80;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        e_80 = ATgetFirst((ATermList) t);
                        f_80 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = f_80;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = u_79;
                        {
                          ATerm g_32 = t;
                          int h_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = l_80(s_79, t);
                              LocalPopChoice(h_32);
                            }
                          else
                            {
                              t = g_32;
                              t = (ATerm) ATinsert(ATempty, e_80);
                            }
                        }
                      }
                    else
                      {
                        t = u_79;
                        t = l_80(s_79, t);
                      }
                  }
                else
                  {
                    t = c_32;
                    if(match_cons(t, sym_iter_star_1))
                      {
                        ATerm i_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = u_79;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = d_80;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            v_79 = ATgetFirst((ATermList) t);
                            y_79 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = v_79;
                        if(match_cons(t, sym_cf_1))
                          {
                            w_79 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = w_79;
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm j_32 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = y_79;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = d_80;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            e_80 = ATgetFirst((ATermList) t);
                            f_80 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = f_80;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = e_80;
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
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_80 = ATgetFirst((ATermList) t);
      y_80 = (ATerm) ATgetNext((ATermList) t);
      t = y_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_80 = ATgetFirst((ATermList) t);
          w_80 = (ATerm) ATgetNext((ATermList) t);
          t = v_80;
          if(match_int(t, 34))
            {
              t = x_80;
              if(match_int(t, 92))
                {
                  ATerm k_32 = t;
                  int l_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_81 = NULL;
                      t = w_80;
                      t = De_Escape_0_0(t);
                      b_81 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_81), term_m_32);
                      LocalPopChoice(l_32);
                    }
                  else
                    {
                      t = k_32;
                      {
                        ATerm e_81 = NULL;
                        t = y_80;
                        t = De_Escape_0_0(t);
                        e_81 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_81), x_80);
                      }
                    }
                }
              else
                {
                  ATerm h_81 = NULL;
                  t = y_80;
                  t = De_Escape_0_0(t);
                  h_81 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_81), x_80);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = x_80;
                  if(match_int(t, 92))
                    {
                      ATerm n_32 = t;
                      int p_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_81 = NULL;
                          t = w_80;
                          t = De_Escape_0_0(t);
                          j_81 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_81), term_q_32);
                          LocalPopChoice(p_32);
                        }
                      else
                        {
                          t = n_32;
                          {
                            ATerm m_81 = NULL;
                            t = y_80;
                            t = De_Escape_0_0(t);
                            m_81 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_81), x_80);
                          }
                        }
                    }
                  else
                    {
                      ATerm p_81 = NULL;
                      t = y_80;
                      t = De_Escape_0_0(t);
                      p_81 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_81), x_80);
                    }
                }
              else
                {
                  ATerm s_81 = NULL;
                  t = y_80;
                  t = De_Escape_0_0(t);
                  s_81 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_81), x_80);
                }
            }
        }
      else
        {
          ATerm v_81 = NULL;
          t = y_80;
          t = De_Escape_0_0(t);
          v_81 = t;
          t = (ATerm) ATinsert(CheckATermList(v_81), x_80);
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
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  e_82 = t;
  t = SSL_explode_string(e_82);
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
                  ATerm r_32 = t;
                  int t_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_82 = NULL;
                      t = g_82;
                      t = De_Escape_0_0(t);
                      l_82 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_82), term_m_32);
                      LocalPopChoice(t_32);
                    }
                  else
                    {
                      t = r_32;
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
                      ATerm u_32 = t;
                      int v_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_82 = NULL;
                          t = g_82;
                          t = De_Escape_0_0(t);
                          t_82 = t;
                          t = (ATerm) ATinsert(CheckATermList(t_82), term_q_32);
                          LocalPopChoice(v_32);
                        }
                      else
                        {
                          t = u_32;
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
  d_82 = t;
  t = SSL_implode_string(d_82);
  return(t);
}
ATerm at_last_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  static ATerm b_84 (ATerm t)
  {
    ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
    y_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_83 = ATgetFirst((ATermList) t);
        a_84 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_44 = NULL,m_17 = NULL;
          t = SSLgetAnnotations(y_83);
          y_44 = t;
          t = a_84;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(a_84), z_83);
          m_17 = t;
          t = SSLsetAnnotations(m_17, y_44);
          t = y_94(t);
          LocalPopChoice(y_32);
        }
      else
        {
          t = x_32;
          {
            ATerm p_45 = NULL,s_45 = NULL,n_17 = NULL;
            t = SSLgetAnnotations(y_83);
            p_45 = t;
            t = a_84;
            t = b_84(t);
            s_45 = t;
            t = (ATerm) ATinsert(CheckATermList(s_45), z_83);
            n_17 = t;
            t = SSLsetAnnotations(n_17, p_45);
          }
        }
    }
    return(t);
  }
  t = b_84(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(a_33) != AT_INT) || (ATgetInt((ATermInt) a_33) != 34)))
        _fail(t);
      {
        ATerm b_33 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(b_33) != AT_LIST) || !(ATisEmpty(b_33))))
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
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  i_84 = t;
  t = SSL_explode_string(i_84);
  e_84 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_84 = ATgetFirst((ATermList) t);
      {
        ATerm c_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_84;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = e_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_33 = ATgetFirst((ATermList) t);
      g_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_84;
  t = at_last_1_0(l_2, t);
  f_84 = t;
  t = SSL_implode_string(f_84);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_33);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_33);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_33);
  return(t);
}
ATerm PpSym_0_0 (ATerm t)
{
  ATerm k_85 = NULL,s_85 = NULL,t_85 = NULL;
  t_85 = t;
  if(match_cons(t, sym_cf_1))
    {
      k_85 = ATgetArgument(t, 0);
      {
        ATerm v_85 = NULL;
        t = k_85;
        t = PpSym_0_0(t);
        v_85 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_33)), v_85), (ATerm) ATinsert(ATempty, term_i_33));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          k_85 = ATgetArgument(t, 0);
          {
            ATerm x_85 = NULL;
            t = k_85;
            t = PpSym_0_0(t);
            x_85 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_33)), x_85), (ATerm) ATinsert(ATempty, term_i_33));
            t = concat_0_0(t);
          }
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_l_33);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  k_85 = ATgetArgument(t, 0);
                  s_85 = ATgetArgument(t, 1);
                  {
                    ATerm a_86 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(s_85), k_85);
                    t = map_1_0(PpSym_0_0, t);
                    a_86 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_33)), a_86), (ATerm) ATinsert(ATempty, term_m_33));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      k_85 = ATgetArgument(t, 0);
                      t = k_85;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(m_2, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          k_85 = ATgetArgument(t, 0);
                          t = k_85;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(n_2, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              k_85 = ATgetArgument(t, 0);
                              t = k_85;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(o_2, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  k_85 = ATgetArgument(t, 0);
                                  s_85 = ATgetArgument(t, 1);
                                  {
                                    ATerm g_86 = NULL,h_86 = NULL;
                                    t = k_85;
                                    t = PpSym_0_0(t);
                                    g_86 = t;
                                    t = s_85;
                                    t = PpSym_0_0(t);
                                    h_86 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_33)), h_86), g_86), (ATerm) ATinsert(ATempty, term_o_33));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      k_85 = ATgetArgument(t, 0);
                                      s_85 = ATgetArgument(t, 1);
                                      {
                                        ATerm n_86 = NULL,o_86 = NULL;
                                        t = k_85;
                                        t = PpSym_0_0(t);
                                        n_86 = t;
                                        t = s_85;
                                        t = PpSym_0_0(t);
                                        o_86 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_33)), o_86), n_86), (ATerm) ATinsert(ATempty, term_o_33));
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm r_33 = t;
                                      int s_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              k_85 = ATgetArgument(t, 0);
                                              {
                                                ATerm u_33 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(s_33);
                                          {
                                            ATerm q_86 = NULL;
                                            t = k_85;
                                            t = PpSym_0_0(t);
                                            q_86 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_33)), q_86);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = r_33;
                                          {
                                            ATerm x_33 = t;
                                            int y_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    k_85 = ATgetArgument(t, 0);
                                                    s_85 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_33 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(y_33);
                                                {
                                                  ATerm u_86 = NULL,v_86 = NULL;
                                                  t = k_85;
                                                  t = PpSym_0_0(t);
                                                  u_86 = t;
                                                  t = s_85;
                                                  t = PpSym_0_0(t);
                                                  v_86 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_33)), v_86), u_86);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = x_33;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    k_85 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm x_86 = NULL;
                                                      t = k_85;
                                                      t = PpSym_0_0(t);
                                                      x_86 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, x_86), (ATerm) ATinsert(ATempty, term_a_34));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        k_85 = ATgetArgument(t, 0);
                                                        s_85 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_87 = NULL,b_87 = NULL;
                                                          t = k_85;
                                                          t = PpSym_0_0(t);
                                                          a_87 = t;
                                                          t = s_85;
                                                          t = PpSym_0_0(t);
                                                          b_87 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_87), (ATerm) ATinsert(ATempty, term_b_34)), a_87);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            k_85 = ATgetArgument(t, 0);
                                                            s_85 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm e_87 = NULL,f_87 = NULL;
                                                              t = k_85;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              e_87 = t;
                                                              t = s_85;
                                                              t = PpSym_0_0(t);
                                                              f_87 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_87), (ATerm) ATinsert(ATempty, term_c_34)), e_87);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                k_85 = ATgetArgument(t, 0);
                                                                s_85 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm i_87 = NULL,j_87 = NULL;
                                                                  t = k_85;
                                                                  t = PpSym_0_0(t);
                                                                  i_87 = t;
                                                                  t = s_85;
                                                                  t = PpSym_0_0(t);
                                                                  j_87 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_87), (ATerm) ATinsert(ATempty, term_d_34)), i_87);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    k_85 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm n_87 = NULL;
                                                                      t = k_85;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      n_87 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(n_87), term_e_34);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        k_85 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, k_85);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            k_85 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm a_46 = NULL;
                                                                              t = k_85;
                                                                              {
                                                                                ATerm g_34 = t;
                                                                                int i_34 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(i_34);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_34;
                                                                                  }
                                                                              }
                                                                              a_46 = t;
                                                                              t = (ATerm) ATinsert(ATempty, a_46);
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
                                                                                    k_85 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm n_34 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(m_34);
                                                                                {
                                                                                  ATerm i_46 = NULL;
                                                                                  t = k_85;
                                                                                  {
                                                                                    ATerm p_34 = t;
                                                                                    int q_34 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(q_34);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_34;
                                                                                      }
                                                                                  }
                                                                                  i_46 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, i_46);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = l_34;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_r_34);
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
static ATerm o_89 (ATerm e_88, ATerm f_88, ATerm g_88, ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
  t = e_88;
  if(match_cons(t, sym_cf_1))
    {
      l_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_88;
  {
    ATerm s_34 = t;
    if((PushChoice() == 0))
      {
        ATerm n_88 = NULL,q_88 = NULL,r_88 = NULL,s_17 = NULL;
        r_88 = t;
        if(match_cons(t, sym_sort_1))
          {
            q_88 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_88);
        n_88 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, q_88);
        s_17 = t;
        t = SSLsetAnnotations(s_17, n_88);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_34;
      }
  }
  t = PpSym_0_0(t);
  k_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_34)), k_88), (ATerm) ATinsert(ATempty, term_t_34));
  t = concat_0_0(t);
  m_88 = t;
  t = SSL_concat_strings(m_88);
  j_88 = t;
  t = SSL_mkterm(j_88, f_88);
  return(t);
}
static ATerm p_89 (ATerm s_88, ATerm t_88, ATerm u_88, ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,u_17 = NULL;
  t = s_88;
  if(match_cons(t, sym_cf_1))
    {
      y_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_88;
  if(match_cons(t, sym_sort_1))
    {
      b_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_88);
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, b_89);
  u_17 = t;
  t = SSLsetAnnotations(u_17, a_89);
  t = PpSym_0_0(t);
  z_88 = t;
  t = SSL_concat_strings(z_88);
  x_88 = t;
  t = SSL_mkterm(x_88, t_88);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm e_89 = NULL,f_89 = NULL,h_89 = NULL,i_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL;
  e_89 = t;
  if(match_cons(t, sym_appl_2))
    {
      f_89 = ATgetArgument(t, 0);
      k_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_89;
  if(match_cons(t, sym_prod_3))
    {
      ATerm u_34 = ATgetArgument(t, 0);
      h_89 = ATgetArgument(t, 1);
      {
        ATerm w_34 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_89 = ATgetFirst((ATermList) t);
      m_89 = (ATerm) ATgetNext((ATermList) t);
      t = m_89;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = h_89;
          if(match_cons(t, sym_sort_1))
            {
              i_89 = ATgetArgument(t, 0);
              t = i_89;
              if(match_string(t, "<START>"))
                {
                  ATerm x_34 = t;
                  int y_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_89(h_89, k_89, e_89, t);
                      LocalPopChoice(y_34);
                    }
                  else
                    {
                      t = x_34;
                      {
                        ATerm z_34 = t;
                        int a_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = p_89(h_89, k_89, e_89, t);
                            LocalPopChoice(a_35);
                          }
                        else
                          {
                            t = z_34;
                            t = l_89;
                          }
                      }
                    }
                }
              else
                {
                  ATerm c_35 = t;
                  int d_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_89(h_89, k_89, e_89, t);
                      LocalPopChoice(d_35);
                    }
                  else
                    {
                      t = c_35;
                      t = p_89(h_89, k_89, e_89, t);
                    }
                }
            }
          else
            {
              ATerm e_35 = t;
              int f_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_89(h_89, k_89, e_89, t);
                  LocalPopChoice(f_35);
                }
              else
                {
                  t = e_35;
                  t = p_89(h_89, k_89, e_89, t);
                }
            }
        }
      else
        {
          t = h_89;
          {
            ATerm g_35 = t;
            int h_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = o_89(h_89, k_89, e_89, t);
                LocalPopChoice(h_35);
              }
            else
              {
                t = g_35;
                t = p_89(h_89, k_89, e_89, t);
              }
          }
        }
    }
  else
    {
      t = h_89;
      {
        ATerm i_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_89(h_89, k_89, e_89, t);
            LocalPopChoice(j_35);
          }
        else
          {
            t = i_35;
            t = p_89(h_89, k_89, e_89, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t)
{
  static ATerm q_89 (ATerm t)
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_86(t);
        t = q_89(t);
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        t = l_86(t);
      }
    return(t);
  }
  t = q_89(t);
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
      ATerm p_35 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
      {
        ATerm s_35 = ATgetArgument(t, 2);
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
          t = term_t_35;
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
ATerm at_end_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  static ATerm b_91 (ATerm t)
  {
    ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL;
    a_91 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_90 = ATgetFirst((ATermList) t);
        z_90 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_46 = NULL,y_46 = NULL,a_18 = NULL;
          t = SSLgetAnnotations(a_91);
          v_46 = t;
          t = z_90;
          t = b_91(t);
          y_46 = t;
          t = (ATerm) ATinsert(CheckATermList(y_46), y_90);
          a_18 = t;
          t = SSLsetAnnotations(a_18, v_46);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_91;
        t = n_94(t);
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
      static ATerm q_2 (ATerm t)
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
      t = at_end_1_0(q_2, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm m_91 = NULL;
  static ATerm d_92 (ATerm t)
  {
    ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
    a_92 = t;
    if(match_cons(t, sym_appl_2))
      {
        y_91 = ATgetArgument(t, 0);
        z_91 = ATgetArgument(t, 1);
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_47 = NULL,i_47 = NULL,l_47 = NULL,c_18 = NULL;
              t = SSLgetAnnotations(a_92);
              i_47 = t;
              t = z_91;
              t = map_1_0(d_92, t);
              l_47 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, y_91, l_47);
              c_18 = t;
              t = SSLsetAnnotations(c_18, i_47);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm w_35 = ATgetArgument(t, 0);
                  h_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_47;
              t = concat_0_0(t);
              LocalPopChoice(v_35);
            }
          else
            {
              t = u_35;
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
  ATerm v_92 = NULL,x_92 = NULL,y_92 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  b_93 = t;
  if(match_cons(t, sym_appl_2))
    {
      c_93 = ATgetArgument(t, 0);
      {
        ATerm y_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_93;
  if(match_cons(t, sym_prod_3))
    {
      d_93 = ATgetArgument(t, 0);
      e_93 = ATgetArgument(t, 1);
      {
        ATerm a_36 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_93;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm e_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_36);
        t = d_93;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_92 = ATgetFirst((ATermList) t);
            x_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_92;
        if(match_cons(t, sym_lex_1))
          {
            ATerm f_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_92;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_93;
        t = yield_0_0(t);
      }
    else
      {
        t = c_36;
        {
          ATerm g_36 = t;
          int h_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm i_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(h_36);
              t = b_93;
              t = yield_0_0(t);
            }
          else
            {
              t = g_36;
              {
                ATerm j_36 = t;
                int l_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm m_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_36);
                    {
                      ATerm i_93 = NULL;
                      t = b_93;
                      t = yield_0_0(t);
                      i_93 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, i_93);
                    }
                  }
                else
                  {
                    t = j_36;
                    if(match_cons(t, sym_varsym_1))
                      {
                        f_93 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = f_93;
                    if(match_cons(t, sym_cf_1))
                      {
                        y_92 = ATgetArgument(t, 0);
                        t = y_92;
                        {
                          ATerm r_36 = t;
                          int s_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm t_36 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(s_36);
                              t = d_93;
                              {
                                ATerm u_36 = t;
                                int v_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_93 = NULL;
                                    t = b_93;
                                    t = yield_0_0(t);
                                    j_93 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, j_93);
                                    LocalPopChoice(v_36);
                                  }
                                else
                                  {
                                    t = u_36;
                                    {
                                      ATerm k_93 = NULL;
                                      t = b_93;
                                      t = yield_0_0(t);
                                      k_93 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, k_93);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = r_36;
                              {
                                ATerm x_36 = t;
                                int y_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm a_37 = ATgetArgument(t, 0);
                                        ATerm d_37 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(y_36);
                                    t = d_93;
                                    {
                                      ATerm j_37 = t;
                                      int k_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_93 = NULL;
                                          t = b_93;
                                          t = yield_0_0(t);
                                          l_93 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, l_93);
                                          LocalPopChoice(k_37);
                                        }
                                      else
                                        {
                                          t = j_37;
                                          {
                                            ATerm m_93 = NULL;
                                            t = b_93;
                                            t = yield_0_0(t);
                                            m_93 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, m_93);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = x_36;
                                    {
                                      ATerm l_37 = t;
                                      int n_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm o_37 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(n_37);
                                          t = d_93;
                                          {
                                            ATerm p_37 = t;
                                            int q_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm o_93 = NULL;
                                                t = b_93;
                                                t = yield_0_0(t);
                                                o_93 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, o_93);
                                                LocalPopChoice(q_37);
                                              }
                                            else
                                              {
                                                t = p_37;
                                                {
                                                  ATerm p_93 = NULL;
                                                  t = b_93;
                                                  t = yield_0_0(t);
                                                  p_93 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, p_93);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = l_37;
                                          {
                                            ATerm r_37 = t;
                                            int s_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm t_37 = ATgetArgument(t, 0);
                                                    ATerm u_37 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(s_37);
                                                t = d_93;
                                                {
                                                  ATerm v_37 = t;
                                                  int w_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_93 = NULL;
                                                      t = b_93;
                                                      t = yield_0_0(t);
                                                      q_93 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, q_93);
                                                      LocalPopChoice(w_37);
                                                    }
                                                  else
                                                    {
                                                      t = v_37;
                                                      {
                                                        ATerm r_93 = NULL;
                                                        t = b_93;
                                                        t = yield_0_0(t);
                                                        r_93 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, r_93);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = r_37;
                                                {
                                                  ATerm s_93 = NULL;
                                                  t = b_93;
                                                  t = yield_0_0(t);
                                                  s_93 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, s_93);
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
                        ATerm t_93 = NULL;
                        t = b_93;
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
  return(t);
}
ATerm downup2_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  t = p_87(t);
  {
    static ATerm r_2 (ATerm t)
    {
      t = downup2_2_0(p_87, q_87, t);
      return(t);
    }
    t = SRTS_all(r_2, t);
  }
  t = q_87(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm x_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      LocalPopChoice(z_37);
    }
  else
    {
      t = x_37;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL;
  c_99 = t;
  if(match_cons(t, sym_appl_2))
    {
      a_99 = ATgetArgument(t, 0);
      b_99 = ATgetArgument(t, 1);
      {
        ATerm c_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_52 = NULL,b_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,y_18 = NULL,o_18 = NULL;
            t = SSLgetAnnotations(c_99);
            x_52 = t;
            t = a_99;
            if(match_cons(t, sym_prod_3))
              {
                f_53 = ATgetArgument(t, 0);
                g_53 = ATgetArgument(t, 1);
                h_53 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_99);
            e_53 = t;
            t = f_53;
            t = filter_1_0(w_2, t);
            i_53 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, i_53, g_53, h_53);
            o_18 = t;
            t = SSLsetAnnotations(o_18, e_53);
            j_53 = t;
            t = b_99;
            t = filter_1_0(x_2, t);
            b_53 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, j_53, b_53);
            y_18 = t;
            t = SSLsetAnnotations(y_18, x_52);
            LocalPopChoice(e_38);
          }
        else
          {
            t = c_38;
            t = c_99;
          }
      }
    }
  else
    {
      t = c_99;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm f_38 = t;
  if((PushChoice() == 0))
    {
      ATerm m_57 = NULL,n_57 = NULL,p_57 = NULL;
      n_57 = t;
      if(match_cons(t, sym_appl_2))
        {
          p_57 = ATgetArgument(t, 0);
          m_57 = ATgetArgument(t, 1);
          {
            ATerm k_61 = NULL,p_61 = NULL,q_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,j_18 = NULL,g_18 = NULL,f_18 = NULL,e_18 = NULL;
            t = SSLgetAnnotations(n_57);
            k_61 = t;
            t = p_57;
            if(match_cons(t, sym_prod_3))
              {
                q_61 = ATgetArgument(t, 0);
                t_61 = ATgetArgument(t, 1);
                u_61 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_57);
            p_61 = t;
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
                a_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_61);
            z_61 = t;
            t = a_62;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, a_62);
            e_18 = t;
            t = SSLsetAnnotations(e_18, z_61);
            b_62 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, b_62);
            f_18 = t;
            t = SSLsetAnnotations(f_18, w_61);
            y_61 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, q_61, y_61, u_61);
            g_18 = t;
            t = SSLsetAnnotations(g_18, p_61);
            v_61 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, v_61, m_57);
            j_18 = t;
            t = SSLsetAnnotations(j_18, k_61);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              p_57 = ATgetArgument(t, 0);
              {
                ATerm n_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,m_18 = NULL,l_18 = NULL;
                t = SSLgetAnnotations(n_57);
                n_62 = t;
                t = p_57;
                if(match_cons(t, sym_opt_1))
                  {
                    s_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_57);
                r_62 = t;
                t = s_62;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, s_62);
                l_18 = t;
                t = SSLsetAnnotations(l_18, r_62);
                t_62 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, t_62);
                m_18 = t;
                t = SSLsetAnnotations(m_18, n_62);
              }
            }
          else
            {
              ATerm g_63 = NULL,n_18 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  p_57 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_57);
              g_63 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, p_57);
              n_18 = t;
              t = SSLsetAnnotations(n_18, g_63);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_38;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm g_38 = t;
  if((PushChoice() == 0))
    {
      ATerm h_60 = NULL,k_60 = NULL,l_60 = NULL;
      k_60 = t;
      if(match_cons(t, sym_appl_2))
        {
          l_60 = ATgetArgument(t, 0);
          h_60 = ATgetArgument(t, 1);
          {
            ATerm w_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,t_18 = NULL,s_18 = NULL,q_18 = NULL,p_18 = NULL;
            t = SSLgetAnnotations(k_60);
            w_63 = t;
            t = l_60;
            if(match_cons(t, sym_prod_3))
              {
                b_64 = ATgetArgument(t, 0);
                c_64 = ATgetArgument(t, 1);
                d_64 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_60);
            a_64 = t;
            t = c_64;
            if(match_cons(t, sym_cf_1))
              {
                g_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_64);
            f_64 = t;
            t = g_64;
            if(match_cons(t, sym_opt_1))
              {
                j_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_64);
            i_64 = t;
            t = j_64;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, j_64);
            p_18 = t;
            t = SSLsetAnnotations(p_18, i_64);
            k_64 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, k_64);
            q_18 = t;
            t = SSLsetAnnotations(q_18, f_64);
            h_64 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, b_64, h_64, d_64);
            s_18 = t;
            t = SSLsetAnnotations(s_18, a_64);
            e_64 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, e_64, h_60);
            t_18 = t;
            t = SSLsetAnnotations(t_18, w_63);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              l_60 = ATgetArgument(t, 0);
              {
                ATerm r_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,v_18 = NULL,u_18 = NULL;
                t = SSLgetAnnotations(k_60);
                r_64 = t;
                t = l_60;
                if(match_cons(t, sym_opt_1))
                  {
                    u_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_60);
                t_64 = t;
                t = u_64;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, u_64);
                u_18 = t;
                t = SSLsetAnnotations(u_18, t_64);
                v_64 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, v_64);
                v_18 = t;
                t = SSLsetAnnotations(v_18, r_64);
              }
            }
          else
            {
              ATerm b_65 = NULL,w_18 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  l_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_60);
              b_65 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, l_60);
              w_18 = t;
              t = SSLsetAnnotations(w_18, b_65);
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
static ATerm y_2 (ATerm t)
{
  t = repeat_2_0(ApplToSort_0_0, _id, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(b_3, t);
      LocalPopChoice(k_38);
    }
  else
    {
      t = j_38;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm l_38 = t;
  if((PushChoice() == 0))
    {
      ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL,z_18 = NULL;
      z_99 = t;
      if(match_cons(t, sym_lit_1))
        {
          y_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_99);
      x_99 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, y_99);
      z_18 = t;
      t = SSLsetAnnotations(z_18, x_99);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_38;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_65 = NULL,k_65 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          j_65 = ATgetArgument(t, 0);
          {
            ATerm q_38 = ATgetArgument(t, 1);
            if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
              {
                k_65 = ATgetFirst((ATermList) q_38);
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
      t = j_65;
      t = injection_0_0(t);
      t = k_65;
      LocalPopChoice(p_38);
    }
  else
    {
      t = o_38;
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
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
    }
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm j_95 = NULL,q_101 = NULL,k_101 = NULL,y_100 = NULL,r_100 = NULL,i_100 = NULL,d_100 = NULL,t_99 = NULL,m_99 = NULL,g_99 = NULL,s_95 = NULL;
  j_95 = t;
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_95 = NULL,l_95 = NULL;
        t = term_y_38;
        k_95 = t;
        t = term_z_38;
        l_95 = t;
        t = term_a_39;
        t = p_9(k_95, l_95, t);
        t = j_95;
        t = downup2_2_0(t_2, u_2, t);
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
      }
  }
  s_95 = t;
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_95 = NULL,v_95 = NULL;
        t = term_y_38;
        u_95 = t;
        t = term_d_39;
        v_95 = t;
        t = term_e_39;
        t = p_9(u_95, v_95, t);
        t = s_95;
        t = topdown_1_0(v_2, t);
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = s_95;
      }
  }
  g_99 = t;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_99 = NULL,j_99 = NULL;
        t = term_y_38;
        i_99 = t;
        t = term_h_39;
        j_99 = t;
        t = term_i_39;
        t = p_9(i_99, j_99, t);
        t = g_99;
        t = topdown_1_0(y_2, t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        t = g_99;
      }
  }
  m_99 = t;
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_99 = NULL,p_99 = NULL;
        t = term_y_38;
        o_99 = t;
        t = term_n_39;
        p_99 = t;
        t = term_o_39;
        t = p_9(o_99, p_99, t);
        t = m_99;
        t = topdown_1_0(z_2, t);
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        t = m_99;
      }
  }
  t_99 = t;
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_99 = NULL,w_99 = NULL;
        t = term_y_38;
        v_99 = t;
        t = term_r_39;
        w_99 = t;
        t = term_s_39;
        t = p_9(v_99, w_99, t);
        t = t_99;
        t = topdown_1_0(a_3, t);
        LocalPopChoice(q_39);
      }
    else
      {
        t = p_39;
        t = t_99;
      }
  }
  d_100 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_100 = NULL,g_100 = NULL;
        t = term_y_38;
        f_100 = t;
        t = term_v_39;
        g_100 = t;
        t = term_w_39;
        t = p_9(f_100, g_100, t);
        t = d_100;
        t = replace_appl_0_0(t);
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = d_100;
      }
  }
  i_100 = t;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_100 = NULL,l_100 = NULL;
        t = term_y_38;
        k_100 = t;
        t = term_z_39;
        l_100 = t;
        t = term_a_40;
        t = p_9(k_100, l_100, t);
        t = i_100;
        t = bottomup_1_0(c_3, t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        t = i_100;
      }
  }
  r_100 = t;
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_100 = NULL,u_100 = NULL;
        t = term_y_38;
        t_100 = t;
        t = term_d_40;
        u_100 = t;
        t = term_e_40;
        t = p_9(t_100, u_100, t);
        t = r_100;
        t = topdown_1_0(d_3, t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = r_100;
      }
  }
  y_100 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_101 = NULL,b_101 = NULL;
        t = term_y_38;
        a_101 = t;
        t = term_j_40;
        b_101 = t;
        t = term_k_40;
        t = p_9(a_101, b_101, t);
        t = y_100;
        t = topdown_1_0(e_3, t);
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = y_100;
      }
  }
  k_101 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
        t = term_y_38;
        o_65 = t;
        t = term_n_40;
        p_65 = t;
        t = term_o_40;
        t = p_9(o_65, p_65, t);
        t = k_101;
        if(match_cons(t, sym_parsetree_2))
          {
            n_65 = ATgetArgument(t, 0);
            {
              ATerm p_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = n_65;
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = k_101;
      }
  }
  q_101 = t;
  {
    ATerm q_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_101;
        if((j_95 != t))
          {
            _fail(t);
          }
        t = q_101;
        {
          ATerm v_40 = t;
          int w_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_65 = NULL,x_65 = NULL;
              t = term_y_38;
              u_65 = t;
              t = term_x_40;
              x_65 = t;
              t = term_y_40;
              t = p_9(u_65, x_65, t);
              t = q_101;
              LocalPopChoice(w_40);
              t = implodeAsfix_1_0(_id, t);
            }
          else
            {
              t = v_40;
              t = implodeAsfix_1_0(_fail, t);
            }
        }
        LocalPopChoice(t_40);
      }
    else
      {
        t = q_40;
        t = q_101;
      }
  }
  return(t);
}
static ATerm e_9 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm c_102 = NULL;
  t = SSL_fputc(o_41, p_41);
  c_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_102);
  return(t);
}
static ATerm f_9 (ATerm j_26, ATerm k_26, ATerm t)
{
  ATerm d_102 = NULL;
  t = SSL_write_term_to_stream_text(j_26, k_26);
  d_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_102);
  return(t);
}
static ATerm h_9 (ATerm n_93 (ATerm), ATerm h_224, ATerm p_26, ATerm t)
{
  ATerm e_102 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_224, term_z_40);
  t = l_9(t);
  e_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_102, p_26);
  t = n_93(t);
  t = fclose_0_0(t);
  t = p_26;
  return(t);
}
static ATerm g_9 (ATerm f_26, ATerm g_26, ATerm t)
{
  ATerm f_102 = NULL;
  t = SSL_write_term_to_stream_baf(f_26, g_26);
  f_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_102);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_41 = ATgetArgument(t, 0);
      if(match_cons(a_41, sym_Stream_1))
        {
          m_102 = ATgetArgument(a_41, 0);
        }
      else
        _fail(t);
      n_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(m_102, n_102, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      if(match_cons(b_41, sym_Stream_1))
        {
          r_102 = ATgetArgument(b_41, 0);
        }
      else
        _fail(t);
      s_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(r_102, s_102, t);
  o_102 = t;
  t = term_c_41;
  p_102 = t;
  t = o_102;
  if(match_cons(t, sym_Stream_1))
    {
      q_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_41, o_102);
  t = e_9(p_102, q_102, t);
  return(t);
}
ATerm output_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm g_102 = NULL,h_102 = NULL;
  t = j_117(t);
  h_102 = t;
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_102 = NULL,j_102 = NULL;
        t = term_y_38;
        i_102 = t;
        t = term_j_41;
        j_102 = t;
        t = term_k_41;
        t = p_9(i_102, j_102, t);
        LocalPopChoice(e_41);
      }
    else
      {
        t = d_41;
        t = term_n_41;
      }
  }
  g_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_102, h_102);
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_102 = NULL,l_102 = NULL;
        t = term_y_38;
        k_102 = t;
        t = term_u_41;
        l_102 = t;
        t = term_v_41;
        t = p_9(k_102, l_102, t);
        t = (ATerm) ATmakeAppl(sym__2, g_102, h_102);
        LocalPopChoice(t_41);
        if(match_cons(t, sym__2))
          {
            ATerm w_41 = ATgetArgument(t, 0);
            ATerm x_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_9(f_3, g_102, h_102, t);
      }
    else
      {
        t = s_41;
        if(match_cons(t, sym__2))
          {
            ATerm y_41 = ATgetArgument(t, 0);
            ATerm z_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_9(g_3, g_102, h_102, t);
      }
  }
  return(t);
}
static ATerm g_103 (ATerm a_103, ATerm t)
{
  t = SSL_fclose(a_103);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL;
  e_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_103 = ATgetArgument(t, 0);
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_103);
            LocalPopChoice(b_42);
          }
        else
          {
            t = a_42;
            t = g_103(e_103, t);
          }
      }
    }
  else
    {
      t = g_103(e_103, t);
    }
  return(t);
}
static ATerm i_9 (ATerm l_26, ATerm t)
{
  t = SSL_read_term_from_stream(l_26);
  return(t);
}
static ATerm j_9 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_strcat(h_40, i_40);
  return(t);
}
static ATerm k_9 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm h_103 = NULL;
  t = SSL_fopen(q_41, r_41);
  h_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_103);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_103 = NULL;
  t = SSL_stdin_stream();
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_103);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_103 = NULL;
  t = SSL_stdout_stream();
  j_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_103);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_103 = NULL;
  t = SSL_stderr_stream();
  k_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_103);
  return(t);
}
static ATerm r_104 (ATerm q_103, ATerm t)
{
  ATerm r_103 = NULL;
  t = SSL_explode_term(q_103);
  if(match_cons(t, sym__2))
    {
      ATerm c_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_42 = ATgetArgument(t, 1);
        if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
          {
            r_103 = ATgetFirst((ATermList) d_42);
            {
              ATerm e_42 = (ATerm) ATgetNext((ATermList) d_42);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_103;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_103;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_103;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_103;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_104 (ATerm u_103, ATerm v_103, ATerm w_103, ATerm t)
{
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL,c_104 = NULL,l_20 = NULL;
  t = SSLgetAnnotations(w_103);
  z_103 = t;
  t = u_103;
  if(match_cons(t, sym_Path_1))
    {
      c_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_104, v_103);
  l_20 = t;
  t = SSLsetAnnotations(l_20, z_103);
  if(match_cons(t, sym__2))
    {
      x_103 = ATgetArgument(t, 0);
      y_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(x_103, y_103, t);
  return(t);
}
static ATerm t_104 (ATerm e_104, ATerm f_104, ATerm g_104, ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL,j_104 = NULL,m_104 = NULL,m_20 = NULL;
  t = SSLgetAnnotations(g_104);
  j_104 = t;
  t = SSL_is_string(e_104);
  m_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_104, f_104);
  m_20 = t;
  t = SSLsetAnnotations(m_20, j_104);
  if(match_cons(t, sym__2))
    {
      h_104 = ATgetArgument(t, 0);
      i_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(h_104, i_104, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL;
  o_104 = t;
  if(match_cons(t, sym__2))
    {
      p_104 = ATgetArgument(t, 0);
      q_104 = ATgetArgument(t, 1);
      {
        ATerm f_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_104(o_104, t);
            LocalPopChoice(g_42);
          }
        else
          {
            t = f_42;
            {
              ATerm h_42 = t;
              int j_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_104(p_104, q_104, o_104, t);
                  LocalPopChoice(j_42);
                }
              else
                {
                  t = h_42;
                  t = t_104(p_104, q_104, o_104, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_104(o_104, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_104 = NULL,y_104 = NULL,z_104 = NULL,e_105 = NULL;
  e_105 = t;
  {
    ATerm k_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_105, term_p_42);
        t = l_9(t);
        LocalPopChoice(n_42);
      }
    else
      {
        t = k_42;
        {
          ATerm s_66 = NULL,x_66 = NULL;
          t = term_q_42;
          x_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_42, e_105);
          t = j_9(x_66, e_105, t);
          s_66 = t;
          t = SSL_perror(s_66);
          _fail(t);
        }
      }
  }
  y_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9(z_104, t);
  v_104 = t;
  t = y_104;
  t = fclose_0_0(t);
  t = v_104;
  return(t);
}
ATerm input_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_105 = NULL,i_105 = NULL;
      t = term_y_38;
      h_105 = t;
      t = term_t_42;
      i_105 = t;
      t = term_u_42;
      t = p_9(h_105, i_105, t);
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      t = term_v_42;
    }
  t = ReadFromFile_0_0(t);
  t = k_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL;
  j_105 = t;
  t = term_w_42;
  t = whoami_0_0(t);
  k_105 = t;
  t = term_x_42;
  m_105 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_43), k_105), term_y_42);
  n_105 = t;
  t = SSL_printnl(m_105, n_105);
  t = term_d_18;
  l_105 = t;
  t = SSL_exit(l_105);
  t = j_105;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm p_105 = NULL;
  p_105 = t;
  if(match_string(t, "-k"))
    {
      t = p_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_105;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL;
  q_105 = t;
  t = SSL_string_to_int(q_105);
  r_105 = t;
  t = term_b_43;
  s_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_43, r_105);
  t = s_9(s_105, r_105, t);
  t = q_105;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_c_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, j_3, t_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm u_105 = NULL;
  u_105 = t;
  if(match_string(t, "-S"))
    {
      t = u_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_105;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm v_105 = NULL,w_105 = NULL;
  t = term_d_43;
  v_105 = t;
  t = term_f_43;
  w_105 = t;
  t = term_g_43;
  t = s_9(v_105, w_105, t);
  t = term_h_43;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_j_43;
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
  ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
  x_105 = t;
  t = SSL_string_to_int(x_105);
  y_105 = t;
  t = term_d_43;
  z_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_43, y_105);
  t = s_9(z_105, y_105, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_105);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_k_43;
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
  ATerm a_106 = NULL,b_106 = NULL;
  t = term_l_43;
  a_106 = t;
  t = term_w_42;
  b_106 = t;
  t = term_m_43;
  t = s_9(a_106, b_106, t);
  t = term_n_43;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_o_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      LocalPopChoice(r_43);
    }
  else
    {
      t = q_43;
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_4, d_4, e_4, t);
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            t = Option_3_0(f_4, g_4, k_4, t);
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm c_106 = NULL;
  t = term_y_38;
  c_106 = t;
  t = SSL_table_put(c_106, h_51, i_51);
  t = (ATerm) ATmakeAppl(sym__3, term_y_38, h_51, i_51);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL;
      t = term_w_42;
      t = e_0(t);
      h_106 = t;
      t = term_u_43;
      i_106 = t;
      t = term_v_43;
      j_106 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_43, term_v_43, h_106);
      t = q_9(i_106, j_106, h_106, t);
      _fail(t);
    }
  else
    {
      ATerm m_106 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_106 = ATgetFirst((ATermList) t);
          g_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_106;
      t = c_0(t);
      t = term_w_42;
      t = d_0(t);
      m_106 = t;
      t = (ATerm) ATinsert(CheckATermList(g_106), m_106);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_106 = NULL;
  o_106 = t;
  if(match_string(t, "-o"))
    {
      t = o_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_106;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm p_106 = NULL,q_106 = NULL;
  p_106 = t;
  t = term_j_41;
  q_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_41, p_106);
  t = s_9(q_106, p_106, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_106);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_w_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
static ATerm q_9 (ATerm m_53, ATerm n_53, ATerm l_53, ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  s_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_43 = ATgetArgument(t, 0);
            ATerm b_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
        t = p_9(m_53, n_53, t);
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        t = (ATerm) ATempty;
      }
  }
  t_106 = t;
  t = (ATerm) ATinsert(CheckATermList(t_106), l_53);
  u_106 = t;
  t = SSL_table_put(m_53, n_53, u_106);
  t = s_106;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
      t = term_w_42;
      t = p_0(t);
      f_107 = t;
      t = term_u_43;
      g_107 = t;
      t = term_v_43;
      h_107 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_43, term_v_43, f_107);
      t = q_9(g_107, h_107, f_107, t);
      _fail(t);
    }
  else
    {
      ATerm l_107 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_107 = ATgetFirst((ATermList) t);
          c_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_107;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_107 = ATgetFirst((ATermList) t);
          e_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_107;
      t = n_0(t);
      t = d_107;
      t = o_0(t);
      l_107 = t;
      t = (ATerm) ATinsert(CheckATermList(e_107), l_107);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  if(match_string(t, "-i"))
    {
      t = n_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_107;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL;
  o_107 = t;
  t = term_t_42;
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_42, o_107);
  t = s_9(p_107, o_107, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_107);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_44;
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
  ATerm q_107 = NULL,r_107 = NULL;
  q_107 = t;
  t = term_z_38;
  r_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, q_107);
  t = s_9(r_107, q_107, t);
  t = q_107;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_d_44;
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
  ATerm s_107 = NULL,t_107 = NULL;
  s_107 = t;
  t = term_d_39;
  t_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_39, s_107);
  t = s_9(t_107, s_107, t);
  t = s_107;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_e_44;
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
  ATerm u_107 = NULL,v_107 = NULL;
  u_107 = t;
  t = term_r_39;
  v_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_39, u_107);
  t = s_9(v_107, u_107, t);
  t = u_107;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_h_44;
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
  ATerm w_107 = NULL,x_107 = NULL;
  w_107 = t;
  t = term_d_40;
  x_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_40, w_107);
  t = s_9(x_107, w_107, t);
  t = w_107;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_i_44;
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
  ATerm y_107 = NULL,z_107 = NULL;
  y_107 = t;
  t = term_v_39;
  z_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_39, y_107);
  t = s_9(z_107, y_107, t);
  t = y_107;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_j_44;
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
  ATerm a_108 = NULL,b_108 = NULL;
  a_108 = t;
  t = term_h_39;
  b_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_39, a_108);
  t = s_9(b_108, a_108, t);
  t = a_108;
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
  ATerm c_108 = NULL,d_108 = NULL;
  c_108 = t;
  t = term_z_39;
  d_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_39, c_108);
  t = s_9(d_108, c_108, t);
  t = c_108;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_n_44;
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
  ATerm e_108 = NULL,f_108 = NULL;
  e_108 = t;
  t = term_n_39;
  f_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_39, e_108);
  t = s_9(f_108, e_108, t);
  t = e_108;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_o_44;
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
  ATerm g_108 = NULL,h_108 = NULL;
  g_108 = t;
  t = term_j_40;
  h_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_40, g_108);
  t = s_9(h_108, g_108, t);
  t = g_108;
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
  ATerm i_108 = NULL,j_108 = NULL;
  i_108 = t;
  t = term_n_40;
  j_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_40, i_108);
  t = s_9(j_108, i_108, t);
  t = i_108;
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
  ATerm k_108 = NULL,l_108 = NULL;
  k_108 = t;
  t = term_x_40;
  l_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_40, k_108);
  t = s_9(l_108, k_108, t);
  t = k_108;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_r_44;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, s_4, t_4, t);
      LocalPopChoice(t_44);
    }
  else
    {
      t = s_44;
      {
        ATerm u_44 = t;
        int v_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_4, l_5, m_5, t);
            LocalPopChoice(v_44);
          }
        else
          {
            t = u_44;
            {
              ATerm w_44 = t;
              int x_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_5, o_5, p_5, t);
                  LocalPopChoice(x_44);
                }
              else
                {
                  t = w_44;
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
                          ATerm e_45 = t;
                          int f_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(t_5, w_5, x_5, t);
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
                                    t = Option_3_0(c_6, i_6, j_6, t);
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
                                          t = Option_3_0(k_6, m_6, o_6, t);
                                          LocalPopChoice(j_45);
                                        }
                                      else
                                        {
                                          t = i_45;
                                          {
                                            ATerm k_45 = t;
                                            int l_45 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(s_6, t_6, u_6, t);
                                                LocalPopChoice(l_45);
                                              }
                                            else
                                              {
                                                t = k_45;
                                                {
                                                  ATerm m_45 = t;
                                                  int n_45 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(v_6, y_6, g_7, t);
                                                      LocalPopChoice(n_45);
                                                    }
                                                  else
                                                    {
                                                      t = m_45;
                                                      {
                                                        ATerm o_45 = t;
                                                        int q_45 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(l_7, m_7, n_7, t);
                                                            LocalPopChoice(q_45);
                                                          }
                                                        else
                                                          {
                                                            t = o_45;
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
  ATerm m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_42;
  t = whoami_0_0(t);
  m_108 = t;
  t = term_x_42;
  o_108 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_45), m_108);
  p_108 = t;
  t = SSL_printnl(o_108, p_108);
  t = term_d_18;
  n_108 = t;
  t = SSL_exit(n_108);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL;
  t = term_y_38;
  q_108 = t;
  t = term_t_45;
  r_108 = t;
  t = term_u_45;
  t = p_9(q_108, r_108, t);
  return(t);
}
static ATerm m_9 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_44, l_44);
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      t = SSL_addr(k_44, l_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL;
  t_108 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_108;
      t = n_100(t);
    }
  else
    {
      ATerm y_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_108 = ATgetFirst((ATermList) t);
          v_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_108;
      t = foldr_2_0(n_100, o_100, t);
      y_108 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_108, y_108);
      t = o_100(t);
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
  ATerm l_68 = NULL,m_68 = NULL;
  if(match_cons(t, sym__2))
    {
      l_68 = ATgetArgument(t, 0);
      m_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(l_68, m_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_109 = NULL,a_67 = NULL,i_68 = NULL;
  t = times_0_0(t);
  i_68 = t;
  t = SSL_explode_term(i_68);
  if(match_cons(t, sym__2))
    {
      ATerm x_45 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_67;
  t = foldr_2_0(s_7, t_7, t);
  b_109 = t;
  t = SSL_TicksToSeconds(b_109);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL;
  n_109 = t;
  if(match_cons(t, sym__2))
    {
      o_109 = ATgetArgument(t, 0);
      p_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_109;
        if((o_109 != t))
          {
            _fail(t);
          }
        t = n_109;
        LocalPopChoice(z_45);
      }
    else
      {
        t = y_45;
        t = (ATerm) ATmakeAppl(sym__2, o_109, p_109);
        {
          ATerm b_46 = t;
          int c_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_109, p_109);
              LocalPopChoice(c_46);
            }
          else
            {
              t = b_46;
              t = SSL_gtr(o_109, p_109);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_109, p_109);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm t_109 = NULL;
  t_109 = t;
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL;
        t = term_y_38;
        w_109 = t;
        t = term_d_43;
        x_109 = t;
        t = term_f_46;
        t = p_9(w_109, x_109, t);
        v_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_109, term_d_18);
        t = geq_0_0(t);
        t = t_109;
        t = e_109(t);
        LocalPopChoice(e_46);
      }
    else
      {
        t = d_46;
        t = t_109;
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL,c_110 = NULL,d_110 = NULL;
  t = run_time_0_0(t);
  z_109 = t;
  t = term_w_42;
  t = whoami_0_0(t);
  a_110 = t;
  t = term_x_42;
  c_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_46), z_109), term_g_46), a_110);
  d_110 = t;
  t = SSL_printnl(c_110, d_110);
  t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_46), z_109), term_g_46), a_110));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_110 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_43;
  e_110 = t;
  t = SSL_exit(e_110);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL;
  p_110 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_110;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_110 = ATgetArgument(t, 0);
          {
            ATerm y_68 = NULL,p_20 = NULL;
            t = SSLgetAnnotations(p_110);
            y_68 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_110);
            p_20 = t;
            t = SSLsetAnnotations(p_20, y_68);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_110;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_110 = NULL,i_110 = NULL;
      t = term_y_38;
      h_110 = t;
      t = term_l_46;
      i_110 = t;
      t = term_m_46;
      t = p_9(h_110, i_110, t);
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
      t = fetch_1_0(v_7, t);
    }
  t = a_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm s_110 = NULL,t_110 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_110 = ATgetFirst((ATermList) t);
      t_110 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_110 = NULL,y_110 = NULL;
        static ATerm w_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_110)), not_null(y_110));
          return(t);
        }
        t = t_110;
        t = k_0(t);
        if(((x_110 != NULL) && (x_110 != t)))
          _fail(t);
        else
          x_110 = t;
        t = s_110;
        t = i_0(t);
        if(((y_110 != NULL) && (y_110 != t)))
          _fail(t);
        else
          y_110 = t;
        t = t_110;
        t = reverse_acc_2_0(i_0, w_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_42;
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
  ATerm n_111 = NULL,k_69 = NULL,l_69 = NULL;
  n_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_111), term_n_46);
  {
    ATerm o_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(p_46);
      }
    else
      {
        t = o_46;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, n_111), term_n_46));
      }
  }
  k_69 = t;
  t = term_n_41;
  l_69 = t;
  t = SSL_printnl(l_69, k_69);
  t = (ATerm) ATinsert(ATinsert(ATempty, n_111), term_n_46);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL,h_69 = NULL,i_69 = NULL;
  ATerm q_46 = t;
  int r_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_111 = NULL,g_111 = NULL;
      t = term_y_38;
      f_111 = t;
      t = term_t_45;
      g_111 = t;
      t = term_u_45;
      t = p_9(f_111, g_111, t);
      c_111 = t;
      LocalPopChoice(r_46);
    }
  else
    {
      t = q_46;
      {
        static ATerm x_7 (ATerm t)
        {
          ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL,t_20 = NULL;
          j_111 = t;
          if(match_cons(t, sym_Program_1))
            {
              i_111 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_111);
          h_111 = t;
          t = i_111;
          if(((c_111 != NULL) && (c_111 != t)))
            _fail(t);
          else
            c_111 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, i_111);
          t_20 = t;
          t = SSLsetAnnotations(t_20, h_111);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_69 = NULL,f_69 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_46), not_null(c_111)), term_u_46);
        {
          ATerm x_46 = t;
          int z_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(z_46);
            }
          else
            {
              t = x_46;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_46), not_null(c_111)), term_u_46));
            }
        }
        e_69 = t;
        t = term_n_41;
        f_69 = t;
        t = SSL_printnl(f_69, e_69);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_46), not_null(c_111)), term_u_46);
        LocalPopChoice(t_46);
      }
    else
      {
        t = s_46;
      }
  }
  t = term_a_47;
  {
    ATerm b_47 = t;
    int c_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(c_47);
      }
    else
      {
        t = b_47;
        t = (ATerm) ATinsert(ATempty, term_a_47);
      }
  }
  h_69 = t;
  t = term_n_41;
  i_69 = t;
  t = SSL_printnl(i_69, h_69);
  t = term_u_43;
  d_111 = t;
  t = term_v_43;
  e_111 = t;
  t = term_d_47;
  t = p_9(d_111, e_111, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(a_8, t);
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_69 = NULL,o_69 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_47), term_k_47), term_j_47), term_g_47);
        {
          ATerm n_47 = t;
          int o_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(o_47);
            }
          else
            {
              t = n_47;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_47), term_k_47), term_j_47), term_g_47));
            }
        }
        n_69 = t;
        t = term_n_41;
        o_69 = t;
        t = SSL_printnl(o_69, n_69);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_47), term_k_47), term_j_47), term_g_47);
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  static ATerm o_112 (ATerm t)
  {
    ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
    l_112 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_112 = ATgetFirst((ATermList) t);
        n_112 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_47 = t;
      int q_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_69 = NULL,v_69 = NULL,v_20 = NULL;
          t = SSLgetAnnotations(l_112);
          s_69 = t;
          t = m_112;
          t = g_94(t);
          v_69 = t;
          t = (ATerm) ATinsert(CheckATermList(n_112), v_69);
          v_20 = t;
          t = SSLsetAnnotations(v_20, s_69);
          LocalPopChoice(q_47);
        }
      else
        {
          t = p_47;
          {
            ATerm d_70 = NULL,h_70 = NULL,w_20 = NULL;
            t = SSLgetAnnotations(l_112);
            d_70 = t;
            t = n_112;
            t = o_112(t);
            h_70 = t;
            t = (ATerm) ATinsert(CheckATermList(h_70), m_112);
            w_20 = t;
            t = SSLsetAnnotations(w_20, d_70);
          }
        }
    }
    return(t);
  }
  t = o_112(t);
  return(t);
}
ATerm map_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  static ATerm f_113 (ATerm t)
  {
    ATerm c_113 = NULL,d_113 = NULL,e_113 = NULL;
    c_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_113;
      }
    else
      {
        ATerm a_71 = NULL,i_71 = NULL,j_71 = NULL,d_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_113 = ATgetFirst((ATermList) t);
            e_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_113);
        a_71 = t;
        t = d_113;
        t = w_93(t);
        i_71 = t;
        t = e_113;
        t = f_113(t);
        j_71 = t;
        t = (ATerm) ATinsert(CheckATermList(j_71), i_71);
        d_21 = t;
        t = SSLsetAnnotations(d_21, a_71);
      }
    return(t);
  }
  t = f_113(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_113 = NULL;
      q_113 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_113;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_47 = ATgetFirst((ATermList) t);
              ATerm u_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_113;
        }
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
      {
        static ATerm h_115 (ATerm t)
        {
          ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL;
          f_115 = t;
          if(match_cons(t, sym_iter_1))
            {
              g_115 = ATgetArgument(t, 0);
              {
                ATerm k_72 = NULL,z_21 = NULL;
                t = SSLgetAnnotations(f_115);
                k_72 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, g_115);
                z_21 = t;
                t = SSLsetAnnotations(z_21, k_72);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  g_115 = ATgetArgument(t, 0);
                  e_115 = ATgetArgument(t, 1);
                  {
                    ATerm w_72 = NULL,d_22 = NULL;
                    t = SSLgetAnnotations(f_115);
                    w_72 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, g_115, e_115);
                    d_22 = t;
                    t = SSLsetAnnotations(d_22, w_72);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      g_115 = ATgetArgument(t, 0);
                      {
                        ATerm k_73 = NULL,e_22 = NULL;
                        t = SSLgetAnnotations(f_115);
                        k_73 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, g_115);
                        e_22 = t;
                        t = SSLsetAnnotations(e_22, k_73);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          g_115 = ATgetArgument(t, 0);
                          e_115 = ATgetArgument(t, 1);
                          {
                            ATerm c_74 = NULL,f_22 = NULL;
                            t = SSLgetAnnotations(f_115);
                            c_74 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, g_115, e_115);
                            f_22 = t;
                            t = SSLsetAnnotations(f_22, c_74);
                          }
                        }
                      else
                        {
                          ATerm p_75 = NULL,r_75 = NULL,h_22 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              g_115 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_115);
                          p_75 = t;
                          t = g_115;
                          {
                            static ATerm b_8 (ATerm t)
                            {
                              ATerm v_47 = t;
                              int w_47 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_75 = NULL,z_75 = NULL;
                                  z_75 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      y_75 = ATgetArgument(t, 0);
                                      {
                                        ATerm f_76 = NULL,g_22 = NULL;
                                        t = SSLgetAnnotations(z_75);
                                        f_76 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, y_75);
                                        g_22 = t;
                                        t = SSLsetAnnotations(g_22, f_76);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = z_75;
                                    }
                                  LocalPopChoice(w_47);
                                }
                              else
                                {
                                  t = v_47;
                                  t = h_115(t);
                                }
                              return(t);
                            }
                            t = map_1_0(b_8, t);
                          }
                          r_75 = t;
                          t = (ATerm) ATmakeAppl(sym_seq_1, r_75);
                          h_22 = t;
                          t = SSLsetAnnotations(h_22, p_75);
                        }
                    }
                }
            }
          return(t);
        }
        t = h_115(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_115 = NULL,s_115 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL;
  t = term_y_38;
  r_115 = t;
  t = term_t_45;
  s_115 = t;
  t = term_u_45;
  t = p_9(r_115, s_115, t);
  k_76 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        t = (ATerm) ATinsert(ATempty, k_76);
      }
  }
  l_76 = t;
  t = term_n_41;
  m_76 = t;
  t = SSL_printnl(m_76, l_76);
  t = k_76;
  return(t);
}
static ATerm p_9 (ATerm d_55, ATerm e_55, ATerm t)
{
  t = SSL_table_get(d_55, e_55);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm t_115 = NULL,u_115 = NULL;
  t = term_z_47;
  t_115 = t;
  t = term_w_42;
  u_115 = t;
  t = term_d_48;
  t = s_9(t_115, u_115, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_g_48;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL;
  t = term_z_47;
  x_115 = t;
  t = term_w_42;
  y_115 = t;
  t = term_d_48;
  t = s_9(x_115, y_115, t);
  t = term_h_48;
  v_115 = t;
  t = term_w_42;
  w_115 = t;
  t = term_i_48;
  t = s_9(v_115, w_115, t);
  t = term_j_48;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_k_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_8, e_8, f_8, t);
      LocalPopChoice(m_48);
    }
  else
    {
      t = l_48;
      t = Option_3_0(g_8, j_8, k_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm t)
{
  ATerm z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL,n_25 = NULL;
  e_116 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_116 = ATgetFirst((ATermList) t);
      b_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_116);
  z_115 = t;
  t = a_116;
  t = y_65(t);
  c_116 = t;
  t = b_116;
  t = z_65(t);
  d_116 = t;
  t = (ATerm) ATinsert(CheckATermList(d_116), c_116);
  n_25 = t;
  t = SSLsetAnnotations(n_25, z_115);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL,o_116 = NULL,p_116 = NULL,v_25 = NULL;
  j_116 = t;
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_48;
        t = a_112(t);
        LocalPopChoice(o_48);
      }
    else
      {
        t = n_48;
      }
  }
  t = j_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_116 = ATgetFirst((ATermList) t);
      m_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_116);
  k_116 = t;
  t = term_t_45;
  p_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_45, l_116);
  t = s_9(p_116, l_116, t);
  t = m_116;
  {
    static ATerm z_116 (ATerm t)
    {
      ATerm q_48 = t;
      int s_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_48 = t;
          int u_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_116 = NULL;
              s_116 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_116;
              LocalPopChoice(u_48);
            }
          else
            {
              t = t_48;
              t = a_112(t);
              t = Cons_2_0(_id, z_116, t);
            }
          LocalPopChoice(s_48);
        }
      else
        {
          t = q_48;
          {
            ATerm v_116 = NULL,w_116 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_116 = ATgetFirst((ATermList) t);
                w_116 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_116), (ATerm) ATmakeAppl(sym_Undefined_1, v_116));
          }
        }
      return(t);
    }
    t = z_116(t);
  }
  o_116 = t;
  t = (ATerm) ATinsert(CheckATermList(o_116), (ATerm) ATmakeAppl(sym_Program_1, l_116));
  v_25 = t;
  t = SSLsetAnnotations(v_25, k_116);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm s_117 = NULL;
  s_117 = t;
  if(match_string(t, "--help"))
    {
      t = s_117;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_117;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_117;
        }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL;
  t = term_l_46;
  t_117 = t;
  t = term_w_42;
  u_117 = t;
  t = term_y_48;
  t = s_9(t_117, u_117, t);
  t = term_d_49;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_g_49;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL;
  n_117 = t;
  t = term_u_43;
  p_117 = t;
  t = term_v_43;
  q_117 = t;
  t = (ATerm) ATempty;
  r_117 = t;
  t = SSL_table_put(p_117, q_117, r_117);
  t = n_117;
  {
    static ATerm l_8 (ATerm t)
    {
      ATerm h_49 = t;
      int j_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_111(t);
          LocalPopChoice(j_49);
        }
      else
        {
          t = h_49;
          {
            ATerm k_49 = t;
            int p_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_8, o_8, p_8, t);
                LocalPopChoice(p_49);
              }
            else
              {
                t = k_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_8, t);
  }
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_118 = NULL;
        f_118 = t;
        {
          ATerm t_49 = t;
          int u_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_76 = NULL;
              t = f_118;
              {
                ATerm v_49 = t;
                int w_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_76 = NULL,r_76 = NULL;
                    t = term_y_38;
                    q_76 = t;
                    t = term_l_46;
                    r_76 = t;
                    t = term_m_46;
                    t = p_9(q_76, r_76, t);
                    LocalPopChoice(w_49);
                  }
                else
                  {
                    t = v_49;
                    t = fetch_1_0(r_8, t);
                  }
              }
              t = f_118;
              t = default_system_usage_0_0(t);
              t = term_f_43;
              p_76 = t;
              t = SSL_exit(p_76);
              LocalPopChoice(u_49);
            }
          else
            {
              t = t_49;
              {
                ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
                t = term_y_38;
                w_76 = t;
                t = term_z_47;
                x_76 = t;
                t = term_x_49;
                t = p_9(w_76, x_76, t);
                t = f_118;
                t = default_system_about_0_0(t);
                t = term_f_43;
                v_76 = t;
                t = SSL_exit(v_76);
              }
            }
        }
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        {
          ATerm y_49 = t;
          int z_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_118 = NULL,i_118 = NULL,j_118 = NULL;
              static ATerm s_8 (ATerm t)
              {
                ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL,d_26 = NULL;
                m_118 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_118 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_118);
                k_118 = t;
                t = l_118;
                if(((l_117 != NULL) && (l_117 != t)))
                  _fail(t);
                else
                  l_117 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_118);
                d_26 = t;
                t = SSLsetAnnotations(d_26, k_118);
                return(t);
              }
              t = fetch_1_0(s_8, t);
              t = term_x_42;
              i_118 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_117)), term_a_50);
              j_118 = t;
              t = SSL_printnl(i_118, j_118);
              t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_117)), term_a_50));
              t = default_system_usage_0_0(t);
              t = term_d_18;
              g_118 = t;
              t = SSL_exit(g_118);
              LocalPopChoice(z_49);
            }
          else
            {
              t = y_49;
            }
        }
      }
  }
  m_117 = t;
  t = term_u_43;
  o_117 = t;
  t = SSL_table_destroy(o_117);
  t = m_117;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL;
  t = parse_options_1_0(c_117, t);
  r_118 = t;
  t = term_b_50;
  u_118 = t;
  t = SSL_table_create(u_118);
  t = term_b_50;
  s_118 = t;
  t = term_d_50;
  t_118 = t;
  t = SSL_table_put(s_118, t_118, r_118);
  t = r_118;
  t = e_117(t);
  {
    ATerm g_50 = t;
    int h_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_117, t);
        LocalPopChoice(h_50);
      }
    else
      {
        t = g_50;
        {
          ATerm i_50 = t;
          int j_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_117(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_50);
            }
          else
            {
              t = i_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm k_50 = t;
  int n_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_options_0_0(t);
      LocalPopChoice(n_50);
    }
  else
    {
      t = k_50;
      {
        ATerm o_50 = t;
        int r_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(r_50);
          }
        else
          {
            t = o_50;
            {
              ATerm s_50 = t;
              int t_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
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
                        t = Option_3_0(y_8, d_9, w_9, t);
                        LocalPopChoice(v_50);
                      }
                    else
                      {
                        t = u_50;
                        {
                          ATerm w_50 = t;
                          int x_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(x_50);
                            }
                          else
                            {
                              t = w_50;
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
  t = input_1_0(x_9, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm w_118 = NULL,x_118 = NULL;
  t = term_u_41;
  w_118 = t;
  t = term_w_42;
  x_118 = t;
  t = term_y_50;
  t = s_9(w_118, x_118, t);
  t = term_z_50;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_a_51;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = output_1_0(implode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_8, default_usage_0_0, _id, x_8, t);
  return(t);
}

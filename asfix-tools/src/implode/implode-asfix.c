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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_r_50;
ATerm term_l_50;
ATerm term_j_50;
ATerm term_g_50;
ATerm term_n_49;
ATerm term_l_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_x_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_n_47;
ATerm term_i_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_v_45;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_m_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_g_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_t_43;
ATerm term_s_43;
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
ATerm term_u_42;
ATerm term_t_42;
ATerm term_y_41;
ATerm term_w_41;
ATerm term_t_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_g_41;
ATerm term_d_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_s_40;
ATerm term_r_40;
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
ATerm term_m_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_u_35;
ATerm term_y_34;
ATerm term_v_34;
ATerm term_j_34;
ATerm term_h_34;
ATerm term_g_34;
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
ATerm term_r_32;
ATerm term_n_30;
ATerm term_e_30;
ATerm term_t_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_h_18;
ATerm term_x_17;
ATerm term_k_16;
ATerm term_o_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
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
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeInt(34);
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
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_d_39);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_i_39);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_m_39);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_r_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_v_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_z_39);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_d_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_j_40);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_n_40);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_r_40);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_z_40);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_m_41);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_w_41);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_x_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym__2, term_g_43, term_j_43);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_43);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym__2, term_q_43, term_a_43);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--concrete       Skip concrete syntax parts for Stratego parsing", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_x_45);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_g_43);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_p_46);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym__2, term_z_43, term_a_44);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym__2, term_m_48, term_a_43);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym__2, term_p_48, term_a_43);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym__2, term_p_46, term_a_43);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym__3, term_z_43, term_a_44, (ATerm) ATempty);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_m_48);
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(sym__2, term_w_41, term_a_43);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm j_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm annotation_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm w_90 (ATerm), ATerm t);
ATerm appl_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm skip_concrete_1_0 (ATerm h_87 (ATerm), ATerm t);
static ATerm u_0 (ATerm f_0, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm is_conc_0_0 (ATerm t);
ATerm ReplConsConc_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm c_9 (ATerm o_86 (ATerm), ATerm t_21, ATerm s_21, ATerm t);
ATerm is_ins_0_0 (ATerm t);
ATerm is_nil_0_0 (ATerm t);
ATerm ReplCons_1_0 (ATerm v_86 (ATerm), ATerm t);
ATerm OptList_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm implodeAsfix_1_0 (ATerm j_87 (ATerm), ATerm t);
ATerm Tuple_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm e_89 (ATerm), ATerm t);
ATerm FlatAlt_0_0 (ATerm t);
ATerm injective_alt_0_0 (ATerm t);
static ATerm a_60 (ATerm h_48, ATerm i_48, ATerm j_48, ATerm k_48, ATerm t);
static ATerm e_60 (ATerm x_49, ATerm y_49, ATerm b_50, ATerm c_50, ATerm t);
static ATerm h_60 (ATerm z_51, ATerm c_52, ATerm f_52, ATerm i_52, ATerm t);
static ATerm m_60 (ATerm v_58, ATerm w_58, ATerm x_58, ATerm y_58, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm injection_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm f_89 (ATerm), ATerm t);
ATerm CTC2_0_0 (ATerm t);
ATerm CTC1_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm conc_to_cons_0_0 (ATerm t);
ATerm Constr1_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm i_90 (ATerm), ATerm t);
ATerm ConstrNil_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm replace_appl_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_103 (ATerm), ATerm t);
static ATerm a_82 (ATerm u_78, ATerm t);
static ATerm b_82 (ATerm d_80, ATerm t);
ATerm FlatList_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm s_96 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm PpSym_0_0 (ATerm t);
static ATerm e_91 (ATerm u_89, ATerm v_89, ATerm w_89, ATerm t);
static ATerm f_91 (ATerm g_90, ATerm h_90, ATerm k_90, ATerm t);
ATerm ApplToSort_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm t);
ATerm flat_layout_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm h_96 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm implode_lexical_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t);
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
static ATerm q_9 (ATerm o_41, ATerm p_41, ATerm t);
static ATerm r_9 (ATerm j_26, ATerm k_26, ATerm t);
static ATerm t_9 (ATerm h_95 (ATerm), ATerm k_226, ATerm p_26, ATerm t);
static ATerm s_9 (ATerm f_26, ATerm g_26, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_1_0 (ATerm m_119 (ATerm), ATerm t);
static ATerm w_104 (ATerm q_104, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_9 (ATerm l_26, ATerm t);
static ATerm v_9 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm w_9 (ATerm q_41, ATerm r_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_106 (ATerm g_105, ATerm t);
static ATerm i_106 (ATerm k_105, ATerm l_105, ATerm m_105, ATerm t);
static ATerm j_106 (ATerm u_105, ATerm v_105, ATerm w_105, ATerm t);
static ATerm x_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_119 (ATerm), ATerm t);
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
static ATerm g_10 (ATerm h_51, ATerm i_51, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_10 (ATerm m_53, ATerm n_53, ATerm l_53, ATerm t);
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
static ATerm y_9 (ATerm k_44, ATerm l_44, ATerm t);
ATerm foldr_2_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_111 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm need_help_1_0 (ATerm d_119 (ATerm), ATerm t);
static ATerm h_10 (ATerm e_57, ATerm f_57, ATerm g_57, ATerm t);
ATerm lookup_table_0_1 (ATerm y_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_57, ATerm n_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_10 (ATerm j_57, ATerm k_57, ATerm t);
static ATerm b_10 (ATerm o_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_96 (ATerm), ATerm t);
ATerm map_1_0 (ATerm q_95 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_10 (ATerm h_57, ATerm i_57, ATerm t);
static ATerm d_10 (ATerm f_55, ATerm g_55, ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_114 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm parse_options_1_0 (ATerm b_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm j_0 (ATerm t)
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
  ATerm m_9 = t;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
      p_18 = t;
      if(match_cons(t, sym_appl_2))
        {
          q_18 = ATgetArgument(t, 0);
          o_18 = ATgetArgument(t, 1);
          {
            ATerm l_6 = NULL,x_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,j_1 = NULL,i_1 = NULL,r_7 = NULL;
            t = SSLgetAnnotations(p_18);
            l_6 = t;
            t = q_18;
            if(match_cons(t, sym_prod_3))
              {
                b_7 = ATgetArgument(t, 0);
                c_7 = ATgetArgument(t, 1);
                d_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_18);
            x_6 = t;
            t = c_7;
            if(match_cons(t, sym_cf_1))
              {
                r_7 = ATgetArgument(t, 0);
                {
                  ATerm y_7 = NULL,a_8 = NULL,c_8 = NULL,d_8 = NULL,x_0 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(c_7);
                  y_7 = t;
                  t = r_7;
                  if(match_cons(t, sym_opt_1))
                    {
                      c_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_7);
                  a_8 = t;
                  t = c_8;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, c_8);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, a_8);
                  d_8 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, d_8);
                  x_0 = t;
                  t = SSLsetAnnotations(x_0, y_7);
                }
              }
            else
              {
                ATerm l_8 = NULL,y_0 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    r_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_7);
                l_8 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, r_7);
                y_0 = t;
                t = SSLsetAnnotations(y_0, l_8);
              }
            e_7 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, b_7, e_7, d_7);
            i_1 = t;
            t = SSLsetAnnotations(i_1, x_6);
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, f_7, o_18);
            j_1 = t;
            t = SSLsetAnnotations(j_1, l_6);
          }
        }
      else
        {
          ATerm t_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,l_1 = NULL,k_1 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              q_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_18);
          t_8 = t;
          t = q_18;
          if(match_cons(t, sym_opt_1))
            {
              y_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_18);
          x_8 = t;
          t = y_8;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, y_8);
          k_1 = t;
          t = SSLsetAnnotations(k_1, x_8);
          z_8 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, z_8);
          l_1 = t;
          t = SSLsetAnnotations(l_1, t_8);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_9;
    }
  {
    ATerm n_9 = t;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL,w_18 = NULL,y_18 = NULL,b_19 = NULL,h_19 = NULL,n_19 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,s_2 = NULL,i_2 = NULL;
        c_21 = t;
        if(match_cons(t, sym_appl_2))
          {
            w_18 = ATgetArgument(t, 0);
            y_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_21);
        v_18 = t;
        t = w_18;
        if(match_cons(t, sym_prod_3))
          {
            h_19 = ATgetArgument(t, 0);
            n_19 = ATgetArgument(t, 1);
            z_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_18);
        b_19 = t;
        t = n_19;
        t = oncetd_1_0(t_0, t);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, h_19, a_21, z_20);
        i_2 = t;
        t = SSLsetAnnotations(i_2, b_19);
        b_21 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, b_21, y_18);
        s_2 = t;
        t = SSLsetAnnotations(s_2, v_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_9;
      }
  }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm h_21 = NULL,o_21 = NULL,r_21 = NULL,w_1 = NULL;
  r_21 = t;
  if(match_cons(t, sym_lex_1))
    {
      o_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_21);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, o_21);
  w_1 = t;
  t = SSLsetAnnotations(w_1, h_21);
  return(t);
}
ATerm annotation_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,c_15 = NULL,d_15 = NULL,h_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,v_0 = NULL,h_0 = NULL,b_0 = NULL;
  l_15 = t;
  if(match_cons(t, sym_appl_2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_15);
  n_14 = t;
  t = u_14;
  if(match_cons(t, sym_prod_3))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
      z_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  w_14 = t;
  t = z_14;
  if(match_cons(t, sym_attrs_1))
    {
      h_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_14);
  d_15 = t;
  t = h_15;
  t = oncetd_1_0(j_0, t);
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, j_15);
  b_0 = t;
  t = SSLsetAnnotations(b_0, d_15);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, x_14, y_14, k_15);
  h_0 = t;
  t = SSLsetAnnotations(h_0, w_14);
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, c_15, v_14);
  v_0 = t;
  t = SSLsetAnnotations(v_0, n_14);
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
  t = g_87(t);
  j_14 = t;
  t = i_14;
  t = f_87(t);
  k_14 = t;
  t = term_o_9;
  l_14 = t;
  t = (ATerm) ATinsert(CheckATermList(k_14), j_14);
  m_14 = t;
  t = SSL_mkterm(l_14, m_14);
  return(t);
}
ATerm alltd_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  static ATerm y_21 (ATerm t)
  {
    ATerm p_9 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_90(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = p_9;
        t = SRTS_all(y_21, t);
      }
    return(t);
  }
  t = y_21(t);
  return(t);
}
ATerm appl_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,i_22 = NULL,r_22 = NULL,i_3 = NULL;
  r_22 = t;
  if(match_cons(t, sym_appl_2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_22);
  z_21 = t;
  t = a_22;
  t = h_80(t);
  c_22 = t;
  t = b_22;
  t = i_80(t);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, c_22, i_22);
  i_3 = t;
  t = SSLsetAnnotations(i_3, z_21);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,x_25 = NULL,y_25 = NULL,d_6 = NULL,b_6 = NULL;
  y_25 = t;
  if(match_cons(t, sym_prod_3))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      r_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_25);
  o_25 = t;
  t = q_25;
  if(match_cons(t, sym_cf_1))
    {
      t_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_25);
  s_25 = t;
  t = t_25;
  t = oncetd_1_0(c_1, t);
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, u_25);
  b_6 = t;
  t = SSLsetAnnotations(b_6, s_25);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, p_25, x_25, r_25);
  d_6 = t;
  t = SSLsetAnnotations(d_6, o_25);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,a_6 = NULL;
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
  a_6 = t;
  t = SSLsetAnnotations(a_6, c_26);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm b_11 = NULL,d_11 = NULL,i_11 = NULL,f_6 = NULL;
  i_11 = t;
  if(match_cons(t, sym_varsym_1))
    {
      d_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, d_11);
  f_6 = t;
  t = SSLsetAnnotations(f_6, b_11);
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
ATerm skip_concrete_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,b_24 = NULL,f_24 = NULL,g_24 = NULL,i_24 = NULL,m_24 = NULL,r_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,e_6 = NULL,z_5 = NULL,y_5 = NULL,c_4 = NULL,a_4 = NULL;
  static ATerm r_29 (ATerm t)
  {
    static ATerm d_1 (ATerm t)
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
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
            ATerm l_10 = t;
            int o_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_10 = NULL,m_10 = NULL,n_10 = NULL,q_10 = NULL,v_10 = NULL,w_10 = NULL,z_10 = NULL,h_6 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(o_29);
                c_10 = t;
                t = p_29;
                if(match_cons(t, sym_prod_3))
                  {
                    n_10 = ATgetArgument(t, 0);
                    q_10 = ATgetArgument(t, 1);
                    v_10 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_29);
                m_10 = t;
                t = n_10;
                t = SRTS_one(e_1, t);
                w_10 = t;
                t = (ATerm) ATmakeAppl(sym_prod_3, w_10, q_10, v_10);
                g_6 = t;
                t = SSLsetAnnotations(g_6, m_10);
                z_10 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, z_10, q_29);
                h_6 = t;
                t = SSLsetAnnotations(h_6, c_10);
                t = h_87(t);
                LocalPopChoice(o_10);
              }
            else
              {
                t = l_10;
                {
                  ATerm r_11 = NULL,x_11 = NULL,z_11 = NULL,a_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
                  t = SSLgetAnnotations(o_29);
                  r_11 = t;
                  t = p_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      z_11 = ATgetArgument(t, 0);
                      a_12 = ATgetArgument(t, 1);
                      e_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_29);
                  x_11 = t;
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
                  t = (ATerm) ATmakeAppl(sym_prod_3, z_11, a_12, j_12);
                  j_7 = t;
                  t = SSLsetAnnotations(j_7, x_11);
                  f_12 = t;
                  t = (ATerm) ATmakeAppl(sym_appl_2, f_12, q_29);
                  k_7 = t;
                  t = SSLsetAnnotations(k_7, r_11);
                  t = h_87(t);
                }
              }
          }
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          t = annotation_2_0(h_87, r_29, t);
        }
      return(t);
    }
    t = alltd_1_0(d_1, t);
    return(t);
  }
  h_25 = t;
  if(match_cons(t, sym_appl_2))
    {
      l_23 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_25);
  k_23 = t;
  t = l_23;
  if(match_cons(t, sym_prod_3))
    {
      i_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
      r_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_23);
  g_24 = t;
  t = m_24;
  if(match_cons(t, sym_cf_1))
    {
      c_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
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
  a_4 = t;
  t = SSLsetAnnotations(a_4, e_25);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, g_25);
  c_4 = t;
  t = SSLsetAnnotations(c_4, b_25);
  d_25 = t;
  t = r_24;
  if(match_cons(t, sym_attrs_1))
    {
      y_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_24);
  x_24 = t;
  t = y_24;
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,v_5 = NULL,u_5 = NULL;
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
      if(((a_23 != NULL) && (a_23 != t)))
        _fail(t);
      else
        a_23 = t;
      t = (ATerm) ATmakeAppl(sym_cons_1, l_25);
      u_5 = t;
      t = SSLsetAnnotations(u_5, k_25);
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym_term_1, m_25);
      v_5 = t;
      t = SSLsetAnnotations(v_5, i_25);
      return(t);
    }
    t = SRTS_one(z_0, t);
  }
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_attrs_1, z_24);
  y_5 = t;
  t = SSLsetAnnotations(y_5, x_24);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, i_24, d_25, a_25);
  z_5 = t;
  t = SSLsetAnnotations(z_5, g_24);
  w_24 = t;
  t = b_24;
  {
    static ATerm a_1 (ATerm t)
    {
      t = appl_2_0(b_1, _id, t);
      if(((j_23 != NULL) && (j_23 != t)))
        _fail(t);
      else
        j_23 = t;
      return(t);
    }
    t = oncetd_1_0(a_1, t);
  }
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, w_24, f_24);
  e_6 = t;
  t = SSLsetAnnotations(e_6, k_23);
  t = not_null(a_23);
  if(match_string(t, "ToTerm"))
    {
      t = (ATerm) ATmakeAppl(sym_ToTerm_1, not_null(j_23));
    }
  else
    {
      if(match_string(t, "ToStrategy"))
        {
          t = (ATerm) ATmakeAppl(sym_ToStrategy_1, not_null(j_23));
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ToBuild", 0, ATtrue)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_ToBuild_1, not_null(j_23));
        }
    }
  t = r_29(t);
  return(t);
}
static ATerm u_0 (ATerm f_0, ATerm t)
{
  ATerm g_0 = NULL;
  t = SSL_explode_term(f_0);
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_10) != ATmakeSymbol("", 0, ATtrue)))
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
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_1 (ATerm t)
            {
              t = m_0;
              return(t);
            }
            t = l_0;
            t = at_end_1_0(m_1, t);
            LocalPopChoice(a_11);
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
        ATerm c_11 = ATgetArgument(t, 2);
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
      ATerm f_11 = ATgetFirst((ATermList) t);
      s_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_1;
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_11 = ATgetFirst((ATermList) t);
            u_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_11);
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
                            t = n_1;
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
                            t = n_1;
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
                      t = n_1;
                    }
                }
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_11 = ATgetFirst((ATermList) t);
                x_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_1;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_11 = ATgetFirst((ATermList) t);
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
                ATerm y_11 = ATgetArgument(t, 0);
                ATerm b_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_1;
          }
      }
    else
      {
        t = g_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_2;
        if(match_cons(t, sym_iter_1))
          {
            ATerm c_12 = ATgetArgument(t, 0);
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
        ATerm d_12 = t;
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
                ATerm p_2 = NULL,v_8 = NULL;
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
                v_8 = t;
                t = SSLsetAnnotations(v_8, p_2);
              }
            t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
            t = conc_0_0(t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = d_12;
            t = (ATerm) ATmakeAppl(sym_Conc_2, g_1, h_1);
          }
      }
    }
  return(t);
}
static ATerm c_9 (ATerm o_86 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm w_6 = NULL,z_6 = NULL,a_7 = NULL;
  t = t_21;
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
  t = map_1_0(o_86, t);
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
        ATerm q_12 = ATgetArgument(t, 2);
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
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              h_5 = ATgetArgument(t, 0);
              {
                ATerm t_12 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(s_12);
          t = h_5;
          if((z_4 != t))
            {
              _fail(t);
            }
          t = v_4;
        }
      else
        {
          t = r_12;
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
                    ATerm d_13 = ATgetArgument(t, 1);
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
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_iter_star_1))
          {
            ATerm k_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_13);
        t = n_6;
      }
    else
      {
        t = h_13;
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
ATerm ReplCons_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,x_10 = NULL,y_10 = NULL;
      s_10 = t;
      if(match_cons(t, sym_appl_2))
        {
          t_10 = ATgetArgument(t, 0);
          u_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm e_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_10;
              t = c_9(v_86, t_10, u_10, t);
              LocalPopChoice(p_14);
            }
          else
            {
              t = e_14;
              {
                ATerm q_14 = t;
                int r_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_10;
                    t = is_nil_0_0(t);
                    t = (ATerm) ATempty;
                    LocalPopChoice(r_14);
                  }
                else
                  {
                    t = q_14;
                    {
                      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
                      t = t_10;
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
                            t = t_10;
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
                            t = t_10;
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
              x_10 = ATgetFirst((ATermList) t);
              y_10 = (ATerm) ATgetNext((ATermList) t);
              t = y_10;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm l_16 = t;
                  int m_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_10;
                      t = c_9(v_86, t_10, u_10, t);
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
                            t = t_10;
                            t = is_ins_0_0(t);
                            t = x_10;
                            t = v_86(t);
                            s_11 = t;
                            t = (ATerm) ATinsert(ATempty, s_11);
                            LocalPopChoice(o_16);
                          }
                        else
                          {
                            t = n_16;
                            {
                              ATerm u_4 = NULL,y_4 = NULL,a_5 = NULL,c_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL;
                              t = t_10;
                              if(match_cons(t, sym_prod_3))
                                {
                                  y_4 = ATgetArgument(t, 0);
                                  g_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_16 = ATgetArgument(t, 2);
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
                                  t = t_10;
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
                                  t = t_10;
                                }
                              t = x_10;
                              t = v_86(t);
                              u_4 = t;
                              t = (ATerm) ATmakeAppl(sym_Some_1, u_4);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = s_10;
                  t = c_9(v_86, t_10, u_10, t);
                }
            }
          else
            {
              t = s_10;
              t = c_9(v_86, t_10, u_10, t);
            }
        }
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = ReplConsConc_1_0(v_86, t);
    }
  return(t);
}
ATerm OptList_0_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,u_13 = NULL;
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
      f_13 = ATgetFirst((ATermList) t);
      j_13 = (ATerm) ATgetNext((ATermList) t);
      t = j_13;
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
          if((f_13 != t))
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
          t = f_13;
          if(match_cons(t, sym_cf_1))
            {
              g_13 = ATgetArgument(t, 0);
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
          if((g_13 != t))
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
      ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
      v_19 = t;
      if(match_cons(t, sym_appl_2))
        {
          w_19 = ATgetArgument(t, 0);
          u_19 = ATgetArgument(t, 1);
          {
            ATerm d_21 = NULL,g_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,g_9 = NULL,f_9 = NULL,m_22 = NULL;
            t = SSLgetAnnotations(v_19);
            d_21 = t;
            t = w_19;
            if(match_cons(t, sym_prod_3))
              {
                i_21 = ATgetArgument(t, 0);
                j_21 = ATgetArgument(t, 1);
                k_21 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_19);
            g_21 = t;
            t = j_21;
            if(match_cons(t, sym_cf_1))
              {
                m_22 = ATgetArgument(t, 0);
                {
                  ATerm u_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,d_9 = NULL,b_9 = NULL;
                  t = SSLgetAnnotations(j_21);
                  u_22 = t;
                  t = m_22;
                  if(match_cons(t, sym_opt_1))
                    {
                      x_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_22);
                  w_22 = t;
                  t = x_22;
                  if(!(match_cons(t, sym_layout_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_opt_1, x_22);
                  b_9 = t;
                  t = SSLsetAnnotations(b_9, w_22);
                  y_22 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, y_22);
                  d_9 = t;
                  t = SSLsetAnnotations(d_9, u_22);
                }
              }
            else
              {
                ATerm c_23 = NULL,e_9 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    m_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_21);
                c_23 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, m_22);
                e_9 = t;
                t = SSLsetAnnotations(e_9, c_23);
              }
            l_21 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, i_21, l_21, k_21);
            f_9 = t;
            t = SSLsetAnnotations(f_9, g_21);
            m_21 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, m_21, u_19);
            g_9 = t;
            t = SSLsetAnnotations(g_9, d_21);
          }
        }
      else
        {
          ATerm h_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,k_9 = NULL,j_9 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              w_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_19);
          h_23 = t;
          t = w_19;
          if(match_cons(t, sym_opt_1))
            {
              n_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_19);
          m_23 = t;
          t = n_23;
          if(!(match_cons(t, sym_layout_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_opt_1, n_23);
          j_9 = t;
          t = SSLsetAnnotations(j_9, m_23);
          o_23 = t;
          t = (ATerm) ATmakeAppl(sym_cf_1, o_23);
          k_9 = t;
          t = SSLsetAnnotations(k_9, h_23);
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
ATerm implodeAsfix_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm g_30 = NULL;
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
              ATerm o_34 = NULL,p_34 = NULL,u_34 = NULL;
              p_34 = t;
              if(match_cons(t, sym_appl_2))
                {
                  u_34 = ATgetArgument(t, 0);
                  o_34 = ATgetArgument(t, 1);
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = p_34;
                        t = j_87(t);
                        t = p_34;
                        t = skip_concrete_1_0(z_34, t);
                        LocalPopChoice(x_16);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm r_17 = NULL,v_17 = NULL,l_9 = NULL;
                          t = SSLgetAnnotations(p_34);
                          r_17 = t;
                          t = o_34;
                          t = filter_1_0(r_1, t);
                          v_17 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, u_34, v_17);
                          l_9 = t;
                          t = SSLsetAnnotations(l_9, r_17);
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
                                            ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
                                            if(match_cons(t, sym_appl_2))
                                              {
                                                y_19 = ATgetArgument(t, 0);
                                                z_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = z_19;
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                a_20 = ATgetFirst((ATermList) t);
                                                b_20 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = b_20;
                                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                              _fail(t);
                                            t = y_19;
                                            t = injection_0_0(t);
                                            t = a_20;
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
                      u_34 = ATgetArgument(t, 0);
                      {
                        ATerm k_17 = t;
                        int l_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = p_34;
                            t = j_87(t);
                            t = p_34;
                            t = skip_concrete_1_0(z_34, t);
                            LocalPopChoice(l_17);
                          }
                        else
                          {
                            t = k_17;
                            {
                              ATerm u_23 = NULL,w_23 = NULL,z_9 = NULL;
                              t = SSLgetAnnotations(p_34);
                              u_23 = t;
                              t = u_34;
                              t = map_1_0(z_34, t);
                              w_23 = t;
                              t = (ATerm) ATmakeAppl(sym_amb_1, w_23);
                              z_9 = t;
                              t = SSLsetAnnotations(z_9, u_23);
                            }
                          }
                      }
                    }
                  else
                    {
                      t = p_34;
                      t = j_87(t);
                      t = p_34;
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
      g_30 = ATgetArgument(t, 0);
      {
        ATerm m_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_30;
  t = z_34(t);
  return(t);
}
ATerm Tuple_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,z_35 = NULL,c_36 = NULL,g_36 = NULL;
  w_35 = t;
  if(match_cons(t, sym_appl_2))
    {
      x_35 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_35;
  if(match_cons(t, sym_prod_3))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
      {
        ATerm p_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_35;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_seq_1))
          {
            ATerm w_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_17);
        {
          ATerm e_24 = NULL;
          t = term_x_17;
          e_24 = t;
          t = SSL_mkterm(e_24, g_36);
        }
      }
    else
      {
        t = t_17;
        {
          ATerm o_24 = NULL;
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
          t = term_x_17;
          o_24 = t;
          t = SSL_mkterm(o_24, g_36);
        }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(e_89, t);
    return(t);
  }
  t = e_89(t);
  t = SRTS_all(t_1, t);
  return(t);
}
ATerm FlatAlt_0_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,l_37 = NULL,m_37 = NULL,r_37 = NULL,y_40 = NULL,b_41 = NULL,c_41 = NULL;
  static ATerm h_43 (ATerm t)
  {
    ATerm i_41 = NULL,k_41 = NULL,x_41 = NULL,z_41 = NULL;
    if(match_cons(t, sym__2))
      {
        i_41 = ATgetArgument(t, 0);
        z_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_41;
    if(match_cons(t, sym_alt_2))
      {
        k_41 = ATgetArgument(t, 0);
        x_41 = ATgetArgument(t, 1);
        {
          ATerm z_17 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_41;
              if(((l_37 != NULL) && (l_37 != t)))
                _fail(t);
              else
                l_37 = t;
              t = (ATerm) ATmakeAppl(sym_alt_2, z_41, not_null(r_37));
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
                    if(((l_37 != NULL) && (l_37 != t)))
                      _fail(t);
                    else
                      l_37 = t;
                    t = x_41;
                    if(((m_37 != NULL) && (m_37 != t)))
                      _fail(t);
                    else
                      m_37 = t;
                    t = (ATerm) ATmakeAppl(sym_alt_2, z_41, not_null(r_37));
                    LocalPopChoice(f_18);
                  }
                else
                  {
                    t = d_18;
                    {
                      ATerm p_42 = NULL,s_42 = NULL;
                      t = term_h_18;
                      s_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_41, term_h_18);
                      t = y_9(z_41, s_42, t);
                      p_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_41, p_42);
                      t = h_43(t);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = i_41;
        if(((l_37 != NULL) && (l_37 != t)))
          _fail(t);
        else
          l_37 = t;
        t = (ATerm) ATmakeAppl(sym_alt_2, z_41, not_null(r_37));
      }
    return(t);
  }
  y_40 = t;
  if(match_cons(t, sym_appl_2))
    {
      b_41 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_26 = NULL,o_26 = NULL,q_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,e_27 = NULL,h_27 = NULL,y_12 = NULL,x_12 = NULL,w_12 = NULL,v_12 = NULL,m_27 = NULL;
        t = SSLgetAnnotations(y_40);
        a_26 = t;
        t = b_41;
        if(match_cons(t, sym_prod_3))
          {
            q_26 = ATgetArgument(t, 0);
            u_26 = ATgetArgument(t, 1);
            v_26 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_41);
        o_26 = t;
        t = q_26;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_27 = ATgetFirst((ATermList) t);
            c_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_26);
        a_27 = t;
        t = b_27;
        if(match_cons(t, sym_cf_1))
          {
            m_27 = ATgetArgument(t, 0);
            {
              ATerm j_19 = t;
              int k_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_28 = NULL,u_12 = NULL;
                  t = SSLgetAnnotations(b_27);
                  j_28 = t;
                  t = m_27;
                  if(((l_37 != NULL) && (l_37 != t)))
                    _fail(t);
                  else
                    l_37 = t;
                  t = (ATerm) ATmakeAppl(sym_cf_1, m_27);
                  u_12 = t;
                  t = SSLsetAnnotations(u_12, j_28);
                  LocalPopChoice(k_19);
                }
              else
                {
                  t = j_19;
                  t = b_27;
                  if(((l_37 != NULL) && (l_37 != t)))
                    _fail(t);
                  else
                    l_37 = t;
                  t = b_27;
                }
            }
          }
        else
          {
            t = b_27;
            if(((l_37 != NULL) && (l_37 != t)))
              _fail(t);
            else
              l_37 = t;
            t = b_27;
          }
        e_27 = t;
        t = c_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(c_27), e_27);
        v_12 = t;
        t = SSLsetAnnotations(v_12, a_27);
        h_27 = t;
        t = u_26;
        if(match_cons(t, sym_cf_1))
          {
            y_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_26);
        x_26 = t;
        t = y_26;
        if(match_cons(t, sym_alt_2))
          {
            f_37 = ATgetArgument(t, 0);
            g_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_cf_1, y_26);
        w_12 = t;
        t = SSLsetAnnotations(w_12, x_26);
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, h_27, z_26, v_26);
        x_12 = t;
        t = SSLsetAnnotations(x_12, o_26);
        w_26 = t;
        t = c_41;
        if(((r_37 != NULL) && (r_37 != t)))
          _fail(t);
        else
          r_37 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, w_26, c_41);
        y_12 = t;
        t = SSLsetAnnotations(y_12, a_26);
        LocalPopChoice(i_19);
      }
    else
      {
        t = g_19;
        {
          ATerm x_28 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,c_13 = NULL,b_13 = NULL,a_13 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(y_40);
          x_28 = t;
          t = b_41;
          if(match_cons(t, sym_prod_3))
            {
              d_29 = ATgetArgument(t, 0);
              f_29 = ATgetArgument(t, 1);
              g_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_41);
          c_29 = t;
          t = d_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_29 = ATgetFirst((ATermList) t);
              v_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_29);
          l_29 = t;
          t = u_29;
          if(((l_37 != NULL) && (l_37 != t)))
            _fail(t);
          else
            l_37 = t;
          t = v_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(v_29), u_29);
          z_12 = t;
          t = SSLsetAnnotations(z_12, l_29);
          w_29 = t;
          t = f_29;
          if(match_cons(t, sym_lex_1))
            {
              j_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_29);
          i_29 = t;
          t = j_29;
          if(match_cons(t, sym_alt_2))
            {
              f_37 = ATgetArgument(t, 0);
              g_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_lex_1, j_29);
          a_13 = t;
          t = SSLsetAnnotations(a_13, i_29);
          k_29 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, w_29, k_29, g_29);
          b_13 = t;
          t = SSLsetAnnotations(b_13, c_29);
          h_29 = t;
          t = c_41;
          if(((r_37 != NULL) && (r_37 != t)))
            _fail(t);
          else
            r_37 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, h_29, c_41);
          c_13 = t;
          t = SSLsetAnnotations(c_13, x_28);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, f_37, g_37), term_h_18);
  t = h_43(t);
  return(t);
}
ATerm injective_alt_0_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,m_45 = NULL;
  g_45 = t;
  if(match_cons(t, sym_sort_1))
    {
      h_45 = ATgetArgument(t, 0);
      {
        ATerm d_30 = NULL,f_14 = NULL;
        t = SSLgetAnnotations(g_45);
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, h_45);
        f_14 = t;
        t = SSLsetAnnotations(f_14, d_30);
      }
    }
  else
    {
      if(match_cons(t, sym_cf_1))
        {
          h_45 = ATgetArgument(t, 0);
          {
            ATerm p_30 = NULL,t_30 = NULL,g_14 = NULL;
            t = SSLgetAnnotations(g_45);
            p_30 = t;
            t = h_45;
            t = injective_alt_0_0(t);
            t_30 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, t_30);
            g_14 = t;
            t = SSLsetAnnotations(g_14, p_30);
          }
        }
      else
        {
          ATerm f_31 = NULL,m_31 = NULL,n_31 = NULL,o_14 = NULL;
          if(match_cons(t, sym_alt_2))
            {
              h_45 = ATgetArgument(t, 0);
              m_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_45);
          f_31 = t;
          t = h_45;
          t = injective_alt_0_0(t);
          m_31 = t;
          t = m_45;
          t = injective_alt_0_0(t);
          n_31 = t;
          t = (ATerm) ATmakeAppl(sym_alt_2, m_31, n_31);
          o_14 = t;
          t = SSLsetAnnotations(o_14, f_31);
        }
    }
  return(t);
}
static ATerm a_60 (ATerm h_48, ATerm i_48, ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm l_48 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,k_49 = NULL,m_49 = NULL,b_15 = NULL,t_14 = NULL,s_14 = NULL;
  t = SSLgetAnnotations(k_48);
  l_48 = t;
  t = h_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_49 = ATgetFirst((ATermList) t);
      e_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_48);
  c_49 = t;
  t = d_49;
  if(match_cons(t, sym_varsym_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym_varsym_1, k_49);
  s_14 = t;
  t = SSLsetAnnotations(s_14, g_49);
  m_49 = t;
  t = e_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_49), m_49);
  t_14 = t;
  t = SSLsetAnnotations(t_14, c_49);
  f_49 = t;
  t = j_48;
  {
    ATerm l_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(v_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_19;
      }
  }
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, f_49, i_48, b_49);
  b_15 = t;
  t = SSLsetAnnotations(b_15, l_48);
  return(t);
}
static ATerm e_60 (ATerm x_49, ATerm y_49, ATerm b_50, ATerm c_50, ATerm t)
{
  ATerm d_50 = NULL,k_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,t_50 = NULL,n_15 = NULL,i_15 = NULL,q_51 = NULL;
  t = SSLgetAnnotations(c_50);
  d_50 = t;
  t = x_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_50 = ATgetFirst((ATermList) t);
      p_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_49);
  n_50 = t;
  t = o_50;
  if(match_cons(t, sym_sort_1))
    {
      q_51 = ATgetArgument(t, 0);
      {
        ATerm d_32 = NULL,e_15 = NULL;
        t = SSLgetAnnotations(o_50);
        d_32 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, q_51);
        e_15 = t;
        t = SSLsetAnnotations(e_15, d_32);
      }
    }
  else
    {
      ATerm m_32 = NULL,t_32 = NULL,u_32 = NULL,w_32 = NULL,g_15 = NULL,f_15 = NULL;
      if(match_cons(t, sym_cf_1))
        {
          q_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_50);
      m_32 = t;
      t = q_51;
      if(match_cons(t, sym_sort_1))
        {
          u_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_51);
      t_32 = t;
      t = (ATerm) ATmakeAppl(sym_sort_1, u_32);
      f_15 = t;
      t = SSLsetAnnotations(f_15, t_32);
      w_32 = t;
      t = (ATerm) ATmakeAppl(sym_cf_1, w_32);
      g_15 = t;
      t = SSLsetAnnotations(g_15, m_32);
    }
  q_50 = t;
  t = p_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_50), q_50);
  i_15 = t;
  t = SSLsetAnnotations(i_15, n_50);
  t_50 = t;
  t = y_49;
  t = injective_alt_0_0(t);
  k_50 = t;
  t = b_50;
  {
    ATerm m_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_19;
      }
  }
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, t_50, k_50, m_50);
  n_15 = t;
  t = SSLsetAnnotations(n_15, d_50);
  return(t);
}
static ATerm h_60 (ATerm z_51, ATerm c_52, ATerm f_52, ATerm i_52, ATerm t)
{
  ATerm l_52 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL,h_53 = NULL,o_53 = NULL,p_53 = NULL,d_16 = NULL,s_15 = NULL;
  t = SSLgetAnnotations(i_52);
  l_52 = t;
  t = z_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_53 = ATgetFirst((ATermList) t);
      h_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_51);
  d_53 = t;
  t = e_53;
  {
    ATerm o_19 = t;
    if((PushChoice() == 0))
      {
        ATerm t_53 = NULL,v_53 = NULL,w_53 = NULL,o_15 = NULL;
        w_53 = t;
        if(match_cons(t, sym_lit_1))
          {
            v_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_53);
        t_53 = t;
        t = (ATerm) ATmakeAppl(sym_lit_1, v_53);
        o_15 = t;
        t = SSLsetAnnotations(o_15, t_53);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_19;
      }
  }
  o_53 = t;
  t = h_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_53), o_53);
  s_15 = t;
  t = SSLsetAnnotations(s_15, d_53);
  p_53 = t;
  t = c_52;
  {
    static ATerm q_60 (ATerm t)
    {
      ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
      p_58 = t;
      if(match_cons(t, sym_sort_1))
        {
          q_58 = ATgetArgument(t, 0);
          {
            ATerm f_33 = NULL,t_15 = NULL;
            t = SSLgetAnnotations(p_58);
            f_33 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, q_58);
            t_15 = t;
            t = SSLsetAnnotations(t_15, f_33);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              q_58 = ATgetArgument(t, 0);
              {
                ATerm u_33 = NULL,y_33 = NULL,u_15 = NULL;
                t = SSLgetAnnotations(p_58);
                u_33 = t;
                t = q_58;
                t = q_60(t);
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
                  q_58 = ATgetArgument(t, 0);
                  {
                    ATerm i_34 = NULL,k_34 = NULL,v_15 = NULL;
                    t = SSLgetAnnotations(p_58);
                    i_34 = t;
                    t = q_58;
                    t = q_60(t);
                    k_34 = t;
                    t = (ATerm) ATmakeAppl(sym_lex_1, k_34);
                    v_15 = t;
                    t = SSLsetAnnotations(v_15, i_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      q_58 = ATgetArgument(t, 0);
                      {
                        ATerm w_34 = NULL,h_35 = NULL,w_15 = NULL;
                        t = SSLgetAnnotations(p_58);
                        w_34 = t;
                        t = q_58;
                        t = q_60(t);
                        h_35 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_1, h_35);
                        w_15 = t;
                        t = SSLsetAnnotations(w_15, w_34);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          q_58 = ATgetArgument(t, 0);
                          {
                            ATerm t_35 = NULL,b_36 = NULL,x_15 = NULL;
                            t = SSLgetAnnotations(p_58);
                            t_35 = t;
                            t = q_58;
                            t = q_60(t);
                            b_36 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_1, b_36);
                            x_15 = t;
                            t = SSLsetAnnotations(x_15, t_35);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              q_58 = ATgetArgument(t, 0);
                              r_58 = ATgetArgument(t, 1);
                              {
                                ATerm o_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,z_15 = NULL,y_15 = NULL;
                                t = SSLgetAnnotations(p_58);
                                o_36 = t;
                                t = q_58;
                                t = q_60(t);
                                r_36 = t;
                                t = r_58;
                                if(match_cons(t, sym_lit_1))
                                  {
                                    t_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(r_58);
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
                              ATerm c_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,b_16 = NULL,a_16 = NULL;
                              if(match_cons(t, sym_iter_star_sep_2))
                                {
                                  q_58 = ATgetArgument(t, 0);
                                  r_58 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(p_58);
                              c_37 = t;
                              t = q_58;
                              t = q_60(t);
                              h_37 = t;
                              t = r_58;
                              if(match_cons(t, sym_lit_1))
                                {
                                  j_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(r_58);
                              i_37 = t;
                              t = (ATerm) ATmakeAppl(sym_lit_1, j_37);
                              a_16 = t;
                              t = SSLsetAnnotations(a_16, i_37);
                              k_37 = t;
                              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, h_37, k_37);
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
    t = q_60(t);
  }
  b_53 = t;
  t = f_52;
  {
    ATerm p_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(z_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_19;
      }
  }
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, p_53, b_53, c_53);
  d_16 = t;
  t = SSLsetAnnotations(d_16, l_52);
  return(t);
}
static ATerm m_60 (ATerm v_58, ATerm w_58, ATerm x_58, ATerm y_58, ATerm t)
{
  ATerm z_58 = NULL,d_59 = NULL,e_16 = NULL;
  t = SSLgetAnnotations(y_58);
  z_58 = t;
  t = x_58;
  t = oncetd_1_0(d_2, t);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, v_58, w_58, d_59);
  e_16 = t;
  t = SSLsetAnnotations(e_16, z_58);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm t_49 = NULL,v_49 = NULL,w_49 = NULL,a_15 = NULL;
  w_49 = t;
  if(match_cons(t, sym_cons_1))
    {
      v_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_49);
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, v_49);
  a_15 = t;
  t = SSLsetAnnotations(a_15, t_49);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_51 = NULL,x_51 = NULL,y_51 = NULL,m_15 = NULL;
  y_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      x_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_51);
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, x_51);
  m_15 = t;
  t = SSLsetAnnotations(m_15, r_51);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,c_16 = NULL;
  u_58 = t;
  if(match_cons(t, sym_cons_1))
    {
      t_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_58);
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, t_58);
  c_16 = t;
  t = SSLsetAnnotations(c_16, s_58);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm f_59 = NULL;
  f_59 = t;
  if(match_string(t, "bracket"))
    {
      t = f_59;
    }
  else
    {
      if(!(match_cons(t, sym_bracket_0)))
        _fail(t);
      t = f_59;
    }
  return(t);
}
ATerm injection_0_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  n_59 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
      r_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_59;
  if(match_cons(t, sym_no_attrs_0))
    {
      t = p_59;
      if(match_cons(t, sym_cf_1))
        {
          q_59 = ATgetArgument(t, 0);
          t = q_59;
          if(match_cons(t, sym_iter_star_sep_2))
            {
              m_59 = ATgetArgument(t, 0);
              h_59 = ATgetArgument(t, 1);
              t = o_59;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_59 = ATgetFirst((ATermList) t);
                  l_59 = (ATerm) ATgetNext((ATermList) t);
                  t = l_59;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = i_59;
                      if(match_cons(t, sym_cf_1))
                        {
                          j_59 = ATgetArgument(t, 0);
                          t = j_59;
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              k_59 = ATgetArgument(t, 0);
                              g_59 = ATgetArgument(t, 1);
                              {
                                ATerm q_19 = t;
                                int r_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = a_60(o_59, p_59, r_59, n_59, t);
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
                                          t = e_60(o_59, p_59, r_59, n_59, t);
                                          LocalPopChoice(t_19);
                                        }
                                      else
                                        {
                                          t = s_19;
                                          {
                                            ATerm x_19 = t;
                                            int c_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_60(o_59, p_59, r_59, n_59, t);
                                                LocalPopChoice(c_20);
                                              }
                                            else
                                              {
                                                t = x_19;
                                                {
                                                  ATerm d_20 = t;
                                                  int e_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = m_59;
                                                      if((k_59 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = h_59;
                                                      if((g_59 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = n_59;
                                                      LocalPopChoice(e_20);
                                                    }
                                                  else
                                                    {
                                                      t = d_20;
                                                      t = m_60(o_59, p_59, r_59, n_59, t);
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
                              ATerm f_20 = t;
                              int g_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = a_60(o_59, p_59, r_59, n_59, t);
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
                                        t = e_60(o_59, p_59, r_59, n_59, t);
                                        LocalPopChoice(i_20);
                                      }
                                    else
                                      {
                                        t = h_20;
                                        {
                                          ATerm j_20 = t;
                                          int k_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_60(o_59, p_59, r_59, n_59, t);
                                              LocalPopChoice(k_20);
                                            }
                                          else
                                            {
                                              t = j_20;
                                              t = m_60(o_59, p_59, r_59, n_59, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          ATerm l_20 = t;
                          int o_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = a_60(o_59, p_59, r_59, n_59, t);
                              LocalPopChoice(o_20);
                            }
                          else
                            {
                              t = l_20;
                              {
                                ATerm p_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_60(o_59, p_59, r_59, n_59, t);
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = p_20;
                                    {
                                      ATerm t_20 = t;
                                      int w_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = h_60(o_59, p_59, r_59, n_59, t);
                                          LocalPopChoice(w_20);
                                        }
                                      else
                                        {
                                          t = t_20;
                                          t = m_60(o_59, p_59, r_59, n_59, t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                    }
                  else
                    {
                      t = i_59;
                      {
                        ATerm x_20 = t;
                        int y_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = a_60(o_59, p_59, r_59, n_59, t);
                            LocalPopChoice(y_20);
                          }
                        else
                          {
                            t = x_20;
                            {
                              ATerm e_21 = t;
                              int f_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = e_60(o_59, p_59, r_59, n_59, t);
                                  LocalPopChoice(f_21);
                                }
                              else
                                {
                                  t = e_21;
                                  {
                                    ATerm n_21 = t;
                                    int p_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = h_60(o_59, p_59, r_59, n_59, t);
                                        LocalPopChoice(p_21);
                                      }
                                    else
                                      {
                                        t = n_21;
                                        t = m_60(o_59, p_59, r_59, n_59, t);
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
                  ATerm q_21 = t;
                  int v_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_60(o_59, p_59, r_59, n_59, t);
                      LocalPopChoice(v_21);
                    }
                  else
                    {
                      t = q_21;
                      {
                        ATerm h_22 = t;
                        int j_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_60(o_59, p_59, r_59, n_59, t);
                            LocalPopChoice(j_22);
                          }
                        else
                          {
                            t = h_22;
                            {
                              ATerm k_22 = t;
                              int l_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = h_60(o_59, p_59, r_59, n_59, t);
                                  LocalPopChoice(l_22);
                                }
                              else
                                {
                                  t = k_22;
                                  t = m_60(o_59, p_59, r_59, n_59, t);
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
                  m_59 = ATgetArgument(t, 0);
                  t = o_59;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_59 = ATgetFirst((ATermList) t);
                      l_59 = (ATerm) ATgetNext((ATermList) t);
                      t = l_59;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = i_59;
                          if(match_cons(t, sym_cf_1))
                            {
                              j_59 = ATgetArgument(t, 0);
                              t = j_59;
                              if(match_cons(t, sym_iter_1))
                                {
                                  k_59 = ATgetArgument(t, 0);
                                  {
                                    ATerm n_22 = t;
                                    int o_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = a_60(o_59, p_59, r_59, n_59, t);
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
                                              t = e_60(o_59, p_59, r_59, n_59, t);
                                              LocalPopChoice(q_22);
                                            }
                                          else
                                            {
                                              t = p_22;
                                              {
                                                ATerm s_22 = t;
                                                int t_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = h_60(o_59, p_59, r_59, n_59, t);
                                                    LocalPopChoice(t_22);
                                                  }
                                                else
                                                  {
                                                    t = s_22;
                                                    {
                                                      ATerm v_22 = t;
                                                      int z_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = m_59;
                                                          if((k_59 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = n_59;
                                                          LocalPopChoice(z_22);
                                                        }
                                                      else
                                                        {
                                                          t = v_22;
                                                          t = m_60(o_59, p_59, r_59, n_59, t);
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
                                  ATerm b_23 = t;
                                  int d_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = a_60(o_59, p_59, r_59, n_59, t);
                                      LocalPopChoice(d_23);
                                    }
                                  else
                                    {
                                      t = b_23;
                                      {
                                        ATerm e_23 = t;
                                        int f_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = e_60(o_59, p_59, r_59, n_59, t);
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
                                                  t = h_60(o_59, p_59, r_59, n_59, t);
                                                  LocalPopChoice(i_23);
                                                }
                                              else
                                                {
                                                  t = g_23;
                                                  t = m_60(o_59, p_59, r_59, n_59, t);
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                            }
                          else
                            {
                              ATerm p_23 = t;
                              int q_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = a_60(o_59, p_59, r_59, n_59, t);
                                  LocalPopChoice(q_23);
                                }
                              else
                                {
                                  t = p_23;
                                  {
                                    ATerm r_23 = t;
                                    int s_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = e_60(o_59, p_59, r_59, n_59, t);
                                        LocalPopChoice(s_23);
                                      }
                                    else
                                      {
                                        t = r_23;
                                        {
                                          ATerm t_23 = t;
                                          int v_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_60(o_59, p_59, r_59, n_59, t);
                                              LocalPopChoice(v_23);
                                            }
                                          else
                                            {
                                              t = t_23;
                                              t = m_60(o_59, p_59, r_59, n_59, t);
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                        }
                      else
                        {
                          t = i_59;
                          {
                            ATerm x_23 = t;
                            int y_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_60(o_59, p_59, r_59, n_59, t);
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
                                      t = e_60(o_59, p_59, r_59, n_59, t);
                                      LocalPopChoice(a_24);
                                    }
                                  else
                                    {
                                      t = z_23;
                                      {
                                        ATerm c_24 = t;
                                        int d_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_60(o_59, p_59, r_59, n_59, t);
                                            LocalPopChoice(d_24);
                                          }
                                        else
                                          {
                                            t = c_24;
                                            t = m_60(o_59, p_59, r_59, n_59, t);
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
                      ATerm h_24 = t;
                      int j_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_60(o_59, p_59, r_59, n_59, t);
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
                                t = e_60(o_59, p_59, r_59, n_59, t);
                                LocalPopChoice(l_24);
                              }
                            else
                              {
                                t = k_24;
                                {
                                  ATerm n_24 = t;
                                  int p_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_60(o_59, p_59, r_59, n_59, t);
                                      LocalPopChoice(p_24);
                                    }
                                  else
                                    {
                                      t = n_24;
                                      t = m_60(o_59, p_59, r_59, n_59, t);
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
                    ATerm q_24 = t;
                    int s_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = a_60(o_59, p_59, r_59, n_59, t);
                        LocalPopChoice(s_24);
                      }
                    else
                      {
                        t = q_24;
                        {
                          ATerm u_24 = t;
                          int v_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_60(o_59, p_59, r_59, n_59, t);
                              LocalPopChoice(v_25);
                            }
                          else
                            {
                              t = u_24;
                              {
                                ATerm w_25 = t;
                                int z_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_60(o_59, p_59, r_59, n_59, t);
                                    LocalPopChoice(z_25);
                                  }
                                else
                                  {
                                    t = w_25;
                                    t = m_60(o_59, p_59, r_59, n_59, t);
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
              q_59 = ATgetArgument(t, 0);
              t = q_59;
              if(match_string(t, "<START>"))
                {
                  t = o_59;
                  {
                    ATerm b_26 = t;
                    int h_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = a_60(o_59, p_59, r_59, n_59, t);
                        LocalPopChoice(h_26);
                      }
                    else
                      {
                        t = b_26;
                        {
                          ATerm i_26 = t;
                          int m_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_60(o_59, p_59, r_59, n_59, t);
                              LocalPopChoice(m_26);
                            }
                          else
                            {
                              t = i_26;
                              {
                                ATerm n_26 = t;
                                int s_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_60(o_59, p_59, r_59, n_59, t);
                                    LocalPopChoice(s_26);
                                  }
                                else
                                  {
                                    t = n_26;
                                    {
                                      ATerm t_26 = t;
                                      int d_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = m_60(o_59, p_59, r_59, n_59, t);
                                          LocalPopChoice(d_27);
                                        }
                                      else
                                        {
                                          t = t_26;
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
                    ATerm f_27 = t;
                    int g_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = a_60(o_59, p_59, r_59, n_59, t);
                        LocalPopChoice(g_27);
                      }
                    else
                      {
                        t = f_27;
                        {
                          ATerm i_27 = t;
                          int j_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_60(o_59, p_59, r_59, n_59, t);
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
                                    t = h_60(o_59, p_59, r_59, n_59, t);
                                    LocalPopChoice(l_27);
                                  }
                                else
                                  {
                                    t = k_27;
                                    t = m_60(o_59, p_59, r_59, n_59, t);
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
                ATerm n_27 = t;
                int o_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_60(o_59, p_59, r_59, n_59, t);
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
                          t = e_60(o_59, p_59, r_59, n_59, t);
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
                                t = h_60(o_59, p_59, r_59, n_59, t);
                                LocalPopChoice(s_27);
                              }
                            else
                              {
                                t = r_27;
                                t = m_60(o_59, p_59, r_59, n_59, t);
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
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_60(o_59, p_59, r_59, n_59, t);
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
                  t = e_60(o_59, p_59, r_59, n_59, t);
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
                        t = h_60(o_59, p_59, r_59, n_59, t);
                        LocalPopChoice(y_27);
                      }
                    else
                      {
                        t = x_27;
                        t = m_60(o_59, p_59, r_59, n_59, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm f_89 (ATerm), ATerm t)
{
  static ATerm f_2 (ATerm t)
  {
    t = bottomup_1_0(f_89, t);
    return(t);
  }
  t = SRTS_all(f_2, t);
  t = f_89(t);
  return(t);
}
ATerm CTC2_0_0 (ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,w_61 = NULL,x_61 = NULL,z_61 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      w_61 = ATgetArgument(t, 0);
      x_61 = ATgetArgument(t, 1);
      t = w_61;
      if(match_cons(t, sym_Ins_1))
        {
          r_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_61 = ATgetFirst((ATermList) t);
          p_61 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(p_61), q_61), r_61);
        }
      else
        {
          if(match_cons(t, sym_Ins_1))
            {
              q_61 = ATgetArgument(t, 0);
              t = (ATerm) ATinsert(ATinsert(ATempty, q_61), r_61);
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATinsert(ATempty, r_61);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          w_61 = ATgetArgument(t, 0);
          x_61 = ATgetArgument(t, 1);
          z_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_61), (ATerm) ATinsert(ATempty, x_61)), w_61);
      t = concat_0_0(t);
    }
  return(t);
}
ATerm CTC1_0_0 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      b_63 = ATgetArgument(t, 0);
      e_63 = ATgetArgument(t, 1);
      t = e_63;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_63;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = b_63;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  c_63 = ATgetArgument(t, 0);
                  d_63 = ATgetArgument(t, 1);
                  t = b_63;
                }
              else
                {
                  t = b_63;
                }
            }
        }
      else
        {
          t = b_63;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = e_63;
            }
          else
            {
              if(match_cons(t, sym_Conc_2))
                {
                  c_63 = ATgetArgument(t, 0);
                  d_63 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Conc_2, c_63, (ATerm) ATmakeAppl(sym_Conc_2, d_63, e_63));
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Conc_3))
        {
          b_63 = ATgetArgument(t, 0);
          e_63 = ATgetArgument(t, 1);
          z_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_63;
      if(match_cons(t, sym_Conc_3))
        {
          c_63 = ATgetArgument(t, 0);
          d_63 = ATgetArgument(t, 1);
          y_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Conc_3, c_63, d_63, (ATerm) ATmakeAppl(sym_Conc_3, y_62, e_63, z_62));
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_65 = NULL,m_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_65 = ATgetFirst((ATermList) t);
          m_65 = (ATerm) ATgetNext((ATermList) t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, k_65), m_65);
        }
      else
        {
          if(match_cons(t, sym_Snoc_2))
            {
              k_65 = ATgetArgument(t, 0);
              m_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Conc_2, k_65, (ATerm) ATmakeAppl(sym_Ins_1, m_65));
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
              ATerm e_68 = NULL,f_68 = NULL,h_68 = NULL,w_37 = NULL,g_38 = NULL,m_38 = NULL,n_38 = NULL,d_17 = NULL;
              e_68 = t;
              if(match_cons(t, sym_Conc_2))
                {
                  f_68 = ATgetArgument(t, 0);
                  h_68 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_68);
              w_37 = t;
              t = f_68;
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
              g_38 = t;
              t = (ATerm) ATmakeAppl(sym_Conc_2, g_38, h_68);
              d_17 = t;
              t = SSLsetAnnotations(d_17, w_37);
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
        ATerm x_68 = NULL,a_69 = NULL,c_69 = NULL,h_39 = NULL,n_39 = NULL,e_17 = NULL;
        x_68 = t;
        if(match_cons(t, sym_Conc_2))
          {
            a_69 = ATgetArgument(t, 0);
            c_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_68);
        h_39 = t;
        t = c_69;
        t = conc_to_cons_0_0(t);
        n_39 = t;
        t = (ATerm) ATmakeAppl(sym_Conc_2, a_69, n_39);
        e_17 = t;
        t = SSLsetAnnotations(e_17, h_39);
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
            ATerm g_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,f_17 = NULL;
            t = CTC2_0_0(t);
            m_69 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_69 = ATgetFirst((ATermList) t);
                k_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_69);
            g_69 = t;
            t = j_69;
            t = conc_to_cons_0_0(t);
            l_69 = t;
            t = (ATerm) ATinsert(CheckATermList(k_69), l_69);
            f_17 = t;
            t = SSLsetAnnotations(f_17, g_69);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            {
              ATerm r_69 = NULL;
              if(match_cons(t, sym_Ins_1))
                {
                  r_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, r_69);
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
  ATerm d_71 = NULL,g_71 = NULL,n_71 = NULL,p_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,x_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      s_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
      {
        ATerm k_28 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_71 = ATgetFirst((ATermList) t);
      x_71 = (ATerm) ATgetNext((ATermList) t);
      t = x_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_71;
          if(match_cons(t, sym_opt_1))
            {
              a_72 = ATgetArgument(t, 0);
              t = a_72;
              if((t_71 != t))
                {
                  _fail(t);
                }
              t = term_l_28;
            }
          else
            {
              if(match_cons(t, sym_cf_1))
                {
                  a_72 = ATgetArgument(t, 0);
                  t = t_71;
                  if(match_cons(t, sym_cf_1))
                    {
                      u_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_72;
                  if(match_cons(t, sym_opt_1))
                    {
                      b_72 = ATgetArgument(t, 0);
                      t = b_72;
                      if((u_71 != t))
                        {
                          _fail(t);
                        }
                      t = term_l_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          b_72 = ATgetArgument(t, 0);
                          t = b_72;
                          if((u_71 != t))
                            {
                              _fail(t);
                            }
                          t = term_m_28;
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_sep_2))
                            {
                              b_72 = ATgetArgument(t, 0);
                              {
                                ATerm n_28 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = b_72;
                          if((u_71 != t))
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
                      a_72 = ATgetArgument(t, 0);
                      t = a_72;
                      if((t_71 != t))
                        {
                          _fail(t);
                        }
                      t = term_m_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          a_72 = ATgetArgument(t, 0);
                          {
                            ATerm o_28 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = a_72;
                      if((t_71 != t))
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
              d_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_71;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = z_71;
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
                        a_72 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_72;
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
                  g_71 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_71;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = z_71;
                  {
                    ATerm w_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_iter_sep_2))
                          {
                            ATerm z_28 = ATgetArgument(t, 0);
                            ATerm a_29 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_28);
                        t = term_t_28;
                      }
                    else
                      {
                        t = w_28;
                        if(match_cons(t, sym_cf_1))
                          {
                            a_72 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = a_72;
                        {
                          ATerm b_29 = t;
                          int e_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_1))
                                {
                                  ATerm m_29 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(e_29);
                              t = term_t_28;
                            }
                          else
                            {
                              t = b_29;
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
                      n_71 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = n_71;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_29 = ATgetFirst((ATermList) t);
                      p_71 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = p_71;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_71;
                  if(match_cons(t, sym_cf_1))
                    {
                      a_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_72;
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
      t = z_71;
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
                a_72 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_72;
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
ATerm oncetd_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  static ATerm s_72 (ATerm t)
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_90(t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = SRTS_one(s_72, t);
      }
    return(t);
  }
  t = s_72(t);
  return(t);
}
ATerm ConstrNil_0_0 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL;
  if(match_cons(t, sym_prod_3))
    {
      k_73 = ATgetArgument(t, 0);
      l_73 = ATgetArgument(t, 1);
      {
        ATerm j_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_73;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_73;
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
        t = term_n_30;
      }
    else
      {
        t = k_30;
        {
          ATerm o_30 = t;
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
              t = term_n_30;
            }
          else
            {
              t = o_30;
              if(match_cons(t, sym_cf_1))
                {
                  m_73 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_73;
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
                    t = term_n_30;
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
                    t = term_n_30;
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
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
  r_75 = t;
  if(match_cons(t, sym_appl_2))
    {
      p_75 = ATgetArgument(t, 0);
      q_75 = ATgetArgument(t, 1);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_41 = NULL,s_41 = NULL,o_42 = NULL,q_42 = NULL,j_17 = NULL;
            t = SSLgetAnnotations(r_75);
            l_41 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, p_75, q_75);
            j_17 = t;
            t = SSLsetAnnotations(j_17, l_41);
            s_41 = t;
            if(match_cons(t, sym_appl_2))
              {
                o_42 = ATgetArgument(t, 0);
                q_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm b_31 = t;
              int c_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_42;
                  t = ConstrNil_0_0(t);
                  t = (ATerm) ATempty;
                  LocalPopChoice(c_31);
                }
              else
                {
                  t = b_31;
                  {
                    ATerm i_43 = NULL;
                    t = o_42;
                    {
                      ATerm d_31 = t;
                      int e_31 = stack_ptr;
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
                    t = SSL_mkterm(i_43, q_42);
                  }
                }
            }
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            t = r_75;
          }
      }
    }
  else
    {
      t = r_75;
    }
  return(t);
}
ATerm replace_appl_0_0 (ATerm t)
{
  t = topdown_1_0(j_2, t);
  t = conc_to_cons_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
  v_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_76;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_76 = ATgetFirst((ATermList) t);
          x_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_43 = NULL,h_44 = NULL,n_44 = NULL,o_17 = NULL;
            t = SSLgetAnnotations(v_76);
            y_43 = t;
            t = w_76;
            t = t_103(t);
            h_44 = t;
            t = x_76;
            t = filter_1_0(t_103, t);
            n_44 = t;
            t = (ATerm) ATinsert(CheckATermList(n_44), h_44);
            o_17 = t;
            t = SSLsetAnnotations(o_17, y_43);
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            t = x_76;
            t = filter_1_0(t_103, t);
          }
      }
    }
  return(t);
}
static ATerm a_82 (ATerm u_78, ATerm t)
{
  static ATerm c_82 (ATerm t)
  {
    ATerm v_78 = NULL,w_78 = NULL,y_78 = NULL,z_78 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL;
    v_78 = t;
    if(match_cons(t, sym_appl_2))
      {
        w_78 = ATgetArgument(t, 0);
        d_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_78;
    if(match_cons(t, sym_prod_3))
      {
        ATerm k_31 = ATgetArgument(t, 0);
        y_78 = ATgetArgument(t, 1);
        {
          ATerm l_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = y_78;
    if(match_cons(t, sym_cf_1))
      {
        z_78 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = z_78;
    if(match_cons(t, sym_iter_sep_2))
      {
        ATerm o_31 = ATgetArgument(t, 0);
        ATerm p_31 = ATgetArgument(t, 1);
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
        t = (ATerm) ATinsert(ATempty, e_79);
      }
    else
      {
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
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm t_79 = NULL,u_79 = NULL;
            t = e_79;
            t = c_82(t);
            t_79 = t;
            t = i_79;
            t = c_82(t);
            u_79 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_79), (ATerm) ATinsert(ATempty, g_79)), t_79);
            t = concat_0_0(t);
          }
        else
          {
            ATerm b_80 = NULL,c_80 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_79 = ATgetFirst((ATermList) t);
                l_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_79;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_79 = ATgetFirst((ATermList) t);
                n_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_79;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_79;
            t = c_82(t);
            b_80 = t;
            t = m_79;
            t = c_82(t);
            c_80 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_80), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_79), i_79), g_79)), b_80);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = u_78;
  t = c_82(t);
  return(t);
}
static ATerm b_82 (ATerm d_80, ATerm t)
{
  static ATerm d_82 (ATerm t)
  {
    ATerm e_80 = NULL,f_80 = NULL,j_80 = NULL,k_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
    e_80 = t;
    if(match_cons(t, sym_appl_2))
      {
        f_80 = ATgetArgument(t, 0);
        n_80 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = f_80;
    if(match_cons(t, sym_prod_3))
      {
        ATerm q_31 = ATgetArgument(t, 0);
        j_80 = ATgetArgument(t, 1);
        {
          ATerm r_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = j_80;
    if(match_cons(t, sym_cf_1))
      {
        k_80 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = k_80;
    if(match_cons(t, sym_iter_1))
      {
        ATerm s_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = n_80;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_80 = ATgetFirst((ATermList) t);
        p_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = p_80;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATinsert(ATempty, o_80);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_80 = ATgetFirst((ATermList) t);
            r_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_80;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm y_80 = NULL,z_80 = NULL;
            t = o_80;
            t = d_82(t);
            y_80 = t;
            t = q_80;
            t = d_82(t);
            z_80 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, z_80), y_80);
            t = concat_0_0(t);
          }
        else
          {
            ATerm e_81 = NULL,f_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_80 = ATgetFirst((ATermList) t);
                t_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_80;
            t = d_82(t);
            e_81 = t;
            t = s_80;
            t = d_82(t);
            f_81 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_81), (ATerm) ATinsert(ATempty, q_80)), e_81);
            t = concat_0_0(t);
          }
      }
    return(t);
  }
  t = d_80;
  t = d_82(t);
  return(t);
}
ATerm FlatList_0_0 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL;
  i_81 = t;
  if(match_cons(t, sym_appl_2))
    {
      j_81 = ATgetArgument(t, 0);
      t_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_81;
  if(match_cons(t, sym_prod_3))
    {
      k_81 = ATgetArgument(t, 0);
      p_81 = ATgetArgument(t, 1);
      {
        ATerm t_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_81;
  if(match_cons(t, sym_cf_1))
    {
      q_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_81;
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
        t = t_81;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_81 = ATgetFirst((ATermList) t);
            v_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_81;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_81;
            {
              ATerm y_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_82(i_81, t);
                  LocalPopChoice(z_31);
                }
              else
                {
                  t = y_31;
                  t = (ATerm) ATinsert(ATempty, u_81);
                }
            }
          }
        else
          {
            t = k_81;
            t = a_82(i_81, t);
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
              t = k_81;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = t_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_81 = ATgetFirst((ATermList) t);
                      o_81 = (ATerm) ATgetNext((ATermList) t);
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
                  if(match_cons(t, sym_iter_sep_2))
                    {
                      ATerm f_32 = ATgetArgument(t, 0);
                      ATerm g_32 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_81;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_81 = ATgetFirst((ATermList) t);
                      v_81 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = v_81;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_81;
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
                    t = t_81;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        u_81 = ATgetFirst((ATermList) t);
                        v_81 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = v_81;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = k_81;
                        {
                          ATerm k_32 = t;
                          int l_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = b_82(i_81, t);
                              LocalPopChoice(l_32);
                            }
                          else
                            {
                              t = k_32;
                              t = (ATerm) ATinsert(ATempty, u_81);
                            }
                        }
                      }
                    else
                      {
                        t = k_81;
                        t = b_82(i_81, t);
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
                    t = k_81;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = t_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATempty;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            l_81 = ATgetFirst((ATermList) t);
                            o_81 = (ATerm) ATgetNext((ATermList) t);
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
                        if(match_cons(t, sym_iter_1))
                          {
                            ATerm o_32 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = o_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = t_81;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            u_81 = ATgetFirst((ATermList) t);
                            v_81 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = v_81;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = u_81;
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
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_82 = ATgetFirst((ATermList) t);
      o_82 = (ATerm) ATgetNext((ATermList) t);
      t = o_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_82 = ATgetFirst((ATermList) t);
          m_82 = (ATerm) ATgetNext((ATermList) t);
          t = l_82;
          if(match_int(t, 34))
            {
              t = n_82;
              if(match_int(t, 92))
                {
                  ATerm p_32 = t;
                  int q_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_82 = NULL;
                      t = m_82;
                      t = De_Escape_0_0(t);
                      r_82 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_82), term_r_32);
                      LocalPopChoice(q_32);
                    }
                  else
                    {
                      t = p_32;
                      {
                        ATerm u_82 = NULL;
                        t = o_82;
                        t = De_Escape_0_0(t);
                        u_82 = t;
                        t = (ATerm) ATinsert(CheckATermList(u_82), n_82);
                      }
                    }
                }
              else
                {
                  ATerm x_82 = NULL;
                  t = o_82;
                  t = De_Escape_0_0(t);
                  x_82 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_82), n_82);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = n_82;
                  if(match_int(t, 92))
                    {
                      ATerm s_32 = t;
                      int v_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_82 = NULL;
                          t = m_82;
                          t = De_Escape_0_0(t);
                          z_82 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_82), term_x_32);
                          LocalPopChoice(v_32);
                        }
                      else
                        {
                          t = s_32;
                          {
                            ATerm c_83 = NULL;
                            t = o_82;
                            t = De_Escape_0_0(t);
                            c_83 = t;
                            t = (ATerm) ATinsert(CheckATermList(c_83), n_82);
                          }
                        }
                    }
                  else
                    {
                      ATerm f_83 = NULL;
                      t = o_82;
                      t = De_Escape_0_0(t);
                      f_83 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_83), n_82);
                    }
                }
              else
                {
                  ATerm i_83 = NULL;
                  t = o_82;
                  t = De_Escape_0_0(t);
                  i_83 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_83), n_82);
                }
            }
        }
      else
        {
          ATerm l_83 = NULL;
          t = o_82;
          t = De_Escape_0_0(t);
          l_83 = t;
          t = (ATerm) ATinsert(CheckATermList(l_83), n_82);
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
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  u_83 = t;
  t = SSL_explode_string(u_83);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_83 = ATgetFirst((ATermList) t);
      y_83 = (ATerm) ATgetNext((ATermList) t);
      t = y_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_83 = ATgetFirst((ATermList) t);
          w_83 = (ATerm) ATgetNext((ATermList) t);
          t = v_83;
          if(match_int(t, 34))
            {
              t = x_83;
              if(match_int(t, 92))
                {
                  ATerm y_32 = t;
                  int z_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_84 = NULL;
                      t = w_83;
                      t = De_Escape_0_0(t);
                      b_84 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_84), term_r_32);
                      LocalPopChoice(z_32);
                    }
                  else
                    {
                      t = y_32;
                      {
                        ATerm e_84 = NULL;
                        t = y_83;
                        t = De_Escape_0_0(t);
                        e_84 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_84), x_83);
                      }
                    }
                }
              else
                {
                  ATerm h_84 = NULL;
                  t = y_83;
                  t = De_Escape_0_0(t);
                  h_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_84), x_83);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = x_83;
                  if(match_int(t, 92))
                    {
                      ATerm a_33 = t;
                      int b_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_84 = NULL;
                          t = w_83;
                          t = De_Escape_0_0(t);
                          j_84 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_84), term_x_32);
                          LocalPopChoice(b_33);
                        }
                      else
                        {
                          t = a_33;
                          {
                            ATerm m_84 = NULL;
                            t = y_83;
                            t = De_Escape_0_0(t);
                            m_84 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_84), x_83);
                          }
                        }
                    }
                  else
                    {
                      ATerm p_84 = NULL;
                      t = y_83;
                      t = De_Escape_0_0(t);
                      p_84 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_84), x_83);
                    }
                }
              else
                {
                  ATerm s_84 = NULL;
                  t = y_83;
                  t = De_Escape_0_0(t);
                  s_84 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_84), x_83);
                }
            }
        }
      else
        {
          ATerm v_84 = NULL;
          t = y_83;
          t = De_Escape_0_0(t);
          v_84 = t;
          t = (ATerm) ATinsert(CheckATermList(v_84), x_83);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  t_83 = t;
  t = SSL_implode_string(t_83);
  return(t);
}
ATerm at_last_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  static ATerm r_85 (ATerm t)
  {
    ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL;
    o_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_85 = ATgetFirst((ATermList) t);
        q_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_33 = t;
      int d_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_44 = NULL,q_17 = NULL;
          t = SSLgetAnnotations(o_85);
          x_44 = t;
          t = q_85;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(q_85), p_85);
          q_17 = t;
          t = SSLsetAnnotations(q_17, x_44);
          t = s_96(t);
          LocalPopChoice(d_33);
        }
      else
        {
          t = c_33;
          {
            ATerm r_45 = NULL,w_45 = NULL,s_17 = NULL;
            t = SSLgetAnnotations(o_85);
            r_45 = t;
            t = q_85;
            t = r_85(t);
            w_45 = t;
            t = (ATerm) ATinsert(CheckATermList(w_45), p_85);
            s_17 = t;
            t = SSLsetAnnotations(s_17, r_45);
          }
        }
    }
    return(t);
  }
  t = r_85(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(e_33) != AT_INT) || (ATgetInt((ATermInt) e_33) != 34)))
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
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL;
  y_85 = t;
  t = SSL_explode_string(y_85);
  u_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_85 = ATgetFirst((ATermList) t);
      {
        ATerm h_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_85;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = u_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_33 = ATgetFirst((ATermList) t);
      w_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_85;
  t = at_last_1_0(l_2, t);
  v_85 = t;
  t = SSL_implode_string(v_85);
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
  ATerm w_86 = NULL,b_87 = NULL,c_87 = NULL;
  c_87 = t;
  if(match_cons(t, sym_cf_1))
    {
      w_86 = ATgetArgument(t, 0);
      {
        ATerm e_87 = NULL;
        t = w_86;
        t = PpSym_0_0(t);
        e_87 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_33)), e_87), (ATerm) ATinsert(ATempty, term_m_33));
        t = concat_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          w_86 = ATgetArgument(t, 0);
          {
            ATerm n_87 = NULL;
            t = w_86;
            t = PpSym_0_0(t);
            n_87 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_33)), n_87), (ATerm) ATinsert(ATempty, term_m_33));
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
                  w_86 = ATgetArgument(t, 0);
                  b_87 = ATgetArgument(t, 1);
                  {
                    ATerm q_87 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(b_87), w_86);
                    t = map_1_0(PpSym_0_0, t);
                    q_87 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_33)), q_87), (ATerm) ATinsert(ATempty, term_q_33));
                    t = concat_0_0(t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      w_86 = ATgetArgument(t, 0);
                      t = w_86;
                      t = PpSym_0_0(t);
                      t = at_end_1_0(m_2, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          w_86 = ATgetArgument(t, 0);
                          t = w_86;
                          t = PpSym_0_0(t);
                          t = at_end_1_0(n_2, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              w_86 = ATgetArgument(t, 0);
                              t = w_86;
                              t = PpSym_0_0(t);
                              t = at_end_1_0(o_2, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  w_86 = ATgetArgument(t, 0);
                                  b_87 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_87 = NULL,x_87 = NULL;
                                    t = w_86;
                                    t = PpSym_0_0(t);
                                    w_87 = t;
                                    t = b_87;
                                    t = PpSym_0_0(t);
                                    x_87 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_33)), x_87), w_87), (ATerm) ATinsert(ATempty, term_s_33));
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      w_86 = ATgetArgument(t, 0);
                                      b_87 = ATgetArgument(t, 1);
                                      {
                                        ATerm a_88 = NULL,b_88 = NULL;
                                        t = w_86;
                                        t = PpSym_0_0(t);
                                        a_88 = t;
                                        t = b_87;
                                        t = PpSym_0_0(t);
                                        b_88 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_33)), b_88), a_88), (ATerm) ATinsert(ATempty, term_s_33));
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
                                              w_86 = ATgetArgument(t, 0);
                                              {
                                                ATerm z_33 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(x_33);
                                          {
                                            ATerm d_88 = NULL;
                                            t = w_86;
                                            t = PpSym_0_0(t);
                                            d_88 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_34)), d_88);
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
                                                    w_86 = ATgetArgument(t, 0);
                                                    b_87 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_34 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(c_34);
                                                {
                                                  ATerm k_88 = NULL,l_88 = NULL;
                                                  t = w_86;
                                                  t = PpSym_0_0(t);
                                                  k_88 = t;
                                                  t = b_87;
                                                  t = PpSym_0_0(t);
                                                  l_88 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_34)), l_88), k_88);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = b_34;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    w_86 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_88 = NULL;
                                                      t = w_86;
                                                      t = PpSym_0_0(t);
                                                      n_88 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, n_88), (ATerm) ATinsert(ATempty, term_e_34));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        w_86 = ATgetArgument(t, 0);
                                                        b_87 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_88 = NULL,r_88 = NULL;
                                                          t = w_86;
                                                          t = PpSym_0_0(t);
                                                          q_88 = t;
                                                          t = b_87;
                                                          t = PpSym_0_0(t);
                                                          r_88 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_88), (ATerm) ATinsert(ATempty, term_f_34)), q_88);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            w_86 = ATgetArgument(t, 0);
                                                            b_87 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_88 = NULL,v_88 = NULL;
                                                              t = w_86;
                                                              t = filter_1_0(PpSym_0_0, t);
                                                              t = concat_0_0(t);
                                                              u_88 = t;
                                                              t = b_87;
                                                              t = PpSym_0_0(t);
                                                              v_88 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_88), (ATerm) ATinsert(ATempty, term_g_34)), u_88);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                w_86 = ATgetArgument(t, 0);
                                                                b_87 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm y_88 = NULL,z_88 = NULL;
                                                                  t = w_86;
                                                                  t = PpSym_0_0(t);
                                                                  y_88 = t;
                                                                  t = b_87;
                                                                  t = PpSym_0_0(t);
                                                                  z_88 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_88), (ATerm) ATinsert(ATempty, term_h_34)), y_88);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    w_86 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm b_89 = NULL;
                                                                      t = w_86;
                                                                      t = filter_1_0(PpSym_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      b_89 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(b_89), term_j_34);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        w_86 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, w_86);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            w_86 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm e_46 = NULL;
                                                                              t = w_86;
                                                                              {
                                                                                ATerm l_34 = t;
                                                                                int m_34 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(m_34);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_34;
                                                                                  }
                                                                              }
                                                                              e_46 = t;
                                                                              t = (ATerm) ATinsert(ATempty, e_46);
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
                                                                                    w_86 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm r_34 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(q_34);
                                                                                {
                                                                                  ATerm m_46 = NULL;
                                                                                  t = w_86;
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
                                                                                  m_46 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, m_46);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_34;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_v_34);
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
static ATerm e_91 (ATerm u_89, ATerm v_89, ATerm w_89, ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL;
  t = u_89;
  if(match_cons(t, sym_cf_1))
    {
      b_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_90;
  {
    ATerm x_34 = t;
    if((PushChoice() == 0))
      {
        ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL,a_18 = NULL;
        f_90 = t;
        if(match_cons(t, sym_sort_1))
          {
            e_90 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_90);
        d_90 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, e_90);
        a_18 = t;
        t = SSLsetAnnotations(a_18, d_90);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_34;
      }
  }
  t = PpSym_0_0(t);
  a_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_34)), a_90), (ATerm) ATinsert(ATempty, term_y_34));
  t = concat_0_0(t);
  c_90 = t;
  t = SSL_concat_strings(c_90);
  z_89 = t;
  t = SSL_mkterm(z_89, v_89);
  return(t);
}
static ATerm f_91 (ATerm g_90, ATerm h_90, ATerm k_90, ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,b_18 = NULL;
  t = g_90;
  if(match_cons(t, sym_cf_1))
    {
      o_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_90;
  if(match_cons(t, sym_sort_1))
    {
      r_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_90);
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, r_90);
  b_18 = t;
  t = SSLsetAnnotations(b_18, q_90);
  t = PpSym_0_0(t);
  p_90 = t;
  t = SSL_concat_strings(p_90);
  n_90 = t;
  t = SSL_mkterm(n_90, h_90);
  return(t);
}
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,v_90 = NULL,y_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL;
  s_90 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_90 = ATgetArgument(t, 0);
      a_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_90;
  if(match_cons(t, sym_prod_3))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      v_90 = ATgetArgument(t, 1);
      {
        ATerm b_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_91 = ATgetFirst((ATermList) t);
      c_91 = (ATerm) ATgetNext((ATermList) t);
      t = c_91;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_90;
          if(match_cons(t, sym_sort_1))
            {
              y_90 = ATgetArgument(t, 0);
              t = y_90;
              if(match_string(t, "<START>"))
                {
                  ATerm c_35 = t;
                  int d_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_91(v_90, a_91, s_90, t);
                      LocalPopChoice(d_35);
                    }
                  else
                    {
                      t = c_35;
                      {
                        ATerm e_35 = t;
                        int f_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_91(v_90, a_91, s_90, t);
                            LocalPopChoice(f_35);
                          }
                        else
                          {
                            t = e_35;
                            t = b_91;
                          }
                      }
                    }
                }
              else
                {
                  ATerm g_35 = t;
                  int i_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_91(v_90, a_91, s_90, t);
                      LocalPopChoice(i_35);
                    }
                  else
                    {
                      t = g_35;
                      t = f_91(v_90, a_91, s_90, t);
                    }
                }
            }
          else
            {
              ATerm j_35 = t;
              int k_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_91(v_90, a_91, s_90, t);
                  LocalPopChoice(k_35);
                }
              else
                {
                  t = j_35;
                  t = f_91(v_90, a_91, s_90, t);
                }
            }
        }
      else
        {
          t = v_90;
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_91(v_90, a_91, s_90, t);
                LocalPopChoice(m_35);
              }
            else
              {
                t = l_35;
                t = f_91(v_90, a_91, s_90, t);
              }
          }
        }
    }
  else
    {
      t = v_90;
      {
        ATerm n_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_91(v_90, a_91, s_90, t);
            LocalPopChoice(o_35);
          }
        else
          {
            t = n_35;
            t = f_91(v_90, a_91, s_90, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm t)
{
  static ATerm g_91 (ATerm t)
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_88(t);
        t = g_91(t);
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = f_88(t);
      }
    return(t);
  }
  t = g_91(t);
  return(t);
}
ATerm flat_layout_0_0 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
  s_91 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_91 = ATgetArgument(t, 0);
      z_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_91;
  if(match_cons(t, sym_prod_3))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      v_91 = ATgetArgument(t, 1);
      {
        ATerm s_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_91;
  if(match_cons(t, sym_cf_1))
    {
      w_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_91;
  if(match_cons(t, sym_layout_0))
    {
      t = SSL_concat_strings(z_91);
    }
  else
    {
      if(match_cons(t, sym_opt_1))
        {
          x_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_91;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = z_91;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = term_u_35;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_92 = ATgetFirst((ATermList) t);
              b_92 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_92;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, a_92));
        }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  static ATerm r_92 (ATerm t)
  {
    ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL;
    q_92 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_92 = ATgetFirst((ATermList) t);
        p_92 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_46 = NULL,c_47 = NULL,e_18 = NULL;
          t = SSLgetAnnotations(q_92);
          z_46 = t;
          t = p_92;
          t = r_92(t);
          c_47 = t;
          t = (ATerm) ATinsert(CheckATermList(c_47), o_92);
          e_18 = t;
          t = SSLsetAnnotations(e_18, z_46);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_92;
        t = h_96(t);
      }
    return(t);
  }
  t = r_92(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
  u_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_92;
    }
  else
    {
      static ATerm q_2 (ATerm t)
      {
        t = not_null(w_92);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_92 = ATgetFirst((ATermList) t);
          if(((w_92 != NULL) && (w_92 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_92;
      t = at_end_1_0(q_2, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm c_93 = NULL;
  static ATerm t_93 (ATerm t)
  {
    ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL;
    q_93 = t;
    if(match_cons(t, sym_appl_2))
      {
        o_93 = ATgetArgument(t, 0);
        p_93 = ATgetArgument(t, 1);
        {
          ATerm v_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_47 = NULL,m_47 = NULL,p_47 = NULL,g_18 = NULL;
              t = SSLgetAnnotations(q_93);
              m_47 = t;
              t = p_93;
              t = map_1_0(t_93, t);
              p_47 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, o_93, p_47);
              g_18 = t;
              t = SSLsetAnnotations(g_18, m_47);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm a_36 = ATgetArgument(t, 0);
                  l_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_47;
              t = concat_0_0(t);
              LocalPopChoice(y_35);
            }
          else
            {
              t = v_35;
              t = (ATerm) ATinsert(ATempty, q_93);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, q_93);
      }
    return(t);
  }
  t = t_93(t);
  c_93 = t;
  t = SSL_implode_string(c_93);
  return(t);
}
ATerm implode_lexical_0_0 (ATerm t)
{
  ATerm l_94 = NULL,n_94 = NULL,o_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL;
  r_94 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_94 = ATgetArgument(t, 0);
      {
        ATerm d_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_94;
  if(match_cons(t, sym_prod_3))
    {
      t_94 = ATgetArgument(t, 0);
      u_94 = ATgetArgument(t, 1);
      {
        ATerm e_36 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = u_94;
  {
    ATerm f_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_cf_1))
          {
            ATerm i_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_36);
        t = t_94;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_94 = ATgetFirst((ATermList) t);
            n_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_94;
        if(match_cons(t, sym_lex_1))
          {
            ATerm j_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_94;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_94;
        t = yield_0_0(t);
      }
    else
      {
        t = f_36;
        {
          ATerm k_36 = t;
          int l_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lex_1))
                {
                  ATerm m_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(l_36);
              t = r_94;
              t = yield_0_0(t);
            }
          else
            {
              t = k_36;
              {
                ATerm n_36 = t;
                int p_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_lit_1))
                      {
                        ATerm q_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_36);
                    {
                      ATerm y_94 = NULL;
                      t = r_94;
                      t = yield_0_0(t);
                      y_94 = t;
                      t = (ATerm) ATmakeAppl(sym_lit_1, y_94);
                    }
                  }
                else
                  {
                    t = n_36;
                    if(match_cons(t, sym_varsym_1))
                      {
                        v_94 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_94;
                    if(match_cons(t, sym_cf_1))
                      {
                        o_94 = ATgetArgument(t, 0);
                        t = o_94;
                        {
                          ATerm v_36 = t;
                          int w_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_iter_star_1))
                                {
                                  ATerm x_36 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(w_36);
                              t = t_94;
                              {
                                ATerm y_36 = t;
                                int z_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_94 = NULL;
                                    t = r_94;
                                    t = yield_0_0(t);
                                    z_94 = t;
                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, z_94);
                                    LocalPopChoice(z_36);
                                  }
                                else
                                  {
                                    t = y_36;
                                    {
                                      ATerm a_95 = NULL;
                                      t = r_94;
                                      t = yield_0_0(t);
                                      a_95 = t;
                                      t = (ATerm) ATmakeAppl(sym_meta_var_1, a_95);
                                    }
                                  }
                              }
                            }
                          else
                            {
                              t = v_36;
                              {
                                ATerm a_37 = t;
                                int b_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_iter_star_sep_2))
                                      {
                                        ATerm d_37 = ATgetArgument(t, 0);
                                        ATerm e_37 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(b_37);
                                    t = t_94;
                                    {
                                      ATerm n_37 = t;
                                      int o_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_95 = NULL;
                                          t = r_94;
                                          t = yield_0_0(t);
                                          b_95 = t;
                                          t = (ATerm) ATmakeAppl(sym_meta_listvar_1, b_95);
                                          LocalPopChoice(o_37);
                                        }
                                      else
                                        {
                                          t = n_37;
                                          {
                                            ATerm c_95 = NULL;
                                            t = r_94;
                                            t = yield_0_0(t);
                                            c_95 = t;
                                            t = (ATerm) ATmakeAppl(sym_meta_var_1, c_95);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    t = a_37;
                                    {
                                      ATerm p_37 = t;
                                      int q_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_1))
                                            {
                                              ATerm s_37 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(q_37);
                                          t = t_94;
                                          {
                                            ATerm t_37 = t;
                                            int u_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_95 = NULL;
                                                t = r_94;
                                                t = yield_0_0(t);
                                                d_95 = t;
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, d_95);
                                                LocalPopChoice(u_37);
                                              }
                                            else
                                              {
                                                t = t_37;
                                                {
                                                  ATerm e_95 = NULL;
                                                  t = r_94;
                                                  t = yield_0_0(t);
                                                  e_95 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, e_95);
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          t = p_37;
                                          {
                                            ATerm v_37 = t;
                                            int x_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_2))
                                                  {
                                                    ATerm y_37 = ATgetArgument(t, 0);
                                                    ATerm z_37 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(x_37);
                                                t = t_94;
                                                {
                                                  ATerm a_38 = t;
                                                  int b_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_95 = NULL;
                                                      t = r_94;
                                                      t = yield_0_0(t);
                                                      f_95 = t;
                                                      t = (ATerm) ATmakeAppl(sym_meta_listvar_1, f_95);
                                                      LocalPopChoice(b_38);
                                                    }
                                                  else
                                                    {
                                                      t = a_38;
                                                      {
                                                        ATerm g_95 = NULL;
                                                        t = r_94;
                                                        t = yield_0_0(t);
                                                        g_95 = t;
                                                        t = (ATerm) ATmakeAppl(sym_meta_var_1, g_95);
                                                      }
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                t = v_37;
                                                {
                                                  ATerm i_95 = NULL;
                                                  t = r_94;
                                                  t = yield_0_0(t);
                                                  i_95 = t;
                                                  t = (ATerm) ATmakeAppl(sym_meta_var_1, i_95);
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
                        ATerm j_95 = NULL;
                        t = r_94;
                        t = yield_0_0(t);
                        j_95 = t;
                        t = (ATerm) ATmakeAppl(sym_meta_var_1, j_95);
                      }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  t = j_89(t);
  {
    static ATerm r_2 (ATerm t)
    {
      t = downup2_2_0(j_89, k_89, t);
      return(t);
    }
    t = SRTS_all(r_2, t);
  }
  t = k_89(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_lexical_0_0(t);
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = flat_layout_0_0(t);
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
  s_100 = t;
  if(match_cons(t, sym_appl_2))
    {
      q_100 = ATgetArgument(t, 0);
      r_100 = ATgetArgument(t, 1);
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_53 = NULL,s_53 = NULL,u_53 = NULL,y_53 = NULL,a_54 = NULL,b_54 = NULL,d_54 = NULL,f_54 = NULL,e_19 = NULL,s_18 = NULL;
            t = SSLgetAnnotations(s_100);
            j_53 = t;
            t = q_100;
            if(match_cons(t, sym_prod_3))
              {
                y_53 = ATgetArgument(t, 0);
                a_54 = ATgetArgument(t, 1);
                b_54 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_100);
            u_53 = t;
            t = y_53;
            t = filter_1_0(w_2, t);
            d_54 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, d_54, a_54, b_54);
            s_18 = t;
            t = SSLsetAnnotations(s_18, u_53);
            f_54 = t;
            t = r_100;
            t = filter_1_0(x_2, t);
            s_53 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, f_54, s_53);
            e_19 = t;
            t = SSLsetAnnotations(e_19, j_53);
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            t = s_100;
          }
      }
    }
  else
    {
      t = s_100;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm j_38 = t;
  if((PushChoice() == 0))
    {
      ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
      i_56 = t;
      if(match_cons(t, sym_appl_2))
        {
          j_56 = ATgetArgument(t, 0);
          h_56 = ATgetArgument(t, 1);
          {
            ATerm n_61 = NULL,u_61 = NULL,v_61 = NULL,y_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,e_62 = NULL,f_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,l_18 = NULL,k_18 = NULL,j_18 = NULL,i_18 = NULL;
            t = SSLgetAnnotations(i_56);
            n_61 = t;
            t = j_56;
            if(match_cons(t, sym_prod_3))
              {
                v_61 = ATgetArgument(t, 0);
                y_61 = ATgetArgument(t, 1);
                a_62 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_56);
            u_61 = t;
            t = y_61;
            if(match_cons(t, sym_cf_1))
              {
                e_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_61);
            c_62 = t;
            t = e_62;
            if(match_cons(t, sym_opt_1))
              {
                p_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_62);
            o_62 = t;
            t = p_62;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, p_62);
            i_18 = t;
            t = SSLsetAnnotations(i_18, o_62);
            q_62 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, q_62);
            j_18 = t;
            t = SSLsetAnnotations(j_18, c_62);
            f_62 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, v_61, f_62, a_62);
            k_18 = t;
            t = SSLsetAnnotations(k_18, u_61);
            b_62 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, b_62, h_56);
            l_18 = t;
            t = SSLsetAnnotations(l_18, n_61);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              j_56 = ATgetArgument(t, 0);
              {
                ATerm x_62 = NULL,g_63 = NULL,h_63 = NULL,j_63 = NULL,n_18 = NULL,m_18 = NULL;
                t = SSLgetAnnotations(i_56);
                x_62 = t;
                t = j_56;
                if(match_cons(t, sym_opt_1))
                  {
                    h_63 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_56);
                g_63 = t;
                t = h_63;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, h_63);
                m_18 = t;
                t = SSLsetAnnotations(m_18, g_63);
                j_63 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, j_63);
                n_18 = t;
                t = SSLsetAnnotations(n_18, x_62);
              }
            }
          else
            {
              ATerm t_63 = NULL,r_18 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  j_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_56);
              t_63 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, j_56);
              r_18 = t;
              t = SSLsetAnnotations(r_18, t_63);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_38;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm k_38 = t;
  if((PushChoice() == 0))
    {
      ATerm l_60 = NULL,n_60 = NULL,y_60 = NULL;
      n_60 = t;
      if(match_cons(t, sym_appl_2))
        {
          y_60 = ATgetArgument(t, 0);
          l_60 = ATgetArgument(t, 1);
          {
            ATerm k_64 = NULL,n_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,z_18 = NULL,x_18 = NULL,u_18 = NULL,t_18 = NULL;
            t = SSLgetAnnotations(n_60);
            k_64 = t;
            t = y_60;
            if(match_cons(t, sym_prod_3))
              {
                q_64 = ATgetArgument(t, 0);
                r_64 = ATgetArgument(t, 1);
                s_64 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_60);
            n_64 = t;
            t = r_64;
            if(match_cons(t, sym_cf_1))
              {
                v_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_64);
            u_64 = t;
            t = v_64;
            if(match_cons(t, sym_opt_1))
              {
                y_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_64);
            x_64 = t;
            t = y_64;
            if(!(match_cons(t, sym_layout_0)))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_opt_1, y_64);
            t_18 = t;
            t = SSLsetAnnotations(t_18, x_64);
            z_64 = t;
            t = (ATerm) ATmakeAppl(sym_cf_1, z_64);
            u_18 = t;
            t = SSLsetAnnotations(u_18, u_64);
            w_64 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, q_64, w_64, s_64);
            x_18 = t;
            t = SSLsetAnnotations(x_18, n_64);
            t_64 = t;
            t = (ATerm) ATmakeAppl(sym_appl_2, t_64, l_60);
            z_18 = t;
            t = SSLsetAnnotations(z_18, k_64);
          }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              y_60 = ATgetArgument(t, 0);
              {
                ATerm h_65 = NULL,j_65 = NULL,l_65 = NULL,q_65 = NULL,c_19 = NULL,a_19 = NULL;
                t = SSLgetAnnotations(n_60);
                h_65 = t;
                t = y_60;
                if(match_cons(t, sym_opt_1))
                  {
                    l_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_60);
                j_65 = t;
                t = l_65;
                if(!(match_cons(t, sym_layout_0)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_opt_1, l_65);
                a_19 = t;
                t = SSLsetAnnotations(a_19, j_65);
                q_65 = t;
                t = (ATerm) ATmakeAppl(sym_cf_1, q_65);
                c_19 = t;
                t = SSLsetAnnotations(c_19, h_65);
              }
            }
          else
            {
              ATerm y_65 = NULL,d_19 = NULL;
              if(match_cons(t, sym_layout_1))
                {
                  y_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_60);
              y_65 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, y_60);
              d_19 = t;
              t = SSLsetAnnotations(d_19, y_65);
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_38;
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
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatList_0_0(t);
      LocalPopChoice(o_38);
    }
  else
    {
      t = l_38;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_list_0_0(t);
      t = filter_1_0(b_3, t);
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm r_38 = t;
  if((PushChoice() == 0))
    {
      ATerm n_101 = NULL,o_101 = NULL,p_101 = NULL,f_19 = NULL;
      p_101 = t;
      if(match_cons(t, sym_lit_1))
        {
          o_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_101);
      n_101 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, o_101);
      f_19 = t;
      t = SSLsetAnnotations(f_19, n_101);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_38;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_66 = NULL,h_66 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          g_66 = ATgetArgument(t, 0);
          {
            ATerm u_38 = ATgetArgument(t, 1);
            if(((ATgetType(u_38) == AT_LIST) && !(ATisEmpty(u_38))))
              {
                h_66 = ATgetFirst((ATermList) u_38);
                {
                  ATerm v_38 = (ATerm) ATgetNext((ATermList) u_38);
                  if(((ATgetType(v_38) != AT_LIST) || !(ATisEmpty(v_38))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = g_66;
      t = injection_0_0(t);
      t = h_66;
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = FlatAlt_0_0(t);
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Tuple_0_0(t);
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
    }
  return(t);
}
ATerm implode_0_0 (ATerm t)
{
  ATerm z_96 = NULL,g_103 = NULL,a_103 = NULL,m_102 = NULL,f_102 = NULL,y_101 = NULL,t_101 = NULL,j_101 = NULL,c_101 = NULL,w_100 = NULL,i_97 = NULL;
  z_96 = t;
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_97 = NULL,b_97 = NULL;
        t = term_c_39;
        a_97 = t;
        t = term_d_39;
        b_97 = t;
        t = term_e_39;
        t = d_10(a_97, b_97, t);
        t = z_96;
        t = downup2_2_0(t_2, u_2, t);
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
      }
  }
  i_97 = t;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_97 = NULL,l_97 = NULL;
        t = term_c_39;
        k_97 = t;
        t = term_i_39;
        l_97 = t;
        t = term_j_39;
        t = d_10(k_97, l_97, t);
        t = i_97;
        t = topdown_1_0(v_2, t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        t = i_97;
      }
  }
  w_100 = t;
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_100 = NULL,z_100 = NULL;
        t = term_c_39;
        y_100 = t;
        t = term_m_39;
        z_100 = t;
        t = term_o_39;
        t = d_10(y_100, z_100, t);
        t = w_100;
        t = topdown_1_0(y_2, t);
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        t = w_100;
      }
  }
  c_101 = t;
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_101 = NULL,f_101 = NULL;
        t = term_c_39;
        e_101 = t;
        t = term_r_39;
        f_101 = t;
        t = term_s_39;
        t = d_10(e_101, f_101, t);
        t = c_101;
        t = topdown_1_0(z_2, t);
        LocalPopChoice(q_39);
      }
    else
      {
        t = p_39;
        t = c_101;
      }
  }
  j_101 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_101 = NULL,m_101 = NULL;
        t = term_c_39;
        l_101 = t;
        t = term_v_39;
        m_101 = t;
        t = term_w_39;
        t = d_10(l_101, m_101, t);
        t = j_101;
        t = topdown_1_0(a_3, t);
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = j_101;
      }
  }
  t_101 = t;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_101 = NULL,w_101 = NULL;
        t = term_c_39;
        v_101 = t;
        t = term_z_39;
        w_101 = t;
        t = term_a_40;
        t = d_10(v_101, w_101, t);
        t = t_101;
        t = replace_appl_0_0(t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        t = t_101;
      }
  }
  y_101 = t;
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_102 = NULL,b_102 = NULL;
        t = term_c_39;
        a_102 = t;
        t = term_d_40;
        b_102 = t;
        t = term_e_40;
        t = d_10(a_102, b_102, t);
        t = y_101;
        t = bottomup_1_0(c_3, t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = y_101;
      }
  }
  f_102 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_102 = NULL,i_102 = NULL;
        t = term_c_39;
        h_102 = t;
        t = term_j_40;
        i_102 = t;
        t = term_k_40;
        t = d_10(h_102, i_102, t);
        t = f_102;
        t = topdown_1_0(d_3, t);
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = f_102;
      }
  }
  m_102 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_102 = NULL,r_102 = NULL;
        t = term_c_39;
        o_102 = t;
        t = term_n_40;
        r_102 = t;
        t = term_o_40;
        t = d_10(o_102, r_102, t);
        t = m_102;
        t = topdown_1_0(e_3, t);
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = m_102;
      }
  }
  a_103 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
        t = term_c_39;
        l_66 = t;
        t = term_r_40;
        m_66 = t;
        t = term_s_40;
        t = d_10(l_66, m_66, t);
        t = a_103;
        if(match_cons(t, sym_parsetree_2))
          {
            k_66 = ATgetArgument(t, 0);
            {
              ATerm t_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = k_66;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = a_103;
      }
  }
  g_103 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_103;
        if((z_96 != t))
          {
            _fail(t);
          }
        t = g_103;
        {
          ATerm w_40 = t;
          int x_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_66 = NULL,q_66 = NULL;
              t = term_c_39;
              p_66 = t;
              t = term_z_40;
              q_66 = t;
              t = term_a_41;
              t = d_10(p_66, q_66, t);
              t = g_103;
              LocalPopChoice(x_40);
              t = implodeAsfix_1_0(_id, t);
            }
          else
            {
              t = w_40;
              t = implodeAsfix_1_0(_fail, t);
            }
        }
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = g_103;
      }
  }
  return(t);
}
static ATerm q_9 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm r_103 = NULL;
  t = SSL_fputc(o_41, p_41);
  r_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_103);
  return(t);
}
static ATerm r_9 (ATerm j_26, ATerm k_26, ATerm t)
{
  ATerm s_103 = NULL;
  t = SSL_write_term_to_stream_text(j_26, k_26);
  s_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_103);
  return(t);
}
static ATerm t_9 (ATerm h_95 (ATerm), ATerm k_226, ATerm p_26, ATerm t)
{
  ATerm u_103 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_226, term_d_41);
  t = x_9(t);
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_103, p_26);
  t = h_95(t);
  t = fclose_0_0(t);
  t = p_26;
  return(t);
}
static ATerm s_9 (ATerm f_26, ATerm g_26, ATerm t)
{
  ATerm v_103 = NULL;
  t = SSL_write_term_to_stream_baf(f_26, g_26);
  v_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_103);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      if(match_cons(e_41, sym_Stream_1))
        {
          c_104 = ATgetArgument(e_41, 0);
        }
      else
        _fail(t);
      d_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(c_104, d_104, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_41 = ATgetArgument(t, 0);
      if(match_cons(f_41, sym_Stream_1))
        {
          h_104 = ATgetArgument(f_41, 0);
        }
      else
        _fail(t);
      i_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(h_104, i_104, t);
  e_104 = t;
  t = term_g_41;
  f_104 = t;
  t = e_104;
  if(match_cons(t, sym_Stream_1))
    {
      g_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, e_104);
  t = q_9(f_104, g_104, t);
  return(t);
}
ATerm output_1_0 (ATerm m_119 (ATerm), ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL;
  t = m_119(t);
  x_103 = t;
  {
    ATerm h_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_103 = NULL,z_103 = NULL;
        t = term_c_39;
        y_103 = t;
        t = term_m_41;
        z_103 = t;
        t = term_n_41;
        t = d_10(y_103, z_103, t);
        LocalPopChoice(j_41);
      }
    else
      {
        t = h_41;
        t = term_t_41;
      }
  }
  w_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_103, x_103);
  {
    ATerm u_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_104 = NULL,b_104 = NULL;
        t = term_c_39;
        a_104 = t;
        t = term_w_41;
        b_104 = t;
        t = term_y_41;
        t = d_10(a_104, b_104, t);
        t = (ATerm) ATmakeAppl(sym__2, w_103, x_103);
        LocalPopChoice(v_41);
        if(match_cons(t, sym__2))
          {
            ATerm a_42 = ATgetArgument(t, 0);
            ATerm b_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_9(f_3, w_103, x_103, t);
      }
    else
      {
        t = u_41;
        if(match_cons(t, sym__2))
          {
            ATerm c_42 = ATgetArgument(t, 0);
            ATerm d_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_9(g_3, w_103, x_103, t);
      }
  }
  return(t);
}
static ATerm w_104 (ATerm q_104, ATerm t)
{
  t = SSL_fclose(q_104);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL;
  u_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_104 = ATgetArgument(t, 0);
      {
        ATerm e_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_104);
            LocalPopChoice(f_42);
          }
        else
          {
            t = e_42;
            t = w_104(u_104, t);
          }
      }
    }
  else
    {
      t = w_104(u_104, t);
    }
  return(t);
}
static ATerm u_9 (ATerm l_26, ATerm t)
{
  t = SSL_read_term_from_stream(l_26);
  return(t);
}
static ATerm v_9 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_strcat(h_40, i_40);
  return(t);
}
static ATerm w_9 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm x_104 = NULL;
  t = SSL_fopen(q_41, r_41);
  x_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_104);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_104 = NULL;
  t = SSL_stdin_stream();
  y_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_104);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_104 = NULL;
  t = SSL_stdout_stream();
  z_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_104);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_105 = NULL;
  t = SSL_stderr_stream();
  a_105 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_105);
  return(t);
}
static ATerm h_106 (ATerm g_105, ATerm t)
{
  ATerm h_105 = NULL;
  t = SSL_explode_term(g_105);
  if(match_cons(t, sym__2))
    {
      ATerm g_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_42 = ATgetArgument(t, 1);
        if(((ATgetType(h_42) == AT_LIST) && !(ATisEmpty(h_42))))
          {
            h_105 = ATgetFirst((ATermList) h_42);
            {
              ATerm i_42 = (ATerm) ATgetNext((ATermList) h_42);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_105;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_105;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_105;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_105;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_106 (ATerm k_105, ATerm l_105, ATerm m_105, ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL,s_105 = NULL,m_20 = NULL;
  t = SSLgetAnnotations(m_105);
  p_105 = t;
  t = k_105;
  if(match_cons(t, sym_Path_1))
    {
      s_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_105, l_105);
  m_20 = t;
  t = SSLsetAnnotations(m_20, p_105);
  if(match_cons(t, sym__2))
    {
      n_105 = ATgetArgument(t, 0);
      o_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(n_105, o_105, t);
  return(t);
}
static ATerm j_106 (ATerm u_105, ATerm v_105, ATerm w_105, ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL,c_106 = NULL,n_20 = NULL;
  t = SSLgetAnnotations(w_105);
  z_105 = t;
  t = SSL_is_string(u_105);
  c_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_106, v_105);
  n_20 = t;
  t = SSLsetAnnotations(n_20, z_105);
  if(match_cons(t, sym__2))
    {
      x_105 = ATgetArgument(t, 0);
      y_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(x_105, y_105, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL;
  e_106 = t;
  if(match_cons(t, sym__2))
    {
      f_106 = ATgetArgument(t, 0);
      g_106 = ATgetArgument(t, 1);
      {
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_106(e_106, t);
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
            {
              ATerm l_42 = t;
              int m_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_106(f_106, g_106, e_106, t);
                  LocalPopChoice(m_42);
                }
              else
                {
                  t = l_42;
                  t = j_106(f_106, g_106, e_106, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_106(e_106, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL,s_106 = NULL;
  s_106 = t;
  {
    ATerm n_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_106, term_t_42);
        t = x_9(t);
        LocalPopChoice(r_42);
      }
    else
      {
        t = n_42;
        {
          ATerm h_67 = NULL,k_67 = NULL;
          t = term_u_42;
          k_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_42, s_106);
          t = v_9(k_67, s_106, t);
          h_67 = t;
          t = SSL_perror(h_67);
          _fail(t);
        }
      }
  }
  m_106 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(n_106, t);
  l_106 = t;
  t = m_106;
  t = fclose_0_0(t);
  t = l_106;
  return(t);
}
ATerm input_1_0 (ATerm n_119 (ATerm), ATerm t)
{
  ATerm v_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_106 = NULL,w_106 = NULL;
      t = term_c_39;
      v_106 = t;
      t = term_x_42;
      w_106 = t;
      t = term_y_42;
      t = d_10(v_106, w_106, t);
      LocalPopChoice(w_42);
    }
  else
    {
      t = v_42;
      t = term_z_42;
    }
  t = ReadFromFile_0_0(t);
  t = n_119(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL;
  x_106 = t;
  t = term_a_43;
  t = whoami_0_0(t);
  a_107 = t;
  t = term_b_43;
  c_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_43), a_107), term_c_43);
  d_107 = t;
  t = SSL_printnl(c_107, d_107);
  t = term_h_18;
  b_107 = t;
  t = SSL_exit(b_107);
  t = x_106;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm f_107 = NULL;
  f_107 = t;
  if(match_string(t, "-k"))
    {
      t = f_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_107;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL;
  g_107 = t;
  t = SSL_string_to_int(g_107);
  h_107 = t;
  t = term_e_43;
  i_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, h_107);
  t = g_10(i_107, h_107, t);
  t = g_107;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, j_3, t_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm k_107 = NULL;
  k_107 = t;
  if(match_string(t, "-S"))
    {
      t = k_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_107;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm l_107 = NULL,m_107 = NULL;
  t = term_g_43;
  l_107 = t;
  t = term_j_43;
  m_107 = t;
  t = term_k_43;
  t = g_10(l_107, m_107, t);
  t = term_l_43;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_n_43;
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
  ATerm n_107 = NULL,o_107 = NULL,p_107 = NULL;
  n_107 = t;
  t = SSL_string_to_int(n_107);
  o_107 = t;
  t = term_g_43;
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_43, o_107);
  t = g_10(p_107, o_107, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_107);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_p_43;
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
  ATerm q_107 = NULL,r_107 = NULL;
  t = term_q_43;
  q_107 = t;
  t = term_a_43;
  r_107 = t;
  t = term_r_43;
  t = g_10(q_107, r_107, t);
  t = term_s_43;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_t_43;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, v_3, w_3, t);
      LocalPopChoice(v_43);
    }
  else
    {
      t = u_43;
      {
        ATerm w_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_4, d_4, e_4, t);
            LocalPopChoice(x_43);
          }
        else
          {
            t = w_43;
            t = Option_3_0(f_4, g_4, k_4, t);
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm s_107 = NULL,t_107 = NULL;
  t = term_c_39;
  s_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_39, h_51, i_51);
  t = lookup_table_0_1(s_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(h_51, i_51, t_107, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_39, h_51, i_51);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL;
      t = term_a_43;
      t = e_0(t);
      z_107 = t;
      t = term_z_43;
      a_108 = t;
      t = term_a_44;
      b_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_43, term_a_44, z_107);
      t = e_10(a_108, b_108, z_107, t);
      _fail(t);
    }
  else
    {
      ATerm e_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_107 = ATgetFirst((ATermList) t);
          y_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_107;
      t = c_0(t);
      t = term_a_43;
      t = d_0(t);
      e_108 = t;
      t = (ATerm) ATinsert(CheckATermList(y_107), e_108);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm g_108 = NULL;
  g_108 = t;
  if(match_string(t, "-o"))
    {
      t = g_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_108;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL;
  h_108 = t;
  t = term_m_41;
  i_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_41, h_108);
  t = g_10(i_108, h_108, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_108);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_b_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
static ATerm e_10 (ATerm m_53, ATerm n_53, ATerm l_53, ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
  k_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
  {
    ATerm c_44 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, m_53, n_53);
        t = d_10(m_53, n_53, t);
        LocalPopChoice(d_44);
      }
    else
      {
        t = c_44;
        t = (ATerm) ATempty;
      }
  }
  l_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_53, n_53, (ATerm) ATinsert(CheckATermList(l_108), l_53));
  t = lookup_table_0_1(m_53, t);
  o_108 = t;
  t = (ATerm) ATinsert(CheckATermList(l_108), l_53);
  m_108 = t;
  t = o_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(n_53, m_108, n_108, t);
  t = k_108;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_108 = NULL,a_109 = NULL,b_109 = NULL;
      t = term_a_43;
      t = p_0(t);
      z_108 = t;
      t = term_z_43;
      a_109 = t;
      t = term_a_44;
      b_109 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_43, term_a_44, z_108);
      t = e_10(a_109, b_109, z_108, t);
      _fail(t);
    }
  else
    {
      ATerm f_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_108 = ATgetFirst((ATermList) t);
          w_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_108 = ATgetFirst((ATermList) t);
          y_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_108;
      t = n_0(t);
      t = x_108;
      t = o_0(t);
      f_109 = t;
      t = (ATerm) ATinsert(CheckATermList(y_108), f_109);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm h_109 = NULL;
  h_109 = t;
  if(match_string(t, "-i"))
    {
      t = h_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_109;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm i_109 = NULL,j_109 = NULL;
  i_109 = t;
  t = term_x_42;
  j_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_42, i_109);
  t = g_10(j_109, i_109, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_109);
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
  ATerm k_109 = NULL,l_109 = NULL;
  k_109 = t;
  t = term_d_39;
  l_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_39, k_109);
  t = g_10(l_109, k_109, t);
  t = k_109;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_i_44;
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
  ATerm m_109 = NULL,n_109 = NULL;
  m_109 = t;
  t = term_i_39;
  n_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, m_109);
  t = g_10(n_109, m_109, t);
  t = m_109;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_j_44;
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
  ATerm o_109 = NULL,p_109 = NULL;
  o_109 = t;
  t = term_v_39;
  p_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_39, o_109);
  t = g_10(p_109, o_109, t);
  t = o_109;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_m_44;
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
  ATerm q_109 = NULL,r_109 = NULL;
  q_109 = t;
  t = term_j_40;
  r_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_40, q_109);
  t = g_10(r_109, q_109, t);
  t = q_109;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_o_44;
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
  ATerm s_109 = NULL,t_109 = NULL;
  s_109 = t;
  t = term_z_39;
  t_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_39, s_109);
  t = g_10(t_109, s_109, t);
  t = s_109;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_p_44;
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
  ATerm u_109 = NULL,v_109 = NULL;
  u_109 = t;
  t = term_m_39;
  v_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_39, u_109);
  t = g_10(v_109, u_109, t);
  t = u_109;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_q_44;
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
  ATerm w_109 = NULL,x_109 = NULL;
  w_109 = t;
  t = term_d_40;
  x_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_40, w_109);
  t = g_10(x_109, w_109, t);
  t = w_109;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_r_44;
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
  ATerm y_109 = NULL,z_109 = NULL;
  y_109 = t;
  t = term_r_39;
  z_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_39, y_109);
  t = g_10(z_109, y_109, t);
  t = y_109;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_s_44;
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
  ATerm a_110 = NULL,b_110 = NULL;
  a_110 = t;
  t = term_n_40;
  b_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_40, a_110);
  t = g_10(b_110, a_110, t);
  t = a_110;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_t_44;
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
  ATerm c_110 = NULL,d_110 = NULL;
  c_110 = t;
  t = term_r_40;
  d_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_40, c_110);
  t = g_10(d_110, c_110, t);
  t = c_110;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_u_44;
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
  ATerm e_110 = NULL,f_110 = NULL;
  e_110 = t;
  t = term_z_40;
  f_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_40, e_110);
  t = g_10(f_110, e_110, t);
  t = e_110;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm implode_options_0_0 (ATerm t)
{
  ATerm w_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, s_4, t_4, t);
      LocalPopChoice(y_44);
    }
  else
    {
      t = w_44;
      {
        ATerm z_44 = t;
        int a_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(w_4, l_5, m_5, t);
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
                  t = Option_3_0(n_5, o_5, p_5, t);
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
                        t = Option_3_0(q_5, r_5, s_5, t);
                        LocalPopChoice(e_45);
                      }
                    else
                      {
                        t = d_45;
                        {
                          ATerm f_45 = t;
                          int i_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(t_5, w_5, x_5, t);
                              LocalPopChoice(i_45);
                            }
                          else
                            {
                              t = f_45;
                              {
                                ATerm j_45 = t;
                                int k_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(c_6, i_6, j_6, t);
                                    LocalPopChoice(k_45);
                                  }
                                else
                                  {
                                    t = j_45;
                                    {
                                      ATerm l_45 = t;
                                      int n_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(k_6, m_6, o_6, t);
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
                                                t = Option_3_0(s_6, t_6, u_6, t);
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
                                                      t = Option_3_0(v_6, y_6, g_7, t);
                                                      LocalPopChoice(s_45);
                                                    }
                                                  else
                                                    {
                                                      t = q_45;
                                                      {
                                                        ATerm t_45 = t;
                                                        int u_45 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(l_7, m_7, n_7, t);
                                                            LocalPopChoice(u_45);
                                                          }
                                                        else
                                                          {
                                                            t = t_45;
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
  ATerm g_110 = NULL,h_110 = NULL,i_110 = NULL,j_110 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_43;
  t = whoami_0_0(t);
  g_110 = t;
  t = term_b_43;
  i_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_45), g_110);
  j_110 = t;
  t = SSL_printnl(i_110, j_110);
  t = term_h_18;
  h_110 = t;
  t = SSL_exit(h_110);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_110 = NULL,l_110 = NULL;
  t = term_c_39;
  k_110 = t;
  t = term_x_45;
  l_110 = t;
  t = term_y_45;
  t = d_10(k_110, l_110, t);
  return(t);
}
static ATerm y_9 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm z_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_44, l_44);
      LocalPopChoice(a_46);
    }
  else
    {
      t = z_45;
      t = SSL_addr(k_44, l_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t)
{
  ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL;
  n_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_110;
      t = p_102(t);
    }
  else
    {
      ATerm s_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_110 = ATgetFirst((ATermList) t);
          p_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_110;
      t = foldr_2_0(p_102, q_102, t);
      s_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_110, s_110);
      t = q_102(t);
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
  t = term_j_43;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  if(match_cons(t, sym__2))
    {
      u_67 = ATgetArgument(t, 0);
      v_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(u_67, v_67, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_110 = NULL,m_67 = NULL,p_67 = NULL;
  t = times_0_0(t);
  p_67 = t;
  t = SSL_explode_term(p_67);
  if(match_cons(t, sym__2))
    {
      ATerm b_46 = ATgetArgument(t, 0);
      m_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_67;
  t = foldr_2_0(s_7, t_7, t);
  v_110 = t;
  t = SSL_TicksToSeconds(v_110);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL;
  h_111 = t;
  if(match_cons(t, sym__2))
    {
      i_111 = ATgetArgument(t, 0);
      j_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_111;
        if((i_111 != t))
          {
            _fail(t);
          }
        t = h_111;
        LocalPopChoice(d_46);
      }
    else
      {
        t = c_46;
        t = (ATerm) ATmakeAppl(sym__2, i_111, j_111);
        {
          ATerm f_46 = t;
          int g_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_111, j_111);
              LocalPopChoice(g_46);
            }
          else
            {
              t = f_46;
              t = SSL_gtr(i_111, j_111);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_111, j_111);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm n_111 = NULL;
  n_111 = t;
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL;
        t = term_c_39;
        q_111 = t;
        t = term_g_43;
        r_111 = t;
        t = term_j_46;
        t = d_10(q_111, r_111, t);
        p_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_111, term_h_18);
        t = geq_0_0(t);
        t = n_111;
        t = g_111(t);
        LocalPopChoice(i_46);
      }
    else
      {
        t = h_46;
        t = n_111;
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm t_111 = NULL,u_111 = NULL,w_111 = NULL,x_111 = NULL;
  t = run_time_0_0(t);
  t_111 = t;
  t = term_a_43;
  t = whoami_0_0(t);
  u_111 = t;
  t = term_b_43;
  w_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_46), t_111), term_k_46), u_111);
  x_111 = t;
  t = SSL_printnl(w_111, x_111);
  t = (ATerm) ATmakeAppl(sym__2, term_b_43, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_46), t_111), term_k_46), u_111));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_43;
  y_111 = t;
  t = SSL_exit(y_111);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL;
  j_112 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_112;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_112 = ATgetArgument(t, 0);
          {
            ATerm y_68 = NULL,q_20 = NULL;
            t = SSLgetAnnotations(j_112);
            y_68 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_112);
            q_20 = t;
            t = SSLsetAnnotations(q_20, y_68);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_112;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_112 = NULL,c_112 = NULL;
      t = term_c_39;
      b_112 = t;
      t = term_p_46;
      c_112 = t;
      t = term_q_46;
      t = d_10(b_112, c_112, t);
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      t = fetch_1_0(v_7, t);
    }
  t = d_119(t);
  return(t);
}
static ATerm h_10 (ATerm e_57, ATerm f_57, ATerm g_57, ATerm t)
{
  ATerm l_112 = NULL;
  t = SSL_hashtable_put(g_57, e_57, f_57);
  l_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_112);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_54, ATerm t)
{
  ATerm u_112 = NULL;
  t = table_hashtable_0_0(t);
  u_112 = t;
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_69 = NULL;
        t = u_112;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_10(y_54, h_69, t);
        LocalPopChoice(s_46);
      }
    else
      {
        t = r_46;
        {
          ATerm y_69 = NULL;
          t = y_54;
          t = table_create_0_0(t);
          t = u_112;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_10(y_54, y_69, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_57, ATerm n_57, ATerm t)
{
  ATerm x_112 = NULL;
  t = SSL_hashtable_create(m_57, n_57);
  x_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_112);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_112 = NULL,z_112 = NULL,a_113 = NULL,c_113 = NULL,d_113 = NULL;
  y_112 = t;
  t = term_t_46;
  c_113 = t;
  t = term_u_46;
  d_113 = t;
  t = y_112;
  t = new_hashtable_0_2(c_113, d_113, t);
  z_112 = t;
  t = y_112;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(y_112, z_112, a_113, t);
  t = y_112;
  return(t);
}
static ATerm a_10 (ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm e_113 = NULL;
  t = SSL_hashtable_remove(k_57, j_57);
  e_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_113);
  return(t);
}
static ATerm b_10 (ATerm o_57, ATerm t)
{
  ATerm f_113 = NULL;
  t = SSL_hashtable_destroy(o_57);
  f_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_113);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_113 = NULL;
  t = SSL_table_hashtable();
  g_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_113);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL;
  h_113 = t;
  t = table_hashtable_0_0(t);
  i_113 = t;
  t = lookup_table_0_1(h_113, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(k_113, t);
  t = i_113;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(h_113, j_113, t);
  t = h_113;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_113 = ATgetFirst((ATermList) t);
      n_113 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_113 = NULL,s_113 = NULL;
        static ATerm w_7 (ATerm t)
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
        t = i_0(t);
        if(((s_113 != NULL) && (s_113 != t)))
          _fail(t);
        else
          s_113 = t;
        t = n_113;
        t = reverse_acc_2_0(i_0, w_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_43;
      t = k_0(t);
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm j_114 = NULL,h_70 = NULL,i_70 = NULL;
  j_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_114), term_v_46);
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
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_114), term_v_46));
      }
  }
  h_70 = t;
  t = term_t_41;
  i_70 = t;
  t = SSL_printnl(i_70, h_70);
  t = (ATerm) ATinsert(ATinsert(ATempty, j_114), term_v_46);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL,e_70 = NULL,f_70 = NULL;
  ATerm y_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_113 = NULL,a_114 = NULL;
      t = term_c_39;
      z_113 = t;
      t = term_x_45;
      a_114 = t;
      t = term_y_45;
      t = d_10(z_113, a_114, t);
      w_113 = t;
      LocalPopChoice(a_47);
    }
  else
    {
      t = y_46;
      {
        static ATerm x_7 (ATerm t)
        {
          ATerm d_114 = NULL,e_114 = NULL,f_114 = NULL,s_20 = NULL;
          f_114 = t;
          if(match_cons(t, sym_Program_1))
            {
              e_114 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_114);
          d_114 = t;
          t = e_114;
          if(((w_113 != NULL) && (w_113 != t)))
            _fail(t);
          else
            w_113 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, e_114);
          s_20 = t;
          t = SSLsetAnnotations(s_20, d_114);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  {
    ATerm b_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_70 = NULL,c_70 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_47), not_null(w_113)), term_e_47);
        {
          ATerm g_47 = t;
          int h_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(h_47);
            }
          else
            {
              t = g_47;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_47), not_null(w_113)), term_e_47));
            }
        }
        b_70 = t;
        t = term_t_41;
        c_70 = t;
        t = SSL_printnl(c_70, b_70);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_47), not_null(w_113)), term_e_47);
        LocalPopChoice(d_47);
      }
    else
      {
        t = b_47;
      }
  }
  t = term_i_47;
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        t = (ATerm) ATinsert(ATempty, term_i_47);
      }
  }
  e_70 = t;
  t = term_t_41;
  f_70 = t;
  t = SSL_printnl(f_70, e_70);
  t = term_z_43;
  x_113 = t;
  t = term_a_44;
  y_113 = t;
  t = term_n_47;
  t = d_10(x_113, y_113, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(b_8, t);
  {
    ATerm o_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_70 = NULL,l_70 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_47), term_t_47), term_s_47), term_r_47);
        {
          ATerm v_47 = t;
          int w_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = is_list_0_0(t);
              LocalPopChoice(w_47);
            }
          else
            {
              t = v_47;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_47), term_t_47), term_s_47), term_r_47));
            }
        }
        k_70 = t;
        t = term_t_41;
        l_70 = t;
        t = SSL_printnl(l_70, k_70);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_47), term_t_47), term_s_47), term_r_47);
        LocalPopChoice(q_47);
      }
    else
      {
        t = o_47;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  static ATerm i_115 (ATerm t)
  {
    ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL;
    f_115 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_115 = ATgetFirst((ATermList) t);
        h_115 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_47 = t;
      int y_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_70 = NULL,s_70 = NULL,u_20 = NULL;
          t = SSLgetAnnotations(f_115);
          p_70 = t;
          t = g_115;
          t = a_96(t);
          s_70 = t;
          t = (ATerm) ATinsert(CheckATermList(h_115), s_70);
          u_20 = t;
          t = SSLsetAnnotations(u_20, p_70);
          LocalPopChoice(y_47);
        }
      else
        {
          t = x_47;
          {
            ATerm b_71 = NULL,h_71 = NULL,v_20 = NULL;
            t = SSLgetAnnotations(f_115);
            b_71 = t;
            t = h_115;
            t = i_115(t);
            h_71 = t;
            t = (ATerm) ATinsert(CheckATermList(h_71), g_115);
            v_20 = t;
            t = SSLsetAnnotations(v_20, b_71);
          }
        }
    }
    return(t);
  }
  t = i_115(t);
  return(t);
}
ATerm map_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  static ATerm z_115 (ATerm t)
  {
    ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL;
    w_115 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_115;
      }
    else
      {
        ATerm f_72 = NULL,m_72 = NULL,n_72 = NULL,u_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_115 = ATgetFirst((ATermList) t);
            y_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_115);
        f_72 = t;
        t = x_115;
        t = q_95(t);
        m_72 = t;
        t = y_115;
        t = z_115(t);
        n_72 = t;
        t = (ATerm) ATinsert(CheckATermList(n_72), m_72);
        u_21 = t;
        t = SSLsetAnnotations(u_21, f_72);
      }
    return(t);
  }
  t = z_115(t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm z_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_116 = NULL;
      k_116 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_116;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_48 = ATgetFirst((ATermList) t);
              ATerm c_48 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_116;
        }
      LocalPopChoice(a_48);
    }
  else
    {
      t = z_47;
      {
        static ATerm b_118 (ATerm t)
        {
          ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL;
          z_117 = t;
          if(match_cons(t, sym_iter_1))
            {
              a_118 = ATgetArgument(t, 0);
              {
                ATerm f_73 = NULL,w_21 = NULL;
                t = SSLgetAnnotations(z_117);
                f_73 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, a_118);
                w_21 = t;
                t = SSLsetAnnotations(w_21, f_73);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  a_118 = ATgetArgument(t, 0);
                  y_117 = ATgetArgument(t, 1);
                  {
                    ATerm t_73 = NULL,x_21 = NULL;
                    t = SSLgetAnnotations(z_117);
                    t_73 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, a_118, y_117);
                    x_21 = t;
                    t = SSLsetAnnotations(x_21, t_73);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      a_118 = ATgetArgument(t, 0);
                      {
                        ATerm d_74 = NULL,d_22 = NULL;
                        t = SSLgetAnnotations(z_117);
                        d_74 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, a_118);
                        d_22 = t;
                        t = SSLsetAnnotations(d_22, d_74);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_sep_2))
                        {
                          a_118 = ATgetArgument(t, 0);
                          y_117 = ATgetArgument(t, 1);
                          {
                            ATerm a_75 = NULL,e_22 = NULL;
                            t = SSLgetAnnotations(z_117);
                            a_75 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, a_118, y_117);
                            e_22 = t;
                            t = SSLsetAnnotations(e_22, a_75);
                          }
                        }
                      else
                        {
                          ATerm y_75 = NULL,a_76 = NULL,g_22 = NULL;
                          if(match_cons(t, sym_seq_1))
                            {
                              a_118 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(z_117);
                          y_75 = t;
                          t = a_118;
                          {
                            static ATerm e_8 (ATerm t)
                            {
                              ATerm d_48 = t;
                              int e_48 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_76 = NULL,j_76 = NULL;
                                  j_76 = t;
                                  if(match_cons(t, sym_lit_1))
                                    {
                                      i_76 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_77 = NULL,f_22 = NULL;
                                        t = SSLgetAnnotations(j_76);
                                        c_77 = t;
                                        t = (ATerm) ATmakeAppl(sym_lit_1, i_76);
                                        f_22 = t;
                                        t = SSLsetAnnotations(f_22, c_77);
                                      }
                                    }
                                  else
                                    {
                                      if(!(match_cons(t, sym_layout_0)))
                                        _fail(t);
                                      t = j_76;
                                    }
                                  LocalPopChoice(e_48);
                                }
                              else
                                {
                                  t = d_48;
                                  t = b_118(t);
                                }
                              return(t);
                            }
                            t = map_1_0(e_8, t);
                          }
                          a_76 = t;
                          t = (ATerm) ATmakeAppl(sym_seq_1, a_76);
                          g_22 = t;
                          t = SSLsetAnnotations(g_22, y_75);
                        }
                    }
                }
            }
          return(t);
        }
        t = b_118(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
  t = term_c_39;
  l_118 = t;
  t = term_x_45;
  m_118 = t;
  t = term_y_45;
  t = d_10(l_118, m_118, t);
  h_77 = t;
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        LocalPopChoice(g_48);
      }
    else
      {
        t = f_48;
        t = (ATerm) ATinsert(ATempty, h_77);
      }
  }
  i_77 = t;
  t = term_t_41;
  j_77 = t;
  t = SSL_printnl(j_77, i_77);
  t = h_77;
  return(t);
}
static ATerm i_10 (ATerm h_57, ATerm i_57, ATerm t)
{
  t = SSL_hashtable_get(i_57, h_57);
  return(t);
}
static ATerm d_10 (ATerm f_55, ATerm g_55, ATerm t)
{
  ATerm n_118 = NULL;
  t = lookup_table_0_1(f_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_10(g_55, n_118, t);
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
  ATerm p_118 = NULL,q_118 = NULL;
  t = term_m_48;
  p_118 = t;
  t = term_a_43;
  q_118 = t;
  t = term_n_48;
  t = g_10(p_118, q_118, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_o_48;
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
  ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL;
  t = term_m_48;
  t_118 = t;
  t = term_a_43;
  u_118 = t;
  t = term_n_48;
  t = g_10(t_118, u_118, t);
  t = term_p_48;
  r_118 = t;
  t = term_a_43;
  s_118 = t;
  t = term_q_48;
  t = g_10(r_118, s_118, t);
  t = term_r_48;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_s_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_48 = t;
  int u_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_8, g_8, h_8, t);
      LocalPopChoice(u_48);
    }
  else
    {
      t = t_48;
      t = Option_3_0(i_8, j_8, k_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL,t_24 = NULL;
  a_119 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_118 = ATgetFirst((ATermList) t);
      x_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_119);
  v_118 = t;
  t = w_118;
  t = s_67(t);
  y_118 = t;
  t = x_118;
  t = t_67(t);
  z_118 = t;
  t = (ATerm) ATinsert(CheckATermList(z_118), y_118);
  t_24 = t;
  t = SSLsetAnnotations(t_24, v_118);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_114 (ATerm), ATerm t)
{
  ATerm k_119 = NULL,l_119 = NULL,o_119 = NULL,p_119 = NULL,r_119 = NULL,s_119 = NULL,v_24 = NULL;
  k_119 = t;
  {
    ATerm v_48 = t;
    int w_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_48;
        t = c_114(t);
        LocalPopChoice(w_48);
      }
    else
      {
        t = v_48;
      }
  }
  t = k_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_119 = ATgetFirst((ATermList) t);
      p_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_119);
  l_119 = t;
  t = term_x_45;
  s_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_45, o_119);
  t = g_10(s_119, o_119, t);
  t = p_119;
  {
    static ATerm c_120 (ATerm t)
    {
      ATerm y_48 = t;
      int z_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_49 = t;
          int h_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_119 = NULL;
              v_119 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_119;
              LocalPopChoice(h_49);
            }
          else
            {
              t = a_49;
              t = c_114(t);
              t = Cons_2_0(_id, c_120, t);
            }
          LocalPopChoice(z_48);
        }
      else
        {
          t = y_48;
          {
            ATerm y_119 = NULL,z_119 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_119 = ATgetFirst((ATermList) t);
                z_119 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_119), (ATerm) ATmakeAppl(sym_Undefined_1, y_119));
          }
        }
      return(t);
    }
    t = c_120(t);
  }
  r_119 = t;
  t = (ATerm) ATinsert(CheckATermList(r_119), (ATerm) ATmakeAppl(sym_Program_1, o_119));
  v_24 = t;
  t = SSLsetAnnotations(v_24, l_119);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm q_120 = NULL;
  q_120 = t;
  if(match_string(t, "--help"))
    {
      t = q_120;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_120;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_120;
        }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL;
  t = term_p_46;
  r_120 = t;
  t = term_a_43;
  s_120 = t;
  t = term_i_49;
  t = g_10(r_120, s_120, t);
  t = term_j_49;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_l_49;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_114 (ATerm), ATerm t)
{
  ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL;
  j_120 = t;
  t = term_z_43;
  l_120 = t;
  t = term_n_49;
  t = lookup_table_0_1(l_120, t);
  p_120 = t;
  t = term_a_44;
  m_120 = t;
  t = (ATerm) ATempty;
  n_120 = t;
  t = p_120;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(m_120, n_120, o_120, t);
  t = j_120;
  {
    static ATerm m_8 (ATerm t)
    {
      ATerm o_49 = t;
      int p_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_114(t);
          LocalPopChoice(p_49);
        }
      else
        {
          t = o_49;
          {
            ATerm q_49 = t;
            int r_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_8, o_8, p_8, t);
                LocalPopChoice(r_49);
              }
            else
              {
                t = q_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_8, t);
  }
  {
    ATerm s_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_121 = NULL;
        d_121 = t;
        {
          ATerm z_49 = t;
          int a_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_77 = NULL;
              t = d_121;
              {
                ATerm e_50 = t;
                int f_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_77 = NULL,o_77 = NULL;
                    t = term_c_39;
                    n_77 = t;
                    t = term_p_46;
                    o_77 = t;
                    t = term_q_46;
                    t = d_10(n_77, o_77, t);
                    LocalPopChoice(f_50);
                  }
                else
                  {
                    t = e_50;
                    t = fetch_1_0(q_8, t);
                  }
              }
              t = d_121;
              t = default_system_usage_0_0(t);
              t = term_j_43;
              m_77 = t;
              t = SSL_exit(m_77);
              LocalPopChoice(a_50);
            }
          else
            {
              t = z_49;
              {
                ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
                t = term_c_39;
                t_77 = t;
                t = term_m_48;
                u_77 = t;
                t = term_g_50;
                t = d_10(t_77, u_77, t);
                t = d_121;
                t = default_system_about_0_0(t);
                t = term_j_43;
                s_77 = t;
                t = SSL_exit(s_77);
              }
            }
        }
        LocalPopChoice(u_49);
      }
    else
      {
        t = s_49;
        {
          ATerm h_50 = t;
          int i_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_121 = NULL,f_121 = NULL,g_121 = NULL;
              static ATerm r_8 (ATerm t)
              {
                ATerm h_121 = NULL,i_121 = NULL,j_121 = NULL,r_26 = NULL;
                j_121 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_121 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_121);
                h_121 = t;
                t = i_121;
                if(((h_120 != NULL) && (h_120 != t)))
                  _fail(t);
                else
                  h_120 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_121);
                r_26 = t;
                t = SSLsetAnnotations(r_26, h_121);
                return(t);
              }
              t = fetch_1_0(r_8, t);
              t = term_b_43;
              f_121 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_120)), term_j_50);
              g_121 = t;
              t = SSL_printnl(f_121, g_121);
              t = (ATerm) ATmakeAppl(sym__2, term_b_43, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_120)), term_j_50));
              t = default_system_usage_0_0(t);
              t = term_h_18;
              e_121 = t;
              t = SSL_exit(e_121);
              LocalPopChoice(i_50);
            }
          else
            {
              t = h_50;
            }
        }
      }
  }
  i_120 = t;
  t = term_z_43;
  t = table_destroy_0_0(t);
  t = i_120;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm t)
{
  ATerm o_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL;
  t = parse_options_1_0(f_119, t);
  o_121 = t;
  t = term_l_50;
  t = table_create_0_0(t);
  t = term_l_50;
  p_121 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_50, term_r_50, o_121);
  t = lookup_table_0_1(p_121, t);
  s_121 = t;
  t = term_r_50;
  q_121 = t;
  t = s_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(q_121, o_121, r_121, t);
  t = o_121;
  t = h_119(t);
  {
    ATerm s_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_119, t);
        LocalPopChoice(u_50);
      }
    else
      {
        t = s_50;
        {
          ATerm v_50 = t;
          int w_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_119(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_50);
            }
          else
            {
              t = v_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = implode_options_0_0(t);
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
            t = input_option_0_0(t);
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
                  t = output_option_0_0(t);
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
                        t = Option_3_0(w_8, a_9, h_9, t);
                        LocalPopChoice(e_51);
                      }
                    else
                      {
                        t = d_51;
                        {
                          ATerm f_51 = t;
                          int g_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(g_51);
                            }
                          else
                            {
                              t = f_51;
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
  t = input_1_0(i_9, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm u_121 = NULL,v_121 = NULL;
  t = term_w_41;
  u_121 = t;
  t = term_a_43;
  v_121 = t;
  t = term_j_51;
  t = g_10(u_121, v_121, t);
  t = term_k_51;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_l_51;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = output_1_0(implode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_8, default_usage_0_0, _id, u_8, t);
  return(t);
}

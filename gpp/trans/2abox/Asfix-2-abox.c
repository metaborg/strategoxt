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
Symbol sym_PP_Table_1;
Symbol sym_layout_1;
Symbol sym_Verbose_0;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_FBOX_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_ALT_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_Strict_0;
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
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_Conservative_0;
Symbol sym_layout_place_holder_0;
Symbol sym_Injections_0;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_lex_1;
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
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_prod_fun_4;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_reject_0;
Symbol sym_lit_1;
Symbol sym_bracket_symbol_1;
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
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
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
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
  sym_Conservative_0 = ATmakeSymbol("Conservative", 0, ATfalse);
  ATprotectSymbol(sym_Conservative_0);
  sym_layout_place_holder_0 = ATmakeSymbol("layout-place-holder", 0, ATfalse);
  ATprotectSymbol(sym_layout_place_holder_0);
  sym_Injections_0 = ATmakeSymbol("Injections", 0, ATfalse);
  ATprotectSymbol(sym_Injections_0);
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
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_g_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_b_60;
ATerm term_u_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_v_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_z_57;
ATerm term_s_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_z_54;
ATerm term_r_54;
ATerm term_m_54;
ATerm term_j_54;
ATerm term_r_53;
ATerm term_j_53;
ATerm term_t_52;
ATerm term_o_52;
ATerm term_m_52;
ATerm term_j_52;
ATerm term_g_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_t_51;
ATerm term_q_51;
ATerm term_i_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_m_50;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_d_48;
ATerm term_n_46;
ATerm term_j_46;
ATerm term_g_46;
ATerm term_d_46;
ATerm term_a_46;
ATerm term_x_45;
ATerm term_q_45;
ATerm term_m_45;
ATerm term_h_45;
ATerm term_x_44;
ATerm term_u_44;
ATerm term_m_44;
ATerm term_h_44;
ATerm term_y_43;
ATerm term_s_43;
ATerm term_p_43;
ATerm term_l_43;
ATerm term_i_43;
ATerm term_f_43;
ATerm term_a_43;
ATerm term_s_42;
ATerm term_k_42;
ATerm term_e_42;
ATerm term_a_42;
ATerm term_v_41;
ATerm term_g_41;
ATerm term_d_41;
ATerm term_a_41;
ATerm term_x_40;
ATerm term_u_40;
ATerm term_k_40;
ATerm term_g_40;
ATerm term_c_40;
ATerm term_y_39;
ATerm term_v_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_p_38;
ATerm term_c_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_r_37;
ATerm term_m_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_p_36;
ATerm term_n_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_d_35;
ATerm term_p_34;
ATerm term_d_34;
ATerm term_m_30;
ATerm term_p_29;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_p_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_v_20;
ATerm term_i_19;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_r_14;
void init_constant_terms (void)
{
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_SOpt_2, term_c_16, term_d_16);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_lit_1, term_d_27);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_lit_1, term_f_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_SOpt_2, term_u_27, term_v_27);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Arg_1, term_y_14);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym__2, term_d_52, term_e_52);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym__2, term_e_55, term_i_55);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_55);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(sym__2, term_n_55, term_r_14);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_a_15);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(sym__2, term_h_57, term_r_14);
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym__2, term_k_57, term_r_14);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(sym__2, term_s_56, term_r_14);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(sym__2, term_b_59, term_r_14);
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm l_10 (ATerm n_72, ATerm o_72, ATerm m_72, ATerm);
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm m_10 (ATerm j_82, ATerm);
ATerm m_0 (ATerm);
ATerm has_significant_layout_0_0 (ATerm);
ATerm has_layout_0_0 (ATerm);
ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm InsLayout_1_0 (ATerm m_137 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm v_0 (ATerm);
ATerm insert_layout_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm collect_p__1_0 (ATerm z_136 (ATerm), ATerm);
ATerm fatal_ambiguity_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm d_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm r_33 (ATerm q_29, ATerm r_29, ATerm y_29, ATerm);
ATerm o_10 (ATerm b_38, ATerm a_38, ATerm);
ATerm instantiate_list_1_0 (ATerm f_137 (ATerm), ATerm);
ATerm q_10 (ATerm q_40, ATerm r_40, ATerm o_40, ATerm p_40, ATerm);
ATerm d_40 (ATerm m_36, ATerm o_36, ATerm q_36, ATerm);
ATerm instantiate_sep_list_1_0 (ATerm h_137 (ATerm), ATerm);
ATerm r_10 (ATerm w_60, ATerm x_60, ATerm);
ATerm s_10 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm w_41, ATerm x_41, ATerm);
ATerm genzip_4_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm nzip_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm w_10 (ATerm n_41, ATerm o_41, ATerm m_41, ATerm s_41, ATerm);
ATerm y_10 (ATerm e_60, ATerm f_60, ATerm);
ATerm z_10 (ATerm i_47, ATerm g_47, ATerm h_47, ATerm);
ATerm r_2 (ATerm);
ATerm index_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm symbol2abox_0_0 (ATerm);
ATerm seq2abox_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm a_11 (ATerm k_79, ATerm j_79, ATerm);
ATerm symbols2pp_entries_1_0 (ATerm d_136 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm b_11 (ATerm x_57, ATerm y_57, ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm _2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm);
ATerm pair_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm v_4 (ATerm);
ATerm z_4 (ATerm);
ATerm e_5 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm j_91 (ATerm j_90, ATerm k_90, ATerm l_90, ATerm);
ATerm number_node_1_0 (ATerm h_136 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm symbol2abox_1_0 (ATerm e_136 (ATerm), ATerm);
ATerm y_97 (ATerm i_96, ATerm j_96, ATerm k_96, ATerm);
ATerm z_97 (ATerm h_97, ATerm i_97, ATerm j_97, ATerm k_97, ATerm l_97, ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm get_pp_entry_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm uq2q_0_0 (ATerm);
ATerm get_constr_0_0 (ATerm);
ATerm add_attributes_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm strs2constr_0_0 (ATerm);
ATerm t_102 (ATerm l_102, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm sym2strs_0_0 (ATerm);
ATerm syms2strs_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm u_105 (ATerm q_105, ATerm);
ATerm p_6 (ATerm);
ATerm toAlphaNum_0_0 (ATerm);
ATerm f_11 (ATerm o_44, ATerm p_44, ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm list_ana_1_0 (ATerm s_137 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm lit2str_0_0 (ATerm);
ATerm z_111 (ATerm f_111, ATerm g_111, ATerm h_111, ATerm);
ATerm w_6 (ATerm);
ATerm mk_constr_0_0 (ATerm);
ATerm syntaxless_sort_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm is_injection_0_0 (ATerm);
ATerm z_6 (ATerm);
ATerm e_7 (ATerm);
ATerm is_reject_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm is_bracket_0_0 (ATerm);
ATerm prodcons_0_0 (ATerm);
ATerm k_11 (ATerm n_38, ATerm o_38, ATerm m_38, ATerm l_38, ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm l_11 (ATerm u_37, ATerm s_37, ATerm t_37, ATerm v_37, ATerm);
ATerm filter_1_0 (ATerm v_121 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm sometd_1_0 (ATerm m_110 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm f_115 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm m_11 (ATerm h_79, ATerm i_79, ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm at_last_1_0 (ATerm q_115 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm h_8 (ATerm);
ATerm unquote_chars_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm u_11 (ATerm g_79, ATerm);
ATerm oncetd_1_0 (ATerm c_110 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm x_11 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm d_50, ATerm c_50, ATerm);
ATerm y_11 (ATerm t_118 (ATerm), ATerm z_49, ATerm y_49, ATerm);
ATerm foldr_3_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm);
ATerm z_8 (ATerm);
ATerm collect_om_2_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm);
ATerm c_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm s_9 (ATerm);
ATerm z_11 (ATerm e_43, ATerm d_43, ATerm);
ATerm c_12 (ATerm y_62, ATerm z_62, ATerm);
ATerm d_12 (ATerm m_66, ATerm n_66, ATerm);
ATerm f_12 (ATerm g_127 (ATerm), ATerm s_491, ATerm q_66, ATerm);
ATerm e_12 (ATerm i_66, ATerm j_66, ATerm);
ATerm u_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_130 (ATerm), ATerm);
ATerm c_133 (ATerm w_132, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_12 (ATerm o_66, ATerm);
ATerm h_12 (ATerm a_63, ATerm b_63, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_134 (ATerm o_133, ATerm);
ATerm q_134 (ATerm s_133, ATerm t_133, ATerm u_133, ATerm);
ATerm r_134 (ATerm c_134, ATerm d_134, ATerm e_134, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm z_9 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_114 (ATerm), ATerm);
ATerm b_12 (ATerm o_57, ATerm p_57, ATerm);
ATerm debug_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_128 (ATerm), ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm g_10 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_12 (ATerm p_67, ATerm q_67, ATerm);
ATerm e_11 (ATerm);
ATerm g_11 (ATerm);
ATerm i_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm q_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_12 (ATerm y_59, ATerm z_59, ATerm);
ATerm foldr_2_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_11 (ATerm);
ATerm n_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_128 (ATerm), ATerm);
ATerm p_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_12 (ATerm);
ATerm need_help_1_0 (ATerm g_131 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_114 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm k_12 (ATerm e_74, ATerm f_74, ATerm);
ATerm x_12 (ATerm);
ATerm z_12 (ATerm);
ATerm b_13 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_133 (ATerm), ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm n_13 (ATerm);
ATerm parse_options_1_0 (ATerm i_133 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm);
ATerm r_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm iowrap_3_0 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm);
ATerm a_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm j_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm io_Asfix_2_abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,l_0 = NULL,n_0 = NULL,o_0 = NULL;
  b_0 = t;
  t = term_r_14;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_s_14;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_14), f_0), term_w_14);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_y_14;
  l_0 = t;
  t = SSL_exit(l_0);
  t = b_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,w_0 = NULL,x_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL;
      t = term_r_14;
      t = k_0(t);
      y_0 = t;
      t = term_z_14;
      z_0 = t;
      t = term_a_15;
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, y_0);
      t = l_10(z_0, a_1, y_0, t);
      _fail(t);
    }
  else
    {
      ATerm g_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_0 = ATgetFirst((ATermList) t);
          u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_0;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_0 = ATgetFirst((ATermList) t);
          x_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_0;
      t = i_0(t);
      t = w_0;
      t = j_0(t);
      g_1 = t;
      t = (ATerm) ATinsert(CheckATermList(x_0), g_1);
    }
  return(t);
}
ATerm l_10 (ATerm n_72, ATerm o_72, ATerm m_72, ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_72, o_72);
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            ATerm f_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_72, o_72);
        t = k_12(n_72, o_72, t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = (ATerm) ATempty;
      }
    l_1 = t;
    t = (ATerm) ATinsert(CheckATermList(l_1), m_72);
    m_1 = t;
    t = SSL_table_put(n_72, o_72, m_1);
    t = j_1;
  }
  return(t);
}
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
      t = term_r_14;
      t = h_0(t);
      w_1 = t;
      t = term_z_14;
      x_1 = t;
      t = term_a_15;
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, w_1);
      t = l_10(x_1, y_1, w_1, t);
      _fail(t);
    }
  else
    {
      ATerm b_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_1 = ATgetFirst((ATermList) t);
          v_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_1;
      t = e_0(t);
      t = term_r_14;
      t = g_0(t);
      b_2 = t;
      t = (ATerm) ATinsert(CheckATermList(v_1), b_2);
    }
  return(t);
}
ATerm m_10 (ATerm j_82, ATerm t)
{
  ATerm j_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(j_82);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, c_2)));
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = j_15;
      {
        ATerm d_2 = NULL;
        t = SSL_concat_strings(j_82);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, d_2);
      }
    }
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm s_15 = t;
  if((PushChoice() == 0))
    {
      ATerm l_2 = NULL;
      l_2 = t;
      if(match_int(t, 9))
        {
          t = l_2;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = l_2;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = l_2;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = l_2;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_15;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL;
  g_2 = t;
  {
    ATerm t_15 = t;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,d_7 = NULL;
        k_2 = t;
        if(match_cons(t, sym_layout_1))
          {
            j_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_2);
        i_2 = t;
        t = j_2;
        if(!(match_cons(t, sym_layout_place_holder_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_layout_1, j_2);
        d_7 = t;
        t = SSLsetAnnotations(d_7, i_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_15;
      }
    if(match_cons(t, sym_layout_1))
      {
        f_2 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSL_concat_strings(f_2);
    h_2 = t;
    t = SSL_explode_string(h_2);
    t = filter_1_0(m_0, t);
    {
      ATerm u_15 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_15;
        }
      t = g_2;
    }
  }
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm v_15 = t;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,f_7 = NULL;
      o_2 = t;
      if(match_cons(t, sym_layout_1))
        {
          n_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_2);
      m_2 = t;
      t = n_2;
      if(!(match_cons(t, sym_layout_place_holder_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_layout_1, n_2);
      f_7 = t;
      t = SSLsetAnnotations(f_7, m_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_15;
    }
  return(t);
}
ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm t)
{
  ATerm m_3 = NULL,h_7 = NULL;
  t = SSLgetAnnotations(z_2);
  m_3 = t;
  t = x_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
  h_7 = t;
  t = SSLsetAnnotations(h_7, m_3);
  return(t);
}
ATerm p_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm InsLayout_1_0 (ATerm m_137 (ATerm), ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm n_5 (ATerm q_3, ATerm r_3, ATerm s_3, ATerm t)
    {
      ATerm u_3 = NULL,a_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
      t = m_137(t);
      if(match_cons(t, sym__2))
        {
          u_3 = ATgetArgument(t, 0);
          a_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_3), a_4);
      return(t);
    }
    ATerm p_5 (ATerm d_4, ATerm e_4, ATerm f_4, ATerm g_4, ATerm i_4, ATerm t)
    {
      ATerm k_4 = NULL,l_4 = NULL,n_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_4, g_4);
      t = m_137(t);
      if(match_cons(t, sym__2))
        {
          k_4 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
            if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
              {
                l_4 = ATgetFirst((ATermList) w_15);
                q_4 = (ATerm) ATgetNext((ATermList) w_15);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_4), e_4), q_4);
      t = l_5(t);
      if(match_cons(t, sym__2))
        {
          ATerm y_15 = ATgetArgument(t, 0);
          if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
            {
              n_4 = ATgetFirst((ATermList) y_15);
              s_4 = (ATerm) ATgetNext((ATermList) y_15);
            }
          else
            _fail(t);
          r_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 = NULL,u_4 = NULL;
            t = term_b_16;
            t = get_options_0_0(t);
            t = oncetd_1_0(p_0, t);
            t = l_4;
            t = has_layout_0_0(t);
            t = l_4;
            if(match_cons(t, sym_layout_1))
              {
                u_4 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_10(u_4, t);
            t_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_4))), t_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_4))))), r_4);
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            {
              ATerm f_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_4 = NULL,x_4 = NULL;
                  ATerm i_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm y_4 = NULL;
                      y_4 = t;
                      t = term_b_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(q_0, t);
                      t = y_4;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = i_16;
                    }
                  t = l_4;
                  t = has_significant_layout_0_0(t);
                  t = l_4;
                  if(match_cons(t, sym_layout_1))
                    {
                      x_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_10(x_4, t);
                  w_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(s_4), n_4), w_4), k_4), r_4);
                  ;
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = f_16;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(s_4), n_4), k_4), r_4);
                }
            }
          }
      }
      return(t);
    }
    ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,h_5 = NULL,j_5 = NULL;
    a_5 = t;
    if(match_cons(t, sym__2))
      {
        b_5 = ATgetArgument(t, 0);
        j_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_5;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_5 = ATgetFirst((ATermList) t);
        d_5 = (ATerm) ATgetNext((ATermList) t);
        t = d_5;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_5(b_5, j_5, a_5, t);
                ;
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = n_5(c_5, j_5, a_5, t);
              }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_5 = ATgetFirst((ATermList) t);
                h_5 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm l_16 = t;
                  int m_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_5(b_5, j_5, a_5, t);
                      ;
                      LocalPopChoice(m_16);
                    }
                  else
                    {
                      t = l_16;
                      t = p_5(c_5, f_5, h_5, j_5, a_5, t);
                    }
                }
              }
            else
              {
                t = m_5(b_5, j_5, a_5, t);
              }
          }
      }
    else
      {
        t = m_5(b_5, j_5, a_5, t);
      }
    return(t);
  }
  t = l_5(t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = t;
      if((PushChoice() == 0))
        {
          ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,o_7 = NULL;
          q_21 = t;
          if(match_cons(t, sym_layout_1))
            {
              p_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_21);
          o_21 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, p_21);
          o_7 = t;
          t = SSLsetAnnotations(o_7, o_21);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_16;
        }
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        ATerm v_22 = NULL,w_22 = NULL;
        v_22 = t;
        if(match_cons(t, sym_layout_1))
          {
            w_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm q_16 = t;
          int r_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_17 = NULL,k_17 = NULL,m_17 = NULL,p_7 = NULL;
              t = SSLgetAnnotations(v_22);
              k_17 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, w_22);
              p_7 = t;
              t = SSLsetAnnotations(p_7, k_17);
              m_17 = t;
              t = term_b_16;
              t = get_options_0_0(t);
              t = oncetd_1_0(s_0, t);
              t = m_17;
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  e_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_10(e_17, t);
              ;
              LocalPopChoice(r_16);
            }
          else
            {
              t = q_16;
              {
                ATerm w_17 = NULL,x_17 = NULL,q_7 = NULL;
                t = SSLgetAnnotations(v_22);
                x_17 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, w_22);
                q_7 = t;
                t = SSLsetAnnotations(q_7, x_17);
                {
                  ATerm s_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm a_18 = NULL;
                      a_18 = t;
                      t = term_b_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(v_0, t);
                      t = a_18;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = s_16;
                    }
                  t = has_significant_layout_0_0(t);
                  if(match_cons(t, sym_layout_1))
                    {
                      w_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_10(w_17, t);
                }
              }
            }
        }
      }
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,n_7 = NULL,y_7 = NULL,j_7 = NULL,s_7 = NULL;
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  if(match_cons(t, sym__2))
    {
      if(((y_6 != NULL) && (y_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_6 = ATgetArgument(t, 0);
      if(((a_7 != NULL) && (a_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(c_7));
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  t = not_null(a_7);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((l_6 != NULL) && (l_6 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        l_6 = ATgetFirst((ATermList) t);
      {
        ATerm t_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_16 = ATgetFirst((ATermList) t);
      if(((b_7 != NULL) && (b_7 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((s_7 != NULL) && (s_7 != t)))
    _fail(t);
  else
    s_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_6), not_null(b_7));
  if(((j_7 != NULL) && (j_7 != t)))
    _fail(t);
  else
    j_7 = t;
  t = SSLsetAnnotations(not_null(j_7), not_null(u_6));
  {
    ATerm f_23 (ATerm t)
    {
      ATerm s_23 (ATerm t_14, ATerm u_14, ATerm v_14, ATerm t)
      {
        ATerm d_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL,m_7 = NULL,l_7 = NULL;
        t = SSLgetAnnotations(t_14);
        d_15 = t;
        t = u_14;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_15 = ATgetFirst((ATermList) t);
            i_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_14);
        g_15 = t;
        t = (ATerm) ATinsert(CheckATermList(i_15), h_15);
        l_7 = t;
        t = SSLsetAnnotations(l_7, g_15);
        k_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_15, v_14);
        m_7 = t;
        t = SSLsetAnnotations(m_7, d_15);
        t = InsLayout_1_0(f_23, t);
        return(t);
      }
      ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
      r_15 = t;
      if(match_cons(t, sym__2))
        {
          p_15 = ATgetArgument(t, 0);
          q_15 = ATgetArgument(t, 1);
          t = p_15;
          if(match_cons(t, sym_H_2))
            {
              n_15 = ATgetArgument(t, 0);
              o_15 = ATgetArgument(t, 1);
              {
                ATerm v_16 = t;
                int w_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_1 = NULL,i_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                    t = InsLayout_1_0(f_23, t);
                    if(match_cons(t, sym__2))
                      {
                        h_1 = ATgetArgument(t, 0);
                        i_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, n_15, h_1), i_1);
                    ;
                    LocalPopChoice(w_16);
                  }
                else
                  {
                    t = v_16;
                    {
                      ATerm x_16 = t;
                      int y_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_23(r_15, p_15, q_15, t);
                          ;
                          LocalPopChoice(y_16);
                        }
                      else
                        {
                          t = x_16;
                          t = r_15;
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  n_15 = ATgetArgument(t, 0);
                  o_15 = ATgetArgument(t, 1);
                  {
                    ATerm z_16 = t;
                    int a_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_2 = NULL,w_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                        t = InsLayout_1_0(f_23, t);
                        if(match_cons(t, sym__2))
                          {
                            v_2 = ATgetArgument(t, 0);
                            w_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, n_15, v_2), w_2);
                        ;
                        LocalPopChoice(a_17);
                      }
                    else
                      {
                        t = z_16;
                        {
                          ATerm b_17 = t;
                          int c_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_23(r_15, p_15, q_15, t);
                              ;
                              LocalPopChoice(c_17);
                            }
                          else
                            {
                              t = b_17;
                              t = r_15;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      n_15 = ATgetArgument(t, 0);
                      o_15 = ATgetArgument(t, 1);
                      {
                        ATerm d_17 = t;
                        int f_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_5 = NULL,u_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                            t = InsLayout_1_0(f_23, t);
                            if(match_cons(t, sym__2))
                              {
                                t_5 = ATgetArgument(t, 0);
                                u_5 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, n_15, t_5), u_5);
                            ;
                            LocalPopChoice(f_17);
                          }
                        else
                          {
                            t = d_17;
                            {
                              ATerm g_17 = t;
                              int h_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = s_23(r_15, p_15, q_15, t);
                                  ;
                                  LocalPopChoice(h_17);
                                }
                              else
                                {
                                  t = g_17;
                                  t = r_15;
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          n_15 = ATgetArgument(t, 0);
                          o_15 = ATgetArgument(t, 1);
                          m_15 = ATgetArgument(t, 2);
                          {
                            ATerm i_17 = t;
                            int j_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_6 = NULL,i_6 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, m_15, q_15);
                                t = InsLayout_1_0(f_23, t);
                                if(match_cons(t, sym__2))
                                  {
                                    h_6 = ATgetArgument(t, 0);
                                    i_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, n_15, o_15, h_6), i_6);
                                ;
                                LocalPopChoice(j_17);
                              }
                            else
                              {
                                t = i_17;
                                {
                                  ATerm l_17 = t;
                                  int n_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = s_23(r_15, p_15, q_15, t);
                                      ;
                                      LocalPopChoice(n_17);
                                    }
                                  else
                                    {
                                      t = l_17;
                                      t = r_15;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              n_15 = ATgetArgument(t, 0);
                              o_15 = ATgetArgument(t, 1);
                              {
                                ATerm o_17 = t;
                                int p_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_7 = NULL,a_8 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                    t = InsLayout_1_0(f_23, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        z_7 = ATgetArgument(t, 0);
                                        a_8 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, n_15, z_7), a_8);
                                    ;
                                    LocalPopChoice(p_17);
                                  }
                                else
                                  {
                                    t = o_17;
                                    {
                                      ATerm q_17 = t;
                                      int r_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = s_23(r_15, p_15, q_15, t);
                                          ;
                                          LocalPopChoice(r_17);
                                        }
                                      else
                                        {
                                          t = q_17;
                                          t = r_15;
                                        }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  n_15 = ATgetArgument(t, 0);
                                  o_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_17 = t;
                                    int t_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_8 = NULL,o_8 = NULL,u_8 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, n_15, q_15);
                                        t = InsLayout_1_0(f_23, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            l_8 = ATgetArgument(t, 0);
                                            {
                                              ATerm u_17 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                        t = InsLayout_1_0(f_23, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            o_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, l_8, o_8), u_8);
                                        ;
                                        LocalPopChoice(t_17);
                                      }
                                    else
                                      {
                                        t = s_17;
                                        {
                                          ATerm v_17 = t;
                                          int y_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = s_23(r_15, p_15, q_15, t);
                                              ;
                                              LocalPopChoice(y_17);
                                            }
                                          else
                                            {
                                              t = v_17;
                                              t = r_15;
                                            }
                                        }
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      n_15 = ATgetArgument(t, 0);
                                      o_15 = ATgetArgument(t, 1);
                                      {
                                        ATerm z_17 = t;
                                        int b_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm f_10 = NULL,i_10 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                            t = InsLayout_1_0(f_23, t);
                                            if(match_cons(t, sym__2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                i_10 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, n_15, f_10), i_10);
                                            ;
                                            LocalPopChoice(b_18);
                                          }
                                        else
                                          {
                                            t = z_17;
                                            {
                                              ATerm c_18 = t;
                                              int d_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = s_23(r_15, p_15, q_15, t);
                                                  ;
                                                  LocalPopChoice(d_18);
                                                }
                                              else
                                                {
                                                  t = c_18;
                                                  t = r_15;
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          n_15 = ATgetArgument(t, 0);
                                          o_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_18 = t;
                                            int f_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_11 = NULL,t_11 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                                t = InsLayout_1_0(f_23, t);
                                                if(match_cons(t, sym__2))
                                                  {
                                                    r_11 = ATgetArgument(t, 0);
                                                    t_11 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, n_15, r_11), t_11);
                                                ;
                                                LocalPopChoice(f_18);
                                              }
                                            else
                                              {
                                                t = e_18;
                                                {
                                                  ATerm g_18 = t;
                                                  int h_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_23(r_15, p_15, q_15, t);
                                                      ;
                                                      LocalPopChoice(h_18);
                                                    }
                                                  else
                                                    {
                                                      t = g_18;
                                                      t = r_15;
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              n_15 = ATgetArgument(t, 0);
                                              o_15 = ATgetArgument(t, 1);
                                              {
                                                ATerm i_18 = t;
                                                int j_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm m_13 = NULL,p_13 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                                    t = InsLayout_1_0(f_23, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        m_13 = ATgetArgument(t, 0);
                                                        p_13 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, n_15, m_13), p_13);
                                                    ;
                                                    LocalPopChoice(j_18);
                                                  }
                                                else
                                                  {
                                                    t = i_18;
                                                    {
                                                      ATerm l_18 = t;
                                                      int m_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_23(r_15, p_15, q_15, t);
                                                          ;
                                                          LocalPopChoice(m_18);
                                                        }
                                                      else
                                                        {
                                                          t = l_18;
                                                          t = r_15;
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  n_15 = ATgetArgument(t, 0);
                                                  o_15 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm n_18 = t;
                                                    int o_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm x_15 = NULL,g_16 = NULL;
                                                        t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                                        t = InsLayout_1_0(f_23, t);
                                                        if(match_cons(t, sym__2))
                                                          {
                                                            x_15 = ATgetArgument(t, 0);
                                                            g_16 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, n_15, x_15), g_16);
                                                        ;
                                                        LocalPopChoice(o_18);
                                                      }
                                                    else
                                                      {
                                                        t = n_18;
                                                        {
                                                          ATerm p_18 = t;
                                                          int q_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = s_23(r_15, p_15, q_15, t);
                                                              ;
                                                              LocalPopChoice(q_18);
                                                            }
                                                          else
                                                            {
                                                              t = p_18;
                                                              t = r_15;
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm r_18 = t;
                                                  int s_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_23(r_15, p_15, q_15, t);
                                                      ;
                                                      LocalPopChoice(s_18);
                                                    }
                                                  else
                                                    {
                                                      t = r_18;
                                                      t = r_15;
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
          t = r_15;
        }
      return(t);
    }
    t = f_23(t);
    if(((t_6 != NULL) && (t_6 != t)))
      _fail(t);
    else
      t_6 = t;
    if(match_cons(t, sym__2))
      {
        if(((q_6 != NULL) && (q_6 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          q_6 = ATgetArgument(t, 0);
        if(((r_6 != NULL) && (r_6 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          r_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(t_6));
    if(((o_6 != NULL) && (o_6 != t)))
      _fail(t);
    else
      o_6 = t;
    t = not_null(q_6);
    {
      ATerm u_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_18 = ATgetFirst((ATermList) t);
                  ATerm z_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(q_6));
          ;
          LocalPopChoice(v_18);
        }
      else
        {
          t = u_18;
        }
      if(((s_6 != NULL) && (s_6 != t)))
        _fail(t);
      else
        s_6 = t;
      if(((y_7 != NULL) && (y_7 != t)))
        _fail(t);
      else
        y_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), not_null(r_6));
      if(((n_7 != NULL) && (n_7 != t)))
        _fail(t);
      else
        n_7 = t;
      t = SSLsetAnnotations(not_null(n_7), not_null(o_6));
      if(match_cons(t, sym__2))
        {
          if(((m_6 != NULL) && (m_6 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_6 = ATgetArgument(t, 0);
          {
            ATerm a_19 = ATgetArgument(t, 1);
            if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
              {
                if(((n_6 != NULL) && (n_6 != ATgetFirst((ATermList) a_19))))
                  _fail(ATgetFirst((ATermList) a_19));
                else
                  n_6 = ATgetFirst((ATermList) a_19);
                {
                  ATerm b_19 = (ATerm) ATgetNext((ATermList) a_19);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_6)), not_null(m_6)), not_null(l_6));
      t = filter_1_0(r_0, t);
      t = flat_list_0_0(t);
      if(((z_22 != NULL) && (z_22 != t)))
        _fail(t);
      else
        z_22 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_22 = ATgetFirst((ATermList) t);
          y_22 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(y_22);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              ATerm c_19 = t;
              int e_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(x_22);
                  ;
                  LocalPopChoice(e_19);
                }
              else
                {
                  t = c_19;
                  t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), not_null(z_22));
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), not_null(z_22));
            }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), not_null(z_22));
        }
    }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm z_136 (ATerm), ATerm t)
{
  ATerm x_23 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        t = z_136(t);
        v_23 = t;
        t = (ATerm) ATinsert(ATempty, v_23);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        {
          ATerm k_18 = NULL,t_18 = NULL;
          t_18 = t;
          t = SSL_explode_term(t_18);
          if(match_cons(t, sym__2))
            {
              ATerm h_19 = ATgetArgument(t, 0);
              k_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_18;
          t = foldr_3_0(b_1, conc_0_0, x_23, t);
        }
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,q_8 = NULL;
  e_24 = t;
  if(match_cons(t, sym_amb_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, d_24);
  q_8 = t;
  t = SSLsetAnnotations(q_8, c_24);
  t = term_s_14;
  z_23 = t;
  t = (ATerm) ATinsert(ATempty, term_i_19);
  a_24 = t;
  t = SSL_printnl(z_23, a_24);
  t = term_y_14;
  y_23 = t;
  t = SSL_exit(y_23);
  t = (ATerm) ATinsert(ATempty, term_i_19);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,h_26 = NULL;
  e_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_26;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_26 = ATgetFirst((ATermList) t);
          h_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_19 = NULL,i_20 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(e_26);
            z_19 = t;
            t = f_26;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_26;
            t = flat_list_0_0(t);
            i_20 = t;
            t = (ATerm) ATinsert(CheckATermList(i_20), f_26);
            t_8 = t;
            t = SSLsetAnnotations(t_8, z_19);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,m_21 = NULL,v_8 = NULL;
                  t = SSLgetAnnotations(e_26);
                  b_21 = t;
                  t = f_26;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = f_26;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm n_19 = ATgetFirst((ATermList) t);
                          ATerm o_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = f_26;
                    }
                  t = (ATerm) ATinsert(CheckATermList(h_26), f_26);
                  v_8 = t;
                  t = SSLsetAnnotations(v_8, b_21);
                  m_21 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_21 = ATgetFirst((ATermList) t);
                      {
                        ATerm p_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = m_21;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm q_19 = ATgetFirst((ATermList) t);
                      z_20 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, a_21, z_20);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                  {
                    ATerm q_22 = NULL,t_22 = NULL,w_8 = NULL;
                    t = SSLgetAnnotations(e_26);
                    q_22 = t;
                    t = h_26;
                    t = flat_list_0_0(t);
                    t_22 = t;
                    t = (ATerm) ATinsert(CheckATermList(t_22), f_26);
                    w_8 = t;
                    t = SSLsetAnnotations(w_8, q_22);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,t_26 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      t_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
      {
        ATerm w_26 = NULL,x_26 = NULL;
        t = term_r_14;
        t = d_0(t);
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_26, x_26);
        t = index_0_0(t);
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_26, w_26);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm z_26 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          t_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_r_14;
      t = d_0(t);
      z_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_26, z_26);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = bottomup_1_0(z_108, t);
    return(t);
  }
  t = SRTS_all(c_1, t);
  t = z_108(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  m_29 = t;
  if(match_cons(t, sym_Arg_1))
    {
      n_29 = ATgetArgument(t, 0);
      {
        ATerm f_24 = NULL,b_9 = NULL;
        t = SSLgetAnnotations(m_29);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, n_29);
        b_9 = t;
        t = SSLsetAnnotations(b_9, f_24);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          n_29 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
          {
            ATerm x_24 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(m_29);
            x_24 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, n_29, l_29);
            d_9 = t;
            t = SSLsetAnnotations(d_9, x_24);
          }
        }
      else
        {
          ATerm x_25 = NULL,e_9 = NULL;
          if(match_cons(t, sym_S_1))
            {
              n_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_29);
          x_25 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, n_29);
          e_9 = t;
          t = SSLsetAnnotations(e_9, x_25);
        }
    }
  return(t);
}
ATerm r_33 (ATerm q_29, ATerm r_29, ATerm y_29, ATerm t)
{
  ATerm o_30 = NULL,g_9 = NULL;
  t = SSLgetAnnotations(q_29);
  o_30 = t;
  t = r_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_29, y_29);
  g_9 = t;
  t = SSLsetAnnotations(g_9, o_30);
  return(t);
}
ATerm o_10 (ATerm b_38, ATerm a_38, ATerm t)
{
  ATerm y_27 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,f_9 = NULL,l_9 = NULL;
  if(((f_28 != NULL) && (f_28 != t)))
    _fail(t);
  else
    f_28 = t;
  if(match_cons(t, sym__2))
    {
      if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_28 = ATgetArgument(t, 0);
      if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(f_28));
  if(((g_28 != NULL) && (g_28 != t)))
    _fail(t);
  else
    g_28 = t;
  t = not_null(j_28);
  t = collect_p__1_0(d_1, t);
  if(((l_28 != NULL) && (l_28 != t)))
    _fail(t);
  else
    l_28 = t;
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_28), not_null(k_28));
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  t = SSLsetAnnotations(not_null(f_9), not_null(g_28));
  {
    ATerm q_33 (ATerm t)
    {
      ATerm s_33 (ATerm t_30, ATerm v_30, ATerm y_30, ATerm z_30, ATerm t)
      {
        ATerm c_31 = NULL,k_31 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, v_30, z_30);
        t = q_33(t);
        if(match_cons(t, sym__2))
          {
            c_31 = ATgetArgument(t, 0);
            k_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_31), (ATerm) ATmakeAppl(sym_Arg_1, t_30)), (ATerm) ATinsert(CheckATermList(k_31), y_30));
        return(t);
      }
      ATerm t_33 (ATerm p_31, ATerm q_31, ATerm u_31, ATerm v_31, ATerm y_31, ATerm t)
      {
        ATerm e_32 = NULL,g_32 = NULL;
        t = q_31;
        if(((y_27 != NULL) && (y_27 != t)))
          _fail(t);
        else
          y_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_31, y_31);
        t = q_33(t);
        if(match_cons(t, sym__2))
          {
            e_32 = ATgetArgument(t, 0);
            g_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_32), (ATerm) ATmakeAppl(sym_Arg2_2, p_31, q_31)), (ATerm) ATinsert(CheckATermList(g_32), v_31));
        return(t);
      }
      ATerm u_33 (ATerm k_32, ATerm l_32, ATerm o_32, ATerm t)
      {
        ATerm r_32 = NULL,t_32 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, l_32, o_32);
        t = q_33(t);
        if(match_cons(t, sym__2))
          {
            r_32 = ATgetArgument(t, 0);
            t_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_32), k_32), t_32);
        return(t);
      }
      ATerm w_32 = NULL,z_32 = NULL,a_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
      a_33 = t;
      if(match_cons(t, sym__2))
        {
          e_33 = ATgetArgument(t, 0);
          h_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_33 = ATgetFirst((ATermList) t);
          j_33 = (ATerm) ATgetNext((ATermList) t);
          t = e_33;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_33 = ATgetFirst((ATermList) t);
              g_33 = (ATerm) ATgetNext((ATermList) t);
              t = f_33;
              if(match_cons(t, sym_Arg_1))
                {
                  w_32 = ATgetArgument(t, 0);
                  {
                    ATerm r_19 = t;
                    int s_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_33(a_33, e_33, h_33, t);
                        ;
                        LocalPopChoice(s_19);
                      }
                    else
                      {
                        t = r_19;
                        {
                          ATerm t_19 = t;
                          int v_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_33(w_32, g_33, i_33, j_33, t);
                              ;
                              LocalPopChoice(v_19);
                            }
                          else
                            {
                              t = t_19;
                              t = u_33(f_33, g_33, j_33, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      w_32 = ATgetArgument(t, 0);
                      z_32 = ATgetArgument(t, 1);
                      {
                        ATerm w_19 = t;
                        int x_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = r_33(a_33, e_33, h_33, t);
                            ;
                            LocalPopChoice(x_19);
                          }
                        else
                          {
                            t = w_19;
                            {
                              ATerm y_19 = t;
                              int a_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = t_33(w_32, z_32, g_33, i_33, j_33, t);
                                  ;
                                  LocalPopChoice(a_20);
                                }
                              else
                                {
                                  t = y_19;
                                  t = u_33(f_33, g_33, j_33, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_20 = t;
                      int c_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_33(a_33, e_33, h_33, t);
                          ;
                          LocalPopChoice(c_20);
                        }
                      else
                        {
                          t = b_20;
                          t = u_33(f_33, g_33, j_33, t);
                        }
                    }
                }
            }
          else
            {
              t = r_33(a_33, e_33, h_33, t);
            }
        }
      else
        {
          t = e_33;
          t = r_33(a_33, e_33, h_33, t);
        }
      return(t);
    }
    t = q_33(t);
    if(match_cons(t, sym__2))
      {
        ATerm d_20 = ATgetArgument(t, 0);
        if(((e_28 != NULL) && (e_28 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          e_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_38), not_null(e_28));
  }
  return(t);
}
ATerm instantiate_list_1_0 (ATerm f_137 (ATerm), ATerm t)
{
  ATerm b_35 (ATerm t)
  {
    ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
    w_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_34;
      }
    else
      {
        ATerm q_26 = NULL,a_27 = NULL,c_27 = NULL,o_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((x_34 != NULL) && (x_34 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              x_34 = ATgetFirst((ATermList) t);
            if(((y_34 != NULL) && (y_34 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              y_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(w_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_20 = ATgetFirst((ATermList) t);
            ATerm f_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(not_null(w_34));
        if(((q_26 != NULL) && (q_26 != t)))
          _fail(t);
        else
          q_26 = t;
        t = term_r_14;
        t = f_137(t);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm g_20 = t;
            int h_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_20 = t;
                int k_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(x_34));
                      return(t);
                    }
                    t = Instantiate_1_0(f_1, t);
                    ;
                    LocalPopChoice(k_20);
                  }
                else
                  {
                    t = j_20;
                    t = flat_list_0_0(t);
                  }
                ;
                LocalPopChoice(h_20);
              }
            else
              {
                t = g_20;
              }
            return(t);
          }
          t = bottomup_1_0(e_1, t);
          if(((c_27 != NULL) && (c_27 != t)))
            _fail(t);
          else
            c_27 = t;
          t = not_null(y_34);
          t = b_35(t);
          if(((a_27 != NULL) && (a_27 != t)))
            _fail(t);
          else
            a_27 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(a_27)), not_null(c_27));
          if(((o_9 != NULL) && (o_9 != t)))
            _fail(t);
          else
            o_9 = t;
          t = SSLsetAnnotations(not_null(o_9), not_null(q_26));
        }
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
ATerm q_10 (ATerm q_40, ATerm r_40, ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,m_35 = NULL,x_35 = NULL;
  ATerm n_1 (ATerm t)
  {
    t = not_null(j_35);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_40), (ATerm) ATinsert(ATempty, not_null(p_40)));
  t = conc_0_0(t);
  if(((m_35 != NULL) && (m_35 != t)))
    _fail(t);
  else
    m_35 = t;
  t = not_null(q_40);
  if(match_cons(t, sym_iter_1))
    {
      x_35 = ATgetArgument(t, 0);
      {
        ATerm k_27 = NULL,q_9 = NULL;
        t = SSLgetAnnotations(not_null(q_40));
        k_27 = t;
        t = not_null(x_35);
        if(((i_35 != NULL) && (i_35 != t)))
          _fail(t);
        else
          i_35 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, not_null(x_35));
        q_9 = t;
        t = SSLsetAnnotations(q_9, k_27);
      }
    }
  else
    {
      ATerm o_27 = NULL,r_9 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          if(((x_35 != NULL) && (x_35 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(q_40));
      o_27 = t;
      t = not_null(x_35);
      if(((i_35 != NULL) && (i_35 != t)))
        _fail(t);
      else
        i_35 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(x_35));
      r_9 = t;
      t = SSLsetAnnotations(r_9, o_27);
    }
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_40), not_null(m_35));
  t = get_pp_entry_0_0(t);
  if(((j_35 != NULL) && (j_35 != t)))
    _fail(t);
  else
    j_35 = t;
  t = not_null(r_40);
  {
    ATerm k_1 (ATerm t)
    {
      ATerm y_35 = NULL;
      y_35 = t;
      t = (ATerm) ATmakeAppl(sym__4, not_null(i_35), y_35, not_null(m_35), term_y_14);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(k_1, t);
    t = instantiate_list_1_0(n_1, t);
  }
  return(t);
}
ATerm d_40 (ATerm m_36, ATerm o_36, ATerm q_36, ATerm t)
{
  ATerm w_36 = NULL,v_9 = NULL;
  t = SSLgetAnnotations(q_36);
  w_36 = t;
  t = o_36;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_36), m_36);
  v_9 = t;
  t = SSLsetAnnotations(v_9, w_36);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm h_137 (ATerm), ATerm t)
{
  ATerm a_40 (ATerm t)
  {
    ATerm i_40 (ATerm d_37, ATerm e_37, ATerm l_37, ATerm z_37, ATerm t)
    {
      ATerm d_39 = NULL,f_39 = NULL,h_39 = NULL,w_9 = NULL;
      t = not_null(z_37);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm l_20 = ATgetFirst((ATermList) t);
          ATerm m_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(z_37));
      if(((d_39 != NULL) && (d_39 != t)))
        _fail(t);
      else
        d_39 = t;
      t = term_r_14;
      t = h_137(t);
      {
        ATerm o_1 (ATerm t)
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_37)), not_null(d_37));
                    return(t);
                  }
                  t = Instantiate_1_0(p_1, t);
                  ;
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = p_20;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
            }
          return(t);
        }
        t = bottomup_1_0(o_1, t);
        if(((h_39 != NULL) && (h_39 != t)))
          _fail(t);
        else
          h_39 = t;
        t = not_null(l_37);
        t = a_40(t);
        if(((f_39 != NULL) && (f_39 != t)))
          _fail(t);
        else
          f_39 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(f_39)), not_null(h_39));
        if(((w_9 != NULL) && (w_9 != t)))
          _fail(t);
        else
          w_9 = t;
        t = SSLsetAnnotations(not_null(w_9), not_null(d_39));
      }
      return(t);
    }
    ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,r_39 = NULL,s_39 = NULL;
    n_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_39 = ATgetFirst((ATermList) t);
            p_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_39;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_39 = ATgetFirst((ATermList) t);
            s_39 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm r_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_40(o_39, p_39, n_39, t);
                  ;
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  t = i_40(o_39, r_39, s_39, n_39, t);
                }
            }
          }
        else
          {
            t = d_40(o_39, p_39, n_39, t);
          }
      }
    return(t);
  }
  t = a_40(t);
  return(t);
}
ATerm r_10 (ATerm w_60, ATerm x_60, ATerm t)
{
  t = SSL_mod(w_60, x_60);
  return(t);
}
ATerm s_10 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_41 = NULL,r_41 = NULL,t_41 = NULL,f_42 = NULL;
      t = term_v_20;
      t_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_41, term_v_20);
      t = r_10(w_41, t_41, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_r_14;
      t = a_107(t);
      l_41 = t;
      t = term_r_14;
      t = b_107(t);
      r_41 = t;
      t = (ATerm) ATmakeAppl(sym__4, l_41, x_41, r_41, term_v_20);
      t = symbol2abox_0_0(t);
      f_42 = t;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_42;
            {
              ATerm y_20 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_27 = NULL;
                  t_27 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = t_27;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm c_21 = ATgetFirst((ATermList) t);
                          ATerm d_21 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = t_27;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = y_20;
                }
              t = (ATerm) ATinsert(ATempty, f_42);
            }
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            t = f_42;
          }
      }
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm l_42 = NULL,r_42 = NULL,n_43 = NULL;
        t = term_r_14;
        t = z_106(t);
        l_42 = t;
        t = term_r_14;
        t = b_107(t);
        r_42 = t;
        t = (ATerm) ATmakeAppl(sym__4, l_42, x_41, r_42, term_y_14);
        t = symbol2abox_0_0(t);
        n_43 = t;
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_43;
              {
                ATerm g_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_28 = NULL;
                    a_28 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = a_28;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm h_21 = ATgetFirst((ATermList) t);
                            ATerm i_21 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = a_28;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_21;
                  }
                t = (ATerm) ATinsert(ATempty, n_43);
              }
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              t = n_43;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t)
{
  ATerm d_44 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm t_43 = NULL,w_43 = NULL,x_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,e_10 = NULL;
          t = t_116(t);
          b_44 = t;
          if(match_cons(t, sym__2))
            {
              w_43 = ATgetArgument(t, 0);
              x_43 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_44);
          t_43 = t;
          t = w_43;
          t = v_116(t);
          z_43 = t;
          t = x_43;
          t = d_44(t);
          a_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_43, a_44);
          e_10 = t;
          t = SSLsetAnnotations(e_10, t_43);
          t = u_116(t);
        }
      }
    return(t);
  }
  t = d_44(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      ATerm n_21 = ATgetArgument(t, 1);
      if(((ATgetType(n_21) != AT_LIST) || !(ATisEmpty(n_21))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm n_44 = NULL,q_44 = NULL,c_45 = NULL,d_45 = NULL,f_45 = NULL;
  if(match_cons(t, sym__2))
    {
      n_44 = ATgetArgument(t, 0);
      {
        ATerm w_21 = ATgetArgument(t, 1);
        if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
          {
            q_44 = ATgetFirst((ATermList) w_21);
            c_45 = (ATerm) ATgetNext((ATermList) w_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_y_14;
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_44, term_y_14);
  t = i_12(n_44, f_45, t);
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_44, q_44), (ATerm) ATmakeAppl(sym__2, d_45, c_45));
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm g_45 = NULL,i_45 = NULL;
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_45), g_45);
  return(t);
}
ATerm nzip_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm l_44 = NULL;
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, l_44);
  t = genzip_4_0(q_1, r_1, s_1, e_117, t);
  return(t);
}
ATerm w_10 (ATerm n_41, ATerm o_41, ATerm m_41, ATerm s_41, ATerm t)
{
  ATerm o_45 = NULL,s_45 = NULL,v_45 = NULL,w_45 = NULL,q_46 = NULL,r_46 = NULL;
  ATerm q_2 (ATerm t)
  {
    t = not_null(v_45);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_41), (ATerm) ATinsert(ATempty, not_null(s_41)));
  t = conc_0_0(t);
  if(((w_45 != NULL) && (w_45 != t)))
    _fail(t);
  else
    w_45 = t;
  t = not_null(n_41);
  if(match_cons(t, sym_iter_sep_2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
      {
        ATerm n_28 = NULL,h_10 = NULL;
        t = SSLgetAnnotations(not_null(n_41));
        n_28 = t;
        t = not_null(q_46);
        if(((o_45 != NULL) && (o_45 != t)))
          _fail(t);
        else
          o_45 = t;
        t = not_null(r_46);
        if(((s_45 != NULL) && (s_45 != t)))
          _fail(t);
        else
          s_45 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(q_46), not_null(r_46));
        h_10 = t;
        t = SSLsetAnnotations(h_10, n_28);
      }
    }
  else
    {
      ATerm f_29 = NULL,t_10 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          if(((q_46 != NULL) && (q_46 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_46 = ATgetArgument(t, 0);
          if(((r_46 != NULL) && (r_46 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(n_41));
      f_29 = t;
      t = not_null(q_46);
      if(((o_45 != NULL) && (o_45 != t)))
        _fail(t);
      else
        o_45 = t;
      t = not_null(r_46);
      if(((s_45 != NULL) && (s_45 != t)))
        _fail(t);
      else
        s_45 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(q_46), not_null(r_46));
      t_10 = t;
      t = SSLsetAnnotations(t_10, f_29);
    }
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_41), not_null(w_45));
  t = get_pp_entry_0_0(t);
  if(((v_45 != NULL) && (v_45 != t)))
    _fail(t);
  else
    v_45 = t;
  t = not_null(o_41);
  {
    ATerm u_1 (ATerm t)
    {
      ATerm s_46 = NULL,t_46 = NULL;
      ATerm z_1 (ATerm t)
      {
        t = not_null(o_45);
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = not_null(s_45);
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = not_null(w_45);
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = not_null(s_41);
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          if(((s_46 != NULL) && (s_46 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_46 = ATgetArgument(t, 0);
          if(((t_46 != NULL) && (t_46 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_10(z_1, a_2, e_2, p_2, not_null(s_46), not_null(t_46), t);
      return(t);
    }
    t = nzip_1_0(u_1, t);
    t = instantiate_sep_list_1_0(q_2, t);
  }
  return(t);
}
ATerm y_10 (ATerm e_60, ATerm f_60, ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_60, f_60);
      ;
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      t = SSL_subtr(e_60, f_60);
    }
  return(t);
}
ATerm z_10 (ATerm i_47, ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm w_46 = NULL,y_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_47, term_v_20);
  t = geq_0_0(t);
  t = term_y_14;
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_47, term_y_14);
  t = y_10(i_47, y_46, t);
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_46, h_47);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  if(match_cons(t, sym__2))
    {
      b_47 = ATgetArgument(t, 0);
      {
        ATerm a_22 = ATgetArgument(t, 1);
        if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
          {
            c_47 = ATgetFirst((ATermList) a_22);
            d_47 = (ATerm) ATgetNext((ATermList) a_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_10(b_47, c_47, d_47, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm z_46 = NULL;
  t = repeat_1_0(r_2, t);
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      if(((ATgetType(b_22) != AT_INT) || (ATgetInt((ATermInt) b_22) != 1)))
        _fail(t);
      {
        ATerm c_22 = ATgetArgument(t, 1);
        if(((ATgetType(c_22) == AT_LIST) && !(ATisEmpty(c_22))))
          {
            z_46 = ATgetFirst((ATermList) c_22);
            {
              ATerm d_22 = (ATerm) ATgetNext((ATermList) c_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_46;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm e_22 = t;
  if((PushChoice() == 0))
    {
      ATerm k_64 = NULL,o_64 = NULL,p_64 = NULL,h_11 = NULL;
      p_64 = t;
      if(match_cons(t, sym_lit_1))
        {
          o_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_64);
      k_64 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, o_64);
      h_11 = t;
      t = SSLsetAnnotations(h_11, k_64);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_22;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm f_22 = t;
  if((PushChoice() == 0))
    {
      ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,j_11 = NULL;
      s_64 = t;
      if(match_cons(t, sym_lit_1))
        {
          r_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_64);
      q_64 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, r_64);
      j_11 = t;
      t = SSLsetAnnotations(j_11, q_64);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_22;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,x_62 = NULL,f_63 = NULL,i_63 = NULL,k_63 = NULL,o_63 = NULL,s_63 = NULL,u_63 = NULL;
  if(((f_63 != NULL) && (f_63 != t)))
    _fail(t);
  else
    f_63 = t;
  if(match_cons(t, sym__4))
    {
      if(((i_63 != NULL) && (i_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_63 = ATgetArgument(t, 0);
      if(((o_63 != NULL) && (o_63 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_63 = ATgetArgument(t, 1);
      if(((s_63 != NULL) && (s_63 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        s_63 = ATgetArgument(t, 2);
      if(((u_63 != NULL) && (u_63 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        u_63 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = not_null(i_63);
  if(match_cons(t, sym_seq_1))
    {
      k_63 = ATgetArgument(t, 0);
      {
        ATerm b_64 = NULL,c_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL;
        ATerm u_2 (ATerm t)
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_22 = t;
              int j_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_3 (ATerm t)
                  {
                    t = not_null(c_64);
                    return(t);
                  }
                  t = Instantiate_1_0(a_3, t);
                  ;
                  LocalPopChoice(j_22);
                }
              else
                {
                  t = i_22;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
            }
          return(t);
        }
        t = not_null(o_63);
        if(match_cons(t, sym_appl_2))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            if(((x_62 != NULL) && (x_62 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              x_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_63), (ATerm) ATinsert(ATempty, not_null(u_63)));
        t = conc_0_0(t);
        if(((j_64 != NULL) && (j_64 != t)))
          _fail(t);
        else
          j_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, not_null(k_63)), not_null(j_64));
        t = get_pp_entry_0_0(t);
        if(((b_64 != NULL) && (b_64 != t)))
          _fail(t);
        else
          b_64 = t;
        t = not_null(k_63);
        t = filter_1_0(s_2, t);
        if(((h_64 != NULL) && (h_64 != t)))
          _fail(t);
        else
          h_64 = t;
        t = not_null(x_62);
        t = filter_1_0(t_2, t);
        if(((i_64 != NULL) && (i_64 != t)))
          _fail(t);
        else
          i_64 = t;
        t = (ATerm) ATmakeAppl(sym__4, not_null(h_64), not_null(i_64), not_null(j_64), term_y_14);
        t = seq2abox_0_0(t);
        if(((c_64 != NULL) && (c_64 != t)))
          _fail(t);
        else
          c_64 = t;
        t = not_null(b_64);
        t = bottomup_1_0(u_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          k_63 = ATgetArgument(t, 0);
          t_62 = ATgetArgument(t, 1);
          {
            ATerm n_30 = NULL,q_30 = NULL,u_30 = NULL;
            ATerm s_40 (ATerm t)
            {
              ATerm w_30 = NULL,x_30 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,l_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,w_31 = NULL,x_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
              if(match_cons(t, sym__4))
                {
                  r_31 = ATgetArgument(t, 0);
                  s_31 = ATgetArgument(t, 1);
                  a_32 = ATgetArgument(t, 2);
                  b_32 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = s_31;
              if(match_cons(t, sym_appl_2))
                {
                  t_31 = ATgetArgument(t, 0);
                  w_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_31;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_31 = ATgetFirst((ATermList) t);
                  z_31 = (ATerm) ATgetNext((ATermList) t);
                  t = z_31;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = t_31;
                      if(match_cons(t, sym_prod_3))
                        {
                          d_31 = ATgetArgument(t, 0);
                          g_31 = ATgetArgument(t, 1);
                          l_31 = ATgetArgument(t, 2);
                          t = g_31;
                          if(match_cons(t, sym_alt_2))
                            {
                              h_31 = ATgetArgument(t, 0);
                              i_31 = ATgetArgument(t, 1);
                              t = d_31;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  e_31 = ATgetFirst((ATermList) t);
                                  f_31 = (ATerm) ATgetNext((ATermList) t);
                                  t = f_31;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = r_31;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          w_30 = ATgetArgument(t, 0);
                                          x_30 = ATgetArgument(t, 1);
                                          {
                                            ATerm n_22 = t;
                                            int o_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = e_31;
                                                if((w_30 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = h_31;
                                                if((w_30 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = i_31;
                                                if((x_30 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, w_30, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_30), w_30, l_31), w_31), a_32, b_32);
                                                t = s_40(t);
                                                ;
                                                LocalPopChoice(o_22);
                                              }
                                            else
                                              {
                                                t = n_22;
                                                {
                                                  ATerm p_22 = t;
                                                  int r_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_33 = NULL,a_34 = NULL;
                                                      t = h_31;
                                                      if((w_30 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = i_31;
                                                      if((x_30 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = term_y_14;
                                                      a_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, b_32, term_y_14);
                                                      t = i_12(b_32, a_34, t);
                                                      z_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, x_30, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_31), x_30, l_31), w_31), a_32, z_33);
                                                      t = s_40(t);
                                                      ;
                                                      LocalPopChoice(r_22);
                                                    }
                                                  else
                                                    {
                                                      t = p_22;
                                                      {
                                                        ATerm t_34 = NULL;
                                                        ATerm b_3 (ATerm t)
                                                        {
                                                          ATerm s_22 = t;
                                                          int u_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_23 = t;
                                                              int b_23 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATinsert(ATempty, not_null(q_30));
                                                                    return(t);
                                                                  }
                                                                  t = Instantiate_1_0(c_3, t);
                                                                  ;
                                                                  LocalPopChoice(b_23);
                                                                }
                                                              else
                                                                {
                                                                  t = a_23;
                                                                  t = flat_list_0_0(t);
                                                                }
                                                              ;
                                                              LocalPopChoice(u_22);
                                                            }
                                                          else
                                                            {
                                                              t = s_22;
                                                            }
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_63), not_null(t_62)), not_null(a_32));
                                                        t = get_pp_entry_0_0(t);
                                                        if(((n_30 != NULL) && (n_30 != t)))
                                                          _fail(t);
                                                        else
                                                          n_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, not_null(r_31), not_null(x_31), not_null(a_32), term_y_14);
                                                        t = symbol2abox_0_0(t);
                                                        if(((q_30 != NULL) && (q_30 != t)))
                                                          _fail(t);
                                                        else
                                                          q_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), not_null(n_30));
                                                        t = index_0_0(t);
                                                        if(((t_34 != NULL) && (t_34 != t)))
                                                          _fail(t);
                                                        else
                                                          t_34 = t;
                                                        t = (ATerm) ATinsert(ATempty, not_null(t_34));
                                                        t = bottomup_1_0(b_3, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm s_35 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm c_23 = t;
                                            int d_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_23 = t;
                                                int g_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(q_30));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(e_3, t);
                                                    ;
                                                    LocalPopChoice(g_23);
                                                  }
                                                else
                                                  {
                                                    t = e_23;
                                                    t = flat_list_0_0(t);
                                                  }
                                                ;
                                                LocalPopChoice(d_23);
                                              }
                                            else
                                              {
                                                t = c_23;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_63), not_null(t_62)), not_null(a_32));
                                          t = get_pp_entry_0_0(t);
                                          if(((n_30 != NULL) && (n_30 != t)))
                                            _fail(t);
                                          else
                                            n_30 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, not_null(r_31), not_null(x_31), not_null(a_32), term_y_14);
                                          t = symbol2abox_0_0(t);
                                          if(((q_30 != NULL) && (q_30 != t)))
                                            _fail(t);
                                          else
                                            q_30 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), not_null(n_30));
                                          t = index_0_0(t);
                                          if(((s_35 != NULL) && (s_35 != t)))
                                            _fail(t);
                                          else
                                            s_35 = t;
                                          t = (ATerm) ATinsert(ATempty, not_null(s_35));
                                          t = bottomup_1_0(d_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm i_36 = NULL;
                                      ATerm f_3 (ATerm t)
                                      {
                                        ATerm h_23 = t;
                                        int i_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm k_23 = t;
                                            int n_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm g_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(q_30));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(g_3, t);
                                                ;
                                                LocalPopChoice(n_23);
                                              }
                                            else
                                              {
                                                t = k_23;
                                                t = flat_list_0_0(t);
                                              }
                                            ;
                                            LocalPopChoice(i_23);
                                          }
                                        else
                                          {
                                            t = h_23;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_63), not_null(t_62)), not_null(a_32));
                                      t = get_pp_entry_0_0(t);
                                      if(((n_30 != NULL) && (n_30 != t)))
                                        _fail(t);
                                      else
                                        n_30 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, not_null(r_31), not_null(x_31), not_null(a_32), term_y_14);
                                      t = symbol2abox_0_0(t);
                                      if(((q_30 != NULL) && (q_30 != t)))
                                        _fail(t);
                                      else
                                        q_30 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), not_null(n_30));
                                      t = index_0_0(t);
                                      if(((i_36 != NULL) && (i_36 != t)))
                                        _fail(t);
                                      else
                                        i_36 = t;
                                      t = (ATerm) ATinsert(ATempty, not_null(i_36));
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm b_37 = NULL;
                                  ATerm h_3 (ATerm t)
                                  {
                                    ATerm o_23 = t;
                                    int r_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm t_23 = t;
                                        int w_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm i_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(q_30));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(i_3, t);
                                            ;
                                            LocalPopChoice(w_23);
                                          }
                                        else
                                          {
                                            t = t_23;
                                            t = flat_list_0_0(t);
                                          }
                                        ;
                                        LocalPopChoice(r_23);
                                      }
                                    else
                                      {
                                        t = o_23;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_63), not_null(t_62)), not_null(a_32));
                                  t = get_pp_entry_0_0(t);
                                  if(((n_30 != NULL) && (n_30 != t)))
                                    _fail(t);
                                  else
                                    n_30 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, not_null(r_31), not_null(x_31), not_null(a_32), term_y_14);
                                  t = symbol2abox_0_0(t);
                                  if(((q_30 != NULL) && (q_30 != t)))
                                    _fail(t);
                                  else
                                    q_30 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), not_null(n_30));
                                  t = index_0_0(t);
                                  if(((b_37 != NULL) && (b_37 != t)))
                                    _fail(t);
                                  else
                                    b_37 = t;
                                  t = (ATerm) ATinsert(ATempty, not_null(b_37));
                                  t = bottomup_1_0(h_3, t);
                                }
                            }
                          else
                            {
                              ATerm p_37 = NULL;
                              ATerm j_3 (ATerm t)
                              {
                                ATerm b_24 = t;
                                int g_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_24 = t;
                                    int i_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm k_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(q_30));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(k_3, t);
                                        ;
                                        LocalPopChoice(i_24);
                                      }
                                    else
                                      {
                                        t = h_24;
                                        t = flat_list_0_0(t);
                                      }
                                    ;
                                    LocalPopChoice(g_24);
                                  }
                                else
                                  {
                                    t = b_24;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_63), not_null(t_62)), not_null(a_32));
                              t = get_pp_entry_0_0(t);
                              if(((n_30 != NULL) && (n_30 != t)))
                                _fail(t);
                              else
                                n_30 = t;
                              t = (ATerm) ATmakeAppl(sym__4, not_null(r_31), not_null(x_31), not_null(a_32), term_y_14);
                              t = symbol2abox_0_0(t);
                              if(((q_30 != NULL) && (q_30 != t)))
                                _fail(t);
                              else
                                q_30 = t;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), not_null(n_30));
                              t = index_0_0(t);
                              if(((p_37 != NULL) && (p_37 != t)))
                                _fail(t);
                              else
                                p_37 = t;
                              t = (ATerm) ATinsert(ATempty, not_null(p_37));
                              t = bottomup_1_0(j_3, t);
                            }
                        }
                      else
                        {
                          ATerm g_38 = NULL;
                          ATerm l_3 (ATerm t)
                          {
                            ATerm j_24 = t;
                            int k_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_24 = t;
                                int n_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(q_30));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(n_3, t);
                                    ;
                                    LocalPopChoice(n_24);
                                  }
                                else
                                  {
                                    t = l_24;
                                    t = flat_list_0_0(t);
                                  }
                                ;
                                LocalPopChoice(k_24);
                              }
                            else
                              {
                                t = j_24;
                              }
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_63), not_null(t_62)), not_null(a_32));
                          t = get_pp_entry_0_0(t);
                          if(((n_30 != NULL) && (n_30 != t)))
                            _fail(t);
                          else
                            n_30 = t;
                          t = (ATerm) ATmakeAppl(sym__4, not_null(r_31), not_null(x_31), not_null(a_32), term_y_14);
                          t = symbol2abox_0_0(t);
                          if(((q_30 != NULL) && (q_30 != t)))
                            _fail(t);
                          else
                            q_30 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), not_null(n_30));
                          t = index_0_0(t);
                          if(((g_38 != NULL) && (g_38 != t)))
                            _fail(t);
                          else
                            g_38 = t;
                          t = (ATerm) ATinsert(ATempty, not_null(g_38));
                          t = bottomup_1_0(l_3, t);
                        }
                    }
                  else
                    {
                      t = t_31;
                      if(match_cons(t, sym_prod_3))
                        {
                          d_31 = ATgetArgument(t, 0);
                          g_31 = ATgetArgument(t, 1);
                          l_31 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = r_31;
                      if(match_cons(t, sym_alt_2))
                        {
                          w_30 = ATgetArgument(t, 0);
                          x_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_31;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          e_31 = ATgetFirst((ATermList) t);
                          f_31 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = f_31;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = g_31;
                      if(match_cons(t, sym_alt_2))
                        {
                          h_31 = ATgetArgument(t, 0);
                          i_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm p_24 = t;
                        int q_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_31;
                            if((w_30 != t))
                              {
                                _fail(t);
                              }
                            t = h_31;
                            if((w_30 != t))
                              {
                                _fail(t);
                              }
                            t = i_31;
                            if((x_30 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, w_30, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_30), w_30, l_31), w_31), a_32, b_32);
                            t = s_40(t);
                            ;
                            LocalPopChoice(q_24);
                          }
                        else
                          {
                            t = p_24;
                            {
                              ATerm i_39 = NULL,m_39 = NULL;
                              t = h_31;
                              if((w_30 != t))
                                {
                                  _fail(t);
                                }
                              t = i_31;
                              if((x_30 != t))
                                {
                                  _fail(t);
                                }
                              t = term_y_14;
                              m_39 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_32, term_y_14);
                              t = i_12(b_32, m_39, t);
                              i_39 = t;
                              t = (ATerm) ATmakeAppl(sym__4, x_30, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_31), x_30, l_31), w_31), a_32, i_39);
                              t = s_40(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = t_31;
                  if(match_cons(t, sym_prod_3))
                    {
                      d_31 = ATgetArgument(t, 0);
                      g_31 = ATgetArgument(t, 1);
                      l_31 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = r_31;
                  if(match_cons(t, sym_alt_2))
                    {
                      w_30 = ATgetArgument(t, 0);
                      x_30 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_31;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_31 = ATgetFirst((ATermList) t);
                      f_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = f_31;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_31;
                  if(match_cons(t, sym_alt_2))
                    {
                      h_31 = ATgetArgument(t, 0);
                      i_31 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_24 = t;
                    int u_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_31;
                        if((w_30 != t))
                          {
                            _fail(t);
                          }
                        t = h_31;
                        if((w_30 != t))
                          {
                            _fail(t);
                          }
                        t = i_31;
                        if((x_30 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, w_30, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_30), w_30, l_31), w_31), a_32, b_32);
                        t = s_40(t);
                        ;
                        LocalPopChoice(u_24);
                      }
                    else
                      {
                        t = t_24;
                        {
                          ATerm m_40 = NULL,n_40 = NULL;
                          t = h_31;
                          if((w_30 != t))
                            {
                              _fail(t);
                            }
                          t = i_31;
                          if((x_30 != t))
                            {
                              _fail(t);
                            }
                          t = term_y_14;
                          n_40 = t;
                          t = (ATerm) ATmakeAppl(sym__2, b_32, term_y_14);
                          t = i_12(b_32, n_40, t);
                          m_40 = t;
                          t = (ATerm) ATmakeAppl(sym__4, x_30, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_31), x_30, l_31), w_31), a_32, m_40);
                          t = s_40(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_63), (ATerm) ATinsert(ATempty, not_null(u_63)));
            t = conc_0_0(t);
            if(((u_30 != NULL) && (u_30 != t)))
              _fail(t);
            else
              u_30 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_63), not_null(t_62)), not_null(o_63), not_null(u_30), term_y_14);
            t = s_40(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              k_63 = ATgetArgument(t, 0);
              t_62 = ATgetArgument(t, 1);
              {
                ATerm g_65 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(k_63), not_null(t_62));
                g_65 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(k_63), not_null(t_62)), not_null(o_63), not_null(s_63), not_null(u_63));
                t = w_10(g_65, not_null(o_63), not_null(s_63), not_null(u_63), t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  k_63 = ATgetArgument(t, 0);
                  t_62 = ATgetArgument(t, 1);
                  {
                    ATerm u_65 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(k_63), not_null(t_62));
                    u_65 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, not_null(k_63), not_null(t_62)), not_null(o_63), not_null(s_63), not_null(u_63));
                    t = w_10(u_65, not_null(o_63), not_null(s_63), not_null(u_63), t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      k_63 = ATgetArgument(t, 0);
                      {
                        ATerm z_65 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(k_63));
                        z_65 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, not_null(k_63)), not_null(o_63), not_null(s_63), not_null(u_63));
                        t = q_10(z_65, not_null(o_63), not_null(s_63), not_null(u_63), t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          k_63 = ATgetArgument(t, 0);
                          {
                            ATerm f_66 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, not_null(k_63));
                            f_66 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, not_null(k_63)), not_null(o_63), not_null(s_63), not_null(u_63));
                            t = q_10(f_66, not_null(o_63), not_null(s_63), not_null(u_63), t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              k_63 = ATgetArgument(t, 0);
                              t = not_null(o_63);
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm v_24 = ATgetArgument(t, 0);
                                  if(((x_62 != NULL) && (x_62 != ATgetArgument(t, 1))))
                                    _fail(ATgetArgument(t, 1));
                                  else
                                    x_62 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = not_null(x_62);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  u_62 = ATgetFirst((ATermList) t);
                                  v_62 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm j_41 = NULL,k_41 = NULL,p_41 = NULL,q_41 = NULL,u_41 = NULL,b_42 = NULL;
                                    ATerm o_3 (ATerm t)
                                    {
                                      ATerm c_25 = t;
                                      int d_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_25 = t;
                                          int f_25 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm p_3 (ATerm t)
                                              {
                                                t = not_null(q_41);
                                                return(t);
                                              }
                                              t = Instantiate_1_0(p_3, t);
                                              ;
                                              LocalPopChoice(f_25);
                                            }
                                          else
                                            {
                                              t = e_25;
                                              t = flat_list_0_0(t);
                                            }
                                          ;
                                          LocalPopChoice(d_25);
                                        }
                                      else
                                        {
                                          t = c_25;
                                        }
                                      return(t);
                                    }
                                    t = not_null(v_62);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_63), (ATerm) ATinsert(ATempty, not_null(u_63)));
                                    t = conc_0_0(t);
                                    if(((b_42 != NULL) && (b_42 != t)))
                                      _fail(t);
                                    else
                                      b_42 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, not_null(k_63)), not_null(b_42));
                                    t = get_pp_entry_0_0(t);
                                    if(((j_41 != NULL) && (j_41 != t)))
                                      _fail(t);
                                    else
                                      j_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, not_null(k_63), not_null(u_62), not_null(b_42), term_y_14);
                                    t = symbol2abox_0_0(t);
                                    if(((k_41 != NULL) && (k_41 != t)))
                                      _fail(t);
                                    else
                                      k_41 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(k_41));
                                    if(((u_41 != NULL) && (u_41 != t)))
                                      _fail(t);
                                    else
                                      u_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), (ATerm) ATinsert(ATempty, not_null(k_41)));
                                    t = o_10(not_null(j_41), not_null(u_41), t);
                                    if(match_cons(t, sym__2))
                                      {
                                        if(((p_41 != NULL) && (p_41 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          p_41 = ATgetArgument(t, 0);
                                        if(((q_41 != NULL) && (q_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          q_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = not_null(p_41);
                                    t = bottomup_1_0(o_3, t);
                                  }
                                }
                              else
                                {
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = (ATerm) ATempty;
                                }
                            }
                          else
                            {
                              ATerm g_25 = t;
                              int h_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm j_25 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(h_25);
                                  {
                                    ATerm k_25 = t;
                                    int l_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = not_null(o_63);
                                        {
                                          ATerm m_25 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm q_42 = NULL;
                                              q_42 = t;
                                              t = SSL_is_string(q_42);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = m_25;
                                            }
                                          t = not_null(o_63);
                                          {
                                            ATerm q_25 = t;
                                            int r_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
                                                if(match_cons(t, sym_appl_2))
                                                  {
                                                    t_42 = ATgetArgument(t, 0);
                                                    x_42 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = t_42;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    u_42 = ATgetArgument(t, 0);
                                                    v_42 = ATgetArgument(t, 1);
                                                    w_42 = ATgetArgument(t, 2);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(o_63);
                                                t = l_11(u_42, v_42, w_42, x_42, t);
                                                ;
                                                LocalPopChoice(r_25);
                                              }
                                            else
                                              {
                                                t = q_25;
                                                t = fatal_ambiguity_0_0(t);
                                              }
                                          }
                                        }
                                        ;
                                        LocalPopChoice(l_25);
                                      }
                                    else
                                      {
                                        t = k_25;
                                        t = SSL_is_string(not_null(o_63));
                                        t = (ATerm) ATmakeAppl(sym_S_1, not_null(o_63));
                                      }
                                  }
                                }
                              else
                                {
                                  t = g_25;
                                  {
                                    ATerm s_25 = t;
                                    int t_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm u_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(t_25);
                                        {
                                          ATerm e_44 = NULL,f_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, not_null(o_63));
                                          f_44 = t;
                                          t = SSL_implode_string(f_44);
                                          e_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, e_44);
                                        }
                                      }
                                    else
                                      {
                                        t = s_25;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            if(((k_63 != NULL) && (k_63 != ATgetArgument(t, 0))))
                                              _fail(ATgetArgument(t, 0));
                                            else
                                              k_63 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, not_null(k_63));
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
ATerm seq2abox_0_0 (ATerm t)
{
  ATerm u_67 = NULL,x_67 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,j_68 = NULL,p_68 = NULL,q_68 = NULL;
  if(match_cons(t, sym__4))
    {
      u_67 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
      p_68 = ATgetArgument(t, 2);
      q_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = u_67;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_68;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_67 = ATgetFirst((ATermList) t);
          d_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_68;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_68 = ATgetFirst((ATermList) t);
          j_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_68;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm y_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(w_25);
            t = x_67;
            {
              ATerm z_25 = t;
              int c_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm d_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_26);
                  {
                    ATerm g_26 = t;
                    int i_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, d_68, j_68, p_68, q_68);
                        t = seq2abox_0_0(t);
                        ;
                        LocalPopChoice(i_26);
                      }
                    else
                      {
                        t = g_26;
                        {
                          ATerm r_70 = NULL,u_70 = NULL,w_70 = NULL,a_71 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, x_67, f_68, p_68, q_68);
                          t = symbol2abox_0_0(t);
                          r_70 = t;
                          t = term_y_14;
                          a_71 = t;
                          t = (ATerm) ATmakeAppl(sym__2, q_68, term_y_14);
                          t = i_12(q_68, a_71, t);
                          w_70 = t;
                          t = (ATerm) ATmakeAppl(sym__4, d_68, j_68, p_68, w_70);
                          t = seq2abox_0_0(t);
                          u_70 = t;
                          t = (ATerm) ATinsert(CheckATermList(u_70), r_70);
                        }
                      }
                  }
                }
              else
                {
                  t = z_25;
                  {
                    ATerm m_71 = NULL,n_71 = NULL,p_71 = NULL,t_71 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, x_67, f_68, p_68, q_68);
                    t = symbol2abox_0_0(t);
                    m_71 = t;
                    t = term_y_14;
                    t_71 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_68, term_y_14);
                    t = i_12(q_68, t_71, t);
                    p_71 = t;
                    t = (ATerm) ATmakeAppl(sym__4, d_68, j_68, p_68, p_71);
                    t = seq2abox_0_0(t);
                    n_71 = t;
                    t = (ATerm) ATinsert(CheckATermList(n_71), m_71);
                  }
                }
            }
          }
        else
          {
            t = v_25;
            {
              ATerm l_72 = NULL,p_72 = NULL,r_72 = NULL,w_72 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, x_67, f_68, p_68, q_68);
              t = symbol2abox_0_0(t);
              l_72 = t;
              t = term_y_14;
              w_72 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_68, term_y_14);
              t = i_12(q_68, w_72, t);
              r_72 = t;
              t = (ATerm) ATmakeAppl(sym__4, d_68, j_68, p_68, r_72);
              t = seq2abox_0_0(t);
              p_72 = t;
              t = (ATerm) ATinsert(CheckATermList(p_72), l_72);
            }
          }
      }
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm g_73 = NULL,k_73 = NULL,l_73 = NULL,n_73 = NULL;
  g_73 = t;
  t = term_k_26;
  n_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, g_73);
  t = k_12(n_73, g_73, t);
  if(match_cons(t, sym__2))
    {
      l_73 = ATgetArgument(t, 0);
      k_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_73;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(t_3, t);
  t = (ATerm) ATmakeAppl(sym__2, l_73, k_73);
  return(t);
}
ATerm a_11 (ATerm k_79, ATerm j_79, ATerm t)
{
  ATerm x_73 = NULL,z_73 = NULL,a_74 = NULL;
  x_73 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      z_73 = ATgetArgument(t, 0);
      a_74 = ATgetArgument(t, 1);
      {
        ATerm l_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_74 = NULL,d_74 = NULL;
            t = k_79;
            t = mk_key_0_0(t);
            c_74 = t;
            t = term_k_26;
            d_74 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_k_26, c_74);
            t = k_12(d_74, c_74, t);
            t = x_73;
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = l_26;
            t = x_73;
            t = m_11(z_73, a_74, t);
          }
      }
    }
  else
    {
      ATerm j_74 = NULL,k_74 = NULL;
      t = k_79;
      t = mk_key_0_0(t);
      j_74 = t;
      t = term_k_26;
      k_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_26, j_74);
      t = k_12(k_74, j_74, t);
      t = x_73;
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm d_136 (ATerm), ATerm t)
{
  ATerm l_74 = NULL,p_74 = NULL,s_74 = NULL,t_74 = NULL;
  t = number_nonterminals_0_0(t);
  if(((t_74 != NULL) && (t_74 != t)))
    _fail(t);
  else
    t_74 = t;
  t = make_0_0(t);
  if(((l_74 != NULL) && (l_74 != t)))
    _fail(t);
  else
    l_74 = t;
  t = not_null(t_74);
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        ATerm u_74 = NULL;
        t = term_r_14;
        t = d_136(t);
        u_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_74, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(x_3, t);
      return(t);
    }
    t = map_1_0(w_3, t);
    t = concat_0_0(t);
    if(((p_74 != NULL) && (p_74 != t)))
      _fail(t);
    else
      p_74 = t;
    t = term_r_14;
    t = d_136(t);
    if(((s_74 != NULL) && (s_74 != t)))
      _fail(t);
    else
      s_74 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(p_74)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(s_74)), not_null(l_74)));
  }
  return(t);
}
ATerm b_4 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm x_74 = NULL;
  ATerm s_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL;
      ATerm v_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              if(((i_75 != NULL) && (i_75 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_75 = ATgetArgument(t, 0);
              {
                ATerm b_27 = ATgetArgument(t, 1);
              }
              if(((l_75 != NULL) && (l_75 != ATgetArgument(t, 2))))
                _fail(ATgetArgument(t, 2));
              else
                l_75 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(y_26);
          {
            ATerm z_3 (ATerm t)
            {
              t = not_null(x_74);
              return(t);
            }
            t = not_null(l_75);
            {
              ATerm y_3 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((x_74 != NULL) && (x_74 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      x_74 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(y_3, t);
              t = not_null(i_75);
              t = symbols2pp_entries_1_0(z_3, t);
            }
          }
        }
      else
        {
          t = v_26;
          {
            ATerm n_75 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                if(((i_75 != NULL) && (i_75 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_75 = ATgetArgument(t, 0);
                if(((k_75 != NULL) && (k_75 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_75 = ATgetArgument(t, 1);
                if(((l_75 != NULL) && (l_75 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  l_75 = ATgetArgument(t, 2);
                if(((m_75 != NULL) && (m_75 != ATgetArgument(t, 3))))
                  _fail(ATgetArgument(t, 3));
                else
                  m_75 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_27)), not_null(k_75)), (ATerm) ATinsert(ATinsert(ATempty, term_e_27), (ATerm) ATmakeAppl(sym_lit_1, not_null(i_75))));
            t = concat_0_0(t);
            n_75 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, n_75, not_null(l_75), not_null(m_75));
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = s_26;
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_27 = t;
            if((PushChoice() == 0))
              {
                ATerm q_75 = NULL;
                q_75 = t;
                t = term_l_27;
                t = get_options_0_0(t);
                t = oncetd_1_0(b_4, t);
                t = q_75;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_27;
              }
            t = debug_1_0(c_4, t);
            ;
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm b_11 (ATerm x_57, ATerm y_57, ATerm t)
{
  t = SSL_mkterm(x_57, y_57);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL,i_92 = NULL,j_92 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      i_92 = ATgetArgument(t, 0);
      j_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_92;
  if(match_cons(t, sym_alt_2))
    {
      f_92 = ATgetArgument(t, 0);
      g_92 = ATgetArgument(t, 1);
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_92 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, f_92, g_92);
            t = flat_alt_0_0(t);
            n_92 = t;
            t = (ATerm) ATinsert(CheckATermList(n_92), i_92);
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = (ATerm) ATinsert(ATinsert(ATempty, j_92), i_92);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, j_92), i_92);
    }
  return(t);
}
ATerm _2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,d_76 = NULL,p_11 = NULL;
  d_76 = t;
  if(match_cons(t, sym__2))
    {
      v_75 = ATgetArgument(t, 0);
      w_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_76);
  u_75 = t;
  t = v_75;
  t = g_88(t);
  x_75 = t;
  t = w_75;
  t = h_88(t);
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_75, y_75);
  p_11 = t;
  t = SSLsetAnnotations(p_11, u_75);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm j_76 = NULL,l_76 = NULL,s_76 = NULL,t_76 = NULL,x_76 = NULL;
  j_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_76;
    }
  else
    {
      ATerm c_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_76 = ATgetFirst((ATermList) t);
          s_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_76 = ATgetFirst((ATermList) t);
          x_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_76;
      t = pair_0_0(t);
      c_77 = t;
      t = (ATerm) ATinsert(CheckATermList(c_77), (ATerm) ATmakeAppl(sym__2, l_76, t_76));
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL,x_86 = NULL,o_12 = NULL;
  t_86 = t;
  if(match_cons(t, sym_lit_1))
    {
      s_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_86);
  r_86 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, s_86);
  o_12 = t;
  t = SSLsetAnnotations(o_12, r_86);
  if(match_cons(t, sym_lit_1))
    {
      x_86 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_27, (ATerm) ATmakeAppl(sym_S_1, x_86));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          x_86 = ATgetArgument(t, 0);
          {
            ATerm q_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, x_86);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL,a_13 = NULL,n_89 = NULL,v_88 = NULL,v_12 = NULL;
  t_88 = t;
  if(match_cons(t, sym__2))
    {
      p_88 = ATgetArgument(t, 0);
      q_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_88);
  o_88 = t;
  t = p_88;
  if(match_cons(t, sym_lit_1))
    {
      s_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_88);
  r_88 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, s_88);
  v_12 = t;
  t = SSLsetAnnotations(v_12, r_88);
  if(match_cons(t, sym_lit_1))
    {
      v_88 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_27, (ATerm) ATmakeAppl(sym_S_1, v_88));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          v_88 = ATgetArgument(t, 0);
          {
            ATerm r_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, v_88);
    }
  m_88 = t;
  t = q_88;
  t = _2_0(_id, z_4, t);
  if(match_cons(t, sym_lit_1))
    {
      n_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_27, (ATerm) ATmakeAppl(sym_S_1, n_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          n_89 = ATgetArgument(t, 0);
          {
            ATerm s_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, n_89);
    }
  n_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_88, n_88);
  a_13 = t;
  t = SSLsetAnnotations(a_13, o_88);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_w_27), (ATerm) ATinsert(ATinsert(ATempty, n_88), m_88));
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL;
  k_89 = t;
  if(match_cons(t, sym_iter_1))
    {
      l_89 = ATgetArgument(t, 0);
      {
        ATerm t_45 = NULL,w_12 = NULL;
        t = SSLgetAnnotations(k_89);
        t_45 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, l_89);
        w_12 = t;
        t = SSLsetAnnotations(w_12, t_45);
      }
    }
  else
    {
      ATerm l_46 = NULL,y_12 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          l_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_89);
      l_46 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, l_89);
      y_12 = t;
      t = SSLsetAnnotations(y_12, l_46);
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm s_89 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      s_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_27, (ATerm) ATmakeAppl(sym_S_1, s_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          s_89 = ATgetArgument(t, 0);
          {
            ATerm x_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, s_89);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm u_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,e_81 = NULL;
  ATerm z_27 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_81 = NULL,j_81 = NULL,h_82 = NULL,k_82 = NULL,l_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,w_82 = NULL,y_82 = NULL,c_83 = NULL,s_12 = NULL,h_86 = NULL,l_12 = NULL,b_86 = NULL,e_86 = NULL;
      t = reverse_acc_2_0(_id, h_4, t);
      c_83 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_82 = ATgetFirst((ATermList) t);
          k_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_83);
      j_81 = t;
      t = h_82;
      if(match_cons(t, sym__2))
        {
          q_82 = ATgetArgument(t, 0);
          w_82 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_82);
      p_82 = t;
      t = w_82;
      if(match_cons(t, sym_iter_1))
        {
          b_86 = ATgetArgument(t, 0);
          {
            ATerm j_44 = NULL,v_11 = NULL;
            t = SSLgetAnnotations(w_82);
            j_44 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, b_86);
            v_11 = t;
            t = SSLsetAnnotations(v_11, j_44);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              b_86 = ATgetArgument(t, 0);
              {
                ATerm t_44 = NULL,w_11 = NULL;
                t = SSLgetAnnotations(w_82);
                t_44 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, b_86);
                w_11 = t;
                t = SSLsetAnnotations(w_11, t_44);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  b_86 = ATgetArgument(t, 0);
                  e_86 = ATgetArgument(t, 1);
                  {
                    ATerm y_44 = NULL,a_12 = NULL;
                    t = SSLgetAnnotations(w_82);
                    y_44 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, b_86, e_86);
                    a_12 = t;
                    t = SSLsetAnnotations(a_12, y_44);
                  }
                }
              else
                {
                  ATerm k_45 = NULL,j_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      b_86 = ATgetArgument(t, 0);
                      e_86 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_82);
                  k_45 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, b_86, e_86);
                  j_12 = t;
                  t = SSLsetAnnotations(j_12, k_45);
                }
            }
        }
      y_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_82, y_82);
      l_12 = t;
      t = SSLsetAnnotations(l_12, p_82);
      if(match_cons(t, sym_lit_1))
        {
          h_86 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_27, (ATerm) ATmakeAppl(sym_S_1, h_86));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              h_86 = ATgetArgument(t, 0);
              {
                ATerm c_28 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, h_86);
        }
      l_82 = t;
      t = k_82;
      t = map_1_0(j_4, t);
      o_82 = t;
      t = (ATerm) ATinsert(CheckATermList(o_82), l_82);
      s_12 = t;
      t = SSLsetAnnotations(s_12, j_81);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_81 = ATgetFirst((ATermList) t);
          u_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_28 = t;
        if((PushChoice() == 0))
          {
            ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,q_87 = NULL,t_12 = NULL;
            q_87 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_87 = ATgetFirst((ATermList) t);
                k_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_87);
            i_87 = t;
            t = k_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_87), j_87);
            t_12 = t;
            t = SSLsetAnnotations(t_12, i_87);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_28;
          }
        t = u_80;
        t = reverse_acc_2_0(_id, m_4, t);
        i_81 = t;
        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_81), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, i_81)));
      }
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = z_27;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,u_12 = NULL,f_88 = NULL;
            t = reverse_acc_2_0(_id, o_4, t);
            v_87 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_87 = ATgetFirst((ATermList) t);
                u_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_87);
            s_87 = t;
            t = t_87;
            if(match_cons(t, sym_lit_1))
              {
                f_88 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_p_27, (ATerm) ATmakeAppl(sym_S_1, f_88));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    f_88 = ATgetArgument(t, 0);
                    {
                      ATerm m_28 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, f_88);
              }
            e_81 = t;
            t = u_87;
            {
              ATerm o_28 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = o_28;
                }
              t = reverse_acc_2_0(_id, p_4, t);
              b_81 = t;
              t = (ATerm) ATinsert(CheckATermList(b_81), e_81);
              u_12 = t;
              t = SSLsetAnnotations(u_12, s_87);
              t = b_81;
              t = pair_0_0(t);
              t = map_1_0(v_4, t);
              c_81 = t;
              t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_81), c_81));
            }
            ;
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = map_1_0(e_5, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm p_28 = t;
  if((PushChoice() == 0))
    {
      ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL,x_13 = NULL;
      e_90 = t;
      if(match_cons(t, sym_lit_1))
        {
          d_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_90);
      c_90 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, d_90);
      x_13 = t;
      t = SSLsetAnnotations(x_13, c_90);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
ATerm j_91 (ATerm j_90, ATerm k_90, ATerm l_90, ATerm t)
{
  ATerm p_90 = NULL,z_13 = NULL;
  t = SSLgetAnnotations(j_90);
  p_90 = t;
  t = l_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_90, l_90);
  z_13 = t;
  t = SSLsetAnnotations(z_13, p_90);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  ATerm i_90 = NULL;
  ATerm i_91 (ATerm t)
  {
    ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL;
    t_90 = t;
    if(match_cons(t, sym__2))
      {
        u_90 = ATgetArgument(t, 0);
        v_90 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = v_90;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_90 = ATgetFirst((ATermList) t);
        x_90 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_28 = t;
          int s_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_91(t_90, u_90, v_90, t);
              ;
              LocalPopChoice(s_28);
            }
          else
            {
              t = r_28;
              {
                ATerm u_28 = t;
                int v_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL;
                    t = w_90;
                    t = h_136(t);
                    t = term_y_14;
                    d_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_90, term_y_14);
                    t = i_12(u_90, d_91, t);
                    c_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_91, x_90);
                    t = i_91(t);
                    b_91 = t;
                    t = (ATerm) ATinsert(CheckATermList(b_91), (ATerm) ATmakeAppl(sym__2, u_90, w_90));
                    ;
                    LocalPopChoice(v_28);
                  }
                else
                  {
                    t = u_28;
                    {
                      ATerm h_91 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, u_90, x_90);
                      t = i_91(t);
                      h_91 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_91), w_90);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = j_91(t_90, u_90, v_90, t);
      }
    return(t);
  }
  if(((i_90 != NULL) && (i_90 != t)))
    _fail(t);
  else
    i_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(i_90));
  t = i_91(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL;
  o_91 = t;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm z_28 = ATgetArgument(t, 0);
            n_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_28);
        t = n_91;
      }
    else
      {
        t = w_28;
        t = o_91;
      }
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(g_5, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm a_92 = NULL;
  a_92 = t;
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_92;
        {
          ATerm d_29 = t;
          if((PushChoice() == 0))
            {
              ATerm l_47 = NULL;
              l_47 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = l_47;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm g_29 = ATgetFirst((ATermList) t);
                      ATerm i_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = l_47;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_29;
            }
          t = (ATerm) ATinsert(ATempty, a_92);
        }
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        t = a_92;
      }
  }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(i_5, t);
  t = concat_0_0(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  t_48 = t;
  if(match_cons(t, sym_Arg_1))
    {
      s_48 = ATgetArgument(t, 0);
      {
        ATerm k_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_49 = NULL,b_14 = NULL;
            t = SSLgetAnnotations(t_48);
            f_49 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, s_48);
            b_14 = t;
            t = SSLsetAnnotations(b_14, f_49);
            t = term_p_29;
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = k_29;
            t = t_48;
          }
      }
    }
  else
    {
      t = t_48;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm e_136 (ATerm), ATerm t)
{
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL;
  ATerm v_95 (ATerm t)
  {
    ATerm x_95 (ATerm r_94, ATerm s_94, ATerm t_94, ATerm u_94, ATerm t)
    {
      ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
      t = SSL_explode_term(not_null(u_94));
      if(match_cons(t, sym__2))
        {
          if(((b_95 != NULL) && (b_95 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_95 = ATgetArgument(t, 0);
          if(((c_95 != NULL) && (c_95 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_95 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_94), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(t_94), not_null(b_95))));
      t = conc_0_0(t);
      if(((x_94 != NULL) && (x_94 != t)))
        _fail(t);
      else
        x_94 = t;
      t = not_null(c_95);
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      if(((d_95 != NULL) && (d_95 != t)))
        _fail(t);
      else
        d_95 = t;
      t = make_0_0(t);
      if(((y_94 != NULL) && (y_94 != t)))
        _fail(t);
      else
        y_94 = t;
      t = not_null(d_95);
      {
        ATerm k_5 (ATerm t)
        {
          ATerm f_95 = NULL;
          f_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_94), not_null(x_94)), f_95);
          t = v_95(t);
          return(t);
        }
        t = map_1_0(k_5, t);
        t = concat_0_0(t);
        if(((z_94 != NULL) && (z_94 != t)))
          _fail(t);
        else
          z_94 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(z_94)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(r_94), not_null(x_94)), not_null(y_94)));
      }
      return(t);
    }
    ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL;
    if(match_cons(t, sym__2))
      {
        l_95 = ATgetArgument(t, 0);
        o_95 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_95;
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm u_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(t_29);
          t = (ATerm) ATempty;
        }
      else
        {
          t = s_29;
          if(match_cons(t, sym__2))
            {
              p_95 = ATgetArgument(t, 0);
              q_95 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_95;
          {
            ATerm v_29 = t;
            int w_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_sort_1))
                  {
                    ATerm x_29 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(w_29);
                t = l_95;
                {
                  ATerm z_29 = t;
                  int a_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm b_30 = ATgetArgument(t, 0);
                          ATerm c_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(a_30);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      t = z_29;
                      t = (ATerm) ATempty;
                    }
                }
              }
            else
              {
                t = v_29;
                {
                  ATerm d_30 = t;
                  int e_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_char_class_1))
                        {
                          ATerm f_30 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(e_30);
                      t = l_95;
                      {
                        ATerm g_30 = t;
                        int h_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym__2))
                              {
                                ATerm i_30 = ATgetArgument(t, 0);
                                ATerm j_30 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_30);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            t = g_30;
                            t = (ATerm) ATempty;
                          }
                      }
                    }
                  else
                    {
                      t = d_30;
                      if(match_cons(t, sym_alt_2))
                        {
                          j_95 = ATgetArgument(t, 0);
                          g_95 = ATgetArgument(t, 1);
                          t = l_95;
                          if(match_cons(t, sym__2))
                            {
                              m_95 = ATgetArgument(t, 0);
                              n_95 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = g_95;
                          if(match_cons(t, sym_alt_2))
                            {
                              h_95 = ATgetArgument(t, 0);
                              i_95 = ATgetArgument(t, 1);
                              {
                                ATerm k_30 = t;
                                int l_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,e_14 = NULL;
                                    t = m_95;
                                    if(((m_93 != NULL) && (m_93 != t)))
                                      _fail(t);
                                    else
                                      m_93 = t;
                                    t = n_95;
                                    if(((n_93 != NULL) && (n_93 != t)))
                                      _fail(t);
                                    else
                                      n_93 = t;
                                    t = p_95;
                                    if(((o_93 != NULL) && (o_93 != t)))
                                      _fail(t);
                                    else
                                      o_93 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, j_95, (ATerm) ATmakeAppl(sym_alt_2, h_95, i_95));
                                    t = flat_alt_0_0(t);
                                    f_48 = t;
                                    t = term_m_30;
                                    h_48 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_30, f_48);
                                    t = b_11(h_48, f_48, t);
                                    g_48 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_95, n_95), (ATerm) ATmakeAppl(sym__2, p_95, g_48));
                                    t = v_95(t);
                                    m_48 = t;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        j_48 = ATgetFirst((ATermList) t);
                                        k_48 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(m_48);
                                    i_48 = t;
                                    t = j_48;
                                    t = topdown_1_0(o_5, t);
                                    l_48 = t;
                                    t = (ATerm) ATinsert(CheckATermList(k_48), l_48);
                                    e_14 = t;
                                    t = SSLsetAnnotations(e_14, i_48);
                                    ;
                                    LocalPopChoice(l_30);
                                  }
                                else
                                  {
                                    t = k_30;
                                    t = x_95(m_95, n_95, p_95, q_95, t);
                                  }
                              }
                            }
                          else
                            {
                              t = x_95(m_95, n_95, p_95, q_95, t);
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_bracket_symbol_1))
                            {
                              j_95 = ATgetArgument(t, 0);
                              t = l_95;
                              if(match_cons(t, sym__2))
                                {
                                  m_95 = ATgetArgument(t, 0);
                                  n_95 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              {
                                ATerm p_30 = t;
                                int r_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_95, n_95), (ATerm) ATmakeAppl(sym__2, p_95, j_95));
                                    t = v_95(t);
                                    ;
                                    LocalPopChoice(r_30);
                                  }
                                else
                                  {
                                    t = p_30;
                                    t = x_95(m_95, n_95, p_95, q_95, t);
                                  }
                              }
                            }
                          else
                            {
                              t = l_95;
                              if(match_cons(t, sym__2))
                                {
                                  m_95 = ATgetArgument(t, 0);
                                  n_95 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = x_95(m_95, n_95, p_95, q_95, t);
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
  if(((q_93 != NULL) && (q_93 != t)))
    _fail(t);
  else
    q_93 = t;
  t = term_r_14;
  t = e_136(t);
  if(((p_93 != NULL) && (p_93 != t)))
    _fail(t);
  else
    p_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_93), not_null(q_93));
  t = v_95(t);
  return(t);
}
ATerm y_97 (ATerm i_96, ATerm j_96, ATerm k_96, ATerm t)
{
  ATerm l_96 = NULL,n_96 = NULL;
  t = k_96;
  {
    ATerm s_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_49 = NULL,b_50 = NULL;
        t = j_96;
        t = pp_table_get_0_0(t);
        b_50 = t;
        t = SSL_explode_term(b_50);
        if(match_cons(t, sym__2))
          {
            ATerm b_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_31 = ATgetArgument(t, 1);
              if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
                {
                  ATerm m_31 = ATgetFirst((ATermList) j_31);
                  ATerm n_31 = (ATerm) ATgetNext((ATermList) j_31);
                  if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
                    {
                      w_49 = ATgetFirst((ATermList) n_31);
                      {
                        ATerm o_31 = (ATerm) ATgetNext((ATermList) n_31);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_49;
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = s_30;
        {
          ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,e_50 = NULL,n_50 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,b_97 = NULL,i_14 = NULL;
          t = not_null(j_96);
          t = reverse_acc_2_0(_id, q_5, t);
          if(((u_96 != NULL) && (u_96 != t)))
            _fail(t);
          else
            u_96 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((s_96 != NULL) && (s_96 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                s_96 = ATgetFirst((ATermList) t);
              if(((t_96 != NULL) && (t_96 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                t_96 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(not_null(u_96));
          if(((r_96 != NULL) && (r_96 != t)))
            _fail(t);
          else
            r_96 = t;
          t = not_null(t_96);
          t = reverse_acc_2_0(_id, r_5, t);
          if(((l_96 != NULL) && (l_96 != t)))
            _fail(t);
          else
            l_96 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(l_96)), not_null(s_96));
          if(((i_14 != NULL) && (i_14 != t)))
            _fail(t);
          else
            i_14 = t;
          t = SSLsetAnnotations(not_null(i_14), not_null(r_96));
          t = not_null(l_96);
          t = pp_table_get_0_0(t);
          if(((q_96 != NULL) && (q_96 != t)))
            _fail(t);
          else
            q_96 = t;
          t = SSL_explode_term(not_null(q_96));
          if(match_cons(t, sym__2))
            {
              ATerm c_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm d_32 = ATgetArgument(t, 1);
                if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
                  {
                    if(((p_96 != NULL) && (p_96 != ATgetFirst((ATermList) d_32))))
                      _fail(ATgetFirst((ATermList) d_32));
                    else
                      p_96 = ATgetFirst((ATermList) d_32);
                    {
                      ATerm f_32 = (ATerm) ATgetNext((ATermList) d_32);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = not_null(p_96);
          if(match_cons(t, sym_Path_2))
            {
              b_97 = ATgetArgument(t, 0);
              x_96 = ATgetArgument(t, 1);
              t = not_null(x_96);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((y_96 != NULL) && (y_96 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    y_96 = ATgetFirst((ATermList) t);
                  if(((z_96 != NULL) && (z_96 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    z_96 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(z_96);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_97), (ATerm) ATinsert(ATempty, not_null(y_96)));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  if(((b_97 != NULL) && (b_97 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_97 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_97), (ATerm) ATempty);
            }
          if(((n_96 != NULL) && (n_96 != t)))
            _fail(t);
          else
            n_96 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(i_96));
          {
            ATerm s_5 (ATerm t)
            {
              t = not_null(n_96);
              return(t);
            }
            t = symbol2abox_1_0(s_5, t);
            t = map_1_0(v_5, t);
            t = not_null(j_96);
            t = pp_table_get_0_0(t);
            if(((n_50 != NULL) && (n_50 != t)))
              _fail(t);
            else
              n_50 = t;
            t = SSL_explode_term(not_null(n_50));
            if(match_cons(t, sym__2))
              {
                ATerm h_32 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_32) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm i_32 = ATgetArgument(t, 1);
                  if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
                    {
                      ATerm j_32 = ATgetFirst((ATermList) i_32);
                      ATerm m_32 = (ATerm) ATgetNext((ATermList) i_32);
                      if(((ATgetType(m_32) == AT_LIST) && !(ATisEmpty(m_32))))
                        {
                          if(((e_50 != NULL) && (e_50 != ATgetFirst((ATermList) m_32))))
                            _fail(ATgetFirst((ATermList) m_32));
                          else
                            e_50 = ATgetFirst((ATermList) m_32);
                          {
                            ATerm n_32 = (ATerm) ATgetNext((ATermList) m_32);
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = not_null(e_50);
          }
        }
      }
  }
  return(t);
}
ATerm z_97 (ATerm h_97, ATerm i_97, ATerm j_97, ATerm k_97, ATerm l_97, ATerm t)
{
  t = l_97;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL,q_50 = NULL;
        t = k_97;
        t = pp_table_get_0_0(t);
        q_50 = t;
        t = SSL_explode_term(q_50);
        if(match_cons(t, sym__2))
          {
            ATerm s_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_32 = ATgetArgument(t, 1);
              if(((ATgetType(u_32) == AT_LIST) && !(ATisEmpty(u_32))))
                {
                  ATerm v_32 = ATgetFirst((ATermList) u_32);
                  ATerm x_32 = (ATerm) ATgetNext((ATermList) u_32);
                  if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
                    {
                      o_50 = ATgetFirst((ATermList) x_32);
                      {
                        ATerm y_32 = (ATerm) ATgetNext((ATermList) x_32);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_50;
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        {
          ATerm u_50 = NULL,x_50 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, h_97, i_97, j_97);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(w_5, t);
          t = k_97;
          t = pp_table_get_0_0(t);
          x_50 = t;
          t = SSL_explode_term(x_50);
          if(match_cons(t, sym__2))
            {
              ATerm b_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm c_33 = ATgetArgument(t, 1);
                if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
                  {
                    ATerm d_33 = ATgetFirst((ATermList) c_33);
                    ATerm l_33 = (ATerm) ATgetNext((ATermList) c_33);
                    if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
                      {
                        u_50 = ATgetFirst((ATermList) l_33);
                        {
                          ATerm m_33 = (ATerm) ATgetNext((ATermList) l_33);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = u_50;
        }
      }
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_97 = ATgetArgument(t, 0);
      g_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(f_97, g_97, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      q_97 = ATgetArgument(t, 0);
      r_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(q_97, r_97, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL;
  s_97 = t;
  if(match_cons(t, sym__2))
    {
      t_97 = ATgetArgument(t, 0);
      x_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_97;
  if(match_cons(t, sym_prod_3))
    {
      u_97 = ATgetArgument(t, 0);
      v_97 = ATgetArgument(t, 1);
      w_97 = ATgetArgument(t, 2);
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_97(t_97, x_97, s_97, t);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            t = z_97(u_97, v_97, w_97, x_97, s_97, t);
          }
      }
    }
  else
    {
      t = y_97(t_97, x_97, s_97, t);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(v_33) != AT_INT) || (ATgetInt((ATermInt) v_33) != 34)))
        _fail(t);
      {
        ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(w_33) != AT_LIST) || !(ATisEmpty(w_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
  c_98 = t;
  t = SSL_explode_string(c_98);
  a_98 = t;
  {
    ATerm x_33 = t;
    if((PushChoice() == 0))
      {
        ATerm d_98 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_98 = ATgetFirst((ATermList) t);
            {
              ATerm y_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = d_98;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_33;
      }
    t = a_98;
    {
      ATerm c_34 = t;
      if((PushChoice() == 0))
        {
          t = at_last_1_0(x_5, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_34;
        }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_34)), a_98), (ATerm) ATinsert(ATempty, term_d_34));
      t = concat_0_0(t);
      b_98 = t;
      t = SSL_implode_string(b_98);
    }
  }
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm f_98 = NULL,j_98 = NULL;
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm g_34 = ATgetArgument(t, 0);
          ATerm h_34 = ATgetArgument(t, 1);
          ATerm i_34 = ATgetArgument(t, 2);
          if(((f_98 != NULL) && (f_98 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            f_98 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(f_34);
      {
        ATerm l_98 = NULL;
        t = not_null(f_98);
        {
          ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((l_98 != NULL) && (l_98 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_98 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(y_5, t);
          t = not_null(l_98);
        }
      }
    }
  else
    {
      t = e_34;
      {
        ATerm n_98 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm j_34 = ATgetArgument(t, 0);
            ATerm k_34 = ATgetArgument(t, 1);
            if(((j_98 != NULL) && (j_98 != ATgetArgument(t, 2))))
              _fail(ATgetArgument(t, 2));
            else
              j_98 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = not_null(j_98);
        {
          ATerm z_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((n_98 != NULL) && (n_98 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_98 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(z_5, t);
          t = not_null(n_98);
        }
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL;
  if(match_cons(t, sym__2))
    {
      w_98 = ATgetArgument(t, 0);
      a_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_98;
  if(match_cons(t, sym_prod_fun_4))
    {
      x_98 = ATgetArgument(t, 0);
      y_98 = ATgetArgument(t, 1);
      z_98 = ATgetArgument(t, 2);
      t_98 = ATgetArgument(t, 3);
      t = t_98;
      if(match_cons(t, sym_attrs_1))
        {
          s_98 = ATgetArgument(t, 0);
          {
            ATerm g_99 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, s_98, a_99);
            t = conc_0_0(t);
            g_99 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, x_98, y_98, z_98, (ATerm) ATmakeAppl(sym_attrs_1, g_99));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, x_98, y_98, z_98, (ATerm) ATmakeAppl(sym_attrs_1, a_99));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          x_98 = ATgetArgument(t, 0);
          y_98 = ATgetArgument(t, 1);
          z_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_98;
      if(match_cons(t, sym_attrs_1))
        {
          u_98 = ATgetArgument(t, 0);
          {
            ATerm p_99 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, u_98, a_99);
            t = conc_0_0(t);
            p_99 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, x_98, y_98, (ATerm) ATmakeAppl(sym_attrs_1, p_99));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, x_98, y_98, (ATerm) ATmakeAppl(sym_attrs_1, a_99));
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL,k_14 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL;
      d_100 = t;
      if(match_int(t, 34))
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_d_34), term_p_34);
              ;
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              t = (ATerm) ATinsert(ATempty, d_100);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm q_34 = t;
              int r_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_34), term_p_34);
                  ;
                  LocalPopChoice(r_34);
                }
              else
                {
                  t = q_34;
                  t = (ATerm) ATinsert(ATempty, d_100);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_100 = ATgetFirst((ATermList) t);
                  f_100 = (ATerm) ATgetNext((ATermList) t);
                  t = e_100;
                  if(match_int(t, 34))
                    {
                      ATerm s_34 = t;
                      int u_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, d_100);
                          ;
                          LocalPopChoice(u_34);
                        }
                      else
                        {
                          t = s_34;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(f_100), term_d_34), term_p_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 92))
                        {
                          ATerm v_34 = t;
                          int z_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, d_100);
                              ;
                              LocalPopChoice(z_34);
                            }
                          else
                            {
                              t = v_34;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(f_100), term_p_34), term_p_34);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm a_35 = t;
                              int c_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, d_100);
                                  ;
                                  LocalPopChoice(c_35);
                                }
                              else
                                {
                                  t = a_35;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(f_100), term_d_35), term_p_34);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, d_100);
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, d_100);
                }
            }
        }
      c_100 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_99 = ATgetFirst((ATermList) t);
          a_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_100);
      y_99 = t;
      t = a_100;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      b_100 = t;
      t = (ATerm) ATinsert(CheckATermList(b_100), z_99);
      k_14 = t;
      t = SSLsetAnnotations(k_14, y_99);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL;
        b_101 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_100 = ATgetFirst((ATermList) t);
            a_101 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm g_51 = NULL,p_51 = NULL,l_14 = NULL;
              t = SSLgetAnnotations(b_101);
              g_51 = t;
              t = a_101;
              t = escape_chars_0_0(t);
              p_51 = t;
              t = (ATerm) ATinsert(CheckATermList(p_51), z_100);
              l_14 = t;
              t = SSLsetAnnotations(l_14, g_51);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_101;
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,n_52 = NULL;
  k_52 = t;
  if(match_int(t, 34))
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_d_34), term_p_34);
          ;
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          t = (ATerm) ATinsert(ATempty, k_52);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm g_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_p_34), term_p_34);
              ;
              LocalPopChoice(h_35);
            }
          else
            {
              t = g_35;
              t = (ATerm) ATinsert(ATempty, k_52);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_52 = ATgetFirst((ATermList) t);
              n_52 = (ATerm) ATgetNext((ATermList) t);
              t = l_52;
              if(match_int(t, 34))
                {
                  ATerm k_35 = t;
                  int l_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, k_52);
                      ;
                      LocalPopChoice(l_35);
                    }
                  else
                    {
                      t = k_35;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_52), term_d_34), term_p_34);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm n_35 = t;
                      int o_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, k_52);
                          ;
                          LocalPopChoice(o_35);
                        }
                      else
                        {
                          t = n_35;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(n_52), term_p_34), term_p_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm p_35 = t;
                          int q_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, k_52);
                              ;
                              LocalPopChoice(q_35);
                            }
                          else
                            {
                              t = p_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(n_52), term_d_35), term_p_34);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATinsert(ATempty, k_52);
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, k_52);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm r_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_101 = NULL,f_52 = NULL;
      x_101 = t;
      t = SSL_explode_string(x_101);
      t = map_1_0(a_6, t);
      t = concat_0_0(t);
      f_52 = t;
      t = SSL_implode_string(f_52);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = r_35;
      {
        ATerm k_53 = NULL,o_53 = NULL;
        o_53 = t;
        t = SSL_explode_string(o_53);
        t = escape_chars_0_0(t);
        k_53 = t;
        t = SSL_implode_string(k_53);
      }
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm u_35 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_35;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL,g_102 = NULL,a_54 = NULL,f_54 = NULL,u_54 = NULL,w_53 = NULL,x_53 = NULL,o_14 = NULL,q_53 = NULL;
  t = filter_1_0(b_6, t);
  if(((g_102 != NULL) && (g_102 != t)))
    _fail(t);
  else
    g_102 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((e_102 != NULL) && (e_102 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        e_102 = ATgetFirst((ATermList) t);
      if(((f_102 != NULL) && (f_102 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(g_102));
  if(((d_102 != NULL) && (d_102 != t)))
    _fail(t);
  else
    d_102 = t;
  t = SSL_explode_string(not_null(e_102));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((q_53 != NULL) && (q_53 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        q_53 = ATgetFirst((ATermList) t);
      {
        ATerm v_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(q_53);
  {
    ATerm w_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), term_a_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_b_36, not_null(q_53));
        t = leq_0_0(t);
        ;
        LocalPopChoice(z_35);
      }
    else
      {
        t = w_35;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), term_c_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_36, not_null(q_53));
        t = leq_0_0(t);
      }
    t = (ATerm) ATinsert(CheckATermList(not_null(f_102)), not_null(e_102));
    if(((o_14 != NULL) && (o_14 != t)))
      _fail(t);
    else
      o_14 = t;
    t = SSLsetAnnotations(not_null(o_14), not_null(d_102));
    if(((x_53 != NULL) && (x_53 != t)))
      _fail(t);
    else
      x_53 = t;
    t = term_e_36;
    if(((w_53 != NULL) && (w_53 != t)))
      _fail(t);
    else
      w_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_36, not_null(x_53));
    t = f_11(not_null(w_53), not_null(x_53), t);
    if(((c_102 != NULL) && (c_102 != t)))
      _fail(t);
    else
      c_102 = t;
    t = SSL_concat_strings(not_null(c_102));
    if(((b_102 != NULL) && (b_102 != t)))
      _fail(t);
    else
      b_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_102), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_36), term_u_36), term_t_36), term_s_36), term_r_36), term_p_36), term_n_36), term_l_36), term_k_36), term_j_36), term_h_36), term_g_36), term_f_36));
    {
      ATerm x_36 = t;
      if((PushChoice() == 0))
        {
          ATerm h_102 = NULL,i_102 = NULL;
          if(match_cons(t, sym__2))
            {
              if(((h_102 != NULL) && (h_102 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_102 = ATgetArgument(t, 0);
              if(((i_102 != NULL) && (i_102 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                i_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(i_102);
          {
            ATerm c_6 (ATerm t)
            {
              if(((h_102 != NULL) && (h_102 != t)))
                _fail(t);
              else
                h_102 = t;
              return(t);
            }
            t = oncetd_1_0(c_6, t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_102), not_null(i_102));
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_36;
        }
      t = not_null(b_102);
      t = escape_0_0(t);
      if(((f_54 != NULL) && (f_54 != t)))
        _fail(t);
      else
        f_54 = t;
      t = SSL_explode_string(not_null(f_54));
      if(((u_54 != NULL) && (u_54 != t)))
        _fail(t);
      else
        u_54 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_34)), not_null(u_54)), (ATerm) ATinsert(ATempty, term_d_34));
      t = concat_0_0(t);
      if(((a_54 != NULL) && (a_54 != t)))
        _fail(t);
      else
        a_54 = t;
      t = SSL_implode_string(not_null(a_54));
    }
  }
  return(t);
}
ATerm t_102 (ATerm l_102, ATerm t)
{
  ATerm m_102 = NULL;
  t = SSL_explode_term(l_102);
  if(match_cons(t, sym__2))
    {
      ATerm y_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_102;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL;
  if(((q_102 != NULL) && (q_102 != t)))
    _fail(t);
  else
    q_102 = t;
  if(match_cons(t, sym__2))
    {
      o_102 = ATgetArgument(t, 0);
      p_102 = ATgetArgument(t, 1);
      {
        ATerm z_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              t = not_null(p_102);
              return(t);
            }
            t = not_null(o_102);
            t = at_end_1_0(d_6, t);
            ;
            LocalPopChoice(a_37);
          }
        else
          {
            t = z_36;
            t = t_102(not_null(q_102), t);
          }
      }
    }
  else
    {
      t = t_102(not_null(q_102), t);
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_37);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_37);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_37);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
  o_103 = t;
  if(match_cons(t, sym_cf_1))
    {
      m_103 = ATgetArgument(t, 0);
      t = m_103;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          m_103 = ATgetArgument(t, 0);
          t = m_103;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_h_37);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  m_103 = ATgetArgument(t, 0);
                  n_103 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(n_103), m_103);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      m_103 = ATgetArgument(t, 0);
                      t = m_103;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(e_6, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          m_103 = ATgetArgument(t, 0);
                          t = m_103;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(f_6, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              m_103 = ATgetArgument(t, 0);
                              t = m_103;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(g_6, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  m_103 = ATgetArgument(t, 0);
                                  n_103 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_103 = NULL,z_103 = NULL;
                                    t = m_103;
                                    t = Sym2Strs_0_0(t);
                                    y_103 = t;
                                    t = n_103;
                                    t = Sym2Strs_0_0(t);
                                    z_103 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_37)), z_103), y_103);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      m_103 = ATgetArgument(t, 0);
                                      n_103 = ATgetArgument(t, 1);
                                      {
                                        ATerm c_104 = NULL,d_104 = NULL;
                                        t = m_103;
                                        t = Sym2Strs_0_0(t);
                                        c_104 = t;
                                        t = n_103;
                                        t = Sym2Strs_0_0(t);
                                        d_104 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_37)), d_104), c_104);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm i_37 = t;
                                      int j_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              m_103 = ATgetArgument(t, 0);
                                              {
                                                ATerm k_37 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(j_37);
                                          {
                                            ATerm f_104 = NULL;
                                            t = m_103;
                                            t = Sym2Strs_0_0(t);
                                            f_104 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_37)), f_104);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = i_37;
                                          {
                                            ATerm n_37 = t;
                                            int o_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    m_103 = ATgetArgument(t, 0);
                                                    n_103 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_37 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(o_37);
                                                {
                                                  ATerm j_104 = NULL,k_104 = NULL;
                                                  t = m_103;
                                                  t = Sym2Strs_0_0(t);
                                                  j_104 = t;
                                                  t = n_103;
                                                  t = Sym2Strs_0_0(t);
                                                  k_104 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_37)), k_104), j_104);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = n_37;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    m_103 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_104 = NULL;
                                                      t = m_103;
                                                      t = Sym2Strs_0_0(t);
                                                      m_104 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, m_104), (ATerm) ATinsert(ATempty, term_r_37));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        m_103 = ATgetArgument(t, 0);
                                                        n_103 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_104 = NULL,q_104 = NULL;
                                                          t = m_103;
                                                          t = Sym2Strs_0_0(t);
                                                          p_104 = t;
                                                          t = n_103;
                                                          t = Sym2Strs_0_0(t);
                                                          q_104 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_104), (ATerm) ATinsert(ATempty, term_w_37)), p_104);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            m_103 = ATgetArgument(t, 0);
                                                            n_103 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_104 = NULL,u_104 = NULL;
                                                              t = m_103;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              t_104 = t;
                                                              t = n_103;
                                                              t = Sym2Strs_0_0(t);
                                                              u_104 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_104), (ATerm) ATinsert(ATempty, term_x_37)), t_104);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                m_103 = ATgetArgument(t, 0);
                                                                n_103 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm x_104 = NULL,y_104 = NULL;
                                                                  t = m_103;
                                                                  t = Sym2Strs_0_0(t);
                                                                  x_104 = t;
                                                                  t = n_103;
                                                                  t = Sym2Strs_0_0(t);
                                                                  y_104 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_104), (ATerm) ATinsert(ATempty, term_y_37)), x_104);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    m_103 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm a_105 = NULL;
                                                                      t = m_103;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      a_105 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(a_105), term_c_38);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        m_103 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, m_103);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            m_103 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm g_55 = NULL;
                                                                              t = m_103;
                                                                              {
                                                                                ATerm d_38 = t;
                                                                                int e_38 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(e_38);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_38;
                                                                                  }
                                                                                g_55 = t;
                                                                                t = (ATerm) ATinsert(ATempty, g_55);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm f_38 = t;
                                                                            int h_38 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    m_103 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm i_38 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(h_38);
                                                                                {
                                                                                  ATerm x_55 = NULL;
                                                                                  t = m_103;
                                                                                  {
                                                                                    ATerm j_38 = t;
                                                                                    int k_38 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(k_38);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_38;
                                                                                      }
                                                                                    x_55 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, x_55);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = f_38;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_p_38);
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
ATerm j_6 (ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      ;
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(j_6, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_38 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_38) != AT_INT) || (ATgetInt((ATermInt) s_38) != 34)))
        _fail(t);
      {
        ATerm t_38 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(t_38) != AT_LIST) || !(ATisEmpty(t_38))))
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
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  u_110 = t;
  t = SSL_explode_string(u_110);
  q_110 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_110 = ATgetFirst((ATermList) t);
      {
        ATerm u_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_110;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = q_110;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_38 = ATgetFirst((ATermList) t);
      s_110 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_110;
  t = at_last_1_0(k_6, t);
  r_110 = t;
  t = SSL_implode_string(r_110);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm w_38 = t;
  if((PushChoice() == 0))
    {
      ATerm k_105 = NULL,l_105 = NULL;
      if(match_cons(t, sym__2))
        {
          k_105 = ATgetArgument(t, 0);
          l_105 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, k_105, l_105);
      {
        ATerm x_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(k_105, l_105);
            ;
            LocalPopChoice(y_38);
          }
        else
          {
            t = x_38;
            t = SSL_gtr(k_105, l_105);
          }
        t = (ATerm) ATmakeAppl(sym__2, k_105, l_105);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_38;
    }
  return(t);
}
ATerm u_105 (ATerm q_105, ATerm t)
{
  t = SSL_explode_string(q_105);
  {
    ATerm z_38 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(p_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_38;
      }
    t = term_a_39;
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_56 = NULL;
      i_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_56, term_e_39);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_g_39, i_56);
      t = leq_0_0(t);
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = b_39;
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_56 = NULL;
            q_56 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_56, term_a_36);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_b_36, q_56);
            t = leq_0_0(t);
            ;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            {
              ATerm l_39 = t;
              int q_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_56 = NULL;
                  r_56 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_56, term_c_36);
                  t = leq_0_0(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_d_36, r_56);
                  t = leq_0_0(t);
                  ;
                  LocalPopChoice(q_39);
                }
              else
                {
                  t = l_39;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_r_14;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm t_105 = NULL;
  t_105 = t;
  if(match_string(t, "|="))
    {
      ATerm t_39 = t;
      int u_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_105(t_105, t);
          ;
          LocalPopChoice(u_39);
        }
      else
        {
          t = t_39;
          t = term_v_39;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm w_39 = t;
          int x_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_105(t_105, t);
              ;
              LocalPopChoice(x_39);
            }
          else
            {
              t = w_39;
              t = term_y_39;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm z_39 = t;
              int b_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_105(t_105, t);
                  ;
                  LocalPopChoice(b_40);
                }
              else
                {
                  t = z_39;
                  t = term_c_40;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm e_40 = t;
                  int f_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_105(t_105, t);
                      ;
                      LocalPopChoice(f_40);
                    }
                  else
                    {
                      t = e_40;
                      t = term_g_40;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm h_40 = t;
                      int j_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_105(t_105, t);
                          ;
                          LocalPopChoice(j_40);
                        }
                      else
                        {
                          t = h_40;
                          t = term_k_40;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm l_40 = t;
                          int t_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = u_105(t_105, t);
                              ;
                              LocalPopChoice(t_40);
                            }
                          else
                            {
                              t = l_40;
                              t = term_u_40;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm v_40 = t;
                              int w_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = u_105(t_105, t);
                                  ;
                                  LocalPopChoice(w_40);
                                }
                              else
                                {
                                  t = v_40;
                                  t = term_x_40;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm y_40 = t;
                                  int z_40 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = u_105(t_105, t);
                                      ;
                                      LocalPopChoice(z_40);
                                    }
                                  else
                                    {
                                      t = y_40;
                                      t = term_a_41;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm b_41 = t;
                                      int c_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = u_105(t_105, t);
                                          ;
                                          LocalPopChoice(c_41);
                                        }
                                      else
                                        {
                                          t = b_41;
                                          t = term_d_41;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm e_41 = t;
                                          int f_41 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = u_105(t_105, t);
                                              ;
                                              LocalPopChoice(f_41);
                                            }
                                          else
                                            {
                                              t = e_41;
                                              t = term_g_41;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm h_41 = t;
                                              int i_41 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = u_105(t_105, t);
                                                  ;
                                                  LocalPopChoice(i_41);
                                                }
                                              else
                                                {
                                                  t = h_41;
                                                  t = term_v_41;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm y_41 = t;
                                                  int z_41 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = u_105(t_105, t);
                                                      ;
                                                      LocalPopChoice(z_41);
                                                    }
                                                  else
                                                    {
                                                      t = y_41;
                                                      t = term_a_42;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm c_42 = t;
                                                      int d_42 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = u_105(t_105, t);
                                                          ;
                                                          LocalPopChoice(d_42);
                                                        }
                                                      else
                                                        {
                                                          t = c_42;
                                                          t = term_e_42;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm g_42 = t;
                                                          int h_42 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = u_105(t_105, t);
                                                              ;
                                                              LocalPopChoice(h_42);
                                                            }
                                                          else
                                                            {
                                                              t = g_42;
                                                              t = term_y_37;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm i_42 = t;
                                                              int j_42 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = u_105(t_105, t);
                                                                  ;
                                                                  LocalPopChoice(j_42);
                                                                }
                                                              else
                                                                {
                                                                  t = i_42;
                                                                  t = term_k_42;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm m_42 = t;
                                                                  int n_42 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = u_105(t_105, t);
                                                                      ;
                                                                      LocalPopChoice(n_42);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = m_42;
                                                                      t = term_k_42;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm o_42 = t;
                                                                      int p_42 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = u_105(t_105, t);
                                                                          ;
                                                                          LocalPopChoice(p_42);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = o_42;
                                                                          t = term_s_42;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm y_42 = t;
                                                                          int z_42 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = u_105(t_105, t);
                                                                              ;
                                                                              LocalPopChoice(z_42);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_42;
                                                                              t = term_a_43;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm b_43 = t;
                                                                              int c_43 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = u_105(t_105, t);
                                                                                  ;
                                                                                  LocalPopChoice(c_43);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_43;
                                                                                  t = term_f_43;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm g_43 = t;
                                                                                  int h_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = u_105(t_105, t);
                                                                                      ;
                                                                                      LocalPopChoice(h_43);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_43;
                                                                                      t = term_i_43;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm j_43 = t;
                                                                                      int k_43 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = u_105(t_105, t);
                                                                                          ;
                                                                                          LocalPopChoice(k_43);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_43;
                                                                                          t = term_l_43;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm m_43 = t;
                                                                                          int o_43 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = u_105(t_105, t);
                                                                                              ;
                                                                                              LocalPopChoice(o_43);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = m_43;
                                                                                              t = term_p_43;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm q_43 = t;
                                                                                              int r_43 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = u_105(t_105, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(r_43);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = q_43;
                                                                                                  t = term_s_43;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm u_43 = t;
                                                                                                  int v_43 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = u_105(t_105, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(v_43);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = u_43;
                                                                                                      t = term_y_43;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm c_44 = t;
                                                                                                      int g_44 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = u_105(t_105, t);
                                                                                                          ;
                                                                                                          LocalPopChoice(g_44);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = c_44;
                                                                                                          t = term_h_44;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm i_44 = t;
                                                                                                          int k_44 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = u_105(t_105, t);
                                                                                                              ;
                                                                                                              LocalPopChoice(k_44);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = i_44;
                                                                                                              t = term_m_44;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm r_44 = t;
                                                                                                              int s_44 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = u_105(t_105, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(s_44);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_44;
                                                                                                                  t = term_u_44;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm v_44 = t;
                                                                                                                  int w_44 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = u_105(t_105, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(w_44);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = v_44;
                                                                                                                      t = term_x_44;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm z_44 = t;
                                                                                                                      int a_45 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = u_105(t_105, t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(a_45);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = z_44;
                                                                                                                          t = term_w_37;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm b_45 = t;
                                                                                                                          int e_45 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = u_105(t_105, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(e_45);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_45;
                                                                                                                              t = term_h_45;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm j_45 = t;
                                                                                                                              int l_45 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = u_105(t_105, t);
                                                                                                                                  ;
                                                                                                                                  LocalPopChoice(l_45);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = j_45;
                                                                                                                                  t = term_m_45;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm n_45 = t;
                                                                                                                                  int p_45 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = u_105(t_105, t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(p_45);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = n_45;
                                                                                                                                      t = term_q_45;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm r_45 = t;
                                                                                                                                      int u_45 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = u_105(t_105, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(u_45);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = r_45;
                                                                                                                                          t = term_x_45;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm y_45 = t;
                                                                                                                                          int z_45 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = u_105(t_105, t);
                                                                                                                                              ;
                                                                                                                                              LocalPopChoice(z_45);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = y_45;
                                                                                                                                              t = term_a_46;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm b_46 = t;
                                                                                                                                              int c_46 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = u_105(t_105, t);
                                                                                                                                                  ;
                                                                                                                                                  LocalPopChoice(c_46);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = b_46;
                                                                                                                                                  t = term_d_46;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm e_46 = t;
                                                                                                                                                  int f_46 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = u_105(t_105, t);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(f_46);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = e_46;
                                                                                                                                                      t = term_g_46;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm h_46 = t;
                                                                                                                                                      int i_46 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = u_105(t_105, t);
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(i_46);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = h_46;
                                                                                                                                                          t = term_j_46;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm k_46 = t;
                                                                                                                                                          int m_46 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = u_105(t_105, t);
                                                                                                                                                              ;
                                                                                                                                                              LocalPopChoice(m_46);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = k_46;
                                                                                                                                                              t = term_n_46;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = u_105(t_105, t);
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
ATerm f_11 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm k_106 = NULL,l_106 = NULL;
  t = p_44;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_44;
    }
  else
    {
      ATerm v_56 = NULL,z_56 = NULL,d_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_106 != NULL) && (k_106 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_106 = ATgetFirst((ATermList) t);
          if(((l_106 != NULL) && (l_106 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(p_44));
      if(((v_56 != NULL) && (v_56 != t)))
        _fail(t);
      else
        v_56 = t;
      t = not_null(l_106);
      {
        ATerm f_57 (ATerm t)
        {
          ATerm o_46 = t;
          int p_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_57 = NULL;
              b_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_57;
              ;
              LocalPopChoice(p_46);
            }
          else
            {
              t = o_46;
              {
                ATerm d_57 = NULL;
                t = Cons_2_0(_id, f_57, t);
                d_57 = t;
                t = (ATerm) ATinsert(CheckATermList(d_57), not_null(o_44));
              }
            }
          return(t);
        }
        t = f_57(t);
        if(((z_56 != NULL) && (z_56 != t)))
          _fail(t);
        else
          z_56 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(z_56)), not_null(k_106));
        if(((d_19 != NULL) && (d_19 != t)))
          _fail(t);
        else
          d_19 = t;
        t = SSLsetAnnotations(not_null(d_19), not_null(v_56));
      }
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_107 = ATgetFirst((ATermList) t);
      h_107 = (ATerm) ATgetNext((ATermList) t);
      t = h_107;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_107 = ATgetFirst((ATermList) t);
          f_107 = (ATerm) ATgetNext((ATermList) t);
          t = e_107;
          if(match_int(t, 34))
            {
              t = g_107;
              if(match_int(t, 92))
                {
                  ATerm u_46 = t;
                  int v_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_107 = NULL;
                      t = f_107;
                      t = De_Escape_0_0(t);
                      k_107 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_107), term_d_34);
                      ;
                      LocalPopChoice(v_46);
                    }
                  else
                    {
                      t = u_46;
                      {
                        ATerm n_107 = NULL;
                        t = h_107;
                        t = De_Escape_0_0(t);
                        n_107 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_107), g_107);
                      }
                    }
                }
              else
                {
                  ATerm q_107 = NULL;
                  t = h_107;
                  t = De_Escape_0_0(t);
                  q_107 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_107), g_107);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = g_107;
                  if(match_int(t, 92))
                    {
                      ATerm x_46 = t;
                      int a_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_107 = NULL;
                          t = f_107;
                          t = De_Escape_0_0(t);
                          s_107 = t;
                          t = (ATerm) ATinsert(CheckATermList(s_107), term_p_34);
                          ;
                          LocalPopChoice(a_47);
                        }
                      else
                        {
                          t = x_46;
                          {
                            ATerm v_107 = NULL;
                            t = h_107;
                            t = De_Escape_0_0(t);
                            v_107 = t;
                            t = (ATerm) ATinsert(CheckATermList(v_107), g_107);
                          }
                        }
                    }
                  else
                    {
                      ATerm y_107 = NULL;
                      t = h_107;
                      t = De_Escape_0_0(t);
                      y_107 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_107), g_107);
                    }
                }
              else
                {
                  ATerm d_108 = NULL;
                  t = h_107;
                  t = De_Escape_0_0(t);
                  d_108 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_108), g_107);
                }
            }
        }
      else
        {
          ATerm g_108 = NULL;
          t = h_107;
          t = De_Escape_0_0(t);
          g_108 = t;
          t = (ATerm) ATinsert(CheckATermList(g_108), g_107);
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
  ATerm o_108 = NULL,p_108 = NULL,q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL;
  p_108 = t;
  t = SSL_explode_string(p_108);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_108 = ATgetFirst((ATermList) t);
      t_108 = (ATerm) ATgetNext((ATermList) t);
      t = t_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_108 = ATgetFirst((ATermList) t);
          r_108 = (ATerm) ATgetNext((ATermList) t);
          t = q_108;
          if(match_int(t, 34))
            {
              t = s_108;
              if(match_int(t, 92))
                {
                  ATerm e_47 = t;
                  int f_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_108 = NULL;
                      t = r_108;
                      t = De_Escape_0_0(t);
                      w_108 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_108), term_d_34);
                      ;
                      LocalPopChoice(f_47);
                    }
                  else
                    {
                      t = e_47;
                      {
                        ATerm b_109 = NULL;
                        t = t_108;
                        t = De_Escape_0_0(t);
                        b_109 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_109), s_108);
                      }
                    }
                }
              else
                {
                  ATerm e_109 = NULL;
                  t = t_108;
                  t = De_Escape_0_0(t);
                  e_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_109), s_108);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = s_108;
                  if(match_int(t, 92))
                    {
                      ATerm j_47 = t;
                      int k_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_109 = NULL;
                          t = r_108;
                          t = De_Escape_0_0(t);
                          g_109 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_109), term_p_34);
                          ;
                          LocalPopChoice(k_47);
                        }
                      else
                        {
                          t = j_47;
                          {
                            ATerm j_109 = NULL;
                            t = t_108;
                            t = De_Escape_0_0(t);
                            j_109 = t;
                            t = (ATerm) ATinsert(CheckATermList(j_109), s_108);
                          }
                        }
                    }
                  else
                    {
                      ATerm m_109 = NULL;
                      t = t_108;
                      t = De_Escape_0_0(t);
                      m_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_109), s_108);
                    }
                }
              else
                {
                  ATerm p_109 = NULL;
                  t = t_108;
                  t = De_Escape_0_0(t);
                  p_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_109), s_108);
                }
            }
        }
      else
        {
          ATerm s_109 = NULL;
          t = t_108;
          t = De_Escape_0_0(t);
          s_109 = t;
          t = (ATerm) ATinsert(CheckATermList(s_109), s_108);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  o_108 = t;
  t = SSL_implode_string(o_108);
  return(t);
}
ATerm list_ana_1_0 (ATerm s_137 (ATerm), ATerm t)
{
  ATerm z_109 (ATerm t)
  {
    ATerm m_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_109 = NULL;
        t = s_137(t);
        u_109 = t;
        t = (ATerm) ATinsert(ATempty, u_109);
        ;
        LocalPopChoice(n_47);
      }
    else
      {
        t = m_47;
        {
          ATerm o_47 = t;
          int p_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_109 = NULL,l_57 = NULL;
              y_109 = t;
              t = SSL_explode_term(y_109);
              if(match_cons(t, sym__2))
                {
                  ATerm q_47 = ATgetArgument(t, 0);
                  l_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_57;
              t = filter_1_0(z_109, t);
              t = concat_0_0(t);
              ;
              LocalPopChoice(p_47);
            }
          else
            {
              t = o_47;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = z_109(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm g_110 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      g_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_110;
  {
    ATerm r_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        ;
        LocalPopChoice(s_47);
      }
    else
      {
        t = r_47;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm f_110 = NULL,q_57 = NULL,r_57 = NULL;
  t = list_ana_1_0(v_6, t);
  r_57 = t;
  t = term_e_36;
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_36, r_57);
  t = f_11(q_57, r_57, t);
  f_110 = t;
  t = SSL_concat_strings(f_110);
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        ;
        LocalPopChoice(u_47);
      }
    else
      {
        t = t_47;
      }
  }
  return(t);
}
ATerm z_111 (ATerm f_111, ATerm g_111, ATerm h_111, ATerm t)
{
  ATerm k_111 = NULL;
  t = h_111;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_111;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        k_111 = t;
        ;
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        {
          ATerm x_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_111 = NULL,n_111 = NULL;
              t = (ATerm) ATinsert(ATempty, g_111);
              t = syms2strs_0_0(t);
              m_111 = t;
              t = f_111;
              t = filter_1_0(lit2str_0_0, t);
              n_111 = t;
              t = filter_1_0(w_6, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_47 = ATgetFirst((ATermList) t);
                  ATerm a_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, m_111, n_111);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              k_111 = t;
              ;
              LocalPopChoice(y_47);
            }
          else
            {
              t = x_47;
              {
                ATerm b_48 = t;
                int c_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_111;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    k_111 = t;
                    ;
                    LocalPopChoice(c_48);
                  }
                else
                  {
                    t = b_48;
                    {
                      ATerm p_111 = NULL,q_111 = NULL;
                      t = (ATerm) ATinsert(ATempty, g_111);
                      t = syms2strs_0_0(t);
                      p_111 = t;
                      t = term_r_14;
                      t = new_0_0(t);
                      q_111 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_111, (ATerm) ATinsert(ATinsert(ATempty, q_111), term_d_48));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      k_111 = t;
                    }
                  }
              }
            }
        }
      }
    t = k_111;
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm e_48 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_48;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL;
  s_111 = t;
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            t_111 = ATgetArgument(t, 0);
            {
              ATerm p_48 = ATgetArgument(t, 1);
            }
            {
              ATerm q_48 = ATgetArgument(t, 2);
            }
            {
              ATerm r_48 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_48);
        t = t_111;
        {
          ATerm u_48 = t;
          int v_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_58 = NULL,s_58 = NULL;
              ATerm w_48 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = w_48;
                }
              t = SSL_explode_string(t_111);
              s_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_34)), s_58), (ATerm) ATinsert(ATempty, term_d_34));
              t = concat_0_0(t);
              q_58 = t;
              t = SSL_implode_string(q_58);
              ;
              LocalPopChoice(v_48);
            }
          else
            {
              t = u_48;
            }
        }
      }
    else
      {
        t = n_48;
        if(match_cons(t, sym_prod_3))
          {
            t_111 = ATgetArgument(t, 0);
            u_111 = ATgetArgument(t, 1);
            {
              ATerm x_48 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_111;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm y_48 = t;
            int z_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_111(t_111, u_111, s_111, t);
                ;
                LocalPopChoice(z_48);
              }
            else
              {
                t = y_48;
                {
                  ATerm x_111 = NULL;
                  t = (ATerm) ATinsert(ATempty, u_111);
                  t = syms2strs_0_0(t);
                  x_111 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_111, (ATerm) ATinsert(ATempty, term_a_49));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = z_111(t_111, u_111, s_111, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL,g_114 = NULL;
  e_114 = t;
  if(match_cons(t, sym_sort_1))
    {
      f_114 = ATgetArgument(t, 0);
      {
        ATerm w_58 = NULL,u_19 = NULL;
        t = SSLgetAnnotations(e_114);
        w_58 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, f_114);
        u_19 = t;
        t = SSLsetAnnotations(u_19, w_58);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          f_114 = ATgetArgument(t, 0);
          g_114 = ATgetArgument(t, 1);
          {
            ATerm m_59 = NULL,s_59 = NULL,t_59 = NULL,r_21 = NULL;
            t = SSLgetAnnotations(e_114);
            m_59 = t;
            t = f_114;
            t = syntaxless_sort_0_0(t);
            s_59 = t;
            t = g_114;
            t = syntaxless_sort_0_0(t);
            t_59 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, s_59, t_59);
            r_21 = t;
            t = SSLsetAnnotations(r_21, m_59);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              f_114 = ATgetArgument(t, 0);
              {
                ATerm a_61 = NULL,d_61 = NULL,s_21 = NULL;
                t = SSLgetAnnotations(e_114);
                a_61 = t;
                t = f_114;
                t = syntaxless_sort_0_0(t);
                d_61 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, d_61);
                s_21 = t;
                t = SSLsetAnnotations(s_21, a_61);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  f_114 = ATgetArgument(t, 0);
                  {
                    ATerm k_61 = NULL,m_61 = NULL,t_21 = NULL;
                    t = SSLgetAnnotations(e_114);
                    k_61 = t;
                    t = f_114;
                    t = syntaxless_sort_0_0(t);
                    m_61 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, m_61);
                    t_21 = t;
                    t = SSLsetAnnotations(t_21, k_61);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      f_114 = ATgetArgument(t, 0);
                      {
                        ATerm v_61 = NULL,b_62 = NULL,u_21 = NULL;
                        t = SSLgetAnnotations(e_114);
                        v_61 = t;
                        t = f_114;
                        t = syntaxless_sort_0_0(t);
                        b_62 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, b_62);
                        u_21 = t;
                        t = SSLsetAnnotations(u_21, v_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          f_114 = ATgetArgument(t, 0);
                          g_114 = ATgetArgument(t, 1);
                          {
                            ATerm o_62 = NULL,r_62 = NULL,v_21 = NULL;
                            t = SSLgetAnnotations(e_114);
                            o_62 = t;
                            t = f_114;
                            t = syntaxless_sort_0_0(t);
                            r_62 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, r_62, g_114);
                            v_21 = t;
                            t = SSLsetAnnotations(v_21, o_62);
                          }
                        }
                      else
                        {
                          ATerm m_63 = NULL,q_63 = NULL,x_21 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              f_114 = ATgetArgument(t, 0);
                              g_114 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(e_114);
                          m_63 = t;
                          t = f_114;
                          t = syntaxless_sort_0_0(t);
                          q_63 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, q_63, g_114);
                          x_21 = t;
                          t = SSLsetAnnotations(x_21, m_63);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL,y_114 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL,h_115 = NULL,i_115 = NULL,m_22 = NULL,l_22 = NULL;
  i_115 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_114 = ATgetArgument(t, 0);
      w_114 = ATgetArgument(t, 1);
      x_114 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_115);
  u_114 = t;
  t = v_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_115 = ATgetFirst((ATermList) t);
      d_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_114);
  b_115 = t;
  t = c_115;
  t = syntaxless_sort_0_0(t);
  e_115 = t;
  t = d_115;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_115), e_115);
  l_22 = t;
  t = SSLsetAnnotations(l_22, b_115);
  h_115 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, h_115, w_114, x_114);
  m_22 = t;
  t = SSLsetAnnotations(m_22, u_114);
  y_114 = t;
  t = term_b_49;
  t = get_options_0_0(t);
  t = oncetd_1_0(x_6, t);
  t = y_114;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm k_115 = NULL,o_115 = NULL;
  ATerm c_49 = t;
  int d_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm e_49 = ATgetArgument(t, 0);
          ATerm g_49 = ATgetArgument(t, 1);
          ATerm h_49 = ATgetArgument(t, 2);
          k_115 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(d_49);
      t = k_115;
      t = oncetd_1_0(z_6, t);
      t = term_r_14;
    }
  else
    {
      t = c_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm i_49 = ATgetArgument(t, 0);
          ATerm j_49 = ATgetArgument(t, 1);
          o_115 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_115;
      t = oncetd_1_0(e_7, t);
      t = term_r_14;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm u_115 = NULL,y_115 = NULL;
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm m_49 = ATgetArgument(t, 0);
          ATerm n_49 = ATgetArgument(t, 1);
          ATerm o_49 = ATgetArgument(t, 2);
          u_115 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(l_49);
      t = u_115;
      t = oncetd_1_0(g_7, t);
      t = term_r_14;
    }
  else
    {
      t = k_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm p_49 = ATgetArgument(t, 0);
          ATerm q_49 = ATgetArgument(t, 1);
          y_115 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_115;
      t = oncetd_1_0(i_7, t);
      t = term_r_14;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm f_116 = NULL;
  f_116 = t;
  {
    ATerm r_49 = t;
    int s_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_64 = NULL;
        t = f_116;
        {
          ATerm t_49 = t;
          if((PushChoice() == 0))
            {
              ATerm u_49 = t;
              int v_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  ;
                  LocalPopChoice(v_49);
                }
              else
                {
                  t = u_49;
                  {
                    ATerm x_49 = t;
                    int a_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        ;
                        LocalPopChoice(a_50);
                      }
                    else
                      {
                        t = x_49;
                        {
                          ATerm f_50 = t;
                          int g_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              ;
                              LocalPopChoice(g_50);
                            }
                          else
                            {
                              t = f_50;
                              t = is_injection_0_0(t);
                            }
                        }
                      }
                  }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_49;
            }
          t = f_116;
          t = mk_constr_0_0(t);
          f_64 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_116, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, f_64)));
          t = add_attributes_0_0(t);
        }
        ;
        LocalPopChoice(s_49);
      }
    else
      {
        t = r_49;
        {
          ATerm h_116 = NULL;
          ATerm k_7 (ATerm t)
          {
            ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL,j_23 = NULL;
            k_116 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm h_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_116);
            i_116 = t;
            t = not_null(h_116);
            t = uq2q_0_0(t);
            j_116 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, j_116);
            j_23 = t;
            t = SSLsetAnnotations(j_23, i_116);
            return(t);
          }
          t = not_null(f_116);
          t = get_constr_0_0(t);
          if(((h_116 != NULL) && (h_116 != t)))
            _fail(t);
          else
            h_116 = t;
          t = not_null(f_116);
          t = oncetd_1_0(k_7, t);
        }
      }
  }
  return(t);
}
ATerm k_11 (ATerm n_38, ATerm o_38, ATerm m_38, ATerm l_38, ATerm t)
{
  ATerm m_116 = NULL,n_116 = NULL;
  ATerm i_50 = t;
  int j_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((m_116 != NULL) && (m_116 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              m_116 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = not_null(m_38);
      t = oncetd_1_0(r_7, t);
      ;
      LocalPopChoice(j_50);
    }
  else
    {
      t = i_50;
      {
        ATerm k_50 = t;
        int l_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,m_23 = NULL,l_23 = NULL;
            t = not_null(o_38);
            if(match_cons(t, sym_sort_1))
              {
                if(((a_117 != NULL) && (a_117 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_117 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(not_null(o_38));
            if(((z_116 != NULL) && (z_116 != t)))
              _fail(t);
            else
              z_116 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, not_null(a_117));
            if(((l_23 != NULL) && (l_23 != t)))
              _fail(t);
            else
              l_23 = t;
            t = SSLsetAnnotations(not_null(l_23), not_null(z_116));
            t = (ATerm) ATmakeAppl(sym_prod_3, not_null(n_38), not_null(o_38), not_null(m_38));
            t = prodcons_0_0(t);
            if(((y_116 != NULL) && (y_116 != t)))
              _fail(t);
            else
              y_116 = t;
            if(match_cons(t, sym_prod_3))
              {
                if(((p_116 != NULL) && (p_116 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_116 = ATgetArgument(t, 0);
                if(((q_116 != NULL) && (q_116 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_116 = ATgetArgument(t, 1);
                if(((r_116 != NULL) && (r_116 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  r_116 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(not_null(y_116));
            if(((o_116 != NULL) && (o_116 != t)))
              _fail(t);
            else
              o_116 = t;
            t = not_null(r_116);
            {
              ATerm t_7 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((m_116 != NULL) && (m_116 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      m_116 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(t_7, t);
              if(((x_116 != NULL) && (x_116 != t)))
                _fail(t);
              else
                x_116 = t;
              t = (ATerm) ATmakeAppl(sym_prod_3, not_null(p_116), not_null(q_116), not_null(x_116));
              if(((m_23 != NULL) && (m_23 != t)))
                _fail(t);
              else
                m_23 = t;
              t = SSLsetAnnotations(not_null(m_23), not_null(o_116));
            }
            ;
            LocalPopChoice(l_50);
          }
        else
          {
            t = k_50;
            t = term_m_50;
            if(((m_116 != NULL) && (m_116 != t)))
              _fail(t);
            else
              m_116 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, not_null(n_38), not_null(o_38), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(m_116))))), (ATerm) ATinsert(ATempty, not_null(m_116)));
  t = get_pp_entry_0_0(t);
  if(((n_116 != NULL) && (n_116 != t)))
    _fail(t);
  else
    n_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_116), not_null(n_116));
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm p_50 = t;
  if((PushChoice() == 0))
    {
      ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL,p_23 = NULL;
      k_117 = t;
      if(match_cons(t, sym_lit_1))
        {
          j_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_117);
      i_117 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, j_117);
      p_23 = t;
      t = SSLsetAnnotations(p_23, i_117);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_50;
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm r_50 = t;
  if((PushChoice() == 0))
    {
      ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL,q_23 = NULL;
      n_117 = t;
      if(match_cons(t, sym_lit_1))
        {
          m_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_117);
      l_117 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, m_117);
      q_23 = t;
      t = SSLsetAnnotations(q_23, l_117);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_50;
    }
  return(t);
}
ATerm l_11 (ATerm u_37, ATerm s_37, ATerm t_37, ATerm v_37, ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL;
  ATerm w_7 (ATerm t)
  {
    ATerm s_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_50 = t;
        int w_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_7 (ATerm t)
            {
              t = not_null(f_117);
              return(t);
            }
            t = Instantiate_1_0(x_7, t);
            ;
            LocalPopChoice(w_50);
          }
        else
          {
            t = v_50;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(t_50);
      }
    else
      {
        t = s_50;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(u_37), not_null(s_37), not_null(t_37)), not_null(v_37));
  t = k_11(not_null(u_37), not_null(s_37), not_null(t_37), not_null(v_37), t);
  if(match_cons(t, sym__2))
    {
      if(((c_117 != NULL) && (c_117 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_117 = ATgetArgument(t, 0);
      if(((d_117 != NULL) && (d_117 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_37);
  t = filter_1_0(u_7, t);
  if(((g_117 != NULL) && (g_117 != t)))
    _fail(t);
  else
    g_117 = t;
  t = not_null(v_37);
  t = filter_1_0(v_7, t);
  if(((h_117 != NULL) && (h_117 != t)))
    _fail(t);
  else
    h_117 = t;
  t = (ATerm) ATmakeAppl(sym__4, not_null(g_117), not_null(h_117), (ATerm)ATinsert(ATempty, not_null(c_117)), term_y_14);
  t = seq2abox_0_0(t);
  if(((f_117 != NULL) && (f_117 != t)))
    _fail(t);
  else
    f_117 = t;
  t = not_null(d_117);
  t = bottomup_1_0(w_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm v_121 (ATerm), ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL,d_118 = NULL;
  b_118 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_118;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_118 = ATgetFirst((ATermList) t);
          d_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_50 = t;
        int z_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_64 = NULL,z_64 = NULL,a_65 = NULL,u_23 = NULL;
            t = SSLgetAnnotations(b_118);
            t_64 = t;
            t = c_118;
            t = v_121(t);
            z_64 = t;
            t = d_118;
            t = filter_1_0(v_121, t);
            a_65 = t;
            t = (ATerm) ATinsert(CheckATermList(a_65), z_64);
            u_23 = t;
            t = SSLsetAnnotations(u_23, t_64);
            ;
            LocalPopChoice(z_50);
          }
        else
          {
            t = y_50;
            t = d_118;
            t = filter_1_0(v_121, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    t = topdown_1_0(y_108, t);
    return(t);
  }
  t = y_108(t);
  t = SRTS_all(b_8, t);
  return(t);
}
ATerm sometd_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm g_118 (ATerm t)
  {
    ATerm a_51 = t;
    int b_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_110(t);
        ;
        LocalPopChoice(b_51);
      }
    else
      {
        t = a_51;
        t = SRTS_some(g_118, t);
      }
    return(t);
  }
  t = g_118(t);
  return(t);
}
ATerm repeat_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm k_118 (ATerm t)
  {
    ATerm c_51 = t;
    int d_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_108(t);
        t = k_118(t);
        ;
        LocalPopChoice(d_51);
      }
    else
      {
        t = c_51;
      }
    return(t);
  }
  t = k_118(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  ATerm c_119 (ATerm t)
  {
    ATerm z_118 = NULL,a_119 = NULL,b_119 = NULL;
    b_119 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_118 = ATgetFirst((ATermList) t);
        a_119 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_65 = NULL,g_66 = NULL,m_24 = NULL;
          t = SSLgetAnnotations(b_119);
          s_65 = t;
          t = a_119;
          t = c_119(t);
          g_66 = t;
          t = (ATerm) ATinsert(CheckATermList(g_66), z_118);
          m_24 = t;
          t = SSLsetAnnotations(m_24, s_65);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_119;
        t = f_115(t);
      }
    return(t);
  }
  t = c_119(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL;
  f_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_119;
    }
  else
    {
      ATerm c_8 (ATerm t)
      {
        t = not_null(h_119);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_119 != NULL) && (g_119 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_119 = ATgetFirst((ATermList) t);
          if(((h_119 != NULL) && (h_119 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_119);
      t = at_end_1_0(c_8, t);
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      g_67 = ATgetArgument(t, 0);
      h_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(g_67);
  i_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_67), term_f_51), i_67), term_e_51);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL;
  a_120 = t;
  if(match_cons(t, sym_Path1_1))
    {
      b_120 = ATgetArgument(t, 0);
      t = b_120;
    }
  else
    {
      ATerm e_67 = NULL,f_67 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          b_120 = ATgetArgument(t, 0);
          c_120 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_120;
      t = map_1_0(d_8, t);
      t = concat_0_0(t);
      e_67 = t;
      t = (ATerm) ATinsert(CheckATermList(e_67), b_120);
      f_67 = t;
      t = SSL_concat_strings(f_67);
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm z_120 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      z_120 = ATgetArgument(t, 0);
      {
        ATerm h_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_120;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      k_120 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, k_120);
    }
  else
    {
      ATerm y_120 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          k_120 = ATgetArgument(t, 0);
          l_120 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_120;
      t = map_1_0(e_8, t);
      y_120 = t;
      t = (ATerm) ATinsert(CheckATermList(y_120), k_120);
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = debug_1_0(g_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_i_51;
  return(t);
}
ATerm m_11 (ATerm h_79, ATerm i_79, ATerm t)
{
  ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL;
  t = h_79;
  t = mk_key_0_0(t);
  b_121 = t;
  t = term_k_26;
  c_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, i_79);
  d_121 = t;
  t = SSL_table_put(c_121, b_121, d_121);
  t = h_79;
  t = path_to_string_0_0(t);
  a_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_121, i_79);
  t = if_verbose1_1_0(f_8, t);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,w_121 = NULL;
  w_121 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_121 = ATgetFirst((ATermList) t);
      s_121 = (ATerm) ATgetNext((ATermList) t);
      t = s_121;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_121 = ATgetFirst((ATermList) t);
          u_121 = (ATerm) ATgetNext((ATermList) t);
          t = t_121;
          if(match_int(t, 34))
            {
              t = r_121;
              if(match_int(t, 92))
                {
                  ATerm j_51 = t;
                  int k_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(CheckATermList(u_121), term_d_34);
                      ;
                      LocalPopChoice(k_51);
                    }
                  else
                    {
                      t = j_51;
                      t = w_121;
                    }
                }
              else
                {
                  t = w_121;
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = r_121;
                  if(match_int(t, 92))
                    {
                      ATerm l_51 = t;
                      int m_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(CheckATermList(u_121), term_p_34);
                          ;
                          LocalPopChoice(m_51);
                        }
                      else
                        {
                          t = l_51;
                          t = w_121;
                        }
                    }
                  else
                    {
                      t = w_121;
                    }
                }
              else
                {
                  if(match_int(t, 110))
                    {
                      t = r_121;
                      if(match_int(t, 92))
                        {
                          ATerm n_51 = t;
                          int o_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(CheckATermList(u_121), term_q_51);
                              ;
                              LocalPopChoice(o_51);
                            }
                          else
                            {
                              t = n_51;
                              t = w_121;
                            }
                        }
                      else
                        {
                          t = w_121;
                        }
                    }
                  else
                    {
                      if(match_int(t, 116))
                        {
                          t = r_121;
                          if(match_int(t, 92))
                            {
                              ATerm r_51 = t;
                              int s_51 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(CheckATermList(u_121), term_t_51);
                                  ;
                                  LocalPopChoice(s_51);
                                }
                              else
                                {
                                  t = r_51;
                                  t = w_121;
                                }
                            }
                          else
                            {
                              t = w_121;
                            }
                        }
                      else
                        {
                          t = w_121;
                        }
                    }
                }
            }
        }
      else
        {
          t = w_121;
        }
    }
  else
    {
      t = w_121;
    }
  w_122 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_122 = ATgetFirst((ATermList) t);
      v_122 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_67 = NULL,z_67 = NULL,o_24 = NULL;
        t = SSLgetAnnotations(w_122);
        v_67 = t;
        t = v_122;
        t = unescape_chars_0_0(t);
        z_67 = t;
        t = (ATerm) ATinsert(CheckATermList(z_67), u_122);
        o_24 = t;
        t = SSLsetAnnotations(o_24, v_67);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_122;
    }
  return(t);
}
ATerm at_last_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  ATerm x_123 (ATerm t)
  {
    ATerm u_123 = NULL,v_123 = NULL,w_123 = NULL;
    u_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_123 = ATgetFirst((ATermList) t);
        w_123 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_51 = t;
      int v_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_68 = NULL,r_24 = NULL;
          t = SSLgetAnnotations(u_123);
          l_68 = t;
          t = w_123;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(w_123), v_123);
          r_24 = t;
          t = SSLsetAnnotations(r_24, l_68);
          t = q_115(t);
          ;
          LocalPopChoice(v_51);
        }
      else
        {
          t = u_51;
          {
            ATerm e_69 = NULL,i_69 = NULL,s_24 = NULL;
            t = SSLgetAnnotations(u_123);
            e_69 = t;
            t = w_123;
            t = x_123(t);
            i_69 = t;
            t = (ATerm) ATinsert(CheckATermList(i_69), v_123);
            s_24 = t;
            t = SSLsetAnnotations(s_24, e_69);
          }
        }
    }
    return(t);
  }
  t = x_123(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_124 = NULL,h_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_124 = ATgetFirst((ATermList) t);
      h_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_124;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_124;
    }
  else
    {
      t = h_124;
      t = last_0_0(t);
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm u_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_51 = ATgetFirst((ATermList) t);
      u_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_124;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL;
  r_124 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_124 = ATgetFirst((ATermList) t);
      {
        ATerm x_51 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_124;
  t = t_123(t);
  t = r_124;
  t = last_0_0(t);
  t = t_123(t);
  t = r_124;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_51 = ATgetFirst((ATermList) t);
      s_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_124;
  t = at_last_1_0(h_8, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm l_126 = NULL,m_126 = NULL,n_126 = NULL;
  l_126 = t;
  if(match_cons(t, sym_Arg_1))
    {
      m_126 = ATgetArgument(t, 0);
      {
        ATerm b_70 = NULL,e_70 = NULL,w_24 = NULL;
        t = SSLgetAnnotations(l_126);
        b_70 = t;
        t = SSL_string_to_int(m_126);
        e_70 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, e_70);
        w_24 = t;
        t = SSLsetAnnotations(w_24, b_70);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          m_126 = ATgetArgument(t, 0);
          n_126 = ATgetArgument(t, 1);
          {
            ATerm s_70 = NULL,y_70 = NULL,z_70 = NULL,y_24 = NULL;
            t = SSLgetAnnotations(l_126);
            s_70 = t;
            t = SSL_string_to_int(m_126);
            y_70 = t;
            t = SSL_string_to_int(n_126);
            z_70 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, y_70, z_70);
            y_24 = t;
            t = SSLsetAnnotations(y_24, s_70);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              m_126 = ATgetArgument(t, 0);
              n_126 = ATgetArgument(t, 1);
              {
                ATerm r_71 = NULL,z_24 = NULL;
                t = SSLgetAnnotations(l_126);
                r_71 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, m_126, n_126);
                z_24 = t;
                t = SSLsetAnnotations(z_24, r_71);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  m_126 = ATgetArgument(t, 0);
                  {
                    ATerm d_72 = NULL,g_72 = NULL,a_25 = NULL,x_72 = NULL,y_72 = NULL,t_72 = NULL;
                    t = SSLgetAnnotations(l_126);
                    d_72 = t;
                    t = SSL_explode_string(m_126);
                    t = unquote_chars_1_0(i_8, t);
                    t_72 = t;
                    t = SSL_implode_string(t_72);
                    y_72 = t;
                    t = SSL_explode_string(y_72);
                    t = unescape_chars_0_0(t);
                    x_72 = t;
                    t = SSL_implode_string(x_72);
                    g_72 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, g_72);
                    a_25 = t;
                    t = SSLsetAnnotations(a_25, d_72);
                  }
                }
              else
                {
                  ATerm h_73 = NULL,m_73 = NULL,b_25 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      m_126 = ATgetArgument(t, 0);
                      n_126 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_126);
                  h_73 = t;
                  t = SSL_string_to_int(m_126);
                  m_73 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, m_73, n_126);
                  b_25 = t;
                  t = SSLsetAnnotations(b_25, h_73);
                }
            }
        }
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL;
  t = topdown_1_0(m_8, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      w_126 = ATgetArgument(t, 0);
      x_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(w_126, x_126, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm z_51 = t;
  int a_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(a_52);
    }
  else
    {
      t = z_51;
    }
  return(t);
}
ATerm u_11 (ATerm g_79, ATerm t)
{
  t = g_79;
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(k_8, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm a_127 (ATerm t)
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110(t);
        ;
        LocalPopChoice(c_52);
      }
    else
      {
        t = b_52;
        t = SRTS_one(a_127, t);
      }
    return(t);
  }
  t = a_127(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm b_127 = NULL,c_127 = NULL;
  t = term_d_52;
  b_127 = t;
  t = term_e_52;
  c_127 = t;
  t = term_g_52;
  t = k_12(b_127, c_127, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm h_52 = t;
  int i_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_127 = NULL,f_127 = NULL,h_127 = NULL;
      t = term_j_52;
      t = get_options_0_0(t);
      t = oncetd_1_0(n_8, t);
      t = term_s_14;
      f_127 = t;
      t = (ATerm) ATinsert(ATempty, term_m_52);
      h_127 = t;
      t = SSL_printnl(f_127, h_127);
      t = term_y_14;
      d_127 = t;
      t = SSL_exit(d_127);
      t = (ATerm) ATinsert(ATempty, term_m_52);
      ;
      LocalPopChoice(i_52);
    }
  else
    {
      t = h_52;
      {
        ATerm j_127 = NULL,k_127 = NULL;
        t = term_s_14;
        j_127 = t;
        t = (ATerm) ATinsert(ATempty, term_o_52);
        k_127 = t;
        t = SSL_printnl(j_127, k_127);
        t = (ATerm) ATinsert(ATempty, term_o_52);
      }
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm q_127 = NULL,r_127 = NULL,t_73 = NULL,u_73 = NULL;
  t = if_verbose1_1_0(r_8, t);
  t = ReadFromFile_0_0(t);
  r_127 = t;
  t = SSL_explode_term(r_127);
  if(match_cons(t, sym__2))
    {
      u_73 = ATgetArgument(t, 0);
      {
        ATerm p_52 = ATgetArgument(t, 1);
        if(((ATgetType(p_52) == AT_LIST) && !(ATisEmpty(p_52))))
          {
            t_73 = ATgetFirst((ATermList) p_52);
            {
              ATerm q_52 = (ATerm) ATgetNext((ATermList) p_52);
              if(((ATgetType(q_52) != AT_LIST) || !(ATisEmpty(q_52))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_73;
  {
    ATerm r_52 = t;
    int s_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(s_52);
      }
    else
      {
        t = r_52;
        t = type_failure_0_0(t);
      }
    t = t_73;
    if(match_cons(t, sym_PP_Table_1))
      {
        q_127 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = u_11(q_127, t);
  }
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = debug_1_0(s_8, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_t_52;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm o_127 = NULL,p_127 = NULL;
  o_127 = t;
  t = term_k_26;
  p_127 = t;
  t = SSL_table_create(p_127);
  t = o_127;
  t = map_1_0(p_8, t);
  return(t);
}
ATerm x_11 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm d_50, ATerm c_50, ATerm t)
{
  t = x_118(t);
  {
    ATerm x_8 (ATerm t)
    {
      ATerm s_127 = NULL;
      s_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_50), s_127);
      t = w_118(t);
      return(t);
    }
    t = fetch_1_0(x_8, t);
    t = not_null(c_50);
  }
  return(t);
}
ATerm y_11 (ATerm t_118 (ATerm), ATerm z_49, ATerm y_49, ATerm t)
{
  ATerm i_128 (ATerm t)
  {
    ATerm d_128 = NULL,e_128 = NULL,f_128 = NULL;
    d_128 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(y_49);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_128 = ATgetFirst((ATermList) t);
            f_128 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_52 = t;
          int v_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_128;
              {
                ATerm y_8 (ATerm t)
                {
                  t = not_null(y_49);
                  return(t);
                }
                t = x_11(t_118, y_8, not_null(e_128), not_null(f_128), t);
                t = i_128(t);
              }
              ;
              LocalPopChoice(v_52);
            }
          else
            {
              t = u_52;
              {
                ATerm q_74 = NULL,w_74 = NULL,i_25 = NULL;
                t = SSLgetAnnotations(d_128);
                q_74 = t;
                t = f_128;
                t = i_128(t);
                w_74 = t;
                t = (ATerm) ATinsert(CheckATermList(w_74), e_128);
                i_25 = t;
                t = SSLsetAnnotations(i_25, q_74);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(z_49);
  t = i_128(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL;
  l_128 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_128;
      t = u_120(t);
    }
  else
    {
      ATerm s_128 = NULL,t_128 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_128 = ATgetFirst((ATermList) t);
          n_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_128;
      t = w_120(t);
      s_128 = t;
      t = n_128;
      t = foldr_3_0(u_120, v_120, w_120, t);
      t_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_128, t_128);
      t = v_120(t);
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  ATerm w_52 = t;
  int x_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_128 = NULL;
      t = y_119(t);
      w_128 = t;
      t = (ATerm) ATinsert(ATempty, w_128);
      ;
      LocalPopChoice(x_52);
    }
  else
    {
      t = w_52;
      {
        ATerm h_75 = NULL,j_75 = NULL;
        ATerm a_9 (ATerm t)
        {
          t = collect_om_2_0(y_119, z_119, t);
          return(t);
        }
        if(((j_75 != NULL) && (j_75 != t)))
          _fail(t);
        else
          j_75 = t;
        t = SSL_explode_term(not_null(j_75));
        if(match_cons(t, sym__2))
          {
            ATerm y_52 = ATgetArgument(t, 0);
            if(((h_75 != NULL) && (h_75 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(h_75);
        t = foldr_3_0(z_8, z_119, a_9, t);
      }
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm f_129 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      f_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_129;
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm g_129 = NULL,h_129 = NULL;
  if(match_cons(t, sym__2))
    {
      g_129 = ATgetArgument(t, 0);
      h_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11(i_9, g_129, h_129, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm i_129 = NULL;
  if(match_cons(t, sym__2))
    {
      i_129 = ATgetArgument(t, 0);
      if((i_129 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = sometd_1_0(m_9, t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm k_129 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      k_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_129;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_53 = t;
      int c_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(c_53);
        }
      else
        {
          t = b_53;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_53 = ATgetFirst((ATermList) t);
              ATerm e_53 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(p_9, t);
      ;
      LocalPopChoice(a_53);
    }
  else
    {
      t = z_52;
    }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm f_53 = t;
  if((PushChoice() == 0))
    {
      ATerm l_129 = NULL,m_129 = NULL,n_129 = NULL,n_25 = NULL;
      n_129 = t;
      if(match_cons(t, sym_opt_1))
        {
          m_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_129);
      l_129 = t;
      t = m_129;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, m_129);
      n_25 = t;
      t = SSLsetAnnotations(n_25, l_129);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_53;
    }
  {
    ATerm g_53 = t;
    if((PushChoice() == 0))
      {
        ATerm o_129 = NULL,p_129 = NULL,q_129 = NULL,o_25 = NULL;
        q_129 = t;
        if(match_cons(t, sym_layout_1))
          {
            p_129 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_129);
        o_129 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, p_129);
        o_25 = t;
        t = SSLsetAnnotations(o_25, o_129);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_53;
      }
  }
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm d_130 = NULL,e_130 = NULL,f_130 = NULL,p_25 = NULL;
  f_130 = t;
  if(match_cons(t, sym_layout_1))
    {
      e_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_130);
  d_130 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, e_130);
  p_25 = t;
  t = SSLsetAnnotations(p_25, d_130);
  return(t);
}
ATerm z_11 (ATerm e_43, ATerm d_43, ATerm t)
{
  ATerm b_129 = NULL,c_129 = NULL,d_129 = NULL,e_129 = NULL;
  t = e_43;
  t = collect_om_2_0(c_9, h_9, t);
  t = reverse_acc_2_0(_id, j_9, t);
  t = read_pp_tables_0_0(t);
  t = d_43;
  t = repeat_1_0(k_9, t);
  e_129 = t;
  t = topdown_1_0(n_9, t);
  {
    ATerm h_53 = t;
    int i_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL,x_129 = NULL,y_129 = NULL;
        t_129 = t;
        if(match_cons(t, sym_appl_2))
          {
            u_129 = ATgetArgument(t, 0);
            y_129 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_129;
        if(match_cons(t, sym_prod_3))
          {
            v_129 = ATgetArgument(t, 0);
            w_129 = ATgetArgument(t, 1);
            x_129 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = t_129;
        t = l_11(v_129, w_129, x_129, y_129, t);
        ;
        LocalPopChoice(i_53);
      }
    else
      {
        t = h_53;
        t = fatal_ambiguity_0_0(t);
      }
    c_129 = t;
    t = e_129;
    t = collect_p__1_0(s_9, t);
    d_129 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_129, d_129);
    t = insert_layout_0_0(t);
    b_129 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_43, b_129);
  }
  return(t);
}
ATerm c_12 (ATerm y_62, ATerm z_62, ATerm t)
{
  ATerm g_130 = NULL;
  t = SSL_fputc(y_62, z_62);
  g_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_130);
  return(t);
}
ATerm d_12 (ATerm m_66, ATerm n_66, ATerm t)
{
  ATerm h_130 = NULL;
  t = SSL_write_term_to_stream_text(m_66, n_66);
  h_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_130);
  return(t);
}
ATerm f_12 (ATerm g_127 (ATerm), ATerm s_491, ATerm q_66, ATerm t)
{
  ATerm j_130 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_491, term_j_53);
  t = open_stream_0_0(t);
  j_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_130, q_66);
  t = g_127(t);
  t = fclose_0_0(t);
  t = q_66;
  return(t);
}
ATerm e_12 (ATerm i_66, ATerm j_66, ATerm t)
{
  ATerm k_130 = NULL;
  t = SSL_write_term_to_stream_baf(i_66, j_66);
  k_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_130);
  return(t);
}
ATerm u_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm k_76 = NULL,m_76 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_53 = ATgetArgument(t, 0);
      if(match_cons(l_53, sym_Stream_1))
        {
          k_76 = ATgetArgument(l_53, 0);
        }
      else
        _fail(t);
      m_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(k_76, m_76, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_53 = ATgetArgument(t, 0);
      if(match_cons(m_53, sym_Stream_1))
        {
          i_77 = ATgetArgument(m_53, 0);
        }
      else
        _fail(t);
      j_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12(i_77, j_77, t);
  f_77 = t;
  t = term_q_51;
  g_77 = t;
  t = f_77;
  if(match_cons(t, sym_Stream_1))
    {
      h_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_51, f_77);
  t = c_12(g_77, h_77, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL,u_130 = NULL,v_130 = NULL,x_130 = NULL,y_130 = NULL,z_130 = NULL,a_131 = NULL,b_131 = NULL,g_132 = NULL,h_132 = NULL,b_26 = NULL,a_26 = NULL;
  if(((p_130 != NULL) && (p_130 != t)))
    _fail(t);
  else
    p_130 = t;
  if(match_cons(t, sym__2))
    {
      if(((z_130 != NULL) && (z_130 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_130 = ATgetArgument(t, 0);
      if(((a_131 != NULL) && (a_131 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(p_130));
  if(((y_130 != NULL) && (y_130 != t)))
    _fail(t);
  else
    y_130 = t;
  t = not_null(z_130);
  {
    ATerm n_53 = t;
    int p_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_130 != NULL) && (o_130 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_130 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_9, t);
        ;
        LocalPopChoice(p_53);
      }
    else
      {
        t = n_53;
        t = term_r_53;
        if(((o_130 != NULL) && (o_130 != t)))
          _fail(t);
        else
          o_130 = t;
      }
    if(((b_131 != NULL) && (b_131 != t)))
      _fail(t);
    else
      b_131 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_131), not_null(a_131));
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = SSLsetAnnotations(not_null(a_26), not_null(y_130));
    t = not_null(p_130);
    if(match_cons(t, sym__2))
      {
        if(((u_130 != NULL) && (u_130 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_130 = ATgetArgument(t, 0);
        if(((v_130 != NULL) && (v_130 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          v_130 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(p_130));
    if(((q_130 != NULL) && (q_130 != t)))
      _fail(t);
    else
      q_130 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_130), (ATerm) ATmakeAppl(sym__2, not_null(o_130), not_null(v_130)));
    if(((b_26 != NULL) && (b_26 != t)))
      _fail(t);
    else
      b_26 = t;
    t = SSLsetAnnotations(not_null(b_26), not_null(q_130));
    if(((x_130 != NULL) && (x_130 != t)))
      _fail(t);
    else
      x_130 = t;
    if(match_cons(t, sym__2))
      {
        if(((g_132 != NULL) && (g_132 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_132 = ATgetArgument(t, 0);
        if(((h_132 != NULL) && (h_132 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          h_132 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm s_53 = t;
      int t_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,m_26 = NULL;
          t = SSLgetAnnotations(not_null(x_130));
          b_76 = t;
          t = not_null(g_132);
          t = fetch_1_0(u_9, t);
          f_76 = t;
          t = not_null(h_132);
          if(match_cons(t, sym__2))
            {
              h_76 = ATgetArgument(t, 0);
              i_76 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_12(x_9, h_76, i_76, t);
          g_76 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_76, g_76);
          m_26 = t;
          t = SSLsetAnnotations(m_26, b_76);
          ;
          LocalPopChoice(t_53);
        }
      else
        {
          t = s_53;
          {
            ATerm r_76 = NULL,w_76 = NULL,y_76 = NULL,e_77 = NULL,n_26 = NULL;
            t = SSLgetAnnotations(not_null(x_130));
            r_76 = t;
            t = not_null(h_132);
            if(match_cons(t, sym__2))
              {
                y_76 = ATgetArgument(t, 0);
                e_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_12(y_9, y_76, e_77, t);
            w_76 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_132), w_76);
            n_26 = t;
            t = SSLsetAnnotations(n_26, r_76);
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
ATerm apply_strategy_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  ATerm k_132 = NULL,l_132 = NULL,m_132 = NULL,n_132 = NULL,o_132 = NULL;
  o_132 = t;
  t = dtime_0_0(t);
  t = o_132;
  t = i_130(t);
  n_132 = t;
  t = dtime_0_0(t);
  k_132 = t;
  t = n_132;
  if(match_cons(t, sym__2))
    {
      l_132 = ATgetArgument(t, 0);
      m_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_132), (ATerm) ATmakeAppl(sym_Runtime_1, k_132)), m_132);
  return(t);
}
ATerm c_133 (ATerm w_132, ATerm t)
{
  t = SSL_fclose(w_132);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_132 = NULL,a_133 = NULL;
  a_133 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_132 = ATgetArgument(t, 0);
      {
        ATerm u_53 = t;
        int v_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_132);
            ;
            LocalPopChoice(v_53);
          }
        else
          {
            t = u_53;
            t = c_133(a_133, t);
          }
      }
    }
  else
    {
      t = c_133(a_133, t);
    }
  return(t);
}
ATerm g_12 (ATerm o_66, ATerm t)
{
  t = SSL_read_term_from_stream(o_66);
  return(t);
}
ATerm h_12 (ATerm a_63, ATerm b_63, ATerm t)
{
  ATerm d_133 = NULL;
  t = SSL_fopen(a_63, b_63);
  d_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_133);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_133 = NULL;
  t = SSL_stdin_stream();
  e_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_133);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_133 = NULL;
  t = SSL_stdout_stream();
  f_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_133);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_133 = NULL;
  t = SSL_stderr_stream();
  g_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_133);
  return(t);
}
ATerm p_134 (ATerm o_133, ATerm t)
{
  ATerm p_133 = NULL;
  t = SSL_explode_term(o_133);
  if(match_cons(t, sym__2))
    {
      ATerm y_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_53 = ATgetArgument(t, 1);
        if(((ATgetType(z_53) == AT_LIST) && !(ATisEmpty(z_53))))
          {
            p_133 = ATgetFirst((ATermList) z_53);
            {
              ATerm b_54 = (ATerm) ATgetNext((ATermList) z_53);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_133;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_133;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_133;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_133;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_134 (ATerm s_133, ATerm t_133, ATerm u_133, ATerm t)
{
  ATerm v_133 = NULL,w_133 = NULL,x_133 = NULL,a_134 = NULL,q_28 = NULL;
  t = SSLgetAnnotations(u_133);
  x_133 = t;
  t = s_133;
  if(match_cons(t, sym_Path_1))
    {
      a_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_134, t_133);
  q_28 = t;
  t = SSLsetAnnotations(q_28, x_133);
  if(match_cons(t, sym__2))
    {
      v_133 = ATgetArgument(t, 0);
      w_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(v_133, w_133, t);
  return(t);
}
ATerm r_134 (ATerm c_134, ATerm d_134, ATerm e_134, ATerm t)
{
  ATerm f_134 = NULL,g_134 = NULL,h_134 = NULL,k_134 = NULL,t_28 = NULL;
  t = SSLgetAnnotations(e_134);
  h_134 = t;
  t = SSL_is_string(c_134);
  k_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_134, d_134);
  t_28 = t;
  t = SSLsetAnnotations(t_28, h_134);
  if(match_cons(t, sym__2))
    {
      f_134 = ATgetArgument(t, 0);
      g_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(f_134, g_134, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm m_134 = NULL,n_134 = NULL,o_134 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_54 = ATgetArgument(t, 0);
      ATerm d_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  m_134 = t;
  if(match_cons(t, sym__2))
    {
      n_134 = ATgetArgument(t, 0);
      o_134 = ATgetArgument(t, 1);
      {
        ATerm e_54 = t;
        int g_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_134(m_134, t);
            ;
            LocalPopChoice(g_54);
          }
        else
          {
            t = e_54;
            {
              ATerm h_54 = t;
              int i_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_134(n_134, o_134, m_134, t);
                  ;
                  LocalPopChoice(i_54);
                }
              else
                {
                  t = h_54;
                  t = r_134(n_134, o_134, m_134, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_134(m_134, t);
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_j_54;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_134 = NULL,t_134 = NULL,u_134 = NULL;
  ATerm k_54 = t;
  int l_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_134 = NULL;
      v_134 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_134, term_m_54);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_54);
    }
  else
    {
      t = k_54;
      t = debug_1_0(z_9, t);
      _fail(t);
    }
  t_134 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(u_134, t);
  s_134 = t;
  t = t_134;
  t = fclose_0_0(t);
  t = s_134;
  return(t);
}
ATerm fetch_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm t_135 (ATerm t)
  {
    ATerm q_135 = NULL,r_135 = NULL,s_135 = NULL;
    q_135 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_135 = ATgetFirst((ATermList) t);
        s_135 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_54 = t;
      int o_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_77 = NULL,y_77 = NULL,y_28 = NULL;
          t = SSLgetAnnotations(q_135);
          v_77 = t;
          t = r_135;
          t = z_114(t);
          y_77 = t;
          t = (ATerm) ATinsert(CheckATermList(s_135), y_77);
          y_28 = t;
          t = SSLsetAnnotations(y_28, v_77);
          ;
          LocalPopChoice(o_54);
        }
      else
        {
          t = n_54;
          {
            ATerm g_78 = NULL,j_78 = NULL,a_29 = NULL;
            t = SSLgetAnnotations(q_135);
            g_78 = t;
            t = s_135;
            t = t_135(t);
            j_78 = t;
            t = (ATerm) ATinsert(CheckATermList(j_78), r_135);
            a_29 = t;
            t = SSLsetAnnotations(a_29, g_78);
          }
        }
    }
    return(t);
  }
  t = t_135(t);
  return(t);
}
ATerm b_12 (ATerm o_57, ATerm p_57, ATerm t)
{
  t = SSL_strcat(o_57, p_57);
  return(t);
}
ATerm debug_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL,z_135 = NULL;
  w_135 = t;
  t = e_127(t);
  x_135 = t;
  t = term_s_14;
  y_135 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_135), x_135);
  z_135 = t;
  t = SSL_printnl(y_135, z_135);
  t = w_135;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm p_54 = t;
  int q_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_54);
    }
  else
    {
      t = p_54;
    }
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_r_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_54 = t;
  int t_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_136 = NULL;
      n_136 = t;
      t = SSL_is_string(n_136);
      ;
      LocalPopChoice(t_54);
    }
  else
    {
      t = s_54;
      {
        ATerm v_54 = t;
        int w_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_10, t);
            ;
            LocalPopChoice(w_54);
          }
        else
          {
            t = v_54;
            {
              ATerm u_136 = NULL,v_136 = NULL,w_136 = NULL;
              u_136 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_136 = ATgetArgument(t, 0);
                  t = v_136;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_136 = ATgetArgument(t, 0);
                      t = v_136;
                      {
                        ATerm x_54 = t;
                        int y_54 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_54);
                          }
                        else
                          {
                            t = x_54;
                            t = debug_1_0(b_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_137 = NULL,e_137 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_136 = ATgetArgument(t, 0);
                          w_136 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_136;
                      t = eval_config_0_0(t);
                      d_137 = t;
                      t = w_136;
                      t = eval_config_0_0(t);
                      e_137 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_137, e_137);
                      t = b_12(d_137, e_137, t);
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
  ATerm q_137 = NULL,r_137 = NULL;
  q_137 = t;
  t = term_z_54;
  r_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_54, q_137);
  t = k_12(r_137, q_137, t);
  {
    ATerm a_55 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_137 = NULL,v_137 = NULL;
        t = eval_config_0_0(t);
        u_137 = t;
        t = term_z_54;
        v_137 = t;
        t = SSL_table_put(v_137, q_137, u_137);
        t = u_137;
        ;
        LocalPopChoice(b_55);
      }
    else
      {
        t = a_55;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_128 (ATerm), ATerm t)
{
  ATerm a_138 = NULL;
  a_138 = t;
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_138 = NULL;
        t = term_e_55;
        t = get_config_0_0(t);
        c_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_138, term_v_20);
        t = geq_0_0(t);
        t = a_138;
        t = r_128(t);
        ;
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = a_138;
      }
  }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm f_138 = NULL;
  f_138 = t;
  if(match_string(t, "-k"))
    {
      t = f_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_138;
    }
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm g_138 = NULL,h_138 = NULL,i_138 = NULL;
  g_138 = t;
  t = SSL_string_to_int(g_138);
  h_138 = t;
  t = term_f_55;
  i_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_55, h_138);
  t = m_12(i_138, h_138, t);
  t = g_138;
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_h_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_10, d_10, g_10, t);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm k_138 = NULL;
  k_138 = t;
  if(match_string(t, "-S"))
    {
      t = k_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_138;
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm l_138 = NULL,m_138 = NULL;
  t = term_e_55;
  l_138 = t;
  t = term_i_55;
  m_138 = t;
  t = term_j_55;
  t = m_12(l_138, m_138, t);
  t = term_k_55;
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm p_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm n_138 = NULL,o_138 = NULL,p_138 = NULL;
  n_138 = t;
  t = SSL_string_to_int(n_138);
  o_138 = t;
  t = term_e_55;
  p_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_55, o_138);
  t = m_12(p_138, o_138, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_138);
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_m_55;
  return(t);
}
ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm q_138 = NULL,r_138 = NULL;
  t = term_n_55;
  q_138 = t;
  t = term_r_14;
  r_138 = t;
  t = term_o_55;
  t = m_12(q_138, r_138, t);
  t = term_p_55;
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_q_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_55 = t;
  int s_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_10, k_10, n_10, t);
      ;
      LocalPopChoice(s_55);
    }
  else
    {
      t = r_55;
      {
        ATerm t_55 = t;
        int u_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_10, u_10, v_10, t);
            ;
            LocalPopChoice(u_55);
          }
        else
          {
            t = t_55;
            t = Option_3_0(x_10, c_11, d_11, t);
          }
      }
    }
  return(t);
}
ATerm m_12 (ATerm p_67, ATerm q_67, ATerm t)
{
  ATerm s_138 = NULL;
  t = term_z_54;
  s_138 = t;
  t = SSL_table_put(s_138, p_67, q_67);
  t = (ATerm) ATmakeAppl(sym__3, term_z_54, p_67, q_67);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm u_138 = NULL;
  u_138 = t;
  if(match_string(t, "-o"))
    {
      t = u_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_138;
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm v_138 = NULL,w_138 = NULL;
  v_138 = t;
  t = term_v_55;
  w_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_55, v_138);
  t = m_12(w_138, v_138, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_138);
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_w_55;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_11, g_11, i_11, t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm y_138 = NULL;
  y_138 = t;
  if(match_string(t, "-i"))
    {
      t = y_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_138;
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm z_138 = NULL,a_139 = NULL;
  z_138 = t;
  t = term_y_55;
  a_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_55, z_138);
  t = m_12(a_139, z_138, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_138);
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_z_55;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_11, o_11, q_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_139 = NULL,c_139 = NULL,d_139 = NULL,e_139 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_14;
  t = whoami_0_0(t);
  b_139 = t;
  t = term_s_14;
  d_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_56), b_139);
  e_139 = t;
  t = SSL_printnl(d_139, e_139);
  t = term_y_14;
  c_139 = t;
  t = SSL_exit(c_139);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_56;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_12 (ATerm y_59, ATerm z_59, ATerm t)
{
  ATerm c_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_59, z_59);
      ;
      LocalPopChoice(d_56);
    }
  else
    {
      t = c_56;
      t = SSL_addr(y_59, z_59);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm t)
{
  ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL;
  g_139 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_139;
      t = s_120(t);
    }
  else
    {
      ATerm l_139 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_139 = ATgetFirst((ATermList) t);
          i_139 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_139;
      t = foldr_2_0(s_120, t_120, t);
      l_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_139, l_139);
      t = t_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL;
  if(match_cons(t, sym__2))
    {
      a_79 = ATgetArgument(t, 0);
      b_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(a_79, b_79, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_139 = NULL,w_78 = NULL,x_78 = NULL;
  t = times_0_0(t);
  x_78 = t;
  t = SSL_explode_term(x_78);
  if(match_cons(t, sym__2))
    {
      ATerm e_56 = ATgetArgument(t, 0);
      w_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_78;
  t = foldr_2_0(s_11, n_12, t);
  o_139 = t;
  t = SSL_TicksToSeconds(o_139);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL;
  z_139 = t;
  if(match_cons(t, sym__2))
    {
      a_140 = ATgetArgument(t, 0);
      b_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_140;
        if((a_140 != t))
          {
            _fail(t);
          }
        t = z_139;
        ;
        LocalPopChoice(g_56);
      }
    else
      {
        t = f_56;
        t = (ATerm) ATmakeAppl(sym__2, a_140, b_140);
        {
          ATerm h_56 = t;
          int j_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_140, b_140);
              ;
              LocalPopChoice(j_56);
            }
          else
            {
              t = h_56;
              t = SSL_gtr(a_140, b_140);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_140, b_140);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_128 (ATerm), ATerm t)
{
  ATerm f_140 = NULL;
  f_140 = t;
  {
    ATerm k_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_140 = NULL;
        t = term_e_55;
        t = get_config_0_0(t);
        h_140 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_140, term_y_14);
        t = geq_0_0(t);
        t = f_140;
        t = q_128(t);
        ;
        LocalPopChoice(l_56);
      }
    else
      {
        t = k_56;
        t = f_140;
      }
  }
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm j_140 = NULL,k_140 = NULL,m_140 = NULL,n_140 = NULL;
  t = run_time_0_0(t);
  j_140 = t;
  t = term_r_14;
  t = whoami_0_0(t);
  k_140 = t;
  t = term_s_14;
  m_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_56), j_140), term_m_56), k_140);
  n_140 = t;
  t = SSL_printnl(m_140, n_140);
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_56), j_140), term_m_56), k_140));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_140 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_55;
  o_140 = t;
  t = SSL_exit(o_140);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm w_140 = NULL,x_140 = NULL;
  x_140 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_140;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_140 = ATgetArgument(t, 0);
          {
            ATerm s_79 = NULL,e_29 = NULL;
            t = SSLgetAnnotations(x_140);
            s_79 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_140);
            e_29 = t;
            t = SSLsetAnnotations(e_29, s_79);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_140;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_56;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      t = fetch_1_0(q_12, t);
    }
  t = g_131(t);
  return(t);
}
ATerm map_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm n_141 (ATerm t)
  {
    ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL;
    k_141 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_141;
      }
    else
      {
        ATerm a_80 = NULL,d_80 = NULL,e_80 = NULL,h_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_141 = ATgetFirst((ATermList) t);
            m_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_141);
        a_80 = t;
        t = l_141;
        t = p_114(t);
        d_80 = t;
        t = m_141;
        t = n_141(t);
        e_80 = t;
        t = (ATerm) ATinsert(CheckATermList(e_80), d_80);
        h_29 = t;
        t = SSLsetAnnotations(h_29, a_80);
      }
    return(t);
  }
  t = n_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm q_141 = NULL,r_141 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_141 = ATgetFirst((ATermList) t);
      r_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_141 = NULL,w_141 = NULL;
        ATerm r_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_141)), not_null(w_141));
          return(t);
        }
        t = not_null(r_141);
        t = c_0(t);
        if(((v_141 != NULL) && (v_141 != t)))
          _fail(t);
        else
          v_141 = t;
        t = not_null(q_141);
        t = a_0(t);
        if(((w_141 != NULL) && (w_141 != t)))
          _fail(t);
        else
          w_141 = t;
        t = not_null(r_141);
        t = reverse_acc_2_0(a_0, r_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_14;
      t = c_0(t);
    }
  return(t);
}
ATerm k_12 (ATerm e_74, ATerm f_74, ATerm t)
{
  t = SSL_table_get(e_74, f_74);
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm a_142 = NULL,b_142 = NULL,c_142 = NULL,j_29 = NULL;
  c_142 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_142);
  a_142 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_142);
  j_29 = t;
  t = SSLsetAnnotations(j_29, a_142);
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm e_142 = NULL;
  e_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_142), term_t_56);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_141 = NULL,z_141 = NULL;
  ATerm u_56 = t;
  int w_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_56;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_56);
    }
  else
    {
      t = u_56;
      t = fetch_1_0(x_12, t);
    }
  t = term_x_56;
  t = echo_0_0(t);
  t = term_z_14;
  y_141 = t;
  t = term_a_15;
  z_141 = t;
  t = term_y_56;
  t = k_12(y_141, z_141, t);
  t = reverse_acc_2_0(_id, z_12, t);
  t = map_1_0(b_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL;
  g_142 = t;
  {
    ATerm a_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_142;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_57 = ATgetFirst((ATermList) t);
                ATerm g_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_142;
          }
        ;
        LocalPopChoice(c_57);
      }
    else
      {
        t = a_57;
        t = (ATerm) ATinsert(ATempty, g_142);
      }
    h_142 = t;
    t = term_r_53;
    i_142 = t;
    t = SSL_printnl(i_142, h_142);
    t = g_142;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_56;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm m_142 = NULL,n_142 = NULL;
  t = term_h_57;
  m_142 = t;
  t = term_r_14;
  n_142 = t;
  t = term_i_57;
  t = m_12(m_142, n_142, t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = term_j_57;
  return(t);
}
ATerm f_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm o_142 = NULL,p_142 = NULL,q_142 = NULL,r_142 = NULL;
  t = term_h_57;
  q_142 = t;
  t = term_r_14;
  r_142 = t;
  t = term_i_57;
  t = m_12(q_142, r_142, t);
  t = term_k_57;
  o_142 = t;
  t = term_r_14;
  p_142 = t;
  t = term_m_57;
  t = m_12(o_142, p_142, t);
  t = term_n_57;
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_s_57;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_57 = t;
  int u_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_13, d_13, e_13, t);
      ;
      LocalPopChoice(u_57);
    }
  else
    {
      t = t_57;
      t = Option_3_0(f_13, g_13, h_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm s_142 = NULL,t_142 = NULL,u_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL,k_33 = NULL;
  x_142 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_142 = ATgetFirst((ATermList) t);
      u_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_142);
  s_142 = t;
  t = t_142;
  t = v_92(t);
  v_142 = t;
  t = u_142;
  t = w_92(t);
  w_142 = t;
  t = (ATerm) ATinsert(CheckATermList(w_142), v_142);
  k_33 = t;
  t = SSLsetAnnotations(k_33, s_142);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm c_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL,h_143 = NULL,i_143 = NULL,p_33 = NULL;
  if(((c_143 != NULL) && (c_143 != t)))
    _fail(t);
  else
    c_143 = t;
  {
    ATerm v_57 = t;
    int w_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_57;
        t = j_133(t);
        ;
        LocalPopChoice(w_57);
      }
    else
      {
        t = v_57;
      }
    t = not_null(c_143);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_143 != NULL) && (e_143 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_143 = ATgetFirst((ATermList) t);
        if(((f_143 != NULL) && (f_143 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          f_143 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_143));
    if(((d_143 != NULL) && (d_143 != t)))
      _fail(t);
    else
      d_143 = t;
    t = term_b_56;
    if(((i_143 != NULL) && (i_143 != t)))
      _fail(t);
    else
      i_143 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_56, not_null(e_143));
    t = m_12(not_null(i_143), not_null(e_143), t);
    t = not_null(f_143);
    {
      ATerm s_143 (ATerm t)
      {
        ATerm a_58 = t;
        int b_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_58 = t;
            int d_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_143 = NULL;
                l_143 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_143;
                ;
                LocalPopChoice(d_58);
              }
            else
              {
                t = c_58;
                t = j_133(t);
                t = Cons_2_0(_id, s_143, t);
              }
            ;
            LocalPopChoice(b_58);
          }
        else
          {
            t = a_58;
            {
              ATerm o_143 = NULL,p_143 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_143 = ATgetFirst((ATermList) t);
                  p_143 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_143), (ATerm) ATmakeAppl(sym_Undefined_1, o_143));
            }
          }
        return(t);
      }
      t = s_143(t);
      if(((h_143 != NULL) && (h_143 != t)))
        _fail(t);
      else
        h_143 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(h_143)), (ATerm) ATmakeAppl(sym_Program_1, not_null(e_143)));
      if(((p_33 != NULL) && (p_33 != t)))
        _fail(t);
      else
        p_33 = t;
      t = SSLsetAnnotations(not_null(p_33), not_null(d_143));
    }
  }
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm e_144 = NULL;
  e_144 = t;
  if(match_string(t, "--help"))
    {
      t = e_144;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_144;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_144;
        }
    }
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm f_144 = NULL,g_144 = NULL;
  t = term_s_56;
  f_144 = t;
  t = term_r_14;
  g_144 = t;
  t = term_e_58;
  t = m_12(f_144, g_144, t);
  t = term_f_58;
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = term_g_58;
  return(t);
}
ATerm n_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_133 (ATerm), ATerm t)
{
  ATerm x_143 = NULL,y_143 = NULL,z_143 = NULL,a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL;
  if(((z_143 != NULL) && (z_143 != t)))
    _fail(t);
  else
    z_143 = t;
  t = term_z_14;
  if(((b_144 != NULL) && (b_144 != t)))
    _fail(t);
  else
    b_144 = t;
  t = term_a_15;
  if(((c_144 != NULL) && (c_144 != t)))
    _fail(t);
  else
    c_144 = t;
  t = (ATerm) ATempty;
  if(((d_144 != NULL) && (d_144 != t)))
    _fail(t);
  else
    d_144 = t;
  t = SSL_table_put(not_null(b_144), not_null(c_144), not_null(d_144));
  t = not_null(z_143);
  {
    ATerm i_13 (ATerm t)
    {
      ATerm h_58 = t;
      int i_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_133(t);
          ;
          LocalPopChoice(i_58);
        }
      else
        {
          t = h_58;
          {
            ATerm j_58 = t;
            int k_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_13, k_13, l_13, t);
                ;
                LocalPopChoice(k_58);
              }
            else
              {
                t = j_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_13, t);
    {
      ATerm l_58 = t;
      int m_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_144 = NULL;
          n_144 = t;
          {
            ATerm n_58 = t;
            int o_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_80 = NULL;
                t = n_144;
                {
                  ATerm p_58 = t;
                  int r_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_56;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_58);
                    }
                  else
                    {
                      t = p_58;
                      t = fetch_1_0(n_13, t);
                    }
                  t = n_144;
                  t = default_system_usage_0_0(t);
                  t = term_i_55;
                  l_80 = t;
                  t = SSL_exit(l_80);
                }
                ;
                LocalPopChoice(o_58);
              }
            else
              {
                t = n_58;
                {
                  ATerm p_80 = NULL;
                  t = term_h_57;
                  t = get_config_0_0(t);
                  t = n_144;
                  t = default_system_about_0_0(t);
                  t = term_i_55;
                  p_80 = t;
                  t = SSL_exit(p_80);
                }
              }
          }
          ;
          LocalPopChoice(m_58);
        }
      else
        {
          t = l_58;
          {
            ATerm t_58 = t;
            int u_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_144 = NULL,p_144 = NULL,q_144 = NULL;
                ATerm o_13 (ATerm t)
                {
                  ATerm r_144 = NULL,s_144 = NULL,t_144 = NULL,b_34 = NULL;
                  t_144 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_144 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_144);
                  r_144 = t;
                  t = s_144;
                  if(((x_143 != NULL) && (x_143 != t)))
                    _fail(t);
                  else
                    x_143 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_144);
                  b_34 = t;
                  t = SSLsetAnnotations(b_34, r_144);
                  return(t);
                }
                t = fetch_1_0(o_13, t);
                t = term_s_14;
                if(((p_144 != NULL) && (p_144 != t)))
                  _fail(t);
                else
                  p_144 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_143)), term_v_58);
                if(((q_144 != NULL) && (q_144 != t)))
                  _fail(t);
                else
                  q_144 = t;
                t = SSL_printnl(not_null(p_144), not_null(q_144));
                t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_143)), term_v_58));
                t = default_system_usage_0_0(t);
                t = term_y_14;
                if(((o_144 != NULL) && (o_144 != t)))
                  _fail(t);
                else
                  o_144 = t;
                t = SSL_exit(not_null(o_144));
                ;
                LocalPopChoice(u_58);
              }
            else
              {
                t = t_58;
              }
          }
        }
      if(((y_143 != NULL) && (y_143 != t)))
        _fail(t);
      else
        y_143 = t;
      t = term_z_14;
      if(((a_144 != NULL) && (a_144 != t)))
        _fail(t);
      else
        a_144 = t;
      t = SSL_table_destroy(not_null(a_144));
      t = not_null(y_143);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm t)
{
  ATerm y_144 = NULL,z_144 = NULL,a_145 = NULL,b_145 = NULL;
  t = parse_options_1_0(i_131, t);
  y_144 = t;
  t = term_d_52;
  b_145 = t;
  t = SSL_table_create(b_145);
  t = term_d_52;
  z_144 = t;
  t = term_e_52;
  a_145 = t;
  t = SSL_table_put(z_144, a_145, y_144);
  t = y_144;
  t = k_131(t);
  {
    ATerm x_58 = t;
    int y_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_131, t);
        ;
        LocalPopChoice(y_58);
      }
    else
      {
        t = x_58;
        {
          ATerm z_58 = t;
          int a_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_131(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_59);
            }
          else
            {
              t = z_58;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = if_verbose2_1_0(w_13, t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm c_145 = NULL,d_145 = NULL;
  t = term_b_59;
  c_145 = t;
  t = term_r_14;
  d_145 = t;
  t = term_c_59;
  t = m_12(c_145, d_145, t);
  t = term_d_59;
  return(t);
}
ATerm v_13 (ATerm t)
{
  t = term_e_59;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm e_145 = NULL,f_145 = NULL,g_145 = NULL,h_145 = NULL;
  e_145 = t;
  t = term_b_56;
  t = get_config_0_0(t);
  f_145 = t;
  t = term_s_14;
  g_145 = t;
  t = (ATerm) ATinsert(ATempty, f_145);
  h_145 = t;
  t = SSL_printnl(g_145, h_145);
  t = e_145;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm f_59 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_130(t);
        ;
        LocalPopChoice(g_59);
      }
    else
      {
        t = f_59;
        {
          ATerm h_59 = t;
          int i_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(i_59);
            }
          else
            {
              t = h_59;
              {
                ATerm j_59 = t;
                int k_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(k_59);
                  }
                else
                  {
                    t = j_59;
                    {
                      ATerm l_59 = t;
                      int n_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_13, u_13, v_13, t);
                          ;
                          LocalPopChoice(n_59);
                        }
                      else
                        {
                          t = l_59;
                          {
                            ATerm o_59 = t;
                            int p_59 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_59);
                              }
                            else
                              {
                                t = o_59;
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
  ATerm s_13 (ATerm t)
  {
    ATerm i_145 = NULL,j_145 = NULL,k_145 = NULL;
    if(((j_145 != NULL) && (j_145 != t)))
      _fail(t);
    else
      j_145 = t;
    {
      ATerm q_59 = t;
      int r_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_145 != NULL) && (i_145 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_145 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_13, t);
          ;
          LocalPopChoice(r_59);
        }
      else
        {
          t = q_59;
          t = term_u_59;
          if(((i_145 != NULL) && (i_145 != t)))
            _fail(t);
          else
            i_145 = t;
        }
      t = not_null(i_145);
      t = ReadFromFile_0_0(t);
      if(((k_145 != NULL) && (k_145 != t)))
        _fail(t);
      else
        k_145 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_145), not_null(k_145));
      t = apply_strategy_1_0(r_130, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(q_13, t_130, r_13, s_13, t);
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm l_145 = NULL,m_145 = NULL;
  if(match_cons(t, sym__2))
    {
      l_145 = ATgetArgument(t, 0);
      m_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(l_145, m_145, t);
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm v_59 = t;
  int w_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_14, f_14, g_14, t);
      ;
      LocalPopChoice(w_59);
    }
  else
    {
      t = v_59;
      {
        ATerm x_59 = t;
        int a_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(h_14, j_14, m_14, t);
            ;
            LocalPopChoice(a_60);
          }
        else
          {
            t = x_59;
            t = ArgOption_3_0(n_14, p_14, q_14, t);
          }
      }
    }
  return(t);
}
ATerm d_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = term_b_60;
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = term_c_60;
  return(t);
}
ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm m_14 (ATerm t)
{
  t = term_d_60;
  return(t);
}
ATerm n_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm n_145 = NULL;
  n_145 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, n_145);
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = term_g_60;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(a_14, c_14, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

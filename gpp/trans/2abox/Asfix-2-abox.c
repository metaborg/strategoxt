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
ATerm term_x_60;
ATerm term_w_60;
ATerm term_u_60;
ATerm term_t_60;
ATerm term_n_60;
ATerm term_x_59;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_t_59;
ATerm term_n_59;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_p_58;
ATerm term_k_58;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_a_57;
ATerm term_y_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_n_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_r_55;
ATerm term_j_55;
ATerm term_e_55;
ATerm term_b_55;
ATerm term_n_54;
ATerm term_h_54;
ATerm term_g_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_d_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_m_51;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_x_48;
ATerm term_f_47;
ATerm term_c_47;
ATerm term_z_46;
ATerm term_r_46;
ATerm term_o_46;
ATerm term_h_46;
ATerm term_a_46;
ATerm term_t_45;
ATerm term_m_45;
ATerm term_g_45;
ATerm term_b_45;
ATerm term_y_44;
ATerm term_u_44;
ATerm term_n_44;
ATerm term_h_44;
ATerm term_b_44;
ATerm term_y_43;
ATerm term_v_43;
ATerm term_q_43;
ATerm term_m_43;
ATerm term_j_43;
ATerm term_w_42;
ATerm term_j_42;
ATerm term_f_42;
ATerm term_a_42;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_j_41;
ATerm term_d_41;
ATerm term_t_40;
ATerm term_q_40;
ATerm term_n_40;
ATerm term_i_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_t_39;
ATerm term_r_39;
ATerm term_j_39;
ATerm term_s_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_f_38;
ATerm term_u_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_y_36;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_f_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_f_35;
ATerm term_q_34;
ATerm term_x_33;
ATerm term_k_31;
ATerm term_z_29;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_b_27;
ATerm term_x_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_i_21;
ATerm term_m_19;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
void init_constant_terms (void)
{
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_SOpt_2, term_b_16, term_c_16);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_lit_1, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_lit_1, term_q_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_SOpt_2, term_h_27, term_k_27);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Arg_1, term_x_14);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym__2, term_u_52, term_v_52);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym__2, term_z_55, term_d_56);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_56);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(sym__2, term_j_56, term_q_14);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_z_14);
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(sym__2, term_d_58, term_q_14);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(sym__2, term_g_58, term_q_14);
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym__2, term_s_57, term_q_14);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(sym__2, term_t_59, term_q_14);
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm l_10 (ATerm f_54, ATerm g_54, ATerm e_54, ATerm);
ATerm Option_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm m_10 (ATerm b_64, ATerm);
ATerm e_0 (ATerm);
ATerm has_significant_layout_0_0 (ATerm);
ATerm has_layout_0_0 (ATerm);
ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm InsLayout_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm v_0 (ATerm);
ATerm insert_layout_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm collect_p__1_0 (ATerm x_118 (ATerm), ATerm);
ATerm fatal_ambiguity_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm h_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm w_37 (ATerm f_33, ATerm m_33, ATerm n_33, ATerm);
ATerm o_10 (ATerm r_19, ATerm q_19, ATerm);
ATerm instantiate_list_1_0 (ATerm d_119 (ATerm), ATerm);
ATerm q_10 (ATerm g_22, ATerm h_22, ATerm e_22, ATerm f_22, ATerm);
ATerm c_43 (ATerm x_40, ATerm y_40, ATerm z_40, ATerm);
ATerm instantiate_sep_list_1_0 (ATerm f_119 (ATerm), ATerm);
ATerm r_10 (ATerm o_42, ATerm p_42, ATerm);
ATerm s_10 (ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm m_23, ATerm n_23, ATerm);
ATerm genzip_4_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm nzip_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm w_10 (ATerm d_23, ATerm e_23, ATerm c_23, ATerm i_23, ATerm);
ATerm y_10 (ATerm w_41, ATerm x_41, ATerm);
ATerm z_10 (ATerm y_28, ATerm w_28, ATerm x_28, ATerm);
ATerm r_2 (ATerm);
ATerm index_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm symbol2abox_0_0 (ATerm);
ATerm seq2abox_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm a_11 (ATerm c_61, ATerm b_61, ATerm);
ATerm symbols2pp_entries_1_0 (ATerm b_118 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm b_11 (ATerm p_39, ATerm q_39, ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm _2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm);
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
ATerm y_91 (ATerm w_90, ATerm x_90, ATerm y_90, ATerm);
ATerm number_node_1_0 (ATerm f_118 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm symbol2abox_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm d_99 (ATerm f_97, ATerm g_97, ATerm h_97, ATerm);
ATerm e_99 (ATerm g_98, ATerm h_98, ATerm i_98, ATerm j_98, ATerm p_98, ATerm);
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
ATerm l_104 (ATerm d_104, ATerm);
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
ATerm x_107 (ATerm t_107, ATerm);
ATerm p_6 (ATerm);
ATerm toAlphaNum_0_0 (ATerm);
ATerm f_11 (ATerm e_26, ATerm f_26, ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm list_ana_1_0 (ATerm q_119 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm lit2str_0_0 (ATerm);
ATerm a_114 (ATerm b_113, ATerm c_113, ATerm d_113, ATerm);
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
ATerm k_11 (ATerm d_20, ATerm e_20, ATerm c_20, ATerm b_20, ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm l_11 (ATerm k_19, ATerm i_19, ATerm j_19, ATerm l_19, ATerm);
ATerm filter_1_0 (ATerm o_103 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm q_90 (ATerm), ATerm);
ATerm sometd_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm c_8 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm m_11 (ATerm z_60, ATerm a_61, ATerm);
ATerm unescape_chars_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm at_last_1_0 (ATerm i_97 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm unquote_chars_2_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm u_11 (ATerm y_60, ATerm);
ATerm oncetd_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm x_11 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t_31, ATerm s_31, ATerm);
ATerm y_11 (ATerm l_100 (ATerm), ATerm p_31, ATerm o_31, ATerm);
ATerm foldr_3_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm);
ATerm z_8 (ATerm);
ATerm collect_om_2_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm);
ATerm c_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm z_11 (ATerm u_24, ATerm t_24, ATerm);
ATerm c_12 (ATerm q_44, ATerm r_44, ATerm);
ATerm d_12 (ATerm e_48, ATerm f_48, ATerm);
ATerm f_12 (ATerm e_109 (ATerm), ATerm j_455, ATerm i_48, ATerm);
ATerm e_12 (ATerm a_48, ATerm b_48, ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm x_9 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_112 (ATerm), ATerm);
ATerm s_133 (ATerm m_133, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_12 (ATerm g_48, ATerm);
ATerm h_12 (ATerm s_44, ATerm t_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_135 (ATerm c_134, ATerm);
ATerm e_135 (ATerm g_134, ATerm h_134, ATerm i_134, ATerm);
ATerm f_135 (ATerm q_134, ATerm r_134, ATerm s_134, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_9 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_96 (ATerm), ATerm);
ATerm b_12 (ATerm g_39, ATerm h_39, ATerm);
ATerm debug_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_110 (ATerm), ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm c_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_12 (ATerm h_49, ATerm i_49, ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm g_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm i_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_12 (ATerm q_41, ATerm r_41, ATerm);
ATerm foldr_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_11 (ATerm);
ATerm s_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_110 (ATerm), ATerm);
ATerm n_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_12 (ATerm);
ATerm need_help_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm k_12 (ATerm w_55, ATerm x_55, ATerm);
ATerm r_12 (ATerm);
ATerm x_12 (ATerm);
ATerm z_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_115 (ATerm), ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm parse_options_1_0 (ATerm g_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm);
ATerm q_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm iowrap_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm);
ATerm y_13 (ATerm);
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
ATerm io_Asfix_2_abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,f_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_q_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_r_14;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), b_0), term_s_14);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_x_14;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,w_0 = NULL,x_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL;
      t = term_q_14;
      t = n_0(t);
      y_0 = t;
      t = term_y_14;
      z_0 = t;
      t = term_z_14;
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, y_0);
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
      t = l_0(t);
      t = w_0;
      t = m_0(t);
      g_1 = t;
      t = (ATerm) ATinsert(CheckATermList(x_0), g_1);
    }
  return(t);
}
ATerm l_10 (ATerm f_54, ATerm g_54, ATerm e_54, ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_54, g_54);
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_15 = ATgetArgument(t, 0);
            ATerm e_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_54, g_54);
        t = k_12(f_54, g_54, t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = (ATerm) ATempty;
      }
    l_1 = t;
    t = (ATerm) ATinsert(CheckATermList(l_1), e_54);
    m_1 = t;
    t = SSL_table_put(f_54, g_54, m_1);
    t = j_1;
  }
  return(t);
}
ATerm Option_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
      t = term_q_14;
      t = k_0(t);
      w_1 = t;
      t = term_y_14;
      x_1 = t;
      t = term_z_14;
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, w_1);
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
      t = i_0(t);
      t = term_q_14;
      t = j_0(t);
      b_2 = t;
      t = (ATerm) ATinsert(CheckATermList(v_1), b_2);
    }
  return(t);
}
ATerm m_10 (ATerm b_64, ATerm t)
{
  ATerm f_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(b_64);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, c_2)));
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = f_15;
      {
        ATerm d_2 = NULL;
        t = SSL_concat_strings(b_64);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, d_2);
      }
    }
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm l_15 = t;
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
      t = l_15;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL;
  g_2 = t;
  {
    ATerm s_15 = t;
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
        t = s_15;
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
    t = filter_1_0(e_0, t);
    {
      ATerm t_15 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_15;
        }
      t = g_2;
    }
  }
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm u_15 = t;
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
      t = u_15;
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
ATerm InsLayout_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm n_5 (ATerm q_3, ATerm r_3, ATerm s_3, ATerm t)
    {
      ATerm u_3 = NULL,a_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
      t = k_119(t);
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
      t = k_119(t);
      if(match_cons(t, sym__2))
        {
          k_4 = ATgetArgument(t, 0);
          {
            ATerm v_15 = ATgetArgument(t, 1);
            if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
              {
                l_4 = ATgetFirst((ATermList) v_15);
                q_4 = (ATerm) ATgetNext((ATermList) v_15);
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
          ATerm w_15 = ATgetArgument(t, 0);
          if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
            {
              n_4 = ATgetFirst((ATermList) w_15);
              s_4 = (ATerm) ATgetNext((ATermList) w_15);
            }
          else
            _fail(t);
          r_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 = NULL,u_4 = NULL;
            t = term_a_16;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_16), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_4))), t_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_4))))), r_4);
            ;
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_4 = NULL,x_4 = NULL;
                  ATerm h_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm y_4 = NULL;
                      y_4 = t;
                      t = term_a_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(q_0, t);
                      t = y_4;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = h_16;
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
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
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
            ATerm i_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_5(b_5, j_5, a_5, t);
                ;
                LocalPopChoice(j_16);
              }
            else
              {
                t = i_16;
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
                  ATerm k_16 = t;
                  int l_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_5(b_5, j_5, a_5, t);
                      ;
                      LocalPopChoice(l_16);
                    }
                  else
                    {
                      t = k_16;
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
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_16 = t;
      if((PushChoice() == 0))
        {
          ATerm v_24 = NULL,x_24 = NULL,y_24 = NULL,o_7 = NULL;
          y_24 = t;
          if(match_cons(t, sym_layout_1))
            {
              x_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_24);
          v_24 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, x_24);
          o_7 = t;
          t = SSLsetAnnotations(o_7, v_24);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_16;
        }
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm w_25 = NULL,x_25 = NULL;
        w_25 = t;
        if(match_cons(t, sym_layout_1))
          {
            x_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm p_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_17 = NULL,k_17 = NULL,m_17 = NULL,p_7 = NULL;
              t = SSLgetAnnotations(w_25);
              k_17 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, x_25);
              p_7 = t;
              t = SSLsetAnnotations(p_7, k_17);
              m_17 = t;
              t = term_a_16;
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
              LocalPopChoice(q_16);
            }
          else
            {
              t = p_16;
              {
                ATerm w_17 = NULL,x_17 = NULL,q_7 = NULL;
                t = SSLgetAnnotations(w_25);
                x_17 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, x_25);
                q_7 = t;
                t = SSLsetAnnotations(q_7, x_17);
                {
                  ATerm r_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm a_18 = NULL;
                      a_18 = t;
                      t = term_a_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(v_0, t);
                      t = a_18;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = r_16;
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
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,b_26 = NULL,c_26 = NULL,g_26 = NULL,n_7 = NULL,j_7 = NULL;
  c_7 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_7);
  u_6 = t;
  t = a_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_6 = ATgetFirst((ATermList) t);
      {
        ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_16 = ATgetFirst((ATermList) t);
      b_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_6, b_7);
  j_7 = t;
  t = SSLsetAnnotations(j_7, u_6);
  {
    ATerm r_26 (ATerm t)
    {
      ATerm p_27 (ATerm t_14, ATerm u_14, ATerm v_14, ATerm t)
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
        t = InsLayout_1_0(r_26, t);
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
                ATerm u_16 = t;
                int v_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_1 = NULL,i_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                    t = InsLayout_1_0(r_26, t);
                    if(match_cons(t, sym__2))
                      {
                        h_1 = ATgetArgument(t, 0);
                        i_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, n_15, h_1), i_1);
                    ;
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
                          t = p_27(r_15, p_15, q_15, t);
                          ;
                          LocalPopChoice(x_16);
                        }
                      else
                        {
                          t = w_16;
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
                    ATerm y_16 = t;
                    int z_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_2 = NULL,w_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                        t = InsLayout_1_0(r_26, t);
                        if(match_cons(t, sym__2))
                          {
                            v_2 = ATgetArgument(t, 0);
                            w_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, n_15, v_2), w_2);
                        ;
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
                              t = p_27(r_15, p_15, q_15, t);
                              ;
                              LocalPopChoice(b_17);
                            }
                          else
                            {
                              t = a_17;
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
                        ATerm c_17 = t;
                        int d_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_5 = NULL,u_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                            t = InsLayout_1_0(r_26, t);
                            if(match_cons(t, sym__2))
                              {
                                t_5 = ATgetArgument(t, 0);
                                u_5 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, n_15, t_5), u_5);
                            ;
                            LocalPopChoice(d_17);
                          }
                        else
                          {
                            t = c_17;
                            {
                              ATerm f_17 = t;
                              int g_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = p_27(r_15, p_15, q_15, t);
                                  ;
                                  LocalPopChoice(g_17);
                                }
                              else
                                {
                                  t = f_17;
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
                            ATerm h_17 = t;
                            int i_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_6 = NULL,i_6 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, m_15, q_15);
                                t = InsLayout_1_0(r_26, t);
                                if(match_cons(t, sym__2))
                                  {
                                    h_6 = ATgetArgument(t, 0);
                                    i_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, n_15, o_15, h_6), i_6);
                                ;
                                LocalPopChoice(i_17);
                              }
                            else
                              {
                                t = h_17;
                                {
                                  ATerm j_17 = t;
                                  int l_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = p_27(r_15, p_15, q_15, t);
                                      ;
                                      LocalPopChoice(l_17);
                                    }
                                  else
                                    {
                                      t = j_17;
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
                                ATerm n_17 = t;
                                int o_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_7 = NULL,a_8 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                    t = InsLayout_1_0(r_26, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        z_7 = ATgetArgument(t, 0);
                                        a_8 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, n_15, z_7), a_8);
                                    ;
                                    LocalPopChoice(o_17);
                                  }
                                else
                                  {
                                    t = n_17;
                                    {
                                      ATerm p_17 = t;
                                      int q_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = p_27(r_15, p_15, q_15, t);
                                          ;
                                          LocalPopChoice(q_17);
                                        }
                                      else
                                        {
                                          t = p_17;
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
                                    ATerm r_17 = t;
                                    int s_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_8 = NULL,o_8 = NULL,u_8 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, n_15, q_15);
                                        t = InsLayout_1_0(r_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            l_8 = ATgetArgument(t, 0);
                                            {
                                              ATerm t_17 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                        t = InsLayout_1_0(r_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            o_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, l_8, o_8), u_8);
                                        ;
                                        LocalPopChoice(s_17);
                                      }
                                    else
                                      {
                                        t = r_17;
                                        {
                                          ATerm u_17 = t;
                                          int v_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = p_27(r_15, p_15, q_15, t);
                                              ;
                                              LocalPopChoice(v_17);
                                            }
                                          else
                                            {
                                              t = u_17;
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
                                        ATerm y_17 = t;
                                        int z_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm f_10 = NULL,i_10 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                            t = InsLayout_1_0(r_26, t);
                                            if(match_cons(t, sym__2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                i_10 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, n_15, f_10), i_10);
                                            ;
                                            LocalPopChoice(z_17);
                                          }
                                        else
                                          {
                                            t = y_17;
                                            {
                                              ATerm b_18 = t;
                                              int c_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = p_27(r_15, p_15, q_15, t);
                                                  ;
                                                  LocalPopChoice(c_18);
                                                }
                                              else
                                                {
                                                  t = b_18;
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
                                            ATerm d_18 = t;
                                            int e_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_11 = NULL,t_11 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                                t = InsLayout_1_0(r_26, t);
                                                if(match_cons(t, sym__2))
                                                  {
                                                    r_11 = ATgetArgument(t, 0);
                                                    t_11 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, n_15, r_11), t_11);
                                                ;
                                                LocalPopChoice(e_18);
                                              }
                                            else
                                              {
                                                t = d_18;
                                                {
                                                  ATerm f_18 = t;
                                                  int g_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = p_27(r_15, p_15, q_15, t);
                                                      ;
                                                      LocalPopChoice(g_18);
                                                    }
                                                  else
                                                    {
                                                      t = f_18;
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
                                                ATerm h_18 = t;
                                                int i_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm m_13 = NULL,p_13 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                                    t = InsLayout_1_0(r_26, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        m_13 = ATgetArgument(t, 0);
                                                        p_13 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, n_15, m_13), p_13);
                                                    ;
                                                    LocalPopChoice(i_18);
                                                  }
                                                else
                                                  {
                                                    t = h_18;
                                                    {
                                                      ATerm j_18 = t;
                                                      int l_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = p_27(r_15, p_15, q_15, t);
                                                          ;
                                                          LocalPopChoice(l_18);
                                                        }
                                                      else
                                                        {
                                                          t = j_18;
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
                                                    ATerm m_18 = t;
                                                    int n_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm x_15 = NULL,g_16 = NULL;
                                                        t = (ATerm) ATmakeAppl(sym__2, o_15, q_15);
                                                        t = InsLayout_1_0(r_26, t);
                                                        if(match_cons(t, sym__2))
                                                          {
                                                            x_15 = ATgetArgument(t, 0);
                                                            g_16 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, n_15, x_15), g_16);
                                                        ;
                                                        LocalPopChoice(n_18);
                                                      }
                                                    else
                                                      {
                                                        t = m_18;
                                                        {
                                                          ATerm o_18 = t;
                                                          int p_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = p_27(r_15, p_15, q_15, t);
                                                              ;
                                                              LocalPopChoice(p_18);
                                                            }
                                                          else
                                                            {
                                                              t = o_18;
                                                              t = r_15;
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm q_18 = t;
                                                  int r_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = p_27(r_15, p_15, q_15, t);
                                                      ;
                                                      LocalPopChoice(r_18);
                                                    }
                                                  else
                                                    {
                                                      t = q_18;
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
    t = r_26(t);
    t_6 = t;
    if(match_cons(t, sym__2))
      {
        q_6 = ATgetArgument(t, 0);
        r_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_6);
    o_6 = t;
    t = q_6;
    {
      ATerm s_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_18 = t;
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
              t = v_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_18 = ATgetFirst((ATermList) t);
                  ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, q_6);
          ;
          LocalPopChoice(u_18);
        }
      else
        {
          t = s_18;
        }
      s_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_6, r_6);
      n_7 = t;
      t = SSLsetAnnotations(n_7, o_6);
      if(match_cons(t, sym__2))
        {
          m_6 = ATgetArgument(t, 0);
          {
            ATerm b_19 = ATgetArgument(t, 1);
            if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
              {
                n_6 = ATgetFirst((ATermList) b_19);
                {
                  ATerm c_19 = (ATerm) ATgetNext((ATermList) b_19);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_6), m_6), l_6);
      t = filter_1_0(r_0, t);
      t = flat_list_0_0(t);
      g_26 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_26 = ATgetFirst((ATermList) t);
          c_26 = (ATerm) ATgetNext((ATermList) t);
          t = c_26;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = b_26;
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_16), g_26);
            }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_d_16), g_26);
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
ATerm collect_p__1_0 (ATerm x_118 (ATerm), ATerm t)
{
  ATerm x_27 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL;
        t = x_118(t);
        v_27 = t;
        t = (ATerm) ATinsert(ATempty, v_27);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
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
          t = foldr_3_0(b_1, conc_0_0, x_27, t);
        }
      }
    return(t);
  }
  t = x_27(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,f_28 = NULL,g_28 = NULL,q_8 = NULL;
  g_28 = t;
  if(match_cons(t, sym_amb_1))
    {
      f_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_28);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, f_28);
  q_8 = t;
  t = SSLsetAnnotations(q_8, b_28);
  t = term_r_14;
  z_27 = t;
  t = (ATerm) ATinsert(ATempty, term_m_19);
  a_28 = t;
  t = SSL_printnl(z_27, a_28);
  t = term_x_14;
  y_27 = t;
  t = SSL_exit(y_27);
  t = (ATerm) ATinsert(ATempty, term_m_19);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_30;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_30 = ATgetFirst((ATermList) t);
          j_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_19 = NULL,g_19 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(h_30);
            d_19 = t;
            t = i_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_30;
            t = flat_list_0_0(t);
            g_19 = t;
            t = (ATerm) ATinsert(CheckATermList(g_19), i_30);
            t_8 = t;
            t = SSLsetAnnotations(t_8, d_19);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            {
              ATerm p_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,a_20 = NULL,v_8 = NULL;
                  t = SSLgetAnnotations(h_30);
                  x_19 = t;
                  t = i_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = i_30;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm t_19 = ATgetFirst((ATermList) t);
                          ATerm u_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = i_30;
                    }
                  t = (ATerm) ATinsert(CheckATermList(j_30), i_30);
                  v_8 = t;
                  t = SSLsetAnnotations(v_8, x_19);
                  a_20 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_19 = ATgetFirst((ATermList) t);
                      {
                        ATerm y_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = a_20;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm z_19 = ATgetFirst((ATermList) t);
                      v_19 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, w_19, v_19);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = p_19;
                  {
                    ATerm u_20 = NULL,g_21 = NULL,w_8 = NULL;
                    t = SSLgetAnnotations(h_30);
                    u_20 = t;
                    t = j_30;
                    t = flat_list_0_0(t);
                    g_21 = t;
                    t = (ATerm) ATinsert(CheckATermList(g_21), i_30);
                    w_8 = t;
                    t = SSLsetAnnotations(w_8, u_20);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,r_30 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      r_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
      {
        ATerm u_30 = NULL,v_30 = NULL;
        t = term_q_14;
        t = h_0(t);
        v_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_30, v_30);
        t = index_0_0(t);
        u_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_30, u_30);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm x_30 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          r_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_q_14;
      t = h_0(t);
      x_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_30, x_30);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = bottomup_1_0(r_90, t);
    return(t);
  }
  t = SRTS_all(c_1, t);
  t = r_90(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym_Arg_1))
    {
      e_33 = ATgetArgument(t, 0);
      {
        ATerm u_21 = NULL,b_9 = NULL;
        t = SSLgetAnnotations(d_33);
        u_21 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, e_33);
        b_9 = t;
        t = SSLsetAnnotations(b_9, u_21);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          e_33 = ATgetArgument(t, 0);
          c_33 = ATgetArgument(t, 1);
          {
            ATerm i_22 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(d_33);
            i_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, e_33, c_33);
            d_9 = t;
            t = SSLsetAnnotations(d_9, i_22);
          }
        }
      else
        {
          ATerm x_22 = NULL,e_9 = NULL;
          if(match_cons(t, sym_S_1))
            {
              e_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_33);
          x_22 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, e_33);
          e_9 = t;
          t = SSLsetAnnotations(e_9, x_22);
        }
    }
  return(t);
}
ATerm w_37 (ATerm f_33, ATerm m_33, ATerm n_33, ATerm t)
{
  ATerm e_34 = NULL,g_9 = NULL;
  t = SSLgetAnnotations(f_33);
  e_34 = t;
  t = m_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = n_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
  g_9 = t;
  t = SSLsetAnnotations(g_9, e_34);
  return(t);
}
ATerm o_10 (ATerm r_19, ATerm q_19, ATerm t)
{
  ATerm n_31 = NULL,r_31 = NULL,v_31 = NULL,w_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,f_9 = NULL;
  v_31 = t;
  if(match_cons(t, sym__2))
    {
      y_31 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_31);
  w_31 = t;
  t = y_31;
  t = collect_p__1_0(d_1, t);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_32, z_31);
  f_9 = t;
  t = SSLsetAnnotations(f_9, w_31);
  {
    ATerm v_37 (ATerm t)
    {
      ATerm y_37 (ATerm j_34, ATerm k_34, ATerm l_34, ATerm m_34, ATerm t)
      {
        ATerm p_34 = NULL,r_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, k_34, m_34);
        t = v_37(t);
        if(match_cons(t, sym__2))
          {
            p_34 = ATgetArgument(t, 0);
            r_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_34), (ATerm) ATmakeAppl(sym_Arg_1, j_34)), (ATerm) ATinsert(CheckATermList(r_34), l_34));
        return(t);
      }
      ATerm z_37 (ATerm w_34, ATerm x_34, ATerm a_35, ATerm d_35, ATerm e_35, ATerm t)
      {
        ATerm j_35 = NULL,u_35 = NULL;
        t = x_34;
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_35, e_35);
        t = v_37(t);
        if(match_cons(t, sym__2))
          {
            j_35 = ATgetArgument(t, 0);
            u_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_35), (ATerm) ATmakeAppl(sym_Arg2_2, w_34, x_34)), (ATerm) ATinsert(CheckATermList(u_35), d_35));
        return(t);
      }
      ATerm b_38 (ATerm x_35, ATerm a_36, ATerm b_36, ATerm t)
      {
        ATerm g_36 = NULL,k_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, a_36, b_36);
        t = v_37(t);
        if(match_cons(t, sym__2))
          {
            g_36 = ATgetArgument(t, 0);
            k_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_36), x_35), k_36);
        return(t);
      }
      ATerm p_36 = NULL,r_36 = NULL,s_36 = NULL,u_36 = NULL,v_36 = NULL,x_36 = NULL,e_37 = NULL,h_37 = NULL,i_37 = NULL;
      s_36 = t;
      if(match_cons(t, sym__2))
        {
          u_36 = ATgetArgument(t, 0);
          e_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          i_37 = (ATerm) ATgetNext((ATermList) t);
          t = u_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_36 = ATgetFirst((ATermList) t);
              x_36 = (ATerm) ATgetNext((ATermList) t);
              t = v_36;
              if(match_cons(t, sym_Arg_1))
                {
                  p_36 = ATgetArgument(t, 0);
                  {
                    ATerm f_20 = t;
                    int g_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_37(s_36, u_36, e_37, t);
                        ;
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
                              t = y_37(p_36, x_36, h_37, i_37, t);
                              ;
                              LocalPopChoice(i_20);
                            }
                          else
                            {
                              t = h_20;
                              t = b_38(v_36, x_36, i_37, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      p_36 = ATgetArgument(t, 0);
                      r_36 = ATgetArgument(t, 1);
                      {
                        ATerm j_20 = t;
                        int k_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_37(s_36, u_36, e_37, t);
                            ;
                            LocalPopChoice(k_20);
                          }
                        else
                          {
                            t = j_20;
                            {
                              ATerm l_20 = t;
                              int m_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = z_37(p_36, r_36, x_36, h_37, i_37, t);
                                  ;
                                  LocalPopChoice(m_20);
                                }
                              else
                                {
                                  t = l_20;
                                  t = b_38(v_36, x_36, i_37, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm n_20 = t;
                      int o_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_37(s_36, u_36, e_37, t);
                          ;
                          LocalPopChoice(o_20);
                        }
                      else
                        {
                          t = n_20;
                          t = b_38(v_36, x_36, i_37, t);
                        }
                    }
                }
            }
          else
            {
              t = w_37(s_36, u_36, e_37, t);
            }
        }
      else
        {
          t = u_36;
          t = w_37(s_36, u_36, e_37, t);
        }
      return(t);
    }
    t = v_37(t);
    if(match_cons(t, sym__2))
      {
        ATerm p_20 = ATgetArgument(t, 0);
        r_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_19, r_31);
  }
  return(t);
}
ATerm instantiate_list_1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm c_39 (ATerm t)
  {
    ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
    x_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_38;
      }
    else
      {
        ATerm w_23 = NULL,x_23 = NULL,a_24 = NULL,o_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_38 = ATgetFirst((ATermList) t);
            z_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_38;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_20 = ATgetFirst((ATermList) t);
            ATerm r_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_38);
        w_23 = t;
        t = term_q_14;
        t = d_119(t);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm s_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_20 = t;
                int w_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, y_38);
                      return(t);
                    }
                    t = Instantiate_1_0(f_1, t);
                    ;
                    LocalPopChoice(w_20);
                  }
                else
                  {
                    t = v_20;
                    t = flat_list_0_0(t);
                  }
                ;
                LocalPopChoice(t_20);
              }
            else
              {
                t = s_20;
              }
            return(t);
          }
          t = bottomup_1_0(e_1, t);
          a_24 = t;
          t = z_38;
          t = c_39(t);
          x_23 = t;
          t = (ATerm) ATinsert(CheckATermList(x_23), a_24);
          o_9 = t;
          t = SSLsetAnnotations(o_9, w_23);
        }
      }
    return(t);
  }
  t = c_39(t);
  return(t);
}
ATerm q_10 (ATerm g_22, ATerm h_22, ATerm e_22, ATerm f_22, ATerm t)
{
  ATerm s_39 = NULL,u_39 = NULL,v_39 = NULL,l_40 = NULL;
  ATerm n_1 (ATerm t)
  {
    t = not_null(u_39);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, e_22, (ATerm) ATinsert(ATempty, f_22));
  t = conc_0_0(t);
  v_39 = t;
  t = g_22;
  if(match_cons(t, sym_iter_1))
    {
      l_40 = ATgetArgument(t, 0);
      {
        ATerm k_24 = NULL,q_9 = NULL;
        t = SSLgetAnnotations(g_22);
        k_24 = t;
        t = l_40;
        s_39 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, l_40);
        q_9 = t;
        t = SSLsetAnnotations(q_9, k_24);
      }
    }
  else
    {
      ATerm p_24 = NULL,r_9 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          l_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_22);
      p_24 = t;
      t = l_40;
      s_39 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, l_40);
      r_9 = t;
      t = SSLsetAnnotations(r_9, p_24);
    }
  t = (ATerm) ATmakeAppl(sym__2, g_22, v_39);
  t = get_pp_entry_0_0(t);
  if(((u_39 != NULL) && (u_39 != t)))
    _fail(t);
  else
    u_39 = t;
  t = h_22;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm m_40 = NULL;
      m_40 = t;
      t = (ATerm) ATmakeAppl(sym__4, s_39, m_40, v_39, term_x_14);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(k_1, t);
    t = instantiate_list_1_0(n_1, t);
  }
  return(t);
}
ATerm c_43 (ATerm x_40, ATerm y_40, ATerm z_40, ATerm t)
{
  ATerm e_41 = NULL,v_9 = NULL;
  t = SSLgetAnnotations(z_40);
  e_41 = t;
  t = y_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
  v_9 = t;
  t = SSLsetAnnotations(v_9, e_41);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm b_43 (ATerm t)
  {
    ATerm d_43 (ATerm l_41, ATerm m_41, ATerm n_41, ATerm o_41, ATerm t)
    {
      ATerm c_42 = NULL,d_42 = NULL,h_42 = NULL,w_9 = NULL;
      t = o_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm x_20 = ATgetFirst((ATermList) t);
          ATerm y_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_41);
      c_42 = t;
      t = term_q_14;
      t = f_119(t);
      {
        ATerm o_1 (ATerm t)
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, m_41), l_41);
                    return(t);
                  }
                  t = Instantiate_1_0(p_1, t);
                  ;
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
            }
          return(t);
        }
        t = bottomup_1_0(o_1, t);
        h_42 = t;
        t = n_41;
        t = b_43(t);
        d_42 = t;
        t = (ATerm) ATinsert(CheckATermList(d_42), h_42);
        w_9 = t;
        t = SSLsetAnnotations(w_9, c_42);
      }
      return(t);
    }
    ATerm l_42 = NULL,m_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
    l_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_42 = ATgetFirst((ATermList) t);
            r_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_42;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_42 = ATgetFirst((ATermList) t);
            t_42 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm d_21 = t;
              int e_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_43(m_42, r_42, l_42, t);
                  ;
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = d_21;
                  t = d_43(m_42, s_42, t_42, l_42, t);
                }
            }
          }
        else
          {
            t = c_43(m_42, r_42, l_42, t);
          }
      }
    return(t);
  }
  t = b_43(t);
  return(t);
}
ATerm r_10 (ATerm o_42, ATerm p_42, ATerm t)
{
  t = SSL_mod(o_42, p_42);
  return(t);
}
ATerm s_10 (ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm m_23, ATerm n_23, ATerm t)
{
  ATerm f_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_43 = NULL,s_43 = NULL,u_43 = NULL,d_44 = NULL;
      t = term_i_21;
      u_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_23, term_i_21);
      t = r_10(m_23, u_43, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_q_14;
      t = s_88(t);
      o_43 = t;
      t = term_q_14;
      t = t_88(t);
      s_43 = t;
      t = (ATerm) ATmakeAppl(sym__4, o_43, n_23, s_43, term_i_21);
      t = symbol2abox_0_0(t);
      d_44 = t;
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_44;
            {
              ATerm l_21 = t;
              if((PushChoice() == 0))
                {
                  ATerm d_25 = NULL;
                  d_25 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = d_25;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm m_21 = ATgetFirst((ATermList) t);
                          ATerm n_21 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = d_25;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = l_21;
                }
              t = (ATerm) ATinsert(ATempty, d_44);
            }
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            t = d_44;
          }
      }
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = f_21;
      {
        ATerm l_44 = NULL,m_44 = NULL,f_45 = NULL;
        t = term_q_14;
        t = r_88(t);
        l_44 = t;
        t = term_q_14;
        t = t_88(t);
        m_44 = t;
        t = (ATerm) ATmakeAppl(sym__4, l_44, n_23, m_44, term_x_14);
        t = symbol2abox_0_0(t);
        f_45 = t;
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_45;
              {
                ATerm q_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_25 = NULL;
                    z_25 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = z_25;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm r_21 = ATgetFirst((ATermList) t);
                            ATerm s_21 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = z_25;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_21;
                  }
                t = (ATerm) ATinsert(ATempty, f_45);
              }
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              t = f_45;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t)
{
  ATerm v_45 (ATerm t)
  {
    ATerm t_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_98(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = t_21;
        {
          ATerm k_45 = NULL,n_45 = NULL,p_45 = NULL,q_45 = NULL,s_45 = NULL,u_45 = NULL,e_10 = NULL;
          t = l_98(t);
          u_45 = t;
          if(match_cons(t, sym__2))
            {
              n_45 = ATgetArgument(t, 0);
              p_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_45);
          k_45 = t;
          t = n_45;
          t = n_98(t);
          q_45 = t;
          t = p_45;
          t = v_45(t);
          s_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_45, s_45);
          e_10 = t;
          t = SSLsetAnnotations(e_10, k_45);
          t = m_98(t);
        }
      }
    return(t);
  }
  t = v_45(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      ATerm x_21 = ATgetArgument(t, 1);
      if(((ATgetType(x_21) != AT_LIST) || !(ATisEmpty(x_21))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,g_46 = NULL,i_46 = NULL;
  if(match_cons(t, sym__2))
    {
      b_46 = ATgetArgument(t, 0);
      {
        ATerm y_21 = ATgetArgument(t, 1);
        if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
          {
            c_46 = ATgetFirst((ATermList) y_21);
            d_46 = (ATerm) ATgetNext((ATermList) y_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_x_14;
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_46, term_x_14);
  t = i_12(b_46, i_46, t);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_46, c_46), (ATerm) ATmakeAppl(sym__2, g_46, d_46));
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm j_46 = NULL,l_46 = NULL;
  if(match_cons(t, sym__2))
    {
      j_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_46), j_46);
  return(t);
}
ATerm nzip_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm y_45 = NULL;
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, y_45);
  t = genzip_4_0(q_1, r_1, s_1, w_98, t);
  return(t);
}
ATerm w_10 (ATerm d_23, ATerm e_23, ATerm c_23, ATerm i_23, ATerm t)
{
  ATerm s_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,r_47 = NULL,t_47 = NULL;
  ATerm q_2 (ATerm t)
  {
    t = not_null(v_46);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, c_23, (ATerm) ATinsert(ATempty, i_23));
  t = conc_0_0(t);
  w_46 = t;
  t = d_23;
  if(match_cons(t, sym_iter_sep_2))
    {
      r_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
      {
        ATerm l_26 = NULL,h_10 = NULL;
        t = SSLgetAnnotations(d_23);
        l_26 = t;
        t = r_47;
        s_46 = t;
        t = t_47;
        u_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, r_47, t_47);
        h_10 = t;
        t = SSLsetAnnotations(h_10, l_26);
      }
    }
  else
    {
      ATerm y_26 = NULL,t_10 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          r_47 = ATgetArgument(t, 0);
          t_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_23);
      y_26 = t;
      t = r_47;
      s_46 = t;
      t = t_47;
      u_46 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, r_47, t_47);
      t_10 = t;
      t = SSLsetAnnotations(t_10, y_26);
    }
  t = (ATerm) ATmakeAppl(sym__2, d_23, w_46);
  t = get_pp_entry_0_0(t);
  if(((v_46 != NULL) && (v_46 != t)))
    _fail(t);
  else
    v_46 = t;
  t = e_23;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm u_47 = NULL,y_47 = NULL;
      ATerm z_1 (ATerm t)
      {
        t = s_46;
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = u_46;
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = w_46;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = i_23;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          u_47 = ATgetArgument(t, 0);
          y_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_10(z_1, a_2, e_2, p_2, u_47, y_47, t);
      return(t);
    }
    t = nzip_1_0(u_1, t);
    t = instantiate_sep_list_1_0(q_2, t);
  }
  return(t);
}
ATerm y_10 (ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_41, x_41);
      ;
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      t = SSL_subtr(w_41, x_41);
    }
  return(t);
}
ATerm z_10 (ATerm y_28, ATerm w_28, ATerm x_28, ATerm t)
{
  ATerm j_48 = NULL,n_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_28, term_i_21);
  t = geq_0_0(t);
  t = term_x_14;
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_28, term_x_14);
  t = y_10(y_28, n_48, t);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, x_28);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm s_48 = NULL,u_48 = NULL,y_48 = NULL;
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      {
        ATerm b_22 = ATgetArgument(t, 1);
        if(((ATgetType(b_22) == AT_LIST) && !(ATisEmpty(b_22))))
          {
            u_48 = ATgetFirst((ATermList) b_22);
            y_48 = (ATerm) ATgetNext((ATermList) b_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_10(s_48, u_48, y_48, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm o_48 = NULL;
  t = repeat_1_0(r_2, t);
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(((ATgetType(c_22) != AT_INT) || (ATgetInt((ATermInt) c_22) != 1)))
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
          {
            o_48 = ATgetFirst((ATermList) d_22);
            {
              ATerm j_22 = (ATerm) ATgetNext((ATermList) d_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_48;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm k_22 = t;
  if((PushChoice() == 0))
    {
      ATerm n_70 = NULL,o_70 = NULL,q_70 = NULL,h_11 = NULL;
      q_70 = t;
      if(match_cons(t, sym_lit_1))
        {
          o_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_70);
      n_70 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, o_70);
      h_11 = t;
      t = SSLsetAnnotations(h_11, n_70);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_22;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm l_22 = t;
  if((PushChoice() == 0))
    {
      ATerm t_70 = NULL,u_70 = NULL,w_70 = NULL,j_11 = NULL;
      w_70 = t;
      if(match_cons(t, sym_lit_1))
        {
          u_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_70);
      t_70 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, u_70);
      j_11 = t;
      t = SSLsetAnnotations(j_11, t_70);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_22;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,f_69 = NULL,g_69 = NULL,k_69 = NULL,l_69 = NULL,n_69 = NULL,p_69 = NULL,q_69 = NULL;
  g_69 = t;
  if(match_cons(t, sym__4))
    {
      k_69 = ATgetArgument(t, 0);
      n_69 = ATgetArgument(t, 1);
      p_69 = ATgetArgument(t, 2);
      q_69 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_69;
  if(match_cons(t, sym_seq_1))
    {
      l_69 = ATgetArgument(t, 0);
      {
        ATerm b_70 = NULL,c_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
        ATerm u_2 (ATerm t)
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_22 = t;
              int p_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_3 (ATerm t)
                  {
                    t = not_null(c_70);
                    return(t);
                  }
                  t = Instantiate_1_0(a_3, t);
                  ;
                  LocalPopChoice(p_22);
                }
              else
                {
                  t = o_22;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
            }
          return(t);
        }
        t = n_69;
        if(match_cons(t, sym_appl_2))
          {
            ATerm q_22 = ATgetArgument(t, 0);
            f_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_69, (ATerm) ATinsert(ATempty, q_69));
        t = conc_0_0(t);
        i_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, l_69), i_70);
        t = get_pp_entry_0_0(t);
        b_70 = t;
        t = l_69;
        t = filter_1_0(s_2, t);
        g_70 = t;
        t = f_69;
        t = filter_1_0(t_2, t);
        h_70 = t;
        t = (ATerm) ATmakeAppl(sym__4, g_70, h_70, i_70, term_x_14);
        t = seq2abox_0_0(t);
        if(((c_70 != NULL) && (c_70 != t)))
          _fail(t);
        else
          c_70 = t;
        t = b_70;
        t = bottomup_1_0(u_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          l_69 = ATgetArgument(t, 0);
          w_68 = ATgetArgument(t, 1);
          {
            ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
            ATerm o_39 (ATerm t)
            {
              ATerm k_28 = NULL,l_28 = NULL,n_28 = NULL,r_28 = NULL,u_28 = NULL,a_29 = NULL,b_29 = NULL,l_29 = NULL,m_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL,g_30 = NULL,o_30 = NULL;
              if(match_cons(t, sym__4))
                {
                  o_29 = ATgetArgument(t, 0);
                  p_29 = ATgetArgument(t, 1);
                  g_30 = ATgetArgument(t, 2);
                  o_30 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = p_29;
              if(match_cons(t, sym_appl_2))
                {
                  q_29 = ATgetArgument(t, 0);
                  a_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_30;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_30 = ATgetFirst((ATermList) t);
                  d_30 = (ATerm) ATgetNext((ATermList) t);
                  t = d_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = q_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          n_28 = ATgetArgument(t, 0);
                          a_29 = ATgetArgument(t, 1);
                          m_29 = ATgetArgument(t, 2);
                          t = a_29;
                          if(match_cons(t, sym_alt_2))
                            {
                              b_29 = ATgetArgument(t, 0);
                              l_29 = ATgetArgument(t, 1);
                              t = n_28;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  r_28 = ATgetFirst((ATermList) t);
                                  u_28 = (ATerm) ATgetNext((ATermList) t);
                                  t = u_28;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = o_29;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          k_28 = ATgetArgument(t, 0);
                                          l_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm r_22 = t;
                                            int s_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = r_28;
                                                if((k_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = b_29;
                                                if((k_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = l_29;
                                                if((l_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, k_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, k_28), k_28, m_29), a_30), g_30, o_30);
                                                t = o_39(t);
                                                ;
                                                LocalPopChoice(s_22);
                                              }
                                            else
                                              {
                                                t = r_22;
                                                {
                                                  ATerm t_22 = t;
                                                  int u_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_31 = NULL,q_31 = NULL;
                                                      t = b_29;
                                                      if((k_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = l_29;
                                                      if((l_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = term_x_14;
                                                      q_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, o_30, term_x_14);
                                                      t = i_12(o_30, q_31, t);
                                                      m_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, l_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, r_28), l_28, m_29), a_30), g_30, m_31);
                                                      t = o_39(t);
                                                      ;
                                                      LocalPopChoice(u_22);
                                                    }
                                                  else
                                                    {
                                                      t = t_22;
                                                      {
                                                        ATerm r_32 = NULL;
                                                        ATerm b_3 (ATerm t)
                                                        {
                                                          ATerm v_22 = t;
                                                          int w_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_22 = t;
                                                              int z_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATinsert(ATempty, not_null(i_28));
                                                                    return(t);
                                                                  }
                                                                  t = Instantiate_1_0(c_3, t);
                                                                  ;
                                                                  LocalPopChoice(z_22);
                                                                }
                                                              else
                                                                {
                                                                  t = y_22;
                                                                  t = flat_list_0_0(t);
                                                                }
                                                              ;
                                                              LocalPopChoice(w_22);
                                                            }
                                                          else
                                                            {
                                                              t = v_22;
                                                            }
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_69, w_68), g_30);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((h_28 != NULL) && (h_28 != t)))
                                                          _fail(t);
                                                        else
                                                          h_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, o_29, c_30, g_30, term_x_14);
                                                        t = symbol2abox_0_0(t);
                                                        if(((i_28 != NULL) && (i_28 != t)))
                                                          _fail(t);
                                                        else
                                                          i_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, o_30, h_28);
                                                        t = index_0_0(t);
                                                        r_32 = t;
                                                        t = (ATerm) ATinsert(ATempty, r_32);
                                                        t = bottomup_1_0(b_3, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm l_33 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm a_23 = t;
                                            int b_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm f_23 = t;
                                                int g_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(i_28));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(e_3, t);
                                                    ;
                                                    LocalPopChoice(g_23);
                                                  }
                                                else
                                                  {
                                                    t = f_23;
                                                    t = flat_list_0_0(t);
                                                  }
                                                ;
                                                LocalPopChoice(b_23);
                                              }
                                            else
                                              {
                                                t = a_23;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_69, w_68), g_30);
                                          t = get_pp_entry_0_0(t);
                                          if(((h_28 != NULL) && (h_28 != t)))
                                            _fail(t);
                                          else
                                            h_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, o_29, c_30, g_30, term_x_14);
                                          t = symbol2abox_0_0(t);
                                          if(((i_28 != NULL) && (i_28 != t)))
                                            _fail(t);
                                          else
                                            i_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, o_30, h_28);
                                          t = index_0_0(t);
                                          l_33 = t;
                                          t = (ATerm) ATinsert(ATempty, l_33);
                                          t = bottomup_1_0(d_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm h_34 = NULL;
                                      ATerm f_3 (ATerm t)
                                      {
                                        ATerm h_23 = t;
                                        int j_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm k_23 = t;
                                            int l_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm g_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(i_28));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(g_3, t);
                                                ;
                                                LocalPopChoice(l_23);
                                              }
                                            else
                                              {
                                                t = k_23;
                                                t = flat_list_0_0(t);
                                              }
                                            ;
                                            LocalPopChoice(j_23);
                                          }
                                        else
                                          {
                                            t = h_23;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_69, w_68), g_30);
                                      t = get_pp_entry_0_0(t);
                                      if(((h_28 != NULL) && (h_28 != t)))
                                        _fail(t);
                                      else
                                        h_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, o_29, c_30, g_30, term_x_14);
                                      t = symbol2abox_0_0(t);
                                      if(((i_28 != NULL) && (i_28 != t)))
                                        _fail(t);
                                      else
                                        i_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, o_30, h_28);
                                      t = index_0_0(t);
                                      h_34 = t;
                                      t = (ATerm) ATinsert(ATempty, h_34);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm l_35 = NULL;
                                  ATerm h_3 (ATerm t)
                                  {
                                    ATerm o_23 = t;
                                    int p_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm q_23 = t;
                                        int r_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm i_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(i_28));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(i_3, t);
                                            ;
                                            LocalPopChoice(r_23);
                                          }
                                        else
                                          {
                                            t = q_23;
                                            t = flat_list_0_0(t);
                                          }
                                        ;
                                        LocalPopChoice(p_23);
                                      }
                                    else
                                      {
                                        t = o_23;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_69, w_68), g_30);
                                  t = get_pp_entry_0_0(t);
                                  if(((h_28 != NULL) && (h_28 != t)))
                                    _fail(t);
                                  else
                                    h_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, o_29, c_30, g_30, term_x_14);
                                  t = symbol2abox_0_0(t);
                                  if(((i_28 != NULL) && (i_28 != t)))
                                    _fail(t);
                                  else
                                    i_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, o_30, h_28);
                                  t = index_0_0(t);
                                  l_35 = t;
                                  t = (ATerm) ATinsert(ATempty, l_35);
                                  t = bottomup_1_0(h_3, t);
                                }
                            }
                          else
                            {
                              ATerm e_36 = NULL;
                              ATerm j_3 (ATerm t)
                              {
                                ATerm s_23 = t;
                                int t_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_23 = t;
                                    int v_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm k_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(i_28));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(k_3, t);
                                        ;
                                        LocalPopChoice(v_23);
                                      }
                                    else
                                      {
                                        t = u_23;
                                        t = flat_list_0_0(t);
                                      }
                                    ;
                                    LocalPopChoice(t_23);
                                  }
                                else
                                  {
                                    t = s_23;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_69, w_68), g_30);
                              t = get_pp_entry_0_0(t);
                              if(((h_28 != NULL) && (h_28 != t)))
                                _fail(t);
                              else
                                h_28 = t;
                              t = (ATerm) ATmakeAppl(sym__4, o_29, c_30, g_30, term_x_14);
                              t = symbol2abox_0_0(t);
                              if(((i_28 != NULL) && (i_28 != t)))
                                _fail(t);
                              else
                                i_28 = t;
                              t = (ATerm) ATmakeAppl(sym__2, o_30, h_28);
                              t = index_0_0(t);
                              e_36 = t;
                              t = (ATerm) ATinsert(ATempty, e_36);
                              t = bottomup_1_0(j_3, t);
                            }
                        }
                      else
                        {
                          ATerm z_36 = NULL;
                          ATerm l_3 (ATerm t)
                          {
                            ATerm y_23 = t;
                            int z_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_24 = t;
                                int c_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(i_28));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(n_3, t);
                                    ;
                                    LocalPopChoice(c_24);
                                  }
                                else
                                  {
                                    t = b_24;
                                    t = flat_list_0_0(t);
                                  }
                                ;
                                LocalPopChoice(z_23);
                              }
                            else
                              {
                                t = y_23;
                              }
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, l_69, w_68), g_30);
                          t = get_pp_entry_0_0(t);
                          if(((h_28 != NULL) && (h_28 != t)))
                            _fail(t);
                          else
                            h_28 = t;
                          t = (ATerm) ATmakeAppl(sym__4, o_29, c_30, g_30, term_x_14);
                          t = symbol2abox_0_0(t);
                          if(((i_28 != NULL) && (i_28 != t)))
                            _fail(t);
                          else
                            i_28 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_30, h_28);
                          t = index_0_0(t);
                          z_36 = t;
                          t = (ATerm) ATinsert(ATempty, z_36);
                          t = bottomup_1_0(l_3, t);
                        }
                    }
                  else
                    {
                      t = q_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          n_28 = ATgetArgument(t, 0);
                          a_29 = ATgetArgument(t, 1);
                          m_29 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = o_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          k_28 = ATgetArgument(t, 0);
                          l_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_28;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          r_28 = ATgetFirst((ATermList) t);
                          u_28 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = u_28;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = a_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          b_29 = ATgetArgument(t, 0);
                          l_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm d_24 = t;
                        int e_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = r_28;
                            if((k_28 != t))
                              {
                                _fail(t);
                              }
                            t = b_29;
                            if((k_28 != t))
                              {
                                _fail(t);
                              }
                            t = l_29;
                            if((l_28 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, k_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, k_28), k_28, m_29), a_30), g_30, o_30);
                            t = o_39(t);
                            ;
                            LocalPopChoice(e_24);
                          }
                        else
                          {
                            t = d_24;
                            {
                              ATerm a_38 = NULL,c_38 = NULL;
                              t = b_29;
                              if((k_28 != t))
                                {
                                  _fail(t);
                                }
                              t = l_29;
                              if((l_28 != t))
                                {
                                  _fail(t);
                                }
                              t = term_x_14;
                              c_38 = t;
                              t = (ATerm) ATmakeAppl(sym__2, o_30, term_x_14);
                              t = i_12(o_30, c_38, t);
                              a_38 = t;
                              t = (ATerm) ATmakeAppl(sym__4, l_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, r_28), l_28, m_29), a_30), g_30, a_38);
                              t = o_39(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = q_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      n_28 = ATgetArgument(t, 0);
                      a_29 = ATgetArgument(t, 1);
                      m_29 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = o_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      k_28 = ATgetArgument(t, 0);
                      l_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_28;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_28 = ATgetFirst((ATermList) t);
                      u_28 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = u_28;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      b_29 = ATgetArgument(t, 0);
                      l_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm f_24 = t;
                    int g_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_28;
                        if((k_28 != t))
                          {
                            _fail(t);
                          }
                        t = b_29;
                        if((k_28 != t))
                          {
                            _fail(t);
                          }
                        t = l_29;
                        if((l_28 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, k_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, k_28), k_28, m_29), a_30), g_30, o_30);
                        t = o_39(t);
                        ;
                        LocalPopChoice(g_24);
                      }
                    else
                      {
                        t = f_24;
                        {
                          ATerm m_39 = NULL,n_39 = NULL;
                          t = b_29;
                          if((k_28 != t))
                            {
                              _fail(t);
                            }
                          t = l_29;
                          if((l_28 != t))
                            {
                              _fail(t);
                            }
                          t = term_x_14;
                          n_39 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_30, term_x_14);
                          t = i_12(o_30, n_39, t);
                          m_39 = t;
                          t = (ATerm) ATmakeAppl(sym__4, l_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, r_28), l_28, m_29), a_30), g_30, m_39);
                          t = o_39(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, p_69, (ATerm) ATinsert(ATempty, q_69));
            t = conc_0_0(t);
            j_28 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, l_69, w_68), n_69, j_28, term_x_14);
            t = o_39(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              l_69 = ATgetArgument(t, 0);
              w_68 = ATgetArgument(t, 1);
              {
                ATerm i_71 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, l_69, w_68);
                i_71 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, l_69, w_68), n_69, p_69, q_69);
                t = w_10(i_71, n_69, p_69, q_69, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  l_69 = ATgetArgument(t, 0);
                  w_68 = ATgetArgument(t, 1);
                  {
                    ATerm q_71 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, l_69, w_68);
                    q_71 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, l_69, w_68), n_69, p_69, q_69);
                    t = w_10(q_71, n_69, p_69, q_69, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      l_69 = ATgetArgument(t, 0);
                      {
                        ATerm w_71 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, l_69);
                        w_71 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, l_69), n_69, p_69, q_69);
                        t = q_10(w_71, n_69, p_69, q_69, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          l_69 = ATgetArgument(t, 0);
                          {
                            ATerm e_72 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, l_69);
                            e_72 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, l_69), n_69, p_69, q_69);
                            t = q_10(e_72, n_69, p_69, q_69, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              l_69 = ATgetArgument(t, 0);
                              t = n_69;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm h_24 = ATgetArgument(t, 0);
                                  f_69 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = f_69;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  x_68 = ATgetFirst((ATermList) t);
                                  y_68 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,c_41 = NULL,f_41 = NULL,g_41 = NULL;
                                    ATerm o_3 (ATerm t)
                                    {
                                      ATerm i_24 = t;
                                      int j_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_24 = t;
                                          int m_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm p_3 (ATerm t)
                                              {
                                                t = not_null(c_41);
                                                return(t);
                                              }
                                              t = Instantiate_1_0(p_3, t);
                                              ;
                                              LocalPopChoice(m_24);
                                            }
                                          else
                                            {
                                              t = l_24;
                                              t = flat_list_0_0(t);
                                            }
                                          ;
                                          LocalPopChoice(j_24);
                                        }
                                      else
                                        {
                                          t = i_24;
                                        }
                                      return(t);
                                    }
                                    t = y_68;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, p_69, (ATerm) ATinsert(ATempty, q_69));
                                    t = conc_0_0(t);
                                    g_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, l_69), g_41);
                                    t = get_pp_entry_0_0(t);
                                    u_40 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, l_69, x_68, g_41, term_x_14);
                                    t = symbol2abox_0_0(t);
                                    v_40 = t;
                                    t = (ATerm) ATinsert(ATempty, v_40);
                                    f_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, u_40, (ATerm) ATinsert(ATempty, v_40));
                                    t = o_10(u_40, f_41, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        w_40 = ATgetArgument(t, 0);
                                        if(((c_41 != NULL) && (c_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          c_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = w_40;
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
                              ATerm n_24 = t;
                              int o_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm q_24 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(o_24);
                                  {
                                    ATerm r_24 = t;
                                    int s_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = n_69;
                                        {
                                          ATerm w_24 = t;
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
                                              t = w_24;
                                            }
                                          t = n_69;
                                          {
                                            ATerm a_25 = t;
                                            int b_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,e_43 = NULL,f_43 = NULL;
                                                if(match_cons(t, sym_appl_2))
                                                  {
                                                    y_42 = ATgetArgument(t, 0);
                                                    f_43 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = y_42;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    z_42 = ATgetArgument(t, 0);
                                                    a_43 = ATgetArgument(t, 1);
                                                    e_43 = ATgetArgument(t, 2);
                                                  }
                                                else
                                                  _fail(t);
                                                t = n_69;
                                                t = l_11(z_42, a_43, e_43, f_43, t);
                                                ;
                                                LocalPopChoice(b_25);
                                              }
                                            else
                                              {
                                                t = a_25;
                                                t = fatal_ambiguity_0_0(t);
                                              }
                                          }
                                        }
                                        ;
                                        LocalPopChoice(s_24);
                                      }
                                    else
                                      {
                                        t = r_24;
                                        t = SSL_is_string(n_69);
                                        t = (ATerm) ATmakeAppl(sym_S_1, n_69);
                                      }
                                  }
                                }
                              else
                                {
                                  t = n_24;
                                  {
                                    ATerm h_25 = t;
                                    int j_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm k_25 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(j_25);
                                        {
                                          ATerm e_44 = NULL,f_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, n_69);
                                          f_44 = t;
                                          t = SSL_implode_string(f_44);
                                          e_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, e_44);
                                        }
                                      }
                                    else
                                      {
                                        t = h_25;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            l_69 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, l_69);
                                      }
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
  ATerm a_74 = NULL,b_74 = NULL,d_74 = NULL,g_74 = NULL,i_74 = NULL,m_74 = NULL,r_74 = NULL,t_74 = NULL;
  if(match_cons(t, sym__4))
    {
      a_74 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
      r_74 = ATgetArgument(t, 2);
      t_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = a_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_74;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_74 = ATgetFirst((ATermList) t);
          d_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_74;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_74 = ATgetFirst((ATermList) t);
          m_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_74;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm n_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(m_25);
            t = b_74;
            {
              ATerm o_25 = t;
              int p_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm q_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_25);
                  {
                    ATerm s_25 = t;
                    int t_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, d_74, m_74, r_74, t_74);
                        t = seq2abox_0_0(t);
                        ;
                        LocalPopChoice(t_25);
                      }
                    else
                      {
                        t = s_25;
                        {
                          ATerm h_76 = NULL,i_76 = NULL,k_76 = NULL,o_76 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, b_74, i_74, r_74, t_74);
                          t = symbol2abox_0_0(t);
                          h_76 = t;
                          t = term_x_14;
                          o_76 = t;
                          t = (ATerm) ATmakeAppl(sym__2, t_74, term_x_14);
                          t = i_12(t_74, o_76, t);
                          k_76 = t;
                          t = (ATerm) ATmakeAppl(sym__4, d_74, m_74, r_74, k_76);
                          t = seq2abox_0_0(t);
                          i_76 = t;
                          t = (ATerm) ATinsert(CheckATermList(i_76), h_76);
                        }
                      }
                  }
                }
              else
                {
                  t = o_25;
                  {
                    ATerm c_77 = NULL,d_77 = NULL,g_77 = NULL,h_77 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, b_74, i_74, r_74, t_74);
                    t = symbol2abox_0_0(t);
                    c_77 = t;
                    t = term_x_14;
                    h_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_74, term_x_14);
                    t = i_12(t_74, h_77, t);
                    g_77 = t;
                    t = (ATerm) ATmakeAppl(sym__4, d_74, m_74, r_74, g_77);
                    t = seq2abox_0_0(t);
                    d_77 = t;
                    t = (ATerm) ATinsert(CheckATermList(d_77), c_77);
                  }
                }
            }
          }
        else
          {
            t = l_25;
            {
              ATerm t_77 = NULL,x_77 = NULL,z_77 = NULL,c_78 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, b_74, i_74, r_74, t_74);
              t = symbol2abox_0_0(t);
              t_77 = t;
              t = term_x_14;
              c_78 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_74, term_x_14);
              t = i_12(t_74, c_78, t);
              z_77 = t;
              t = (ATerm) ATmakeAppl(sym__4, d_74, m_74, r_74, z_77);
              t = seq2abox_0_0(t);
              x_77 = t;
              t = (ATerm) ATinsert(CheckATermList(x_77), t_77);
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
  t = term_v_25;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,k_78 = NULL,n_78 = NULL;
  g_78 = t;
  t = term_y_25;
  n_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, g_78);
  t = k_12(n_78, g_78, t);
  if(match_cons(t, sym__2))
    {
      k_78 = ATgetArgument(t, 0);
      h_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_78;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(t_3, t);
  t = (ATerm) ATmakeAppl(sym__2, k_78, h_78);
  return(t);
}
ATerm a_11 (ATerm c_61, ATerm b_61, ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,u_78 = NULL;
  p_78 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      q_78 = ATgetArgument(t, 0);
      u_78 = ATgetArgument(t, 1);
      {
        ATerm a_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_79 = NULL,j_79 = NULL;
            t = c_61;
            t = mk_key_0_0(t);
            g_79 = t;
            t = term_y_25;
            j_79 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_y_25, g_79);
            t = k_12(j_79, g_79, t);
            t = p_78;
            ;
            LocalPopChoice(d_26);
          }
        else
          {
            t = a_26;
            t = p_78;
            t = m_11(q_78, u_78, t);
          }
      }
    }
  else
    {
      ATerm t_79 = NULL,u_79 = NULL;
      t = c_61;
      t = mk_key_0_0(t);
      t_79 = t;
      t = term_y_25;
      u_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_25, t_79);
      t = k_12(u_79, t_79, t);
      t = p_78;
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm b_118 (ATerm), ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  t = number_nonterminals_0_0(t);
  a_80 = t;
  t = make_0_0(t);
  x_79 = t;
  t = a_80;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        ATerm e_80 = NULL;
        t = term_q_14;
        t = b_118(t);
        e_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_80, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(x_3, t);
      return(t);
    }
    t = map_1_0(w_3, t);
    t = concat_0_0(t);
    y_79 = t;
    t = term_q_14;
    t = b_118(t);
    z_79 = t;
    t = (ATerm) ATinsert(CheckATermList(y_79), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, z_79), x_79));
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
  t = term_h_26;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm m_80 = NULL;
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,i_81 = NULL;
      ATerm k_26 = t;
      int m_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              d_81 = ATgetArgument(t, 0);
              {
                ATerm n_26 = ATgetArgument(t, 1);
              }
              f_81 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(m_26);
          {
            ATerm z_3 (ATerm t)
            {
              t = not_null(m_80);
              return(t);
            }
            t = f_81;
            {
              ATerm y_3 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((m_80 != NULL) && (m_80 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      m_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(y_3, t);
              t = d_81;
              t = symbols2pp_entries_1_0(z_3, t);
            }
          }
        }
      else
        {
          t = k_26;
          {
            ATerm j_81 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                d_81 = ATgetArgument(t, 0);
                e_81 = ATgetArgument(t, 1);
                f_81 = ATgetArgument(t, 2);
                i_81 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_26)), e_81), (ATerm) ATinsert(ATinsert(ATempty, term_p_26), (ATerm) ATmakeAppl(sym_lit_1, d_81)));
            t = concat_0_0(t);
            j_81 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, j_81, f_81, i_81);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_26 = t;
            if((PushChoice() == 0))
              {
                ATerm l_81 = NULL;
                l_81 = t;
                t = term_x_26;
                t = get_options_0_0(t);
                t = oncetd_1_0(b_4, t);
                t = l_81;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_26;
              }
            t = debug_1_0(c_4, t);
            ;
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm b_11 (ATerm p_39, ATerm q_39, ATerm t)
{
  t = SSL_mkterm(p_39, q_39);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,z_92 = NULL,a_93 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      z_92 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_93;
  if(match_cons(t, sym_alt_2))
    {
      w_92 = ATgetArgument(t, 0);
      x_92 = ATgetArgument(t, 1);
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_93 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, w_92, x_92);
            t = flat_alt_0_0(t);
            e_93 = t;
            t = (ATerm) ATinsert(CheckATermList(e_93), z_92);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            t = (ATerm) ATinsert(ATinsert(ATempty, a_93), z_92);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, a_93), z_92);
    }
  return(t);
}
ATerm _2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,p_11 = NULL;
  w_81 = t;
  if(match_cons(t, sym__2))
    {
      p_81 = ATgetArgument(t, 0);
      q_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_81);
  o_81 = t;
  t = p_81;
  t = y_69(t);
  u_81 = t;
  t = q_81;
  t = z_69(t);
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_81, v_81);
  p_11 = t;
  t = SSLsetAnnotations(p_11, o_81);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm z_81 = NULL,d_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  z_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_81;
    }
  else
    {
      ATerm o_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_82 = ATgetFirst((ATermList) t);
          g_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_82 = ATgetFirst((ATermList) t);
          i_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_82;
      t = pair_0_0(t);
      o_82 = t;
      t = (ATerm) ATinsert(CheckATermList(o_82), (ATerm) ATmakeAppl(sym__2, d_82, h_82));
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
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL,f_87 = NULL,o_12 = NULL;
  b_87 = t;
  if(match_cons(t, sym_lit_1))
    {
      a_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_87);
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, a_87);
  o_12 = t;
  t = SSLsetAnnotations(o_12, z_86);
  if(match_cons(t, sym_lit_1))
    {
      f_87 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_27, (ATerm) ATmakeAppl(sym_S_1, f_87));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          f_87 = ATgetArgument(t, 0);
          {
            ATerm c_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, f_87);
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
  ATerm o_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,a_13 = NULL,y_89 = NULL,e_89 = NULL,v_12 = NULL;
  c_89 = t;
  if(match_cons(t, sym__2))
    {
      y_88 = ATgetArgument(t, 0);
      z_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_89);
  x_88 = t;
  t = y_88;
  if(match_cons(t, sym_lit_1))
    {
      b_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_88);
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, b_89);
  v_12 = t;
  t = SSLsetAnnotations(v_12, a_89);
  if(match_cons(t, sym_lit_1))
    {
      e_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_27, (ATerm) ATmakeAppl(sym_S_1, e_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          e_89 = ATgetArgument(t, 0);
          {
            ATerm d_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, e_89);
    }
  o_88 = t;
  t = z_88;
  t = _2_0(_id, z_4, t);
  if(match_cons(t, sym_lit_1))
    {
      y_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_27, (ATerm) ATmakeAppl(sym_S_1, y_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          y_89 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, y_89);
    }
  w_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_88, w_88);
  a_13 = t;
  t = SSLsetAnnotations(a_13, x_88);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_l_27), (ATerm) ATinsert(ATinsert(ATempty, w_88), o_88));
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm v_89 = NULL,w_89 = NULL;
  v_89 = t;
  if(match_cons(t, sym_iter_1))
    {
      w_89 = ATgetArgument(t, 0);
      {
        ATerm m_46 = NULL,w_12 = NULL;
        t = SSLgetAnnotations(v_89);
        m_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, w_89);
        w_12 = t;
        t = SSLsetAnnotations(w_12, m_46);
      }
    }
  else
    {
      ATerm x_46 = NULL,y_12 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          w_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_89);
      x_46 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, w_89);
      y_12 = t;
      t = SSLsetAnnotations(y_12, x_46);
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm d_90 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      d_90 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_27, (ATerm) ATmakeAppl(sym_S_1, d_90));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          d_90 = ATgetArgument(t, 0);
          {
            ATerm m_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, d_90);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm x_83 = NULL,z_83 = NULL,g_84 = NULL,h_84 = NULL,l_84 = NULL;
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,a_85 = NULL,s_12 = NULL,p_86 = NULL,l_12 = NULL,j_86 = NULL,m_86 = NULL;
      t = reverse_acc_2_0(_id, h_4, t);
      a_85 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_84 = ATgetFirst((ATermList) t);
          q_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_85);
      o_84 = t;
      t = p_84;
      if(match_cons(t, sym__2))
        {
          u_84 = ATgetArgument(t, 0);
          v_84 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_84);
      t_84 = t;
      t = v_84;
      if(match_cons(t, sym_iter_1))
        {
          j_86 = ATgetArgument(t, 0);
          {
            ATerm j_44 = NULL,v_11 = NULL;
            t = SSLgetAnnotations(v_84);
            j_44 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, j_86);
            v_11 = t;
            t = SSLsetAnnotations(v_11, j_44);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              j_86 = ATgetArgument(t, 0);
              {
                ATerm v_44 = NULL,w_11 = NULL;
                t = SSLgetAnnotations(v_84);
                v_44 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, j_86);
                w_11 = t;
                t = SSLsetAnnotations(w_11, v_44);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  j_86 = ATgetArgument(t, 0);
                  m_86 = ATgetArgument(t, 1);
                  {
                    ATerm d_45 = NULL,a_12 = NULL;
                    t = SSLgetAnnotations(v_84);
                    d_45 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, j_86, m_86);
                    a_12 = t;
                    t = SSLsetAnnotations(a_12, d_45);
                  }
                }
              else
                {
                  ATerm w_45 = NULL,j_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      j_86 = ATgetArgument(t, 0);
                      m_86 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_84);
                  w_45 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, j_86, m_86);
                  j_12 = t;
                  t = SSLsetAnnotations(j_12, w_45);
                }
            }
        }
      w_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_84, w_84);
      l_12 = t;
      t = SSLsetAnnotations(l_12, t_84);
      if(match_cons(t, sym_lit_1))
        {
          p_86 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_27, (ATerm) ATmakeAppl(sym_S_1, p_86));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              p_86 = ATgetArgument(t, 0);
              {
                ATerm q_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, p_86);
        }
      r_84 = t;
      t = q_84;
      t = map_1_0(j_4, t);
      s_84 = t;
      t = (ATerm) ATinsert(CheckATermList(s_84), r_84);
      s_12 = t;
      t = SSLsetAnnotations(s_12, o_84);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_83 = ATgetFirst((ATermList) t);
          x_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_27 = t;
        if((PushChoice() == 0))
          {
            ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,y_87 = NULL,t_12 = NULL;
            y_87 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_87 = ATgetFirst((ATermList) t);
                s_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_87);
            q_87 = t;
            t = s_87;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_87), r_87);
            t_12 = t;
            t = SSLsetAnnotations(t_12, q_87);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_27;
          }
        t = x_83;
        t = reverse_acc_2_0(_id, m_4, t);
        n_84 = t;
        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, z_83), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, n_84)));
      }
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,u_12 = NULL,j_88 = NULL;
            t = reverse_acc_2_0(_id, o_4, t);
            d_88 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_88 = ATgetFirst((ATermList) t);
                c_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_88);
            a_88 = t;
            t = b_88;
            if(match_cons(t, sym_lit_1))
              {
                j_88 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_27, (ATerm) ATmakeAppl(sym_S_1, j_88));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    j_88 = ATgetArgument(t, 0);
                    {
                      ATerm w_27 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, j_88);
              }
            l_84 = t;
            t = c_88;
            {
              ATerm c_28 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = c_28;
                }
              t = reverse_acc_2_0(_id, p_4, t);
              g_84 = t;
              t = (ATerm) ATinsert(CheckATermList(g_84), l_84);
              u_12 = t;
              t = SSLsetAnnotations(u_12, a_88);
              t = g_84;
              t = pair_0_0(t);
              t = map_1_0(v_4, t);
              h_84 = t;
              t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, l_84), h_84));
            }
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            t = map_1_0(e_5, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm d_28 = t;
  if((PushChoice() == 0))
    {
      ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,x_13 = NULL;
      p_90 = t;
      if(match_cons(t, sym_lit_1))
        {
          o_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_90);
      n_90 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, o_90);
      x_13 = t;
      t = SSLsetAnnotations(x_13, n_90);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_28;
    }
  return(t);
}
ATerm y_91 (ATerm w_90, ATerm x_90, ATerm y_90, ATerm t)
{
  ATerm c_91 = NULL,z_13 = NULL;
  t = SSLgetAnnotations(w_90);
  c_91 = t;
  t = y_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_90, y_90);
  z_13 = t;
  t = SSLsetAnnotations(z_13, c_91);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  ATerm v_90 = NULL;
  ATerm x_91 (ATerm t)
  {
    ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL;
    g_91 = t;
    if(match_cons(t, sym__2))
      {
        h_91 = ATgetArgument(t, 0);
        i_91 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_91;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_91 = ATgetFirst((ATermList) t);
        k_91 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_28 = t;
          int m_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_91(g_91, h_91, i_91, t);
              ;
              LocalPopChoice(m_28);
            }
          else
            {
              t = e_28;
              {
                ATerm p_28 = t;
                int s_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL;
                    t = j_91;
                    t = f_118(t);
                    t = term_x_14;
                    q_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_91, term_x_14);
                    t = i_12(h_91, q_91, t);
                    p_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_91, k_91);
                    t = x_91(t);
                    o_91 = t;
                    t = (ATerm) ATinsert(CheckATermList(o_91), (ATerm) ATmakeAppl(sym__2, h_91, j_91));
                    ;
                    LocalPopChoice(s_28);
                  }
                else
                  {
                    t = p_28;
                    {
                      ATerm w_91 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, h_91, k_91);
                      t = x_91(t);
                      w_91 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_91), j_91);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = y_91(g_91, h_91, i_91, t);
      }
    return(t);
  }
  v_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, v_90);
  t = x_91(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL;
  d_92 = t;
  {
    ATerm z_28 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm i_29 = ATgetArgument(t, 0);
            c_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(c_29);
        t = c_92;
      }
    else
      {
        t = z_28;
        t = d_92;
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
  ATerm r_92 = NULL;
  r_92 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_92;
        {
          ATerm n_29 = t;
          if((PushChoice() == 0))
            {
              ATerm o_47 = NULL;
              o_47 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_47;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm r_29 = ATgetFirst((ATermList) t);
                      ATerm s_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_47;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_29;
            }
          t = (ATerm) ATinsert(ATempty, r_92);
        }
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = r_92;
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
  ATerm s_49 = NULL,t_49 = NULL;
  t_49 = t;
  if(match_cons(t, sym_Arg_1))
    {
      s_49 = ATgetArgument(t, 0);
      {
        ATerm u_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_50 = NULL,b_14 = NULL;
            t = SSLgetAnnotations(t_49);
            f_50 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, s_49);
            b_14 = t;
            t = SSLsetAnnotations(b_14, f_50);
            t = term_z_29;
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = u_29;
            t = t_49;
          }
      }
    }
  else
    {
      t = t_49;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL;
  ATerm o_96 (ATerm t)
  {
    ATerm q_96 (ATerm g_95, ATerm h_95, ATerm i_95, ATerm j_95, ATerm t)
    {
      ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL;
      t = SSL_explode_term(j_95);
      if(match_cons(t, sym__2))
        {
          q_95 = ATgetArgument(t, 0);
          r_95 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_95, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, i_95, q_95)));
      t = conc_0_0(t);
      m_95 = t;
      t = r_95;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      s_95 = t;
      t = make_0_0(t);
      n_95 = t;
      t = s_95;
      {
        ATerm k_5 (ATerm t)
        {
          ATerm u_95 = NULL;
          u_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_95, m_95), u_95);
          t = o_96(t);
          return(t);
        }
        t = map_1_0(k_5, t);
        t = concat_0_0(t);
        o_95 = t;
        t = (ATerm) ATinsert(CheckATermList(o_95), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, g_95, m_95), n_95));
      }
      return(t);
    }
    ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,e_96 = NULL,g_96 = NULL,j_96 = NULL;
    if(match_cons(t, sym__2))
      {
        a_96 = ATgetArgument(t, 0);
        e_96 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_96;
    {
      ATerm b_30 = t;
      int k_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm n_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(k_30);
          t = (ATerm) ATempty;
        }
      else
        {
          t = b_30;
          if(match_cons(t, sym__2))
            {
              g_96 = ATgetArgument(t, 0);
              j_96 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_96;
          {
            ATerm q_30 = t;
            int s_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_sort_1))
                  {
                    ATerm t_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(s_30);
                t = a_96;
                {
                  ATerm w_30 = t;
                  int y_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm z_30 = ATgetArgument(t, 0);
                          ATerm a_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(y_30);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      t = w_30;
                      t = (ATerm) ATempty;
                    }
                }
              }
            else
              {
                t = q_30;
                {
                  ATerm b_31 = t;
                  int c_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_char_class_1))
                        {
                          ATerm d_31 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(c_31);
                      t = a_96;
                      {
                        ATerm e_31 = t;
                        int f_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym__2))
                              {
                                ATerm g_31 = ATgetArgument(t, 0);
                                ATerm h_31 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(f_31);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            t = e_31;
                            t = (ATerm) ATempty;
                          }
                      }
                    }
                  else
                    {
                      t = b_31;
                      if(match_cons(t, sym_alt_2))
                        {
                          y_95 = ATgetArgument(t, 0);
                          v_95 = ATgetArgument(t, 1);
                          t = a_96;
                          if(match_cons(t, sym__2))
                            {
                              b_96 = ATgetArgument(t, 0);
                              c_96 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = v_95;
                          if(match_cons(t, sym_alt_2))
                            {
                              w_95 = ATgetArgument(t, 0);
                              x_95 = ATgetArgument(t, 1);
                              {
                                ATerm i_31 = t;
                                int j_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,e_14 = NULL;
                                    t = b_96;
                                    if(((b_94 != NULL) && (b_94 != t)))
                                      _fail(t);
                                    else
                                      b_94 = t;
                                    t = c_96;
                                    if(((c_94 != NULL) && (c_94 != t)))
                                      _fail(t);
                                    else
                                      c_94 = t;
                                    t = g_96;
                                    if(((d_94 != NULL) && (d_94 != t)))
                                      _fail(t);
                                    else
                                      d_94 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, y_95, (ATerm) ATmakeAppl(sym_alt_2, w_95, x_95));
                                    t = flat_alt_0_0(t);
                                    d_49 = t;
                                    t = term_k_31;
                                    f_49 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_k_31, d_49);
                                    t = b_11(f_49, d_49, t);
                                    e_49 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_96, c_96), (ATerm) ATmakeAppl(sym__2, g_96, e_49));
                                    t = o_96(t);
                                    m_49 = t;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        j_49 = ATgetFirst((ATermList) t);
                                        k_49 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(m_49);
                                    g_49 = t;
                                    t = j_49;
                                    t = topdown_1_0(o_5, t);
                                    l_49 = t;
                                    t = (ATerm) ATinsert(CheckATermList(k_49), l_49);
                                    e_14 = t;
                                    t = SSLsetAnnotations(e_14, g_49);
                                    ;
                                    LocalPopChoice(j_31);
                                  }
                                else
                                  {
                                    t = i_31;
                                    t = q_96(b_96, c_96, g_96, j_96, t);
                                  }
                              }
                            }
                          else
                            {
                              t = q_96(b_96, c_96, g_96, j_96, t);
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_bracket_symbol_1))
                            {
                              y_95 = ATgetArgument(t, 0);
                              t = a_96;
                              if(match_cons(t, sym__2))
                                {
                                  b_96 = ATgetArgument(t, 0);
                                  c_96 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              {
                                ATerm l_31 = t;
                                int u_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_96, c_96), (ATerm) ATmakeAppl(sym__2, g_96, y_95));
                                    t = o_96(t);
                                    ;
                                    LocalPopChoice(u_31);
                                  }
                                else
                                  {
                                    t = l_31;
                                    t = q_96(b_96, c_96, g_96, j_96, t);
                                  }
                              }
                            }
                          else
                            {
                              t = a_96;
                              if(match_cons(t, sym__2))
                                {
                                  b_96 = ATgetArgument(t, 0);
                                  c_96 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = q_96(b_96, c_96, g_96, j_96, t);
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
  f_94 = t;
  t = term_q_14;
  t = c_118(t);
  e_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_94, f_94);
  t = o_96(t);
  return(t);
}
ATerm d_99 (ATerm f_97, ATerm g_97, ATerm h_97, ATerm t)
{
  ATerm k_97 = NULL,m_97 = NULL;
  t = h_97;
  {
    ATerm x_31 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,l_50 = NULL;
        t = g_97;
        t = pp_table_get_0_0(t);
        l_50 = t;
        t = SSL_explode_term(l_50);
        if(match_cons(t, sym__2))
          {
            ATerm c_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_32 = ATgetArgument(t, 1);
              if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
                {
                  ATerm e_32 = ATgetFirst((ATermList) d_32);
                  ATerm f_32 = (ATerm) ATgetNext((ATermList) d_32);
                  if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
                    {
                      k_50 = ATgetFirst((ATermList) f_32);
                      {
                        ATerm i_32 = (ATerm) ATgetNext((ATermList) f_32);
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
        t = k_50;
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = x_31;
        {
          ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,m_50 = NULL,n_50 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,a_98 = NULL,i_14 = NULL;
          t = g_97;
          t = reverse_acc_2_0(_id, q_5, t);
          t_97 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_97 = ATgetFirst((ATermList) t);
              s_97 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_97);
          q_97 = t;
          t = s_97;
          t = reverse_acc_2_0(_id, r_5, t);
          k_97 = t;
          t = (ATerm) ATinsert(CheckATermList(k_97), r_97);
          i_14 = t;
          t = SSLsetAnnotations(i_14, q_97);
          t = k_97;
          t = pp_table_get_0_0(t);
          p_97 = t;
          t = SSL_explode_term(p_97);
          if(match_cons(t, sym__2))
            {
              ATerm j_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm m_32 = ATgetArgument(t, 1);
                if(((ATgetType(m_32) == AT_LIST) && !(ATisEmpty(m_32))))
                  {
                    o_97 = ATgetFirst((ATermList) m_32);
                    {
                      ATerm n_32 = (ATerm) ATgetNext((ATermList) m_32);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = o_97;
          if(match_cons(t, sym_Path_2))
            {
              a_98 = ATgetArgument(t, 0);
              w_97 = ATgetArgument(t, 1);
              t = w_97;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_97 = ATgetFirst((ATermList) t);
                  y_97 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_97;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, a_98, (ATerm) ATinsert(ATempty, x_97));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  a_98 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, a_98, (ATerm) ATempty);
            }
          m_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_97, f_97);
          {
            ATerm s_5 (ATerm t)
            {
              t = m_97;
              return(t);
            }
            t = symbol2abox_1_0(s_5, t);
            t = map_1_0(v_5, t);
            t = g_97;
            t = pp_table_get_0_0(t);
            n_50 = t;
            t = SSL_explode_term(n_50);
            if(match_cons(t, sym__2))
              {
                ATerm o_32 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_32) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm p_32 = ATgetArgument(t, 1);
                  if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
                    {
                      ATerm q_32 = ATgetFirst((ATermList) p_32);
                      ATerm s_32 = (ATerm) ATgetNext((ATermList) p_32);
                      if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
                        {
                          m_50 = ATgetFirst((ATermList) s_32);
                          {
                            ATerm u_32 = (ATerm) ATgetNext((ATermList) s_32);
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
            t = m_50;
          }
        }
      }
  }
  return(t);
}
ATerm e_99 (ATerm g_98, ATerm h_98, ATerm i_98, ATerm j_98, ATerm p_98, ATerm t)
{
  t = p_98;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL,p_50 = NULL;
        t = j_98;
        t = pp_table_get_0_0(t);
        p_50 = t;
        t = SSL_explode_term(p_50);
        if(match_cons(t, sym__2))
          {
            ATerm y_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_32 = ATgetArgument(t, 1);
              if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
                {
                  ATerm b_33 = ATgetFirst((ATermList) z_32);
                  ATerm g_33 = (ATerm) ATgetNext((ATermList) z_32);
                  if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
                    {
                      o_50 = ATgetFirst((ATermList) g_33);
                      {
                        ATerm h_33 = (ATerm) ATgetNext((ATermList) g_33);
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
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        {
          ATerm q_50 = NULL,r_50 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, g_98, h_98, i_98);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(w_5, t);
          t = j_98;
          t = pp_table_get_0_0(t);
          r_50 = t;
          t = SSL_explode_term(r_50);
          if(match_cons(t, sym__2))
            {
              ATerm i_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm j_33 = ATgetArgument(t, 1);
                if(((ATgetType(j_33) == AT_LIST) && !(ATisEmpty(j_33))))
                  {
                    ATerm k_33 = ATgetFirst((ATermList) j_33);
                    ATerm o_33 = (ATerm) ATgetNext((ATermList) j_33);
                    if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
                      {
                        q_50 = ATgetFirst((ATermList) o_33);
                        {
                          ATerm p_33 = (ATerm) ATgetNext((ATermList) o_33);
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
          t = q_50;
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
  ATerm e_98 = NULL,f_98 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      e_98 = ATgetArgument(t, 0);
      f_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(e_98, f_98, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      u_98 = ATgetArgument(t, 0);
      v_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(u_98, v_98, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL;
  x_98 = t;
  if(match_cons(t, sym__2))
    {
      y_98 = ATgetArgument(t, 0);
      c_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_98;
  if(match_cons(t, sym_prod_3))
    {
      z_98 = ATgetArgument(t, 0);
      a_99 = ATgetArgument(t, 1);
      b_99 = ATgetArgument(t, 2);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_99(y_98, c_99, x_98, t);
            ;
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = e_99(z_98, a_99, b_99, c_99, x_98, t);
          }
      }
    }
  else
    {
      t = d_99(y_98, c_99, x_98, t);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_33) != AT_INT) || (ATgetInt((ATermInt) s_33) != 34)))
        _fail(t);
      {
        ATerm t_33 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
  h_99 = t;
  t = SSL_explode_string(h_99);
  f_99 = t;
  {
    ATerm u_33 = t;
    if((PushChoice() == 0))
      {
        ATerm i_99 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_99 = ATgetFirst((ATermList) t);
            {
              ATerm v_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = i_99;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_33;
      }
    t = f_99;
    {
      ATerm w_33 = t;
      if((PushChoice() == 0))
        {
          t = at_last_1_0(x_5, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_33;
        }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_33)), f_99), (ATerm) ATinsert(ATempty, term_x_33));
      t = concat_0_0(t);
      g_99 = t;
      t = SSL_implode_string(g_99);
    }
  }
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm k_99 = NULL,o_99 = NULL;
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm a_34 = ATgetArgument(t, 0);
          ATerm b_34 = ATgetArgument(t, 1);
          ATerm c_34 = ATgetArgument(t, 2);
          k_99 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(z_33);
      {
        ATerm q_99 = NULL;
        t = k_99;
        {
          ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((q_99 != NULL) && (q_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(y_5, t);
          t = not_null(q_99);
        }
      }
    }
  else
    {
      t = y_33;
      {
        ATerm s_99 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm d_34 = ATgetArgument(t, 0);
            ATerm f_34 = ATgetArgument(t, 1);
            o_99 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = o_99;
        {
          ATerm z_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((s_99 != NULL) && (s_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(z_5, t);
          t = not_null(s_99);
        }
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL;
  if(match_cons(t, sym__2))
    {
      b_100 = ATgetArgument(t, 0);
      f_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_100;
  if(match_cons(t, sym_prod_fun_4))
    {
      c_100 = ATgetArgument(t, 0);
      d_100 = ATgetArgument(t, 1);
      e_100 = ATgetArgument(t, 2);
      y_99 = ATgetArgument(t, 3);
      t = y_99;
      if(match_cons(t, sym_attrs_1))
        {
          x_99 = ATgetArgument(t, 0);
          {
            ATerm n_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, x_99, f_100);
            t = conc_0_0(t);
            n_100 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, c_100, d_100, e_100, (ATerm) ATmakeAppl(sym_attrs_1, n_100));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, c_100, d_100, e_100, (ATerm) ATmakeAppl(sym_attrs_1, f_100));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          c_100 = ATgetArgument(t, 0);
          d_100 = ATgetArgument(t, 1);
          e_100 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_100;
      if(match_cons(t, sym_attrs_1))
        {
          z_99 = ATgetArgument(t, 0);
          {
            ATerm y_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, z_99, f_100);
            t = conc_0_0(t);
            y_100 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, c_100, d_100, (ATerm) ATmakeAppl(sym_attrs_1, y_100));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, c_100, d_100, (ATerm) ATmakeAppl(sym_attrs_1, f_100));
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm g_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL,k_14 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
      m_101 = t;
      if(match_int(t, 34))
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_x_33), term_q_34);
              ;
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              t = (ATerm) ATinsert(ATempty, m_101);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm s_34 = t;
              int t_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_34), term_q_34);
                  ;
                  LocalPopChoice(t_34);
                }
              else
                {
                  t = s_34;
                  t = (ATerm) ATinsert(ATempty, m_101);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_101 = ATgetFirst((ATermList) t);
                  o_101 = (ATerm) ATgetNext((ATermList) t);
                  t = n_101;
                  if(match_int(t, 34))
                    {
                      ATerm u_34 = t;
                      int v_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, m_101);
                          ;
                          LocalPopChoice(v_34);
                        }
                      else
                        {
                          t = u_34;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_101), term_x_33), term_q_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 92))
                        {
                          ATerm y_34 = t;
                          int z_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, m_101);
                              ;
                              LocalPopChoice(z_34);
                            }
                          else
                            {
                              t = y_34;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_101), term_q_34), term_q_34);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm b_35 = t;
                              int c_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, m_101);
                                  ;
                                  LocalPopChoice(c_35);
                                }
                              else
                                {
                                  t = b_35;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(o_101), term_f_35), term_q_34);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, m_101);
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, m_101);
                }
            }
        }
      l_101 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_101 = ATgetFirst((ATermList) t);
          j_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_101);
      h_101 = t;
      t = j_101;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      k_101 = t;
      t = (ATerm) ATinsert(CheckATermList(k_101), i_101);
      k_14 = t;
      t = SSLsetAnnotations(k_14, h_101);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = g_34;
      {
        ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL;
        r_102 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_102 = ATgetFirst((ATermList) t);
            q_102 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm y_50 = NULL,b_51 = NULL,l_14 = NULL;
              t = SSLgetAnnotations(r_102);
              y_50 = t;
              t = q_102;
              t = escape_chars_0_0(t);
              b_51 = t;
              t = (ATerm) ATinsert(CheckATermList(b_51), p_102);
              l_14 = t;
              t = SSLsetAnnotations(l_14, y_50);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_102;
          }
      }
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,i_52 = NULL;
  e_52 = t;
  if(match_int(t, 34))
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_x_33), term_q_34);
          ;
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          t = (ATerm) ATinsert(ATempty, e_52);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm i_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_q_34), term_q_34);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = i_35;
              t = (ATerm) ATinsert(ATempty, e_52);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_52 = ATgetFirst((ATermList) t);
              i_52 = (ATerm) ATgetNext((ATermList) t);
              t = f_52;
              if(match_int(t, 34))
                {
                  ATerm m_35 = t;
                  int n_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, e_52);
                      ;
                      LocalPopChoice(n_35);
                    }
                  else
                    {
                      t = m_35;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(i_52), term_x_33), term_q_34);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm o_35 = t;
                      int p_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, e_52);
                          ;
                          LocalPopChoice(p_35);
                        }
                      else
                        {
                          t = o_35;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(i_52), term_q_34), term_q_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm q_35 = t;
                          int r_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, e_52);
                              ;
                              LocalPopChoice(r_35);
                            }
                          else
                            {
                              t = q_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(i_52), term_f_35), term_q_34);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATinsert(ATempty, e_52);
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, e_52);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_103 = NULL,w_51 = NULL;
      p_103 = t;
      t = SSL_explode_string(p_103);
      t = map_1_0(a_6, t);
      t = concat_0_0(t);
      w_51 = t;
      t = SSL_implode_string(w_51);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm k_53 = NULL,n_53 = NULL;
        n_53 = t;
        t = SSL_explode_string(n_53);
        t = escape_chars_0_0(t);
        k_53 = t;
        t = SSL_implode_string(k_53);
      }
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm v_35 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_35;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,y_53 = NULL,a_54 = NULL,b_54 = NULL,u_53 = NULL,v_53 = NULL,o_14 = NULL,p_53 = NULL;
  t = filter_1_0(b_6, t);
  y_103 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_103 = ATgetFirst((ATermList) t);
      x_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_103);
  v_103 = t;
  t = SSL_explode_string(w_103);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_53 = ATgetFirst((ATermList) t);
      {
        ATerm w_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_53;
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_53, term_c_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_36, p_53);
        t = leq_0_0(t);
        ;
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = (ATerm) ATmakeAppl(sym__2, p_53, term_f_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_h_36, p_53);
        t = leq_0_0(t);
      }
    t = (ATerm) ATinsert(CheckATermList(x_103), w_103);
    o_14 = t;
    t = SSLsetAnnotations(o_14, v_103);
    v_53 = t;
    t = term_i_36;
    u_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_36, v_53);
    t = f_11(u_53, v_53, t);
    u_103 = t;
    t = SSL_concat_strings(u_103);
    t_103 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_103, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), term_c_37), term_b_37), term_a_37), term_y_36), term_w_36), term_t_36), term_q_36), term_o_36), term_n_36), term_m_36), term_l_36), term_j_36));
    {
      ATerm f_37 = t;
      if((PushChoice() == 0))
        {
          ATerm z_103 = NULL,a_104 = NULL;
          if(match_cons(t, sym__2))
            {
              z_103 = ATgetArgument(t, 0);
              a_104 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_104;
          {
            ATerm c_6 (ATerm t)
            {
              if((z_103 != t))
                {
                  _fail(t);
                }
              return(t);
            }
            t = oncetd_1_0(c_6, t);
            t = (ATerm) ATmakeAppl(sym__2, z_103, a_104);
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_37;
        }
      t = t_103;
      t = escape_0_0(t);
      a_54 = t;
      t = SSL_explode_string(a_54);
      b_54 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_33)), b_54), (ATerm) ATinsert(ATempty, term_x_33));
      t = concat_0_0(t);
      y_53 = t;
      t = SSL_implode_string(y_53);
    }
  }
  return(t);
}
ATerm l_104 (ATerm d_104, ATerm t)
{
  ATerm e_104 = NULL;
  t = SSL_explode_term(d_104);
  if(match_cons(t, sym__2))
    {
      ATerm g_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_104;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL;
  i_104 = t;
  if(match_cons(t, sym__2))
    {
      g_104 = ATgetArgument(t, 0);
      h_104 = ATgetArgument(t, 1);
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              t = h_104;
              return(t);
            }
            t = g_104;
            t = at_end_1_0(d_6, t);
            ;
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            t = l_104(i_104, t);
          }
      }
    }
  else
    {
      t = l_104(i_104, t);
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_37);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_37);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_n_37);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL,g_105 = NULL;
  g_105 = t;
  if(match_cons(t, sym_cf_1))
    {
      e_105 = ATgetArgument(t, 0);
      t = e_105;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          e_105 = ATgetArgument(t, 0);
          t = e_105;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_o_37);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  e_105 = ATgetArgument(t, 0);
                  f_105 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(f_105), e_105);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      e_105 = ATgetArgument(t, 0);
                      t = e_105;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(e_6, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          e_105 = ATgetArgument(t, 0);
                          t = e_105;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(f_6, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              e_105 = ATgetArgument(t, 0);
                              t = e_105;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(g_6, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  e_105 = ATgetArgument(t, 0);
                                  f_105 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_105 = NULL,t_105 = NULL;
                                    t = e_105;
                                    t = Sym2Strs_0_0(t);
                                    s_105 = t;
                                    t = f_105;
                                    t = Sym2Strs_0_0(t);
                                    t_105 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_37)), t_105), s_105);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      e_105 = ATgetArgument(t, 0);
                                      f_105 = ATgetArgument(t, 1);
                                      {
                                        ATerm w_105 = NULL,x_105 = NULL;
                                        t = e_105;
                                        t = Sym2Strs_0_0(t);
                                        w_105 = t;
                                        t = f_105;
                                        t = Sym2Strs_0_0(t);
                                        x_105 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_37)), x_105), w_105);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm q_37 = t;
                                      int r_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              e_105 = ATgetArgument(t, 0);
                                              {
                                                ATerm t_37 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(r_37);
                                          {
                                            ATerm d_106 = NULL;
                                            t = e_105;
                                            t = Sym2Strs_0_0(t);
                                            d_106 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_37)), d_106);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = q_37;
                                          {
                                            ATerm x_37 = t;
                                            int d_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    e_105 = ATgetArgument(t, 0);
                                                    f_105 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_38 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(d_38);
                                                {
                                                  ATerm h_106 = NULL,i_106 = NULL;
                                                  t = e_105;
                                                  t = Sym2Strs_0_0(t);
                                                  h_106 = t;
                                                  t = f_105;
                                                  t = Sym2Strs_0_0(t);
                                                  i_106 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_37)), i_106), h_106);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = x_37;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    e_105 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_106 = NULL;
                                                      t = e_105;
                                                      t = Sym2Strs_0_0(t);
                                                      p_106 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, p_106), (ATerm) ATinsert(ATempty, term_f_38));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        e_105 = ATgetArgument(t, 0);
                                                        f_105 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_106 = NULL,t_106 = NULL;
                                                          t = e_105;
                                                          t = Sym2Strs_0_0(t);
                                                          s_106 = t;
                                                          t = f_105;
                                                          t = Sym2Strs_0_0(t);
                                                          t_106 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_106), (ATerm) ATinsert(ATempty, term_h_38)), s_106);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            e_105 = ATgetArgument(t, 0);
                                                            f_105 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_106 = NULL,x_106 = NULL;
                                                              t = e_105;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              w_106 = t;
                                                              t = f_105;
                                                              t = Sym2Strs_0_0(t);
                                                              x_106 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_106), (ATerm) ATinsert(ATempty, term_i_38)), w_106);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                e_105 = ATgetArgument(t, 0);
                                                                f_105 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm a_107 = NULL,b_107 = NULL;
                                                                  t = e_105;
                                                                  t = Sym2Strs_0_0(t);
                                                                  a_107 = t;
                                                                  t = f_105;
                                                                  t = Sym2Strs_0_0(t);
                                                                  b_107 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_107), (ATerm) ATinsert(ATempty, term_j_38)), a_107);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    e_105 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm d_107 = NULL;
                                                                      t = e_105;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      d_107 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(d_107), term_k_38);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        e_105 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, e_105);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            e_105 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm m_54 = NULL;
                                                                              t = e_105;
                                                                              {
                                                                                ATerm l_38 = t;
                                                                                int m_38 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(m_38);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_38;
                                                                                  }
                                                                                m_54 = t;
                                                                                t = (ATerm) ATinsert(ATempty, m_54);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm n_38 = t;
                                                                            int o_38 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    e_105 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm p_38 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(o_38);
                                                                                {
                                                                                  ATerm k_55 = NULL;
                                                                                  t = e_105;
                                                                                  {
                                                                                    ATerm q_38 = t;
                                                                                    int r_38 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(r_38);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_38;
                                                                                      }
                                                                                    k_55 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, k_55);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_38;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_s_38);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      ;
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
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
      ATerm v_38 = ATgetFirst((ATermList) t);
      if(((ATgetType(v_38) != AT_INT) || (ATgetInt((ATermInt) v_38) != 34)))
        _fail(t);
      {
        ATerm w_38 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
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
  ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL;
  n_112 = t;
  t = SSL_explode_string(n_112);
  j_112 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_112 = ATgetFirst((ATermList) t);
      {
        ATerm a_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_112;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = j_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_39 = ATgetFirst((ATermList) t);
      l_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_112;
  t = at_last_1_0(k_6, t);
  k_112 = t;
  t = SSL_implode_string(k_112);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm d_39 = t;
  if((PushChoice() == 0))
    {
      ATerm n_107 = NULL,o_107 = NULL;
      if(match_cons(t, sym__2))
        {
          n_107 = ATgetArgument(t, 0);
          o_107 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_107, o_107);
      {
        ATerm e_39 = t;
        int f_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(n_107, o_107);
            ;
            LocalPopChoice(f_39);
          }
        else
          {
            t = e_39;
            t = SSL_gtr(n_107, o_107);
          }
        t = (ATerm) ATmakeAppl(sym__2, n_107, o_107);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_39;
    }
  return(t);
}
ATerm x_107 (ATerm t_107, ATerm t)
{
  t = SSL_explode_string(t_107);
  {
    ATerm i_39 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(p_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_39;
      }
    t = term_j_39;
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_55 = NULL;
      y_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_55, term_r_39);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_t_39, y_55);
      t = leq_0_0(t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm w_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_56 = NULL;
            b_56 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_56, term_c_36);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_d_36, b_56);
            t = leq_0_0(t);
            ;
            LocalPopChoice(x_39);
          }
        else
          {
            t = w_39;
            {
              ATerm y_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_56 = NULL;
                  e_56 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_56, term_f_36);
                  t = leq_0_0(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_h_36, e_56);
                  t = leq_0_0(t);
                  ;
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = y_39;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_q_14;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm w_107 = NULL;
  w_107 = t;
  if(match_string(t, "|="))
    {
      ATerm a_40 = t;
      int b_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_107(w_107, t);
          ;
          LocalPopChoice(b_40);
        }
      else
        {
          t = a_40;
          t = term_c_40;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm d_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_107(w_107, t);
              ;
              LocalPopChoice(e_40);
            }
          else
            {
              t = d_40;
              t = term_f_40;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm g_40 = t;
              int h_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_107(w_107, t);
                  ;
                  LocalPopChoice(h_40);
                }
              else
                {
                  t = g_40;
                  t = term_i_40;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm j_40 = t;
                  int k_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_107(w_107, t);
                      ;
                      LocalPopChoice(k_40);
                    }
                  else
                    {
                      t = j_40;
                      t = term_n_40;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm o_40 = t;
                      int p_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_107(w_107, t);
                          ;
                          LocalPopChoice(p_40);
                        }
                      else
                        {
                          t = o_40;
                          t = term_q_40;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm r_40 = t;
                          int s_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = x_107(w_107, t);
                              ;
                              LocalPopChoice(s_40);
                            }
                          else
                            {
                              t = r_40;
                              t = term_t_40;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm a_41 = t;
                              int b_41 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = x_107(w_107, t);
                                  ;
                                  LocalPopChoice(b_41);
                                }
                              else
                                {
                                  t = a_41;
                                  t = term_d_41;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm h_41 = t;
                                  int i_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_107(w_107, t);
                                      ;
                                      LocalPopChoice(i_41);
                                    }
                                  else
                                    {
                                      t = h_41;
                                      t = term_j_41;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm k_41 = t;
                                      int p_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = x_107(w_107, t);
                                          ;
                                          LocalPopChoice(p_41);
                                        }
                                      else
                                        {
                                          t = k_41;
                                          t = term_s_41;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm t_41 = t;
                                          int u_41 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = x_107(w_107, t);
                                              ;
                                              LocalPopChoice(u_41);
                                            }
                                          else
                                            {
                                              t = t_41;
                                              t = term_v_41;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm y_41 = t;
                                              int z_41 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = x_107(w_107, t);
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
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm b_42 = t;
                                                  int e_42 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = x_107(w_107, t);
                                                      ;
                                                      LocalPopChoice(e_42);
                                                    }
                                                  else
                                                    {
                                                      t = b_42;
                                                      t = term_f_42;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm g_42 = t;
                                                      int i_42 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = x_107(w_107, t);
                                                          ;
                                                          LocalPopChoice(i_42);
                                                        }
                                                      else
                                                        {
                                                          t = g_42;
                                                          t = term_j_42;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm k_42 = t;
                                                          int n_42 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = x_107(w_107, t);
                                                              ;
                                                              LocalPopChoice(n_42);
                                                            }
                                                          else
                                                            {
                                                              t = k_42;
                                                              t = term_j_38;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm u_42 = t;
                                                              int v_42 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = x_107(w_107, t);
                                                                  ;
                                                                  LocalPopChoice(v_42);
                                                                }
                                                              else
                                                                {
                                                                  t = u_42;
                                                                  t = term_w_42;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm x_42 = t;
                                                                  int g_43 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = x_107(w_107, t);
                                                                      ;
                                                                      LocalPopChoice(g_43);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = x_42;
                                                                      t = term_w_42;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm h_43 = t;
                                                                      int i_43 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = x_107(w_107, t);
                                                                          ;
                                                                          LocalPopChoice(i_43);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_43;
                                                                          t = term_j_43;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm k_43 = t;
                                                                          int l_43 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = x_107(w_107, t);
                                                                              ;
                                                                              LocalPopChoice(l_43);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_43;
                                                                              t = term_m_43;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm n_43 = t;
                                                                              int p_43 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = x_107(w_107, t);
                                                                                  ;
                                                                                  LocalPopChoice(p_43);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = n_43;
                                                                                  t = term_q_43;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm r_43 = t;
                                                                                  int t_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = x_107(w_107, t);
                                                                                      ;
                                                                                      LocalPopChoice(t_43);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_43;
                                                                                      t = term_v_43;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm w_43 = t;
                                                                                      int x_43 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = x_107(w_107, t);
                                                                                          ;
                                                                                          LocalPopChoice(x_43);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_43;
                                                                                          t = term_y_43;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm z_43 = t;
                                                                                          int a_44 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = x_107(w_107, t);
                                                                                              ;
                                                                                              LocalPopChoice(a_44);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = z_43;
                                                                                              t = term_b_44;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm c_44 = t;
                                                                                              int g_44 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = x_107(w_107, t);
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
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm i_44 = t;
                                                                                                  int k_44 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = x_107(w_107, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(k_44);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_44;
                                                                                                      t = term_n_44;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm o_44 = t;
                                                                                                      int p_44 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = x_107(w_107, t);
                                                                                                          ;
                                                                                                          LocalPopChoice(p_44);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = o_44;
                                                                                                          t = term_u_44;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm w_44 = t;
                                                                                                          int x_44 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = x_107(w_107, t);
                                                                                                              ;
                                                                                                              LocalPopChoice(x_44);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = w_44;
                                                                                                              t = term_y_44;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm z_44 = t;
                                                                                                              int a_45 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = x_107(w_107, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(a_45);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_44;
                                                                                                                  t = term_b_45;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm c_45 = t;
                                                                                                                  int e_45 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = x_107(w_107, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(e_45);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = c_45;
                                                                                                                      t = term_g_45;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm h_45 = t;
                                                                                                                      int i_45 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = x_107(w_107, t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(i_45);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = h_45;
                                                                                                                          t = term_h_38;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm j_45 = t;
                                                                                                                          int l_45 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = x_107(w_107, t);
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
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm o_45 = t;
                                                                                                                              int r_45 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = x_107(w_107, t);
                                                                                                                                  ;
                                                                                                                                  LocalPopChoice(r_45);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = o_45;
                                                                                                                                  t = term_t_45;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm x_45 = t;
                                                                                                                                  int z_45 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = x_107(w_107, t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(z_45);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = x_45;
                                                                                                                                      t = term_a_46;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm e_46 = t;
                                                                                                                                      int f_46 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = x_107(w_107, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(f_46);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = e_46;
                                                                                                                                          t = term_h_46;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm k_46 = t;
                                                                                                                                          int n_46 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = x_107(w_107, t);
                                                                                                                                              ;
                                                                                                                                              LocalPopChoice(n_46);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = k_46;
                                                                                                                                              t = term_o_46;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm p_46 = t;
                                                                                                                                              int q_46 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = x_107(w_107, t);
                                                                                                                                                  ;
                                                                                                                                                  LocalPopChoice(q_46);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = p_46;
                                                                                                                                                  t = term_r_46;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm t_46 = t;
                                                                                                                                                  int y_46 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = x_107(w_107, t);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(y_46);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = t_46;
                                                                                                                                                      t = term_z_46;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm a_47 = t;
                                                                                                                                                      int b_47 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = x_107(w_107, t);
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(b_47);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = a_47;
                                                                                                                                                          t = term_c_47;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm d_47 = t;
                                                                                                                                                          int e_47 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = x_107(w_107, t);
                                                                                                                                                              ;
                                                                                                                                                              LocalPopChoice(e_47);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = d_47;
                                                                                                                                                              t = term_f_47;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = x_107(w_107, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm f_11 (ATerm e_26, ATerm f_26, ATerm t)
{
  ATerm n_108 = NULL,o_108 = NULL;
  t = f_26;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_26;
    }
  else
    {
      ATerm m_56 = NULL,w_56 = NULL,w_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_108 = ATgetFirst((ATermList) t);
          o_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_26);
      m_56 = t;
      t = o_108;
      {
        ATerm c_57 (ATerm t)
        {
          ATerm g_47 = t;
          int h_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_56 = NULL;
              x_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_56;
              ;
              LocalPopChoice(h_47);
            }
          else
            {
              t = g_47;
              {
                ATerm z_56 = NULL;
                t = Cons_2_0(_id, c_57, t);
                z_56 = t;
                t = (ATerm) ATinsert(CheckATermList(z_56), e_26);
              }
            }
          return(t);
        }
        t = c_57(t);
        w_56 = t;
        t = (ATerm) ATinsert(CheckATermList(w_56), n_108);
        w_18 = t;
        t = SSLsetAnnotations(w_18, m_56);
      }
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm a_109 = NULL,b_109 = NULL,d_109 = NULL,f_109 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_109 = ATgetFirst((ATermList) t);
      f_109 = (ATerm) ATgetNext((ATermList) t);
      t = f_109;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_109 = ATgetFirst((ATermList) t);
          b_109 = (ATerm) ATgetNext((ATermList) t);
          t = a_109;
          if(match_int(t, 34))
            {
              t = d_109;
              if(match_int(t, 92))
                {
                  ATerm i_47 = t;
                  int j_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_109 = NULL;
                      t = b_109;
                      t = De_Escape_0_0(t);
                      i_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(i_109), term_x_33);
                      ;
                      LocalPopChoice(j_47);
                    }
                  else
                    {
                      t = i_47;
                      {
                        ATerm l_109 = NULL;
                        t = f_109;
                        t = De_Escape_0_0(t);
                        l_109 = t;
                        t = (ATerm) ATinsert(CheckATermList(l_109), d_109);
                      }
                    }
                }
              else
                {
                  ATerm o_109 = NULL;
                  t = f_109;
                  t = De_Escape_0_0(t);
                  o_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_109), d_109);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = d_109;
                  if(match_int(t, 92))
                    {
                      ATerm k_47 = t;
                      int l_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_109 = NULL;
                          t = b_109;
                          t = De_Escape_0_0(t);
                          q_109 = t;
                          t = (ATerm) ATinsert(CheckATermList(q_109), term_q_34);
                          ;
                          LocalPopChoice(l_47);
                        }
                      else
                        {
                          t = k_47;
                          {
                            ATerm t_109 = NULL;
                            t = f_109;
                            t = De_Escape_0_0(t);
                            t_109 = t;
                            t = (ATerm) ATinsert(CheckATermList(t_109), d_109);
                          }
                        }
                    }
                  else
                    {
                      ATerm w_109 = NULL;
                      t = f_109;
                      t = De_Escape_0_0(t);
                      w_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_109), d_109);
                    }
                }
              else
                {
                  ATerm z_109 = NULL;
                  t = f_109;
                  t = De_Escape_0_0(t);
                  z_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(z_109), d_109);
                }
            }
        }
      else
        {
          ATerm c_110 = NULL;
          t = f_109;
          t = De_Escape_0_0(t);
          c_110 = t;
          t = (ATerm) ATinsert(CheckATermList(c_110), d_109);
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
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL,q_110 = NULL,r_110 = NULL;
  l_110 = t;
  t = SSL_explode_string(l_110);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_110 = ATgetFirst((ATermList) t);
      r_110 = (ATerm) ATgetNext((ATermList) t);
      t = r_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_110 = ATgetFirst((ATermList) t);
          n_110 = (ATerm) ATgetNext((ATermList) t);
          t = m_110;
          if(match_int(t, 34))
            {
              t = q_110;
              if(match_int(t, 92))
                {
                  ATerm m_47 = t;
                  int n_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_110 = NULL;
                      t = n_110;
                      t = De_Escape_0_0(t);
                      u_110 = t;
                      t = (ATerm) ATinsert(CheckATermList(u_110), term_x_33);
                      ;
                      LocalPopChoice(n_47);
                    }
                  else
                    {
                      t = m_47;
                      {
                        ATerm x_110 = NULL;
                        t = r_110;
                        t = De_Escape_0_0(t);
                        x_110 = t;
                        t = (ATerm) ATinsert(CheckATermList(x_110), q_110);
                      }
                    }
                }
              else
                {
                  ATerm a_111 = NULL;
                  t = r_110;
                  t = De_Escape_0_0(t);
                  a_111 = t;
                  t = (ATerm) ATinsert(CheckATermList(a_111), q_110);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = q_110;
                  if(match_int(t, 92))
                    {
                      ATerm p_47 = t;
                      int q_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_111 = NULL;
                          t = n_110;
                          t = De_Escape_0_0(t);
                          c_111 = t;
                          t = (ATerm) ATinsert(CheckATermList(c_111), term_q_34);
                          ;
                          LocalPopChoice(q_47);
                        }
                      else
                        {
                          t = p_47;
                          {
                            ATerm f_111 = NULL;
                            t = r_110;
                            t = De_Escape_0_0(t);
                            f_111 = t;
                            t = (ATerm) ATinsert(CheckATermList(f_111), q_110);
                          }
                        }
                    }
                  else
                    {
                      ATerm i_111 = NULL;
                      t = r_110;
                      t = De_Escape_0_0(t);
                      i_111 = t;
                      t = (ATerm) ATinsert(CheckATermList(i_111), q_110);
                    }
                }
              else
                {
                  ATerm l_111 = NULL;
                  t = r_110;
                  t = De_Escape_0_0(t);
                  l_111 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_111), q_110);
                }
            }
        }
      else
        {
          ATerm o_111 = NULL;
          t = r_110;
          t = De_Escape_0_0(t);
          o_111 = t;
          t = (ATerm) ATinsert(CheckATermList(o_111), q_110);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  k_110 = t;
  t = SSL_implode_string(k_110);
  return(t);
}
ATerm list_ana_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm v_111 (ATerm t)
  {
    ATerm s_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_111 = NULL;
        t = q_119(t);
        q_111 = t;
        t = (ATerm) ATinsert(ATempty, q_111);
        ;
        LocalPopChoice(v_47);
      }
    else
      {
        t = s_47;
        {
          ATerm w_47 = t;
          int x_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_111 = NULL,i_57 = NULL;
              u_111 = t;
              t = SSL_explode_term(u_111);
              if(match_cons(t, sym__2))
                {
                  ATerm z_47 = ATgetArgument(t, 0);
                  i_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_57;
              t = filter_1_0(v_111, t);
              t = concat_0_0(t);
              ;
              LocalPopChoice(x_47);
            }
          else
            {
              t = w_47;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = v_111(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm a_112 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      a_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_112;
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        ;
        LocalPopChoice(d_48);
      }
    else
      {
        t = c_48;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm z_111 = NULL,l_57 = NULL,m_57 = NULL;
  t = list_ana_1_0(v_6, t);
  m_57 = t;
  t = term_i_36;
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_36, m_57);
  t = f_11(l_57, m_57, t);
  z_111 = t;
  t = SSL_concat_strings(z_111);
  {
    ATerm h_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        ;
        LocalPopChoice(k_48);
      }
    else
      {
        t = h_48;
      }
  }
  return(t);
}
ATerm a_114 (ATerm b_113, ATerm c_113, ATerm d_113, ATerm t)
{
  ATerm l_113 = NULL;
  t = d_113;
  {
    ATerm l_48 = t;
    int m_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_113;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        l_113 = t;
        ;
        LocalPopChoice(m_48);
      }
    else
      {
        t = l_48;
        {
          ATerm p_48 = t;
          int q_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_113 = NULL,o_113 = NULL;
              t = (ATerm) ATinsert(ATempty, c_113);
              t = syms2strs_0_0(t);
              n_113 = t;
              t = b_113;
              t = filter_1_0(lit2str_0_0, t);
              o_113 = t;
              t = filter_1_0(w_6, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_48 = ATgetFirst((ATermList) t);
                  ATerm t_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, n_113, o_113);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              l_113 = t;
              ;
              LocalPopChoice(q_48);
            }
          else
            {
              t = p_48;
              {
                ATerm v_48 = t;
                int w_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_113;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    l_113 = t;
                    ;
                    LocalPopChoice(w_48);
                  }
                else
                  {
                    t = v_48;
                    {
                      ATerm q_113 = NULL,r_113 = NULL;
                      t = (ATerm) ATinsert(ATempty, c_113);
                      t = syms2strs_0_0(t);
                      q_113 = t;
                      t = term_q_14;
                      t = new_0_0(t);
                      r_113 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_113, (ATerm) ATinsert(ATinsert(ATempty, r_113), term_x_48));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      l_113 = t;
                    }
                  }
              }
            }
        }
      }
    t = l_113;
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm z_48 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_48;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL;
  t_113 = t;
  {
    ATerm a_49 = t;
    int b_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            u_113 = ATgetArgument(t, 0);
            {
              ATerm c_49 = ATgetArgument(t, 1);
            }
            {
              ATerm n_49 = ATgetArgument(t, 2);
            }
            {
              ATerm o_49 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_49);
        t = u_113;
        {
          ATerm p_49 = t;
          int q_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_58 = NULL,h_58 = NULL;
              ATerm r_49 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_49;
                }
              t = SSL_explode_string(u_113);
              h_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_33)), h_58), (ATerm) ATinsert(ATempty, term_x_33));
              t = concat_0_0(t);
              c_58 = t;
              t = SSL_implode_string(c_58);
              ;
              LocalPopChoice(q_49);
            }
          else
            {
              t = p_49;
            }
        }
      }
    else
      {
        t = a_49;
        if(match_cons(t, sym_prod_3))
          {
            u_113 = ATgetArgument(t, 0);
            v_113 = ATgetArgument(t, 1);
            {
              ATerm u_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_113;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm v_49 = t;
            int w_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_114(u_113, v_113, t_113, t);
                ;
                LocalPopChoice(w_49);
              }
            else
              {
                t = v_49;
                {
                  ATerm y_113 = NULL;
                  t = (ATerm) ATinsert(ATempty, v_113);
                  t = syms2strs_0_0(t);
                  y_113 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_113, (ATerm) ATinsert(ATempty, term_x_49));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = a_114(u_113, v_113, t_113, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm h_116 = NULL,i_116 = NULL,j_116 = NULL;
  h_116 = t;
  if(match_cons(t, sym_sort_1))
    {
      i_116 = ATgetArgument(t, 0);
      {
        ATerm z_58 = NULL,y_18 = NULL;
        t = SSLgetAnnotations(h_116);
        z_58 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, i_116);
        y_18 = t;
        t = SSLsetAnnotations(y_18, z_58);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          i_116 = ATgetArgument(t, 0);
          j_116 = ATgetArgument(t, 1);
          {
            ATerm h_59 = NULL,k_59 = NULL,l_59 = NULL,z_24 = NULL;
            t = SSLgetAnnotations(h_116);
            h_59 = t;
            t = i_116;
            t = syntaxless_sort_0_0(t);
            k_59 = t;
            t = j_116;
            t = syntaxless_sort_0_0(t);
            l_59 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, k_59, l_59);
            z_24 = t;
            t = SSLsetAnnotations(z_24, h_59);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              i_116 = ATgetArgument(t, 0);
              {
                ATerm s_59 = NULL,u_59 = NULL,c_25 = NULL;
                t = SSLgetAnnotations(h_116);
                s_59 = t;
                t = i_116;
                t = syntaxless_sort_0_0(t);
                u_59 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, u_59);
                c_25 = t;
                t = SSLsetAnnotations(c_25, s_59);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  i_116 = ATgetArgument(t, 0);
                  {
                    ATerm a_60 = NULL,e_60 = NULL,e_25 = NULL;
                    t = SSLgetAnnotations(h_116);
                    a_60 = t;
                    t = i_116;
                    t = syntaxless_sort_0_0(t);
                    e_60 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, e_60);
                    e_25 = t;
                    t = SSLsetAnnotations(e_25, a_60);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      i_116 = ATgetArgument(t, 0);
                      {
                        ATerm l_60 = NULL,o_60 = NULL,f_25 = NULL;
                        t = SSLgetAnnotations(h_116);
                        l_60 = t;
                        t = i_116;
                        t = syntaxless_sort_0_0(t);
                        o_60 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, o_60);
                        f_25 = t;
                        t = SSLsetAnnotations(f_25, l_60);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          i_116 = ATgetArgument(t, 0);
                          j_116 = ATgetArgument(t, 1);
                          {
                            ATerm v_60 = NULL,d_61 = NULL,g_25 = NULL;
                            t = SSLgetAnnotations(h_116);
                            v_60 = t;
                            t = i_116;
                            t = syntaxless_sort_0_0(t);
                            d_61 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, d_61, j_116);
                            g_25 = t;
                            t = SSLsetAnnotations(g_25, v_60);
                          }
                        }
                      else
                        {
                          ATerm o_61 = NULL,r_61 = NULL,i_25 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              i_116 = ATgetArgument(t, 0);
                              j_116 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(h_116);
                          o_61 = t;
                          t = i_116;
                          t = syntaxless_sort_0_0(t);
                          r_61 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, r_61, j_116);
                          i_25 = t;
                          t = SSLsetAnnotations(i_25, o_61);
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
  ATerm t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL,u_25 = NULL,r_25 = NULL;
  d_117 = t;
  if(match_cons(t, sym_prod_3))
    {
      u_116 = ATgetArgument(t, 0);
      v_116 = ATgetArgument(t, 1);
      w_116 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_117);
  t_116 = t;
  t = u_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_116 = ATgetFirst((ATermList) t);
      a_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_116);
  y_116 = t;
  t = z_116;
  t = syntaxless_sort_0_0(t);
  b_117 = t;
  t = a_117;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_117), b_117);
  r_25 = t;
  t = SSLsetAnnotations(r_25, y_116);
  c_117 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, c_117, v_116, w_116);
  u_25 = t;
  t = SSLsetAnnotations(u_25, t_116);
  x_116 = t;
  t = term_y_49;
  t = get_options_0_0(t);
  t = oncetd_1_0(x_6, t);
  t = x_116;
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
  ATerm f_117 = NULL,j_117 = NULL;
  ATerm z_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm b_50 = ATgetArgument(t, 0);
          ATerm c_50 = ATgetArgument(t, 1);
          ATerm d_50 = ATgetArgument(t, 2);
          f_117 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(a_50);
      t = f_117;
      t = oncetd_1_0(z_6, t);
      t = term_q_14;
    }
  else
    {
      t = z_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm e_50 = ATgetArgument(t, 0);
          ATerm g_50 = ATgetArgument(t, 1);
          j_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_117;
      t = oncetd_1_0(e_7, t);
      t = term_q_14;
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
  ATerm n_117 = NULL,r_117 = NULL;
  ATerm h_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm j_50 = ATgetArgument(t, 0);
          ATerm s_50 = ATgetArgument(t, 1);
          ATerm t_50 = ATgetArgument(t, 2);
          n_117 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(i_50);
      t = n_117;
      t = oncetd_1_0(g_7, t);
      t = term_q_14;
    }
  else
    {
      t = h_50;
      if(match_cons(t, sym_prod_3))
        {
          ATerm u_50 = ATgetArgument(t, 0);
          ATerm v_50 = ATgetArgument(t, 1);
          r_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_117;
      t = oncetd_1_0(i_7, t);
      t = term_q_14;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm y_117 = NULL;
  y_117 = t;
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_62 = NULL;
        t = y_117;
        {
          ATerm z_50 = t;
          if((PushChoice() == 0))
            {
              ATerm a_51 = t;
              int c_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  ;
                  LocalPopChoice(c_51);
                }
              else
                {
                  t = a_51;
                  {
                    ATerm d_51 = t;
                    int e_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        ;
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
                              t = is_reject_0_0(t);
                              ;
                              LocalPopChoice(g_51);
                            }
                          else
                            {
                              t = f_51;
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
              t = z_50;
            }
          t = y_117;
          t = mk_constr_0_0(t);
          b_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_117, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, b_62)));
          t = add_attributes_0_0(t);
        }
        ;
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        {
          ATerm a_118 = NULL;
          ATerm k_7 (ATerm t)
          {
            ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL,w_26 = NULL;
            k_118 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm h_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_118);
            i_118 = t;
            t = not_null(a_118);
            t = uq2q_0_0(t);
            j_118 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, j_118);
            w_26 = t;
            t = SSLsetAnnotations(w_26, i_118);
            return(t);
          }
          t = y_117;
          t = get_constr_0_0(t);
          if(((a_118 != NULL) && (a_118 != t)))
            _fail(t);
          else
            a_118 = t;
          t = y_117;
          t = oncetd_1_0(k_7, t);
        }
      }
  }
  return(t);
}
ATerm k_11 (ATerm d_20, ATerm e_20, ATerm c_20, ATerm b_20, ATerm t)
{
  ATerm m_118 = NULL,o_118 = NULL;
  ATerm i_51 = t;
  int j_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              m_118 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = c_20;
      t = oncetd_1_0(r_7, t);
      ;
      LocalPopChoice(j_51);
    }
  else
    {
      t = i_51;
      {
        ATerm k_51 = t;
        int l_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL,f_27 = NULL,e_27 = NULL;
            t = e_20;
            if(match_cons(t, sym_sort_1))
              {
                w_118 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_20);
            v_118 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, w_118);
            e_27 = t;
            t = SSLsetAnnotations(e_27, v_118);
            t = (ATerm) ATmakeAppl(sym_prod_3, d_20, e_20, c_20);
            t = prodcons_0_0(t);
            u_118 = t;
            if(match_cons(t, sym_prod_3))
              {
                q_118 = ATgetArgument(t, 0);
                r_118 = ATgetArgument(t, 1);
                s_118 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_118);
            p_118 = t;
            t = s_118;
            {
              ATerm s_7 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      m_118 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(s_7, t);
              t_118 = t;
              t = (ATerm) ATmakeAppl(sym_prod_3, q_118, r_118, t_118);
              f_27 = t;
              t = SSLsetAnnotations(f_27, p_118);
            }
            ;
            LocalPopChoice(l_51);
          }
        else
          {
            t = k_51;
            t = term_m_51;
            m_118 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, d_20, e_20, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(m_118))))), (ATerm) ATinsert(ATempty, not_null(m_118)));
  t = get_pp_entry_0_0(t);
  o_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_118), o_118);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm n_51 = t;
  if((PushChoice() == 0))
    {
      ATerm o_119 = NULL,p_119 = NULL,s_119 = NULL,i_27 = NULL;
      s_119 = t;
      if(match_cons(t, sym_lit_1))
        {
          p_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_119);
      o_119 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, p_119);
      i_27 = t;
      t = SSLsetAnnotations(i_27, o_119);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_51;
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm o_51 = t;
  if((PushChoice() == 0))
    {
      ATerm t_119 = NULL,v_119 = NULL,w_119 = NULL,j_27 = NULL;
      w_119 = t;
      if(match_cons(t, sym_lit_1))
        {
          v_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_119);
      t_119 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, v_119);
      j_27 = t;
      t = SSLsetAnnotations(j_27, t_119);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_51;
    }
  return(t);
}
ATerm l_11 (ATerm k_19, ATerm i_19, ATerm j_19, ATerm l_19, ATerm t)
{
  ATerm b_119 = NULL,c_119 = NULL,h_119 = NULL,i_119 = NULL,n_119 = NULL;
  ATerm v_7 (ATerm t)
  {
    ATerm p_51 = t;
    int q_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_51 = t;
        int s_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_7 (ATerm t)
            {
              t = not_null(h_119);
              return(t);
            }
            t = Instantiate_1_0(w_7, t);
            ;
            LocalPopChoice(s_51);
          }
        else
          {
            t = r_51;
            t = flat_list_0_0(t);
          }
        ;
        LocalPopChoice(q_51);
      }
    else
      {
        t = p_51;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, k_19, i_19, j_19), l_19);
  t = k_11(k_19, i_19, j_19, l_19, t);
  if(match_cons(t, sym__2))
    {
      b_119 = ATgetArgument(t, 0);
      c_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_19;
  t = filter_1_0(t_7, t);
  i_119 = t;
  t = l_19;
  t = filter_1_0(u_7, t);
  n_119 = t;
  t = (ATerm) ATmakeAppl(sym__4, i_119, n_119, (ATerm)ATinsert(ATempty, b_119), term_x_14);
  t = seq2abox_0_0(t);
  if(((h_119 != NULL) && (h_119 != t)))
    _fail(t);
  else
    h_119 = t;
  t = c_119;
  t = bottomup_1_0(v_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL,m_120 = NULL;
  k_120 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_120;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_120 = ATgetFirst((ATermList) t);
          m_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_51 = t;
        int u_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_62 = NULL,r_62 = NULL,v_62 = NULL,u_27 = NULL;
            t = SSLgetAnnotations(k_120);
            o_62 = t;
            t = l_120;
            t = o_103(t);
            r_62 = t;
            t = m_120;
            t = filter_1_0(o_103, t);
            v_62 = t;
            t = (ATerm) ATinsert(CheckATermList(v_62), r_62);
            u_27 = t;
            t = SSLsetAnnotations(u_27, o_62);
            ;
            LocalPopChoice(u_51);
          }
        else
          {
            t = t_51;
            t = m_120;
            t = filter_1_0(o_103, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    t = topdown_1_0(q_90, t);
    return(t);
  }
  t = q_90(t);
  t = SRTS_all(x_7, t);
  return(t);
}
ATerm sometd_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm p_120 (ATerm t)
  {
    ATerm v_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_92(t);
        ;
        LocalPopChoice(x_51);
      }
    else
      {
        t = v_51;
        t = SRTS_some(p_120, t);
      }
    return(t);
  }
  t = p_120(t);
  return(t);
}
ATerm repeat_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm t_120 (ATerm t)
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_89(t);
        t = t_120(t);
        ;
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
      }
    return(t);
  }
  t = t_120(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm h_121 (ATerm t)
  {
    ATerm e_121 = NULL,f_121 = NULL,g_121 = NULL;
    g_121 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_121 = ATgetFirst((ATermList) t);
        f_121 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_63 = NULL,j_63 = NULL,o_28 = NULL;
          t = SSLgetAnnotations(g_121);
          g_63 = t;
          t = f_121;
          t = h_121(t);
          j_63 = t;
          t = (ATerm) ATinsert(CheckATermList(j_63), e_121);
          o_28 = t;
          t = SSLsetAnnotations(o_28, g_63);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_121;
        t = x_96(t);
      }
    return(t);
  }
  t = h_121(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL;
  k_121 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_121;
    }
  else
    {
      ATerm y_7 (ATerm t)
      {
        t = not_null(m_121);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_121 = ATgetFirst((ATermList) t);
          if(((m_121 != NULL) && (m_121 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_121;
      t = at_end_1_0(y_7, t);
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,a_64 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      x_63 = ATgetArgument(t, 0);
      y_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(x_63);
  a_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_63), term_b_52), a_64), term_a_52);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL;
  d_122 = t;
  if(match_cons(t, sym_Path1_1))
    {
      e_122 = ATgetArgument(t, 0);
      t = e_122;
    }
  else
    {
      ATerm v_63 = NULL,w_63 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          e_122 = ATgetArgument(t, 0);
          f_122 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_122;
      t = map_1_0(b_8, t);
      t = concat_0_0(t);
      v_63 = t;
      t = (ATerm) ATinsert(CheckATermList(v_63), e_122);
      w_63 = t;
      t = SSL_concat_strings(w_63);
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm y_122 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      y_122 = ATgetArgument(t, 0);
      {
        ATerm c_52 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_122;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm n_122 = NULL,o_122 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      n_122 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, n_122);
    }
  else
    {
      ATerm x_122 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          n_122 = ATgetArgument(t, 0);
          o_122 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_122;
      t = map_1_0(c_8, t);
      x_122 = t;
      t = (ATerm) ATinsert(CheckATermList(x_122), n_122);
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_d_52;
  return(t);
}
ATerm m_11 (ATerm z_60, ATerm a_61, ATerm t)
{
  ATerm z_122 = NULL,a_123 = NULL,c_123 = NULL,d_123 = NULL;
  t = z_60;
  t = mk_key_0_0(t);
  a_123 = t;
  t = term_y_25;
  c_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_60, a_61);
  d_123 = t;
  t = SSL_table_put(c_123, a_123, d_123);
  t = z_60;
  t = path_to_string_0_0(t);
  z_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_122, a_61);
  t = if_verbose1_1_0(d_8, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm u_123 (ATerm t)
  {
    ATerm r_123 = NULL,s_123 = NULL,t_123 = NULL;
    ATerm g_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_106(t);
        ;
        LocalPopChoice(h_52);
      }
    else
      {
        t = g_52;
      }
    t_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_123 = ATgetFirst((ATermList) t);
        s_123 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_64 = NULL,h_65 = NULL,q_28 = NULL;
          t = SSLgetAnnotations(t_123);
          w_64 = t;
          t = s_123;
          t = u_123(t);
          h_65 = t;
          t = (ATerm) ATinsert(CheckATermList(h_65), r_123);
          q_28 = t;
          t = SSLsetAnnotations(q_28, w_64);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_123;
      }
    return(t);
  }
  t = u_123(t);
  return(t);
}
ATerm at_last_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm t_124 (ATerm t)
  {
    ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL;
    q_124 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_124 = ATgetFirst((ATermList) t);
        s_124 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_52 = t;
      int k_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_65 = NULL,t_28 = NULL;
          t = SSLgetAnnotations(q_124);
          p_65 = t;
          t = s_124;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(s_124), r_124);
          t_28 = t;
          t = SSLsetAnnotations(t_28, p_65);
          t = i_97(t);
          ;
          LocalPopChoice(k_52);
        }
      else
        {
          t = j_52;
          {
            ATerm z_65 = NULL,c_66 = NULL,v_28 = NULL;
            t = SSLgetAnnotations(q_124);
            z_65 = t;
            t = s_124;
            t = t_124(t);
            c_66 = t;
            t = (ATerm) ATinsert(CheckATermList(c_66), r_124);
            v_28 = t;
            t = SSLsetAnnotations(v_28, z_65);
          }
        }
    }
    return(t);
  }
  t = t_124(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_124 = ATgetFirst((ATermList) t);
      a_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_125;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_124;
    }
  else
    {
      t = a_125;
      t = last_0_0(t);
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm i_125 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_52 = ATgetFirst((ATermList) t);
      i_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_125;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  ATerm f_125 = NULL,g_125 = NULL,h_125 = NULL;
  f_125 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_125 = ATgetFirst((ATermList) t);
      {
        ATerm m_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_125;
  t = q_105(t);
  t = f_125;
  t = last_0_0(t);
  t = r_105(t);
  t = f_125;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_52 = ATgetFirst((ATermList) t);
      g_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_125;
  t = at_last_1_0(f_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm p_70 = NULL,r_70 = NULL,s_70 = NULL,v_70 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_70 = ATgetFirst((ATermList) t);
      r_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_70;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = r_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_70 = ATgetFirst((ATermList) t);
      v_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_70;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(v_70), term_x_33);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(v_70), term_q_34);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(v_70), term_o_52);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_70), term_p_52);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL,o_127 = NULL;
  m_127 = t;
  if(match_cons(t, sym_Arg_1))
    {
      n_127 = ATgetArgument(t, 0);
      {
        ATerm e_67 = NULL,g_67 = NULL,d_29 = NULL;
        t = SSLgetAnnotations(m_127);
        e_67 = t;
        t = SSL_string_to_int(n_127);
        g_67 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, g_67);
        d_29 = t;
        t = SSLsetAnnotations(d_29, e_67);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          n_127 = ATgetArgument(t, 0);
          o_127 = ATgetArgument(t, 1);
          {
            ATerm n_67 = NULL,q_67 = NULL,w_67 = NULL,e_29 = NULL;
            t = SSLgetAnnotations(m_127);
            n_67 = t;
            t = SSL_string_to_int(n_127);
            q_67 = t;
            t = SSL_string_to_int(o_127);
            w_67 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, q_67, w_67);
            e_29 = t;
            t = SSLsetAnnotations(e_29, n_67);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              n_127 = ATgetArgument(t, 0);
              o_127 = ATgetArgument(t, 1);
              {
                ATerm g_68 = NULL,f_29 = NULL;
                t = SSLgetAnnotations(m_127);
                g_68 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, n_127, o_127);
                f_29 = t;
                t = SSLsetAnnotations(f_29, g_68);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  n_127 = ATgetArgument(t, 0);
                  {
                    ATerm t_68 = NULL,a_69 = NULL,g_29 = NULL,j_70 = NULL,k_70 = NULL,d_70 = NULL;
                    t = SSLgetAnnotations(m_127);
                    t_68 = t;
                    t = SSL_explode_string(n_127);
                    t = unquote_chars_2_0(g_8, h_8, t);
                    d_70 = t;
                    t = SSL_implode_string(d_70);
                    k_70 = t;
                    t = SSL_explode_string(k_70);
                    t = unescape_chars_1_0(i_8, t);
                    j_70 = t;
                    t = SSL_implode_string(j_70);
                    a_69 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, a_69);
                    g_29 = t;
                    t = SSLsetAnnotations(g_29, t_68);
                  }
                }
              else
                {
                  ATerm a_72 = NULL,f_72 = NULL,h_29 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      n_127 = ATgetArgument(t, 0);
                      o_127 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_127);
                  a_72 = t;
                  t = SSL_string_to_int(n_127);
                  f_72 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, f_72, o_127);
                  h_29 = t;
                  t = SSLsetAnnotations(h_29, a_72);
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
  ATerm x_127 = NULL,y_127 = NULL;
  t = topdown_1_0(m_8, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      x_127 = ATgetArgument(t, 0);
      y_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(x_127, y_127, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm q_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(r_52);
    }
  else
    {
      t = q_52;
    }
  return(t);
}
ATerm u_11 (ATerm y_60, ATerm t)
{
  t = y_60;
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(k_8, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm b_128 (ATerm t)
  {
    ATerm s_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_91(t);
        ;
        LocalPopChoice(t_52);
      }
    else
      {
        t = s_52;
        t = SRTS_one(b_128, t);
      }
    return(t);
  }
  t = b_128(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm c_128 = NULL,d_128 = NULL;
  t = term_u_52;
  c_128 = t;
  t = term_v_52;
  d_128 = t;
  t = term_w_52;
  t = k_12(c_128, d_128, t);
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
  ATerm x_52 = t;
  int y_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL;
      t = term_z_52;
      t = get_options_0_0(t);
      t = oncetd_1_0(n_8, t);
      t = term_r_14;
      f_128 = t;
      t = (ATerm) ATinsert(ATempty, term_a_53);
      g_128 = t;
      t = SSL_printnl(f_128, g_128);
      t = term_x_14;
      e_128 = t;
      t = SSL_exit(e_128);
      t = (ATerm) ATinsert(ATempty, term_a_53);
      ;
      LocalPopChoice(y_52);
    }
  else
    {
      t = x_52;
      {
        ATerm i_128 = NULL,j_128 = NULL;
        t = term_r_14;
        i_128 = t;
        t = (ATerm) ATinsert(ATempty, term_b_53);
        j_128 = t;
        t = SSL_printnl(i_128, j_128);
        t = (ATerm) ATinsert(ATempty, term_b_53);
      }
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm p_128 = NULL,q_128 = NULL,p_72 = NULL,q_72 = NULL;
  t = if_verbose1_1_0(r_8, t);
  t = ReadFromFile_0_0(t);
  q_128 = t;
  t = SSL_explode_term(q_128);
  if(match_cons(t, sym__2))
    {
      q_72 = ATgetArgument(t, 0);
      {
        ATerm c_53 = ATgetArgument(t, 1);
        if(((ATgetType(c_53) == AT_LIST) && !(ATisEmpty(c_53))))
          {
            p_72 = ATgetFirst((ATermList) c_53);
            {
              ATerm d_53 = (ATerm) ATgetNext((ATermList) c_53);
              if(((ATgetType(d_53) != AT_LIST) || !(ATisEmpty(d_53))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_72;
  {
    ATerm e_53 = t;
    int f_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(f_53);
      }
    else
      {
        t = e_53;
        t = type_failure_0_0(t);
      }
    t = p_72;
    if(match_cons(t, sym_PP_Table_1))
      {
        p_128 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = u_11(p_128, t);
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
  t = term_g_53;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm n_128 = NULL,o_128 = NULL;
  n_128 = t;
  t = term_y_25;
  o_128 = t;
  t = SSL_table_create(o_128);
  t = n_128;
  t = map_1_0(p_8, t);
  return(t);
}
ATerm x_11 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t_31, ATerm s_31, ATerm t)
{
  t = p_100(t);
  {
    ATerm x_8 (ATerm t)
    {
      ATerm r_128 = NULL;
      r_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_31, r_128);
      t = o_100(t);
      return(t);
    }
    t = fetch_1_0(x_8, t);
    t = s_31;
  }
  return(t);
}
ATerm y_11 (ATerm l_100 (ATerm), ATerm p_31, ATerm o_31, ATerm t)
{
  ATerm h_129 (ATerm t)
  {
    ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL;
    c_129 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_129 = ATgetFirst((ATermList) t);
            e_129 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_53 = t;
          int i_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_129;
              {
                ATerm y_8 (ATerm t)
                {
                  t = o_31;
                  return(t);
                }
                t = x_11(l_100, y_8, d_129, e_129, t);
                t = h_129(t);
              }
              ;
              LocalPopChoice(i_53);
            }
          else
            {
              t = h_53;
              {
                ATerm a_73 = NULL,d_73 = NULL,t_29 = NULL;
                t = SSLgetAnnotations(c_129);
                a_73 = t;
                t = e_129;
                t = h_129(t);
                d_73 = t;
                t = (ATerm) ATinsert(CheckATermList(d_73), d_129);
                t_29 = t;
                t = SSLsetAnnotations(t_29, a_73);
              }
            }
        }
      }
    return(t);
  }
  t = p_31;
  t = h_129(t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
  k_129 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_129;
      t = m_102(t);
    }
  else
    {
      ATerm p_129 = NULL,q_129 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_129 = ATgetFirst((ATermList) t);
          m_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_129;
      t = o_102(t);
      p_129 = t;
      t = m_129;
      t = foldr_3_0(m_102, n_102, o_102, t);
      q_129 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_129, q_129);
      t = n_102(t);
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t)
{
  ATerm j_53 = t;
  int l_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_129 = NULL;
      t = q_101(t);
      t_129 = t;
      t = (ATerm) ATinsert(ATempty, t_129);
      ;
      LocalPopChoice(l_53);
    }
  else
    {
      t = j_53;
      {
        ATerm i_73 = NULL,j_73 = NULL;
        ATerm a_9 (ATerm t)
        {
          t = collect_om_2_0(q_101, r_101, t);
          return(t);
        }
        j_73 = t;
        t = SSL_explode_term(j_73);
        if(match_cons(t, sym__2))
          {
            ATerm m_53 = ATgetArgument(t, 0);
            i_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_73;
        t = foldr_3_0(z_8, r_101, a_9, t);
      }
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm c_130 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      c_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_130;
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm d_130 = NULL,e_130 = NULL;
  if(match_cons(t, sym__2))
    {
      d_130 = ATgetArgument(t, 0);
      e_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11(i_9, d_130, e_130, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm f_130 = NULL;
  if(match_cons(t, sym__2))
    {
      f_130 = ATgetArgument(t, 0);
      if((f_130 != ATgetArgument(t, 1)))
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
  t = sometd_1_0(l_9, t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm i_130 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      i_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_130;
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm o_53 = t;
  int q_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_53 = t;
      int s_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(s_53);
        }
      else
        {
          t = r_53;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_53 = ATgetFirst((ATermList) t);
              ATerm w_53 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(n_9, t);
      ;
      LocalPopChoice(q_53);
    }
  else
    {
      t = o_53;
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm x_53 = t;
  if((PushChoice() == 0))
    {
      ATerm j_130 = NULL,k_130 = NULL,l_130 = NULL,v_29 = NULL;
      l_130 = t;
      if(match_cons(t, sym_opt_1))
        {
          k_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_130);
      j_130 = t;
      t = k_130;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, k_130);
      v_29 = t;
      t = SSLsetAnnotations(v_29, j_130);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_53;
    }
  {
    ATerm z_53 = t;
    if((PushChoice() == 0))
      {
        ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL,w_29 = NULL;
        o_130 = t;
        if(match_cons(t, sym_layout_1))
          {
            n_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_130);
        m_130 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, n_130);
        w_29 = t;
        t = SSLsetAnnotations(w_29, m_130);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_53;
      }
  }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm b_131 = NULL,c_131 = NULL,d_131 = NULL,x_29 = NULL;
  d_131 = t;
  if(match_cons(t, sym_layout_1))
    {
      c_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_131);
  b_131 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, c_131);
  x_29 = t;
  t = SSLsetAnnotations(x_29, b_131);
  return(t);
}
ATerm z_11 (ATerm u_24, ATerm t_24, ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL;
  t = u_24;
  t = collect_om_2_0(c_9, h_9, t);
  t = reverse_acc_2_0(_id, j_9, t);
  t = read_pp_tables_0_0(t);
  t = t_24;
  t = repeat_1_0(k_9, t);
  b_130 = t;
  t = topdown_1_0(m_9, t);
  {
    ATerm c_54 = t;
    int d_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_130 = NULL,s_130 = NULL,t_130 = NULL,u_130 = NULL,v_130 = NULL,w_130 = NULL;
        r_130 = t;
        if(match_cons(t, sym_appl_2))
          {
            s_130 = ATgetArgument(t, 0);
            w_130 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_130;
        if(match_cons(t, sym_prod_3))
          {
            t_130 = ATgetArgument(t, 0);
            u_130 = ATgetArgument(t, 1);
            v_130 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = r_130;
        t = l_11(t_130, u_130, v_130, w_130, t);
        ;
        LocalPopChoice(d_54);
      }
    else
      {
        t = c_54;
        t = fatal_ambiguity_0_0(t);
      }
    z_129 = t;
    t = b_130;
    t = collect_p__1_0(p_9, t);
    a_130 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_129, a_130);
    t = insert_layout_0_0(t);
    y_129 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_24, y_129);
  }
  return(t);
}
ATerm c_12 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm e_131 = NULL;
  t = SSL_fputc(q_44, r_44);
  e_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_131);
  return(t);
}
ATerm d_12 (ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm f_131 = NULL;
  t = SSL_write_term_to_stream_text(e_48, f_48);
  f_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_131);
  return(t);
}
ATerm f_12 (ATerm e_109 (ATerm), ATerm j_455, ATerm i_48, ATerm t)
{
  ATerm g_131 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_455, term_h_54);
  t = open_stream_0_0(t);
  g_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_131, i_48);
  t = e_109(t);
  t = fclose_0_0(t);
  t = i_48;
  return(t);
}
ATerm e_12 (ATerm a_48, ATerm b_48, ATerm t)
{
  ATerm h_131 = NULL;
  t = SSL_write_term_to_stream_baf(a_48, b_48);
  h_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_131);
  return(t);
}
ATerm t_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm z_73 = NULL,c_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_54 = ATgetArgument(t, 0);
      if(match_cons(i_54, sym_Stream_1))
        {
          z_73 = ATgetArgument(i_54, 0);
        }
      else
        _fail(t);
      c_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(z_73, c_74, t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_54 = ATgetArgument(t, 0);
      if(match_cons(j_54, sym_Stream_1))
        {
          f_75 = ATgetArgument(j_54, 0);
        }
      else
        _fail(t);
      g_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12(f_75, g_75, t);
  z_74 = t;
  t = term_o_52;
  a_75 = t;
  t = z_74;
  if(match_cons(t, sym_Stream_1))
    {
      e_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_52, z_74);
  t = c_12(a_75, e_75, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL,o_131 = NULL,p_131 = NULL,r_131 = NULL,s_131 = NULL,t_131 = NULL,u_131 = NULL,v_131 = NULL,v_132 = NULL,w_132 = NULL,f_30 = NULL,e_30 = NULL;
  m_131 = t;
  if(match_cons(t, sym__2))
    {
      t_131 = ATgetArgument(t, 0);
      u_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_131);
  s_131 = t;
  t = t_131;
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_131 != NULL) && (l_131 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_9, t);
        ;
        LocalPopChoice(l_54);
      }
    else
      {
        t = k_54;
        t = term_n_54;
        l_131 = t;
      }
    v_131 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_131, u_131);
    e_30 = t;
    t = SSLsetAnnotations(e_30, s_131);
    t = m_131;
    if(match_cons(t, sym__2))
      {
        o_131 = ATgetArgument(t, 0);
        p_131 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_131);
    n_131 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_131, (ATerm) ATmakeAppl(sym__2, not_null(l_131), p_131));
    f_30 = t;
    t = SSLsetAnnotations(f_30, n_131);
    r_131 = t;
    if(match_cons(t, sym__2))
      {
        v_132 = ATgetArgument(t, 0);
        w_132 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm o_54 = t;
      int p_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_73 = NULL,s_73 = NULL,t_73 = NULL,x_73 = NULL,y_73 = NULL,l_30 = NULL;
          t = SSLgetAnnotations(r_131);
          p_73 = t;
          t = v_132;
          t = fetch_1_0(t_9, t);
          s_73 = t;
          t = w_132;
          if(match_cons(t, sym__2))
            {
              x_73 = ATgetArgument(t, 0);
              y_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_12(u_9, x_73, y_73, t);
          t_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_73, t_73);
          l_30 = t;
          t = SSLsetAnnotations(l_30, p_73);
          ;
          LocalPopChoice(p_54);
        }
      else
        {
          t = o_54;
          {
            ATerm k_74 = NULL,q_74 = NULL,s_74 = NULL,w_74 = NULL,m_30 = NULL;
            t = SSLgetAnnotations(r_131);
            k_74 = t;
            t = w_132;
            if(match_cons(t, sym__2))
              {
                s_74 = ATgetArgument(t, 0);
                w_74 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_12(x_9, s_74, w_74, t);
            q_74 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_132, q_74);
            m_30 = t;
            t = SSLsetAnnotations(m_30, k_74);
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
ATerm apply_strategy_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm a_133 = NULL,b_133 = NULL,c_133 = NULL,d_133 = NULL,e_133 = NULL;
  e_133 = t;
  t = dtime_0_0(t);
  t = e_133;
  t = g_112(t);
  d_133 = t;
  t = dtime_0_0(t);
  a_133 = t;
  t = d_133;
  if(match_cons(t, sym__2))
    {
      b_133 = ATgetArgument(t, 0);
      c_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_133), (ATerm) ATmakeAppl(sym_Runtime_1, a_133)), c_133);
  return(t);
}
ATerm s_133 (ATerm m_133, ATerm t)
{
  t = SSL_fclose(m_133);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_133 = NULL,q_133 = NULL;
  q_133 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_133 = ATgetArgument(t, 0);
      {
        ATerm q_54 = t;
        int r_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_133);
            ;
            LocalPopChoice(r_54);
          }
        else
          {
            t = q_54;
            t = s_133(q_133, t);
          }
      }
    }
  else
    {
      t = s_133(q_133, t);
    }
  return(t);
}
ATerm g_12 (ATerm g_48, ATerm t)
{
  t = SSL_read_term_from_stream(g_48);
  return(t);
}
ATerm h_12 (ATerm s_44, ATerm t_44, ATerm t)
{
  ATerm t_133 = NULL;
  t = SSL_fopen(s_44, t_44);
  t_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_133);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_133 = NULL;
  t = SSL_stdin_stream();
  u_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_133);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_133 = NULL;
  t = SSL_stdout_stream();
  v_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_133);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_133 = NULL;
  t = SSL_stderr_stream();
  w_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_133);
  return(t);
}
ATerm d_135 (ATerm c_134, ATerm t)
{
  ATerm d_134 = NULL;
  t = SSL_explode_term(c_134);
  if(match_cons(t, sym__2))
    {
      ATerm s_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_54 = ATgetArgument(t, 1);
        if(((ATgetType(t_54) == AT_LIST) && !(ATisEmpty(t_54))))
          {
            d_134 = ATgetFirst((ATermList) t_54);
            {
              ATerm u_54 = (ATerm) ATgetNext((ATermList) t_54);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_134;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_134;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_134;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_134;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_135 (ATerm g_134, ATerm h_134, ATerm i_134, ATerm t)
{
  ATerm j_134 = NULL,k_134 = NULL,l_134 = NULL,o_134 = NULL,g_32 = NULL;
  t = SSLgetAnnotations(i_134);
  l_134 = t;
  t = g_134;
  if(match_cons(t, sym_Path_1))
    {
      o_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_134, h_134);
  g_32 = t;
  t = SSLsetAnnotations(g_32, l_134);
  if(match_cons(t, sym__2))
    {
      j_134 = ATgetArgument(t, 0);
      k_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(j_134, k_134, t);
  return(t);
}
ATerm f_135 (ATerm q_134, ATerm r_134, ATerm s_134, ATerm t)
{
  ATerm t_134 = NULL,u_134 = NULL,v_134 = NULL,y_134 = NULL,h_32 = NULL;
  t = SSLgetAnnotations(s_134);
  v_134 = t;
  t = SSL_is_string(q_134);
  y_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_134, r_134);
  h_32 = t;
  t = SSLsetAnnotations(h_32, v_134);
  if(match_cons(t, sym__2))
    {
      t_134 = ATgetArgument(t, 0);
      u_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(t_134, u_134, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm a_135 = NULL,b_135 = NULL,c_135 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_54 = ATgetArgument(t, 0);
      ATerm w_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  a_135 = t;
  if(match_cons(t, sym__2))
    {
      b_135 = ATgetArgument(t, 0);
      c_135 = ATgetArgument(t, 1);
      {
        ATerm x_54 = t;
        int y_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_135(a_135, t);
            ;
            LocalPopChoice(y_54);
          }
        else
          {
            t = x_54;
            {
              ATerm z_54 = t;
              int a_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_135(b_135, c_135, a_135, t);
                  ;
                  LocalPopChoice(a_55);
                }
              else
                {
                  t = z_54;
                  t = f_135(b_135, c_135, a_135, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_135(a_135, t);
    }
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_b_55;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_135 = NULL,h_135 = NULL,i_135 = NULL;
  ATerm c_55 = t;
  int d_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_135 = NULL;
      j_135 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_135, term_e_55);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_55);
    }
  else
    {
      t = c_55;
      t = debug_1_0(y_9, t);
      _fail(t);
    }
  h_135 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(i_135, t);
  g_135 = t;
  t = h_135;
  t = fclose_0_0(t);
  t = g_135;
  return(t);
}
ATerm fetch_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm h_136 (ATerm t)
  {
    ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL;
    e_136 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_136 = ATgetFirst((ATermList) t);
        g_136 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_55 = t;
      int g_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_76 = NULL,n_76 = NULL,k_32 = NULL;
          t = SSLgetAnnotations(e_136);
          f_76 = t;
          t = f_136;
          t = r_96(t);
          n_76 = t;
          t = (ATerm) ATinsert(CheckATermList(g_136), n_76);
          k_32 = t;
          t = SSLsetAnnotations(k_32, f_76);
          ;
          LocalPopChoice(g_55);
        }
      else
        {
          t = f_55;
          {
            ATerm b_77 = NULL,l_77 = NULL,l_32 = NULL;
            t = SSLgetAnnotations(e_136);
            b_77 = t;
            t = g_136;
            t = h_136(t);
            l_77 = t;
            t = (ATerm) ATinsert(CheckATermList(l_77), f_136);
            l_32 = t;
            t = SSLsetAnnotations(l_32, b_77);
          }
        }
    }
    return(t);
  }
  t = h_136(t);
  return(t);
}
ATerm b_12 (ATerm g_39, ATerm h_39, ATerm t)
{
  t = SSL_strcat(g_39, h_39);
  return(t);
}
ATerm debug_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm k_136 = NULL,l_136 = NULL,m_136 = NULL,n_136 = NULL;
  k_136 = t;
  t = c_109(t);
  l_136 = t;
  t = term_r_14;
  m_136 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_136), l_136);
  n_136 = t;
  t = SSL_printnl(m_136, n_136);
  t = k_136;
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm h_55 = t;
  int i_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_55);
    }
  else
    {
      t = h_55;
    }
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_j_55;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_55 = t;
  int m_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_136 = NULL;
      u_136 = t;
      t = SSL_is_string(u_136);
      ;
      LocalPopChoice(m_55);
    }
  else
    {
      t = l_55;
      {
        ATerm n_55 = t;
        int o_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_9, t);
            ;
            LocalPopChoice(o_55);
          }
        else
          {
            t = n_55;
            {
              ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL;
              a_137 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_137 = ATgetArgument(t, 0);
                  t = b_137;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_137 = ATgetArgument(t, 0);
                      t = b_137;
                      {
                        ATerm p_55 = t;
                        int q_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_55);
                          }
                        else
                          {
                            t = p_55;
                            t = debug_1_0(a_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_137 = NULL,h_137 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_137 = ATgetArgument(t, 0);
                          c_137 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_137;
                      t = eval_config_0_0(t);
                      g_137 = t;
                      t = c_137;
                      t = eval_config_0_0(t);
                      h_137 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_137, h_137);
                      t = b_12(g_137, h_137, t);
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
  ATerm l_137 = NULL,m_137 = NULL;
  l_137 = t;
  t = term_r_55;
  m_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_55, l_137);
  t = k_12(m_137, l_137, t);
  {
    ATerm s_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_137 = NULL,o_137 = NULL;
        t = eval_config_0_0(t);
        n_137 = t;
        t = term_r_55;
        o_137 = t;
        t = SSL_table_put(o_137, l_137, n_137);
        t = n_137;
        ;
        LocalPopChoice(t_55);
      }
    else
      {
        t = s_55;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm s_137 = NULL;
  s_137 = t;
  {
    ATerm u_55 = t;
    int v_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_137 = NULL;
        t = term_z_55;
        t = get_config_0_0(t);
        u_137 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_137, term_i_21);
        t = geq_0_0(t);
        t = s_137;
        t = p_110(t);
        ;
        LocalPopChoice(v_55);
      }
    else
      {
        t = u_55;
        t = s_137;
      }
  }
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm x_137 = NULL;
  x_137 = t;
  if(match_string(t, "-k"))
    {
      t = x_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_137;
    }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm y_137 = NULL,z_137 = NULL,a_138 = NULL;
  y_137 = t;
  t = SSL_string_to_int(y_137);
  z_137 = t;
  t = term_a_56;
  a_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_56, z_137);
  t = m_12(a_138, z_137, t);
  t = y_137;
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_c_56;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_10, c_10, d_10, t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm c_138 = NULL;
  c_138 = t;
  if(match_string(t, "-S"))
    {
      t = c_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_138;
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm d_138 = NULL,e_138 = NULL;
  t = term_z_55;
  d_138 = t;
  t = term_d_56;
  e_138 = t;
  t = term_f_56;
  t = m_12(d_138, e_138, t);
  t = term_g_56;
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_h_56;
  return(t);
}
ATerm n_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm f_138 = NULL,g_138 = NULL,h_138 = NULL;
  f_138 = t;
  t = SSL_string_to_int(f_138);
  g_138 = t;
  t = term_z_55;
  h_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_55, g_138);
  t = m_12(h_138, g_138, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_138);
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_i_56;
  return(t);
}
ATerm v_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm i_138 = NULL,j_138 = NULL;
  t = term_j_56;
  i_138 = t;
  t = term_q_14;
  j_138 = t;
  t = term_k_56;
  t = m_12(i_138, j_138, t);
  t = term_l_56;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_n_56;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_10, j_10, k_10, t);
      ;
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      {
        ATerm q_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_10, p_10, u_10, t);
            ;
            LocalPopChoice(r_56);
          }
        else
          {
            t = q_56;
            t = Option_3_0(v_10, x_10, c_11, t);
          }
      }
    }
  return(t);
}
ATerm m_12 (ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm k_138 = NULL;
  t = term_r_55;
  k_138 = t;
  t = SSL_table_put(k_138, h_49, i_49);
  t = (ATerm) ATmakeAppl(sym__3, term_r_55, h_49, i_49);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm m_138 = NULL;
  m_138 = t;
  if(match_string(t, "-o"))
    {
      t = m_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_138;
    }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm n_138 = NULL,o_138 = NULL;
  n_138 = t;
  t = term_s_56;
  o_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_56, n_138);
  t = m_12(o_138, n_138, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_138);
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = term_t_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_11, e_11, g_11, t);
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm q_138 = NULL;
  q_138 = t;
  if(match_string(t, "-i"))
    {
      t = q_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_138;
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm r_138 = NULL,s_138 = NULL;
  r_138 = t;
  t = term_u_56;
  s_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_56, r_138);
  t = m_12(s_138, r_138, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_138);
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_v_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_11, n_11, o_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL,v_138 = NULL,w_138 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_14;
  t = whoami_0_0(t);
  t_138 = t;
  t = term_r_14;
  v_138 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_56), t_138);
  w_138 = t;
  t = SSL_printnl(v_138, w_138);
  t = term_x_14;
  u_138 = t;
  t = SSL_exit(u_138);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_57;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_12 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm b_57 = t;
  int d_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_41, r_41);
      ;
      LocalPopChoice(d_57);
    }
  else
    {
      t = b_57;
      t = SSL_addr(q_41, r_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t)
{
  ATerm y_138 = NULL,z_138 = NULL,a_139 = NULL;
  y_138 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_138;
      t = k_102(t);
    }
  else
    {
      ATerm d_139 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_138 = ATgetFirst((ATermList) t);
          a_139 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_139;
      t = foldr_2_0(k_102, l_102, t);
      d_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_138, d_139);
      t = l_102(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_d_56;
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm t_78 = NULL,v_78 = NULL;
  if(match_cons(t, sym__2))
    {
      t_78 = ATgetArgument(t, 0);
      v_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(t_78, v_78, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_139 = NULL,m_78 = NULL,o_78 = NULL;
  t = times_0_0(t);
  o_78 = t;
  t = SSL_explode_term(o_78);
  if(match_cons(t, sym__2))
    {
      ATerm e_57 = ATgetArgument(t, 0);
      m_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_78;
  t = foldr_2_0(q_11, s_11, t);
  g_139 = t;
  t = SSL_TicksToSeconds(g_139);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_139 = NULL,s_139 = NULL,t_139 = NULL;
  r_139 = t;
  if(match_cons(t, sym__2))
    {
      s_139 = ATgetArgument(t, 0);
      t_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_139;
        if((s_139 != t))
          {
            _fail(t);
          }
        t = r_139;
        ;
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = (ATerm) ATmakeAppl(sym__2, s_139, t_139);
        {
          ATerm h_57 = t;
          int j_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_139, t_139);
              ;
              LocalPopChoice(j_57);
            }
          else
            {
              t = h_57;
              t = SSL_gtr(s_139, t_139);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_139, t_139);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_110 (ATerm), ATerm t)
{
  ATerm x_139 = NULL;
  x_139 = t;
  {
    ATerm k_57 = t;
    int n_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_139 = NULL;
        t = term_z_55;
        t = get_config_0_0(t);
        z_139 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_139, term_x_14);
        t = geq_0_0(t);
        t = x_139;
        t = o_110(t);
        ;
        LocalPopChoice(n_57);
      }
    else
      {
        t = k_57;
        t = x_139;
      }
  }
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm b_140 = NULL,c_140 = NULL,e_140 = NULL,f_140 = NULL;
  t = run_time_0_0(t);
  b_140 = t;
  t = term_q_14;
  t = whoami_0_0(t);
  c_140 = t;
  t = term_r_14;
  e_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_57), b_140), term_o_57), c_140);
  f_140 = t;
  t = SSL_printnl(e_140, f_140);
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_57), b_140), term_o_57), c_140));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_140 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_56;
  g_140 = t;
  t = SSL_exit(g_140);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm o_140 = NULL,p_140 = NULL;
  p_140 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_140;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_140 = ATgetArgument(t, 0);
          {
            ATerm m_79 = NULL,t_32 = NULL;
            t = SSLgetAnnotations(p_140);
            m_79 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_140);
            t_32 = t;
            t = SSLsetAnnotations(t_32, m_79);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_140;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm q_57 = t;
  int r_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_57;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_57);
    }
  else
    {
      t = q_57;
      t = fetch_1_0(p_12, t);
    }
  t = e_113(t);
  return(t);
}
ATerm map_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm f_141 (ATerm t)
  {
    ATerm c_141 = NULL,d_141 = NULL,e_141 = NULL;
    c_141 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_141;
      }
    else
      {
        ATerm b_80 = NULL,f_80 = NULL,g_80 = NULL,v_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_141 = ATgetFirst((ATermList) t);
            e_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_141);
        b_80 = t;
        t = d_141;
        t = h_96(t);
        f_80 = t;
        t = e_141;
        t = f_141(t);
        g_80 = t;
        t = (ATerm) ATinsert(CheckATermList(g_80), f_80);
        v_32 = t;
        t = SSLsetAnnotations(v_32, b_80);
      }
    return(t);
  }
  t = f_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_141 = NULL,j_141 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_141 = ATgetFirst((ATermList) t);
      j_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_141 = NULL,o_141 = NULL;
        ATerm q_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_141)), not_null(o_141));
          return(t);
        }
        t = j_141;
        t = g_0(t);
        if(((n_141 != NULL) && (n_141 != t)))
          _fail(t);
        else
          n_141 = t;
        t = i_141;
        t = d_0(t);
        if(((o_141 != NULL) && (o_141 != t)))
          _fail(t);
        else
          o_141 = t;
        t = j_141;
        t = reverse_acc_2_0(d_0, q_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_14;
      t = g_0(t);
    }
  return(t);
}
ATerm k_12 (ATerm w_55, ATerm x_55, ATerm t)
{
  t = SSL_table_get(w_55, x_55);
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm s_141 = NULL,t_141 = NULL,u_141 = NULL,a_33 = NULL;
  u_141 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_141);
  s_141 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_141);
  a_33 = t;
  t = SSLsetAnnotations(a_33, s_141);
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm w_141 = NULL;
  w_141 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_141), term_t_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_141 = NULL,r_141 = NULL;
  ATerm u_57 = t;
  int v_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_57;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_57);
    }
  else
    {
      t = u_57;
      t = fetch_1_0(r_12, t);
    }
  t = term_w_57;
  t = echo_0_0(t);
  t = term_y_14;
  q_141 = t;
  t = term_z_14;
  r_141 = t;
  t = term_x_57;
  t = k_12(q_141, r_141, t);
  t = reverse_acc_2_0(_id, x_12, t);
  t = map_1_0(z_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_141 = NULL,z_141 = NULL,a_142 = NULL;
  y_141 = t;
  {
    ATerm y_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_141;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_58 = ATgetFirst((ATermList) t);
                ATerm b_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_141;
          }
        ;
        LocalPopChoice(z_57);
      }
    else
      {
        t = y_57;
        t = (ATerm) ATinsert(ATempty, y_141);
      }
    z_141 = t;
    t = term_n_54;
    a_142 = t;
    t = SSL_printnl(a_142, z_141);
    t = y_141;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_57;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm e_142 = NULL,f_142 = NULL;
  t = term_d_58;
  e_142 = t;
  t = term_q_14;
  f_142 = t;
  t = term_e_58;
  t = m_12(e_142, f_142, t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  t = term_f_58;
  return(t);
}
ATerm e_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL;
  t = term_d_58;
  i_142 = t;
  t = term_q_14;
  j_142 = t;
  t = term_e_58;
  t = m_12(i_142, j_142, t);
  t = term_g_58;
  g_142 = t;
  t = term_q_14;
  h_142 = t;
  t = term_i_58;
  t = m_12(g_142, h_142, t);
  t = term_j_58;
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = term_k_58;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_58 = t;
  int m_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_13, c_13, d_13, t);
      ;
      LocalPopChoice(m_58);
    }
  else
    {
      t = l_58;
      t = Option_3_0(e_13, f_13, g_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL,m_142 = NULL,n_142 = NULL,o_142 = NULL,p_142 = NULL,p_37 = NULL;
  p_142 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_142 = ATgetFirst((ATermList) t);
      m_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_142);
  k_142 = t;
  t = l_142;
  t = n_74(t);
  n_142 = t;
  t = m_142;
  t = o_74(t);
  o_142 = t;
  t = (ATerm) ATinsert(CheckATermList(o_142), n_142);
  p_37 = t;
  t = SSLsetAnnotations(p_37, k_142);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_115 (ATerm), ATerm t)
{
  ATerm u_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL,z_142 = NULL,a_143 = NULL,s_37 = NULL;
  u_142 = t;
  {
    ATerm n_58 = t;
    int o_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_58;
        t = h_115(t);
        ;
        LocalPopChoice(o_58);
      }
    else
      {
        t = n_58;
      }
    t = u_142;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_142 = ATgetFirst((ATermList) t);
        x_142 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_142);
    v_142 = t;
    t = term_a_57;
    a_143 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_57, w_142);
    t = m_12(a_143, w_142, t);
    t = x_142;
    {
      ATerm k_143 (ATerm t)
      {
        ATerm q_58 = t;
        int r_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_58 = t;
            int t_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_143 = NULL;
                d_143 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_143;
                ;
                LocalPopChoice(t_58);
              }
            else
              {
                t = s_58;
                t = h_115(t);
                t = Cons_2_0(_id, k_143, t);
              }
            ;
            LocalPopChoice(r_58);
          }
        else
          {
            t = q_58;
            {
              ATerm g_143 = NULL,h_143 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_143 = ATgetFirst((ATermList) t);
                  h_143 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_143), (ATerm) ATmakeAppl(sym_Undefined_1, g_143));
            }
          }
        return(t);
      }
      t = k_143(t);
      z_142 = t;
      t = (ATerm) ATinsert(CheckATermList(z_142), (ATerm) ATmakeAppl(sym_Program_1, w_142));
      s_37 = t;
      t = SSLsetAnnotations(s_37, v_142);
    }
  }
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm w_143 = NULL;
  w_143 = t;
  if(match_string(t, "--help"))
    {
      t = w_143;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_143;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_143;
        }
    }
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm x_143 = NULL,y_143 = NULL;
  t = term_s_57;
  x_143 = t;
  t = term_q_14;
  y_143 = t;
  t = term_u_58;
  t = m_12(x_143, y_143, t);
  t = term_v_58;
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_w_58;
  return(t);
}
ATerm l_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_115 (ATerm), ATerm t)
{
  ATerm p_143 = NULL,q_143 = NULL,r_143 = NULL,s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL;
  r_143 = t;
  t = term_y_14;
  t_143 = t;
  t = term_z_14;
  u_143 = t;
  t = (ATerm) ATempty;
  v_143 = t;
  t = SSL_table_put(t_143, u_143, v_143);
  t = r_143;
  {
    ATerm h_13 (ATerm t)
    {
      ATerm x_58 = t;
      int y_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_115(t);
          ;
          LocalPopChoice(y_58);
        }
      else
        {
          t = x_58;
          {
            ATerm a_59 = t;
            int b_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_13, j_13, k_13, t);
                ;
                LocalPopChoice(b_59);
              }
            else
              {
                t = a_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_13, t);
    {
      ATerm c_59 = t;
      int d_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_144 = NULL;
          f_144 = t;
          {
            ATerm e_59 = t;
            int f_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_80 = NULL;
                t = f_144;
                {
                  ATerm g_59 = t;
                  int i_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_57;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_59);
                    }
                  else
                    {
                      t = g_59;
                      t = fetch_1_0(l_13, t);
                    }
                  t = f_144;
                  t = default_system_usage_0_0(t);
                  t = term_d_56;
                  o_80 = t;
                  t = SSL_exit(o_80);
                }
                ;
                LocalPopChoice(f_59);
              }
            else
              {
                t = e_59;
                {
                  ATerm t_80 = NULL;
                  t = term_d_58;
                  t = get_config_0_0(t);
                  t = f_144;
                  t = default_system_about_0_0(t);
                  t = term_d_56;
                  t_80 = t;
                  t = SSL_exit(t_80);
                }
              }
          }
          ;
          LocalPopChoice(d_59);
        }
      else
        {
          t = c_59;
          {
            ATerm j_59 = t;
            int m_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL;
                ATerm n_13 (ATerm t)
                {
                  ATerm j_144 = NULL,k_144 = NULL,l_144 = NULL,g_38 = NULL;
                  l_144 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_144 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_144);
                  j_144 = t;
                  t = k_144;
                  if(((p_143 != NULL) && (p_143 != t)))
                    _fail(t);
                  else
                    p_143 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_144);
                  g_38 = t;
                  t = SSLsetAnnotations(g_38, j_144);
                  return(t);
                }
                t = fetch_1_0(n_13, t);
                t = term_r_14;
                h_144 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_143)), term_n_59);
                i_144 = t;
                t = SSL_printnl(h_144, i_144);
                t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_143)), term_n_59));
                t = default_system_usage_0_0(t);
                t = term_x_14;
                g_144 = t;
                t = SSL_exit(g_144);
                ;
                LocalPopChoice(m_59);
              }
            else
              {
                t = j_59;
              }
          }
        }
      q_143 = t;
      t = term_y_14;
      s_143 = t;
      t = SSL_table_destroy(s_143);
      t = q_143;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t)
{
  ATerm q_144 = NULL,r_144 = NULL,s_144 = NULL,t_144 = NULL;
  t = parse_options_1_0(g_113, t);
  q_144 = t;
  t = term_u_52;
  t_144 = t;
  t = SSL_table_create(t_144);
  t = term_u_52;
  r_144 = t;
  t = term_v_52;
  s_144 = t;
  t = SSL_table_put(r_144, s_144, q_144);
  t = q_144;
  t = i_113(t);
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_113, t);
        ;
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
        {
          ATerm q_59 = t;
          int r_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_59);
            }
          else
            {
              t = q_59;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = if_verbose2_1_0(v_13, t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm u_144 = NULL,v_144 = NULL;
  t = term_t_59;
  u_144 = t;
  t = term_q_14;
  v_144 = t;
  t = term_v_59;
  t = m_12(u_144, v_144, t);
  t = term_w_59;
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_x_59;
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm w_144 = NULL,x_144 = NULL,y_144 = NULL,z_144 = NULL;
  w_144 = t;
  t = term_a_57;
  t = get_config_0_0(t);
  x_144 = t;
  t = term_r_14;
  y_144 = t;
  t = (ATerm) ATinsert(ATempty, x_144);
  z_144 = t;
  t = SSL_printnl(y_144, z_144);
  t = w_144;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    ATerm y_59 = t;
    int z_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_112(t);
        ;
        LocalPopChoice(z_59);
      }
    else
      {
        t = y_59;
        {
          ATerm b_60 = t;
          int c_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_60);
            }
          else
            {
              t = b_60;
              {
                ATerm d_60 = t;
                int f_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_60);
                  }
                else
                  {
                    t = d_60;
                    {
                      ATerm g_60 = t;
                      int h_60 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_13, t_13, u_13, t);
                          ;
                          LocalPopChoice(h_60);
                        }
                      else
                        {
                          t = g_60;
                          {
                            ATerm i_60 = t;
                            int j_60 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_60);
                              }
                            else
                              {
                                t = i_60;
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
  ATerm r_13 (ATerm t)
  {
    ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL;
    b_145 = t;
    {
      ATerm k_60 = t;
      int m_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_145 != NULL) && (a_145 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_145 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_13, t);
          ;
          LocalPopChoice(m_60);
        }
      else
        {
          t = k_60;
          t = term_n_60;
          a_145 = t;
        }
      t = not_null(a_145);
      t = ReadFromFile_0_0(t);
      c_145 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_145, c_145);
      t = apply_strategy_1_0(p_112, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_13, r_112, q_13, r_13, t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm d_145 = NULL,e_145 = NULL;
  if(match_cons(t, sym__2))
    {
      d_145 = ATgetArgument(t, 0);
      e_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(d_145, e_145, t);
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_14, d_14, f_14, t);
      ;
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      {
        ATerm r_60 = t;
        int s_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(g_14, h_14, j_14, t);
            ;
            LocalPopChoice(s_60);
          }
        else
          {
            t = r_60;
            t = ArgOption_3_0(m_14, n_14, p_14, t);
          }
      }
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_t_60;
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = term_u_60;
  return(t);
}
ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_14 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_w_60;
  return(t);
}
ATerm m_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm f_145 = NULL;
  f_145 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, f_145);
  return(t);
}
ATerm p_14 (ATerm t)
{
  t = term_x_60;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(y_13, a_14, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

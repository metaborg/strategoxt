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
ATerm term_c_64;
ATerm term_b_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_p_63;
ATerm term_s_62;
ATerm term_r_62;
ATerm term_q_62;
ATerm term_o_62;
ATerm term_j_62;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_u_61;
ATerm term_p_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_t_60;
ATerm term_p_60;
ATerm term_g_60;
ATerm term_d_60;
ATerm term_o_59;
ATerm term_n_59;
ATerm term_m_59;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_c_59;
ATerm term_x_58;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_i_58;
ATerm term_b_58;
ATerm term_i_57;
ATerm term_a_57;
ATerm term_o_56;
ATerm term_q_55;
ATerm term_i_55;
ATerm term_e_54;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_t_51;
ATerm term_p_51;
ATerm term_l_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_o_50;
ATerm term_c_49;
ATerm term_e_48;
ATerm term_m_47;
ATerm term_t_45;
ATerm term_o_45;
ATerm term_l_45;
ATerm term_c_45;
ATerm term_z_44;
ATerm term_w_44;
ATerm term_t_44;
ATerm term_l_44;
ATerm term_d_44;
ATerm term_t_43;
ATerm term_m_43;
ATerm term_f_43;
ATerm term_y_42;
ATerm term_v_42;
ATerm term_s_42;
ATerm term_o_42;
ATerm term_k_42;
ATerm term_h_42;
ATerm term_e_42;
ATerm term_b_42;
ATerm term_u_41;
ATerm term_j_41;
ATerm term_e_41;
ATerm term_b_41;
ATerm term_y_40;
ATerm term_v_40;
ATerm term_m_40;
ATerm term_j_40;
ATerm term_g_40;
ATerm term_c_40;
ATerm term_y_39;
ATerm term_v_39;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_k_38;
ATerm term_w_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_j_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_a_37;
ATerm term_y_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_o_34;
ATerm term_q_33;
ATerm term_d_33;
ATerm term_s_31;
ATerm term_c_31;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_d_24;
ATerm term_d_22;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_k_13;
void init_constant_terms (void)
{
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_SOpt_2, term_x_19, term_y_19);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_lit_1, term_b_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_lit_1, term_d_29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_SOpt_2, term_a_30, term_b_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Arg_1, term_y_18);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym__2, term_o_53, term_p_53);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(sym__2, term_i_58, term_n_58);
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_58);
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(sym__2, term_s_58, term_k_13);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_a_19);
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym__2, term_e_61, term_k_13);
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym__2, term_h_61, term_k_13);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(sym__2, term_p_60, term_k_13);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(sym__2, term_o_62, term_k_13);
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm l_10 (ATerm n_72, ATerm o_72, ATerm m_72, ATerm);
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm m_10 (ATerm j_82, ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm has_significant_layout_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm has_layout_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm InsLayout_1_0 (ATerm m_137 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm insert_layout_0_0 (ATerm);
ATerm layout_1_0 (ATerm y_92 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm collect_p__1_0 (ATerm z_136 (ATerm), ATerm);
ATerm amb_1_0 (ATerm o_101 (ATerm), ATerm);
ATerm fatal_ambiguity_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm d_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_10 (ATerm b_38, ATerm a_38, ATerm);
ATerm instantiate_list_1_0 (ATerm f_137 (ATerm), ATerm);
ATerm q_10 (ATerm q_40, ATerm r_40, ATerm o_40, ATerm p_40, ATerm);
ATerm w_4 (ATerm);
ATerm instantiate_sep_list_1_0 (ATerm h_137 (ATerm), ATerm);
ATerm r_10 (ATerm w_60, ATerm x_60, ATerm);
ATerm s_10 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm w_41, ATerm x_41, ATerm);
ATerm genzip_4_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm nzip_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm w_10 (ATerm n_41, ATerm o_41, ATerm m_41, ATerm s_41, ATerm);
ATerm y_10 (ATerm e_60, ATerm f_60, ATerm);
ATerm z_10 (ATerm i_47, ATerm g_47, ATerm h_47, ATerm);
ATerm w_5 (ATerm);
ATerm index_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm symbol2abox_0_0 (ATerm);
ATerm seq2abox_0_0 (ATerm);
ATerm lit_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm a_11 (ATerm k_79, ATerm j_79, ATerm);
ATerm symbols2pp_entries_1_0 (ATerm d_136 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm b_11 (ATerm x_57, ATerm y_57, ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm pair_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm v_7 (ATerm);
ATerm number_node_1_0 (ATerm h_136 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm x_7 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm symbol2abox_1_0 (ATerm e_136 (ATerm), ATerm);
ATerm r_56 (ATerm c_54, ATerm d_54, ATerm f_54, ATerm);
ATerm s_56 (ATerm l_55, ATerm t_55, ATerm u_55, ATerm v_55, ATerm w_55, ATerm);
ATerm c_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm get_pp_entry_0_0 (ATerm);
ATerm prod_3_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm uq2q_0_0 (ATerm);
ATerm cons_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm get_constr_0_0 (ATerm);
ATerm add_attributes_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm o_8 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm strs2constr_0_0 (ATerm);
ATerm a_64 (ATerm o_63, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm c_9 (ATerm);
ATerm sym2strs_0_0 (ATerm);
ATerm syms2strs_0_0 (ATerm);
ATerm d_9 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm z_66 (ATerm v_66, ATerm);
ATerm e_9 (ATerm);
ATerm toAlphaNum_0_0 (ATerm);
ATerm f_11 (ATerm o_44, ATerm p_44, ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm list_ana_1_0 (ATerm s_137 (ATerm), ATerm);
ATerm g_9 (ATerm);
ATerm lit2str_0_0 (ATerm);
ATerm f_72 (ATerm g_71, ATerm h_71, ATerm i_71, ATerm);
ATerm h_9 (ATerm);
ATerm mk_constr_0_0 (ATerm);
ATerm iter_star_sep_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm z_100 (ATerm), ATerm);
ATerm iter_1_0 (ATerm y_100 (ATerm), ATerm);
ATerm alt_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm);
ATerm syntaxless_sort_0_0 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm is_injection_0_0 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm is_reject_0_0 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm is_bracket_0_0 (ATerm);
ATerm prodcons_0_0 (ATerm);
ATerm sort_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm k_11 (ATerm n_38, ATerm o_38, ATerm m_38, ATerm l_38, ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm l_11 (ATerm u_37, ATerm s_37, ATerm t_37, ATerm v_37, ATerm);
ATerm opt_1_0 (ATerm r_100 (ATerm), ATerm);
ATerm filter_1_0 (ATerm v_121 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm sometd_1_0 (ATerm m_110 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm f_115 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_10 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm j_10 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm m_11 (ATerm h_79, ATerm i_79, ATerm);
ATerm selector_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm p_10 (ATerm);
ATerm at_last_1_0 (ATerm q_115 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm t_10 (ATerm);
ATerm unquote_chars_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm S_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm Arg2_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm x_10 (ATerm);
ATerm c_11 (ATerm);
ATerm e_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm p_11 (ATerm);
ATerm u_11 (ATerm g_79, ATerm);
ATerm oncetd_1_0 (ATerm c_110 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm q_11 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm x_11 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm d_50, ATerm c_50, ATerm);
ATerm y_11 (ATerm t_118 (ATerm), ATerm z_49, ATerm y_49, ATerm);
ATerm foldr_3_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm);
ATerm j_12 (ATerm);
ATerm collect_om_2_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm w_12 (ATerm);
ATerm y_12 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm z_11 (ATerm e_43, ATerm d_43, ATerm);
ATerm c_12 (ATerm y_62, ATerm z_62, ATerm);
ATerm d_12 (ATerm m_66, ATerm n_66, ATerm);
ATerm f_12 (ATerm g_127 (ATerm), ATerm s_491, ATerm q_66, ATerm);
ATerm e_12 (ATerm i_66, ATerm j_66, ATerm);
ATerm w_13 (ATerm);
ATerm a_14 (ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_130 (ATerm), ATerm);
ATerm i_90 (ATerm c_90, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_12 (ATerm o_66, ATerm);
ATerm h_12 (ATerm a_63, ATerm b_63, ATerm);
ATerm _2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm v_14 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_114 (ATerm), ATerm);
ATerm b_12 (ATerm o_57, ATerm p_57, ATerm);
ATerm debug_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_128 (ATerm), ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_12 (ATerm p_67, ATerm q_67, ATerm);
ATerm q_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_12 (ATerm y_59, ATerm z_59, ATerm);
ATerm foldr_2_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_128 (ATerm), ATerm);
ATerm l_16 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_16 (ATerm);
ATerm need_help_1_0 (ATerm g_131 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_114 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm k_12 (ATerm e_74, ATerm f_74, ATerm);
ATerm Program_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm o_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_98 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm);
ATerm b_17 (ATerm);
ATerm parse_options_p__1_0 (ATerm j_133 (ATerm), ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm parse_options_1_0 (ATerm i_133 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm);
ATerm x_17 (ATerm);
ATerm z_17 (ATerm);
ATerm b_18 (ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm iowrap_3_0 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm io_Asfix_2_abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,m_0 = NULL,o_0 = NULL,p_0 = NULL;
  b_0 = t;
  t = term_k_13;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_u_18;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_18), f_0), term_w_18);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_y_18;
  p_0 = t;
  t = SSL_exit(p_0);
  t = b_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_1 = NULL,b_1 = NULL,d_1 = NULL;
      t = term_k_13;
      t = k_0(t);
      a_1 = t;
      t = term_z_18;
      b_1 = t;
      t = term_a_19;
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_18, term_a_19, a_1);
      t = l_10(b_1, d_1, a_1, t);
      _fail(t);
    }
  else
    {
      ATerm m_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_0 = ATgetFirst((ATermList) t);
          x_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_0;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_0 = ATgetFirst((ATermList) t);
          z_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_0;
      t = i_0(t);
      t = y_0;
      t = j_0(t);
      m_1 = t;
      t = (ATerm) ATinsert(CheckATermList(z_0), m_1);
    }
  return(t);
}
ATerm l_10 (ATerm n_72, ATerm o_72, ATerm m_72, ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_72, o_72);
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_72, o_72);
        t = k_12(n_72, o_72, t);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATempty;
      }
    q_1 = t;
    t = (ATerm) ATinsert(CheckATermList(q_1), m_72);
    r_1 = t;
    t = SSL_table_put(n_72, o_72, r_1);
    t = p_1;
  }
  return(t);
}
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
      t = term_k_13;
      t = h_0(t);
      b_2 = t;
      t = term_z_18;
      c_2 = t;
      t = term_a_19;
      d_2 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_18, term_a_19, b_2);
      t = l_10(c_2, d_2, b_2, t);
      _fail(t);
    }
  else
    {
      ATerm g_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_1 = ATgetFirst((ATermList) t);
          a_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_1;
      t = e_0(t);
      t = term_k_13;
      t = g_0(t);
      g_2 = t;
      t = (ATerm) ATinsert(CheckATermList(a_2), g_2);
    }
  return(t);
}
ATerm m_10 (ATerm j_82, ATerm t)
{
  ATerm f_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(j_82);
      h_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, h_2)));
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = f_19;
      {
        ATerm i_2 = NULL;
        t = SSL_concat_strings(j_82);
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, i_2);
      }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(!(match_cons(t, sym_layout_place_holder_0)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm i_19 = t;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL;
      n_2 = t;
      if(match_int(t, 9))
        {
          t = n_2;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = n_2;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = n_2;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = n_2;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_19;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
  k_2 = t;
  {
    ATerm j_19 = t;
    if((PushChoice() == 0))
      {
        t = layout_1_0(m_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_19;
      }
    if(match_cons(t, sym_layout_1))
      {
        l_2 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSL_concat_strings(l_2);
    m_2 = t;
    t = SSL_explode_string(m_2);
    t = filter_1_0(n_3, t);
    {
      ATerm n_19 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_19;
        }
      t = k_2;
    }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(!(match_cons(t, sym_layout_place_holder_0)))
    _fail(t);
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm o_19 = t;
  if((PushChoice() == 0))
    {
      t = layout_1_0(o_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_19;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm InsLayout_1_0 (ATerm m_137 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm w_2 = NULL,x_2 = NULL,z_2 = NULL,d_3 = NULL,f_3 = NULL,g_3 = NULL;
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(p_3, _id, t);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
          y_3 = t;
          if(match_cons(t, sym__2))
            {
              z_3 = ATgetArgument(t, 0);
              e_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_4 = ATgetFirst((ATermList) t);
              b_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_4;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATmakeAppl(sym__2, a_4, e_4);
              t = m_137(t);
              if(match_cons(t, sym__2))
                {
                  w_2 = ATgetArgument(t, 0);
                  d_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, w_2), d_3);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_4 = ATgetFirst((ATermList) t);
                  d_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, a_4, e_4);
              t = m_137(t);
              if(match_cons(t, sym__2))
                {
                  w_2 = ATgetArgument(t, 0);
                  {
                    ATerm r_19 = ATgetArgument(t, 1);
                    if(((ATgetType(r_19) == AT_LIST) && !(ATisEmpty(r_19))))
                      {
                        x_2 = ATgetFirst((ATermList) r_19);
                        d_3 = (ATerm) ATgetNext((ATermList) r_19);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_4), c_4), d_3);
              t = g_4(t);
              if(match_cons(t, sym__2))
                {
                  ATerm s_19 = ATgetArgument(t, 0);
                  if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
                    {
                      z_2 = ATgetFirst((ATermList) s_19);
                      g_3 = (ATerm) ATgetNext((ATermList) s_19);
                    }
                  else
                    _fail(t);
                  f_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm t_19 = t;
                int u_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_1 = NULL,o_1 = NULL;
                    t = term_v_19;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(q_3, t);
                    t = x_2;
                    t = has_layout_0_0(t);
                    t = x_2;
                    if(match_cons(t, sym_layout_1))
                      {
                        o_1 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_10(o_1, t);
                    l_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_3), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_b_20), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_2))), l_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_2))))), f_3);
                    ;
                    LocalPopChoice(u_19);
                  }
                else
                  {
                    t = t_19;
                    {
                      ATerm e_20 = t;
                      int h_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_1 = NULL,u_1 = NULL;
                          ATerm i_20 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm x_1 = NULL;
                              x_1 = t;
                              t = term_v_19;
                              t = get_options_0_0(t);
                              t = oncetd_1_0(r_3, t);
                              t = x_1;
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = i_20;
                            }
                          t = x_2;
                          t = has_significant_layout_0_0(t);
                          t = x_2;
                          if(match_cons(t, sym_layout_1))
                            {
                              u_1 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = m_10(u_1, t);
                          s_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(g_3), z_2), s_1), w_2), f_3);
                          ;
                          LocalPopChoice(h_20);
                        }
                      else
                        {
                          t = e_20;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(g_3), z_2), w_2), f_3);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = g_4(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = Cons_2_0(_id, _id, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_7 = NULL;
      ATerm l_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(n_20);
        }
      else
        {
          t = l_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_20 = ATgetFirst((ATermList) t);
              ATerm s_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      m_7 = t;
      t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, m_7);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_20 = t;
      if((PushChoice() == 0))
        {
          t = layout_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_20;
        }
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL,p_7 = NULL;
            t = layout_1_0(_id, t);
            n_7 = t;
            t = term_v_19;
            t = get_options_0_0(t);
            t = oncetd_1_0(w_3, t);
            t = n_7;
            t = has_layout_0_0(t);
            if(match_cons(t, sym_layout_1))
              {
                p_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_10(p_7, t);
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm y_7 = NULL;
              t = layout_1_0(_id, t);
              {
                ATerm f_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_8 = NULL;
                    e_8 = t;
                    t = term_v_19;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(x_3, t);
                    t = e_8;
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_21;
                  }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    y_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_10(y_7, t);
              }
            }
          }
      }
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,p_8 = NULL,r_8 = NULL,s_8 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm b_5 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_4 != NULL) && (y_4 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_4 = ATgetFirst((ATermList) t);
        {
          ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm k_21 = ATgetFirst((ATermList) t);
        b_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = b_5;
    return(t);
  }
  t = _2_0(_id, s_3, t);
  {
    ATerm z_8 (ATerm t)
    {
      ATerm d_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
      ATerm o_21 = t;
      int p_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,k_7 = NULL;
          if(match_cons(t, sym__2))
            {
              g_7 = ATgetArgument(t, 0);
              k_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_7;
          if(match_cons(t, sym_H_2))
            {
              h_7 = ATgetArgument(t, 0);
              i_7 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
              t = InsLayout_1_0(z_8, t);
              if(match_cons(t, sym__2))
                {
                  l_5 = ATgetArgument(t, 0);
                  m_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, h_7, l_5), m_5);
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  h_7 = ATgetArgument(t, 0);
                  i_7 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
                  t = InsLayout_1_0(z_8, t);
                  if(match_cons(t, sym__2))
                    {
                      l_5 = ATgetArgument(t, 0);
                      m_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, h_7, l_5), m_5);
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      h_7 = ATgetArgument(t, 0);
                      i_7 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
                      t = InsLayout_1_0(z_8, t);
                      if(match_cons(t, sym__2))
                        {
                          l_5 = ATgetArgument(t, 0);
                          m_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, h_7, l_5), m_5);
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          h_7 = ATgetArgument(t, 0);
                          i_7 = ATgetArgument(t, 1);
                          e_7 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, e_7, k_7);
                          t = InsLayout_1_0(z_8, t);
                          if(match_cons(t, sym__2))
                            {
                              l_5 = ATgetArgument(t, 0);
                              m_5 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, h_7, i_7, l_5), m_5);
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              h_7 = ATgetArgument(t, 0);
                              i_7 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
                              t = InsLayout_1_0(z_8, t);
                              if(match_cons(t, sym__2))
                                {
                                  l_5 = ATgetArgument(t, 0);
                                  m_5 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, h_7, l_5), m_5);
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  h_7 = ATgetArgument(t, 0);
                                  i_7 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym__2, h_7, k_7);
                                  t = InsLayout_1_0(z_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      d_5 = ATgetArgument(t, 0);
                                      {
                                        ATerm q_21 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
                                  t = InsLayout_1_0(z_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      l_5 = ATgetArgument(t, 0);
                                      n_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, d_5, l_5), n_5);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      h_7 = ATgetArgument(t, 0);
                                      i_7 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
                                      t = InsLayout_1_0(z_8, t);
                                      if(match_cons(t, sym__2))
                                        {
                                          l_5 = ATgetArgument(t, 0);
                                          m_5 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, h_7, l_5), m_5);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          h_7 = ATgetArgument(t, 0);
                                          i_7 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
                                          t = InsLayout_1_0(z_8, t);
                                          if(match_cons(t, sym__2))
                                            {
                                              l_5 = ATgetArgument(t, 0);
                                              m_5 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, h_7, l_5), m_5);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              h_7 = ATgetArgument(t, 0);
                                              i_7 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
                                              t = InsLayout_1_0(z_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  l_5 = ATgetArgument(t, 0);
                                                  m_5 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, h_7, l_5), m_5);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  h_7 = ATgetArgument(t, 0);
                                                  i_7 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, i_7, k_7);
                                              t = InsLayout_1_0(z_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  l_5 = ATgetArgument(t, 0);
                                                  m_5 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, h_7, l_5), m_5);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          ;
          LocalPopChoice(p_21);
        }
      else
        {
          t = o_21;
          {
            ATerm r_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(t_3, _id, t);
                t = InsLayout_1_0(z_8, t);
                ;
                LocalPopChoice(s_21);
              }
            else
              {
                t = r_21;
              }
          }
        }
      return(t);
    }
    t = z_8(t);
    t = _2_0(u_3, _id, t);
    if(match_cons(t, sym__2))
      {
        z_4 = ATgetArgument(t, 0);
        {
          ATerm t_21 = ATgetArgument(t, 1);
          if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
            {
              a_5 = ATgetFirst((ATermList) t_21);
              {
                ATerm u_21 = (ATerm) ATgetNext((ATermList) t_21);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_5), z_4), not_null(y_4));
    t = filter_1_0(v_3, t);
    t = flat_list_0_0(t);
    s_8 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_8 = ATgetFirst((ATermList) t);
        r_8 = (ATerm) ATgetNext((ATermList) t);
        t = r_8;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm y_21 = t;
            int z_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_8;
                ;
                LocalPopChoice(z_21);
              }
            else
              {
                t = y_21;
                t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_b_20), s_8);
              }
          }
        else
          {
            t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_b_20), s_8);
          }
      }
    else
      {
        t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_b_20), s_8);
      }
  }
  return(t);
}
ATerm layout_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,x_9 = NULL,l_0 = NULL,n_0 = NULL;
  x_9 = t;
  if(match_cons(t, sym_layout_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_9);
  r_9 = t;
  t = s_9;
  t = y_92(t);
  t_9 = t;
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, t_9);
  l_0 = t;
  t = SSLsetAnnotations(l_0, r_9);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm z_136 (ATerm), ATerm t)
{
  ATerm d_10 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = z_136(t);
        c_10 = t;
        t = (ATerm) ATinsert(ATempty, c_10);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm q_8 = NULL,t_8 = NULL;
          q_8 = t;
          t = SSL_explode_term(q_8);
          if(match_cons(t, sym__2))
            {
              ATerm c_22 = ATgetArgument(t, 0);
              t_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_8;
          t = foldr_3_0(f_4, conc_0_0, d_10, t);
        }
      }
    return(t);
  }
  t = d_10(t);
  return(t);
}
ATerm amb_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,v_10 = NULL,n_11 = NULL,v_11 = NULL,q_0 = NULL,r_0 = NULL;
  v_11 = t;
  if(match_cons(t, sym_amb_1))
    {
      v_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_11);
  e_10 = t;
  t = v_10;
  t = o_101(t);
  n_11 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, n_11);
  q_0 = t;
  t = SSLsetAnnotations(q_0, e_10);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t = amb_1_0(_id, t);
  t = term_u_18;
  t_12 = t;
  t = (ATerm) ATinsert(ATempty, term_d_22);
  u_12 = t;
  t = SSL_printnl(t_12, u_12);
  t = term_y_18;
  v_12 = t;
  t = SSL_exit(v_12);
  t = (ATerm) ATinsert(ATempty, term_d_22);
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_13;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm e_22 = ATgetFirst((ATermList) t);
          ATerm f_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_13;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(h_4, flat_list_0_0, t);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            {
              ATerm k_22 = t;
              int l_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_12 = NULL,b_13 = NULL,c_13 = NULL;
                  t = Cons_2_0(i_4, _id, t);
                  x_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_13 = ATgetFirst((ATermList) t);
                      {
                        ATerm m_22 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = x_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_22 = ATgetFirst((ATermList) t);
                      c_13 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, b_13, c_13);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(l_22);
                }
              else
                {
                  t = k_22;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      r_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
      {
        ATerm u_13 = NULL,v_13 = NULL;
        t = term_k_13;
        t = d_0(t);
        u_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_13, u_13);
        t = index_0_0(t);
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_13, v_13);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm x_13 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          r_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_k_13;
      t = d_0(t);
      x_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_13, x_13);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    t = bottomup_1_0(z_108, t);
    return(t);
  }
  t = SRTS_all(j_4, t);
  t = z_108(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = collect_p__1_0(l_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(_id, t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2_0(_id, _id, t);
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            t = S_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_10 (ATerm b_38, ATerm a_38, ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  t = _2_0(k_4, _id, t);
  {
    ATerm e_16 (ATerm t)
    {
      ATerm n_14 = NULL,o_14 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(m_4, n_4, t);
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          {
            ATerm i_16 (ATerm n_15, ATerm o_15, ATerm p_15, ATerm t)
            {
              t = n_15;
              if(((y_14 != NULL) && (y_14 != t)))
                _fail(t);
              else
                y_14 = t;
              t = o_15;
              if(((o_14 != NULL) && (o_14 != t)))
                _fail(t);
              else
                o_14 = t;
              t = p_15;
              if(((u_14 != NULL) && (u_14 != t)))
                _fail(t);
              else
                u_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
              t = e_16(t);
              if(match_cons(t, sym__2))
                {
                  if(((t_14 != NULL) && (t_14 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    t_14 = ATgetArgument(t, 0);
                  if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    w_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_14)), n_15), not_null(w_14));
              return(t);
            }
            ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
            t_15 = t;
            if(match_cons(t, sym__2))
              {
                u_15 = ATgetArgument(t, 0);
                z_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_15;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_15 = ATgetFirst((ATermList) t);
                w_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_15;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_16 = ATgetFirst((ATermList) t);
                b_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_15;
            if(match_cons(t, sym_Arg_1))
              {
                r_15 = ATgetArgument(t, 0);
                {
                  ATerm a_23 = t;
                  int c_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_15;
                      if(((n_14 != NULL) && (n_14 != t)))
                        _fail(t);
                      else
                        n_14 = t;
                      t = w_15;
                      if(((o_14 != NULL) && (o_14 != t)))
                        _fail(t);
                      else
                        o_14 = t;
                      t = a_16;
                      if(((x_14 != NULL) && (x_14 != t)))
                        _fail(t);
                      else
                        x_14 = t;
                      t = b_16;
                      if(((u_14 != NULL) && (u_14 != t)))
                        _fail(t);
                      else
                        u_14 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_15, b_16);
                      t = e_16(t);
                      if(match_cons(t, sym__2))
                        {
                          if(((t_14 != NULL) && (t_14 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            t_14 = ATgetArgument(t, 0);
                          if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            w_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_14)), (ATerm) ATmakeAppl(sym_Arg_1, r_15)), (ATerm) ATinsert(CheckATermList(not_null(w_14)), a_16));
                      ;
                      LocalPopChoice(c_23);
                    }
                  else
                    {
                      t = a_23;
                      t = i_16(v_15, w_15, b_16, t);
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Arg2_2))
                  {
                    r_15 = ATgetArgument(t, 0);
                    s_15 = ATgetArgument(t, 1);
                    {
                      ATerm i_23 = t;
                      int j_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_15;
                          if(((n_14 != NULL) && (n_14 != t)))
                            _fail(t);
                          else
                            n_14 = t;
                          t = s_15;
                          if(((j_14 != NULL) && (j_14 != t)))
                            _fail(t);
                          else
                            j_14 = t;
                          t = w_15;
                          if(((o_14 != NULL) && (o_14 != t)))
                            _fail(t);
                          else
                            o_14 = t;
                          t = a_16;
                          if(((x_14 != NULL) && (x_14 != t)))
                            _fail(t);
                          else
                            x_14 = t;
                          t = b_16;
                          if(((u_14 != NULL) && (u_14 != t)))
                            _fail(t);
                          else
                            u_14 = t;
                          t = (ATerm) ATmakeAppl(sym__2, w_15, b_16);
                          t = e_16(t);
                          if(match_cons(t, sym__2))
                            {
                              if(((t_14 != NULL) && (t_14 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                t_14 = ATgetArgument(t, 0);
                              if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                w_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_14)), (ATerm) ATmakeAppl(sym_Arg2_2, r_15, s_15)), (ATerm) ATinsert(CheckATermList(not_null(w_14)), a_16));
                          ;
                          LocalPopChoice(j_23);
                        }
                      else
                        {
                          t = i_23;
                          t = i_16(v_15, w_15, b_16, t);
                        }
                    }
                  }
                else
                  {
                    t = i_16(v_15, w_15, b_16, t);
                  }
              }
          }
        }
      return(t);
    }
    t = e_16(t);
    if(match_cons(t, sym__2))
      {
        ATerm k_23 = ATgetArgument(t, 0);
        k_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, b_38, k_14);
  }
  return(t);
}
ATerm instantiate_list_1_0 (ATerm f_137 (ATerm), ATerm t)
{
  ATerm c_17 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
          ATerm o_4 (ATerm t)
          {
            ATerm q_4 (ATerm t)
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_23 = t;
                  int q_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_4 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATempty, not_null(z_16));
                        return(t);
                      }
                      t = Instantiate_1_0(r_4, t);
                      ;
                      LocalPopChoice(q_23);
                    }
                  else
                    {
                      t = p_23;
                      t = flat_list_0_0(t);
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
            t = term_k_13;
            t = f_137(t);
            t = bottomup_1_0(q_4, t);
            return(t);
          }
          ATerm p_4 (ATerm t)
          {
            t = not_null(a_17);
            t = c_17(t);
            return(t);
          }
          if(((y_16 != NULL) && (y_16 != t)))
            _fail(t);
          else
            y_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((z_16 != NULL) && (z_16 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                z_16 = ATgetFirst((ATermList) t);
              if(((a_17 != NULL) && (a_17 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                a_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(y_16);
          t = Cons_2_0(o_4, p_4, t);
        }
      }
    return(t);
  }
  t = c_17(t);
  return(t);
}
ATerm q_10 (ATerm q_40, ATerm r_40, ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,g_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_40, (ATerm) ATinsert(ATempty, p_40));
  t = conc_0_0(t);
  g_17 = t;
  t = q_40;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 (ATerm t)
        {
          if(((d_17 != NULL) && (d_17 != t)))
            _fail(t);
          else
            d_17 = t;
          return(t);
        }
        t = iter_1_0(s_4, t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm t_4 (ATerm t)
          {
            if(((d_17 != NULL) && (d_17 != t)))
              _fail(t);
            else
              d_17 = t;
            return(t);
          }
          t = iter_star_1_0(t_4, t);
        }
      }
    t = (ATerm) ATmakeAppl(sym__2, q_40, g_17);
    t = get_pp_entry_0_0(t);
    e_17 = t;
    t = r_40;
    {
      ATerm u_4 (ATerm t)
      {
        ATerm h_17 = NULL;
        h_17 = t;
        t = (ATerm) ATmakeAppl(sym__4, not_null(d_17), h_17, g_17, term_y_18);
        t = symbol2abox_0_0(t);
        return(t);
      }
      t = map_1_0(u_4, t);
      {
        ATerm v_4 (ATerm t)
        {
          t = e_17;
          return(t);
        }
        t = instantiate_list_1_0(v_4, t);
      }
    }
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm h_137 (ATerm), ATerm t)
{
  ATerm u_17 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
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
              t = Cons_2_0(_id, w_4, t);
              ;
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              {
                ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
                ATerm x_4 (ATerm t)
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm x_23 = t;
                    int y_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_23 = t;
                        int a_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_5 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_17)), not_null(p_17));
                              return(t);
                            }
                            t = Instantiate_1_0(f_5, t);
                            ;
                            LocalPopChoice(a_24);
                          }
                        else
                          {
                            t = z_23;
                            t = flat_list_0_0(t);
                          }
                        ;
                        LocalPopChoice(y_23);
                      }
                    else
                      {
                        t = x_23;
                      }
                    return(t);
                  }
                  t = term_k_13;
                  t = h_137(t);
                  t = bottomup_1_0(e_5, t);
                  return(t);
                }
                ATerm c_5 (ATerm t)
                {
                  t = not_null(s_17);
                  t = u_17(t);
                  return(t);
                }
                if(((o_17 != NULL) && (o_17 != t)))
                  _fail(t);
                else
                  o_17 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((p_17 != NULL) && (p_17 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      p_17 = ATgetFirst((ATermList) t);
                    if(((q_17 != NULL) && (q_17 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      q_17 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = not_null(q_17);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((r_17 != NULL) && (r_17 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      r_17 = ATgetFirst((ATermList) t);
                    if(((s_17 != NULL) && (s_17 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      s_17 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = not_null(o_17);
                t = Cons_2_0(x_4, c_5, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_17(t);
  return(t);
}
ATerm r_10 (ATerm w_60, ATerm x_60, ATerm t)
{
  t = SSL_mod(w_60, x_60);
  return(t);
}
ATerm s_10 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL,g_18 = NULL,j_18 = NULL;
      t = term_d_24;
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_41, term_d_24);
      t = r_10(w_41, j_18, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_k_13;
      t = a_107(t);
      c_18 = t;
      t = term_k_13;
      t = b_107(t);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__4, c_18, x_41, g_18, term_d_24);
      t = symbol2abox_0_0(t);
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_19 = NULL;
            k_19 = t;
            {
              ATerm g_24 = t;
              if((PushChoice() == 0))
                {
                  ATerm d_11 = NULL;
                  d_11 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = d_11;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm h_24 = ATgetFirst((ATermList) t);
                          ATerm i_24 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = d_11;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = g_24;
                }
              t = (ATerm) ATinsert(ATempty, k_19);
            }
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
          }
      }
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm l_19 = NULL,m_19 = NULL;
        t = term_k_13;
        t = z_106(t);
        l_19 = t;
        t = term_k_13;
        t = b_107(t);
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym__4, l_19, x_41, m_19, term_y_18);
        t = symbol2abox_0_0(t);
        {
          ATerm l_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_19 = NULL;
              w_19 = t;
              {
                ATerm n_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_11 = NULL;
                    o_11 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = o_11;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm o_24 = ATgetFirst((ATermList) t);
                            ATerm p_24 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = o_11;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_24;
                  }
                t = (ATerm) ATinsert(ATempty, w_19);
              }
              ;
              LocalPopChoice(m_24);
            }
          else
            {
              t = l_24;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t)
{
  ATerm z_19 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = t_116(t);
        t = _2_0(v_116, z_19, t);
        t = u_116(t);
      }
    return(t);
  }
  t = z_19(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_24 = ATgetArgument(t, 0);
      ATerm t_24 = ATgetArgument(t, 1);
      if(((ATgetType(t_24) != AT_LIST) || !(ATisEmpty(t_24))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,f_20 = NULL,g_20 = NULL,m_20 = NULL;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      {
        ATerm u_24 = ATgetArgument(t, 1);
        if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
          {
            d_20 = ATgetFirst((ATermList) u_24);
            f_20 = (ATerm) ATgetNext((ATermList) u_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_y_18;
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_20, term_y_18);
  t = i_12(c_20, m_20, t);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_20, d_20), (ATerm) ATmakeAppl(sym__2, g_20, f_20));
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm r_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      r_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_20), r_20);
  return(t);
}
ATerm nzip_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, a_20);
  t = genzip_4_0(g_5, h_5, i_5, e_117, t);
  return(t);
}
ATerm w_10 (ATerm n_41, ATerm o_41, ATerm m_41, ATerm s_41, ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_41, (ATerm) ATinsert(ATempty, s_41));
  t = conc_0_0(t);
  c_21 = t;
  t = n_41;
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_5 (ATerm t)
        {
          if(((z_20 != NULL) && (z_20 != t)))
            _fail(t);
          else
            z_20 = t;
          return(t);
        }
        ATerm k_5 (ATerm t)
        {
          if(((a_21 != NULL) && (a_21 != t)))
            _fail(t);
          else
            a_21 = t;
          return(t);
        }
        t = iter_sep_2_0(j_5, k_5, t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          ATerm o_5 (ATerm t)
          {
            if(((z_20 != NULL) && (z_20 != t)))
              _fail(t);
            else
              z_20 = t;
            return(t);
          }
          ATerm p_5 (ATerm t)
          {
            if(((a_21 != NULL) && (a_21 != t)))
              _fail(t);
            else
              a_21 = t;
            return(t);
          }
          t = iter_star_sep_2_0(o_5, p_5, t);
        }
      }
    t = (ATerm) ATmakeAppl(sym__2, n_41, c_21);
    t = get_pp_entry_0_0(t);
    b_21 = t;
    t = o_41;
    {
      ATerm q_5 (ATerm t)
      {
        ATerm d_21 = NULL,e_21 = NULL;
        ATerm r_5 (ATerm t)
        {
          t = not_null(z_20);
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = not_null(a_21);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          t = c_21;
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = s_41;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              d_21 = ATgetArgument(t, 0);
            if(((e_21 != NULL) && (e_21 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              e_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_10(r_5, s_5, t_5, u_5, not_null(d_21), not_null(e_21), t);
        return(t);
      }
      t = nzip_1_0(q_5, t);
      {
        ATerm v_5 (ATerm t)
        {
          t = b_21;
          return(t);
        }
        t = instantiate_sep_list_1_0(v_5, t);
      }
    }
  }
  return(t);
}
ATerm y_10 (ATerm e_60, ATerm f_60, ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_60, f_60);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      t = SSL_subtr(e_60, f_60);
    }
  return(t);
}
ATerm z_10 (ATerm i_47, ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm g_21 = NULL,i_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_47, term_d_24);
  t = geq_0_0(t);
  t = term_y_18;
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_47, term_y_18);
  t = y_10(i_47, i_21, t);
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_21, h_47);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      {
        ATerm a_25 = ATgetArgument(t, 1);
        if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
          {
            m_21 = ATgetFirst((ATermList) a_25);
            n_21 = (ATerm) ATgetNext((ATermList) a_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_10(l_21, m_21, n_21, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm j_21 = NULL;
  t = repeat_1_0(w_5, t);
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if(((ATgetType(b_25) != AT_INT) || (ATgetInt((ATermInt) b_25) != 1)))
        _fail(t);
      {
        ATerm c_25 = ATgetArgument(t, 1);
        if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
          {
            j_21 = ATgetFirst((ATermList) c_25);
            {
              ATerm l_25 = (ATerm) ATgetNext((ATermList) c_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_21;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm m_25 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_25;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm n_25 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_25;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,w_33 = NULL,z_33 = NULL,b_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,i_34 = NULL,j_34 = NULL;
  b_34 = t;
  if(match_cons(t, sym__4))
    {
      e_34 = ATgetArgument(t, 0);
      g_34 = ATgetArgument(t, 1);
      i_34 = ATgetArgument(t, 2);
      j_34 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = e_34;
  if(match_cons(t, sym_seq_1))
    {
      f_34 = ATgetArgument(t, 0);
      {
        ATerm p_34 = NULL,q_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
        t = g_34;
        if(match_cons(t, sym_appl_2))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            z_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_34, (ATerm) ATinsert(ATempty, j_34));
        t = conc_0_0(t);
        v_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, f_34), v_34);
        t = get_pp_entry_0_0(t);
        p_34 = t;
        t = f_34;
        t = filter_1_0(x_5, t);
        q_34 = t;
        t = z_33;
        t = filter_1_0(y_5, t);
        t_34 = t;
        t = (ATerm) ATmakeAppl(sym__4, q_34, t_34, v_34, term_y_18);
        t = seq2abox_0_0(t);
        u_34 = t;
        t = p_34;
        {
          ATerm z_5 (ATerm t)
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_25 = t;
                int v_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_6 (ATerm t)
                    {
                      t = u_34;
                      return(t);
                    }
                    t = Instantiate_1_0(a_6, t);
                    ;
                    LocalPopChoice(v_25);
                  }
                else
                  {
                    t = r_25;
                    t = flat_list_0_0(t);
                  }
                ;
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
              }
            return(t);
          }
          t = bottomup_1_0(z_5, t);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          f_34 = ATgetArgument(t, 0);
          t_33 = ATgetArgument(t, 1);
          {
            ATerm z_12 = NULL,a_13 = NULL,d_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, i_34, (ATerm) ATinsert(ATempty, j_34));
            t = conc_0_0(t);
            d_13 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, f_34, t_33), g_34, d_13, term_y_18);
            {
              ATerm x_21 (ATerm t)
              {
                ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,q_13 = NULL,y_13 = NULL,z_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
                if(match_cons(t, sym__4))
                  {
                    b_14 = ATgetArgument(t, 0);
                    c_14 = ATgetArgument(t, 1);
                    h_14 = ATgetArgument(t, 2);
                    i_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_14;
                if(match_cons(t, sym_appl_2))
                  {
                    d_14 = ATgetArgument(t, 0);
                    e_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_14;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_14 = ATgetFirst((ATermList) t);
                    g_14 = (ATerm) ATgetNext((ATermList) t);
                    t = g_14;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = d_14;
                        if(match_cons(t, sym_prod_3))
                          {
                            g_13 = ATgetArgument(t, 0);
                            n_13 = ATgetArgument(t, 1);
                            z_13 = ATgetArgument(t, 2);
                            t = n_13;
                            if(match_cons(t, sym_alt_2))
                              {
                                q_13 = ATgetArgument(t, 0);
                                y_13 = ATgetArgument(t, 1);
                                t = g_13;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    l_13 = ATgetFirst((ATermList) t);
                                    m_13 = (ATerm) ATgetNext((ATermList) t);
                                    t = m_13;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = b_14;
                                        if(match_cons(t, sym_alt_2))
                                          {
                                            e_13 = ATgetArgument(t, 0);
                                            f_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm x_25 = t;
                                              int y_25 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = l_13;
                                                  if((e_13 != t))
                                                    {
                                                      _fail(t);
                                                    }
                                                  t = q_13;
                                                  if((e_13 != t))
                                                    {
                                                      _fail(t);
                                                    }
                                                  t = y_13;
                                                  if((f_13 != t))
                                                    {
                                                      _fail(t);
                                                    }
                                                  t = (ATerm) ATmakeAppl(sym__4, e_13, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_13), e_13, z_13), e_14), h_14, i_14);
                                                  t = x_21(t);
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
                                                        ATerm c_16 = NULL,d_16 = NULL;
                                                        t = q_13;
                                                        if((e_13 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = y_13;
                                                        if((f_13 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = term_y_18;
                                                        d_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, i_14, term_y_18);
                                                        t = i_12(i_14, d_16, t);
                                                        c_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, f_13, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_13), f_13, z_13), e_14), h_14, c_16);
                                                        t = x_21(t);
                                                        ;
                                                        LocalPopChoice(a_26);
                                                      }
                                                    else
                                                      {
                                                        t = z_25;
                                                        {
                                                          ATerm p_16 = NULL;
                                                          ATerm b_6 (ATerm t)
                                                          {
                                                            ATerm b_26 = t;
                                                            int c_26 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_26 = t;
                                                                int e_26 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm c_6 (ATerm t)
                                                                    {
                                                                      t = (ATerm) ATinsert(ATempty, not_null(a_13));
                                                                      return(t);
                                                                    }
                                                                    t = Instantiate_1_0(c_6, t);
                                                                    ;
                                                                    LocalPopChoice(e_26);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_26;
                                                                    t = flat_list_0_0(t);
                                                                  }
                                                                ;
                                                                LocalPopChoice(c_26);
                                                              }
                                                            else
                                                              {
                                                                t = b_26;
                                                              }
                                                            return(t);
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, f_34, t_33), h_14);
                                                          t = get_pp_entry_0_0(t);
                                                          if(((z_12 != NULL) && (z_12 != t)))
                                                            _fail(t);
                                                          else
                                                            z_12 = t;
                                                          t = (ATerm) ATmakeAppl(sym__4, b_14, f_14, h_14, term_y_18);
                                                          t = symbol2abox_0_0(t);
                                                          if(((a_13 != NULL) && (a_13 != t)))
                                                            _fail(t);
                                                          else
                                                            a_13 = t;
                                                          t = (ATerm) ATmakeAppl(sym__2, i_14, not_null(z_12));
                                                          t = index_0_0(t);
                                                          if(((p_16 != NULL) && (p_16 != t)))
                                                            _fail(t);
                                                          else
                                                            p_16 = t;
                                                          t = (ATerm) ATinsert(ATempty, not_null(p_16));
                                                          t = bottomup_1_0(b_6, t);
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                        else
                                          {
                                            ATerm i_17 = NULL;
                                            ATerm d_6 (ATerm t)
                                            {
                                              ATerm f_26 = t;
                                              int g_26 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_26 = t;
                                                  int i_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_6 (ATerm t)
                                                      {
                                                        t = (ATerm) ATinsert(ATempty, not_null(a_13));
                                                        return(t);
                                                      }
                                                      t = Instantiate_1_0(e_6, t);
                                                      ;
                                                      LocalPopChoice(i_26);
                                                    }
                                                  else
                                                    {
                                                      t = h_26;
                                                      t = flat_list_0_0(t);
                                                    }
                                                  ;
                                                  LocalPopChoice(g_26);
                                                }
                                              else
                                                {
                                                  t = f_26;
                                                }
                                              return(t);
                                            }
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, f_34, t_33), h_14);
                                            t = get_pp_entry_0_0(t);
                                            if(((z_12 != NULL) && (z_12 != t)))
                                              _fail(t);
                                            else
                                              z_12 = t;
                                            t = (ATerm) ATmakeAppl(sym__4, b_14, f_14, h_14, term_y_18);
                                            t = symbol2abox_0_0(t);
                                            if(((a_13 != NULL) && (a_13 != t)))
                                              _fail(t);
                                            else
                                              a_13 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, i_14, not_null(z_12));
                                            t = index_0_0(t);
                                            if(((i_17 != NULL) && (i_17 != t)))
                                              _fail(t);
                                            else
                                              i_17 = t;
                                            t = (ATerm) ATinsert(ATempty, not_null(i_17));
                                            t = bottomup_1_0(d_6, t);
                                          }
                                      }
                                    else
                                      {
                                        ATerm a_18 = NULL;
                                        ATerm f_6 (ATerm t)
                                        {
                                          ATerm j_26 = t;
                                          int k_26 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm l_26 = t;
                                              int m_26 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_6 (ATerm t)
                                                  {
                                                    t = (ATerm) ATinsert(ATempty, not_null(a_13));
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(g_6, t);
                                                  ;
                                                  LocalPopChoice(m_26);
                                                }
                                              else
                                                {
                                                  t = l_26;
                                                  t = flat_list_0_0(t);
                                                }
                                              ;
                                              LocalPopChoice(k_26);
                                            }
                                          else
                                            {
                                              t = j_26;
                                            }
                                          return(t);
                                        }
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, f_34, t_33), h_14);
                                        t = get_pp_entry_0_0(t);
                                        if(((z_12 != NULL) && (z_12 != t)))
                                          _fail(t);
                                        else
                                          z_12 = t;
                                        t = (ATerm) ATmakeAppl(sym__4, b_14, f_14, h_14, term_y_18);
                                        t = symbol2abox_0_0(t);
                                        if(((a_13 != NULL) && (a_13 != t)))
                                          _fail(t);
                                        else
                                          a_13 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, i_14, not_null(z_12));
                                        t = index_0_0(t);
                                        if(((a_18 != NULL) && (a_18 != t)))
                                          _fail(t);
                                        else
                                          a_18 = t;
                                        t = (ATerm) ATinsert(ATempty, not_null(a_18));
                                        t = bottomup_1_0(f_6, t);
                                      }
                                  }
                                else
                                  {
                                    ATerm m_18 = NULL;
                                    ATerm h_6 (ATerm t)
                                    {
                                      ATerm n_26 = t;
                                      int o_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_26 = t;
                                          int s_26 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm i_6 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, not_null(a_13));
                                                return(t);
                                              }
                                              t = Instantiate_1_0(i_6, t);
                                              ;
                                              LocalPopChoice(s_26);
                                            }
                                          else
                                            {
                                              t = p_26;
                                              t = flat_list_0_0(t);
                                            }
                                          ;
                                          LocalPopChoice(o_26);
                                        }
                                      else
                                        {
                                          t = n_26;
                                        }
                                      return(t);
                                    }
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, f_34, t_33), h_14);
                                    t = get_pp_entry_0_0(t);
                                    if(((z_12 != NULL) && (z_12 != t)))
                                      _fail(t);
                                    else
                                      z_12 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, b_14, f_14, h_14, term_y_18);
                                    t = symbol2abox_0_0(t);
                                    if(((a_13 != NULL) && (a_13 != t)))
                                      _fail(t);
                                    else
                                      a_13 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, i_14, not_null(z_12));
                                    t = index_0_0(t);
                                    if(((m_18 != NULL) && (m_18 != t)))
                                      _fail(t);
                                    else
                                      m_18 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(m_18));
                                    t = bottomup_1_0(h_6, t);
                                  }
                              }
                            else
                              {
                                ATerm v_18 = NULL;
                                ATerm j_6 (ATerm t)
                                {
                                  ATerm u_26 = t;
                                  int v_26 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm w_26 = t;
                                      int x_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_6 (ATerm t)
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(a_13));
                                            return(t);
                                          }
                                          t = Instantiate_1_0(k_6, t);
                                          ;
                                          LocalPopChoice(x_26);
                                        }
                                      else
                                        {
                                          t = w_26;
                                          t = flat_list_0_0(t);
                                        }
                                      ;
                                      LocalPopChoice(v_26);
                                    }
                                  else
                                    {
                                      t = u_26;
                                    }
                                  return(t);
                                }
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, f_34, t_33), h_14);
                                t = get_pp_entry_0_0(t);
                                if(((z_12 != NULL) && (z_12 != t)))
                                  _fail(t);
                                else
                                  z_12 = t;
                                t = (ATerm) ATmakeAppl(sym__4, b_14, f_14, h_14, term_y_18);
                                t = symbol2abox_0_0(t);
                                if(((a_13 != NULL) && (a_13 != t)))
                                  _fail(t);
                                else
                                  a_13 = t;
                                t = (ATerm) ATmakeAppl(sym__2, i_14, not_null(z_12));
                                t = index_0_0(t);
                                if(((v_18 != NULL) && (v_18 != t)))
                                  _fail(t);
                                else
                                  v_18 = t;
                                t = (ATerm) ATinsert(ATempty, not_null(v_18));
                                t = bottomup_1_0(j_6, t);
                              }
                          }
                        else
                          {
                            ATerm g_19 = NULL;
                            ATerm l_6 (ATerm t)
                            {
                              ATerm y_26 = t;
                              int b_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_27 = t;
                                  int d_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm m_6 (ATerm t)
                                      {
                                        t = (ATerm) ATinsert(ATempty, not_null(a_13));
                                        return(t);
                                      }
                                      t = Instantiate_1_0(m_6, t);
                                      ;
                                      LocalPopChoice(d_27);
                                    }
                                  else
                                    {
                                      t = c_27;
                                      t = flat_list_0_0(t);
                                    }
                                  ;
                                  LocalPopChoice(b_27);
                                }
                              else
                                {
                                  t = y_26;
                                }
                              return(t);
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, f_34, t_33), h_14);
                            t = get_pp_entry_0_0(t);
                            if(((z_12 != NULL) && (z_12 != t)))
                              _fail(t);
                            else
                              z_12 = t;
                            t = (ATerm) ATmakeAppl(sym__4, b_14, f_14, h_14, term_y_18);
                            t = symbol2abox_0_0(t);
                            if(((a_13 != NULL) && (a_13 != t)))
                              _fail(t);
                            else
                              a_13 = t;
                            t = (ATerm) ATmakeAppl(sym__2, i_14, not_null(z_12));
                            t = index_0_0(t);
                            if(((g_19 != NULL) && (g_19 != t)))
                              _fail(t);
                            else
                              g_19 = t;
                            t = (ATerm) ATinsert(ATempty, not_null(g_19));
                            t = bottomup_1_0(l_6, t);
                          }
                      }
                    else
                      {
                        t = d_14;
                        if(match_cons(t, sym_prod_3))
                          {
                            g_13 = ATgetArgument(t, 0);
                            n_13 = ATgetArgument(t, 1);
                            z_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = b_14;
                        if(match_cons(t, sym_alt_2))
                          {
                            e_13 = ATgetArgument(t, 0);
                            f_13 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = g_13;
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
                        t = n_13;
                        if(match_cons(t, sym_alt_2))
                          {
                            q_13 = ATgetArgument(t, 0);
                            y_13 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm f_27 = t;
                          int g_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = l_13;
                              if((e_13 != t))
                                {
                                  _fail(t);
                                }
                              t = q_13;
                              if((e_13 != t))
                                {
                                  _fail(t);
                                }
                              t = y_13;
                              if((f_13 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym__4, e_13, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_13), e_13, z_13), e_14), h_14, i_14);
                              t = x_21(t);
                              ;
                              LocalPopChoice(g_27);
                            }
                          else
                            {
                              t = f_27;
                              {
                                ATerm p_20 = NULL,q_20 = NULL;
                                t = q_13;
                                if((e_13 != t))
                                  {
                                    _fail(t);
                                  }
                                t = y_13;
                                if((f_13 != t))
                                  {
                                    _fail(t);
                                  }
                                t = term_y_18;
                                q_20 = t;
                                t = (ATerm) ATmakeAppl(sym__2, i_14, term_y_18);
                                t = i_12(i_14, q_20, t);
                                p_20 = t;
                                t = (ATerm) ATmakeAppl(sym__4, f_13, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_13), f_13, z_13), e_14), h_14, p_20);
                                t = x_21(t);
                              }
                            }
                        }
                      }
                  }
                else
                  {
                    t = d_14;
                    if(match_cons(t, sym_prod_3))
                      {
                        g_13 = ATgetArgument(t, 0);
                        n_13 = ATgetArgument(t, 1);
                        z_13 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = b_14;
                    if(match_cons(t, sym_alt_2))
                      {
                        e_13 = ATgetArgument(t, 0);
                        f_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = g_13;
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
                    t = n_13;
                    if(match_cons(t, sym_alt_2))
                      {
                        q_13 = ATgetArgument(t, 0);
                        y_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm i_27 = t;
                      int j_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = l_13;
                          if((e_13 != t))
                            {
                              _fail(t);
                            }
                          t = q_13;
                          if((e_13 != t))
                            {
                              _fail(t);
                            }
                          t = y_13;
                          if((f_13 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym__4, e_13, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, e_13), e_13, z_13), e_14), h_14, i_14);
                          t = x_21(t);
                          ;
                          LocalPopChoice(j_27);
                        }
                      else
                        {
                          t = i_27;
                          {
                            ATerm v_21 = NULL,w_21 = NULL;
                            t = q_13;
                            if((e_13 != t))
                              {
                                _fail(t);
                              }
                            t = y_13;
                            if((f_13 != t))
                              {
                                _fail(t);
                              }
                            t = term_y_18;
                            w_21 = t;
                            t = (ATerm) ATmakeAppl(sym__2, i_14, term_y_18);
                            t = i_12(i_14, w_21, t);
                            v_21 = t;
                            t = (ATerm) ATmakeAppl(sym__4, f_13, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, l_13), f_13, z_13), e_14), h_14, v_21);
                            t = x_21(t);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = x_21(t);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              f_34 = ATgetArgument(t, 0);
              t_33 = ATgetArgument(t, 1);
              {
                ATerm h_35 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, f_34, t_33);
                h_35 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, f_34, t_33), g_34, i_34, j_34);
                t = w_10(h_35, g_34, i_34, j_34, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  f_34 = ATgetArgument(t, 0);
                  t_33 = ATgetArgument(t, 1);
                  {
                    ATerm q_35 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, f_34, t_33);
                    q_35 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, f_34, t_33), g_34, i_34, j_34);
                    t = w_10(q_35, g_34, i_34, j_34, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      f_34 = ATgetArgument(t, 0);
                      {
                        ATerm x_35 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, f_34);
                        x_35 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, f_34), g_34, i_34, j_34);
                        t = q_10(x_35, g_34, i_34, j_34, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          f_34 = ATgetArgument(t, 0);
                          {
                            ATerm c_36 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, f_34);
                            c_36 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, f_34), g_34, i_34, j_34);
                            t = q_10(c_36, g_34, i_34, j_34, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              f_34 = ATgetArgument(t, 0);
                              t = g_34;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm l_27 = ATgetArgument(t, 0);
                                  z_33 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = z_33;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  u_33 = ATgetFirst((ATermList) t);
                                  w_33 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
                                    t = w_33;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, i_34, (ATerm) ATinsert(ATempty, j_34));
                                    t = conc_0_0(t);
                                    p_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, f_34), p_22);
                                    t = get_pp_entry_0_0(t);
                                    n_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, f_34, u_33, p_22, term_y_18);
                                    t = symbol2abox_0_0(t);
                                    o_22 = t;
                                    t = (ATerm) ATinsert(ATempty, o_22);
                                    q_22 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, n_22, (ATerm) ATinsert(ATempty, o_22));
                                    t = o_10(n_22, q_22, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        r_22 = ATgetArgument(t, 0);
                                        s_22 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = r_22;
                                    {
                                      ATerm n_6 (ATerm t)
                                      {
                                        ATerm m_27 = t;
                                        int n_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_27 = t;
                                            int q_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm o_6 (ATerm t)
                                                {
                                                  t = s_22;
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(o_6, t);
                                                ;
                                                LocalPopChoice(q_27);
                                              }
                                            else
                                              {
                                                t = o_27;
                                                t = flat_list_0_0(t);
                                              }
                                            ;
                                            LocalPopChoice(n_27);
                                          }
                                        else
                                          {
                                            t = m_27;
                                          }
                                        return(t);
                                      }
                                      t = bottomup_1_0(n_6, t);
                                    }
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
                              ATerm r_27 = t;
                              int s_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm t_27 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(s_27);
                                  {
                                    ATerm u_27 = t;
                                    int v_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = g_34;
                                        {
                                          ATerm x_27 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm b_23 = NULL;
                                              b_23 = t;
                                              t = SSL_is_string(b_23);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = x_27;
                                            }
                                          t = g_34;
                                          {
                                            ATerm y_27 = t;
                                            int c_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
                                                if(match_cons(t, sym_appl_2))
                                                  {
                                                    d_23 = ATgetArgument(t, 0);
                                                    h_23 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = d_23;
                                                if(match_cons(t, sym_prod_3))
                                                  {
                                                    e_23 = ATgetArgument(t, 0);
                                                    f_23 = ATgetArgument(t, 1);
                                                    g_23 = ATgetArgument(t, 2);
                                                  }
                                                else
                                                  _fail(t);
                                                t = g_34;
                                                t = l_11(e_23, f_23, g_23, h_23, t);
                                                ;
                                                LocalPopChoice(c_28);
                                              }
                                            else
                                              {
                                                t = y_27;
                                                t = fatal_ambiguity_0_0(t);
                                              }
                                          }
                                        }
                                        ;
                                        LocalPopChoice(v_27);
                                      }
                                    else
                                      {
                                        t = u_27;
                                        t = SSL_is_string(g_34);
                                        t = (ATerm) ATmakeAppl(sym_S_1, g_34);
                                      }
                                  }
                                }
                              else
                                {
                                  t = r_27;
                                  {
                                    ATerm d_28 = t;
                                    int e_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm f_28 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(e_28);
                                        {
                                          ATerm j_24 = NULL,k_24 = NULL;
                                          t = (ATerm) ATinsert(ATempty, g_34);
                                          k_24 = t;
                                          t = SSL_implode_string(k_24);
                                          j_24 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, j_24);
                                        }
                                      }
                                    else
                                      {
                                        t = d_28;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            f_34 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, f_34);
                                      }
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
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,z_36 = NULL,b_37 = NULL,d_37 = NULL,e_37 = NULL;
  if(match_cons(t, sym__4))
    {
      u_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
      d_37 = ATgetArgument(t, 2);
      e_37 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = u_36;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_36;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_36 = ATgetFirst((ATermList) t);
          w_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_36 = ATgetFirst((ATermList) t);
          b_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_36;
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm j_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(h_28);
            t = v_36;
            {
              ATerm k_28 = t;
              int l_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm o_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_28);
                  {
                    ATerm p_28 = t;
                    int q_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, w_36, b_37, d_37, e_37);
                        t = seq2abox_0_0(t);
                        ;
                        LocalPopChoice(q_28);
                      }
                    else
                      {
                        t = p_28;
                        {
                          ATerm a_40 = NULL,d_40 = NULL,n_40 = NULL,t_40 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, v_36, z_36, d_37, e_37);
                          t = symbol2abox_0_0(t);
                          a_40 = t;
                          t = term_y_18;
                          t_40 = t;
                          t = (ATerm) ATmakeAppl(sym__2, e_37, term_y_18);
                          t = i_12(e_37, t_40, t);
                          n_40 = t;
                          t = (ATerm) ATmakeAppl(sym__4, w_36, b_37, d_37, n_40);
                          t = seq2abox_0_0(t);
                          d_40 = t;
                          t = (ATerm) ATinsert(CheckATermList(d_40), a_40);
                        }
                      }
                  }
                }
              else
                {
                  t = k_28;
                  {
                    ATerm l_41 = NULL,r_41 = NULL,v_41 = NULL,y_41 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, v_36, z_36, d_37, e_37);
                    t = symbol2abox_0_0(t);
                    l_41 = t;
                    t = term_y_18;
                    y_41 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_37, term_y_18);
                    t = i_12(e_37, y_41, t);
                    v_41 = t;
                    t = (ATerm) ATmakeAppl(sym__4, w_36, b_37, d_37, v_41);
                    t = seq2abox_0_0(t);
                    r_41 = t;
                    t = (ATerm) ATinsert(CheckATermList(r_41), l_41);
                  }
                }
            }
          }
        else
          {
            t = g_28;
            {
              ATerm l_42 = NULL,r_42 = NULL,b_43 = NULL,c_43 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, v_36, z_36, d_37, e_37);
              t = symbol2abox_0_0(t);
              l_42 = t;
              t = term_y_18;
              c_43 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_37, term_y_18);
              t = i_12(e_37, c_43, t);
              b_43 = t;
              t = (ATerm) ATmakeAppl(sym__4, w_36, b_37, d_37, b_43);
              t = seq2abox_0_0(t);
              r_42 = t;
              t = (ATerm) ATinsert(CheckATermList(r_42), l_42);
            }
          }
      }
    }
  return(t);
}
ATerm lit_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,s_0 = NULL,t_0 = NULL;
  k_43 = t;
  if(match_cons(t, sym_lit_1))
    {
      i_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_43);
  h_43 = t;
  t = i_43;
  t = t_100(t);
  j_43 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, j_43);
  s_0 = t;
  t = SSLsetAnnotations(s_0, h_43);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = debug_1_0(q_6, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  p_43 = t;
  t = term_s_28;
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, p_43);
  t = k_12(s_43, p_43, t);
  if(match_cons(t, sym__2))
    {
      q_43 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_43;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(p_6, t);
  t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
  return(t);
}
ATerm a_11 (ATerm k_79, ATerm j_79, ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      v_43 = ATgetArgument(t, 0);
      w_43 = ATgetArgument(t, 1);
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_43 = NULL,z_43 = NULL;
            t = k_79;
            t = mk_key_0_0(t);
            y_43 = t;
            t = term_s_28;
            z_43 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_s_28, y_43);
            t = k_12(z_43, y_43, t);
            t = u_43;
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            t = u_43;
            t = m_11(v_43, w_43, t);
          }
      }
    }
  else
    {
      ATerm e_44 = NULL,g_44 = NULL;
      t = k_79;
      t = mk_key_0_0(t);
      e_44 = t;
      t = term_s_28;
      g_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_28, e_44);
      t = k_12(g_44, e_44, t);
      t = u_43;
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm d_136 (ATerm), ATerm t)
{
  ATerm h_44 = NULL,j_44 = NULL,k_44 = NULL,m_44 = NULL;
  t = number_nonterminals_0_0(t);
  h_44 = t;
  t = make_0_0(t);
  j_44 = t;
  t = h_44;
  {
    ATerm r_6 (ATerm t)
    {
      ATerm s_6 (ATerm t)
      {
        ATerm n_44 = NULL;
        t = term_k_13;
        t = d_136(t);
        n_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_44, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(s_6, t);
      return(t);
    }
    t = map_1_0(r_6, t);
    t = concat_0_0(t);
    k_44 = t;
    t = term_k_13;
    t = d_136(t);
    m_44 = t;
    t = (ATerm) ATinsert(CheckATermList(k_44), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, m_44), j_44));
  }
  return(t);
}
ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm r_44 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_45 = NULL,e_45 = NULL,g_45 = NULL,h_45 = NULL;
      ATerm y_28 = t;
      int z_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              d_45 = ATgetArgument(t, 0);
              {
                ATerm a_29 = ATgetArgument(t, 1);
              }
              g_45 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(z_28);
          t = g_45;
          {
            ATerm t_6 (ATerm t)
            {
              if(match_cons(t, sym_cons_1))
                {
                  if(((r_44 != NULL) && (r_44 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_44 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(t_6, t);
            t = d_45;
            {
              ATerm u_6 (ATerm t)
              {
                t = not_null(r_44);
                return(t);
              }
              t = symbols2pp_entries_1_0(u_6, t);
            }
          }
        }
      else
        {
          t = y_28;
          {
            ATerm i_45 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                d_45 = ATgetArgument(t, 0);
                e_45 = ATgetArgument(t, 1);
                g_45 = ATgetArgument(t, 2);
                h_45 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_29)), e_45), (ATerm) ATinsert(ATinsert(ATempty, term_c_29), (ATerm) ATmakeAppl(sym_lit_1, d_45)));
            t = concat_0_0(t);
            i_45 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, i_45, g_45, h_45);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_29 = t;
            if((PushChoice() == 0))
              {
                ATerm j_45 = NULL;
                j_45 = t;
                t = term_i_29;
                t = get_options_0_0(t);
                t = oncetd_1_0(v_6, t);
                t = j_45;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_29;
              }
            t = debug_1_0(w_6, t);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
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
  ATerm t_49 = NULL,u_49 = NULL,a_50 = NULL,b_50 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_50;
  if(match_cons(t, sym_alt_2))
    {
      t_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_50 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, t_49, u_49);
            t = flat_alt_0_0(t);
            l_50 = t;
            t = (ATerm) ATinsert(CheckATermList(l_50), a_50);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            t = (ATerm) ATinsert(ATinsert(ATempty, b_50), a_50);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, b_50), a_50);
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      {
        ATerm r_45 = NULL,s_45 = NULL,u_45 = NULL,v_45 = NULL,g_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_45 = ATgetFirst((ATermList) t);
            s_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_45;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_45 = ATgetFirst((ATermList) t);
            v_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_45;
        t = pair_0_0(t);
        g_46 = t;
        t = (ATerm) ATinsert(CheckATermList(g_46), (ATerm) ATmakeAppl(sym__2, r_45, u_45));
      }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm x_46 = NULL;
  t = _2_0(_id, a_7, t);
  if(match_cons(t, sym_lit_1))
    {
      x_46 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_29, (ATerm) ATmakeAppl(sym_S_1, x_46));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          x_46 = ATgetArgument(t, 0);
          {
            ATerm o_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, x_46);
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = map_1_0(b_7, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_star_1_0(_id, t);
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            {
              ATerm v_29 = t;
              int w_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_sep_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(w_29);
                }
              else
                {
                  t = v_29;
                  t = iter_star_sep_2_0(_id, _id, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm c_47 = NULL;
  t = lit_1_0(_id, t);
  if(match_cons(t, sym_lit_1))
    {
      c_47 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_29, (ATerm) ATmakeAppl(sym_S_1, c_47));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          c_47 = ATgetArgument(t, 0);
          {
            ATerm x_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, c_47);
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL;
  ATerm r_7 (ATerm t)
  {
    ATerm t_47 = NULL;
    t = lit_1_0(_id, t);
    if(match_cons(t, sym_lit_1))
      {
        t_47 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_29, (ATerm) ATmakeAppl(sym_S_1, t_47));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            t_47 = ATgetArgument(t, 0);
            {
              ATerm y_29 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, t_47);
      }
    if(((q_47 != NULL) && (q_47 != t)))
      _fail(t);
    else
      q_47 = t;
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    ATerm y_47 = NULL;
    t = _2_0(_id, t_7, t);
    if(match_cons(t, sym_lit_1))
      {
        y_47 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_29, (ATerm) ATmakeAppl(sym_S_1, y_47));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            y_47 = ATgetArgument(t, 0);
            {
              ATerm z_29 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, y_47);
      }
    if(((r_47 != NULL) && (r_47 != t)))
      _fail(t);
    else
      r_47 = t;
    return(t);
  }
  t = _2_0(r_7, s_7, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_c_30), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_47)), not_null(q_47)));
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      t = iter_star_1_0(_id, t);
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm d_48 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      d_48 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_29, (ATerm) ATmakeAppl(sym_S_1, d_48));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          d_48 = ATgetArgument(t, 0);
          {
            ATerm f_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, d_48);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_46 = NULL;
      t = reverse_acc_2_0(_id, x_6, t);
      t = Cons_2_0(y_6, z_6, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_46 = ATgetFirst((ATermList) t);
          q_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_30 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, c_7, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_30;
          }
        t = q_46;
        t = reverse_acc_2_0(_id, d_7, t);
        v_46 = t;
        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, r_46), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, v_46)));
      }
      ;
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_acc_2_0(_id, f_7, t);
            {
              ATerm j_7 (ATerm t)
              {
                ATerm k_47 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    k_47 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_29, (ATerm) ATmakeAppl(sym_S_1, k_47));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        k_47 = ATgetArgument(t, 0);
                        {
                          ATerm l_30 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, k_47);
                  }
                if(((u_46 != NULL) && (u_46 != t)))
                  _fail(t);
                else
                  u_46 = t;
                return(t);
              }
              ATerm l_7 (ATerm t)
              {
                ATerm m_30 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_30;
                  }
                t = reverse_acc_2_0(_id, o_7, t);
                if(((s_46 != NULL) && (s_46 != t)))
                  _fail(t);
                else
                  s_46 = t;
                return(t);
              }
              t = Cons_2_0(j_7, l_7, t);
              t = not_null(s_46);
              t = pair_0_0(t);
              t = map_1_0(q_7, t);
              t_46 = t;
              t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_46)), t_46));
            }
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            t = map_1_0(u_7, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm n_30 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_30;
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm number_node_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, j_48);
  {
    ATerm x_48 (ATerm t)
    {
      ATerm o_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(_id, v_7, t);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(p_30);
        }
      else
        {
          t = o_30;
          {
            ATerm o_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
            if(match_cons(t, sym__2))
              {
                o_48 = ATgetArgument(t, 0);
                q_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_48;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_48 = ATgetFirst((ATermList) t);
                s_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm q_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
                  t = r_48;
                  t = h_136(t);
                  t = term_y_18;
                  v_48 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_48, term_y_18);
                  t = i_12(o_48, v_48, t);
                  t_48 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_48, s_48);
                  t = x_48(t);
                  u_48 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_48), (ATerm) ATmakeAppl(sym__2, o_48, r_48));
                  ;
                  LocalPopChoice(r_30);
                }
              else
                {
                  t = q_30;
                  {
                    ATerm w_48 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, o_48, s_48);
                    t = x_48(t);
                    w_48 = t;
                    t = (ATerm) ATinsert(CheckATermList(w_48), r_48);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = x_48(t);
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_49 = NULL;
      if(match_cons(t, sym_label_2))
        {
          ATerm u_30 = ATgetArgument(t, 0);
          b_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_49;
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
    }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(w_7, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_49 = NULL;
      n_49 = t;
      {
        ATerm x_30 = t;
        if((PushChoice() == 0))
          {
            ATerm z_24 = NULL;
            z_24 = t;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = z_24;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm y_30 = ATgetFirst((ATermList) t);
                    ATerm z_30 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_24;
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_30;
          }
        t = (ATerm) ATinsert(ATempty, n_49);
      }
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
    }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(x_7, t);
  t = concat_0_0(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = topdown_1_0(b_8, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(_id, t);
      t = term_c_31;
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm e_136 (ATerm), ATerm t)
{
  ATerm o_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,y_51 = NULL;
  s_51 = t;
  t = term_k_13;
  t = e_136(t);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_51, s_51);
  {
    ATerm t_53 (ATerm t)
    {
      ATerm u_53 (ATerm z_51, ATerm a_52, ATerm b_52, ATerm c_52, ATerm t)
      {
        ATerm j_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
        t = SSL_explode_term(c_52);
        if(match_cons(t, sym__2))
          {
            j_52 = ATgetArgument(t, 0);
            l_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, b_52, j_52)));
        t = conc_0_0(t);
        m_52 = t;
        t = l_52;
        t = argument_list_0_0(t);
        t = number_nonterminals_0_0(t);
        n_52 = t;
        t = make_0_0(t);
        o_52 = t;
        t = n_52;
        {
          ATerm z_7 (ATerm t)
          {
            ATerm q_52 = NULL;
            q_52 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_51, m_52), q_52);
            t = t_53(t);
            return(t);
          }
          t = map_1_0(z_7, t);
          t = concat_0_0(t);
          p_52 = t;
          t = (ATerm) ATinsert(CheckATermList(p_52), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, z_51, m_52), o_52));
        }
        return(t);
      }
      ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,c_53 = NULL,d_53 = NULL,f_53 = NULL;
      if(match_cons(t, sym__2))
        {
          y_52 = ATgetArgument(t, 0);
          c_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_53;
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm f_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(e_31);
            t = (ATerm) ATempty;
          }
        else
          {
            t = d_31;
            if(match_cons(t, sym__2))
              {
                d_53 = ATgetArgument(t, 0);
                f_53 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_53;
            {
              ATerm g_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_sort_1))
                    {
                      ATerm i_31 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_31);
                  t = y_52;
                  if(match_cons(t, sym__2))
                    {
                      z_52 = ATgetArgument(t, 0);
                      a_53 = ATgetArgument(t, 1);
                      {
                        ATerm j_31 = t;
                        int k_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(k_31);
                          }
                        else
                          {
                            t = j_31;
                            t = u_53(z_52, a_53, d_53, f_53, t);
                          }
                      }
                    }
                  else
                    {
                      t = (ATerm) ATempty;
                    }
                }
              else
                {
                  t = g_31;
                  {
                    ATerm l_31 = t;
                    int m_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_char_class_1))
                          {
                            ATerm n_31 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(m_31);
                        t = y_52;
                        if(match_cons(t, sym__2))
                          {
                            z_52 = ATgetArgument(t, 0);
                            a_53 = ATgetArgument(t, 1);
                            {
                              ATerm o_31 = t;
                              int p_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATempty;
                                  ;
                                  LocalPopChoice(p_31);
                                }
                              else
                                {
                                  t = o_31;
                                  t = u_53(z_52, a_53, d_53, f_53, t);
                                }
                            }
                          }
                        else
                          {
                            t = (ATerm) ATempty;
                          }
                      }
                    else
                      {
                        t = l_31;
                        if(match_cons(t, sym_alt_2))
                          {
                            v_52 = ATgetArgument(t, 0);
                            s_52 = ATgetArgument(t, 1);
                            t = y_52;
                            if(match_cons(t, sym__2))
                              {
                                z_52 = ATgetArgument(t, 0);
                                a_53 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = s_52;
                            if(match_cons(t, sym_alt_2))
                              {
                                t_52 = ATgetArgument(t, 0);
                                u_52 = ATgetArgument(t, 1);
                                {
                                  ATerm q_31 = t;
                                  int r_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm k_53 = NULL,l_53 = NULL,n_53 = NULL;
                                      t = z_52;
                                      if(((o_51 != NULL) && (o_51 != t)))
                                        _fail(t);
                                      else
                                        o_51 = t;
                                      t = a_53;
                                      if(((q_51 != NULL) && (q_51 != t)))
                                        _fail(t);
                                      else
                                        q_51 = t;
                                      t = d_53;
                                      if(((r_51 != NULL) && (r_51 != t)))
                                        _fail(t);
                                      else
                                        r_51 = t;
                                      t = (ATerm) ATmakeAppl(sym_alt_2, v_52, (ATerm) ATmakeAppl(sym_alt_2, t_52, u_52));
                                      t = flat_alt_0_0(t);
                                      k_53 = t;
                                      t = term_s_31;
                                      n_53 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, term_s_31, k_53);
                                      t = b_11(n_53, k_53, t);
                                      l_53 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_52, a_53), (ATerm) ATmakeAppl(sym__2, d_53, l_53));
                                      t = t_53(t);
                                      t = Cons_2_0(a_8, _id, t);
                                      ;
                                      LocalPopChoice(r_31);
                                    }
                                  else
                                    {
                                      t = q_31;
                                      t = u_53(z_52, a_53, d_53, f_53, t);
                                    }
                                }
                              }
                            else
                              {
                                t = u_53(z_52, a_53, d_53, f_53, t);
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_bracket_symbol_1))
                              {
                                v_52 = ATgetArgument(t, 0);
                                t = y_52;
                                if(match_cons(t, sym__2))
                                  {
                                    z_52 = ATgetArgument(t, 0);
                                    a_53 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm t_31 = t;
                                  int u_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_52, a_53), (ATerm) ATmakeAppl(sym__2, d_53, v_52));
                                      t = t_53(t);
                                      ;
                                      LocalPopChoice(u_31);
                                    }
                                  else
                                    {
                                      t = t_31;
                                      t = u_53(z_52, a_53, d_53, f_53, t);
                                    }
                                }
                              }
                            else
                              {
                                t = y_52;
                                if(match_cons(t, sym__2))
                                  {
                                    z_52 = ATgetArgument(t, 0);
                                    a_53 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = u_53(z_52, a_53, d_53, f_53, t);
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
    t = t_53(t);
  }
  return(t);
}
ATerm r_56 (ATerm c_54, ATerm d_54, ATerm f_54, ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
  t = f_54;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL,e_25 = NULL;
        t = d_54;
        t = pp_table_get_0_0(t);
        d_25 = t;
        t = SSL_explode_term(d_25);
        if(match_cons(t, sym__2))
          {
            ATerm x_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_31) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_31 = ATgetArgument(t, 1);
              if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
                {
                  ATerm z_31 = ATgetFirst((ATermList) y_31);
                  ATerm a_32 = (ATerm) ATgetNext((ATermList) y_31);
                  if(((ATgetType(a_32) == AT_LIST) && !(ATisEmpty(a_32))))
                    {
                      e_25 = ATgetFirst((ATermList) a_32);
                      {
                        ATerm b_32 = (ATerm) ATgetNext((ATermList) a_32);
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
        t = e_25;
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        {
          ATerm n_54 = NULL,q_54 = NULL,r_54 = NULL,u_54 = NULL,w_54 = NULL,c_55 = NULL,f_25 = NULL,g_25 = NULL;
          t = d_54;
          t = reverse_acc_2_0(_id, c_8, t);
          {
            ATerm d_8 (ATerm t)
            {
              if(((j_54 != NULL) && (j_54 != t)))
                _fail(t);
              else
                j_54 = t;
              return(t);
            }
            ATerm f_8 (ATerm t)
            {
              t = reverse_acc_2_0(_id, g_8, t);
              if(((i_54 != NULL) && (i_54 != t)))
                _fail(t);
              else
                i_54 = t;
              return(t);
            }
            t = Cons_2_0(d_8, f_8, t);
            t = not_null(i_54);
            t = pp_table_get_0_0(t);
            n_54 = t;
            t = SSL_explode_term(n_54);
            if(match_cons(t, sym__2))
              {
                ATerm c_32 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_32) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm d_32 = ATgetArgument(t, 1);
                  if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
                    {
                      q_54 = ATgetFirst((ATermList) d_32);
                      {
                        ATerm e_32 = (ATerm) ATgetNext((ATermList) d_32);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = q_54;
            if(match_cons(t, sym_Path_2))
              {
                c_55 = ATgetArgument(t, 0);
                r_54 = ATgetArgument(t, 1);
                t = r_54;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_54 = ATgetFirst((ATermList) t);
                    w_54 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_54;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, c_55, (ATerm) ATinsert(ATempty, u_54));
              }
            else
              {
                if(match_cons(t, sym_Path1_1))
                  {
                    c_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, c_55, (ATerm) ATempty);
              }
            k_54 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_54), c_54);
            {
              ATerm h_8 (ATerm t)
              {
                t = k_54;
                return(t);
              }
              t = symbol2abox_1_0(h_8, t);
              t = map_1_0(i_8, t);
              t = d_54;
              t = pp_table_get_0_0(t);
              f_25 = t;
              t = SSL_explode_term(f_25);
              if(match_cons(t, sym__2))
                {
                  ATerm f_32 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_32) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm g_32 = ATgetArgument(t, 1);
                    if(((ATgetType(g_32) == AT_LIST) && !(ATisEmpty(g_32))))
                      {
                        ATerm h_32 = ATgetFirst((ATermList) g_32);
                        ATerm i_32 = (ATerm) ATgetNext((ATermList) g_32);
                        if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
                          {
                            g_25 = ATgetFirst((ATermList) i_32);
                            {
                              ATerm j_32 = (ATerm) ATgetNext((ATermList) i_32);
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
              t = g_25;
            }
          }
        }
      }
  }
  return(t);
}
ATerm s_56 (ATerm l_55, ATerm t_55, ATerm u_55, ATerm v_55, ATerm w_55, ATerm t)
{
  t = w_55;
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL,i_25 = NULL;
        t = v_55;
        t = pp_table_get_0_0(t);
        h_25 = t;
        t = SSL_explode_term(h_25);
        if(match_cons(t, sym__2))
          {
            ATerm m_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_32 = ATgetArgument(t, 1);
              if(((ATgetType(n_32) == AT_LIST) && !(ATisEmpty(n_32))))
                {
                  ATerm o_32 = ATgetFirst((ATermList) n_32);
                  ATerm p_32 = (ATerm) ATgetNext((ATermList) n_32);
                  if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
                    {
                      i_25 = ATgetFirst((ATermList) p_32);
                      {
                        ATerm q_32 = (ATerm) ATgetNext((ATermList) p_32);
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
        t = i_25;
        ;
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        {
          ATerm j_25 = NULL,k_25 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, l_55, t_55, u_55);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(j_8, t);
          t = v_55;
          t = pp_table_get_0_0(t);
          j_25 = t;
          t = SSL_explode_term(j_25);
          if(match_cons(t, sym__2))
            {
              ATerm r_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm s_32 = ATgetArgument(t, 1);
                if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
                  {
                    ATerm t_32 = ATgetFirst((ATermList) s_32);
                    ATerm u_32 = (ATerm) ATgetNext((ATermList) s_32);
                    if(((ATgetType(u_32) == AT_LIST) && !(ATisEmpty(u_32))))
                      {
                        k_25 = ATgetFirst((ATermList) u_32);
                        {
                          ATerm v_32 = (ATerm) ATgetNext((ATermList) u_32);
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
          t = k_25;
        }
      }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      j_55 = ATgetArgument(t, 0);
      k_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(j_55, k_55, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm c_56 = NULL,f_56 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      c_56 = ATgetArgument(t, 0);
      f_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(c_56, f_56, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm h_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,p_56 = NULL,q_56 = NULL;
  h_56 = t;
  if(match_cons(t, sym__2))
    {
      l_56 = ATgetArgument(t, 0);
      q_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_56;
  if(match_cons(t, sym_prod_3))
    {
      m_56 = ATgetArgument(t, 0);
      n_56 = ATgetArgument(t, 1);
      p_56 = ATgetArgument(t, 2);
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_56(l_56, q_56, h_56, t);
            ;
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            t = s_56(m_56, n_56, p_56, q_56, h_56, t);
          }
      }
    }
  else
    {
      t = r_56(l_56, q_56, h_56, t);
    }
  return(t);
}
ATerm prod_3_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,c_57 = NULL,e_57 = NULL,f_57 = NULL,v_0 = NULL,w_0 = NULL;
  f_57 = t;
  if(match_cons(t, sym_prod_3))
    {
      u_56 = ATgetArgument(t, 0);
      x_56 = ATgetArgument(t, 1);
      y_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_57);
  t_56 = t;
  t = u_56;
  t = j_101(t);
  z_56 = t;
  t = x_56;
  t = k_101(t);
  c_57 = t;
  t = y_56;
  t = l_101(t);
  e_57 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, z_56, c_57, e_57);
  v_0 = t;
  t = SSLsetAnnotations(v_0, t_56);
  return(t);
}
ATerm k_8 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_32 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_32) != AT_INT) || (ATgetInt((ATermInt) y_32) != 34)))
        _fail(t);
      {
        ATerm z_32 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(z_32) != AT_LIST) || !(ATisEmpty(z_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
  k_57 = t;
  t = SSL_explode_string(k_57);
  j_57 = t;
  {
    ATerm a_33 = t;
    if((PushChoice() == 0))
      {
        ATerm m_57 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_57 = ATgetFirst((ATermList) t);
            {
              ATerm b_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = m_57;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_33;
      }
    t = j_57;
    {
      ATerm c_33 = t;
      if((PushChoice() == 0))
        {
          t = at_last_1_0(k_8, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_33;
        }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_33)), j_57), (ATerm) ATinsert(ATempty, term_d_33));
      t = concat_0_0(t);
      l_57 = t;
      t = SSL_implode_string(l_57);
    }
  }
  return(t);
}
ATerm cons_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm n_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,c_1 = NULL,e_1 = NULL;
  s_57 = t;
  if(match_cons(t, sym_cons_1))
    {
      q_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_57);
  n_57 = t;
  t = q_57;
  t = h_101(t);
  r_57 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_cons_1, r_57);
  c_1 = t;
  t = SSLsetAnnotations(c_1, n_57);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm c_58 = NULL,g_58 = NULL;
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm h_33 = ATgetArgument(t, 0);
          ATerm i_33 = ATgetArgument(t, 1);
          ATerm j_33 = ATgetArgument(t, 2);
          c_58 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(g_33);
      {
        ATerm j_58 = NULL;
        t = c_58;
        {
          ATerm l_8 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((j_58 != NULL) && (j_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(l_8, t);
          t = not_null(j_58);
        }
      }
    }
  else
    {
      t = f_33;
      {
        ATerm m_58 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm k_33 = ATgetArgument(t, 0);
            ATerm l_33 = ATgetArgument(t, 1);
            g_58 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = g_58;
        {
          ATerm m_8 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((m_58 != NULL) && (m_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(m_8, t);
          t = not_null(m_58);
        }
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,e_59 = NULL;
  if(match_cons(t, sym__2))
    {
      y_58 = ATgetArgument(t, 0);
      e_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_58;
  if(match_cons(t, sym_prod_fun_4))
    {
      z_58 = ATgetArgument(t, 0);
      a_59 = ATgetArgument(t, 1);
      b_59 = ATgetArgument(t, 2);
      v_58 = ATgetArgument(t, 3);
      t = v_58;
      if(match_cons(t, sym_attrs_1))
        {
          u_58 = ATgetArgument(t, 0);
          {
            ATerm l_59 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, u_58, e_59);
            t = conc_0_0(t);
            l_59 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, z_58, a_59, b_59, (ATerm) ATmakeAppl(sym_attrs_1, l_59));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, z_58, a_59, b_59, (ATerm) ATmakeAppl(sym_attrs_1, e_59));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          z_58 = ATgetArgument(t, 0);
          a_59 = ATgetArgument(t, 1);
          b_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_59;
      if(match_cons(t, sym_attrs_1))
        {
          w_58 = ATgetArgument(t, 0);
          {
            ATerm c_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, w_58, e_59);
            t = conc_0_0(t);
            c_60 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, z_58, a_59, (ATerm) ATmakeAppl(sym_attrs_1, c_60));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, z_58, a_59, (ATerm) ATmakeAppl(sym_attrs_1, e_59));
        }
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_60 = NULL,n_60 = NULL,q_60 = NULL;
      l_60 = t;
      if(match_int(t, 34))
        {
          ATerm o_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_d_33), term_q_33);
              ;
              LocalPopChoice(p_33);
            }
          else
            {
              t = o_33;
              t = (ATerm) ATinsert(ATempty, l_60);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm r_33 = t;
              int s_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_33), term_q_33);
                  ;
                  LocalPopChoice(s_33);
                }
              else
                {
                  t = r_33;
                  t = (ATerm) ATinsert(ATempty, l_60);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_60 = ATgetFirst((ATermList) t);
                  q_60 = (ATerm) ATgetNext((ATermList) t);
                  t = n_60;
                  if(match_int(t, 34))
                    {
                      ATerm v_33 = t;
                      int y_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, l_60);
                          ;
                          LocalPopChoice(y_33);
                        }
                      else
                        {
                          t = v_33;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_60), term_d_33), term_q_33);
                        }
                    }
                  else
                    {
                      if(match_int(t, 92))
                        {
                          ATerm k_34 = t;
                          int l_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, l_60);
                              ;
                              LocalPopChoice(l_34);
                            }
                          else
                            {
                              t = k_34;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(q_60), term_q_33), term_q_33);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm m_34 = t;
                              int n_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, l_60);
                                  ;
                                  LocalPopChoice(n_34);
                                }
                              else
                                {
                                  t = m_34;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(q_60), term_o_34), term_q_33);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, l_60);
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, l_60);
                }
            }
        }
      t = Cons_2_0(_id, n_8, t);
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      {
        ATerm r_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(s_34);
          }
        else
          {
            t = r_34;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,w_25 = NULL;
  t_25 = t;
  if(match_int(t, 34))
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_d_33), term_q_33);
          ;
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          t = (ATerm) ATinsert(ATempty, t_25);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm a_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_q_33), term_q_33);
              ;
              LocalPopChoice(d_35);
            }
          else
            {
              t = a_35;
              t = (ATerm) ATinsert(ATempty, t_25);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_25 = ATgetFirst((ATermList) t);
              w_25 = (ATerm) ATgetNext((ATermList) t);
              t = u_25;
              if(match_int(t, 34))
                {
                  ATerm e_35 = t;
                  int f_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, t_25);
                      ;
                      LocalPopChoice(f_35);
                    }
                  else
                    {
                      t = e_35;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(w_25), term_d_33), term_q_33);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm g_35 = t;
                      int i_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, t_25);
                          ;
                          LocalPopChoice(i_35);
                        }
                      else
                        {
                          t = g_35;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_25), term_q_33), term_q_33);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm j_35 = t;
                          int k_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, t_25);
                              ;
                              LocalPopChoice(k_35);
                            }
                          else
                            {
                              t = j_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_25), term_o_34), term_q_33);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATinsert(ATempty, t_25);
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, t_25);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_62 = NULL,s_25 = NULL;
      p_62 = t;
      t = SSL_explode_string(p_62);
      t = map_1_0(o_8, t);
      t = concat_0_0(t);
      s_25 = t;
      t = SSL_implode_string(s_25);
      ;
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      {
        ATerm q_26 = NULL,r_26 = NULL;
        q_26 = t;
        t = SSL_explode_string(q_26);
        t = escape_chars_0_0(t);
        r_26 = t;
        t = SSL_implode_string(r_26);
      }
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm n_35 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_35;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm f_63 = NULL,t_26 = NULL;
  f_63 = t;
  t = SSL_explode_string(f_63);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_26 = ATgetFirst((ATermList) t);
      {
        ATerm o_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_26;
  {
    ATerm r_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_26, term_u_35);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_v_35, t_26);
        t = leq_0_0(t);
        ;
        LocalPopChoice(t_35);
      }
    else
      {
        t = r_35;
        t = (ATerm) ATmakeAppl(sym__2, t_26, term_w_35);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_y_35, t_26);
        t = leq_0_0(t);
      }
    t = f_63;
  }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm v_62 = NULL,e_63 = NULL,z_26 = NULL,a_27 = NULL,e_27 = NULL,h_27 = NULL,k_27 = NULL;
  t = filter_1_0(u_8, t);
  t = Cons_2_0(v_8, _id, t);
  z_26 = t;
  t = term_z_35;
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, z_26);
  t = f_11(a_27, z_26, t);
  e_63 = t;
  t = SSL_concat_strings(e_63);
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_62, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_36), term_o_36), term_n_36), term_k_36), term_j_36), term_i_36), term_h_36), term_g_36), term_f_36), term_e_36), term_d_36), term_b_36), term_a_36));
  {
    ATerm q_36 = t;
    if((PushChoice() == 0))
      {
        ATerm i_63 = NULL,j_63 = NULL;
        if(match_cons(t, sym__2))
          {
            i_63 = ATgetArgument(t, 0);
            j_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_63;
        {
          ATerm w_8 (ATerm t)
          {
            if((i_63 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(w_8, t);
          t = (ATerm) ATmakeAppl(sym__2, i_63, j_63);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_36;
      }
    t = v_62;
    t = escape_0_0(t);
    e_27 = t;
    t = SSL_explode_string(e_27);
    k_27 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_33)), k_27), (ATerm) ATinsert(ATempty, term_d_33));
    t = concat_0_0(t);
    h_27 = t;
    t = SSL_implode_string(h_27);
  }
  return(t);
}
ATerm a_64 (ATerm o_63, ATerm t)
{
  ATerm q_63 = NULL;
  t = SSL_explode_term(o_63);
  if(match_cons(t, sym__2))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_63;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  u_63 = t;
  if(match_cons(t, sym__2))
    {
      s_63 = ATgetArgument(t, 0);
      t_63 = ATgetArgument(t, 1);
      {
        ATerm s_36 = t;
        int t_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_8 (ATerm t)
            {
              t = t_63;
              return(t);
            }
            t = s_63;
            t = at_end_1_0(x_8, t);
            ;
            LocalPopChoice(t_36);
          }
        else
          {
            t = s_36;
            t = a_64(u_63, t);
          }
      }
    }
  else
    {
      t = a_64(u_63, t);
    }
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_y_36);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_37);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_37);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
  p_64 = t;
  if(match_cons(t, sym_cf_1))
    {
      n_64 = ATgetArgument(t, 0);
      t = n_64;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          n_64 = ATgetArgument(t, 0);
          t = n_64;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_f_37);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  n_64 = ATgetArgument(t, 0);
                  o_64 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(o_64), n_64);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      n_64 = ATgetArgument(t, 0);
                      t = n_64;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(y_8, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          n_64 = ATgetArgument(t, 0);
                          t = n_64;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(a_9, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              n_64 = ATgetArgument(t, 0);
                              t = n_64;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(b_9, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  n_64 = ATgetArgument(t, 0);
                                  o_64 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_64 = NULL,a_65 = NULL;
                                    t = n_64;
                                    t = Sym2Strs_0_0(t);
                                    z_64 = t;
                                    t = o_64;
                                    t = Sym2Strs_0_0(t);
                                    a_65 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_37)), a_65), z_64);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      n_64 = ATgetArgument(t, 0);
                                      o_64 = ATgetArgument(t, 1);
                                      {
                                        ATerm d_65 = NULL,e_65 = NULL;
                                        t = n_64;
                                        t = Sym2Strs_0_0(t);
                                        d_65 = t;
                                        t = o_64;
                                        t = Sym2Strs_0_0(t);
                                        e_65 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_37)), e_65), d_65);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm g_37 = t;
                                      int h_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              n_64 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_37 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(h_37);
                                          {
                                            ATerm g_65 = NULL;
                                            t = n_64;
                                            t = Sym2Strs_0_0(t);
                                            g_65 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_37)), g_65);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = g_37;
                                          {
                                            ATerm l_37 = t;
                                            int m_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    n_64 = ATgetArgument(t, 0);
                                                    o_64 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_37 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(m_37);
                                                {
                                                  ATerm k_65 = NULL,l_65 = NULL;
                                                  t = n_64;
                                                  t = Sym2Strs_0_0(t);
                                                  k_65 = t;
                                                  t = o_64;
                                                  t = Sym2Strs_0_0(t);
                                                  l_65 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_37)), l_65), k_65);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = l_37;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    n_64 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_65 = NULL;
                                                      t = n_64;
                                                      t = Sym2Strs_0_0(t);
                                                      n_65 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, n_65), (ATerm) ATinsert(ATempty, term_o_37));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        n_64 = ATgetArgument(t, 0);
                                                        o_64 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_65 = NULL,r_65 = NULL;
                                                          t = n_64;
                                                          t = Sym2Strs_0_0(t);
                                                          q_65 = t;
                                                          t = o_64;
                                                          t = Sym2Strs_0_0(t);
                                                          r_65 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_65), (ATerm) ATinsert(ATempty, term_p_37)), q_65);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            n_64 = ATgetArgument(t, 0);
                                                            o_64 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_65 = NULL,v_65 = NULL;
                                                              t = n_64;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              u_65 = t;
                                                              t = o_64;
                                                              t = Sym2Strs_0_0(t);
                                                              v_65 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_65), (ATerm) ATinsert(ATempty, term_q_37)), u_65);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                n_64 = ATgetArgument(t, 0);
                                                                o_64 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm y_65 = NULL,z_65 = NULL;
                                                                  t = n_64;
                                                                  t = Sym2Strs_0_0(t);
                                                                  y_65 = t;
                                                                  t = o_64;
                                                                  t = Sym2Strs_0_0(t);
                                                                  z_65 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_65), (ATerm) ATinsert(ATempty, term_r_37)), y_65);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    n_64 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm b_66 = NULL;
                                                                      t = n_64;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      b_66 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(b_66), term_w_37);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        n_64 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, n_64);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            n_64 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm p_27 = NULL;
                                                                              t = n_64;
                                                                              {
                                                                                ATerm x_37 = t;
                                                                                int y_37 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(y_37);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_37;
                                                                                  }
                                                                                p_27 = t;
                                                                                t = (ATerm) ATinsert(ATempty, p_27);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm z_37 = t;
                                                                            int e_38 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    n_64 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm f_38 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(e_38);
                                                                                {
                                                                                  ATerm w_27 = NULL;
                                                                                  t = n_64;
                                                                                  {
                                                                                    ATerm i_38 = t;
                                                                                    int j_38 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(j_38);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_38;
                                                                                      }
                                                                                    w_27 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, w_27);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = z_37;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_k_38);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
ATerm c_9 (ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(c_9, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_38 = ATgetFirst((ATermList) t);
      if(((ATgetType(r_38) != AT_INT) || (ATgetInt((ATermInt) r_38) != 34)))
        _fail(t);
      {
        ATerm s_38 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(s_38) != AT_LIST) || !(ATisEmpty(s_38))))
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
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  v_70 = t;
  t = SSL_explode_string(v_70);
  u_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_70 = ATgetFirst((ATermList) t);
      {
        ATerm t_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_70;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = u_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_38 = ATgetFirst((ATermList) t);
      x_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_70;
  t = at_last_1_0(d_9, t);
  y_70 = t;
  t = SSL_implode_string(y_70);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm v_38 = t;
  if((PushChoice() == 0))
    {
      ATerm k_66 = NULL,l_66 = NULL;
      if(match_cons(t, sym__2))
        {
          k_66 = ATgetArgument(t, 0);
          l_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, k_66, l_66);
      {
        ATerm w_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(k_66, l_66);
            ;
            LocalPopChoice(y_38);
          }
        else
          {
            t = w_38;
            t = SSL_gtr(k_66, l_66);
          }
        t = (ATerm) ATmakeAppl(sym__2, k_66, l_66);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_38;
    }
  return(t);
}
ATerm z_66 (ATerm v_66, ATerm t)
{
  t = SSL_explode_string(v_66);
  {
    ATerm z_38 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(e_9, t);
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
ATerm e_9 (ATerm t)
{
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_27 = NULL;
      z_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_27, term_d_39);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_39, z_27);
      t = leq_0_0(t);
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = b_39;
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_28 = NULL;
            a_28 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_28, term_u_35);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_v_35, a_28);
            t = leq_0_0(t);
            ;
            LocalPopChoice(g_39);
          }
        else
          {
            t = f_39;
            {
              ATerm h_39 = t;
              int i_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_28 = NULL;
                  b_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_28, term_w_35);
                  t = leq_0_0(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_y_35, b_28);
                  t = leq_0_0(t);
                  ;
                  LocalPopChoice(i_39);
                }
              else
                {
                  t = h_39;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_k_13;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm y_66 = NULL;
  y_66 = t;
  if(match_string(t, "|="))
    {
      ATerm j_39 = t;
      int k_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_66(y_66, t);
          ;
          LocalPopChoice(k_39);
        }
      else
        {
          t = j_39;
          t = term_l_39;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm n_39 = t;
          int o_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_66(y_66, t);
              ;
              LocalPopChoice(o_39);
            }
          else
            {
              t = n_39;
              t = term_p_39;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm q_39 = t;
              int r_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_66(y_66, t);
                  ;
                  LocalPopChoice(r_39);
                }
              else
                {
                  t = q_39;
                  t = term_s_39;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm t_39 = t;
                  int u_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_66(y_66, t);
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
                  if(match_string(t, "<<="))
                    {
                      ATerm w_39 = t;
                      int x_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_66(y_66, t);
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
                      if(match_string(t, "-="))
                        {
                          ATerm z_39 = t;
                          int b_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = z_66(y_66, t);
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
                          if(match_string(t, "+="))
                            {
                              ATerm e_40 = t;
                              int f_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = z_66(y_66, t);
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
                              if(match_string(t, "%="))
                                {
                                  ATerm h_40 = t;
                                  int i_40 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_66(y_66, t);
                                      ;
                                      LocalPopChoice(i_40);
                                    }
                                  else
                                    {
                                      t = h_40;
                                      t = term_j_40;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm k_40 = t;
                                      int l_40 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = z_66(y_66, t);
                                          ;
                                          LocalPopChoice(l_40);
                                        }
                                      else
                                        {
                                          t = k_40;
                                          t = term_m_40;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm s_40 = t;
                                          int u_40 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_66(y_66, t);
                                              ;
                                              LocalPopChoice(u_40);
                                            }
                                          else
                                            {
                                              t = s_40;
                                              t = term_v_40;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm w_40 = t;
                                              int x_40 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = z_66(y_66, t);
                                                  ;
                                                  LocalPopChoice(x_40);
                                                }
                                              else
                                                {
                                                  t = w_40;
                                                  t = term_y_40;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm z_40 = t;
                                                  int a_41 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = z_66(y_66, t);
                                                      ;
                                                      LocalPopChoice(a_41);
                                                    }
                                                  else
                                                    {
                                                      t = z_40;
                                                      t = term_b_41;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm c_41 = t;
                                                      int d_41 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = z_66(y_66, t);
                                                          ;
                                                          LocalPopChoice(d_41);
                                                        }
                                                      else
                                                        {
                                                          t = c_41;
                                                          t = term_e_41;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm f_41 = t;
                                                          int g_41 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = z_66(y_66, t);
                                                              ;
                                                              LocalPopChoice(g_41);
                                                            }
                                                          else
                                                            {
                                                              t = f_41;
                                                              t = term_r_37;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm h_41 = t;
                                                              int i_41 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = z_66(y_66, t);
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
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm k_41 = t;
                                                                  int p_41 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = z_66(y_66, t);
                                                                      ;
                                                                      LocalPopChoice(p_41);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_41;
                                                                      t = term_j_41;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm q_41 = t;
                                                                      int t_41 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = z_66(y_66, t);
                                                                          ;
                                                                          LocalPopChoice(t_41);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = q_41;
                                                                          t = term_u_41;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm z_41 = t;
                                                                          int a_42 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = z_66(y_66, t);
                                                                              ;
                                                                              LocalPopChoice(a_42);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_41;
                                                                              t = term_b_42;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm c_42 = t;
                                                                              int d_42 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = z_66(y_66, t);
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
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm f_42 = t;
                                                                                  int g_42 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = z_66(y_66, t);
                                                                                      ;
                                                                                      LocalPopChoice(g_42);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = f_42;
                                                                                      t = term_h_42;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm i_42 = t;
                                                                                      int j_42 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = z_66(y_66, t);
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
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm m_42 = t;
                                                                                          int n_42 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = z_66(y_66, t);
                                                                                              ;
                                                                                              LocalPopChoice(n_42);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = m_42;
                                                                                              t = term_o_42;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm p_42 = t;
                                                                                              int q_42 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = z_66(y_66, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(q_42);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = p_42;
                                                                                                  t = term_s_42;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm t_42 = t;
                                                                                                  int u_42 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = z_66(y_66, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(u_42);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_42;
                                                                                                      t = term_v_42;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm w_42 = t;
                                                                                                      int x_42 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = z_66(y_66, t);
                                                                                                          ;
                                                                                                          LocalPopChoice(x_42);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = w_42;
                                                                                                          t = term_y_42;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm z_42 = t;
                                                                                                          int a_43 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = z_66(y_66, t);
                                                                                                              ;
                                                                                                              LocalPopChoice(a_43);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = z_42;
                                                                                                              t = term_f_43;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm g_43 = t;
                                                                                                              int l_43 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = z_66(y_66, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(l_43);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_43;
                                                                                                                  t = term_m_43;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm n_43 = t;
                                                                                                                  int o_43 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = z_66(y_66, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(o_43);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = n_43;
                                                                                                                      t = term_t_43;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm x_43 = t;
                                                                                                                      int a_44 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = z_66(y_66, t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(a_44);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = x_43;
                                                                                                                          t = term_p_37;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm b_44 = t;
                                                                                                                          int c_44 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = z_66(y_66, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(c_44);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_44;
                                                                                                                              t = term_d_44;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm f_44 = t;
                                                                                                                              int i_44 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = z_66(y_66, t);
                                                                                                                                  ;
                                                                                                                                  LocalPopChoice(i_44);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = f_44;
                                                                                                                                  t = term_l_44;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm q_44 = t;
                                                                                                                                  int s_44 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = z_66(y_66, t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(s_44);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = q_44;
                                                                                                                                      t = term_t_44;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm u_44 = t;
                                                                                                                                      int v_44 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = z_66(y_66, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(v_44);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = u_44;
                                                                                                                                          t = term_w_44;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm x_44 = t;
                                                                                                                                          int y_44 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = z_66(y_66, t);
                                                                                                                                              ;
                                                                                                                                              LocalPopChoice(y_44);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = x_44;
                                                                                                                                              t = term_z_44;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm a_45 = t;
                                                                                                                                              int b_45 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = z_66(y_66, t);
                                                                                                                                                  ;
                                                                                                                                                  LocalPopChoice(b_45);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = a_45;
                                                                                                                                                  t = term_c_45;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm f_45 = t;
                                                                                                                                                  int k_45 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = z_66(y_66, t);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(k_45);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = f_45;
                                                                                                                                                      t = term_l_45;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm m_45 = t;
                                                                                                                                                      int n_45 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = z_66(y_66, t);
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(n_45);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = m_45;
                                                                                                                                                          t = term_o_45;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm p_45 = t;
                                                                                                                                                          int q_45 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = z_66(y_66, t);
                                                                                                                                                              ;
                                                                                                                                                              LocalPopChoice(q_45);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = p_45;
                                                                                                                                                              t = term_t_45;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = z_66(y_66, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  t = p_44;
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
        {
          ATerm f_9 (ATerm t)
          {
            ATerm y_45 = t;
            int z_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_45);
              }
            else
              {
                t = y_45;
                {
                  ATerm a_67 = NULL;
                  t = Cons_2_0(_id, f_9, t);
                  a_67 = t;
                  t = (ATerm) ATinsert(CheckATermList(a_67), o_44);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, f_9, t);
        }
      }
  }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_67 = ATgetFirst((ATermList) t);
      o_67 = (ATerm) ATgetNext((ATermList) t);
      t = o_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_67 = ATgetFirst((ATermList) t);
          m_67 = (ATerm) ATgetNext((ATermList) t);
          t = l_67;
          if(match_int(t, 34))
            {
              t = n_67;
              if(match_int(t, 92))
                {
                  ATerm a_46 = t;
                  int b_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_67 = NULL;
                      t = m_67;
                      t = De_Escape_0_0(t);
                      t_67 = t;
                      t = (ATerm) ATinsert(CheckATermList(t_67), term_d_33);
                      ;
                      LocalPopChoice(b_46);
                    }
                  else
                    {
                      t = a_46;
                      {
                        ATerm w_67 = NULL;
                        t = o_67;
                        t = De_Escape_0_0(t);
                        w_67 = t;
                        t = (ATerm) ATinsert(CheckATermList(w_67), n_67);
                      }
                    }
                }
              else
                {
                  ATerm e_68 = NULL;
                  t = o_67;
                  t = De_Escape_0_0(t);
                  e_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_68), n_67);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = n_67;
                  if(match_int(t, 92))
                    {
                      ATerm c_46 = t;
                      int d_46 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_68 = NULL;
                          t = m_67;
                          t = De_Escape_0_0(t);
                          g_68 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_68), term_q_33);
                          ;
                          LocalPopChoice(d_46);
                        }
                      else
                        {
                          t = c_46;
                          {
                            ATerm j_68 = NULL;
                            t = o_67;
                            t = De_Escape_0_0(t);
                            j_68 = t;
                            t = (ATerm) ATinsert(CheckATermList(j_68), n_67);
                          }
                        }
                    }
                  else
                    {
                      ATerm m_68 = NULL;
                      t = o_67;
                      t = De_Escape_0_0(t);
                      m_68 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_68), n_67);
                    }
                }
              else
                {
                  ATerm p_68 = NULL;
                  t = o_67;
                  t = De_Escape_0_0(t);
                  p_68 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_68), n_67);
                }
            }
        }
      else
        {
          ATerm s_68 = NULL;
          t = o_67;
          t = De_Escape_0_0(t);
          s_68 = t;
          t = (ATerm) ATinsert(CheckATermList(s_68), n_67);
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
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
  a_69 = t;
  t = SSL_explode_string(a_69);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_69 = ATgetFirst((ATermList) t);
      f_69 = (ATerm) ATgetNext((ATermList) t);
      t = f_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_69 = ATgetFirst((ATermList) t);
          d_69 = (ATerm) ATgetNext((ATermList) t);
          t = c_69;
          if(match_int(t, 34))
            {
              t = e_69;
              if(match_int(t, 92))
                {
                  ATerm e_46 = t;
                  int f_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_69 = NULL;
                      t = d_69;
                      t = De_Escape_0_0(t);
                      m_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_69), term_d_33);
                      ;
                      LocalPopChoice(f_46);
                    }
                  else
                    {
                      t = e_46;
                      {
                        ATerm p_69 = NULL;
                        t = f_69;
                        t = De_Escape_0_0(t);
                        p_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_69), e_69);
                      }
                    }
                }
              else
                {
                  ATerm s_69 = NULL;
                  t = f_69;
                  t = De_Escape_0_0(t);
                  s_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_69), e_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = e_69;
                  if(match_int(t, 92))
                    {
                      ATerm h_46 = t;
                      int i_46 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_69 = NULL;
                          t = d_69;
                          t = De_Escape_0_0(t);
                          u_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(u_69), term_q_33);
                          ;
                          LocalPopChoice(i_46);
                        }
                      else
                        {
                          t = h_46;
                          {
                            ATerm x_69 = NULL;
                            t = f_69;
                            t = De_Escape_0_0(t);
                            x_69 = t;
                            t = (ATerm) ATinsert(CheckATermList(x_69), e_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm a_70 = NULL;
                      t = f_69;
                      t = De_Escape_0_0(t);
                      a_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_70), e_69);
                    }
                }
              else
                {
                  ATerm d_70 = NULL;
                  t = f_69;
                  t = De_Escape_0_0(t);
                  d_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_70), e_69);
                }
            }
        }
      else
        {
          ATerm g_70 = NULL;
          t = f_69;
          t = De_Escape_0_0(t);
          g_70 = t;
          t = (ATerm) ATinsert(CheckATermList(g_70), e_69);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  b_69 = t;
  t = SSL_implode_string(b_69);
  return(t);
}
ATerm list_ana_1_0 (ATerm s_137 (ATerm), ATerm t)
{
  ATerm n_70 (ATerm t)
  {
    ATerm j_46 = t;
    int k_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_70 = NULL;
        t = s_137(t);
        i_70 = t;
        t = (ATerm) ATinsert(ATempty, i_70);
        ;
        LocalPopChoice(k_46);
      }
    else
      {
        t = j_46;
        {
          ATerm l_46 = t;
          int m_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_70 = NULL,i_28 = NULL;
              m_70 = t;
              t = SSL_explode_term(m_70);
              if(match_cons(t, sym__2))
                {
                  ATerm n_46 = ATgetArgument(t, 0);
                  i_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_28;
              t = filter_1_0(n_70, t);
              t = concat_0_0(t);
              ;
              LocalPopChoice(m_46);
            }
          else
            {
              t = l_46;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = n_70(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm q_70 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      q_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_70;
  {
    ATerm o_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        ;
        LocalPopChoice(p_46);
      }
    else
      {
        t = o_46;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm p_70 = NULL,m_28 = NULL,n_28 = NULL;
  t = list_ana_1_0(g_9, t);
  m_28 = t;
  t = term_z_35;
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, m_28);
  t = f_11(n_28, m_28, t);
  p_70 = t;
  t = SSL_concat_strings(p_70);
  {
    ATerm w_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        ;
        LocalPopChoice(y_46);
      }
    else
      {
        t = w_46;
      }
  }
  return(t);
}
ATerm f_72 (ATerm g_71, ATerm h_71, ATerm i_71, ATerm t)
{
  ATerm m_71 = NULL;
  t = i_71;
  {
    ATerm z_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_71;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        m_71 = t;
        ;
        LocalPopChoice(a_47);
      }
    else
      {
        t = z_46;
        {
          ATerm b_47 = t;
          int d_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_71 = NULL,o_71 = NULL;
              t = (ATerm) ATinsert(ATempty, h_71);
              t = syms2strs_0_0(t);
              n_71 = t;
              t = g_71;
              t = filter_1_0(lit2str_0_0, t);
              o_71 = t;
              t = filter_1_0(h_9, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_47 = ATgetFirst((ATermList) t);
                  ATerm f_47 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, n_71, o_71);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              m_71 = t;
              ;
              LocalPopChoice(d_47);
            }
          else
            {
              t = b_47;
              {
                ATerm j_47 = t;
                int l_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_71;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    m_71 = t;
                    ;
                    LocalPopChoice(l_47);
                  }
                else
                  {
                    t = j_47;
                    {
                      ATerm q_71 = NULL,r_71 = NULL;
                      t = (ATerm) ATinsert(ATempty, h_71);
                      t = syms2strs_0_0(t);
                      q_71 = t;
                      t = term_k_13;
                      t = new_0_0(t);
                      r_71 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_71, (ATerm) ATinsert(ATinsert(ATempty, r_71), term_m_47));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      m_71 = t;
                    }
                  }
              }
            }
        }
      }
    t = m_71;
  }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm n_47 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_47;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,a_72 = NULL;
  t_71 = t;
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            u_71 = ATgetArgument(t, 0);
            {
              ATerm s_47 = ATgetArgument(t, 1);
            }
            {
              ATerm u_47 = ATgetArgument(t, 2);
            }
            {
              ATerm v_47 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_47);
        t = u_71;
        {
          ATerm w_47 = t;
          int x_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_29 = NULL,q_29 = NULL;
              ATerm z_47 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_47;
                }
              t = SSL_explode_string(u_71);
              q_29 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_33)), q_29), (ATerm) ATinsert(ATempty, term_d_33));
              t = concat_0_0(t);
              p_29 = t;
              t = SSL_implode_string(p_29);
              ;
              LocalPopChoice(x_47);
            }
          else
            {
              t = w_47;
            }
        }
      }
    else
      {
        t = o_47;
        if(match_cons(t, sym_prod_3))
          {
            u_71 = ATgetArgument(t, 0);
            a_72 = ATgetArgument(t, 1);
            {
              ATerm a_48 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_71;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm b_48 = t;
            int c_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_72(u_71, a_72, t_71, t);
                ;
                LocalPopChoice(c_48);
              }
            else
              {
                t = b_48;
                {
                  ATerm d_72 = NULL;
                  t = (ATerm) ATinsert(ATempty, a_72);
                  t = syms2strs_0_0(t);
                  d_72 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_72, (ATerm) ATinsert(ATempty, term_e_48));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = f_72(u_71, a_72, t_71, t);
          }
      }
  }
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,l_72 = NULL,p_72 = NULL,f_1 = NULL,g_1 = NULL;
  p_72 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      h_72 = ATgetArgument(t, 0);
      i_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_72);
  g_72 = t;
  t = h_72;
  t = w_100(t);
  j_72 = t;
  t = i_72;
  t = x_100(t);
  l_72 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, j_72, l_72);
  f_1 = t;
  t = SSLsetAnnotations(f_1, g_72);
  return(t);
}
ATerm iter_sep_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,h_1 = NULL,i_1 = NULL;
  x_72 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      t_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_72);
  s_72 = t;
  t = t_72;
  t = u_100(t);
  v_72 = t;
  t = u_72;
  t = v_100(t);
  w_72 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_iter_sep_2, v_72, w_72);
  h_1 = t;
  t = SSLsetAnnotations(h_1, s_72);
  return(t);
}
ATerm iter_star_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,j_1 = NULL,k_1 = NULL;
  d_73 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      b_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_73);
  a_73 = t;
  t = b_73;
  t = z_100(t);
  c_73 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_iter_star_1, c_73);
  j_1 = t;
  t = SSLsetAnnotations(j_1, a_73);
  return(t);
}
ATerm iter_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,n_1 = NULL,t_1 = NULL;
  j_73 = t;
  if(match_cons(t, sym_iter_1))
    {
      h_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_73);
  g_73 = t;
  t = h_73;
  t = y_100(t);
  i_73 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_iter_1, i_73);
  n_1 = t;
  t = SSLsetAnnotations(n_1, g_73);
  return(t);
}
ATerm alt_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,v_1 = NULL,w_1 = NULL;
  r_73 = t;
  if(match_cons(t, sym_alt_2))
    {
      n_73 = ATgetArgument(t, 0);
      o_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_73);
  m_73 = t;
  t = n_73;
  t = a_101(t);
  p_73 = t;
  t = o_73;
  t = b_101(t);
  q_73 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_alt_2, p_73, q_73);
  v_1 = t;
  t = SSLsetAnnotations(v_1, m_73);
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm f_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
      ;
      LocalPopChoice(g_48);
    }
  else
    {
      t = f_48;
      {
        ATerm h_48 = t;
        int i_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = alt_2_0(syntaxless_sort_0_0, syntaxless_sort_0_0, t);
            ;
            LocalPopChoice(i_48);
          }
        else
          {
            t = h_48;
            {
              ATerm k_48 = t;
              int l_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = opt_1_0(syntaxless_sort_0_0, t);
                  ;
                  LocalPopChoice(l_48);
                }
              else
                {
                  t = k_48;
                  {
                    ATerm m_48 = t;
                    int n_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = iter_1_0(syntaxless_sort_0_0, t);
                        ;
                        LocalPopChoice(n_48);
                      }
                    else
                      {
                        t = m_48;
                        {
                          ATerm p_48 = t;
                          int y_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_star_1_0(syntaxless_sort_0_0, t);
                              ;
                              LocalPopChoice(y_48);
                            }
                          else
                            {
                              t = p_48;
                              {
                                ATerm z_48 = t;
                                int a_49 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = iter_sep_2_0(syntaxless_sort_0_0, _id, t);
                                    ;
                                    LocalPopChoice(a_49);
                                  }
                                else
                                  {
                                    t = z_48;
                                    t = iter_star_sep_2_0(syntaxless_sort_0_0, _id, t);
                                  }
                              }
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
ATerm i_9 (ATerm t)
{
  t = Cons_2_0(syntaxless_sort_0_0, j_9, t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm v_73 = NULL;
  t = prod_3_0(i_9, _id, _id, t);
  v_73 = t;
  t = term_c_49;
  t = get_options_0_0(t);
  t = oncetd_1_0(k_9, t);
  t = v_73;
  return(t);
}
ATerm l_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm y_73 = NULL,c_74 = NULL;
  ATerm d_49 = t;
  int e_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm f_49 = ATgetArgument(t, 0);
          ATerm g_49 = ATgetArgument(t, 1);
          ATerm h_49 = ATgetArgument(t, 2);
          y_73 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(e_49);
      t = y_73;
      t = oncetd_1_0(l_9, t);
      t = term_k_13;
    }
  else
    {
      t = d_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm i_49 = ATgetArgument(t, 0);
          ATerm j_49 = ATgetArgument(t, 1);
          c_74 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_74;
      t = oncetd_1_0(m_9, t);
      t = term_k_13;
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm i_74 = NULL,m_74 = NULL;
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm m_49 = ATgetArgument(t, 0);
          ATerm o_49 = ATgetArgument(t, 1);
          ATerm p_49 = ATgetArgument(t, 2);
          i_74 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(l_49);
      t = i_74;
      t = oncetd_1_0(n_9, t);
      t = term_k_13;
    }
  else
    {
      t = k_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm q_49 = ATgetArgument(t, 0);
          ATerm r_49 = ATgetArgument(t, 1);
          m_74 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_74;
      t = oncetd_1_0(o_9, t);
      t = term_k_13;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm t_74 = NULL;
  t_74 = t;
  {
    ATerm s_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_33 = NULL;
        t = t_74;
        {
          ATerm w_49 = t;
          if((PushChoice() == 0))
            {
              ATerm x_49 = t;
              int e_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  ;
                  LocalPopChoice(e_50);
                }
              else
                {
                  t = x_49;
                  {
                    ATerm f_50 = t;
                    int g_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        ;
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
                              t = is_reject_0_0(t);
                              ;
                              LocalPopChoice(i_50);
                            }
                          else
                            {
                              t = h_50;
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
              t = w_49;
            }
          t = t_74;
          t = mk_constr_0_0(t);
          e_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_74, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, e_33)));
          t = add_attributes_0_0(t);
        }
        ;
        LocalPopChoice(v_49);
      }
    else
      {
        t = s_49;
        {
          ATerm v_74 = NULL;
          t = t_74;
          t = get_constr_0_0(t);
          v_74 = t;
          t = t_74;
          {
            ATerm p_9 (ATerm t)
            {
              ATerm q_9 (ATerm t)
              {
                t = v_74;
                t = uq2q_0_0(t);
                return(t);
              }
              t = cons_1_0(q_9, t);
              return(t);
            }
            t = oncetd_1_0(p_9, t);
          }
        }
      }
  }
  return(t);
}
ATerm sort_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,y_1 = NULL,e_2 = NULL;
  a_75 = t;
  if(match_cons(t, sym_sort_1))
    {
      y_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_75);
  x_74 = t;
  t = y_74;
  t = d_101(t);
  z_74 = t;
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_sort_1, z_74);
  y_1 = t;
  t = SSLsetAnnotations(y_1, x_74);
  return(t);
}
ATerm k_11 (ATerm n_38, ATerm o_38, ATerm m_38, ATerm l_38, ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL;
  ATerm j_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_38;
      {
        ATerm u_9 (ATerm t)
        {
          if(match_cons(t, sym_cons_1))
            {
              if(((d_75 != NULL) && (d_75 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(u_9, t);
      }
      ;
      LocalPopChoice(k_50);
    }
  else
    {
      t = j_50;
      {
        ATerm m_50 = t;
        int n_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_38;
            t = sort_1_0(_id, t);
            t = (ATerm) ATmakeAppl(sym_prod_3, n_38, o_38, m_38);
            t = prodcons_0_0(t);
            {
              ATerm v_9 (ATerm t)
              {
                ATerm w_9 (ATerm t)
                {
                  if(match_cons(t, sym_cons_1))
                    {
                      if(((d_75 != NULL) && (d_75 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_75 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1_0(w_9, t);
                return(t);
              }
              t = prod_3_0(_id, _id, v_9, t);
            }
            ;
            LocalPopChoice(n_50);
          }
        else
          {
            t = m_50;
            t = term_o_50;
            d_75 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, n_38, o_38, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(d_75))))), (ATerm) ATinsert(ATempty, not_null(d_75)));
  t = get_pp_entry_0_0(t);
  e_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_75), e_75);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm p_50 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_50;
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm q_50 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_50;
    }
  return(t);
}
ATerm l_11 (ATerm u_37, ATerm s_37, ATerm t_37, ATerm v_37, ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, u_37, s_37, t_37), v_37);
  t = k_11(u_37, s_37, t_37, v_37, t);
  if(match_cons(t, sym__2))
    {
      f_75 = ATgetArgument(t, 0);
      g_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_37;
  t = filter_1_0(y_9, t);
  h_75 = t;
  t = v_37;
  t = filter_1_0(z_9, t);
  i_75 = t;
  t = (ATerm) ATmakeAppl(sym__4, h_75, i_75, (ATerm)ATinsert(ATempty, f_75), term_y_18);
  t = seq2abox_0_0(t);
  j_75 = t;
  t = g_75;
  {
    ATerm a_10 (ATerm t)
    {
      ATerm r_50 = t;
      int s_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_50 = t;
          int u_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_10 (ATerm t)
              {
                t = j_75;
                return(t);
              }
              t = Instantiate_1_0(b_10, t);
              ;
              LocalPopChoice(u_50);
            }
          else
            {
              t = t_50;
              t = flat_list_0_0(t);
            }
          ;
          LocalPopChoice(s_50);
        }
      else
        {
          t = r_50;
        }
      return(t);
    }
    t = bottomup_1_0(a_10, t);
  }
  return(t);
}
ATerm opt_1_0 (ATerm r_100 (ATerm), ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,f_2 = NULL,j_2 = NULL;
  n_75 = t;
  if(match_cons(t, sym_opt_1))
    {
      l_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_75);
  k_75 = t;
  t = l_75;
  t = r_100(t);
  m_75 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_opt_1, m_75);
  f_2 = t;
  t = SSLsetAnnotations(f_2, k_75);
  return(t);
}
ATerm filter_1_0 (ATerm v_121 (ATerm), ATerm t)
{
  ATerm v_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
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
            ATerm f_10 (ATerm t)
            {
              t = filter_1_0(v_121, t);
              return(t);
            }
            t = Cons_2_0(v_121, f_10, t);
            ;
            LocalPopChoice(y_50);
          }
        else
          {
            t = x_50;
            {
              ATerm t_75 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_50 = ATgetFirst((ATermList) t);
                  t_75 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_75;
              t = filter_1_0(v_121, t);
            }
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  t = y_108(t);
  {
    ATerm g_10 (ATerm t)
    {
      t = topdown_1_0(y_108, t);
      return(t);
    }
    t = SRTS_all(g_10, t);
  }
  return(t);
}
ATerm sometd_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm v_75 (ATerm t)
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
        t = SRTS_some(v_75, t);
      }
    return(t);
  }
  t = v_75(t);
  return(t);
}
ATerm repeat_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm w_75 (ATerm t)
  {
    ATerm c_51 = t;
    int d_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_108(t);
        t = w_75(t);
        ;
        LocalPopChoice(d_51);
      }
    else
      {
        t = c_51;
      }
    return(t);
  }
  t = w_75(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  ATerm x_75 (ATerm t)
  {
    ATerm e_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_75, t);
        ;
        LocalPopChoice(f_51);
      }
    else
      {
        t = e_51;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_115(t);
      }
    return(t);
  }
  t = x_75(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_51);
    }
  else
    {
      t = g_51;
      {
        ATerm a_76 = NULL,b_76 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_76 = ATgetFirst((ATermList) t);
            b_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_76;
        {
          ATerm h_10 (ATerm t)
          {
            t = b_76;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(h_10, t);
        }
      }
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,h_34 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(c_34);
  h_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_34), term_j_51), h_34), term_i_51);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  s_76 = t;
  if(match_cons(t, sym_Path1_1))
    {
      t_76 = ATgetArgument(t, 0);
      t = t_76;
    }
  else
    {
      ATerm x_33 = NULL,a_34 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          t_76 = ATgetArgument(t, 0);
          u_76 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_76;
      t = map_1_0(i_10, t);
      t = concat_0_0(t);
      x_33 = t;
      t = (ATerm) ATinsert(CheckATermList(x_33), t_76);
      a_34 = t;
      t = SSL_concat_strings(a_34);
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm u_78 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      u_78 = ATgetArgument(t, 0);
      {
        ATerm k_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_78;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      c_77 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, c_77);
    }
  else
    {
      ATerm s_78 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          c_77 = ATgetArgument(t, 0);
          d_77 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_77;
      t = map_1_0(j_10, t);
      s_78 = t;
      t = (ATerm) ATinsert(CheckATermList(s_78), c_77);
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = debug_1_0(n_10, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_l_51;
  return(t);
}
ATerm m_11 (ATerm h_79, ATerm i_79, ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,s_79 = NULL,c_80 = NULL;
  t = h_79;
  t = mk_key_0_0(t);
  p_79 = t;
  t = term_s_28;
  s_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, i_79);
  c_80 = t;
  t = SSL_table_put(s_79, p_79, c_80);
  t = h_79;
  t = path_to_string_0_0(t);
  q_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_79, i_79);
  t = if_verbose1_1_0(k_10, t);
  return(t);
}
ATerm selector_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,o_2 = NULL,p_2 = NULL;
  k_80 = t;
  if(match_cons(t, sym_selector_2))
    {
      e_80 = ATgetArgument(t, 0);
      h_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_80);
  d_80 = t;
  t = e_80;
  t = u_98(t);
  i_80 = t;
  t = h_80;
  t = v_98(t);
  j_80 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_selector_2, i_80, j_80);
  o_2 = t;
  t = SSLsetAnnotations(o_2, d_80);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm m_51 = t;
  int n_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,a_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_80 = ATgetFirst((ATermList) t);
          t_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_80;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = t_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_80 = ATgetFirst((ATermList) t);
          a_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_80;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(a_81), term_d_33);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(a_81), term_q_33);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(a_81), term_p_51);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(a_81), term_t_51);
                }
            }
        }
      ;
      LocalPopChoice(n_51);
    }
  else
    {
      t = m_51;
    }
  {
    ATerm u_51 = t;
    int v_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(v_51);
      }
    else
      {
        t = u_51;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm p_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  ATerm k_82 (ATerm t)
  {
    ATerm w_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_10, t);
        t = q_115(t);
        ;
        LocalPopChoice(x_51);
      }
    else
      {
        t = w_51;
        t = Cons_2_0(_id, k_82, t);
      }
    return(t);
  }
  t = k_82(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm q_82 = NULL,t_82 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_82 = ATgetFirst((ATermList) t);
      t_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_82;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm d_52 = t;
      int e_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_82;
          ;
          LocalPopChoice(e_52);
        }
      else
        {
          t = d_52;
          t = t_82;
          t = last_0_0(t);
        }
    }
  else
    {
      t = t_82;
      t = last_0_0(t);
    }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm b_83 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_52 = ATgetFirst((ATermList) t);
      b_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_83;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL;
  y_82 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_82 = ATgetFirst((ATermList) t);
      {
        ATerm g_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_82;
  t = t_123(t);
  t = y_82;
  t = last_0_0(t);
  t = t_123(t);
  t = y_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_52 = ATgetFirst((ATermList) t);
      a_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_83;
  t = at_last_1_0(t_10, t);
  return(t);
}
ATerm S_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,f_83 = NULL,g_83 = NULL,q_2 = NULL,r_2 = NULL;
  g_83 = t;
  if(match_cons(t, sym_S_1))
    {
      d_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_83);
  c_83 = t;
  t = d_83;
  t = z_98(t);
  f_83 = t;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, f_83);
  q_2 = t;
  t = SSLsetAnnotations(q_2, c_83);
  return(t);
}
ATerm SOpt_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm k_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,l_84 = NULL,q_84 = NULL,s_2 = NULL,t_2 = NULL;
  q_84 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      m_83 = ATgetArgument(t, 0);
      n_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_84);
  k_83 = t;
  t = m_83;
  t = l_100(t);
  o_83 = t;
  t = n_83;
  t = m_100(t);
  l_84 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, o_83, l_84);
  s_2 = t;
  t = SSLsetAnnotations(s_2, k_83);
  return(t);
}
ATerm Arg2_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,y_85 = NULL,z_85 = NULL,u_2 = NULL,v_2 = NULL;
  z_85 = t;
  if(match_cons(t, sym_Arg2_2))
    {
      u_84 = ATgetArgument(t, 0);
      v_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_85);
  t_84 = t;
  t = u_84;
  t = x_98(t);
  w_84 = t;
  t = v_84;
  t = y_98(t);
  y_85 = t;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Arg2_2, w_84, y_85);
  u_2 = t;
  t = SSLsetAnnotations(u_2, t_84);
  return(t);
}
ATerm Arg_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,y_2 = NULL,a_3 = NULL;
  f_86 = t;
  if(match_cons(t, sym_Arg_1))
    {
      d_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_86);
  c_86 = t;
  t = d_86;
  t = w_98(t);
  e_86 = t;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, e_86);
  y_2 = t;
  t = SSLsetAnnotations(y_2, c_86);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm i_86 = NULL;
  i_86 = t;
  t = SSL_string_to_int(i_86);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm j_86 = NULL;
  j_86 = t;
  t = SSL_string_to_int(j_86);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm k_86 = NULL;
  k_86 = t;
  t = SSL_string_to_int(k_86);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,y_34 = NULL,z_34 = NULL;
  y_34 = t;
  t = SSL_explode_string(y_34);
  t = unquote_chars_1_0(g_11, t);
  z_34 = t;
  t = SSL_implode_string(z_34);
  b_35 = t;
  t = SSL_explode_string(b_35);
  t = unescape_chars_0_0(t);
  c_35 = t;
  t = SSL_implode_string(c_35);
  return(t);
}
ATerm g_11 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm l_86 = NULL;
  l_86 = t;
  t = SSL_string_to_int(l_86);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm i_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(u_10, t);
      ;
      LocalPopChoice(k_52);
    }
  else
    {
      t = i_52;
      {
        ATerm r_52 = t;
        int w_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2_0(x_10, c_11, t);
            ;
            LocalPopChoice(w_52);
          }
        else
          {
            t = r_52;
            {
              ATerm x_52 = t;
              int b_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(b_53);
                }
              else
                {
                  t = x_52;
                  {
                    ATerm e_53 = t;
                    int g_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = S_1_0(e_11, t);
                        ;
                        LocalPopChoice(g_53);
                      }
                    else
                      {
                        t = e_53;
                        t = selector_2_0(h_11, _id, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL;
  t = topdown_1_0(p_11, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      m_86 = ATgetArgument(t, 0);
      n_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(m_86, n_86, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm h_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(i_53);
    }
  else
    {
      t = h_53;
    }
  return(t);
}
ATerm u_11 (ATerm g_79, ATerm t)
{
  t = g_79;
  t = reverse_acc_2_0(_id, i_11, t);
  t = map_1_0(j_11, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm o_86 (ATerm t)
  {
    ATerm j_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110(t);
        ;
        LocalPopChoice(m_53);
      }
    else
      {
        t = j_53;
        t = SRTS_one(o_86, t);
      }
    return(t);
  }
  t = o_86(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL;
  t = term_o_53;
  p_86 = t;
  t = term_p_53;
  q_86 = t;
  t = term_q_53;
  t = k_12(p_86, q_86, t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm r_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
      t = term_v_53;
      t = get_options_0_0(t);
      t = oncetd_1_0(q_11, t);
      t = term_u_18;
      s_86 = t;
      t = (ATerm) ATinsert(ATempty, term_w_53);
      t_86 = t;
      t = SSL_printnl(s_86, t_86);
      t = term_y_18;
      u_86 = t;
      t = SSL_exit(u_86);
      t = (ATerm) ATinsert(ATempty, term_w_53);
      ;
      LocalPopChoice(s_53);
    }
  else
    {
      t = r_53;
      {
        ATerm v_86 = NULL,w_86 = NULL;
        t = term_u_18;
        v_86 = t;
        t = (ATerm) ATinsert(ATempty, term_x_53);
        w_86 = t;
        t = SSL_printnl(v_86, w_86);
        t = (ATerm) ATinsert(ATempty, term_x_53);
      }
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL,p_35 = NULL,s_35 = NULL;
  t = if_verbose1_1_0(s_11, t);
  t = ReadFromFile_0_0(t);
  d_87 = t;
  t = SSL_explode_term(d_87);
  if(match_cons(t, sym__2))
    {
      p_35 = ATgetArgument(t, 0);
      {
        ATerm y_53 = ATgetArgument(t, 1);
        if(((ATgetType(y_53) == AT_LIST) && !(ATisEmpty(y_53))))
          {
            s_35 = ATgetFirst((ATermList) y_53);
            {
              ATerm z_53 = (ATerm) ATgetNext((ATermList) y_53);
              if(((ATgetType(z_53) != AT_LIST) || !(ATisEmpty(z_53))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_35;
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        t = type_failure_0_0(t);
      }
    t = s_35;
    if(match_cons(t, sym_PP_Table_1))
      {
        c_87 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = u_11(c_87, t);
  }
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = debug_1_0(t_11, t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_e_54;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL;
  a_87 = t;
  t = term_s_28;
  b_87 = t;
  t = SSL_table_create(b_87);
  t = a_87;
  t = map_1_0(r_11, t);
  return(t);
}
ATerm x_11 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm d_50, ATerm c_50, ATerm t)
{
  t = x_118(t);
  {
    ATerm w_11 (ATerm t)
    {
      ATerm e_87 = NULL;
      e_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_50, e_87);
      t = w_118(t);
      return(t);
    }
    t = fetch_1_0(w_11, t);
    t = c_50;
  }
  return(t);
}
ATerm y_11 (ATerm t_118 (ATerm), ATerm z_49, ATerm y_49, ATerm t)
{
  t = z_49;
  {
    ATerm l_87 (ATerm t)
    {
      ATerm g_54 = t;
      int h_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_49;
          ;
          LocalPopChoice(h_54);
        }
      else
        {
          t = g_54;
          {
            ATerm l_54 = t;
            int m_54 = stack_ptr;
            if((PushChoice() == 0))
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
                t = g_87;
                {
                  ATerm a_12 (ATerm t)
                  {
                    t = y_49;
                    return(t);
                  }
                  t = x_11(t_118, a_12, h_87, i_87, t);
                  t = l_87(t);
                }
                ;
                LocalPopChoice(m_54);
              }
            else
              {
                t = l_54;
                t = Cons_2_0(_id, l_87, t);
              }
          }
        }
      return(t);
    }
    t = l_87(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t)
{
  ATerm o_54 = t;
  int p_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_120(t);
      ;
      LocalPopChoice(p_54);
    }
  else
    {
      t = o_54;
      {
        ATerm o_87 = NULL,p_87 = NULL,s_87 = NULL,t_87 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_87 = ATgetFirst((ATermList) t);
            p_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_87;
        t = w_120(t);
        s_87 = t;
        t = p_87;
        t = foldr_3_0(u_120, v_120, w_120, t);
        t_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_87, t_87);
        t = v_120(t);
      }
    }
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  ATerm s_54 = t;
  int t_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_87 = NULL;
      t = y_119(t);
      x_87 = t;
      t = (ATerm) ATinsert(ATempty, x_87);
      ;
      LocalPopChoice(t_54);
    }
  else
    {
      t = s_54;
      {
        ATerm l_36 = NULL,m_36 = NULL;
        l_36 = t;
        t = SSL_explode_term(l_36);
        if(match_cons(t, sym__2))
          {
            ATerm v_54 = ATgetArgument(t, 0);
            m_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_36;
        {
          ATerm l_12 (ATerm t)
          {
            t = collect_om_2_0(y_119, z_119, t);
            return(t);
          }
          t = foldr_3_0(j_12, z_119, l_12, t);
        }
      }
    }
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm j_88 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      j_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_88;
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL;
  if(match_cons(t, sym__2))
    {
      k_88 = ATgetArgument(t, 0);
      l_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11(p_12, k_88, l_88, t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm m_88 = NULL;
  if(match_cons(t, sym__2))
    {
      m_88 = ATgetArgument(t, 0);
      if((m_88 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = sometd_1_0(s_12, t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm n_88 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      n_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_88;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm x_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_54 = t;
      int a_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(a_55);
        }
      else
        {
          t = z_54;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_55 = ATgetFirst((ATermList) t);
              ATerm d_55 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(y_12, t);
      ;
      LocalPopChoice(y_54);
    }
  else
    {
      t = x_54;
    }
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm e_55 = t;
  if((PushChoice() == 0))
    {
      t = opt_1_0(i_13, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_55;
    }
  {
    ATerm f_55 = t;
    if((PushChoice() == 0))
      {
        t = layout_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_55;
      }
  }
  return(t);
}
ATerm i_13 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = layout_1_0(_id, t);
  return(t);
}
ATerm z_11 (ATerm e_43, ATerm d_43, ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,f_88 = NULL,i_88 = NULL;
  t = e_43;
  t = collect_om_2_0(n_12, o_12, t);
  t = reverse_acc_2_0(_id, q_12, t);
  t = read_pp_tables_0_0(t);
  t = d_43;
  t = repeat_1_0(r_12, t);
  a_88 = t;
  t = topdown_1_0(w_12, t);
  {
    ATerm g_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL;
        o_88 = t;
        if(match_cons(t, sym_appl_2))
          {
            p_88 = ATgetArgument(t, 0);
            t_88 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_88;
        if(match_cons(t, sym_prod_3))
          {
            q_88 = ATgetArgument(t, 0);
            r_88 = ATgetArgument(t, 1);
            s_88 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = o_88;
        t = l_11(q_88, r_88, s_88, t_88, t);
        ;
        LocalPopChoice(h_55);
      }
    else
      {
        t = g_55;
        t = fatal_ambiguity_0_0(t);
      }
    b_88 = t;
    t = a_88;
    t = collect_p__1_0(j_13, t);
    f_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_88, f_88);
    t = insert_layout_0_0(t);
    i_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_43, i_88);
  }
  return(t);
}
ATerm c_12 (ATerm y_62, ATerm z_62, ATerm t)
{
  ATerm y_88 = NULL;
  t = SSL_fputc(y_62, z_62);
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_88);
  return(t);
}
ATerm d_12 (ATerm m_66, ATerm n_66, ATerm t)
{
  ATerm z_88 = NULL;
  t = SSL_write_term_to_stream_text(m_66, n_66);
  z_88 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_88);
  return(t);
}
ATerm f_12 (ATerm g_127 (ATerm), ATerm s_491, ATerm q_66, ATerm t)
{
  ATerm a_89 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_491, term_i_55);
  t = open_stream_0_0(t);
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_89, q_66);
  t = g_127(t);
  t = fclose_0_0(t);
  t = q_66;
  return(t);
}
ATerm e_12 (ATerm i_66, ATerm j_66, ATerm t)
{
  ATerm b_89 = NULL;
  t = SSL_write_term_to_stream_baf(i_66, j_66);
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_89);
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = fetch_1_0(l_14, t);
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL;
  if(match_cons(t, sym__2))
    {
      f_89 = ATgetArgument(t, 0);
      g_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(m_14, f_89, g_89, t);
  return(t);
}
ATerm l_14 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm h_89 = NULL,i_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_55 = ATgetArgument(t, 0);
      if(match_cons(m_55, sym_Stream_1))
        {
          h_89 = ATgetArgument(m_55, 0);
        }
      else
        _fail(t);
      i_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(h_89, i_89, t);
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL;
  if(match_cons(t, sym__2))
    {
      j_89 = ATgetArgument(t, 0);
      k_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(q_14, j_89, k_89, t);
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_55 = ATgetArgument(t, 0);
      if(match_cons(n_55, sym_Stream_1))
        {
          m_89 = ATgetArgument(n_55, 0);
        }
      else
        _fail(t);
      n_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12(m_89, n_89, t);
  l_89 = t;
  t = term_p_51;
  o_89 = t;
  t = l_89;
  if(match_cons(t, sym_Stream_1))
    {
      p_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_51, l_89);
  t = c_12(o_89, p_89, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL;
  c_89 = t;
  {
    ATerm p_13 (ATerm t)
    {
      ATerm o_55 = t;
      int p_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_13 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((d_89 != NULL) && (d_89 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_89 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_13, t);
          ;
          LocalPopChoice(p_55);
        }
      else
        {
          t = o_55;
          t = term_q_55;
          if(((d_89 != NULL) && (d_89 != t)))
            _fail(t);
          else
            d_89 = t;
        }
      return(t);
    }
    t = _2_0(p_13, _id, t);
    t = c_89;
    {
      ATerm t_13 (ATerm t)
      {
        ATerm e_89 = NULL;
        e_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_89), e_89);
        return(t);
      }
      t = _2_0(_id, t_13, t);
      {
        ATerm r_55 = t;
        int s_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(w_13, a_14, t);
            ;
            LocalPopChoice(s_55);
          }
        else
          {
            t = r_55;
            t = _2_0(_id, p_14, t);
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
  ATerm q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL;
  q_89 = t;
  t = dtime_0_0(t);
  t = q_89;
  t = i_130(t);
  r_89 = t;
  t = dtime_0_0(t);
  s_89 = t;
  t = r_89;
  if(match_cons(t, sym__2))
    {
      t_89 = ATgetArgument(t, 0);
      u_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_89), (ATerm) ATmakeAppl(sym_Runtime_1, s_89)), u_89);
  return(t);
}
ATerm i_90 (ATerm c_90, ATerm t)
{
  t = SSL_fclose(c_90);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL;
  g_90 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_90 = ATgetArgument(t, 0);
      {
        ATerm x_55 = t;
        int y_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_90);
            ;
            LocalPopChoice(y_55);
          }
        else
          {
            t = x_55;
            t = i_90(g_90, t);
          }
      }
    }
  else
    {
      t = i_90(g_90, t);
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
  ATerm j_90 = NULL;
  t = SSL_fopen(a_63, b_63);
  j_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_90);
  return(t);
}
ATerm _2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,b_3 = NULL,c_3 = NULL;
  p_90 = t;
  if(match_cons(t, sym__2))
    {
      l_90 = ATgetArgument(t, 0);
      m_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_90);
  k_90 = t;
  t = l_90;
  t = g_88(t);
  n_90 = t;
  t = m_90;
  t = h_88(t);
  o_90 = t;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_90, o_90);
  b_3 = t;
  t = SSLsetAnnotations(b_3, k_90);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_90 = NULL;
  t = SSL_stdin_stream();
  s_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_90);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_90 = NULL;
  t = SSL_stdout_stream();
  t_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_90);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_90 = NULL;
  t = SSL_stderr_stream();
  u_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_90);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm e_91 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      e_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_91;
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm h_91 = NULL;
  h_91 = t;
  t = SSL_is_string(h_91);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_55 = ATgetArgument(t, 0);
      ATerm a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_91 = NULL,k_37 = NULL;
        b_91 = t;
        t = SSL_explode_term(b_91);
        if(match_cons(t, sym__2))
          {
            ATerm e_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_56) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_56 = ATgetArgument(t, 1);
              if(((ATgetType(g_56) == AT_LIST) && !(ATisEmpty(g_56))))
                {
                  k_37 = ATgetFirst((ATermList) g_56);
                  {
                    ATerm i_56 = (ATerm) ATgetNext((ATermList) g_56);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_37;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_37;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_37;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_37;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_56);
      }
    else
      {
        t = b_56;
        {
          ATerm j_56 = t;
          int k_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_91 = NULL,d_91 = NULL;
              t = _2_0(r_14, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_91 = ATgetArgument(t, 0);
                  d_91 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_12(c_91, d_91, t);
              ;
              LocalPopChoice(k_56);
            }
          else
            {
              t = j_56;
              {
                ATerm f_91 = NULL,g_91 = NULL;
                t = _2_0(s_14, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_91 = ATgetArgument(t, 0);
                    g_91 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_12(f_91, g_91, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = term_o_56;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
  ATerm v_56 = t;
  int w_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_91 = NULL;
      m_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_91, term_a_57);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_56);
    }
  else
    {
      t = v_56;
      t = debug_1_0(v_14, t);
      _fail(t);
    }
  j_91 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(l_91, t);
  k_91 = t;
  t = j_91;
  t = fclose_0_0(t);
  t = k_91;
  return(t);
}
ATerm fetch_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm o_91 (ATerm t)
  {
    ATerm b_57 = t;
    int d_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_114, _id, t);
        ;
        LocalPopChoice(d_57);
      }
    else
      {
        t = b_57;
        t = Cons_2_0(_id, o_91, t);
      }
    return(t);
  }
  t = o_91(t);
  return(t);
}
ATerm b_12 (ATerm o_57, ATerm p_57, ATerm t)
{
  t = SSL_strcat(o_57, p_57);
  return(t);
}
ATerm debug_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL;
  p_91 = t;
  t = e_127(t);
  q_91 = t;
  t = term_u_18;
  r_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_91), q_91);
  s_91 = t;
  t = SSL_printnl(r_91, s_91);
  t = p_91;
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_57);
    }
  else
    {
      t = g_57;
    }
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_i_57;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_57 = t;
  int u_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_91 = NULL;
      y_91 = t;
      t = SSL_is_string(y_91);
      ;
      LocalPopChoice(u_57);
    }
  else
    {
      t = t_57;
      {
        ATerm v_57 = t;
        int w_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_14, t);
            ;
            LocalPopChoice(w_57);
          }
        else
          {
            t = v_57;
            {
              ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL;
              c_92 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_92 = ATgetArgument(t, 0);
                  t = d_92;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_92 = ATgetArgument(t, 0);
                      t = d_92;
                      {
                        ATerm z_57 = t;
                        int a_58 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_58);
                          }
                        else
                          {
                            t = z_57;
                            t = debug_1_0(a_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_92 = NULL,j_92 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_92 = ATgetArgument(t, 0);
                          e_92 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_92;
                      t = eval_config_0_0(t);
                      i_92 = t;
                      t = e_92;
                      t = eval_config_0_0(t);
                      j_92 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_92, j_92);
                      t = b_12(i_92, j_92, t);
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
  ATerm m_92 = NULL,n_92 = NULL;
  m_92 = t;
  t = term_b_58;
  n_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_58, m_92);
  t = k_12(n_92, m_92, t);
  {
    ATerm d_58 = t;
    int e_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_92 = NULL,p_92 = NULL;
        t = eval_config_0_0(t);
        o_92 = t;
        t = term_b_58;
        p_92 = t;
        t = SSL_table_put(p_92, m_92, o_92);
        t = o_92;
        ;
        LocalPopChoice(e_58);
      }
    else
      {
        t = d_58;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_128 (ATerm), ATerm t)
{
  ATerm f_58 = t;
  int h_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_92 = NULL,s_92 = NULL;
      q_92 = t;
      t = term_i_58;
      t = get_config_0_0(t);
      s_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_92, term_d_24);
      t = geq_0_0(t);
      t = q_92;
      t = r_128(t);
      ;
      LocalPopChoice(h_58);
    }
  else
    {
      t = f_58;
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm u_92 = NULL;
  u_92 = t;
  if(match_string(t, "-k"))
    {
      t = u_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_92;
    }
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm x_92 = NULL,z_92 = NULL,a_93 = NULL;
  x_92 = t;
  t = SSL_string_to_int(x_92);
  z_92 = t;
  t = term_k_58;
  a_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_58, z_92);
  t = m_12(a_93, z_92, t);
  t = x_92;
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = term_l_58;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_15, c_15, d_15, t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm c_93 = NULL;
  c_93 = t;
  if(match_string(t, "-S"))
    {
      t = c_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_93;
    }
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL;
  t = term_i_58;
  d_93 = t;
  t = term_n_58;
  e_93 = t;
  t = term_o_58;
  t = m_12(d_93, e_93, t);
  t = term_p_58;
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = term_q_58;
  return(t);
}
ATerm h_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL;
  f_93 = t;
  t = SSL_string_to_int(f_93);
  g_93 = t;
  t = term_i_58;
  h_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_58, g_93);
  t = m_12(h_93, g_93, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_93);
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_r_58;
  return(t);
}
ATerm k_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL;
  t = term_s_58;
  i_93 = t;
  t = term_k_13;
  j_93 = t;
  t = term_t_58;
  t = m_12(i_93, j_93, t);
  t = term_x_58;
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = term_c_59;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_59 = t;
  int f_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_15, f_15, g_15, t);
      ;
      LocalPopChoice(f_59);
    }
  else
    {
      t = d_59;
      {
        ATerm g_59 = t;
        int h_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_15, i_15, j_15, t);
            ;
            LocalPopChoice(h_59);
          }
        else
          {
            t = g_59;
            t = Option_3_0(k_15, l_15, m_15, t);
          }
      }
    }
  return(t);
}
ATerm m_12 (ATerm p_67, ATerm q_67, ATerm t)
{
  ATerm k_93 = NULL;
  t = term_b_58;
  k_93 = t;
  t = SSL_table_put(k_93, p_67, q_67);
  t = (ATerm) ATmakeAppl(sym__3, term_b_58, p_67, q_67);
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm m_93 = NULL;
  m_93 = t;
  if(match_string(t, "-o"))
    {
      t = m_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_93;
    }
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm n_93 = NULL,o_93 = NULL;
  n_93 = t;
  t = term_i_59;
  o_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_59, n_93);
  t = m_12(o_93, n_93, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_93);
  return(t);
}
ATerm y_15 (ATerm t)
{
  t = term_j_59;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_15, x_15, y_15, t);
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm q_93 = NULL;
  q_93 = t;
  if(match_string(t, "-i"))
    {
      t = q_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_93;
    }
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL;
  r_93 = t;
  t = term_k_59;
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_59, r_93);
  t = m_12(s_93, r_93, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_93);
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = term_m_59;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_16, g_16, h_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_13;
  t = whoami_0_0(t);
  t_93 = t;
  t = term_u_18;
  u_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_59), t_93);
  v_93 = t;
  t = SSL_printnl(u_93, v_93);
  t = term_y_18;
  w_93 = t;
  t = SSL_exit(w_93);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_59;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_12 (ATerm y_59, ATerm z_59, ATerm t)
{
  ATerm p_59 = t;
  int q_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_59, z_59);
      ;
      LocalPopChoice(q_59);
    }
  else
    {
      t = p_59;
      t = SSL_addr(y_59, z_59);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm t)
{
  ATerm r_59 = t;
  int s_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_120(t);
      ;
      LocalPopChoice(s_59);
    }
  else
    {
      t = r_59;
      {
        ATerm z_93 = NULL,a_94 = NULL,d_94 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_93 = ATgetFirst((ATermList) t);
            a_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_94;
        t = foldr_2_0(s_120, t_120, t);
        d_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_93, d_94);
        t = t_120(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = term_n_58;
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL;
  if(match_cons(t, sym__2))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(g_38, h_38, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_94 = NULL,c_38 = NULL,d_38 = NULL;
  t = times_0_0(t);
  c_38 = t;
  t = SSL_explode_term(c_38);
  if(match_cons(t, sym__2))
    {
      ATerm t_59 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_38;
  t = foldr_2_0(j_16, k_16, t);
  g_94 = t;
  t = SSL_TicksToSeconds(g_94);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
  r_94 = t;
  if(match_cons(t, sym__2))
    {
      s_94 = ATgetArgument(t, 0);
      t_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_59 = t;
    int v_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94;
        if((s_94 != t))
          {
            _fail(t);
          }
        t = r_94;
        ;
        LocalPopChoice(v_59);
      }
    else
      {
        t = u_59;
        t = (ATerm) ATmakeAppl(sym__2, s_94, t_94);
        {
          ATerm w_59 = t;
          int x_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_94, t_94);
              ;
              LocalPopChoice(x_59);
            }
          else
            {
              t = w_59;
              t = SSL_gtr(s_94, t_94);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_94, t_94);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_128 (ATerm), ATerm t)
{
  ATerm a_60 = t;
  int b_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_94 = NULL,y_94 = NULL;
      w_94 = t;
      t = term_i_58;
      t = get_config_0_0(t);
      y_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_94, term_y_18);
      t = geq_0_0(t);
      t = w_94;
      t = q_128(t);
      ;
      LocalPopChoice(b_60);
    }
  else
    {
      t = a_60;
    }
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
  t = run_time_0_0(t);
  a_95 = t;
  t = term_k_13;
  t = whoami_0_0(t);
  b_95 = t;
  t = term_u_18;
  c_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_60), a_95), term_d_60), b_95);
  d_95 = t;
  t = SSL_printnl(c_95, d_95);
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_60), a_95), term_d_60), b_95));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_95 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_58;
  e_95 = t;
  t = SSL_exit(e_95);
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm h_60 = t;
  int i_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(i_60);
    }
  else
    {
      t = h_60;
      {
        ATerm j_60 = t;
        int k_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(k_60);
          }
        else
          {
            t = j_60;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm m_60 = t;
  int o_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_60;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_60);
    }
  else
    {
      t = m_60;
      t = fetch_1_0(m_16, t);
    }
  t = g_131(t);
  return(t);
}
ATerm map_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm f_95 (ATerm t)
  {
    ATerm r_60 = t;
    int s_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_60);
      }
    else
      {
        t = r_60;
        t = Cons_2_0(p_114, f_95, t);
      }
    return(t);
  }
  t = f_95(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_95 = ATgetFirst((ATermList) t);
      i_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_95 = NULL,n_95 = NULL;
        t = i_95;
        t = c_0(t);
        m_95 = t;
        t = h_95;
        t = a_0(t);
        n_95 = t;
        t = i_95;
        {
          ATerm n_16 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_95), n_95);
            return(t);
          }
          t = reverse_acc_2_0(a_0, n_16, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_13;
      t = c_0(t);
    }
  return(t);
}
ATerm k_12 (ATerm e_74, ATerm f_74, ATerm t)
{
  t = SSL_table_get(e_74, f_74);
  return(t);
}
ATerm Program_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,e_3 = NULL,h_3 = NULL;
  r_95 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_95);
  o_95 = t;
  t = p_95;
  t = n_98(t);
  q_95 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_95);
  e_3 = t;
  t = SSLsetAnnotations(e_3, o_95);
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm w_95 = NULL;
  w_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_95), term_t_60);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL;
  ATerm u_60 = t;
  int v_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_59;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_60);
    }
  else
    {
      t = u_60;
      t = fetch_1_0(o_16, t);
    }
  t = term_y_60;
  t = echo_0_0(t);
  t = term_z_18;
  u_95 = t;
  t = term_a_19;
  v_95 = t;
  t = term_z_60;
  t = k_12(u_95, v_95, t);
  t = reverse_acc_2_0(_id, q_16, t);
  t = map_1_0(r_16, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,i_3 = NULL,j_3 = NULL;
  a_96 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_96);
  x_95 = t;
  t = y_95;
  t = o_98(t);
  z_95 = t;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_95);
  i_3 = t;
  t = SSLsetAnnotations(i_3, x_95);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL;
  e_96 = t;
  {
    ATerm a_61 = t;
    int b_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_96;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_61 = ATgetFirst((ATermList) t);
                ATerm d_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_96;
          }
        ;
        LocalPopChoice(b_61);
      }
    else
      {
        t = a_61;
        t = (ATerm) ATinsert(ATempty, e_96);
      }
    f_96 = t;
    t = term_q_55;
    g_96 = t;
    t = SSL_printnl(g_96, f_96);
    t = e_96;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_59;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm k_96 = NULL,l_96 = NULL;
  t = term_e_61;
  k_96 = t;
  t = term_k_13;
  l_96 = t;
  t = term_f_61;
  t = m_12(k_96, l_96, t);
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_g_61;
  return(t);
}
ATerm v_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL;
  t = term_e_61;
  m_96 = t;
  t = term_k_13;
  n_96 = t;
  t = term_f_61;
  t = m_12(m_96, n_96, t);
  t = term_h_61;
  o_96 = t;
  t = term_k_13;
  p_96 = t;
  t = term_i_61;
  t = m_12(o_96, p_96, t);
  t = term_j_61;
  return(t);
}
ATerm x_16 (ATerm t)
{
  t = term_k_61;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_61 = t;
  int m_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_16, t_16, u_16, t);
      ;
      LocalPopChoice(m_61);
    }
  else
    {
      t = l_61;
      t = Option_3_0(v_16, w_16, x_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,k_3 = NULL,l_3 = NULL;
  v_96 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_96 = ATgetFirst((ATermList) t);
      s_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_96);
  q_96 = t;
  t = r_96;
  t = v_92(t);
  t_96 = t;
  t = s_96;
  t = w_92(t);
  u_96 = t;
  l_3 = t;
  t = (ATerm) ATinsert(CheckATermList(u_96), t_96);
  k_3 = t;
  t = SSLsetAnnotations(k_3, q_96);
  return(t);
}
ATerm b_17 (ATerm t)
{
  ATerm a_97 = NULL,b_97 = NULL;
  a_97 = t;
  t = term_o_59;
  b_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_59, a_97);
  t = m_12(b_97, a_97, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, a_97);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm z_96 = NULL;
  z_96 = t;
  {
    ATerm n_61 = t;
    int o_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_61;
        t = j_133(t);
        ;
        LocalPopChoice(o_61);
      }
    else
      {
        t = n_61;
      }
    t = z_96;
    {
      ATerm f_17 (ATerm t)
      {
        ATerm q_61 = t;
        int r_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_61 = t;
            int t_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_61);
              }
            else
              {
                t = s_61;
                t = j_133(t);
                t = Cons_2_0(_id, f_17, t);
              }
            ;
            LocalPopChoice(r_61);
          }
        else
          {
            t = q_61;
            {
              ATerm d_97 = NULL,e_97 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_97 = ATgetFirst((ATermList) t);
                  e_97 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_97), (ATerm) ATmakeAppl(sym_Undefined_1, d_97));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_17, f_17, t);
    }
  }
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm s_97 = NULL;
  s_97 = t;
  if(match_string(t, "--help"))
    {
      t = s_97;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_97;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_97;
        }
    }
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL;
  t = term_p_60;
  t_97 = t;
  t = term_k_13;
  u_97 = t;
  t = term_u_61;
  t = m_12(t_97, u_97, t);
  t = term_v_61;
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = term_w_61;
  return(t);
}
ATerm n_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_133 (ATerm), ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL;
  l_97 = t;
  t = term_z_18;
  o_97 = t;
  t = term_a_19;
  p_97 = t;
  t = (ATerm) ATempty;
  q_97 = t;
  t = SSL_table_put(o_97, p_97, q_97);
  t = l_97;
  {
    ATerm j_17 (ATerm t)
    {
      ATerm x_61 = t;
      int y_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_133(t);
          ;
          LocalPopChoice(y_61);
        }
      else
        {
          t = x_61;
          {
            ATerm z_61 = t;
            int a_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_17, l_17, m_17, t);
                ;
                LocalPopChoice(a_62);
              }
            else
              {
                t = z_61;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_17, t);
    {
      ATerm b_62 = t;
      int c_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_98 = NULL;
          b_98 = t;
          {
            ATerm d_62 = t;
            int e_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_38 = NULL;
                t = b_98;
                {
                  ATerm f_62 = t;
                  int g_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_60;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_62);
                    }
                  else
                    {
                      t = f_62;
                      t = fetch_1_0(n_17, t);
                    }
                  t = b_98;
                  t = default_system_usage_0_0(t);
                  t = term_n_58;
                  x_38 = t;
                  t = SSL_exit(x_38);
                }
                ;
                LocalPopChoice(e_62);
              }
            else
              {
                t = d_62;
                {
                  ATerm m_39 = NULL;
                  t = term_e_61;
                  t = get_config_0_0(t);
                  t = b_98;
                  t = default_system_about_0_0(t);
                  t = term_n_58;
                  m_39 = t;
                  t = SSL_exit(m_39);
                }
              }
          }
          ;
          LocalPopChoice(c_62);
        }
      else
        {
          t = b_62;
          {
            ATerm h_62 = t;
            int i_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL;
                ATerm t_17 (ATerm t)
                {
                  ATerm v_17 (ATerm t)
                  {
                    if(((m_97 != NULL) && (m_97 != t)))
                      _fail(t);
                    else
                      m_97 = t;
                    return(t);
                  }
                  t = Undefined_1_0(v_17, t);
                  return(t);
                }
                t = fetch_1_0(t_17, t);
                t = term_u_18;
                c_98 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_97)), term_j_62);
                d_98 = t;
                t = SSL_printnl(c_98, d_98);
                t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_97)), term_j_62));
                t = default_system_usage_0_0(t);
                t = term_y_18;
                e_98 = t;
                t = SSL_exit(e_98);
                ;
                LocalPopChoice(i_62);
              }
            else
              {
                t = h_62;
              }
          }
        }
      n_97 = t;
      t = term_z_18;
      r_97 = t;
      t = SSL_table_destroy(r_97);
      t = n_97;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL;
  t = parse_options_1_0(i_131, t);
  h_98 = t;
  t = term_o_53;
  i_98 = t;
  t = SSL_table_create(i_98);
  t = term_o_53;
  j_98 = t;
  t = term_p_53;
  k_98 = t;
  t = SSL_table_put(j_98, k_98, h_98);
  t = h_98;
  t = k_131(t);
  {
    ATerm k_62 = t;
    int l_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_131, t);
        ;
        LocalPopChoice(l_62);
      }
    else
      {
        t = k_62;
        {
          ATerm m_62 = t;
          int n_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_131(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_62);
            }
          else
            {
              t = m_62;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = if_verbose2_1_0(e_18, t);
  return(t);
}
ATerm z_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL;
  t = term_o_62;
  l_98 = t;
  t = term_k_13;
  m_98 = t;
  t = term_q_62;
  t = m_12(l_98, m_98, t);
  t = term_r_62;
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = term_s_62;
  return(t);
}
ATerm e_18 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL;
  p_98 = t;
  t = term_o_59;
  t = get_config_0_0(t);
  q_98 = t;
  t = term_u_18;
  r_98 = t;
  t = (ATerm) ATinsert(ATempty, q_98);
  s_98 = t;
  t = SSL_printnl(r_98, s_98);
  t = p_98;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm t_62 = t;
    int u_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_130(t);
        ;
        LocalPopChoice(u_62);
      }
    else
      {
        t = t_62;
        {
          ATerm w_62 = t;
          int x_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_62);
            }
          else
            {
              t = w_62;
              {
                ATerm c_63 = t;
                int d_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(d_63);
                  }
                else
                  {
                    t = c_63;
                    {
                      ATerm g_63 = t;
                      int h_63 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_17, b_18, d_18, t);
                          ;
                          LocalPopChoice(h_63);
                        }
                      else
                        {
                          t = g_63;
                          {
                            ATerm k_63 = t;
                            int l_63 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_63);
                              }
                            else
                              {
                                t = k_63;
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
  ATerm y_17 (ATerm t)
  {
    ATerm t_98 = NULL,a_99 = NULL,b_99 = NULL;
    t_98 = t;
    {
      ATerm m_63 = t;
      int n_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_18 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_99 != NULL) && (a_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_18, t);
          ;
          LocalPopChoice(n_63);
        }
      else
        {
          t = m_63;
          t = term_p_63;
          a_99 = t;
        }
      t = not_null(a_99);
      t = ReadFromFile_0_0(t);
      b_99 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_98, b_99);
      t = apply_strategy_1_0(r_130, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(w_17, t_130, x_17, y_17, t);
  return(t);
}
ATerm h_18 (ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL;
  if(match_cons(t, sym__2))
    {
      c_99 = ATgetArgument(t, 0);
      d_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(c_99, d_99, t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  ATerm r_63 = t;
  int v_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_18, l_18, n_18, t);
      ;
      LocalPopChoice(v_63);
    }
  else
    {
      t = r_63;
      {
        ATerm w_63 = t;
        int x_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(o_18, p_18, q_18, t);
            ;
            LocalPopChoice(x_63);
          }
        else
          {
            t = w_63;
            t = ArgOption_3_0(r_18, s_18, t_18, t);
          }
      }
    }
  return(t);
}
ATerm k_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_18 (ATerm t)
{
  t = term_y_63;
  return(t);
}
ATerm n_18 (ATerm t)
{
  t = term_z_63;
  return(t);
}
ATerm o_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm q_18 (ATerm t)
{
  t = term_b_64;
  return(t);
}
ATerm r_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm e_99 = NULL;
  e_99 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, e_99);
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_c_64;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(h_18, i_18, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

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
Symbol sym_ATerm_1;
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
  sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
  ATprotectSymbol(sym_ATerm_1);
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
ATerm term_d_64;
ATerm term_c_64;
ATerm term_b_64;
ATerm term_y_63;
ATerm term_q_63;
ATerm term_r_62;
ATerm term_p_62;
ATerm term_i_62;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_u_60;
ATerm term_n_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_f_60;
ATerm term_q_59;
ATerm term_i_59;
ATerm term_o_58;
ATerm term_m_58;
ATerm term_j_58;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_a_57;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_m_55;
ATerm term_v_54;
ATerm term_n_54;
ATerm term_i_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_x_51;
ATerm term_o_51;
ATerm term_d_51;
ATerm term_a_51;
ATerm term_t_49;
ATerm term_g_47;
ATerm term_t_45;
ATerm term_m_45;
ATerm term_a_44;
ATerm term_o_43;
ATerm term_l_43;
ATerm term_i_43;
ATerm term_f_43;
ATerm term_b_43;
ATerm term_x_42;
ATerm term_p_42;
ATerm term_k_42;
ATerm term_f_42;
ATerm term_z_41;
ATerm term_w_41;
ATerm term_t_41;
ATerm term_p_41;
ATerm term_k_41;
ATerm term_h_41;
ATerm term_d_41;
ATerm term_z_40;
ATerm term_v_40;
ATerm term_r_40;
ATerm term_n_40;
ATerm term_j_40;
ATerm term_d_40;
ATerm term_w_39;
ATerm term_s_39;
ATerm term_o_39;
ATerm term_f_39;
ATerm term_c_39;
ATerm term_x_38;
ATerm term_t_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_j_38;
ATerm term_f_38;
ATerm term_z_37;
ATerm term_v_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_h_37;
ATerm term_w_36;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_n_35;
ATerm term_j_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_s_34;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_m_34;
ATerm term_k_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_x_32;
ATerm term_o_32;
ATerm term_e_31;
ATerm term_w_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_y_21;
ATerm term_z_19;
ATerm term_c_17;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_10;
void init_constant_terms (void)
{
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_SOpt_2, term_z_14, term_a_15);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_lit_1, term_v_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_lit_1, term_x_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_SOpt_2, term_s_27, term_t_27);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Arg_1, term_z_19);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_56);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym__3, term_f_60, term_h_60, term_z_10);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm layout2box_0_0 (ATerm);
ATerm l_0 (ATerm);
ATerm m_0 (ATerm);
ATerm has_significant_layout_0_0 (ATerm);
ATerm n_0 (ATerm);
ATerm has_layout_0_0 (ATerm);
ATerm o_0 (ATerm);
ATerm s_0 (ATerm);
ATerm v_0 (ATerm);
ATerm InsLayout_1_0 (ATerm k_137 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm insert_layout_0_0 (ATerm);
ATerm layout_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm collect_p__1_0 (ATerm x_136 (ATerm), ATerm);
ATerm amb_1_0 (ATerm n_101 (ATerm), ATerm);
ATerm fatal_ambiguity_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm d_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm s_1 (ATerm);
ATerm w_1 (ATerm);
ATerm filter_literals_0_0 (ATerm);
ATerm instantiate_list_1_0 (ATerm d_137 (ATerm), ATerm);
ATerm build_list_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm instantiate_sep_list_1_0 (ATerm f_137 (ATerm), ATerm);
ATerm BuildSepList_4_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm nzip_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm build_sep_list_0_0 (ATerm);
ATerm Ind2_0_0 (ATerm);
ATerm index_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm symbol2abox_0_0 (ATerm);
ATerm o_35 (ATerm h_33, ATerm i_33, ATerm j_33, ATerm k_33, ATerm l_33, ATerm m_33, ATerm n_33, ATerm);
ATerm seq2abox_0_0 (ATerm);
ATerm lit_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm StoreEntryIfNotExists_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm b_136 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm pair_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm number_node_1_0 (ATerm f_136 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm symbol2abox_1_0 (ATerm c_136 (ATerm), ATerm);
ATerm v_50 (ATerm a_49, ATerm b_49, ATerm f_49, ATerm);
ATerm w_50 (ATerm w_49, ATerm x_49, ATerm b_50, ATerm f_50, ATerm g_50, ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm get_pp_entry_0_0 (ATerm);
ATerm prod_3_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm uq2q_0_0 (ATerm);
ATerm cons_1_0 (ATerm g_101 (ATerm), ATerm);
ATerm get_constr_0_0 (ATerm);
ATerm add_attributes_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm strs2constr_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm sym2strs_0_0 (ATerm);
ATerm syms2strs_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm e_59 (ATerm a_59, ATerm);
ATerm h_7 (ATerm);
ATerm toAlphaNum_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm separate_by_1_0 (ATerm k_114 (ATerm), ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm list_ana_1_0 (ATerm q_137 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm lit2str_0_0 (ATerm);
ATerm r_64 (ATerm n_63, ATerm o_63, ATerm p_63, ATerm);
ATerm s_64 (ATerm e_64, ATerm f_64, ATerm);
ATerm m_7 (ATerm);
ATerm q_7 (ATerm);
ATerm mk_constr_0_0 (ATerm);
ATerm iter_star_sep_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm y_100 (ATerm), ATerm);
ATerm iter_1_0 (ATerm x_100 (ATerm), ATerm);
ATerm alt_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm);
ATerm syntaxless_sort_0_0 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm is_injection_0_0 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm is_reject_0_0 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm is_bracket_0_0 (ATerm);
ATerm prodcons_0_0 (ATerm);
ATerm sort_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm get_templ_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm application_to_abox_0_0 (ATerm);
ATerm opt_1_0 (ATerm q_100 (ATerm), ATerm);
ATerm filter_1_0 (ATerm t_121 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm sometd_1_0 (ATerm l_110 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm l_8 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm m_8 (ATerm);
ATerm StoreEntry_0_0 (ATerm);
ATerm selector_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm at_last_1_0 (ATerm q_115 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm o_8 (ATerm);
ATerm unquote_chars_1_0 (ATerm r_123 (ATerm), ATerm);
ATerm S_1_0 (ATerm y_98 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm);
ATerm Arg2_2_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm u_8 (ATerm);
ATerm y_8 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_110 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm z_8 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm n_136 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm union_1_0 (ATerm t_118 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm);
ATerm j_9 (ATerm);
ATerm l_9 (ATerm);
ATerm n_9 (ATerm);
ATerm collect_om_1_0 (ATerm o_119 (ATerm), ATerm);
ATerm p_9 (ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm h_10 (ATerm);
ATerm asfix2abox_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_130 (ATerm), ATerm);
ATerm s_75 (ATerm m_75, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_114 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_115 (ATerm), ATerm);
ATerm _2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm a_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_128 (ATerm), ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm t_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_11 (ATerm);
ATerm z_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_128 (ATerm), ATerm);
ATerm a_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_12 (ATerm);
ATerm need_help_1_0 (ATerm e_131 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_114 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm);
ATerm o_12 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_133 (ATerm), ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm parse_options_1_0 (ATerm g_133 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm);
ATerm c_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm iowrap_3_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm r_130 (ATerm), ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm io_Asfix_2_abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_z_10;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,t_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_0 = NULL;
      t = term_z_10;
      t = k_0(t);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, u_0);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_0 = ATgetFirst((ATermList) t);
          q_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_0;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_0 = ATgetFirst((ATermList) t);
          t_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_0;
      t = i_0(t);
      t = r_0;
      t = j_0(t);
      a_1 = t;
      t = (ATerm) ATinsert(CheckATermList(t_0), a_1);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__3))
    {
      d_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
      h_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, g_1);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            ATerm g_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_1, g_1);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATempty;
      }
    i_1 = t;
    t = SSL_table_put(d_1, g_1, (ATerm) ATinsert(CheckATermList(i_1), h_1));
    t = (ATerm) ATmakeAppl(sym__3, d_1, g_1, h_1);
  }
  return(t);
}
ATerm Option_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_1 = NULL;
      t = term_z_10;
      t = h_0(t);
      v_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, v_1);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm y_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_1 = ATgetFirst((ATermList) t);
          u_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_1;
      t = f_0(t);
      t = term_z_10;
      t = g_0(t);
      y_1 = t;
      t = (ATerm) ATinsert(CheckATermList(u_1), y_1);
    }
  return(t);
}
ATerm layout2box_0_0 (ATerm t)
{
  ATerm z_1 = NULL;
  if(match_cons(t, sym_layout_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL;
        t = has_significant_layout_0_0(t);
        t = z_1;
        t = concat_strings_0_0(t);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, a_2)));
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm b_2 = NULL;
          t = z_1;
          t = concat_strings_0_0(t);
          b_2 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, b_2);
        }
      }
  }
  return(t);
}
ATerm l_0 (ATerm t)
{
  if(!(match_cons(t, sym_layout_place_holder_0)))
    _fail(t);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm j_14 = t;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL;
      g_2 = t;
      if(match_int(t, 9))
        {
          t = g_2;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = g_2;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = g_2;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = g_2;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_14;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  {
    ATerm k_14 = t;
    if((PushChoice() == 0))
      {
        t = layout_1_0(l_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_14;
      }
    if(match_cons(t, sym_layout_1))
      {
        e_2 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_2;
    t = concat_strings_0_0(t);
    f_2 = t;
    t = SSL_explode_string(f_2);
    t = filter_1_0(m_0, t);
    {
      ATerm m_14 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_14;
        }
      t = d_2;
    }
  }
  return(t);
}
ATerm n_0 (ATerm t)
{
  if(!(match_cons(t, sym_layout_place_holder_0)))
    _fail(t);
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm n_14 = t;
  if((PushChoice() == 0))
    {
      t = layout_1_0(n_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_14;
    }
  return(t);
}
ATerm o_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
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
ATerm InsLayout_1_0 (ATerm k_137 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm n_2 = NULL,o_2 = NULL,r_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(o_0, _id, t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
          m_3 = t;
          if(match_cons(t, sym__2))
            {
              o_3 = ATgetArgument(t, 0);
              t_3 = ATgetArgument(t, 1);
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
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATmakeAppl(sym__2, p_3, t_3);
              t = k_137(t);
              if(match_cons(t, sym__2))
                {
                  n_2 = ATgetArgument(t, 0);
                  u_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_2), u_2);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_3 = ATgetFirst((ATermList) t);
                  s_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, p_3, t_3);
              t = k_137(t);
              if(match_cons(t, sym__2))
                {
                  n_2 = ATgetArgument(t, 0);
                  {
                    ATerm q_14 = ATgetArgument(t, 1);
                    if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
                      {
                        o_2 = ATgetFirst((ATermList) q_14);
                        u_2 = (ATerm) ATgetNext((ATermList) q_14);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_3), r_3), u_2);
              t = u_3(t);
              if(match_cons(t, sym__2))
                {
                  ATerm r_14 = ATgetArgument(t, 0);
                  if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
                    {
                      r_2 = ATgetFirst((ATermList) r_14);
                      w_2 = (ATerm) ATgetNext((ATermList) r_14);
                    }
                  else
                    _fail(t);
                  v_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm s_14 = t;
                int t_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_1 = NULL;
                    t = term_y_14;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(s_0, t);
                    t = o_2;
                    t = has_layout_0_0(t);
                    t = o_2;
                    t = layout2box_0_0(t);
                    q_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_2), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_b_15), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_2))), q_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_2))))), v_2);
                    ;
                    LocalPopChoice(t_14);
                  }
                else
                  {
                    t = s_14;
                    {
                      ATerm c_15 = t;
                      int d_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_1 = NULL;
                          ATerm e_15 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm c_2 = NULL;
                              c_2 = t;
                              t = term_y_14;
                              t = get_options_0_0(t);
                              t = oncetd_1_0(v_0, t);
                              t = c_2;
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = e_15;
                            }
                          t = o_2;
                          t = has_significant_layout_0_0(t);
                          t = o_2;
                          t = layout2box_0_0(t);
                          r_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(w_2), r_2), r_1), n_2), v_2);
                          ;
                          LocalPopChoice(d_15);
                        }
                      else
                        {
                          t = c_15;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(w_2), r_2), n_2), v_2);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = u_3(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = Cons_2_0(_id, _id, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm f_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_6 = NULL;
      ATerm i_15 = t;
      int j_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(j_15);
        }
      else
        {
          t = i_15;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_15 = ATgetFirst((ATermList) t);
              ATerm o_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      y_6 = t;
      t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, y_6);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = f_15;
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_15 = t;
      if((PushChoice() == 0))
        {
          t = layout_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_15;
        }
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        ATerm s_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_6 = NULL;
            t = layout_1_0(_id, t);
            z_6 = t;
            t = term_y_14;
            t = get_options_0_0(t);
            t = oncetd_1_0(b_1, t);
            t = z_6;
            t = has_layout_0_0(t);
            t = layout2box_0_0(t);
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = s_15;
            t = layout_1_0(_id, t);
            {
              ATerm x_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm b_7 = NULL;
                  b_7 = t;
                  t = term_y_14;
                  t = get_options_0_0(t);
                  t = oncetd_1_0(c_1, t);
                  t = b_7;
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = x_15;
                }
              t = has_significant_layout_0_0(t);
              t = layout2box_0_0(t);
            }
          }
      }
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm p_4 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_4 != NULL) && (m_4 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_4 = ATgetFirst((ATermList) t);
        {
          ATerm y_15 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm z_15 = ATgetFirst((ATermList) t);
        p_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = p_4;
    return(t);
  }
  t = _2_0(_id, w_0, t);
  {
    ATerm n_7 (ATerm t)
    {
      ATerm r_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
          if(match_cons(t, sym__2))
            {
              u_6 = ATgetArgument(t, 0);
              x_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_6;
          if(match_cons(t, sym_H_2))
            {
              v_6 = ATgetArgument(t, 0);
              w_6 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
              t = InsLayout_1_0(n_7, t);
              if(match_cons(t, sym__2))
                {
                  v_4 = ATgetArgument(t, 0);
                  w_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, v_6, v_4), w_4);
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  v_6 = ATgetArgument(t, 0);
                  w_6 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
                  t = InsLayout_1_0(n_7, t);
                  if(match_cons(t, sym__2))
                    {
                      v_4 = ATgetArgument(t, 0);
                      w_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, v_6, v_4), w_4);
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      v_6 = ATgetArgument(t, 0);
                      w_6 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
                      t = InsLayout_1_0(n_7, t);
                      if(match_cons(t, sym__2))
                        {
                          v_4 = ATgetArgument(t, 0);
                          w_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, v_6, v_4), w_4);
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          v_6 = ATgetArgument(t, 0);
                          w_6 = ATgetArgument(t, 1);
                          l_6 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, l_6, x_6);
                          t = InsLayout_1_0(n_7, t);
                          if(match_cons(t, sym__2))
                            {
                              v_4 = ATgetArgument(t, 0);
                              w_4 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, v_6, w_6, v_4), w_4);
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              v_6 = ATgetArgument(t, 0);
                              w_6 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
                              t = InsLayout_1_0(n_7, t);
                              if(match_cons(t, sym__2))
                                {
                                  v_4 = ATgetArgument(t, 0);
                                  w_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, v_6, v_4), w_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  v_6 = ATgetArgument(t, 0);
                                  w_6 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym__2, v_6, x_6);
                                  t = InsLayout_1_0(n_7, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      r_4 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_16 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
                                  t = InsLayout_1_0(n_7, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      v_4 = ATgetArgument(t, 0);
                                      x_4 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, r_4, v_4), x_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      v_6 = ATgetArgument(t, 0);
                                      w_6 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
                                      t = InsLayout_1_0(n_7, t);
                                      if(match_cons(t, sym__2))
                                        {
                                          v_4 = ATgetArgument(t, 0);
                                          w_4 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, v_6, v_4), w_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          v_6 = ATgetArgument(t, 0);
                                          w_6 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
                                          t = InsLayout_1_0(n_7, t);
                                          if(match_cons(t, sym__2))
                                            {
                                              v_4 = ATgetArgument(t, 0);
                                              w_4 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, v_6, v_4), w_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              v_6 = ATgetArgument(t, 0);
                                              w_6 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
                                              t = InsLayout_1_0(n_7, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  v_4 = ATgetArgument(t, 0);
                                                  w_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, v_6, v_4), w_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  v_6 = ATgetArgument(t, 0);
                                                  w_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
                                              t = InsLayout_1_0(n_7, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  v_4 = ATgetArgument(t, 0);
                                                  w_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, v_6, v_4), w_4);
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
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          {
            ATerm d_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(x_0, _id, t);
                t = InsLayout_1_0(n_7, t);
                ;
                LocalPopChoice(f_16);
              }
            else
              {
                t = d_16;
              }
          }
        }
      return(t);
    }
    t = n_7(t);
    t = _2_0(y_0, _id, t);
    if(match_cons(t, sym__2))
      {
        n_4 = ATgetArgument(t, 0);
        {
          ATerm g_16 = ATgetArgument(t, 1);
          if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
            {
              o_4 = ATgetFirst((ATermList) g_16);
              {
                ATerm h_16 = (ATerm) ATgetNext((ATermList) g_16);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_4), n_4), not_null(m_4));
    t = filter_1_0(z_0, t);
    t = flat_list_0_0(t);
    f_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_7 = ATgetFirst((ATermList) t);
        e_7 = (ATerm) ATgetNext((ATermList) t);
        t = e_7;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm j_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_7;
                ;
                LocalPopChoice(s_16);
              }
            else
              {
                t = j_16;
                t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_b_15), f_7);
              }
          }
        else
          {
            t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_b_15), f_7);
          }
      }
    else
      {
        t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_b_15), f_7);
      }
  }
  return(t);
}
ATerm layout_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  x_8 = t;
  if(match_cons(t, sym_layout_1))
    {
      v_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_8);
  t_8 = t;
  t = v_8;
  t = x_92(t);
  w_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, w_8), t_8);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 = NULL,x_9 = NULL;
      ATerm j_1 (ATerm t)
      {
        t = not_null(x_9);
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          if(((v_9 != NULL) && (v_9 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_9 = ATgetArgument(t, 0);
          if(((x_9 != NULL) && (x_9 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(v_9);
      t = at_end_1_0(j_1, t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm f_10 = NULL,g_10 = NULL;
        f_10 = t;
        t = SSL_explode_term(f_10);
        if(match_cons(t, sym__2))
          {
            ATerm w_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_16) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_10;
        t = concat_0_0(t);
      }
    }
  return(t);
}
ATerm collect_p__1_0 (ATerm x_136 (ATerm), ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    ATerm x_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = NULL;
        t = x_136(t);
        e_9 = t;
        t = (ATerm) ATinsert(ATempty, e_9);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = x_16;
        {
          ATerm d_9 = NULL,k_9 = NULL;
          d_9 = t;
          t = SSL_explode_term(d_9);
          if(match_cons(t, sym__2))
            {
              ATerm b_17 = ATgetArgument(t, 0);
              k_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_9;
          t = foldr_3_0(e_1, f_1, o_9, t);
        }
      }
    return(t);
  }
  t = o_9(t);
  return(t);
}
ATerm amb_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  t_9 = t;
  if(match_cons(t, sym_amb_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_9);
  q_9 = t;
  t = r_9;
  t = n_101(t);
  s_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, s_9), q_9);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  t = amb_1_0(_id, t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = (ATerm) ATinsert(ATempty, term_c_17);
  return(t);
}
ATerm k_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_10;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_17 = ATgetFirst((ATermList) t);
          ATerm e_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_10;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm f_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = f_17;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(k_1, flat_list_0_0, t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            {
              ATerm n_17 = t;
              int o_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL,d_10 = NULL,e_10 = NULL;
                  t = Cons_2_0(l_1, _id, t);
                  a_10 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_10 = ATgetFirst((ATermList) t);
                      {
                        ATerm r_17 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = a_10;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm s_17 = ATgetFirst((ATermList) t);
                      e_10 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
                  {
                    ATerm t_17 = t;
                    int u_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm w_17 = ATgetArgument(t, 0);
                            ATerm x_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = d_10;
                        {
                          ATerm m_1 (ATerm t)
                          {
                            t = e_10;
                            return(t);
                          }
                          t = at_end_1_0(m_1, t);
                        }
                        ;
                        LocalPopChoice(u_17);
                      }
                    else
                      {
                        t = t_17;
                        {
                          ATerm k_10 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_10, e_10));
                          if(match_cons(t, sym__2))
                            {
                              ATerm y_17 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) y_17) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              k_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = k_10;
                          t = concat_0_0(t);
                        }
                      }
                    t = flat_list_0_0(t);
                  }
                  ;
                  LocalPopChoice(o_17);
                }
              else
                {
                  t = n_17;
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
  ATerm b_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      k_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      {
        ATerm r_11 = NULL,s_11 = NULL;
        t = term_z_10;
        t = d_0(t);
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_11, r_11);
        t = index_0_0(t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_11, s_11);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm y_11 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          k_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_z_10;
      t = d_0(t);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_11, y_11);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = bottomup_1_0(y_108, t);
    return(t);
  }
  t = SRTS_all(n_1, t);
  t = y_108(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = collect_p__1_0(p_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(_id, t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2_0(_id, _id, t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            t = S_1_0(_id, t);
          }
      }
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm filter_literals_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      {
        ATerm d_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = _2_0(o_1, _id, t);
  {
    ATerm v_15 (ATerm t)
    {
      ATerm f_13 = NULL,g_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,r_13 = NULL,u_13 = NULL;
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(s_1, w_1, t);
          ;
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          {
            ATerm e_16 (ATerm l_14, ATerm u_14, ATerm v_14, ATerm t)
            {
              t = l_14;
              if(((u_13 != NULL) && (u_13 != t)))
                _fail(t);
              else
                u_13 = t;
              t = u_14;
              if(((g_13 != NULL) && (g_13 != t)))
                _fail(t);
              else
                g_13 = t;
              t = v_14;
              if(((m_13 != NULL) && (m_13 != t)))
                _fail(t);
              else
                m_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
              t = v_15(t);
              if(match_cons(t, sym__2))
                {
                  if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    l_13 = ATgetArgument(t, 0);
                  if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    n_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_13)), l_14), not_null(n_13));
              return(t);
            }
            ATerm w_14 = NULL,x_14 = NULL,g_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,t_15 = NULL,u_15 = NULL;
            if(match_cons(t, sym__2))
              {
                g_15 = ATgetArgument(t, 0);
                n_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_15;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_15 = ATgetFirst((ATermList) t);
                m_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_15;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_15 = ATgetFirst((ATermList) t);
                u_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_15;
            if(match_cons(t, sym_Arg_1))
              {
                w_14 = ATgetArgument(t, 0);
                {
                  ATerm g_18 = t;
                  int i_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_14;
                      if(((f_13 != NULL) && (f_13 != t)))
                        _fail(t);
                      else
                        f_13 = t;
                      t = m_15;
                      if(((g_13 != NULL) && (g_13 != t)))
                        _fail(t);
                      else
                        g_13 = t;
                      t = t_15;
                      if(((r_13 != NULL) && (r_13 != t)))
                        _fail(t);
                      else
                        r_13 = t;
                      t = u_15;
                      if(((m_13 != NULL) && (m_13 != t)))
                        _fail(t);
                      else
                        m_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_15, u_15);
                      t = v_15(t);
                      if(match_cons(t, sym__2))
                        {
                          if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            l_13 = ATgetArgument(t, 0);
                          if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            n_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_13)), (ATerm) ATmakeAppl(sym_Arg_1, w_14)), (ATerm) ATinsert(CheckATermList(not_null(n_13)), t_15));
                      ;
                      LocalPopChoice(i_18);
                    }
                  else
                    {
                      t = g_18;
                      t = e_16(l_15, m_15, u_15, t);
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Arg2_2))
                  {
                    w_14 = ATgetArgument(t, 0);
                    x_14 = ATgetArgument(t, 1);
                    {
                      ATerm m_18 = t;
                      int r_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_14;
                          if(((f_13 != NULL) && (f_13 != t)))
                            _fail(t);
                          else
                            f_13 = t;
                          t = x_14;
                          if(((z_12 != NULL) && (z_12 != t)))
                            _fail(t);
                          else
                            z_12 = t;
                          t = m_15;
                          if(((g_13 != NULL) && (g_13 != t)))
                            _fail(t);
                          else
                            g_13 = t;
                          t = t_15;
                          if(((r_13 != NULL) && (r_13 != t)))
                            _fail(t);
                          else
                            r_13 = t;
                          t = u_15;
                          if(((m_13 != NULL) && (m_13 != t)))
                            _fail(t);
                          else
                            m_13 = t;
                          t = (ATerm) ATmakeAppl(sym__2, m_15, u_15);
                          t = v_15(t);
                          if(match_cons(t, sym__2))
                            {
                              if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                l_13 = ATgetArgument(t, 0);
                              if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                n_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_13)), (ATerm) ATmakeAppl(sym_Arg2_2, w_14, x_14)), (ATerm) ATinsert(CheckATermList(not_null(n_13)), t_15));
                          ;
                          LocalPopChoice(r_18);
                        }
                      else
                        {
                          t = m_18;
                          t = e_16(l_15, m_15, u_15, t);
                        }
                    }
                  }
                else
                  {
                    t = e_16(l_15, m_15, u_15, t);
                  }
              }
          }
        }
      return(t);
    }
    t = v_15(t);
    if(match_cons(t, sym__2))
      {
        ATerm s_18 = ATgetArgument(t, 0);
        e_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, y_12, e_13);
  }
  return(t);
}
ATerm instantiate_list_1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm t_16 (ATerm t)
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        {
          ATerm k_16 = NULL,l_16 = NULL,n_16 = NULL;
          ATerm x_1 (ATerm t)
          {
            ATerm q_16 = NULL;
            ATerm i_2 (ATerm t)
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_19 = t;
                  int o_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATempty, not_null(l_16));
                        return(t);
                      }
                      t = Instantiate_1_0(j_2, t);
                      ;
                      LocalPopChoice(o_19);
                    }
                  else
                    {
                      t = n_19;
                      t = flat_list_0_0(t);
                    }
                  ;
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                }
              return(t);
            }
            t = term_z_10;
            t = d_137(t);
            if(((q_16 != NULL) && (q_16 != t)))
              _fail(t);
            else
              q_16 = t;
            t = bottomup_1_0(i_2, t);
            return(t);
          }
          ATerm h_2 (ATerm t)
          {
            t = not_null(n_16);
            t = t_16(t);
            return(t);
          }
          if(((k_16 != NULL) && (k_16 != t)))
            _fail(t);
          else
            k_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((l_16 != NULL) && (l_16 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                l_16 = ATgetFirst((ATermList) t);
              if(((n_16 != NULL) && (n_16 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                n_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = not_null(k_16);
          t = Cons_2_0(x_1, h_2, t);
        }
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm build_list_0_0 (ATerm t)
{
  ATerm y_16 = NULL,a_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,p_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__4))
    {
      y_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
      h_17 = ATgetArgument(t, 2);
      i_17 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_17, (ATerm) ATinsert(ATempty, i_17));
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            ATerm v_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_17;
        {
          ATerm k_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, i_17);
            return(t);
          }
          t = at_end_1_0(k_2, t);
        }
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          ATerm c_12 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_17, (ATerm) ATinsert(ATempty, i_17)));
          if(match_cons(t, sym__2))
            {
              ATerm w_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_19) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              c_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_12;
          t = concat_0_0(t);
        }
      }
    j_17 = t;
    t = y_16;
    {
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            if(((p_17 != NULL) && (p_17 != t)))
              _fail(t);
            else
              p_17 = t;
            return(t);
          }
          t = iter_1_0(l_2, t);
          ;
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          {
            ATerm m_2 (ATerm t)
            {
              if(((p_17 != NULL) && (p_17 != t)))
                _fail(t);
              else
                p_17 = t;
              return(t);
            }
            t = iter_star_1_0(m_2, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, y_16, j_17);
      t = get_pp_entry_0_0(t);
      q_17 = t;
      t = a_17;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm v_17 = NULL;
          v_17 = t;
          t = (ATerm) ATmakeAppl(sym__4, not_null(p_17), v_17, j_17, term_z_19);
          t = symbol2abox_0_0(t);
          return(t);
        }
        t = map_1_0(p_2, t);
        {
          ATerm q_2 (ATerm t)
          {
            t = q_17;
            return(t);
          }
          t = instantiate_list_1_0(q_2, t);
        }
      }
    }
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm f_137 (ATerm), ATerm t)
{
  ATerm v_18 (ATerm t)
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        {
          ATerm d_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, s_2, t);
              ;
              LocalPopChoice(m_20);
            }
          else
            {
              t = d_20;
              {
                ATerm h_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
                ATerm t_2 (ATerm t)
                {
                  ATerm t_18 = NULL;
                  ATerm y_2 (ATerm t)
                  {
                    ATerm v_20 = t;
                    int w_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_20 = t;
                        int y_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_2 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_18)), not_null(n_18));
                              return(t);
                            }
                            t = Instantiate_1_0(z_2, t);
                            ;
                            LocalPopChoice(y_20);
                          }
                        else
                          {
                            t = x_20;
                            t = flat_list_0_0(t);
                          }
                        ;
                        LocalPopChoice(w_20);
                      }
                    else
                      {
                        t = v_20;
                      }
                    return(t);
                  }
                  t = term_z_10;
                  t = f_137(t);
                  if(((t_18 != NULL) && (t_18 != t)))
                    _fail(t);
                  else
                    t_18 = t;
                  t = bottomup_1_0(y_2, t);
                  return(t);
                }
                ATerm x_2 (ATerm t)
                {
                  t = not_null(q_18);
                  t = v_18(t);
                  return(t);
                }
                if(((h_18 != NULL) && (h_18 != t)))
                  _fail(t);
                else
                  h_18 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((n_18 != NULL) && (n_18 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      n_18 = ATgetFirst((ATermList) t);
                    if(((o_18 != NULL) && (o_18 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      o_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = not_null(o_18);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((p_18 != NULL) && (p_18 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      p_18 = ATgetFirst((ATermList) t);
                    if(((q_18 != NULL) && (q_18 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      q_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = not_null(h_18);
                t = Cons_2_0(t_2, x_2, t);
              }
            }
        }
      }
    return(t);
  }
  t = v_18(t);
  return(t);
}
ATerm BuildSepList_4_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL,k_19 = NULL;
        t = SSL_mod(f_19, (ATerm) ATmakeInt(2));
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = term_z_10;
        t = z_106(t);
        j_19 = t;
        t = term_z_10;
        t = a_107(t);
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym__4, j_19, g_19, k_19, term_y_21);
        t = symbol2abox_0_0(t);
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_19 = NULL;
              r_19 = t;
              {
                ATerm b_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_12 = NULL;
                    j_12 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = j_12;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_22 = ATgetFirst((ATermList) t);
                            ATerm d_22 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = j_12;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_22;
                  }
                t = (ATerm) ATinsert(ATempty, r_19);
              }
              ;
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
            }
        }
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = a_21;
        {
          ATerm t_19 = NULL,u_19 = NULL;
          t = term_z_10;
          t = y_106(t);
          t_19 = t;
          t = term_z_10;
          t = a_107(t);
          u_19 = t;
          t = (ATerm) ATmakeAppl(sym__4, t_19, g_19, u_19, term_z_19);
          t = symbol2abox_0_0(t);
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_20 = NULL;
                a_20 = t;
                {
                  ATerm g_22 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm p_12 = NULL;
                      p_12 = t;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = p_12;
                        }
                      else
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm h_22 = ATgetFirst((ATermList) t);
                              ATerm i_22 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = p_12;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = g_22;
                    }
                  t = (ATerm) ATinsert(ATempty, a_20);
                }
                ;
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
              }
          }
        }
      }
  }
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      {
        ATerm j_22 = ATgetArgument(t, 1);
        if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
          {
            f_20 = ATgetFirst((ATermList) j_22);
            g_20 = (ATerm) ATgetNext((ATermList) j_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_20, term_z_19);
  {
    ATerm k_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(e_20, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = k_22;
        t = SSL_addr(e_20, (ATerm) ATmakeInt(1));
      }
    h_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_20, f_20), (ATerm) ATmakeAppl(sym__2, h_20, g_20));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t)
{
  ATerm i_20 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = t_116(t);
        t = _2_0(v_116, i_20, t);
        t = u_116(t);
      }
    return(t);
  }
  t = i_20(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      ATerm q_22 = ATgetArgument(t, 1);
      if(((ATgetType(q_22) != AT_LIST) || !(ATisEmpty(q_22))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_20), k_20);
  return(t);
}
ATerm nzip_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, j_20);
  t = genzip_4_0(a_3, NZip2_0_0, b_3, e_117, t);
  return(t);
}
ATerm build_sep_list_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__4))
    {
      n_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
      p_20 = ATgetArgument(t, 2);
      q_20 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_20, (ATerm) ATinsert(ATempty, q_20));
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            ATerm v_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_20;
        {
          ATerm c_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, q_20);
            return(t);
          }
          t = at_end_1_0(c_3, t);
        }
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm w_12 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_20, (ATerm) ATinsert(ATempty, q_20)));
          if(match_cons(t, sym__2))
            {
              ATerm w_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_22) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_12;
          t = concat_0_0(t);
        }
      }
    r_20 = t;
    t = n_20;
    {
      ATerm x_22 = t;
      int y_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_3 (ATerm t)
          {
            if(((s_20 != NULL) && (s_20 != t)))
              _fail(t);
            else
              s_20 = t;
            return(t);
          }
          ATerm e_3 (ATerm t)
          {
            if(((t_20 != NULL) && (t_20 != t)))
              _fail(t);
            else
              t_20 = t;
            return(t);
          }
          t = iter_sep_2_0(d_3, e_3, t);
          ;
          LocalPopChoice(y_22);
        }
      else
        {
          t = x_22;
          {
            ATerm f_3 (ATerm t)
            {
              if(((s_20 != NULL) && (s_20 != t)))
                _fail(t);
              else
                s_20 = t;
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              if(((t_20 != NULL) && (t_20 != t)))
                _fail(t);
              else
                t_20 = t;
              return(t);
            }
            t = iter_star_sep_2_0(f_3, g_3, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, n_20, r_20);
      t = get_pp_entry_0_0(t);
      u_20 = t;
      t = o_20;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(s_20);
            return(t);
          }
          ATerm j_3 (ATerm t)
          {
            t = not_null(t_20);
            return(t);
          }
          ATerm k_3 (ATerm t)
          {
            t = r_20;
            return(t);
          }
          ATerm l_3 (ATerm t)
          {
            t = q_20;
            return(t);
          }
          t = BuildSepList_4_0(i_3, j_3, k_3, l_3, t);
          return(t);
        }
        t = nzip_1_0(h_3, t);
        {
          ATerm n_3 (ATerm t)
          {
            t = u_20;
            return(t);
          }
          t = instantiate_sep_list_1_0(n_3, t);
        }
      }
    }
  }
  return(t);
}
ATerm Ind2_0_0 (ATerm t)
{
  ATerm z_20 = NULL,b_21 = NULL,d_21 = NULL;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      {
        ATerm z_22 = ATgetArgument(t, 1);
        if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
          {
            ATerm a_23 = ATgetFirst((ATermList) z_22);
            b_21 = (ATerm) ATgetNext((ATermList) z_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_20, term_y_21);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_20, term_z_19);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(z_20, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = SSL_subtr(z_20, (ATerm) ATmakeInt(1));
      }
    d_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_21, b_21);
  }
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm e_21 = NULL;
  t = repeat_1_0(Ind2_0_0, t);
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(((ATgetType(e_23) != AT_INT) || (ATgetInt((ATermInt) e_23) != 1)))
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
          {
            e_21 = ATgetFirst((ATermList) f_23);
            {
              ATerm g_23 = (ATerm) ATgetNext((ATermList) f_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_21;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm h_23 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_23;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm i_23 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_23;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  o_31 = t;
  if(match_cons(t, sym__4))
    {
      p_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
      s_31 = ATgetArgument(t, 2);
      t_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_31;
  if(match_cons(t, sym_seq_1))
    {
      q_31 = ATgetArgument(t, 0);
      {
        ATerm i_16 = NULL,m_16 = NULL,o_16 = NULL,p_16 = NULL,r_16 = NULL;
        t = r_31;
        if(match_cons(t, sym_appl_2))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            n_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_31, (ATerm) ATinsert(ATempty, t_31));
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm m_23 = ATgetArgument(t, 0);
                  ATerm n_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_31;
              {
                ATerm v_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, t_31);
                  return(t);
                }
                t = at_end_1_0(v_3, t);
              }
              ;
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              {
                ATerm g_17 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_31, (ATerm) ATinsert(ATempty, t_31)));
                if(match_cons(t, sym__2))
                  {
                    ATerm o_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    g_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_17;
                t = concat_0_0(t);
              }
            }
          i_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, q_31), i_16);
          t = get_pp_entry_0_0(t);
          m_16 = t;
          t = q_31;
          t = filter_1_0(w_3, t);
          o_16 = t;
          t = n_31;
          t = filter_1_0(x_3, t);
          p_16 = t;
          t = (ATerm) ATmakeAppl(sym__4, o_16, p_16, i_16, term_z_19);
          t = seq2abox_0_0(t);
          r_16 = t;
          t = m_16;
          {
            ATerm y_3 (ATerm t)
            {
              ATerm p_23 = t;
              int r_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_23 = t;
                  int t_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_3 (ATerm t)
                      {
                        t = r_16;
                        return(t);
                      }
                      t = Instantiate_1_0(z_3, t);
                      ;
                      LocalPopChoice(t_23);
                    }
                  else
                    {
                      t = s_23;
                      t = flat_list_0_0(t);
                    }
                  ;
                  LocalPopChoice(r_23);
                }
              else
                {
                  t = p_23;
                }
              return(t);
            }
            t = bottomup_1_0(y_3, t);
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          q_31 = ATgetArgument(t, 0);
          j_31 = ATgetArgument(t, 1);
          {
            ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, s_31, (ATerm) ATinsert(ATempty, t_31));
            {
              ATerm u_23 = t;
              int v_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_23 = ATgetArgument(t, 0);
                      ATerm x_23 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_31;
                  {
                    ATerm a_4 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, t_31);
                      return(t);
                    }
                    t = at_end_1_0(a_4, t);
                  }
                  ;
                  LocalPopChoice(v_23);
                }
              else
                {
                  t = u_23;
                  {
                    ATerm a_31 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_31, (ATerm) ATinsert(ATempty, t_31)));
                    if(match_cons(t, sym__2))
                      {
                        ATerm y_23 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) y_23) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        a_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_31;
                    t = concat_0_0(t);
                  }
                }
              j_18 = t;
              t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, q_31, j_31), r_31, j_18, term_z_19);
              {
                ATerm s_29 (ATerm t)
                {
                  ATerm u_29 (ATerm u_18, ATerm w_18, ATerm x_18, ATerm y_18, ATerm z_18, ATerm a_19, ATerm b_19, ATerm c_19, ATerm d_19, ATerm e_19, ATerm t)
                  {
                    ATerm c_21 = NULL;
                    t = y_18;
                    if((u_18 != t))
                      {
                        _fail(t);
                      }
                    t = z_18;
                    if((w_18 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, d_19, term_z_19);
                    {
                      ATerm z_23 = t;
                      int a_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = SSL_addi(d_19, (ATerm) ATmakeInt(1));
                          ;
                          LocalPopChoice(a_24);
                        }
                      else
                        {
                          t = z_23;
                          t = SSL_addr(d_19, (ATerm) ATmakeInt(1));
                        }
                      c_21 = t;
                      t = (ATerm) ATmakeAppl(sym__4, w_18, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, x_18), w_18, a_19), b_19), c_19, c_21);
                      t = s_29(t);
                    }
                    return(t);
                  }
                  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
                  o_21 = t;
                  if(match_cons(t, sym__4))
                    {
                      p_21 = ATgetArgument(t, 0);
                      q_21 = ATgetArgument(t, 1);
                      v_21 = ATgetArgument(t, 2);
                      w_21 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_21;
                  if(match_cons(t, sym_appl_2))
                    {
                      r_21 = ATgetArgument(t, 0);
                      s_21 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_21;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_21 = ATgetFirst((ATermList) t);
                      u_21 = (ATerm) ATgetNext((ATermList) t);
                      t = u_21;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = r_21;
                          if(match_cons(t, sym_prod_3))
                            {
                              h_21 = ATgetArgument(t, 0);
                              k_21 = ATgetArgument(t, 1);
                              n_21 = ATgetArgument(t, 2);
                              t = k_21;
                              if(match_cons(t, sym_alt_2))
                                {
                                  l_21 = ATgetArgument(t, 0);
                                  m_21 = ATgetArgument(t, 1);
                                  t = h_21;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      i_21 = ATgetFirst((ATermList) t);
                                      j_21 = (ATerm) ATgetNext((ATermList) t);
                                      t = j_21;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = p_21;
                                          if(match_cons(t, sym_alt_2))
                                            {
                                              f_21 = ATgetArgument(t, 0);
                                              g_21 = ATgetArgument(t, 1);
                                              {
                                                ATerm b_24 = t;
                                                int c_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = i_21;
                                                    if((f_21 != t))
                                                      {
                                                        _fail(t);
                                                      }
                                                    t = l_21;
                                                    if((f_21 != t))
                                                      {
                                                        _fail(t);
                                                      }
                                                    t = m_21;
                                                    if((g_21 != t))
                                                      {
                                                        _fail(t);
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym__4, f_21, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, f_21), f_21, n_21), s_21), v_21, w_21);
                                                    t = s_29(t);
                                                    ;
                                                    LocalPopChoice(c_24);
                                                  }
                                                else
                                                  {
                                                    t = b_24;
                                                    {
                                                      ATerm d_24 = t;
                                                      int e_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = u_29(f_21, g_21, i_21, l_21, m_21, n_21, s_21, v_21, w_21, o_21, t);
                                                          ;
                                                          LocalPopChoice(e_24);
                                                        }
                                                      else
                                                        {
                                                          t = d_24;
                                                          {
                                                            ATerm l_22 = NULL;
                                                            ATerm b_4 (ATerm t)
                                                            {
                                                              ATerm f_24 = t;
                                                              int g_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_24 = t;
                                                                  int i_24 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm c_4 (ATerm t)
                                                                      {
                                                                        t = (ATerm) ATinsert(ATempty, not_null(l_18));
                                                                        return(t);
                                                                      }
                                                                      t = Instantiate_1_0(c_4, t);
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
                                                                  t = f_24;
                                                                }
                                                              return(t);
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_31, j_31), v_21);
                                                            t = get_pp_entry_0_0(t);
                                                            if(((k_18 != NULL) && (k_18 != t)))
                                                              _fail(t);
                                                            else
                                                              k_18 = t;
                                                            t = (ATerm) ATmakeAppl(sym__4, p_21, t_21, v_21, term_z_19);
                                                            t = symbol2abox_0_0(t);
                                                            if(((l_18 != NULL) && (l_18 != t)))
                                                              _fail(t);
                                                            else
                                                              l_18 = t;
                                                            t = (ATerm) ATmakeAppl(sym__2, w_21, not_null(k_18));
                                                            t = index_0_0(t);
                                                            if(((l_22 != NULL) && (l_22 != t)))
                                                              _fail(t);
                                                            else
                                                              l_22 = t;
                                                            t = (ATerm) ATinsert(ATempty, not_null(l_22));
                                                            t = bottomup_1_0(b_4, t);
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              ATerm t_22 = NULL;
                                              ATerm d_4 (ATerm t)
                                              {
                                                ATerm j_24 = t;
                                                int k_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm l_24 = t;
                                                    int m_24 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_4 (ATerm t)
                                                        {
                                                          t = (ATerm) ATinsert(ATempty, not_null(l_18));
                                                          return(t);
                                                        }
                                                        t = Instantiate_1_0(e_4, t);
                                                        ;
                                                        LocalPopChoice(m_24);
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
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_31, j_31), v_21);
                                              t = get_pp_entry_0_0(t);
                                              if(((k_18 != NULL) && (k_18 != t)))
                                                _fail(t);
                                              else
                                                k_18 = t;
                                              t = (ATerm) ATmakeAppl(sym__4, p_21, t_21, v_21, term_z_19);
                                              t = symbol2abox_0_0(t);
                                              if(((l_18 != NULL) && (l_18 != t)))
                                                _fail(t);
                                              else
                                                l_18 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, w_21, not_null(k_18));
                                              t = index_0_0(t);
                                              if(((t_22 != NULL) && (t_22 != t)))
                                                _fail(t);
                                              else
                                                t_22 = t;
                                              t = (ATerm) ATinsert(ATempty, not_null(t_22));
                                              t = bottomup_1_0(d_4, t);
                                            }
                                        }
                                      else
                                        {
                                          ATerm b_23 = NULL;
                                          ATerm f_4 (ATerm t)
                                          {
                                            ATerm n_24 = t;
                                            int o_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_24 = t;
                                                int q_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm g_4 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(l_18));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(g_4, t);
                                                    ;
                                                    LocalPopChoice(q_24);
                                                  }
                                                else
                                                  {
                                                    t = p_24;
                                                    t = flat_list_0_0(t);
                                                  }
                                                ;
                                                LocalPopChoice(o_24);
                                              }
                                            else
                                              {
                                                t = n_24;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_31, j_31), v_21);
                                          t = get_pp_entry_0_0(t);
                                          if(((k_18 != NULL) && (k_18 != t)))
                                            _fail(t);
                                          else
                                            k_18 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, p_21, t_21, v_21, term_z_19);
                                          t = symbol2abox_0_0(t);
                                          if(((l_18 != NULL) && (l_18 != t)))
                                            _fail(t);
                                          else
                                            l_18 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, w_21, not_null(k_18));
                                          t = index_0_0(t);
                                          if(((b_23 != NULL) && (b_23 != t)))
                                            _fail(t);
                                          else
                                            b_23 = t;
                                          t = (ATerm) ATinsert(ATempty, not_null(b_23));
                                          t = bottomup_1_0(f_4, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm q_23 = NULL;
                                      ATerm h_4 (ATerm t)
                                      {
                                        ATerm r_24 = t;
                                        int s_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_24 = t;
                                            int u_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm i_4 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(l_18));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(i_4, t);
                                                ;
                                                LocalPopChoice(u_24);
                                              }
                                            else
                                              {
                                                t = t_24;
                                                t = flat_list_0_0(t);
                                              }
                                            ;
                                            LocalPopChoice(s_24);
                                          }
                                        else
                                          {
                                            t = r_24;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_31, j_31), v_21);
                                      t = get_pp_entry_0_0(t);
                                      if(((k_18 != NULL) && (k_18 != t)))
                                        _fail(t);
                                      else
                                        k_18 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, p_21, t_21, v_21, term_z_19);
                                      t = symbol2abox_0_0(t);
                                      if(((l_18 != NULL) && (l_18 != t)))
                                        _fail(t);
                                      else
                                        l_18 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, w_21, not_null(k_18));
                                      t = index_0_0(t);
                                      if(((q_23 != NULL) && (q_23 != t)))
                                        _fail(t);
                                      else
                                        q_23 = t;
                                      t = (ATerm) ATinsert(ATempty, not_null(q_23));
                                      t = bottomup_1_0(h_4, t);
                                    }
                                }
                              else
                                {
                                  ATerm e_25 = NULL;
                                  ATerm j_4 (ATerm t)
                                  {
                                    ATerm v_24 = t;
                                    int w_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm x_24 = t;
                                        int y_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm k_4 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(l_18));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(k_4, t);
                                            ;
                                            LocalPopChoice(y_24);
                                          }
                                        else
                                          {
                                            t = x_24;
                                            t = flat_list_0_0(t);
                                          }
                                        ;
                                        LocalPopChoice(w_24);
                                      }
                                    else
                                      {
                                        t = v_24;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_31, j_31), v_21);
                                  t = get_pp_entry_0_0(t);
                                  if(((k_18 != NULL) && (k_18 != t)))
                                    _fail(t);
                                  else
                                    k_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, p_21, t_21, v_21, term_z_19);
                                  t = symbol2abox_0_0(t);
                                  if(((l_18 != NULL) && (l_18 != t)))
                                    _fail(t);
                                  else
                                    l_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, w_21, not_null(k_18));
                                  t = index_0_0(t);
                                  if(((e_25 != NULL) && (e_25 != t)))
                                    _fail(t);
                                  else
                                    e_25 = t;
                                  t = (ATerm) ATinsert(ATempty, not_null(e_25));
                                  t = bottomup_1_0(j_4, t);
                                }
                            }
                          else
                            {
                              ATerm b_26 = NULL;
                              ATerm l_4 (ATerm t)
                              {
                                ATerm z_24 = t;
                                int a_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_25 = t;
                                    int c_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm q_4 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(l_18));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(q_4, t);
                                        ;
                                        LocalPopChoice(c_25);
                                      }
                                    else
                                      {
                                        t = b_25;
                                        t = flat_list_0_0(t);
                                      }
                                    ;
                                    LocalPopChoice(a_25);
                                  }
                                else
                                  {
                                    t = z_24;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, q_31, j_31), v_21);
                              t = get_pp_entry_0_0(t);
                              if(((k_18 != NULL) && (k_18 != t)))
                                _fail(t);
                              else
                                k_18 = t;
                              t = (ATerm) ATmakeAppl(sym__4, p_21, t_21, v_21, term_z_19);
                              t = symbol2abox_0_0(t);
                              if(((l_18 != NULL) && (l_18 != t)))
                                _fail(t);
                              else
                                l_18 = t;
                              t = (ATerm) ATmakeAppl(sym__2, w_21, not_null(k_18));
                              t = index_0_0(t);
                              if(((b_26 != NULL) && (b_26 != t)))
                                _fail(t);
                              else
                                b_26 = t;
                              t = (ATerm) ATinsert(ATempty, not_null(b_26));
                              t = bottomup_1_0(l_4, t);
                            }
                        }
                      else
                        {
                          t = r_21;
                          if(match_cons(t, sym_prod_3))
                            {
                              h_21 = ATgetArgument(t, 0);
                              k_21 = ATgetArgument(t, 1);
                              n_21 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = p_21;
                          if(match_cons(t, sym_alt_2))
                            {
                              f_21 = ATgetArgument(t, 0);
                              g_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = h_21;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              i_21 = ATgetFirst((ATermList) t);
                              j_21 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = j_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = k_21;
                          if(match_cons(t, sym_alt_2))
                            {
                              l_21 = ATgetArgument(t, 0);
                              m_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          {
                            ATerm d_25 = t;
                            int f_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_21;
                                if((f_21 != t))
                                  {
                                    _fail(t);
                                  }
                                t = l_21;
                                if((f_21 != t))
                                  {
                                    _fail(t);
                                  }
                                t = m_21;
                                if((g_21 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym__4, f_21, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, f_21), f_21, n_21), s_21), v_21, w_21);
                                t = s_29(t);
                                ;
                                LocalPopChoice(f_25);
                              }
                            else
                              {
                                t = d_25;
                                t = u_29(f_21, g_21, i_21, l_21, m_21, n_21, s_21, v_21, w_21, o_21, t);
                              }
                          }
                        }
                    }
                  else
                    {
                      t = r_21;
                      if(match_cons(t, sym_prod_3))
                        {
                          h_21 = ATgetArgument(t, 0);
                          k_21 = ATgetArgument(t, 1);
                          n_21 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = p_21;
                      if(match_cons(t, sym_alt_2))
                        {
                          f_21 = ATgetArgument(t, 0);
                          g_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_21;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          i_21 = ATgetFirst((ATermList) t);
                          j_21 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = j_21;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = k_21;
                      if(match_cons(t, sym_alt_2))
                        {
                          l_21 = ATgetArgument(t, 0);
                          m_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm g_25 = t;
                        int h_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = i_21;
                            if((f_21 != t))
                              {
                                _fail(t);
                              }
                            t = l_21;
                            if((f_21 != t))
                              {
                                _fail(t);
                              }
                            t = m_21;
                            if((g_21 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, f_21, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, f_21), f_21, n_21), s_21), v_21, w_21);
                            t = s_29(t);
                            ;
                            LocalPopChoice(h_25);
                          }
                        else
                          {
                            t = g_25;
                            t = u_29(f_21, g_21, i_21, l_21, m_21, n_21, s_21, v_21, w_21, o_21, t);
                          }
                      }
                    }
                  return(t);
                }
                t = s_29(t);
              }
            }
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              q_31 = ATgetArgument(t, 0);
              j_31 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, q_31, j_31), r_31, s_31, t_31);
              t = build_sep_list_0_0(t);
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  q_31 = ATgetArgument(t, 0);
                  j_31 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, q_31, j_31), r_31, s_31, t_31);
                  t = build_sep_list_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      q_31 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, q_31), r_31, s_31, t_31);
                      t = build_list_0_0(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          q_31 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, q_31), r_31, s_31, t_31);
                          t = build_list_0_0(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              q_31 = ATgetArgument(t, 0);
                              t = r_31;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm i_25 = ATgetArgument(t, 0);
                                  n_31 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = n_31;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  k_31 = ATgetFirst((ATermList) t);
                                  l_31 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,b_38 = NULL,c_38 = NULL;
                                    t = l_31;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, s_31, (ATerm) ATinsert(ATempty, t_31));
                                    {
                                      ATerm j_25 = t;
                                      int k_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym__2))
                                            {
                                              ATerm l_25 = ATgetArgument(t, 0);
                                              ATerm m_25 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = s_31;
                                          {
                                            ATerm s_4 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, t_31);
                                              return(t);
                                            }
                                            t = at_end_1_0(s_4, t);
                                          }
                                          ;
                                          LocalPopChoice(k_25);
                                        }
                                      else
                                        {
                                          t = j_25;
                                          {
                                            ATerm w_37 = NULL;
                                            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_31, (ATerm) ATinsert(ATempty, t_31)));
                                            if(match_cons(t, sym__2))
                                              {
                                                ATerm n_25 = ATgetArgument(t, 0);
                                                if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("", 0, ATtrue)))
                                                  _fail(t);
                                                w_37 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = w_37;
                                            t = concat_0_0(t);
                                          }
                                        }
                                      i_37 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, q_31), i_37);
                                      t = get_pp_entry_0_0(t);
                                      j_37 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, q_31, k_31, i_37, term_z_19);
                                      t = symbol2abox_0_0(t);
                                      k_37 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, j_37, (ATerm) ATinsert(ATempty, k_37));
                                      t = filter_literals_0_0(t);
                                      if(match_cons(t, sym__2))
                                        {
                                          b_38 = ATgetArgument(t, 0);
                                          c_38 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = b_38;
                                      {
                                        ATerm t_4 (ATerm t)
                                        {
                                          ATerm o_25 = t;
                                          int p_25 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm q_25 = t;
                                              int r_25 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_4 (ATerm t)
                                                  {
                                                    t = c_38;
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(u_4, t);
                                                  ;
                                                  LocalPopChoice(r_25);
                                                }
                                              else
                                                {
                                                  t = q_25;
                                                  t = flat_list_0_0(t);
                                                }
                                              ;
                                              LocalPopChoice(p_25);
                                            }
                                          else
                                            {
                                              t = o_25;
                                            }
                                          return(t);
                                        }
                                        t = bottomup_1_0(t_4, t);
                                      }
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
                              ATerm s_25 = t;
                              int t_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm u_25 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(t_25);
                                  {
                                    ATerm v_25 = t;
                                    int w_25 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = r_31;
                                        {
                                          ATerm x_25 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm g_38 = NULL;
                                              g_38 = t;
                                              t = SSL_is_string(g_38);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = x_25;
                                            }
                                          t = r_31;
                                          {
                                            ATerm y_25 = t;
                                            int z_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = application_to_abox_0_0(t);
                                                ;
                                                LocalPopChoice(z_25);
                                              }
                                            else
                                              {
                                                t = y_25;
                                                t = fatal_ambiguity_0_0(t);
                                              }
                                          }
                                        }
                                        ;
                                        LocalPopChoice(w_25);
                                      }
                                    else
                                      {
                                        t = v_25;
                                        t = SSL_is_string(r_31);
                                        t = (ATerm) ATmakeAppl(sym_S_1, r_31);
                                      }
                                  }
                                }
                              else
                                {
                                  t = s_25;
                                  {
                                    ATerm a_26 = t;
                                    int c_26 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm d_26 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(c_26);
                                        {
                                          ATerm s_38 = NULL;
                                          t = SSL_implode_string((ATerm) ATinsert(ATempty, r_31));
                                          s_38 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, s_38);
                                        }
                                      }
                                    else
                                      {
                                        t = a_26;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            q_31 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, q_31);
                                      }
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
ATerm o_35 (ATerm h_33, ATerm i_33, ATerm j_33, ATerm k_33, ATerm l_33, ATerm m_33, ATerm n_33, ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,b_34 = NULL;
  t = (ATerm) ATmakeAppl(sym__4, h_33, j_33, l_33, m_33);
  t = symbol2abox_0_0(t);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_33, term_z_19);
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_33, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = SSL_addr(m_33, (ATerm) ATmakeInt(1));
      }
    b_34 = t;
    t = (ATerm) ATmakeAppl(sym__4, i_33, k_33, l_33, b_34);
    t = seq2abox_0_0(t);
    y_33 = t;
    t = (ATerm) ATinsert(CheckATermList(y_33), x_33);
  }
  return(t);
}
ATerm seq2abox_0_0 (ATerm t)
{
  ATerm h_34 = NULL,j_34 = NULL,l_34 = NULL,n_34 = NULL,p_34 = NULL,r_34 = NULL,t_34 = NULL,v_34 = NULL,w_34 = NULL;
  h_34 = t;
  if(match_cons(t, sym__4))
    {
      j_34 = ATgetArgument(t, 0);
      p_34 = ATgetArgument(t, 1);
      v_34 = ATgetArgument(t, 2);
      w_34 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = j_34;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_34;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_34 = ATgetFirst((ATermList) t);
          n_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_34 = ATgetFirst((ATermList) t);
          t_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_34;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm i_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(h_26);
            t = l_34;
            {
              ATerm j_26 = t;
              int k_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm l_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_26);
                  {
                    ATerm m_26 = t;
                    int n_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, n_34, t_34, v_34, w_34);
                        t = seq2abox_0_0(t);
                        ;
                        LocalPopChoice(n_26);
                      }
                    else
                      {
                        t = m_26;
                        t = o_35(l_34, n_34, r_34, t_34, v_34, w_34, h_34, t);
                      }
                  }
                }
              else
                {
                  t = j_26;
                  t = o_35(l_34, n_34, r_34, t_34, v_34, w_34, h_34, t);
                }
            }
          }
        else
          {
            t = g_26;
            t = l_34;
            t = o_35(l_34, n_34, r_34, t_34, v_34, w_34, h_34, t);
          }
      }
    }
  return(t);
}
ATerm lit_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  s_35 = t;
  if(match_cons(t, sym_lit_1))
    {
      q_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_35);
  p_35 = t;
  t = q_35;
  t = s_100(t);
  r_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, r_35), p_35);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_38), (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue))));
  t = v_38;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  x_35 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), x_35);
  if(match_cons(t, sym__2))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_35;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(y_4, t);
  t = (ATerm) ATmakeAppl(sym__2, y_35, z_35);
  return(t);
}
ATerm StoreEntryIfNotExists_0_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      b_36 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_36 = NULL;
        t = b_36;
        t = mk_key_0_0(t);
        c_36 = t;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), c_36);
        t = (ATerm) ATmakeAppl(sym_PP_Entry_2, b_36, a_36);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = StoreEntry_0_0(t);
      }
  }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm b_136 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  t = number_nonterminals_0_0(t);
  d_36 = t;
  t = make_0_0(t);
  e_36 = t;
  t = d_36;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm a_5 (ATerm t)
      {
        ATerm h_36 = NULL;
        t = term_z_10;
        t = b_136(t);
        h_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_36, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(a_5, t);
      return(t);
    }
    t = map_1_0(z_4, t);
    t = concat_0_0(t);
    f_36 = t;
    t = term_z_10;
    t = b_136(t);
    g_36 = t;
    t = (ATerm) ATinsert(CheckATermList(f_36), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, g_36), e_36));
  }
  return(t);
}
ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm j_36 = NULL;
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
      ATerm s_26 = t;
      int t_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              p_36 = ATgetArgument(t, 0);
              {
                ATerm u_26 = ATgetArgument(t, 1);
              }
              r_36 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(t_26);
          t = r_36;
          {
            ATerm b_5 (ATerm t)
            {
              if(match_cons(t, sym_cons_1))
                {
                  if(((j_36 != NULL) && (j_36 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(b_5, t);
            t = p_36;
            {
              ATerm c_5 (ATerm t)
              {
                t = not_null(j_36);
                return(t);
              }
              t = symbols2pp_entries_1_0(c_5, t);
            }
          }
        }
      else
        {
          t = s_26;
          {
            ATerm t_36 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                p_36 = ATgetArgument(t, 0);
                q_36 = ATgetArgument(t, 1);
                r_36 = ATgetArgument(t, 2);
                s_36 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_26)), q_36), (ATerm) ATinsert(ATinsert(ATempty, term_w_26), (ATerm) ATmakeAppl(sym_lit_1, p_36)));
            t = concat_0_0(t);
            t_36 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, t_36, r_36, s_36);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_38 = NULL;
            ATerm b_27 = t;
            if((PushChoice() == 0))
              {
                ATerm v_36 = NULL;
                v_36 = t;
                t = term_c_27;
                t = get_options_0_0(t);
                t = oncetd_1_0(d_5, t);
                t = v_36;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_27;
              }
            y_38 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_38), (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue))));
            t = y_38;
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,a_45 = NULL,c_45 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      a_45 = ATgetArgument(t, 0);
      c_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_45;
  if(match_cons(t, sym_alt_2))
    {
      x_44 = ATgetArgument(t, 0);
      y_44 = ATgetArgument(t, 1);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_45 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, x_44, y_44);
            t = flat_alt_0_0(t);
            h_45 = t;
            t = (ATerm) ATinsert(CheckATermList(h_45), a_45);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = (ATerm) ATinsert(ATinsert(ATempty, c_45), a_45);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, c_45), a_45);
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      {
        ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,a_38 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_37 = ATgetFirst((ATermList) t);
            b_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_37;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_37 = ATgetFirst((ATermList) t);
            d_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_37;
        t = pair_0_0(t);
        a_38 = t;
        t = (ATerm) ATinsert(CheckATermList(a_38), (ATerm) ATmakeAppl(sym__2, a_37, c_37));
      }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm p_39 = NULL;
  t = _2_0(_id, h_5, t);
  if(match_cons(t, sym_lit_1))
    {
      p_39 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_27, (ATerm) ATmakeAppl(sym_S_1, p_39));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          p_39 = ATgetArgument(t, 0);
          {
            ATerm i_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, p_39);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = map_1_0(i_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_star_1_0(_id, t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            {
              ATerm n_27 = t;
              int o_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_sep_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(o_27);
                }
              else
                {
                  t = n_27;
                  t = iter_star_sep_2_0(_id, _id, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm v_39 = NULL;
  t = lit_1_0(_id, t);
  if(match_cons(t, sym_lit_1))
    {
      v_39 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_27, (ATerm) ATmakeAppl(sym_S_1, v_39));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          v_39 = ATgetArgument(t, 0);
          {
            ATerm p_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, v_39);
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm y_40 = NULL,f_41 = NULL;
  ATerm q_5 (ATerm t)
  {
    ATerm r_41 = NULL;
    t = lit_1_0(_id, t);
    if(match_cons(t, sym_lit_1))
      {
        r_41 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_27, (ATerm) ATmakeAppl(sym_S_1, r_41));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            r_41 = ATgetArgument(t, 0);
            {
              ATerm q_27 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, r_41);
      }
    if(((y_40 != NULL) && (y_40 != t)))
      _fail(t);
    else
      y_40 = t;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm a_42 = NULL;
    t = _2_0(_id, s_5, t);
    if(match_cons(t, sym_lit_1))
      {
        a_42 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_27, (ATerm) ATmakeAppl(sym_S_1, a_42));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            a_42 = ATgetArgument(t, 0);
            {
              ATerm r_27 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, a_42);
      }
    if(((f_41 != NULL) && (f_41 != t)))
      _fail(t);
    else
      f_41 = t;
    return(t);
  }
  t = _2_0(q_5, r_5, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_u_27), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_41)), not_null(y_40)));
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      t = iter_star_1_0(_id, t);
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm r_42 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      r_42 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_27, (ATerm) ATmakeAppl(sym_S_1, r_42));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          r_42 = ATgetArgument(t, 0);
          {
            ATerm x_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, r_42);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_39 = NULL;
      t = reverse_acc_2_0(_id, e_5, t);
      t = Cons_2_0(f_5, g_5, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_39 = ATgetFirst((ATermList) t);
          g_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_28 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, j_5, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_28;
          }
        t = g_39;
        t = reverse_acc_2_0(_id, k_5, t);
        n_39 = t;
        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_39), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, n_39)));
      }
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_acc_2_0(_id, l_5, t);
            {
              ATerm m_5 (ATerm t)
              {
                ATerm t_40 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    t_40 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_h_27, (ATerm) ATmakeAppl(sym_S_1, t_40));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        t_40 = ATgetArgument(t, 0);
                        {
                          ATerm d_28 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, t_40);
                  }
                if(((l_39 != NULL) && (l_39 != t)))
                  _fail(t);
                else
                  l_39 = t;
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                ATerm e_28 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_28;
                  }
                t = reverse_acc_2_0(_id, o_5, t);
                if(((j_39 != NULL) && (j_39 != t)))
                  _fail(t);
                else
                  j_39 = t;
                return(t);
              }
              t = Cons_2_0(m_5, n_5, t);
              t = not_null(j_39);
              t = pair_0_0(t);
              t = map_1_0(p_5, t);
              k_39 = t;
              t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_39)), k_39));
            }
            ;
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            t = map_1_0(t_5, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm f_28 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_28;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm number_node_1_0 (ATerm f_136 (ATerm), ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, b_39);
  {
    ATerm y_43 (ATerm t)
    {
      ATerm g_28 = t;
      int h_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(_id, u_5, t);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(h_28);
        }
      else
        {
          t = g_28;
          {
            ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
            s_43 = t;
            if(match_cons(t, sym__2))
              {
                t_43 = ATgetArgument(t, 0);
                u_43 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_43;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_43 = ATgetFirst((ATermList) t);
                w_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm i_28 = t;
              int j_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_39 = NULL,y_39 = NULL;
                  t = v_43;
                  t = f_136(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_43, term_z_19);
                  {
                    ATerm k_28 = t;
                    int l_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_addi(t_43, (ATerm) ATmakeInt(1));
                        ;
                        LocalPopChoice(l_28);
                      }
                    else
                      {
                        t = k_28;
                        t = SSL_addr(t_43, (ATerm) ATmakeInt(1));
                      }
                    x_39 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_39, w_43);
                    t = y_43(t);
                    y_39 = t;
                    t = (ATerm) ATinsert(CheckATermList(y_39), (ATerm) ATmakeAppl(sym__2, t_43, v_43));
                  }
                  ;
                  LocalPopChoice(j_28);
                }
              else
                {
                  t = i_28;
                  {
                    ATerm x_43 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, t_43, w_43);
                    t = y_43(t);
                    x_43 = t;
                    t = (ATerm) ATinsert(CheckATermList(x_43), v_43);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = y_43(t);
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_44 = NULL;
      if(match_cons(t, sym_label_2))
        {
          ATerm o_28 = ATgetArgument(t, 0);
          d_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_44;
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
    }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(v_5, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_44 = NULL;
      n_44 = t;
      {
        ATerm r_28 = t;
        if((PushChoice() == 0))
          {
            ATerm h_40 = NULL;
            h_40 = t;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = h_40;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm s_28 = ATgetFirst((ATermList) t);
                    ATerm t_28 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_40;
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_28;
          }
        t = (ATerm) ATinsert(ATempty, n_44);
      }
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(w_5, t);
  t = concat_0_0(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = topdown_1_0(a_6, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(_id, t);
      t = term_w_28;
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,m_40 = NULL,o_40 = NULL;
  m_40 = t;
  t = term_z_10;
  t = c_136(t);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, m_40);
  {
    ATerm q_48 (ATerm t)
    {
      ATerm s_48 (ATerm a_47, ATerm b_47, ATerm c_47, ATerm d_47, ATerm e_47, ATerm t)
      {
        ATerm m_47 = NULL,n_47 = NULL,p_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
        t = SSL_explode_term(d_47);
        if(match_cons(t, sym__2))
          {
            m_47 = ATgetArgument(t, 0);
            n_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, c_47, m_47)));
        {
          ATerm x_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_5 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, c_47, m_47));
                return(t);
              }
              if(match_cons(t, sym__2))
                {
                  ATerm z_28 = ATgetArgument(t, 0);
                  ATerm a_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_47;
              t = at_end_1_0(x_5, t);
              ;
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              {
                ATerm a_41 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, c_47, m_47))));
                if(match_cons(t, sym__2))
                  {
                    ATerm b_29 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) b_29) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    a_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_41;
                t = concat_0_0(t);
              }
            }
          p_47 = t;
          t = n_47;
          t = argument_list_0_0(t);
          t = number_nonterminals_0_0(t);
          r_47 = t;
          t = make_0_0(t);
          s_47 = t;
          t = r_47;
          {
            ATerm y_5 (ATerm t)
            {
              ATerm x_47 = NULL;
              x_47 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_47, p_47), x_47);
              t = q_48(t);
              return(t);
            }
            t = map_1_0(y_5, t);
            t = concat_0_0(t);
            t_47 = t;
            t = (ATerm) ATinsert(CheckATermList(t_47), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, a_47, p_47), s_47));
          }
        }
        return(t);
      }
      ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
      c_48 = t;
      if(match_cons(t, sym__2))
        {
          d_48 = ATgetArgument(t, 0);
          g_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_48;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm e_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(d_29);
            t = (ATerm) ATempty;
          }
        else
          {
            t = c_29;
            if(match_cons(t, sym__2))
              {
                h_48 = ATgetArgument(t, 0);
                i_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_48;
            {
              ATerm f_29 = t;
              int g_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_sort_1))
                    {
                      ATerm h_29 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_29);
                  t = d_48;
                  if(match_cons(t, sym__2))
                    {
                      e_48 = ATgetArgument(t, 0);
                      f_48 = ATgetArgument(t, 1);
                      {
                        ATerm i_29 = t;
                        int j_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(j_29);
                          }
                        else
                          {
                            t = i_29;
                            t = s_48(e_48, f_48, h_48, i_48, c_48, t);
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
                  t = f_29;
                  {
                    ATerm k_29 = t;
                    int l_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_char_class_1))
                          {
                            ATerm m_29 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_29);
                        t = d_48;
                        if(match_cons(t, sym__2))
                          {
                            e_48 = ATgetArgument(t, 0);
                            f_48 = ATgetArgument(t, 1);
                            {
                              ATerm n_29 = t;
                              int o_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATempty;
                                  ;
                                  LocalPopChoice(o_29);
                                }
                              else
                                {
                                  t = n_29;
                                  t = s_48(e_48, f_48, h_48, i_48, c_48, t);
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
                        t = k_29;
                        if(match_cons(t, sym_alt_2))
                          {
                            b_48 = ATgetArgument(t, 0);
                            y_47 = ATgetArgument(t, 1);
                            t = d_48;
                            if(match_cons(t, sym__2))
                              {
                                e_48 = ATgetArgument(t, 0);
                                f_48 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = y_47;
                            if(match_cons(t, sym_alt_2))
                              {
                                z_47 = ATgetArgument(t, 0);
                                a_48 = ATgetArgument(t, 1);
                                {
                                  ATerm p_29 = t;
                                  int q_29 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm n_41 = NULL,o_41 = NULL;
                                      t = e_48;
                                      if(((g_46 != NULL) && (g_46 != t)))
                                        _fail(t);
                                      else
                                        g_46 = t;
                                      t = f_48;
                                      if(((h_46 != NULL) && (h_46 != t)))
                                        _fail(t);
                                      else
                                        h_46 = t;
                                      t = h_48;
                                      if(((i_46 != NULL) && (i_46 != t)))
                                        _fail(t);
                                      else
                                        i_46 = t;
                                      t = (ATerm) ATmakeAppl(sym_alt_2, b_48, (ATerm) ATmakeAppl(sym_alt_2, z_47, a_48));
                                      t = flat_alt_0_0(t);
                                      n_41 = t;
                                      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), n_41);
                                      o_41 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_48, f_48), (ATerm) ATmakeAppl(sym__2, h_48, o_41));
                                      t = q_48(t);
                                      t = Cons_2_0(z_5, _id, t);
                                      ;
                                      LocalPopChoice(q_29);
                                    }
                                  else
                                    {
                                      t = p_29;
                                      t = s_48(e_48, f_48, h_48, i_48, c_48, t);
                                    }
                                }
                              }
                            else
                              {
                                t = s_48(e_48, f_48, h_48, i_48, c_48, t);
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_bracket_symbol_1))
                              {
                                b_48 = ATgetArgument(t, 0);
                                t = d_48;
                                if(match_cons(t, sym__2))
                                  {
                                    e_48 = ATgetArgument(t, 0);
                                    f_48 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm r_29 = t;
                                  int t_29 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_48, f_48), (ATerm) ATmakeAppl(sym__2, h_48, b_48));
                                      t = q_48(t);
                                      ;
                                      LocalPopChoice(t_29);
                                    }
                                  else
                                    {
                                      t = r_29;
                                      t = s_48(e_48, f_48, h_48, i_48, c_48, t);
                                    }
                                }
                              }
                            else
                              {
                                t = d_48;
                                if(match_cons(t, sym__2))
                                  {
                                    e_48 = ATgetArgument(t, 0);
                                    f_48 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = s_48(e_48, f_48, h_48, i_48, c_48, t);
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
    t = q_48(t);
  }
  return(t);
}
ATerm v_50 (ATerm a_49, ATerm b_49, ATerm f_49, ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  t = f_49;
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_42 = NULL,h_42 = NULL;
        t = b_49;
        t = pp_table_get_0_0(t);
        g_42 = t;
        t = SSL_explode_term(g_42);
        if(match_cons(t, sym__2))
          {
            ATerm x_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_29) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_29 = ATgetArgument(t, 1);
              if(((ATgetType(y_29) == AT_LIST) && !(ATisEmpty(y_29))))
                {
                  ATerm z_29 = ATgetFirst((ATermList) y_29);
                  ATerm a_30 = (ATerm) ATgetNext((ATermList) y_29);
                  if(((ATgetType(a_30) == AT_LIST) && !(ATisEmpty(a_30))))
                    {
                      h_42 = ATgetFirst((ATermList) a_30);
                      {
                        ATerm b_30 = (ATerm) ATgetNext((ATermList) a_30);
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
        t = h_42;
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        {
          ATerm m_42 = NULL,n_42 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,s_49 = NULL,q_42 = NULL,s_42 = NULL;
          t = b_49;
          t = reverse_acc_2_0(_id, b_6, t);
          {
            ATerm c_6 (ATerm t)
            {
              if(((j_49 != NULL) && (j_49 != t)))
                _fail(t);
              else
                j_49 = t;
              return(t);
            }
            ATerm d_6 (ATerm t)
            {
              t = reverse_acc_2_0(_id, e_6, t);
              if(((i_49 != NULL) && (i_49 != t)))
                _fail(t);
              else
                i_49 = t;
              return(t);
            }
            t = Cons_2_0(c_6, d_6, t);
            t = not_null(i_49);
            t = pp_table_get_0_0(t);
            m_42 = t;
            t = SSL_explode_term(m_42);
            if(match_cons(t, sym__2))
              {
                ATerm c_30 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_30) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm d_30 = ATgetArgument(t, 1);
                  if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
                    {
                      n_42 = ATgetFirst((ATermList) d_30);
                      {
                        ATerm e_30 = (ATerm) ATgetNext((ATermList) d_30);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = n_42;
            if(match_cons(t, sym_Path_2))
              {
                s_49 = ATgetArgument(t, 0);
                l_49 = ATgetArgument(t, 1);
                t = l_49;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_49 = ATgetFirst((ATermList) t);
                    n_49 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_49;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, s_49, (ATerm) ATinsert(ATempty, m_49));
              }
            else
              {
                if(match_cons(t, sym_Path1_1))
                  {
                    s_49 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, s_49, (ATerm) ATempty);
              }
            k_49 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_49), a_49);
            {
              ATerm f_6 (ATerm t)
              {
                t = k_49;
                return(t);
              }
              t = symbol2abox_1_0(f_6, t);
              t = map_1_0(StoreEntryIfNotExists_0_0, t);
              t = b_49;
              t = pp_table_get_0_0(t);
              q_42 = t;
              t = SSL_explode_term(q_42);
              if(match_cons(t, sym__2))
                {
                  ATerm f_30 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_30) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm g_30 = ATgetArgument(t, 1);
                    if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
                      {
                        ATerm h_30 = ATgetFirst((ATermList) g_30);
                        ATerm i_30 = (ATerm) ATgetNext((ATermList) g_30);
                        if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
                          {
                            s_42 = ATgetFirst((ATermList) i_30);
                            {
                              ATerm j_30 = (ATerm) ATgetNext((ATermList) i_30);
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
              t = s_42;
            }
          }
        }
      }
  }
  return(t);
}
ATerm w_50 (ATerm w_49, ATerm x_49, ATerm b_50, ATerm f_50, ATerm g_50, ATerm t)
{
  t = g_50;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_42 = NULL,w_42 = NULL;
        t = f_50;
        t = pp_table_get_0_0(t);
        v_42 = t;
        t = SSL_explode_term(v_42);
        if(match_cons(t, sym__2))
          {
            ATerm m_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_30) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_30 = ATgetArgument(t, 1);
              if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
                {
                  ATerm o_30 = ATgetFirst((ATermList) n_30);
                  ATerm p_30 = (ATerm) ATgetNext((ATermList) n_30);
                  if(((ATgetType(p_30) == AT_LIST) && !(ATisEmpty(p_30))))
                    {
                      w_42 = ATgetFirst((ATermList) p_30);
                      {
                        ATerm q_30 = (ATerm) ATgetNext((ATermList) p_30);
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
        t = w_42;
        ;
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        {
          ATerm a_43 = NULL,d_43 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, w_49, x_49, b_50);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(StoreEntryIfNotExists_0_0, t);
          t = f_50;
          t = pp_table_get_0_0(t);
          a_43 = t;
          t = SSL_explode_term(a_43);
          if(match_cons(t, sym__2))
            {
              ATerm r_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm s_30 = ATgetArgument(t, 1);
                if(((ATgetType(s_30) == AT_LIST) && !(ATisEmpty(s_30))))
                  {
                    ATerm t_30 = ATgetFirst((ATermList) s_30);
                    ATerm u_30 = (ATerm) ATgetNext((ATermList) s_30);
                    if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
                      {
                        d_43 = ATgetFirst((ATermList) u_30);
                        {
                          ATerm v_30 = (ATerm) ATgetNext((ATermList) u_30);
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
          t = d_43;
        }
      }
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,s_50 = NULL,t_50 = NULL;
  l_50 = t;
  if(match_cons(t, sym__2))
    {
      m_50 = ATgetArgument(t, 0);
      t_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_50;
  if(match_cons(t, sym_prod_3))
    {
      n_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
      s_50 = ATgetArgument(t, 2);
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_50(m_50, t_50, l_50, t);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            t = w_50(n_50, o_50, s_50, t_50, l_50, t);
          }
      }
    }
  else
    {
      t = v_50(m_50, t_50, l_50, t);
    }
  return(t);
}
ATerm prod_3_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,g_51 = NULL,h_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  m_51 = t;
  if(match_cons(t, sym_prod_3))
    {
      y_50 = ATgetArgument(t, 0);
      g_51 = ATgetArgument(t, 1);
      h_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_51);
  x_50 = t;
  t = y_50;
  t = i_101(t);
  j_51 = t;
  t = g_51;
  t = j_101(t);
  k_51 = t;
  t = h_51;
  t = k_101(t);
  l_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, j_51, k_51, l_51), x_50);
  return(t);
}
ATerm g_6 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_30 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_30) != AT_INT) || (ATgetInt((ATermInt) y_30) != 34)))
        _fail(t);
      {
        ATerm z_30 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(z_30) != AT_LIST) || !(ATisEmpty(z_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  q_51 = t;
  t = SSL_explode_string(q_51);
  p_51 = t;
  {
    ATerm b_31 = t;
    if((PushChoice() == 0))
      {
        ATerm s_51 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_51 = ATgetFirst((ATermList) t);
            {
              ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_51;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_31;
      }
    t = p_51;
    {
      ATerm d_31 = t;
      if((PushChoice() == 0))
        {
          t = at_last_1_0(g_6, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_31;
        }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_31)), p_51), (ATerm) ATinsert(ATempty, term_e_31));
      t = concat_0_0(t);
      r_51 = t;
      t = SSL_implode_string(r_51);
    }
  }
  return(t);
}
ATerm cons_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  w_51 = t;
  if(match_cons(t, sym_cons_1))
    {
      u_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_51);
  t_51 = t;
  t = u_51;
  t = g_101(t);
  v_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, v_51), t_51);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm a_52 = NULL,e_52 = NULL;
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm h_31 = ATgetArgument(t, 0);
          ATerm i_31 = ATgetArgument(t, 1);
          ATerm m_31 = ATgetArgument(t, 2);
          a_52 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(g_31);
      {
        ATerm g_52 = NULL;
        t = a_52;
        {
          ATerm h_6 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((g_52 != NULL) && (g_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(h_6, t);
          t = not_null(g_52);
        }
      }
    }
  else
    {
      t = f_31;
      {
        ATerm i_52 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm u_31 = ATgetArgument(t, 0);
            ATerm v_31 = ATgetArgument(t, 1);
            e_52 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = e_52;
        {
          ATerm i_6 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((i_52 != NULL) && (i_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(i_6, t);
          t = not_null(i_52);
        }
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  y_53 = t;
  if(match_cons(t, sym__2))
    {
      z_53 = ATgetArgument(t, 0);
      d_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_53;
  if(match_cons(t, sym_prod_fun_4))
    {
      a_54 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
      c_54 = ATgetArgument(t, 2);
      w_53 = ATgetArgument(t, 3);
      t = w_53;
      if(match_cons(t, sym_attrs_1))
        {
          v_53 = ATgetArgument(t, 0);
          {
            ATerm r_45 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, v_53, d_54);
            {
              ATerm w_31 = t;
              int x_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm y_31 = ATgetArgument(t, 0);
                      ATerm z_31 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_53;
                  {
                    ATerm j_6 (ATerm t)
                    {
                      t = d_54;
                      return(t);
                    }
                    t = at_end_1_0(j_6, t);
                  }
                  ;
                  LocalPopChoice(x_31);
                }
              else
                {
                  t = w_31;
                  {
                    ATerm e_46 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_53, d_54));
                    if(match_cons(t, sym__2))
                      {
                        ATerm a_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) a_32) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        e_46 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = e_46;
                    t = concat_0_0(t);
                  }
                }
              r_45 = t;
              t = (ATerm) ATmakeAppl(sym_prod_fun_4, a_54, b_54, c_54, (ATerm) ATmakeAppl(sym_attrs_1, r_45));
            }
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, a_54, b_54, c_54, (ATerm) ATmakeAppl(sym_attrs_1, d_54));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          a_54 = ATgetArgument(t, 0);
          b_54 = ATgetArgument(t, 1);
          c_54 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_54;
      if(match_cons(t, sym_attrs_1))
        {
          x_53 = ATgetArgument(t, 0);
          {
            ATerm o_47 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, x_53, d_54);
            {
              ATerm b_32 = t;
              int c_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm d_32 = ATgetArgument(t, 0);
                      ATerm e_32 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_53;
                  {
                    ATerm k_6 (ATerm t)
                    {
                      t = d_54;
                      return(t);
                    }
                    t = at_end_1_0(k_6, t);
                  }
                  ;
                  LocalPopChoice(c_32);
                }
              else
                {
                  t = b_32;
                  {
                    ATerm c_49 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, x_53, d_54));
                    if(match_cons(t, sym__2))
                      {
                        ATerm f_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) f_32) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        c_49 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = c_49;
                    t = concat_0_0(t);
                  }
                }
              o_47 = t;
              t = (ATerm) ATmakeAppl(sym_prod_3, a_54, b_54, (ATerm) ATmakeAppl(sym_attrs_1, o_47));
            }
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, a_54, b_54, (ATerm) ATmakeAppl(sym_attrs_1, d_54));
        }
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_32 = ATgetFirst((ATermList) t);
      if(((ATgetType(g_32) != AT_INT) || (ATgetInt((ATermInt) g_32) != 34)))
        _fail(t);
      {
        ATerm h_32 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(h_32) != AT_LIST) || !(ATisEmpty(h_32))))
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
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  v_62 = t;
  t = SSL_explode_string(v_62);
  u_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_62 = ATgetFirst((ATermList) t);
      {
        ATerm i_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_62;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = u_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_32 = ATgetFirst((ATermList) t);
      x_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_62;
  t = at_last_1_0(m_6, t);
  y_62 = t;
  t = SSL_implode_string(y_62);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
      p_54 = t;
      if(match_int(t, 34))
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_e_31), term_o_32);
              ;
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              t = (ATerm) ATinsert(ATempty, p_54);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm p_32 = t;
              int q_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_32), term_o_32);
                  ;
                  LocalPopChoice(q_32);
                }
              else
                {
                  t = p_32;
                  t = (ATerm) ATinsert(ATempty, p_54);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_54 = ATgetFirst((ATermList) t);
                  r_54 = (ATerm) ATgetNext((ATermList) t);
                  t = q_54;
                  if(match_int(t, 34))
                    {
                      ATerm r_32 = t;
                      int s_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, p_54);
                          ;
                          LocalPopChoice(s_32);
                        }
                      else
                        {
                          t = r_32;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(r_54), term_e_31), term_o_32);
                        }
                    }
                  else
                    {
                      if(match_int(t, 92))
                        {
                          ATerm t_32 = t;
                          int u_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, p_54);
                              ;
                              LocalPopChoice(u_32);
                            }
                          else
                            {
                              t = t_32;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(r_54), term_o_32), term_o_32);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm v_32 = t;
                              int w_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, p_54);
                                  ;
                                  LocalPopChoice(w_32);
                                }
                              else
                                {
                                  t = v_32;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(r_54), term_x_32), term_o_32);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, p_54);
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, p_54);
                }
            }
        }
      t = Cons_2_0(_id, n_6, t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(z_32);
          }
        else
          {
            t = y_32;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,y_49 = NULL;
  p_49 = t;
  if(match_int(t, 34))
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_e_31), term_o_32);
          ;
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          t = (ATerm) ATinsert(ATempty, p_49);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_o_32), term_o_32);
              ;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = (ATerm) ATinsert(ATempty, p_49);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_49 = ATgetFirst((ATermList) t);
              y_49 = (ATerm) ATgetNext((ATermList) t);
              t = q_49;
              if(match_int(t, 34))
                {
                  ATerm e_33 = t;
                  int f_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, p_49);
                      ;
                      LocalPopChoice(f_33);
                    }
                  else
                    {
                      t = e_33;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(y_49), term_e_31), term_o_32);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm g_33 = t;
                      int o_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, p_49);
                          ;
                          LocalPopChoice(o_33);
                        }
                      else
                        {
                          t = g_33;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(y_49), term_o_32), term_o_32);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm p_33 = t;
                          int q_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, p_49);
                              ;
                              LocalPopChoice(q_33);
                            }
                          else
                            {
                              t = p_33;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(y_49), term_x_32), term_o_32);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATinsert(ATempty, p_49);
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, p_49);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_55 = NULL,o_49 = NULL;
      w_55 = t;
      t = SSL_explode_string(w_55);
      t = map_1_0(o_6, t);
      t = concat_0_0(t);
      o_49 = t;
      t = SSL_implode_string(o_49);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm b_51 = NULL,c_51 = NULL;
        b_51 = t;
        t = SSL_explode_string(b_51);
        t = escape_chars_0_0(t);
        c_51 = t;
        t = SSL_implode_string(c_51);
      }
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm t_33 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_33;
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm g_56 = NULL,i_51 = NULL;
  g_56 = t;
  t = SSL_explode_string(g_56);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_51 = ATgetFirst((ATermList) t);
      {
        ATerm u_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_51;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_51, term_z_33);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_a_34, i_51);
        t = leq_0_0(t);
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATmakeAppl(sym__2, i_51, term_c_34);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_34, i_51);
        t = leq_0_0(t);
      }
    t = g_56;
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm d_56 = NULL,p_52 = NULL,q_52 = NULL,s_52 = NULL;
  t = filter_1_0(p_6, t);
  t = Cons_2_0(q_6, _id, t);
  t = separate_by_1_0(r_6, t);
  t = concat_strings_0_0(t);
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_56, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_35), term_z_34), term_y_34), term_x_34), term_u_34), term_s_34), term_q_34), term_o_34), term_m_34), term_k_34), term_i_34), term_g_34), term_f_34));
  {
    ATerm b_35 = t;
    if((PushChoice() == 0))
      {
        ATerm h_56 = NULL,j_56 = NULL;
        if(match_cons(t, sym__2))
          {
            h_56 = ATgetArgument(t, 0);
            j_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_56;
        {
          ATerm s_6 (ATerm t)
          {
            if((h_56 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(s_6, t);
          t = (ATerm) ATmakeAppl(sym__2, h_56, j_56);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_35;
      }
    t = d_56;
    t = escape_0_0(t);
    p_52 = t;
    t = SSL_explode_string(p_52);
    s_52 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_31)), s_52), (ATerm) ATinsert(ATempty, term_e_31));
    t = concat_0_0(t);
    q_52 = t;
    t = SSL_implode_string(q_52);
  }
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_35);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_35);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_35);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  z_56 = t;
  if(match_cons(t, sym_cf_1))
    {
      x_56 = ATgetArgument(t, 0);
      t = x_56;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          x_56 = ATgetArgument(t, 0);
          t = x_56;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_f_35);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  x_56 = ATgetArgument(t, 0);
                  y_56 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(y_56), x_56);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      x_56 = ATgetArgument(t, 0);
                      t = x_56;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(t_6, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          x_56 = ATgetArgument(t, 0);
                          t = x_56;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(a_7, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              x_56 = ATgetArgument(t, 0);
                              t = x_56;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(c_7, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  x_56 = ATgetArgument(t, 0);
                                  y_56 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_57 = NULL,k_57 = NULL;
                                    t = x_56;
                                    t = Sym2Strs_0_0(t);
                                    j_57 = t;
                                    t = y_56;
                                    t = Sym2Strs_0_0(t);
                                    k_57 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_35)), k_57), j_57);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      x_56 = ATgetArgument(t, 0);
                                      y_56 = ATgetArgument(t, 1);
                                      {
                                        ATerm n_57 = NULL,o_57 = NULL;
                                        t = x_56;
                                        t = Sym2Strs_0_0(t);
                                        n_57 = t;
                                        t = y_56;
                                        t = Sym2Strs_0_0(t);
                                        o_57 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_35)), o_57), n_57);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm g_35 = t;
                                      int h_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              x_56 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_35 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(h_35);
                                          {
                                            ATerm q_57 = NULL;
                                            t = x_56;
                                            t = Sym2Strs_0_0(t);
                                            q_57 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_35)), q_57);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = g_35;
                                          {
                                            ATerm k_35 = t;
                                            int l_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    x_56 = ATgetArgument(t, 0);
                                                    y_56 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm m_35 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(l_35);
                                                {
                                                  ATerm w_57 = NULL,x_57 = NULL;
                                                  t = x_56;
                                                  t = Sym2Strs_0_0(t);
                                                  w_57 = t;
                                                  t = y_56;
                                                  t = Sym2Strs_0_0(t);
                                                  x_57 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_35)), x_57), w_57);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = k_35;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    x_56 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_57 = NULL;
                                                      t = x_56;
                                                      t = Sym2Strs_0_0(t);
                                                      z_57 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, z_57), (ATerm) ATinsert(ATempty, term_n_35));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        x_56 = ATgetArgument(t, 0);
                                                        y_56 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_58 = NULL,d_58 = NULL;
                                                          t = x_56;
                                                          t = Sym2Strs_0_0(t);
                                                          c_58 = t;
                                                          t = y_56;
                                                          t = Sym2Strs_0_0(t);
                                                          d_58 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_58), (ATerm) ATinsert(ATempty, term_t_35)), c_58);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            x_56 = ATgetArgument(t, 0);
                                                            y_56 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm g_58 = NULL,h_58 = NULL;
                                                              t = x_56;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              g_58 = t;
                                                              t = y_56;
                                                              t = Sym2Strs_0_0(t);
                                                              h_58 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_58), (ATerm) ATinsert(ATempty, term_u_35)), g_58);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                x_56 = ATgetArgument(t, 0);
                                                                y_56 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm k_58 = NULL,l_58 = NULL;
                                                                  t = x_56;
                                                                  t = Sym2Strs_0_0(t);
                                                                  k_58 = t;
                                                                  t = y_56;
                                                                  t = Sym2Strs_0_0(t);
                                                                  l_58 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_58), (ATerm) ATinsert(ATempty, term_v_35)), k_58);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    x_56 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm n_58 = NULL;
                                                                      t = x_56;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      n_58 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(n_58), term_w_35);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        x_56 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, x_56);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            x_56 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm e_55 = NULL;
                                                                              t = x_56;
                                                                              {
                                                                                ATerm i_36 = t;
                                                                                int k_36 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(k_36);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_36;
                                                                                  }
                                                                                e_55 = t;
                                                                                t = (ATerm) ATinsert(ATempty, e_55);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm l_36 = t;
                                                                            int m_36 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    x_56 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm n_36 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(m_36);
                                                                                {
                                                                                  ATerm f_56 = NULL;
                                                                                  t = x_56;
                                                                                  {
                                                                                    ATerm o_36 = t;
                                                                                    int u_36 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(u_36);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_36;
                                                                                      }
                                                                                    f_56 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, f_56);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = l_36;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_w_36);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
ATerm g_7 (ATerm t)
{
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = x_36;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(g_7, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm z_36 = t;
  if((PushChoice() == 0))
    {
      ATerm u_58 = NULL,v_58 = NULL;
      if(match_cons(t, sym__2))
        {
          u_58 = ATgetArgument(t, 0);
          v_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(u_58, v_58);
            ;
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            t = SSL_gtr(u_58, v_58);
          }
        t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_36;
    }
  return(t);
}
ATerm e_59 (ATerm a_59, ATerm t)
{
  t = SSL_explode_string(a_59);
  {
    ATerm g_37 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(h_7, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_37;
      }
    t = term_h_37;
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_56 = NULL;
      m_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_56, term_n_37);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_37, m_56);
      t = leq_0_0(t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_57 = NULL;
            r_57 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_57, term_z_33);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_a_34, r_57);
            t = leq_0_0(t);
            ;
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            {
              ATerm r_37 = t;
              int s_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_58 = NULL;
                  x_58 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_58, term_c_34);
                  t = leq_0_0(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_d_34, x_58);
                  t = leq_0_0(t);
                  ;
                  LocalPopChoice(s_37);
                }
              else
                {
                  t = r_37;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_z_10;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm d_59 = NULL;
  d_59 = t;
  if(match_string(t, "|="))
    {
      ATerm t_37 = t;
      int u_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_59(d_59, t);
          ;
          LocalPopChoice(u_37);
        }
      else
        {
          t = t_37;
          t = term_v_37;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm x_37 = t;
          int y_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_59(d_59, t);
              ;
              LocalPopChoice(y_37);
            }
          else
            {
              t = x_37;
              t = term_z_37;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm d_38 = t;
              int e_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_59(d_59, t);
                  ;
                  LocalPopChoice(e_38);
                }
              else
                {
                  t = d_38;
                  t = term_f_38;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm h_38 = t;
                  int i_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_59(d_59, t);
                      ;
                      LocalPopChoice(i_38);
                    }
                  else
                    {
                      t = h_38;
                      t = term_j_38;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm k_38 = t;
                      int l_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = e_59(d_59, t);
                          ;
                          LocalPopChoice(l_38);
                        }
                      else
                        {
                          t = k_38;
                          t = term_m_38;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm n_38 = t;
                          int o_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_59(d_59, t);
                              ;
                              LocalPopChoice(o_38);
                            }
                          else
                            {
                              t = n_38;
                              t = term_p_38;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm q_38 = t;
                              int r_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = e_59(d_59, t);
                                  ;
                                  LocalPopChoice(r_38);
                                }
                              else
                                {
                                  t = q_38;
                                  t = term_t_38;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm u_38 = t;
                                  int w_38 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = e_59(d_59, t);
                                      ;
                                      LocalPopChoice(w_38);
                                    }
                                  else
                                    {
                                      t = u_38;
                                      t = term_x_38;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm z_38 = t;
                                      int a_39 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = e_59(d_59, t);
                                          ;
                                          LocalPopChoice(a_39);
                                        }
                                      else
                                        {
                                          t = z_38;
                                          t = term_c_39;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm d_39 = t;
                                          int e_39 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = e_59(d_59, t);
                                              ;
                                              LocalPopChoice(e_39);
                                            }
                                          else
                                            {
                                              t = d_39;
                                              t = term_f_39;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm i_39 = t;
                                              int m_39 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = e_59(d_59, t);
                                                  ;
                                                  LocalPopChoice(m_39);
                                                }
                                              else
                                                {
                                                  t = i_39;
                                                  t = term_o_39;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm q_39 = t;
                                                  int r_39 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = e_59(d_59, t);
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
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm t_39 = t;
                                                      int u_39 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = e_59(d_59, t);
                                                          ;
                                                          LocalPopChoice(u_39);
                                                        }
                                                      else
                                                        {
                                                          t = t_39;
                                                          t = term_w_39;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm z_39 = t;
                                                          int a_40 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = e_59(d_59, t);
                                                              ;
                                                              LocalPopChoice(a_40);
                                                            }
                                                          else
                                                            {
                                                              t = z_39;
                                                              t = term_v_35;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm b_40 = t;
                                                              int c_40 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = e_59(d_59, t);
                                                                  ;
                                                                  LocalPopChoice(c_40);
                                                                }
                                                              else
                                                                {
                                                                  t = b_40;
                                                                  t = term_d_40;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm e_40 = t;
                                                                  int f_40 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = e_59(d_59, t);
                                                                      ;
                                                                      LocalPopChoice(f_40);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_40;
                                                                      t = term_d_40;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm g_40 = t;
                                                                      int i_40 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = e_59(d_59, t);
                                                                          ;
                                                                          LocalPopChoice(i_40);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_40;
                                                                          t = term_j_40;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm k_40 = t;
                                                                          int l_40 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = e_59(d_59, t);
                                                                              ;
                                                                              LocalPopChoice(l_40);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_40;
                                                                              t = term_n_40;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm p_40 = t;
                                                                              int q_40 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = e_59(d_59, t);
                                                                                  ;
                                                                                  LocalPopChoice(q_40);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = p_40;
                                                                                  t = term_r_40;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm s_40 = t;
                                                                                  int u_40 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = e_59(d_59, t);
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
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm w_40 = t;
                                                                                      int x_40 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = e_59(d_59, t);
                                                                                          ;
                                                                                          LocalPopChoice(x_40);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_40;
                                                                                          t = term_z_40;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm b_41 = t;
                                                                                          int c_41 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = e_59(d_59, t);
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
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm e_41 = t;
                                                                                              int g_41 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = e_59(d_59, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(g_41);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_41;
                                                                                                  t = term_h_41;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm i_41 = t;
                                                                                                  int j_41 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = e_59(d_59, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(j_41);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_41;
                                                                                                      t = term_k_41;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm l_41 = t;
                                                                                                      int m_41 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = e_59(d_59, t);
                                                                                                          ;
                                                                                                          LocalPopChoice(m_41);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = l_41;
                                                                                                          t = term_p_41;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm q_41 = t;
                                                                                                          int s_41 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = e_59(d_59, t);
                                                                                                              ;
                                                                                                              LocalPopChoice(s_41);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_41;
                                                                                                              t = term_t_41;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm u_41 = t;
                                                                                                              int v_41 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = e_59(d_59, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(v_41);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = u_41;
                                                                                                                  t = term_w_41;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm x_41 = t;
                                                                                                                  int y_41 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = e_59(d_59, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(y_41);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = x_41;
                                                                                                                      t = term_z_41;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm b_42 = t;
                                                                                                                      int c_42 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = e_59(d_59, t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(c_42);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_42;
                                                                                                                          t = term_t_35;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm d_42 = t;
                                                                                                                          int e_42 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = e_59(d_59, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(e_42);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = d_42;
                                                                                                                              t = term_f_42;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm i_42 = t;
                                                                                                                              int j_42 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = e_59(d_59, t);
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
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm l_42 = t;
                                                                                                                                  int o_42 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = e_59(d_59, t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(o_42);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = l_42;
                                                                                                                                      t = term_p_42;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm t_42 = t;
                                                                                                                                      int u_42 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = e_59(d_59, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(u_42);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = t_42;
                                                                                                                                          t = term_x_42;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm y_42 = t;
                                                                                                                                          int z_42 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = e_59(d_59, t);
                                                                                                                                              ;
                                                                                                                                              LocalPopChoice(z_42);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = y_42;
                                                                                                                                              t = term_b_43;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm c_43 = t;
                                                                                                                                              int e_43 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = e_59(d_59, t);
                                                                                                                                                  ;
                                                                                                                                                  LocalPopChoice(e_43);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = c_43;
                                                                                                                                                  t = term_f_43;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm g_43 = t;
                                                                                                                                                  int h_43 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = e_59(d_59, t);
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
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm j_43 = t;
                                                                                                                                                      int k_43 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = e_59(d_59, t);
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
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm m_43 = t;
                                                                                                                                                          int n_43 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = e_59(d_59, t);
                                                                                                                                                              ;
                                                                                                                                                              LocalPopChoice(n_43);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = m_43;
                                                                                                                                                              t = term_o_43;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = e_59(d_59, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm separate_by_0_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  if(match_cons(t, sym__2))
    {
      f_59 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_59;
  {
    ATerm p_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_43);
      }
    else
      {
        t = p_43;
        {
          ATerm i_7 (ATerm t)
          {
            ATerm r_43 = t;
            int z_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_43);
              }
            else
              {
                t = r_43;
                {
                  ATerm h_59 = NULL;
                  t = Cons_2_0(_id, i_7, t);
                  h_59 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_59), f_59);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, i_7, t);
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue))));
  t = term_a_44;
  return(t);
}
ATerm separate_by_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  j_59 = t;
  t = if_verbose2_1_0(j_7, t);
  t = term_z_10;
  t = k_114(t);
  k_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_59, j_59);
  t = separate_by_0_0(t);
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL;
  w_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_59 = ATgetFirst((ATermList) t);
      v_59 = (ATerm) ATgetNext((ATermList) t);
      t = v_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_59 = ATgetFirst((ATermList) t);
          t_59 = (ATerm) ATgetNext((ATermList) t);
          t = s_59;
          if(match_int(t, 34))
            {
              t = u_59;
              if(match_int(t, 92))
                {
                  ATerm b_44 = t;
                  int c_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_59 = NULL;
                      t = t_59;
                      t = De_Escape_0_0(t);
                      y_59 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_59), term_e_31);
                      ;
                      LocalPopChoice(c_44);
                    }
                  else
                    {
                      t = b_44;
                      {
                        ATerm b_60 = NULL;
                        t = v_59;
                        t = De_Escape_0_0(t);
                        b_60 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_60), u_59);
                      }
                    }
                }
              else
                {
                  ATerm e_60 = NULL;
                  t = v_59;
                  t = De_Escape_0_0(t);
                  e_60 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_60), u_59);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = u_59;
                  if(match_int(t, 92))
                    {
                      ATerm e_44 = t;
                      int f_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_60 = NULL;
                          t = t_59;
                          t = De_Escape_0_0(t);
                          g_60 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_60), term_o_32);
                          ;
                          LocalPopChoice(f_44);
                        }
                      else
                        {
                          t = e_44;
                          {
                            ATerm j_60 = NULL;
                            t = v_59;
                            t = De_Escape_0_0(t);
                            j_60 = t;
                            t = (ATerm) ATinsert(CheckATermList(j_60), u_59);
                          }
                        }
                    }
                  else
                    {
                      ATerm m_60 = NULL;
                      t = v_59;
                      t = De_Escape_0_0(t);
                      m_60 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_60), u_59);
                    }
                }
              else
                {
                  ATerm p_60 = NULL;
                  t = v_59;
                  t = De_Escape_0_0(t);
                  p_60 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_60), u_59);
                }
            }
        }
      else
        {
          ATerm s_60 = NULL;
          t = v_59;
          t = De_Escape_0_0(t);
          s_60 = t;
          t = (ATerm) ATinsert(CheckATermList(s_60), u_59);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_59;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL;
  b_61 = t;
  t = SSL_explode_string(b_61);
  h_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_61 = ATgetFirst((ATermList) t);
      g_61 = (ATerm) ATgetNext((ATermList) t);
      t = g_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_61 = ATgetFirst((ATermList) t);
          e_61 = (ATerm) ATgetNext((ATermList) t);
          t = d_61;
          if(match_int(t, 34))
            {
              t = f_61;
              if(match_int(t, 92))
                {
                  ATerm g_44 = t;
                  int h_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_61 = NULL;
                      t = e_61;
                      t = De_Escape_0_0(t);
                      j_61 = t;
                      t = (ATerm) ATinsert(CheckATermList(j_61), term_e_31);
                      ;
                      LocalPopChoice(h_44);
                    }
                  else
                    {
                      t = g_44;
                      {
                        ATerm m_61 = NULL;
                        t = g_61;
                        t = De_Escape_0_0(t);
                        m_61 = t;
                        t = (ATerm) ATinsert(CheckATermList(m_61), f_61);
                      }
                    }
                }
              else
                {
                  ATerm r_61 = NULL;
                  t = g_61;
                  t = De_Escape_0_0(t);
                  r_61 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_61), f_61);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = f_61;
                  if(match_int(t, 92))
                    {
                      ATerm i_44 = t;
                      int j_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_61 = NULL;
                          t = e_61;
                          t = De_Escape_0_0(t);
                          t_61 = t;
                          t = (ATerm) ATinsert(CheckATermList(t_61), term_o_32);
                          ;
                          LocalPopChoice(j_44);
                        }
                      else
                        {
                          t = i_44;
                          {
                            ATerm w_61 = NULL;
                            t = g_61;
                            t = De_Escape_0_0(t);
                            w_61 = t;
                            t = (ATerm) ATinsert(CheckATermList(w_61), f_61);
                          }
                        }
                    }
                  else
                    {
                      ATerm z_61 = NULL;
                      t = g_61;
                      t = De_Escape_0_0(t);
                      z_61 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_61), f_61);
                    }
                }
              else
                {
                  ATerm c_62 = NULL;
                  t = g_61;
                  t = De_Escape_0_0(t);
                  c_62 = t;
                  t = (ATerm) ATinsert(CheckATermList(c_62), f_61);
                }
            }
        }
      else
        {
          ATerm f_62 = NULL;
          t = g_61;
          t = De_Escape_0_0(t);
          f_62 = t;
          t = (ATerm) ATinsert(CheckATermList(f_62), f_61);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_61;
    }
  c_61 = t;
  t = SSL_implode_string(c_61);
  return(t);
}
ATerm list_ana_1_0 (ATerm q_137 (ATerm), ATerm t)
{
  ATerm o_62 (ATerm t)
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_62 = NULL;
        t = q_137(t);
        h_62 = t;
        t = (ATerm) ATinsert(ATempty, h_62);
        ;
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        {
          ATerm m_44 = t;
          int o_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_62 = NULL,o_59 = NULL;
              n_62 = t;
              t = SSL_explode_term(n_62);
              if(match_cons(t, sym__2))
                {
                  ATerm p_44 = ATgetArgument(t, 0);
                  o_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_59;
              t = filter_1_0(o_62, t);
              t = concat_0_0(t);
              ;
              LocalPopChoice(o_44);
            }
          else
            {
              t = m_44;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = o_62(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm q_62 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      q_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_62;
  {
    ATerm q_44 = t;
    int r_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        ;
        LocalPopChoice(r_44);
      }
    else
      {
        t = q_44;
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  t = list_ana_1_0(k_7, t);
  t = separate_by_1_0(l_7, t);
  t = concat_strings_0_0(t);
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        ;
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
      }
  }
  return(t);
}
ATerm r_64 (ATerm n_63, ATerm o_63, ATerm p_63, ATerm t)
{
  ATerm t_63 = NULL;
  t = p_63;
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_63;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        t_63 = t;
        ;
        LocalPopChoice(v_44);
      }
    else
      {
        t = u_44;
        {
          ATerm w_44 = t;
          int z_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_63 = NULL,v_63 = NULL;
              t = (ATerm) ATinsert(ATempty, o_63);
              t = syms2strs_0_0(t);
              u_63 = t;
              t = n_63;
              t = filter_1_0(lit2str_0_0, t);
              v_63 = t;
              t = filter_1_0(m_7, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_45 = ATgetFirst((ATermList) t);
                  ATerm d_45 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, u_63, v_63);
              {
                ATerm e_45 = t;
                int f_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_7 (ATerm t)
                    {
                      t = v_63;
                      return(t);
                    }
                    if(match_cons(t, sym__2))
                      {
                        ATerm g_45 = ATgetArgument(t, 0);
                        ATerm i_45 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_63;
                    t = at_end_1_0(o_7, t);
                    ;
                    LocalPopChoice(f_45);
                  }
                else
                  {
                    t = e_45;
                    {
                      ATerm o_61 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_63, v_63));
                      if(match_cons(t, sym__2))
                        {
                          ATerm j_45 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) j_45) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          o_61 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_61;
                      t = concat_0_0(t);
                    }
                  }
                t = strs2constr_0_0(t);
                t_63 = t;
              }
              ;
              LocalPopChoice(z_44);
            }
          else
            {
              t = w_44;
              {
                ATerm k_45 = t;
                int l_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_63;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    t_63 = t;
                    ;
                    LocalPopChoice(l_45);
                  }
                else
                  {
                    t = k_45;
                    {
                      ATerm z_63 = NULL,a_64 = NULL;
                      t = (ATerm) ATinsert(ATempty, o_63);
                      t = syms2strs_0_0(t);
                      z_63 = t;
                      t = term_z_10;
                      t = new_0_0(t);
                      a_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_63, (ATerm) ATinsert(ATinsert(ATempty, a_64), term_m_45));
                      {
                        ATerm n_45 = t;
                        int o_45 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_7 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, a_64), term_m_45);
                              return(t);
                            }
                            if(match_cons(t, sym__2))
                              {
                                ATerm p_45 = ATgetArgument(t, 0);
                                ATerm q_45 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = z_63;
                            t = at_end_1_0(p_7, t);
                            ;
                            LocalPopChoice(o_45);
                          }
                        else
                          {
                            t = n_45;
                            {
                              ATerm z_62 = NULL;
                              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_63, (ATerm) ATinsert(ATinsert(ATempty, a_64), (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue)))));
                              if(match_cons(t, sym__2))
                                {
                                  ATerm s_45 = ATgetArgument(t, 0);
                                  if((ATgetSymbol((ATermAppl) s_45) != ATmakeSymbol("", 0, ATtrue)))
                                    _fail(t);
                                  z_62 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = z_62;
                              t = concat_0_0(t);
                            }
                          }
                        t = strs2constr_0_0(t);
                        t_63 = t;
                      }
                    }
                  }
              }
            }
        }
      }
    t = t_63;
  }
  return(t);
}
ATerm s_64 (ATerm e_64, ATerm f_64, ATerm t)
{
  ATerm h_64 = NULL;
  t = (ATerm) ATinsert(ATempty, e_64);
  t = syms2strs_0_0(t);
  h_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_64, (ATerm) ATinsert(ATempty, term_t_45));
  {
    ATerm u_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_45 = ATgetArgument(t, 0);
            ATerm x_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_64;
        t = at_end_1_0(q_7, t);
        ;
        LocalPopChoice(v_45);
      }
    else
      {
        t = u_45;
        {
          ATerm d_63 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_64, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue)))));
          if(match_cons(t, sym__2))
            {
              ATerm y_45 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_45) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_63 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_63;
          t = concat_0_0(t);
        }
      }
    t = strs2constr_0_0(t);
  }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm z_45 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_45;
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_45);
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  {
    ATerm a_46 = t;
    int b_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            n_64 = ATgetArgument(t, 0);
            {
              ATerm c_46 = ATgetArgument(t, 1);
            }
            {
              ATerm d_46 = ATgetArgument(t, 2);
            }
            {
              ATerm f_46 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_46);
        t = n_64;
        {
          ATerm j_46 = t;
          int k_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_65 = NULL,x_65 = NULL;
              ATerm l_46 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = l_46;
                }
              t = SSL_explode_string(n_64);
              x_65 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_31)), x_65), (ATerm) ATinsert(ATempty, term_e_31));
              t = concat_0_0(t);
              s_65 = t;
              t = SSL_implode_string(s_65);
              ;
              LocalPopChoice(k_46);
            }
          else
            {
              t = j_46;
            }
        }
      }
    else
      {
        t = a_46;
        if(match_cons(t, sym_prod_3))
          {
            n_64 = ATgetArgument(t, 0);
            o_64 = ATgetArgument(t, 1);
            {
              ATerm m_46 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_64;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm n_46 = t;
            int o_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_64(n_64, o_64, m_64, t);
                ;
                LocalPopChoice(o_46);
              }
            else
              {
                t = n_46;
                t = s_64(o_64, m_64, t);
              }
          }
        else
          {
            t = r_64(n_64, o_64, m_64, t);
          }
      }
  }
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm u_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  a_65 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_65);
  u_64 = t;
  t = w_64;
  t = v_100(t);
  y_64 = t;
  t = x_64;
  t = w_100(t);
  z_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, y_64, z_64), u_64);
  return(t);
}
ATerm iter_sep_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  i_65 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      e_65 = ATgetArgument(t, 0);
      f_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_65);
  d_65 = t;
  t = e_65;
  t = t_100(t);
  g_65 = t;
  t = f_65;
  t = u_100(t);
  h_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, g_65, h_65), d_65);
  return(t);
}
ATerm iter_star_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  o_65 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      m_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_65);
  l_65 = t;
  t = m_65;
  t = y_100(t);
  n_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, n_65), l_65);
  return(t);
}
ATerm iter_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  ATerm r_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  w_65 = t;
  if(match_cons(t, sym_iter_1))
    {
      u_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_65);
  r_65 = t;
  t = u_65;
  t = x_100(t);
  v_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, v_65), r_65);
  return(t);
}
ATerm alt_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
  f_66 = t;
  if(match_cons(t, sym_alt_2))
    {
      b_66 = ATgetArgument(t, 0);
      c_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_66);
  a_66 = t;
  t = b_66;
  t = z_100(t);
  d_66 = t;
  t = c_66;
  t = a_101(t);
  e_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, d_66, e_66), a_66);
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
      ;
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      {
        ATerm r_46 = t;
        int s_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = alt_2_0(syntaxless_sort_0_0, syntaxless_sort_0_0, t);
            ;
            LocalPopChoice(s_46);
          }
        else
          {
            t = r_46;
            {
              ATerm t_46 = t;
              int u_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = opt_1_0(syntaxless_sort_0_0, t);
                  ;
                  LocalPopChoice(u_46);
                }
              else
                {
                  t = t_46;
                  {
                    ATerm v_46 = t;
                    int w_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = iter_1_0(syntaxless_sort_0_0, t);
                        ;
                        LocalPopChoice(w_46);
                      }
                    else
                      {
                        t = v_46;
                        {
                          ATerm x_46 = t;
                          int y_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_star_1_0(syntaxless_sort_0_0, t);
                              ;
                              LocalPopChoice(y_46);
                            }
                          else
                            {
                              t = x_46;
                              {
                                ATerm z_46 = t;
                                int f_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = iter_sep_2_0(syntaxless_sort_0_0, _id, t);
                                    ;
                                    LocalPopChoice(f_47);
                                  }
                                else
                                  {
                                    t = z_46;
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
ATerm r_7 (ATerm t)
{
  t = Cons_2_0(syntaxless_sort_0_0, s_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm j_66 = NULL;
  t = prod_3_0(r_7, _id, _id, t);
  j_66 = t;
  t = term_g_47;
  t = get_options_0_0(t);
  t = oncetd_1_0(t_7, t);
  t = j_66;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm m_66 = NULL,s_66 = NULL;
  ATerm h_47 = t;
  int i_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm j_47 = ATgetArgument(t, 0);
          ATerm k_47 = ATgetArgument(t, 1);
          ATerm l_47 = ATgetArgument(t, 2);
          m_66 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(i_47);
      t = m_66;
      t = oncetd_1_0(u_7, t);
      t = term_z_10;
    }
  else
    {
      t = h_47;
      if(match_cons(t, sym_prod_3))
        {
          ATerm q_47 = ATgetArgument(t, 0);
          ATerm u_47 = ATgetArgument(t, 1);
          s_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_66;
      t = oncetd_1_0(v_7, t);
      t = term_z_10;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm w_66 = NULL,a_67 = NULL;
  ATerm v_47 = t;
  int w_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm j_48 = ATgetArgument(t, 0);
          ATerm k_48 = ATgetArgument(t, 1);
          ATerm l_48 = ATgetArgument(t, 2);
          w_66 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(w_47);
      t = w_66;
      t = oncetd_1_0(w_7, t);
      t = term_z_10;
    }
  else
    {
      t = v_47;
      if(match_cons(t, sym_prod_3))
        {
          ATerm m_48 = ATgetArgument(t, 0);
          ATerm n_48 = ATgetArgument(t, 1);
          a_67 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_67;
      t = oncetd_1_0(x_7, t);
      t = term_z_10;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm h_67 = NULL;
  h_67 = t;
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_66 = NULL;
        t = h_67;
        {
          ATerm r_48 = t;
          if((PushChoice() == 0))
            {
              ATerm t_48 = t;
              int u_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  ;
                  LocalPopChoice(u_48);
                }
              else
                {
                  t = t_48;
                  {
                    ATerm v_48 = t;
                    int w_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        ;
                        LocalPopChoice(w_48);
                      }
                    else
                      {
                        t = v_48;
                        {
                          ATerm x_48 = t;
                          int y_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              ;
                              LocalPopChoice(y_48);
                            }
                          else
                            {
                              t = x_48;
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
              t = r_48;
            }
          t = h_67;
          t = mk_constr_0_0(t);
          q_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_67, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, q_66)));
          t = add_attributes_0_0(t);
        }
        ;
        LocalPopChoice(p_48);
      }
    else
      {
        t = o_48;
        {
          ATerm j_67 = NULL;
          t = h_67;
          t = get_constr_0_0(t);
          j_67 = t;
          t = h_67;
          {
            ATerm y_7 (ATerm t)
            {
              ATerm z_7 (ATerm t)
              {
                t = j_67;
                t = uq2q_0_0(t);
                return(t);
              }
              t = cons_1_0(z_7, t);
              return(t);
            }
            t = oncetd_1_0(y_7, t);
          }
        }
      }
  }
  return(t);
}
ATerm sort_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL;
  o_67 = t;
  if(match_cons(t, sym_sort_1))
    {
      m_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_67);
  l_67 = t;
  t = m_67;
  t = c_101(t);
  n_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, n_67), l_67);
  return(t);
}
ATerm get_templ_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm z_48 = ATgetArgument(t, 0);
      if(match_cons(z_48, sym_prod_3))
        {
          r_67 = ATgetArgument(z_48, 0);
          s_67 = ATgetArgument(z_48, 1);
          t_67 = ATgetArgument(z_48, 2);
        }
      else
        _fail(t);
      {
        ATerm d_49 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm e_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_67;
        {
          ATerm a_8 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((u_67 != NULL) && (u_67 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_67 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(a_8, t);
        }
        ;
        LocalPopChoice(g_49);
      }
    else
      {
        t = e_49;
        {
          ATerm h_49 = t;
          int r_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_67;
              t = sort_1_0(_id, t);
              t = (ATerm) ATmakeAppl(sym_prod_3, r_67, s_67, t_67);
              t = prodcons_0_0(t);
              {
                ATerm b_8 (ATerm t)
                {
                  ATerm c_8 (ATerm t)
                  {
                    if(match_cons(t, sym_cons_1))
                      {
                        if(((u_67 != NULL) && (u_67 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          u_67 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1_0(c_8, t);
                  return(t);
                }
                t = prod_3_0(_id, _id, b_8, t);
              }
              ;
              LocalPopChoice(r_49);
            }
          else
            {
              t = h_49;
              t = term_t_49;
              u_67 = t;
            }
        }
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, r_67, s_67, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(u_67))))), (ATerm) ATinsert(ATempty, not_null(u_67)));
    t = get_pp_entry_0_0(t);
    v_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_67), v_67);
  }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm u_49 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_49;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm v_49 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_49;
    }
  return(t);
}
ATerm application_to_abox_0_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm z_49 = ATgetArgument(t, 0);
      if(match_cons(z_49, sym_prod_3))
        {
          w_67 = ATgetArgument(z_49, 0);
          x_67 = ATgetArgument(z_49, 1);
          d_68 = ATgetArgument(z_49, 2);
        }
      else
        _fail(t);
      e_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, w_67, x_67, d_68), e_68);
  t = get_templ_0_0(t);
  if(match_cons(t, sym__2))
    {
      f_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_67;
  t = filter_1_0(d_8, t);
  h_68 = t;
  t = e_68;
  t = filter_1_0(e_8, t);
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym__4, h_68, i_68, (ATerm)ATinsert(ATempty, f_68), term_z_19);
  t = seq2abox_0_0(t);
  j_68 = t;
  t = g_68;
  {
    ATerm f_8 (ATerm t)
    {
      ATerm a_50 = t;
      int c_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_50 = t;
          int e_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_8 (ATerm t)
              {
                t = j_68;
                return(t);
              }
              t = Instantiate_1_0(g_8, t);
              ;
              LocalPopChoice(e_50);
            }
          else
            {
              t = d_50;
              t = flat_list_0_0(t);
            }
          ;
          LocalPopChoice(c_50);
        }
      else
        {
          t = a_50;
        }
      return(t);
    }
    t = bottomup_1_0(f_8, t);
  }
  return(t);
}
ATerm opt_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  n_68 = t;
  if(match_cons(t, sym_opt_1))
    {
      l_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_68);
  k_68 = t;
  t = l_68;
  t = q_100(t);
  m_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, m_68), k_68);
  return(t);
}
ATerm filter_1_0 (ATerm t_121 (ATerm), ATerm t)
{
  ATerm h_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_50);
    }
  else
    {
      t = h_50;
      {
        ATerm j_50 = t;
        int k_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 (ATerm t)
            {
              t = filter_1_0(t_121, t);
              return(t);
            }
            t = Cons_2_0(t_121, h_8, t);
            ;
            LocalPopChoice(k_50);
          }
        else
          {
            t = j_50;
            {
              ATerm t_68 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_50 = ATgetFirst((ATermList) t);
                  t_68 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_68;
              t = filter_1_0(t_121, t);
            }
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  t = x_108(t);
  {
    ATerm i_8 (ATerm t)
    {
      t = topdown_1_0(x_108, t);
      return(t);
    }
    t = SRTS_all(i_8, t);
  }
  return(t);
}
ATerm sometd_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm v_68 (ATerm t)
  {
    ATerm q_50 = t;
    int r_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_110(t);
        ;
        LocalPopChoice(r_50);
      }
    else
      {
        t = q_50;
        t = SRTS_some(v_68, t);
      }
    return(t);
  }
  t = v_68(t);
  return(t);
}
ATerm repeat_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm w_68 (ATerm t)
  {
    ATerm u_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_107(t);
        t = w_68(t);
        ;
        LocalPopChoice(z_50);
      }
    else
      {
        t = u_50;
      }
    return(t);
  }
  t = w_68(t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm y_68 = NULL;
  y_68 = t;
  t = SSL_explode_string(y_68);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm x_68 = NULL;
  t = map_1_0(j_8, t);
  t = concat_0_0(t);
  x_68 = t;
  t = SSL_implode_string(x_68);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      p_69 = ATgetArgument(t, 0);
      q_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(p_69);
  r_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_69), term_d_51), r_69), term_a_51);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      b_69 = ATgetArgument(t, 0);
      t = b_69;
    }
  else
    {
      ATerm o_69 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          b_69 = ATgetArgument(t, 0);
          c_69 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_69;
      t = map_1_0(k_8, t);
      t = concat_0_0(t);
      o_69 = t;
      t = (ATerm) ATinsert(CheckATermList(o_69), b_69);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm e_70 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      e_70 = ATgetArgument(t, 0);
      {
        ATerm e_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_70;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      u_69 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, u_69);
    }
  else
    {
      ATerm d_70 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          u_69 = ATgetArgument(t, 0);
          v_69 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_69;
      t = map_1_0(l_8, t);
      d_70 = t;
      t = (ATerm) ATinsert(CheckATermList(d_70), u_69);
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm b_68 = NULL;
  b_68 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_68), (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue))));
  t = b_68;
  return(t);
}
ATerm StoreEntry_0_0 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_70 = ATgetArgument(t, 0);
      g_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_70;
  t = mk_key_0_0(t);
  h_70 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), h_70, (ATerm) ATmakeAppl(sym__2, f_70, g_70));
  t = f_70;
  t = path_to_string_0_0(t);
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_70, g_70);
  t = if_verbose1_1_0(m_8, t);
  return(t);
}
ATerm selector_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  o_70 = t;
  if(match_cons(t, sym_selector_2))
    {
      k_70 = ATgetArgument(t, 0);
      l_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_70);
  j_70 = t;
  t = k_70;
  t = t_98(t);
  m_70 = t;
  t = l_70;
  t = u_98(t);
  n_70 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, m_70, n_70), j_70);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm f_51 = t;
  int n_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_70 = ATgetFirst((ATermList) t);
          x_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_70;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = x_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_70 = ATgetFirst((ATermList) t);
          z_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_70;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(z_70), term_e_31);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(z_70), term_o_32);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(z_70), term_o_51);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(z_70), term_x_51);
                }
            }
        }
      ;
      LocalPopChoice(n_51);
    }
  else
    {
      t = f_51;
    }
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm n_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  ATerm h_71 (ATerm t)
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_8, t);
        t = q_115(t);
        ;
        LocalPopChoice(c_52);
      }
    else
      {
        t = b_52;
        t = Cons_2_0(_id, h_71, t);
      }
    return(t);
  }
  t = h_71(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_71 = ATgetFirst((ATermList) t);
      m_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm d_52 = t;
      int f_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_71;
          ;
          LocalPopChoice(f_52);
        }
      else
        {
          t = d_52;
          t = m_71;
          t = last_0_0(t);
        }
    }
  else
    {
      t = m_71;
      t = last_0_0(t);
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm u_71 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_52 = ATgetFirst((ATermList) t);
      u_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_71;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
  r_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_71 = ATgetFirst((ATermList) t);
      {
        ATerm j_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_71;
  t = r_123(t);
  t = r_71;
  t = last_0_0(t);
  t = r_123(t);
  t = r_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_52 = ATgetFirst((ATermList) t);
      t_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_71;
  t = at_last_1_0(o_8, t);
  return(t);
}
ATerm S_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,c_72 = NULL,d_72 = NULL;
  d_72 = t;
  if(match_cons(t, sym_S_1))
    {
      w_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_72);
  v_71 = t;
  t = w_71;
  t = y_98(t);
  c_72 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, c_72), v_71);
  return(t);
}
ATerm SOpt_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
  l_72 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      h_72 = ATgetArgument(t, 0);
      i_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_72);
  g_72 = t;
  t = h_72;
  t = k_100(t);
  j_72 = t;
  t = i_72;
  t = l_100(t);
  k_72 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, j_72, k_72), g_72);
  return(t);
}
ATerm Arg2_2_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
  x_72 = t;
  if(match_cons(t, sym_Arg2_2))
    {
      t_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_72);
  s_72 = t;
  t = t_72;
  t = w_98(t);
  v_72 = t;
  t = u_72;
  t = x_98(t);
  w_72 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, v_72, w_72), s_72);
  return(t);
}
ATerm Arg_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  d_73 = t;
  if(match_cons(t, sym_Arg_1))
    {
      b_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_73);
  a_73 = t;
  t = b_73;
  t = v_98(t);
  c_73 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, c_73), a_73);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm g_73 = NULL;
  g_73 = t;
  t = SSL_string_to_int(g_73);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm h_73 = NULL;
  h_73 = t;
  t = SSL_string_to_int(h_73);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm i_73 = NULL;
  i_73 = t;
  t = SSL_string_to_int(i_73);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,z_68 = NULL,i_69 = NULL;
  z_68 = t;
  t = SSL_explode_string(z_68);
  t = unquote_chars_1_0(u_8, t);
  i_69 = t;
  t = SSL_implode_string(i_69);
  k_69 = t;
  t = SSL_explode_string(k_69);
  t = unescape_chars_0_0(t);
  l_69 = t;
  t = SSL_implode_string(l_69);
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm j_73 = NULL;
  j_73 = t;
  t = SSL_string_to_int(j_73);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(p_8, t);
      ;
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
            t = Arg2_2_0(q_8, r_8, t);
            ;
            LocalPopChoice(o_52);
          }
        else
          {
            t = n_52;
            {
              ATerm r_52 = t;
              int t_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(t_52);
                }
              else
                {
                  t = r_52;
                  {
                    ATerm u_52 = t;
                    int v_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = S_1_0(s_8, t);
                        ;
                        LocalPopChoice(v_52);
                      }
                    else
                      {
                        t = u_52;
                        t = selector_2_0(y_8, _id, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm k_73 (ATerm t)
  {
    ATerm w_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_110(t);
        ;
        LocalPopChoice(x_52);
      }
    else
      {
        t = w_52;
        t = SRTS_one(k_73, t);
      }
    return(t);
  }
  t = k_73(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm y_52 = t;
  int z_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_53;
      t = get_options_0_0(t);
      t = oncetd_1_0(z_8, t);
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = SSL_exit((ATerm) ATmakeInt(1));
      t = (ATerm) ATinsert(ATempty, term_b_53);
      ;
      LocalPopChoice(z_52);
    }
  else
    {
      t = y_52;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_c_53);
    }
  return(t);
}
ATerm InId_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_53) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      m_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_73);
  if(match_cons(t, sym__2))
    {
      n_73 = ATgetArgument(t, 0);
      {
        ATerm e_53 = ATgetArgument(t, 1);
        if(((ATgetType(e_53) == AT_LIST) && !(ATisEmpty(e_53))))
          {
            o_73 = ATgetFirst((ATermList) e_53);
            {
              ATerm f_53 = (ATerm) ATgetNext((ATermList) e_53);
              if(((ATgetType(f_53) != AT_LIST) || !(ATisEmpty(f_53))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_73;
  {
    ATerm g_53 = t;
    int h_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_136(t);
        ;
        LocalPopChoice(h_53);
      }
    else
      {
        t = g_53;
        t = type_failure_0_0(t);
      }
    t = o_73;
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL;
  t = if_verbose1_1_0(b_9, t);
  t = ReadFromFile_0_0(t);
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_53, r_73);
  t = InId_1_0(c_9, t);
  if(match_cons(t, sym_PP_Table_1))
    {
      q_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_73;
  t = reverse_acc_2_0(_id, f_9, t);
  t = map_1_0(g_9, t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm r_70 = NULL;
  r_70 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_70), (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue))));
  t = r_70;
  return(t);
}
ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = topdown_1_0(h_9, t);
  t = StoreEntry_0_0(t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(k_53);
    }
  else
    {
      t = j_53;
    }
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm p_73 = NULL;
  p_73 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)));
  t = p_73;
  t = map_1_0(a_9, t);
  return(t);
}
ATerm union_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL;
  if(match_cons(t, sym__2))
    {
      v_73 = ATgetArgument(t, 0);
      w_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_73;
  {
    ATerm x_73 (ATerm t)
    {
      ATerm l_53 = t;
      int m_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_73;
          ;
          LocalPopChoice(m_53);
        }
      else
        {
          t = l_53;
          {
            ATerm n_53 = t;
            int o_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_70 = NULL,i_71 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_70 = ATgetFirst((ATermList) t);
                    i_71 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_73;
                {
                  ATerm i_9 (ATerm t)
                  {
                    ATerm j_71 = NULL;
                    j_71 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_70, j_71);
                    t = t_118(t);
                    return(t);
                  }
                  t = fetch_1_0(i_9, t);
                  t = i_71;
                  t = x_73(t);
                }
                ;
                LocalPopChoice(o_53);
              }
            else
              {
                t = n_53;
                t = Cons_2_0(_id, x_73, t);
              }
          }
        }
      return(t);
    }
    t = x_73(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm t)
{
  ATerm p_53 = t;
  int q_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_120(t);
      ;
      LocalPopChoice(q_53);
    }
  else
    {
      t = p_53;
      {
        ATerm a_74 = NULL,b_74 = NULL,e_74 = NULL,f_74 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_74 = ATgetFirst((ATermList) t);
            b_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_74;
        t = u_120(t);
        e_74 = t;
        t = b_74;
        t = foldr_3_0(s_120, t_120, u_120, t);
        f_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_74, f_74);
        t = t_120(t);
      }
    }
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = union_1_0(n_9, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm p_72 = NULL;
  if(match_cons(t, sym__2))
    {
      p_72 = ATgetArgument(t, 0);
      if((p_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_om_1_0 (ATerm o_119 (ATerm), ATerm t)
{
  ATerm r_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_74 = NULL;
      t = o_119(t);
      i_74 = t;
      t = (ATerm) ATinsert(ATempty, i_74);
      ;
      LocalPopChoice(s_53);
    }
  else
    {
      t = r_53;
      {
        ATerm z_71 = NULL,a_72 = NULL;
        z_71 = t;
        t = SSL_explode_term(z_71);
        if(match_cons(t, sym__2))
          {
            ATerm t_53 = ATgetArgument(t, 0);
            a_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_72;
        {
          ATerm m_9 (ATerm t)
          {
            t = collect_om_1_0(o_119, t);
            return(t);
          }
          t = foldr_3_0(j_9, l_9, m_9, t);
        }
      }
    }
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm m_74 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      m_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_74;
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = sometd_1_0(y_9, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm n_74 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      n_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_74;
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm u_53 = t;
  int e_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_54 = t;
      int g_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_54);
        }
      else
        {
          t = f_54;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_54 = ATgetFirst((ATermList) t);
              ATerm i_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(b_10, t);
      ;
      LocalPopChoice(e_54);
    }
  else
    {
      t = u_53;
    }
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm j_54 = t;
  if((PushChoice() == 0))
    {
      t = opt_1_0(c_10, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_54;
    }
  {
    ATerm k_54 = t;
    if((PushChoice() == 0))
      {
        t = layout_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_54;
      }
  }
  return(t);
}
ATerm c_10 (ATerm t)
{
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = layout_1_0(_id, t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,q_72 = NULL,y_73 = NULL,f_75 = NULL,y_75 = NULL;
  if(match_cons(t, sym__2))
    {
      l_74 = ATgetArgument(t, 0);
      k_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_74;
  t = collect_om_1_0(p_9, t);
  t = reverse_acc_2_0(_id, u_9, t);
  t = read_pp_tables_0_0(t);
  t = k_74;
  t = repeat_1_0(w_9, t);
  q_72 = t;
  t = topdown_1_0(z_9, t);
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = application_to_abox_0_0(t);
        ;
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
        t = fatal_ambiguity_0_0(t);
      }
    y_73 = t;
    t = q_72;
    t = collect_p__1_0(h_10, t);
    f_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_73, f_75);
    t = insert_layout_0_0(t);
    y_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_74, y_75);
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
  if(match_cons(t, sym__2))
    {
      o_74 = ATgetArgument(t, 0);
      p_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_74, term_n_54);
  t = open_stream_0_0(t);
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_74, p_74);
  t = e_127(t);
  t = fclose_0_0(t);
  t = p_74;
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = fetch_1_0(p_10, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = WriteToFile_1_0(q_10, t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_54 = ATgetArgument(t, 0);
      if(match_cons(o_54, sym_Stream_1))
        {
          t_74 = ATgetArgument(o_54, 0);
        }
      else
        _fail(t);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(t_74, u_74);
  v_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_74);
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = WriteToFile_1_0(s_10, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_54 = ATgetArgument(t, 0);
      if(match_cons(s_54, sym_Stream_1))
        {
          w_74 = ATgetArgument(s_54, 0);
        }
      else
        _fail(t);
      x_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(w_74, x_74);
  y_74 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), y_74);
  z_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_74);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL;
  r_74 = t;
  {
    ATerm i_10 (ATerm t)
    {
      ATerm t_54 = t;
      int u_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_10 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((s_74 != NULL) && (s_74 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_74 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_10, t);
          ;
          LocalPopChoice(u_54);
        }
      else
        {
          t = t_54;
          t = term_v_54;
          if(((s_74 != NULL) && (s_74 != t)))
            _fail(t);
          else
            s_74 = t;
        }
      return(t);
    }
    t = _2_0(i_10, _id, t);
    t = r_74;
    {
      ATerm l_10 (ATerm t)
      {
        ATerm i_77 = NULL;
        i_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_74), i_77);
        return(t);
      }
      t = _2_0(_id, l_10, t);
      {
        ATerm w_54 = t;
        int x_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_10, o_10, t);
            ;
            LocalPopChoice(x_54);
          }
        else
          {
            t = w_54;
            t = _2_0(_id, r_10, t);
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
ATerm apply_strategy_1_0 (ATerm g_130 (ATerm), ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL;
  a_75 = t;
  t = dtime_0_0(t);
  t = a_75;
  t = g_130(t);
  b_75 = t;
  t = dtime_0_0(t);
  c_75 = t;
  t = b_75;
  if(match_cons(t, sym__2))
    {
      d_75 = ATgetArgument(t, 0);
      e_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_75), (ATerm) ATmakeAppl(sym_Runtime_1, c_75)), e_75);
  return(t);
}
ATerm s_75 (ATerm m_75, ATerm t)
{
  t = SSL_fclose(m_75);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL;
  q_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_75 = ATgetArgument(t, 0);
      {
        ATerm y_54 = t;
        int z_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_75);
            ;
            LocalPopChoice(z_54);
          }
        else
          {
            t = y_54;
            t = s_75(q_75, t);
          }
      }
    }
  else
    {
      t = s_75(q_75, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_75 = NULL;
  t = SSL_stdin_stream();
  t_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_75);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_75 = NULL;
  t = SSL_stdout_stream();
  u_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_75);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_75 = NULL;
  t = SSL_stderr_stream();
  v_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_75);
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm d_76 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      d_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_76;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm h_76 = NULL;
  h_76 = t;
  t = SSL_is_string(h_76);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_55 = ATgetArgument(t, 0);
      ATerm b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_77 = NULL,y_77 = NULL;
        x_77 = t;
        t = SSL_explode_term(x_77);
        if(match_cons(t, sym__2))
          {
            ATerm f_55 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_55) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_55 = ATgetArgument(t, 1);
              if(((ATgetType(g_55) == AT_LIST) && !(ATisEmpty(g_55))))
                {
                  y_77 = ATgetFirst((ATermList) g_55);
                  {
                    ATerm h_55 = (ATerm) ATgetNext((ATermList) g_55);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_77;
        if(match_cons(t, sym_stderr_0))
          {
            t = y_77;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = y_77;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_77;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        {
          ATerm i_55 = t;
          int j_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
              t = _2_0(t_10, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_76 = ATgetArgument(t, 0);
                  b_76 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_76, b_76);
              c_76 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_76);
              ;
              LocalPopChoice(j_55);
            }
          else
            {
              t = i_55;
              {
                ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
                t = _2_0(u_10, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_76 = ATgetArgument(t, 0);
                    f_76 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_76, f_76);
                g_76 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_76);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  ATerm k_55 = t;
  int l_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_76 = NULL;
      l_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_76, term_m_55);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_55);
    }
  else
    {
      t = k_55;
      {
        ATerm z_77 = NULL;
        z_77 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_77), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = z_77;
        _fail(t);
      }
    }
  i_76 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_76);
  j_76 = t;
  t = i_76;
  t = fclose_0_0(t);
  t = j_76;
  return(t);
}
ATerm fetch_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm q_76 (ATerm t)
  {
    ATerm n_55 = t;
    int o_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_114, _id, t);
        ;
        LocalPopChoice(o_55);
      }
    else
      {
        t = n_55;
        t = Cons_2_0(_id, q_76, t);
      }
    return(t);
  }
  t = q_76(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_55 = t;
  int q_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_55);
    }
  else
    {
      t = p_55;
      {
        ATerm t_76 = NULL,u_76 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_76 = ATgetFirst((ATermList) t);
            u_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_76;
        {
          ATerm v_10 (ATerm t)
          {
            t = u_76;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(v_10, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  ATerm a_77 (ATerm t)
  {
    ATerm r_55 = t;
    int s_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_77, t);
        ;
        LocalPopChoice(s_55);
      }
    else
      {
        t = r_55;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_115(t);
      }
    return(t);
  }
  t = a_77(t);
  return(t);
}
ATerm _2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,k_77 = NULL,l_77 = NULL;
  l_77 = t;
  if(match_cons(t, sym__2))
    {
      c_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_77);
  b_77 = t;
  t = c_77;
  t = f_88(t);
  e_77 = t;
  t = d_77;
  t = g_88(t);
  k_77 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, e_77, k_77), b_77);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm t_78 = NULL;
  t_78 = t;
  t = SSL_explode_string(t_78);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm f_79 = NULL;
  f_79 = t;
  t = SSL_explode_string(f_79);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_78 = NULL;
  t = _2_0(w_10, x_10, t);
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_79 = NULL,r_79 = NULL;
        if(match_cons(t, sym__2))
          {
            p_79 = ATgetArgument(t, 0);
            r_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_79;
        {
          ATerm y_10 (ATerm t)
          {
            t = r_79;
            return(t);
          }
          t = at_end_1_0(y_10, t);
        }
        ;
        LocalPopChoice(u_55);
      }
    else
      {
        t = t_55;
        {
          ATerm e_78 = NULL,f_78 = NULL;
          e_78 = t;
          t = SSL_explode_term(e_78);
          if(match_cons(t, sym__2))
            {
              ATerm v_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_55) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_78 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_78;
          t = concat_0_0(t);
        }
      }
    r_78 = t;
    t = SSL_implode_string(r_78);
  }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm x_55 = t;
  int y_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_55);
    }
  else
    {
      t = x_55;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_55 = t;
  int a_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_80 = NULL;
      m_80 = t;
      t = SSL_is_string(m_80);
      ;
      LocalPopChoice(a_56);
    }
  else
    {
      t = z_55;
      {
        ATerm b_56 = t;
        int c_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_11, t);
            ;
            LocalPopChoice(c_56);
          }
        else
          {
            t = b_56;
            {
              ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL;
              q_80 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_80 = ATgetArgument(t, 0);
                  t = r_80;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_80 = ATgetArgument(t, 0);
                      t = r_80;
                      {
                        ATerm e_56 = t;
                        int i_56 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_80);
                            {
                              ATerm k_56 = t;
                              int l_56 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_79 = NULL;
                                  t = eval_config_0_0(t);
                                  c_79 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_80, c_79);
                                  t = c_79;
                                  ;
                                  LocalPopChoice(l_56);
                                }
                              else
                                {
                                  t = k_56;
                                }
                            }
                            ;
                            LocalPopChoice(i_56);
                          }
                        else
                          {
                            t = e_56;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_80), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = r_80;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_81 = NULL,i_81 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_80 = ATgetArgument(t, 0);
                          s_80 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_80;
                      t = eval_config_0_0(t);
                      h_81 = t;
                      t = s_80;
                      t = eval_config_0_0(t);
                      i_81 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_81, i_81);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_128 (ATerm), ATerm t)
{
  ATerm n_56 = t;
  int o_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_82 = NULL,p_82 = NULL;
      n_82 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_56 = t;
        int q_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_79 = NULL;
            t = eval_config_0_0(t);
            k_79 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_79);
            t = k_79;
            ;
            LocalPopChoice(q_56);
          }
        else
          {
            t = p_56;
          }
        p_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_82, term_y_21);
        t = geq_0_0(t);
        t = n_82;
        t = p_128(t);
      }
      ;
      LocalPopChoice(o_56);
    }
  else
    {
      t = n_56;
    }
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm t_82 = NULL;
  t_82 = t;
  if(match_string(t, "-k"))
    {
      t = t_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_82;
    }
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL;
  u_82 = t;
  t = SSL_string_to_int(u_82);
  v_82 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_82);
  t = u_82;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_r_56;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_11, d_11, e_11, t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm x_82 = NULL;
  x_82 = t;
  if(match_string(t, "-S"))
    {
      t = x_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_82;
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_t_56;
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_u_56;
  return(t);
}
ATerm i_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL;
  y_82 = t;
  t = SSL_string_to_int(y_82);
  z_82 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_82);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_82);
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_v_56;
  return(t);
}
ATerm m_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_56;
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_a_57;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_57 = t;
  int c_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_11, g_11, h_11, t);
      ;
      LocalPopChoice(c_57);
    }
  else
    {
      t = b_57;
      {
        ATerm d_57 = t;
        int e_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_11, j_11, l_11, t);
            ;
            LocalPopChoice(e_57);
          }
        else
          {
            t = d_57;
            t = Option_3_0(m_11, n_11, o_11, t);
          }
      }
    }
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm b_83 = NULL;
  b_83 = t;
  if(match_string(t, "-o"))
    {
      t = b_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_83;
    }
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm c_83 = NULL;
  c_83 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), c_83);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_83);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_f_57;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_11, q_11, t_11, t);
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm f_83 = NULL;
  f_83 = t;
  if(match_string(t, "-i"))
    {
      t = f_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_83;
    }
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm g_83 = NULL;
  g_83 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_83);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_83);
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_g_57;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_11, v_11, w_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_10;
  t = whoami_0_0(t);
  i_83 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), i_83));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_57 = t;
    int i_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_79 = NULL;
        t = eval_config_0_0(t);
        q_79 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_79);
        t = q_79;
        ;
        LocalPopChoice(i_57);
      }
    else
      {
        t = h_57;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm t)
{
  ATerm l_57 = t;
  int m_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_120(t);
      ;
      LocalPopChoice(m_57);
    }
  else
    {
      t = l_57;
      {
        ATerm m_83 = NULL,n_83 = NULL,q_84 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_83 = ATgetFirst((ATermList) t);
            n_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_83;
        t = foldr_2_0(q_120, r_120, t);
        q_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_83, q_84);
        t = r_120(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = term_s_56;
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL;
  if(match_cons(t, sym__2))
    {
      w_79 = ATgetArgument(t, 0);
      x_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_57 = t;
    int s_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_79, x_79);
        ;
        LocalPopChoice(s_57);
      }
    else
      {
        t = p_57;
        t = SSL_addr(w_79, x_79);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_84 = NULL,s_79 = NULL,t_79 = NULL;
  t = times_0_0(t);
  s_79 = t;
  t = SSL_explode_term(s_79);
  if(match_cons(t, sym__2))
    {
      ATerm t_57 = ATgetArgument(t, 0);
      t_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_79;
  t = foldr_2_0(x_11, z_11, t);
  t_84 = t;
  t = SSL_TicksToSeconds(t_84);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
  f_86 = t;
  if(match_cons(t, sym__2))
    {
      g_86 = ATgetArgument(t, 0);
      h_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_57 = t;
    int v_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_86;
        if((g_86 != t))
          {
            _fail(t);
          }
        t = f_86;
        ;
        LocalPopChoice(v_57);
      }
    else
      {
        t = u_57;
        t = f_86;
        {
          ATerm y_57 = t;
          int a_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_86, h_86);
              ;
              LocalPopChoice(a_58);
            }
          else
            {
              t = y_57;
              t = SSL_gtr(g_86, h_86);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_86, h_86);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_128 (ATerm), ATerm t)
{
  ATerm b_58 = t;
  int e_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_86 = NULL,m_86 = NULL;
      k_86 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_58 = t;
        int i_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_80 = NULL;
            t = eval_config_0_0(t);
            y_80 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_80);
            t = y_80;
            ;
            LocalPopChoice(i_58);
          }
        else
          {
            t = f_58;
          }
        m_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_86, term_z_19);
        t = geq_0_0(t);
        t = k_86;
        t = o_128(t);
      }
      ;
      LocalPopChoice(e_58);
    }
  else
    {
      t = b_58;
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL;
  t = run_time_0_0(t);
  o_86 = t;
  t = term_z_10;
  t = whoami_0_0(t);
  p_86 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_86), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), p_86));
  t = (ATerm) ATmakeAppl(sym__2, term_j_58, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_58), o_86), term_m_58), p_86));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm p_58 = t;
  int q_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(q_58);
    }
  else
    {
      t = p_58;
      {
        ATerm r_58 = t;
        int s_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(s_58);
          }
        else
          {
            t = r_58;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_131 (ATerm), ATerm t)
{
  ATerm t_58 = t;
  int w_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm y_58 = t;
        int z_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_81 = NULL;
            t = eval_config_0_0(t);
            e_81 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_81);
            t = e_81;
            ;
            LocalPopChoice(z_58);
          }
        else
          {
            t = y_58;
          }
      }
      ;
      LocalPopChoice(w_58);
    }
  else
    {
      t = t_58;
      t = fetch_1_0(b_12, t);
    }
  t = e_131(t);
  return(t);
}
ATerm map_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm q_86 (ATerm t)
  {
    ATerm b_59 = t;
    int c_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_59);
      }
    else
      {
        t = b_59;
        t = Cons_2_0(o_114, q_86, t);
      }
    return(t);
  }
  t = q_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_86 = ATgetFirst((ATermList) t);
      t_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_86 = NULL,y_86 = NULL;
        t = t_86;
        t = b_0(t);
        x_86 = t;
        t = s_86;
        t = a_0(t);
        y_86 = t;
        t = t_86;
        {
          ATerm d_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_86), y_86);
            return(t);
          }
          t = reverse_acc_2_0(a_0, d_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_10;
      t = b_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL;
  c_87 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_87);
  z_86 = t;
  t = a_87;
  t = m_98(t);
  b_87 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_87), z_86);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm f_87 = NULL;
  f_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_87), term_i_59);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_59 = t;
  int m_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm n_59 = t;
        int p_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_81 = NULL;
            t = eval_config_0_0(t);
            k_81 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_81);
            t = k_81;
            ;
            LocalPopChoice(p_59);
          }
        else
          {
            t = n_59;
          }
      }
      ;
      LocalPopChoice(m_59);
    }
  else
    {
      t = l_59;
      t = fetch_1_0(e_12, t);
    }
  t = term_q_59;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, f_12, t);
  t = map_1_0(g_12, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
  j_87 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_87);
  g_87 = t;
  t = h_87;
  t = n_98(t);
  i_87 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, i_87), g_87);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL;
  n_87 = t;
  {
    ATerm r_59 = t;
    int x_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_87;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_59 = ATgetFirst((ATermList) t);
                ATerm a_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_87;
          }
        ;
        LocalPopChoice(x_59);
      }
    else
      {
        t = r_59;
        t = (ATerm) ATinsert(ATempty, n_87);
      }
    o_87 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), o_87);
    t = n_87;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_81 = NULL;
        t = eval_config_0_0(t);
        o_81 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_81);
        t = o_81;
        ;
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm h_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_60;
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm l_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_60;
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_n_60;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_12, i_12, k_12, t);
      ;
      LocalPopChoice(q_60);
    }
  else
    {
      t = o_60;
      t = Option_3_0(l_12, m_12, n_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL;
  y_87 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_87 = ATgetFirst((ATermList) t);
      u_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_87);
  s_87 = t;
  t = t_87;
  t = u_92(t);
  w_87 = t;
  t = u_87;
  t = v_92(t);
  x_87 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_87), w_87), s_87);
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm i_88 = NULL;
  i_88 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_88);
  t = (ATerm) ATmakeAppl(sym_Program_1, i_88);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_133 (ATerm), ATerm t)
{
  ATerm h_88 = NULL;
  h_88 = t;
  {
    ATerm r_60 = t;
    int t_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_60;
        t = h_133(t);
        ;
        LocalPopChoice(t_60);
      }
    else
      {
        t = r_60;
      }
    t = h_88;
    {
      ATerm q_12 (ATerm t)
      {
        ATerm v_60 = t;
        int w_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_60 = t;
            int y_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_60);
              }
            else
              {
                t = x_60;
                t = h_133(t);
                t = Cons_2_0(_id, q_12, t);
              }
            ;
            LocalPopChoice(w_60);
          }
        else
          {
            t = v_60;
            {
              ATerm k_88 = NULL,l_88 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_88 = ATgetFirst((ATermList) t);
                  l_88 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_88), (ATerm) ATmakeAppl(sym_Undefined_1, k_88));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_12, q_12, t);
    }
  }
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm v_88 = NULL;
  v_88 = t;
  if(match_string(t, "--help"))
    {
      t = v_88;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_88;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_88;
        }
    }
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_60;
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_a_61;
  return(t);
}
ATerm v_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
  s_88 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_88;
  {
    ATerm r_12 (ATerm t)
    {
      ATerm i_61 = t;
      int k_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_133(t);
          ;
          LocalPopChoice(k_61);
        }
      else
        {
          t = i_61;
          {
            ATerm l_61 = t;
            int n_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_12, t_12, u_12, t);
                ;
                LocalPopChoice(n_61);
              }
            else
              {
                t = l_61;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_12, t);
    {
      ATerm p_61 = t;
      int q_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_89 = NULL;
          a_89 = t;
          {
            ATerm s_61 = t;
            int u_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_89;
                {
                  ATerm v_61 = t;
                  int x_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_61 = t;
                        int a_62 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_82 = NULL;
                            t = eval_config_0_0(t);
                            e_82 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_82);
                            t = e_82;
                            ;
                            LocalPopChoice(a_62);
                          }
                        else
                          {
                            t = y_61;
                          }
                      }
                      ;
                      LocalPopChoice(x_61);
                    }
                  else
                    {
                      t = v_61;
                      t = fetch_1_0(v_12, t);
                    }
                  t = a_89;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(u_61);
              }
            else
              {
                t = s_61;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm b_62 = t;
                  int d_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_82 = NULL;
                      t = eval_config_0_0(t);
                      r_82 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), r_82);
                      t = r_82;
                      ;
                      LocalPopChoice(d_62);
                    }
                  else
                    {
                      t = b_62;
                    }
                  t = a_89;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(q_61);
        }
      else
        {
          t = p_61;
          {
            ATerm e_62 = t;
            int g_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_12 (ATerm t)
                {
                  ATerm a_13 (ATerm t)
                  {
                    if(((t_88 != NULL) && (t_88 != t)))
                      _fail(t);
                    else
                      t_88 = t;
                    return(t);
                  }
                  t = Undefined_1_0(a_13, t);
                  return(t);
                }
                t = fetch_1_0(x_12, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_88)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_j_58, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_88)), term_i_62));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(g_62);
              }
            else
              {
                t = e_62;
              }
          }
        }
      u_88 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_88;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm t)
{
  ATerm d_89 = NULL;
  t = parse_options_1_0(g_131, t);
  d_89 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), d_89);
  t = d_89;
  t = i_131(t);
  {
    ATerm j_62 = t;
    int k_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_131, t);
        ;
        LocalPopChoice(k_62);
      }
    else
      {
        t = j_62;
        {
          ATerm l_62 = t;
          int m_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_131(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_62);
            }
          else
            {
              t = l_62;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_13 (ATerm t)
{
  t = if_verbose2_1_0(k_13, t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_62;
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = term_r_62;
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm e_89 = NULL,f_89 = NULL;
  e_89 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm s_62 = t;
    int t_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_83 = NULL;
        t = eval_config_0_0(t);
        d_83 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_83);
        t = d_83;
        ;
        LocalPopChoice(t_62);
      }
    else
      {
        t = s_62;
      }
    f_89 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, f_89));
    t = e_89;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm r_130 (ATerm), ATerm t)
{
  ATerm b_13 (ATerm t)
  {
    ATerm a_63 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_130(t);
        ;
        LocalPopChoice(b_63);
      }
    else
      {
        t = a_63;
        {
          ATerm c_63 = t;
          int e_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_63);
            }
          else
            {
              t = c_63;
              {
                ATerm f_63 = t;
                int g_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_63);
                  }
                else
                  {
                    t = f_63;
                    {
                      ATerm h_63 = t;
                      int i_63 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_13, i_13, j_13, t);
                          ;
                          LocalPopChoice(i_63);
                        }
                      else
                        {
                          t = h_63;
                          {
                            ATerm j_63 = t;
                            int k_63 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(k_63);
                              }
                            else
                              {
                                t = j_63;
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
  ATerm d_13 (ATerm t)
  {
    ATerm g_89 = NULL,h_89 = NULL,j_83 = NULL;
    g_89 = t;
    {
      ATerm l_63 = t;
      int m_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_89 != NULL) && (h_89 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_89 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_13, t);
          ;
          LocalPopChoice(m_63);
        }
      else
        {
          t = l_63;
          t = term_q_63;
          h_89 = t;
        }
      t = not_null(h_89);
      t = ReadFromFile_0_0(t);
      j_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_89, j_83);
      t = apply_strategy_1_0(p_130, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_13, r_130, c_13, d_13, t);
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm r_63 = t;
  int s_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_13, s_13, t_13, t);
      ;
      LocalPopChoice(s_63);
    }
  else
    {
      t = r_63;
      {
        ATerm w_63 = t;
        int x_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(v_13, w_13, x_13, t);
            ;
            LocalPopChoice(x_63);
          }
        else
          {
            t = w_63;
            t = ArgOption_3_0(y_13, z_13, a_14, t);
          }
      }
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = term_y_63;
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_b_64;
  return(t);
}
ATerm v_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = term_c_64;
  return(t);
}
ATerm y_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm i_89 = NULL;
  i_89 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, i_89);
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_d_64;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(asfix2abox_0_0, p_13, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

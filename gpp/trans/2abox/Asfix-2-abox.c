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
ATerm term_v_66;
ATerm term_q_66;
ATerm term_j_66;
ATerm term_g_66;
ATerm term_d_66;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_l_64;
ATerm term_s_63;
ATerm term_l_63;
ATerm term_u_62;
ATerm term_q_62;
ATerm term_o_62;
ATerm term_m_62;
ATerm term_l_62;
ATerm term_j_62;
ATerm term_h_62;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_s_60;
ATerm term_q_60;
ATerm term_k_60;
ATerm term_k_59;
ATerm term_i_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_w_58;
ATerm term_p_58;
ATerm term_d_57;
ATerm term_g_56;
ATerm term_d_56;
ATerm term_h_55;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_j_52;
ATerm term_c_49;
ATerm term_g_47;
ATerm term_a_47;
ATerm term_f_45;
ATerm term_q_44;
ATerm term_n_44;
ATerm term_k_44;
ATerm term_g_44;
ATerm term_z_43;
ATerm term_v_43;
ATerm term_r_43;
ATerm term_n_43;
ATerm term_k_43;
ATerm term_c_43;
ATerm term_y_42;
ATerm term_v_42;
ATerm term_r_42;
ATerm term_n_42;
ATerm term_d_42;
ATerm term_z_41;
ATerm term_v_41;
ATerm term_p_41;
ATerm term_k_41;
ATerm term_a_41;
ATerm term_x_40;
ATerm term_g_40;
ATerm term_v_39;
ATerm term_s_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_h_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_v_38;
ATerm term_s_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_j_38;
ATerm term_g_38;
ATerm term_z_37;
ATerm term_m_37;
ATerm term_k_37;
ATerm term_y_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_a_36;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_n_33;
ATerm term_e_33;
ATerm term_p_31;
ATerm term_e_30;
ATerm term_o_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_z_27;
ATerm term_l_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_e_22;
ATerm term_k_21;
ATerm term_j_18;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_x_12;
void init_constant_terms (void)
{
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_SOpt_2, term_g_16, term_h_16);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_lit_1, term_c_27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_lit_1, term_e_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_SOpt_2, term_l_28, term_m_28);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Arg_1, term_k_21);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_58);
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(sym__3, term_h_62, term_j_62, term_x_12);
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm layout2box_0_0 (ATerm);
ATerm has_significant_layout_0_0 (ATerm);
ATerm has_layout_0_0 (ATerm);
ATerm InsLayout_1_0 (ATerm z_130 (ATerm), ATerm);
ATerm insert_layout_0_0 (ATerm);
ATerm layout_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm collect_p__1_0 (ATerm m_130 (ATerm), ATerm);
ATerm amb_1_0 (ATerm c_95 (ATerm), ATerm);
ATerm fatal_ambiguity_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm d_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm filter_literals_0_0 (ATerm);
ATerm instantiate_list_1_0 (ATerm s_130 (ATerm), ATerm);
ATerm build_list_0_0 (ATerm);
ATerm instantiate_sep_list_1_0 (ATerm u_130 (ATerm), ATerm);
ATerm BuildSepList_4_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm);
ATerm nzip_1_0 (ATerm t_110 (ATerm), ATerm);
ATerm build_sep_list_0_0 (ATerm);
ATerm Ind2_0_0 (ATerm);
ATerm index_0_0 (ATerm);
ATerm symbol2abox_0_0 (ATerm);
ATerm seq2abox_0_0 (ATerm);
ATerm lit_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm StoreEntryIfNotExists_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm q_129 (ATerm), ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm pair_0_0 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm number_node_1_0 (ATerm u_129 (ATerm), ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm symbol2abox_1_0 (ATerm r_129 (ATerm), ATerm);
ATerm get_pp_entry_0_0 (ATerm);
ATerm prod_3_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm);
ATerm uq2q_0_0 (ATerm);
ATerm cons_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm get_constr_0_0 (ATerm);
ATerm add_attributes_0_0 (ATerm);
ATerm quote_0_0 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm strs2constr_0_0 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm sym2strs_0_0 (ATerm);
ATerm syms2strs_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm toAlphaNum_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm separate_by_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm list_ana_1_0 (ATerm f_131 (ATerm), ATerm);
ATerm lit2str_0_0 (ATerm);
ATerm mk_constr_0_0 (ATerm);
ATerm iter_star_sep_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm n_94 (ATerm), ATerm);
ATerm iter_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm alt_2_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm);
ATerm syntaxless_sort_0_0 (ATerm);
ATerm is_injection_0_0 (ATerm);
ATerm is_reject_0_0 (ATerm);
ATerm is_bracket_0_0 (ATerm);
ATerm prodcons_0_0 (ATerm);
ATerm sort_1_0 (ATerm r_94 (ATerm), ATerm);
ATerm get_templ_0_0 (ATerm);
ATerm application_to_abox_0_0 (ATerm);
ATerm opt_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm filter_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm m_102 (ATerm), ATerm);
ATerm sometd_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm o_101 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm StoreEntry_0_0 (ATerm);
ATerm selector_2_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm at_last_1_0 (ATerm f_109 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm g_117 (ATerm), ATerm);
ATerm S_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm);
ATerm Arg2_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm q_103 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm c_130 (ATerm), ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm union_1_0 (ATerm h_112 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm asfix2abox_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm t_120 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_123 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_108 (ATerm), ATerm);
ATerm _2_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_121 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_121 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm t_124 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_126 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm v_126 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm);
ATerm io_Asfix_2_abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  b_0 = t;
  t = term_x_12;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,t_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_0 = NULL;
      t = term_x_12;
      t = k_0(t);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_13, term_x_13, u_0);
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
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_14 = ATgetArgument(t, 0);
            ATerm f_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_1, g_1);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = (ATerm) ATempty;
      }
    i_1 = t;
    t = SSL_table_put(d_1, g_1, (ATerm) ATinsert(CheckATermList(i_1), h_1));
    t = (ATerm) ATmakeAppl(sym__3, d_1, g_1, h_1);
  }
  return(t);
}
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_1 = NULL;
      t = term_x_12;
      t = h_0(t);
      v_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_13, term_x_13, v_1);
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
      t = e_0(t);
      t = term_x_12;
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
    ATerm g_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL;
        t = has_significant_layout_0_0(t);
        t = z_1;
        t = concat_strings_0_0(t);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, a_2)));
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = g_14;
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
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  {
    ATerm s_14 = t;
    if((PushChoice() == 0))
      {
        ATerm l_0 (ATerm t)
        {
          if(!(match_cons(t, sym_layout_place_holder_0)))
            _fail(t);
          return(t);
        }
        t = layout_1_0(l_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_14;
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
    {
      ATerm m_0 (ATerm t)
      {
        ATerm t_14 = t;
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
            t = t_14;
          }
        return(t);
      }
      t = filter_1_0(m_0, t);
      {
        ATerm u_14 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_14;
          }
        t = d_2;
      }
    }
  }
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm v_14 = t;
  if((PushChoice() == 0))
    {
      ATerm n_0 (ATerm t)
      {
        if(!(match_cons(t, sym_layout_place_holder_0)))
          _fail(t);
        return(t);
      }
      t = layout_1_0(n_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_14;
    }
  return(t);
}
ATerm InsLayout_1_0 (ATerm z_130 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm n_2 = NULL,o_2 = NULL,r_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(o_0, _id, t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL;
          m_3 = t;
          if(match_cons(t, sym__2))
            {
              o_3 = ATgetArgument(t, 0);
              u_3 = ATgetArgument(t, 1);
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
              t = (ATerm) ATmakeAppl(sym__2, p_3, u_3);
              t = z_130(t);
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
              t = (ATerm) ATmakeAppl(sym__2, p_3, u_3);
              t = z_130(t);
              if(match_cons(t, sym__2))
                {
                  n_2 = ATgetArgument(t, 0);
                  {
                    ATerm v_15 = ATgetArgument(t, 1);
                    if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
                      {
                        o_2 = ATgetFirst((ATermList) v_15);
                        u_2 = (ATerm) ATgetNext((ATermList) v_15);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_3), r_3), u_2);
              t = v_3(t);
              if(match_cons(t, sym__2))
                {
                  ATerm b_16 = ATgetArgument(t, 0);
                  if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
                    {
                      r_2 = ATgetFirst((ATermList) b_16);
                      w_2 = (ATerm) ATgetNext((ATermList) b_16);
                    }
                  else
                    _fail(t);
                  v_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm c_16 = t;
                int d_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_1 = NULL;
                    t = term_f_16;
                    t = get_options_0_0(t);
                    {
                      ATerm s_0 (ATerm t)
                      {
                        if(!(match_cons(t, sym_Conservative_0)))
                          _fail(t);
                        return(t);
                      }
                      t = oncetd_1_0(s_0, t);
                      t = o_2;
                      t = has_layout_0_0(t);
                      t = o_2;
                      t = layout2box_0_0(t);
                      j_1 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_2), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_16), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_2))), j_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_2))))), v_2);
                    }
                    ;
                    LocalPopChoice(d_16);
                  }
                else
                  {
                    t = c_16;
                    {
                      ATerm j_16 = t;
                      int k_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_1 = NULL;
                          ATerm l_16 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm o_1 = NULL;
                              o_1 = t;
                              t = term_f_16;
                              t = get_options_0_0(t);
                              {
                                ATerm v_0 (ATerm t)
                                {
                                  if(!(match_cons(t, sym_Conservative_0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = oncetd_1_0(v_0, t);
                                t = o_1;
                              }
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = l_16;
                            }
                          t = o_2;
                          t = has_significant_layout_0_0(t);
                          t = o_2;
                          t = layout2box_0_0(t);
                          k_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(w_2), r_2), k_1), n_2), v_2);
                          ;
                          LocalPopChoice(k_16);
                        }
                      else
                        {
                          t = j_16;
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
  t = v_3(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,k_8 = NULL,o_8 = NULL,p_8 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm a_5 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_4 != NULL) && (x_4 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_4 = ATgetFirst((ATermList) t);
        {
          ATerm m_16 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm n_16 = ATgetFirst((ATermList) t);
        a_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = a_5;
    return(t);
  }
  t = _2_0(_id, w_0, t);
  {
    ATerm g_9 (ATerm t)
    {
      ATerm c_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
      ATerm o_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
          if(match_cons(t, sym__2))
            {
              x_7 = ATgetArgument(t, 0);
              a_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_7;
          if(match_cons(t, sym_H_2))
            {
              y_7 = ATgetArgument(t, 0);
              z_7 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
              t = InsLayout_1_0(g_9, t);
              if(match_cons(t, sym__2))
                {
                  f_5 = ATgetArgument(t, 0);
                  g_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, y_7, f_5), g_5);
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  y_7 = ATgetArgument(t, 0);
                  z_7 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                  t = InsLayout_1_0(g_9, t);
                  if(match_cons(t, sym__2))
                    {
                      f_5 = ATgetArgument(t, 0);
                      g_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, y_7, f_5), g_5);
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      y_7 = ATgetArgument(t, 0);
                      z_7 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                      t = InsLayout_1_0(g_9, t);
                      if(match_cons(t, sym__2))
                        {
                          f_5 = ATgetArgument(t, 0);
                          g_5 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, y_7, f_5), g_5);
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          y_7 = ATgetArgument(t, 0);
                          z_7 = ATgetArgument(t, 1);
                          t_7 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, t_7, a_8);
                          t = InsLayout_1_0(g_9, t);
                          if(match_cons(t, sym__2))
                            {
                              f_5 = ATgetArgument(t, 0);
                              g_5 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, y_7, z_7, f_5), g_5);
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              y_7 = ATgetArgument(t, 0);
                              z_7 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                              t = InsLayout_1_0(g_9, t);
                              if(match_cons(t, sym__2))
                                {
                                  f_5 = ATgetArgument(t, 0);
                                  g_5 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, y_7, f_5), g_5);
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  y_7 = ATgetArgument(t, 0);
                                  z_7 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym__2, y_7, a_8);
                                  t = InsLayout_1_0(g_9, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      c_5 = ATgetArgument(t, 0);
                                      {
                                        ATerm r_16 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                                  t = InsLayout_1_0(g_9, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      f_5 = ATgetArgument(t, 0);
                                      h_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, c_5, f_5), h_5);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      y_7 = ATgetArgument(t, 0);
                                      z_7 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                                      t = InsLayout_1_0(g_9, t);
                                      if(match_cons(t, sym__2))
                                        {
                                          f_5 = ATgetArgument(t, 0);
                                          g_5 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, y_7, f_5), g_5);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          y_7 = ATgetArgument(t, 0);
                                          z_7 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                                          t = InsLayout_1_0(g_9, t);
                                          if(match_cons(t, sym__2))
                                            {
                                              f_5 = ATgetArgument(t, 0);
                                              g_5 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, y_7, f_5), g_5);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              y_7 = ATgetArgument(t, 0);
                                              z_7 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                                              t = InsLayout_1_0(g_9, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  f_5 = ATgetArgument(t, 0);
                                                  g_5 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, y_7, f_5), g_5);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  y_7 = ATgetArgument(t, 0);
                                                  z_7 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                                              t = InsLayout_1_0(g_9, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  f_5 = ATgetArgument(t, 0);
                                                  g_5 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, y_7, f_5), g_5);
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
          LocalPopChoice(q_16);
        }
      else
        {
          t = o_16;
          {
            ATerm s_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_0 (ATerm t)
                {
                  t = Cons_2_0(_id, _id, t);
                  return(t);
                }
                t = _2_0(x_0, _id, t);
                t = InsLayout_1_0(g_9, t);
                ;
                LocalPopChoice(v_16);
              }
            else
              {
                t = s_16;
              }
          }
        }
      return(t);
    }
    t = g_9(t);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm w_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_8 = NULL;
            ATerm a_17 = t;
            int b_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_17);
              }
            else
              {
                t = a_17;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm c_17 = ATgetFirst((ATermList) t);
                    ATerm g_17 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
              }
            b_8 = t;
            t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, b_8);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = w_16;
          }
        return(t);
      }
      t = _2_0(y_0, _id, t);
      if(match_cons(t, sym__2))
        {
          y_4 = ATgetArgument(t, 0);
          {
            ATerm i_17 = ATgetArgument(t, 1);
            if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
              {
                z_4 = ATgetFirst((ATermList) i_17);
                {
                  ATerm l_17 = (ATerm) ATgetNext((ATermList) i_17);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_4), y_4), not_null(x_4));
      {
        ATerm z_0 (ATerm t)
        {
          ATerm m_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_17 = t;
              if((PushChoice() == 0))
                {
                  t = layout_1_0(_id, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_17;
                }
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = m_17;
              {
                ATerm r_17 = t;
                int s_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_8 = NULL;
                    t = layout_1_0(_id, t);
                    g_8 = t;
                    t = term_f_16;
                    t = get_options_0_0(t);
                    {
                      ATerm b_1 (ATerm t)
                      {
                        if(!(match_cons(t, sym_Conservative_0)))
                          _fail(t);
                        return(t);
                      }
                      t = oncetd_1_0(b_1, t);
                      t = g_8;
                      t = has_layout_0_0(t);
                      t = layout2box_0_0(t);
                    }
                    ;
                    LocalPopChoice(s_17);
                  }
                else
                  {
                    t = r_17;
                    t = layout_1_0(_id, t);
                    {
                      ATerm t_17 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm i_8 = NULL;
                          i_8 = t;
                          t = term_f_16;
                          t = get_options_0_0(t);
                          {
                            ATerm c_1 (ATerm t)
                            {
                              if(!(match_cons(t, sym_Conservative_0)))
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1_0(c_1, t);
                            t = i_8;
                          }
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = t_17;
                        }
                      t = has_significant_layout_0_0(t);
                      t = layout2box_0_0(t);
                    }
                  }
              }
            }
          return(t);
        }
        t = filter_1_0(z_0, t);
        t = flat_list_0_0(t);
        p_8 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_8 = ATgetFirst((ATermList) t);
            o_8 = (ATerm) ATgetNext((ATermList) t);
            t = o_8;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                ATerm v_17 = t;
                int x_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_8;
                    ;
                    LocalPopChoice(x_17);
                  }
                else
                  {
                    t = v_17;
                    t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_16), p_8);
                  }
              }
            else
              {
                t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_16), p_8);
              }
          }
        else
          {
            t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_i_16), p_8);
          }
      }
    }
  }
  return(t);
}
ATerm layout_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  j_10 = t;
  if(match_cons(t, sym_layout_1))
    {
      h_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_10);
  c_10 = t;
  t = h_10;
  t = m_86(t);
  i_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, i_10), c_10);
  return(t);
}
ATerm collect_p__1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL;
        t = m_130(t);
        v_10 = t;
        t = (ATerm) ATinsert(ATempty, v_10);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        {
          ATerm r_4 = NULL,s_4 = NULL;
          r_4 = t;
          t = SSL_explode_term(r_4);
          if(match_cons(t, sym__2))
            {
              ATerm a_18 = ATgetArgument(t, 0);
              s_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_4;
          {
            ATerm e_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm f_1 (ATerm t)
            {
              ATerm b_18 = t;
              int c_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_5 = NULL,r_5 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      p_5 = ATgetArgument(t, 0);
                      r_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_5;
                  {
                    ATerm l_1 (ATerm t)
                    {
                      t = r_5;
                      return(t);
                    }
                    t = at_end_1_0(l_1, t);
                  }
                  ;
                  LocalPopChoice(c_18);
                }
              else
                {
                  t = b_18;
                  {
                    ATerm z_5 = NULL,f_6 = NULL;
                    z_5 = t;
                    t = SSL_explode_term(z_5);
                    if(match_cons(t, sym__2))
                      {
                        ATerm f_18 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        f_6 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = f_6;
                    t = concat_0_0(t);
                  }
                }
              return(t);
            }
            t = foldr_3_0(e_1, f_1, n_11, t);
          }
        }
      }
    return(t);
  }
  t = n_11(t);
  return(t);
}
ATerm amb_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,t_11 = NULL,v_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_amb_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_11);
  o_11 = t;
  t = p_11;
  t = c_95(t);
  t_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, t_11), o_11);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  t = amb_1_0(_id, t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = (ATerm) ATinsert(ATempty, term_j_18);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm m_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = m_18;
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = Cons_2_0(m_1, flat_list_0_0, t);
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            {
              ATerm w_18 = t;
              int y_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_12 = NULL,j_12 = NULL,n_12 = NULL;
                  ATerm n_1 (ATerm t)
                  {
                    ATerm o_12 = NULL;
                    o_12 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = o_12;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm z_18 = ATgetFirst((ATermList) t);
                            ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = o_12;
                      }
                    return(t);
                  }
                  t = Cons_2_0(n_1, _id, t);
                  i_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_12 = ATgetFirst((ATermList) t);
                      {
                        ATerm b_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = i_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm c_19 = ATgetFirst((ATermList) t);
                      n_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, j_12, n_12);
                  {
                    ATerm d_19 = t;
                    int e_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm f_19 = ATgetArgument(t, 0);
                            ATerm g_19 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = j_12;
                        {
                          ATerm p_1 (ATerm t)
                          {
                            t = n_12;
                            return(t);
                          }
                          t = at_end_1_0(p_1, t);
                        }
                        ;
                        LocalPopChoice(e_19);
                      }
                    else
                      {
                        t = d_19;
                        {
                          ATerm n_6 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_12, n_12));
                          if(match_cons(t, sym__2))
                            {
                              ATerm i_19 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) i_19) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              n_6 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = n_6;
                          t = concat_0_0(t);
                        }
                      }
                    t = flat_list_0_0(t);
                  }
                  ;
                  LocalPopChoice(y_18);
                }
              else
                {
                  t = w_18;
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
  ATerm f_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      p_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
      {
        ATerm v_13 = NULL,w_13 = NULL;
        t = term_x_12;
        t = d_0(t);
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_13, v_13);
        t = index_0_0(t);
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_13, w_13);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm e_14 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          p_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_x_12;
      t = d_0(t);
      e_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_13, e_14);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = bottomup_1_0(n_102, t);
    return(t);
  }
  t = SRTS_all(q_1, t);
  t = n_102(t);
  return(t);
}
ATerm filter_literals_0_0 (ATerm t)
{
  ATerm y_14 = NULL,e_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      {
        ATerm l_19 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        ATerm m_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg_1_0(_id, t);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = m_19;
            {
              ATerm q_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Arg2_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = q_19;
                  t = S_1_0(_id, t);
                }
            }
          }
        return(t);
      }
      t = collect_p__1_0(s_1, t);
      return(t);
    }
    t = _2_0(r_1, _id, t);
    {
      ATerm o_17 (ATerm t)
      {
        ATerm i_15 = NULL,j_15 = NULL,n_15 = NULL,o_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
        ATerm v_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = _2_0(w_1, x_1, t);
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = v_19;
            {
              ATerm u_17 (ATerm p_16, ATerm t_16, ATerm u_16, ATerm t)
              {
                t = p_16;
                if(((t_15 != NULL) && (t_15 != t)))
                  _fail(t);
                else
                  t_15 = t;
                t = t_16;
                if(((j_15 != NULL) && (j_15 != t)))
                  _fail(t);
                else
                  j_15 = t;
                t = u_16;
                if(((o_15 != NULL) && (o_15 != t)))
                  _fail(t);
                else
                  o_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_16, u_16);
                t = o_17(t);
                if(match_cons(t, sym__2))
                  {
                    if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      n_15 = ATgetArgument(t, 0);
                    if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      r_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_15)), p_16), not_null(r_15));
                return(t);
              }
              ATerm x_16 = NULL,y_16 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,j_17 = NULL,k_17 = NULL,n_17 = NULL;
              if(match_cons(t, sym__2))
                {
                  d_17 = ATgetArgument(t, 0);
                  j_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_17 = ATgetFirst((ATermList) t);
                  f_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_17 = ATgetFirst((ATermList) t);
                  n_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_17;
              if(match_cons(t, sym_Arg_1))
                {
                  x_16 = ATgetArgument(t, 0);
                  {
                    ATerm c_20 = t;
                    int d_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = x_16;
                        if(((i_15 != NULL) && (i_15 != t)))
                          _fail(t);
                        else
                          i_15 = t;
                        t = f_17;
                        if(((j_15 != NULL) && (j_15 != t)))
                          _fail(t);
                        else
                          j_15 = t;
                        t = k_17;
                        if(((s_15 != NULL) && (s_15 != t)))
                          _fail(t);
                        else
                          s_15 = t;
                        t = n_17;
                        if(((o_15 != NULL) && (o_15 != t)))
                          _fail(t);
                        else
                          o_15 = t;
                        t = (ATerm) ATmakeAppl(sym__2, f_17, n_17);
                        t = o_17(t);
                        if(match_cons(t, sym__2))
                          {
                            if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              n_15 = ATgetArgument(t, 0);
                            if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              r_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_15)), (ATerm) ATmakeAppl(sym_Arg_1, x_16)), (ATerm) ATinsert(CheckATermList(not_null(r_15)), k_17));
                        ;
                        LocalPopChoice(d_20);
                      }
                    else
                      {
                        t = c_20;
                        t = u_17(e_17, f_17, n_17, t);
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      x_16 = ATgetArgument(t, 0);
                      y_16 = ATgetArgument(t, 1);
                      {
                        ATerm e_20 = t;
                        int f_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_16;
                            if(((i_15 != NULL) && (i_15 != t)))
                              _fail(t);
                            else
                              i_15 = t;
                            t = y_16;
                            if(((e_15 != NULL) && (e_15 != t)))
                              _fail(t);
                            else
                              e_15 = t;
                            t = f_17;
                            if(((j_15 != NULL) && (j_15 != t)))
                              _fail(t);
                            else
                              j_15 = t;
                            t = k_17;
                            if(((s_15 != NULL) && (s_15 != t)))
                              _fail(t);
                            else
                              s_15 = t;
                            t = n_17;
                            if(((o_15 != NULL) && (o_15 != t)))
                              _fail(t);
                            else
                              o_15 = t;
                            t = (ATerm) ATmakeAppl(sym__2, f_17, n_17);
                            t = o_17(t);
                            if(match_cons(t, sym__2))
                              {
                                if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 0))))
                                  _fail(ATgetArgument(t, 0));
                                else
                                  n_15 = ATgetArgument(t, 0);
                                if(((r_15 != NULL) && (r_15 != ATgetArgument(t, 1))))
                                  _fail(ATgetArgument(t, 1));
                                else
                                  r_15 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_15)), (ATerm) ATmakeAppl(sym_Arg2_2, x_16, y_16)), (ATerm) ATinsert(CheckATermList(not_null(r_15)), k_17));
                            ;
                            LocalPopChoice(f_20);
                          }
                        else
                          {
                            t = e_20;
                            t = u_17(e_17, f_17, n_17, t);
                          }
                      }
                    }
                  else
                    {
                      t = u_17(e_17, f_17, n_17, t);
                    }
                }
            }
          }
        return(t);
      }
      t = o_17(t);
      if(match_cons(t, sym__2))
        {
          ATerm g_20 = ATgetArgument(t, 0);
          h_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, y_14, h_15);
    }
  }
  return(t);
}
ATerm instantiate_list_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm i_18 (ATerm t)
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        {
          ATerm d_18 = NULL,e_18 = NULL,g_18 = NULL;
          d_18 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_18 = ATgetFirst((ATermList) t);
              g_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_18;
          {
            ATerm c_2 (ATerm t)
            {
              ATerm h_18 = NULL;
              t = term_x_12;
              t = s_130(t);
              h_18 = t;
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm m_20 = t;
                  int n_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_20 = t;
                      int p_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_2 (ATerm t)
                          {
                            t = (ATerm) ATinsert(ATempty, e_18);
                            return(t);
                          }
                          t = Instantiate_1_0(j_2, t);
                          ;
                          LocalPopChoice(p_20);
                        }
                      else
                        {
                          t = o_20;
                          t = flat_list_0_0(t);
                        }
                      ;
                      LocalPopChoice(n_20);
                    }
                  else
                    {
                      t = m_20;
                    }
                  return(t);
                }
                t = bottomup_1_0(i_2, t);
              }
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              t = g_18;
              t = i_18(t);
              return(t);
            }
            t = Cons_2_0(c_2, h_2, t);
          }
        }
      }
    return(t);
  }
  t = i_18(t);
  return(t);
}
ATerm build_list_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__4))
    {
      k_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
      n_18 = ATgetArgument(t, 2);
      o_18 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_18, (ATerm) ATinsert(ATempty, o_18));
  {
    ATerm q_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_20 = ATgetArgument(t, 0);
            ATerm u_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_18;
        {
          ATerm k_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, o_18);
            return(t);
          }
          t = at_end_1_0(k_2, t);
        }
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = q_20;
        {
          ATerm k_7 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_18, (ATerm) ATinsert(ATempty, o_18)));
          if(match_cons(t, sym__2))
            {
              ATerm v_20 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_20) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_7;
          t = concat_0_0(t);
        }
      }
    p_18 = t;
    t = k_18;
    {
      ATerm y_20 = t;
      int f_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            if(((q_18 != NULL) && (q_18 != t)))
              _fail(t);
            else
              q_18 = t;
            return(t);
          }
          t = iter_1_0(l_2, t);
          ;
          LocalPopChoice(f_21);
        }
      else
        {
          t = y_20;
          {
            ATerm m_2 (ATerm t)
            {
              if(((q_18 != NULL) && (q_18 != t)))
                _fail(t);
              else
                q_18 = t;
              return(t);
            }
            t = iter_star_1_0(m_2, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, k_18, p_18);
      t = get_pp_entry_0_0(t);
      r_18 = t;
      t = l_18;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm x_18 = NULL;
          x_18 = t;
          t = (ATerm) ATmakeAppl(sym__4, not_null(q_18), x_18, p_18, term_k_21);
          t = symbol2abox_0_0(t);
          return(t);
        }
        t = map_1_0(p_2, t);
        {
          ATerm q_2 (ATerm t)
          {
            t = r_18;
            return(t);
          }
          t = instantiate_list_1_0(q_2, t);
        }
      }
    }
  }
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  ATerm t_19 (ATerm t)
  {
    ATerm m_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = m_21;
        {
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(_id, s_2, t);
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = s_21;
              {
                ATerm j_19 = NULL,k_19 = NULL,n_19 = NULL,o_19 = NULL,r_19 = NULL;
                j_19 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    k_19 = ATgetFirst((ATermList) t);
                    n_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_19;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_19 = ATgetFirst((ATermList) t);
                    r_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_19;
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm s_19 = NULL;
                    t = term_x_12;
                    t = u_130(t);
                    s_19 = t;
                    {
                      ATerm y_2 (ATerm t)
                      {
                        ATerm u_21 = t;
                        int w_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_21 = t;
                            int a_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_2 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATinsert(ATempty, o_19), k_19);
                                  return(t);
                                }
                                t = Instantiate_1_0(z_2, t);
                                ;
                                LocalPopChoice(a_22);
                              }
                            else
                              {
                                t = y_21;
                                t = flat_list_0_0(t);
                              }
                            ;
                            LocalPopChoice(w_21);
                          }
                        else
                          {
                            t = u_21;
                          }
                        return(t);
                      }
                      t = bottomup_1_0(y_2, t);
                    }
                    return(t);
                  }
                  ATerm x_2 (ATerm t)
                  {
                    t = r_19;
                    t = t_19(t);
                    return(t);
                  }
                  t = Cons_2_0(t_2, x_2, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = t_19(t);
  return(t);
}
ATerm BuildSepList_4_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL,b_20 = NULL;
        t = SSL_mod(y_19, (ATerm) ATmakeInt(2));
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = term_x_12;
        t = o_100(t);
        a_20 = t;
        t = term_x_12;
        t = p_100(t);
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym__4, a_20, z_19, b_20, term_e_22);
        t = symbol2abox_0_0(t);
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_20 = NULL;
              j_20 = t;
              {
                ATerm h_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_8 = NULL;
                    d_8 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = d_8;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm i_22 = ATgetFirst((ATermList) t);
                            ATerm j_22 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = d_8;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_22;
                  }
                t = (ATerm) ATinsert(ATempty, j_20);
              }
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
            }
        }
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          ATerm k_20 = NULL,l_20 = NULL;
          t = term_x_12;
          t = n_100(t);
          k_20 = t;
          t = term_x_12;
          t = p_100(t);
          l_20 = t;
          t = (ATerm) ATmakeAppl(sym__4, k_20, z_19, l_20, term_k_21);
          t = symbol2abox_0_0(t);
          {
            ATerm k_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_20 = NULL;
                r_20 = t;
                {
                  ATerm o_22 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm n_8 = NULL;
                      n_8 = t;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = n_8;
                        }
                      else
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm p_22 = ATgetFirst((ATermList) t);
                              ATerm r_22 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = n_8;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = o_22;
                    }
                  t = (ATerm) ATinsert(ATempty, r_20);
                }
                ;
                LocalPopChoice(n_22);
              }
            else
              {
                t = k_22;
              }
          }
        }
      }
  }
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,z_20 = NULL,a_21 = NULL;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      {
        ATerm s_22 = ATgetArgument(t, 1);
        if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
          {
            x_20 = ATgetFirst((ATermList) s_22);
            z_20 = (ATerm) ATgetNext((ATermList) s_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_20, term_k_21);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_20, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = SSL_addr(w_20, (ATerm) ATmakeInt(1));
      }
    a_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_20, x_20), (ATerm) ATmakeAppl(sym__2, a_21, z_20));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm t)
{
  ATerm b_21 (ATerm t)
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_110(t);
        ;
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = i_110(t);
        t = _2_0(k_110, b_21, t);
        t = j_110(t);
      }
    return(t);
  }
  t = b_21(t);
  return(t);
}
ATerm nzip_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, c_21);
  {
    ATerm a_3 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm x_22 = ATgetArgument(t, 0);
          ATerm y_22 = ATgetArgument(t, 1);
          if(((ATgetType(y_22) != AT_LIST) || !(ATisEmpty(y_22))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      ATerm d_21 = NULL,e_21 = NULL;
      if(match_cons(t, sym__2))
        {
          d_21 = ATgetArgument(t, 0);
          e_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(e_21), d_21);
      return(t);
    }
    t = genzip_4_0(a_3, NZip2_0_0, b_3, t_110, t);
  }
  return(t);
}
ATerm build_sep_list_0_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,j_21 = NULL,l_21 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__4))
    {
      g_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
      j_21 = ATgetArgument(t, 2);
      l_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_21, (ATerm) ATinsert(ATempty, l_21));
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_23 = ATgetArgument(t, 0);
            ATerm c_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_21;
        {
          ATerm c_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, l_21);
            return(t);
          }
          t = at_end_1_0(c_3, t);
        }
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        {
          ATerm y_8 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_21, (ATerm) ATinsert(ATempty, l_21)));
          if(match_cons(t, sym__2))
            {
              ATerm d_23 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_23) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              y_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_8;
          t = concat_0_0(t);
        }
      }
    n_21 = t;
    t = g_21;
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_3 (ATerm t)
          {
            if(((p_21 != NULL) && (p_21 != t)))
              _fail(t);
            else
              p_21 = t;
            return(t);
          }
          ATerm e_3 (ATerm t)
          {
            if(((q_21 != NULL) && (q_21 != t)))
              _fail(t);
            else
              q_21 = t;
            return(t);
          }
          t = iter_sep_2_0(d_3, e_3, t);
          ;
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          {
            ATerm f_3 (ATerm t)
            {
              if(((p_21 != NULL) && (p_21 != t)))
                _fail(t);
              else
                p_21 = t;
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              if(((q_21 != NULL) && (q_21 != t)))
                _fail(t);
              else
                q_21 = t;
              return(t);
            }
            t = iter_star_sep_2_0(f_3, g_3, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, g_21, n_21);
      t = get_pp_entry_0_0(t);
      r_21 = t;
      t = h_21;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(p_21);
            return(t);
          }
          ATerm j_3 (ATerm t)
          {
            t = not_null(q_21);
            return(t);
          }
          ATerm k_3 (ATerm t)
          {
            t = n_21;
            return(t);
          }
          ATerm l_3 (ATerm t)
          {
            t = l_21;
            return(t);
          }
          t = BuildSepList_4_0(i_3, j_3, k_3, l_3, t);
          return(t);
        }
        t = nzip_1_0(h_3, t);
        {
          ATerm n_3 (ATerm t)
          {
            t = r_21;
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
  ATerm v_21 = NULL,x_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
          {
            ATerm h_23 = ATgetFirst((ATermList) g_23);
            x_21 = (ATerm) ATgetNext((ATermList) g_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_21, term_e_22);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, v_21, term_k_21);
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(v_21, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = SSL_subtr(v_21, (ATerm) ATmakeInt(1));
      }
    z_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_21, x_21);
  }
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  t = repeat_1_0(Ind2_0_0, t);
  if(match_cons(t, sym__2))
    {
      ATerm k_23 = ATgetArgument(t, 0);
      if(((ATgetType(k_23) != AT_INT) || (ATgetInt((ATermInt) k_23) != 1)))
        _fail(t);
      {
        ATerm l_23 = ATgetArgument(t, 1);
        if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
          {
            b_22 = ATgetFirst((ATermList) l_23);
            {
              ATerm m_23 = (ATerm) ATgetNext((ATermList) l_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_22;
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,d_32 = NULL,f_32 = NULL,h_32 = NULL,j_32 = NULL,l_32 = NULL,n_32 = NULL,p_32 = NULL;
  f_32 = t;
  if(match_cons(t, sym__4))
    {
      h_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
      n_32 = ATgetArgument(t, 2);
      p_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = h_32;
  if(match_cons(t, sym_seq_1))
    {
      j_32 = ATgetArgument(t, 0);
      {
        ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,k_12 = NULL,l_12 = NULL;
        t = l_32;
        if(match_cons(t, sym_appl_2))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            d_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATempty, p_32));
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm q_23 = ATgetArgument(t, 0);
                  ATerm r_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_32;
              {
                ATerm t_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, p_32);
                  return(t);
                }
                t = at_end_1_0(t_3, t);
              }
              ;
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              {
                ATerm a_13 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATempty, p_32)));
                if(match_cons(t, sym__2))
                  {
                    ATerm s_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) s_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    a_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_13;
                t = concat_0_0(t);
              }
            }
          f_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, j_32), f_12);
          t = get_pp_entry_0_0(t);
          g_12 = t;
          t = j_32;
          {
            ATerm w_3 (ATerm t)
            {
              ATerm t_23 = t;
              if((PushChoice() == 0))
                {
                  t = lit_1_0(_id, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_23;
                }
              return(t);
            }
            t = filter_1_0(w_3, t);
            h_12 = t;
            t = d_32;
            {
              ATerm x_3 (ATerm t)
              {
                ATerm u_23 = t;
                if((PushChoice() == 0))
                  {
                    t = lit_1_0(_id, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_23;
                  }
                return(t);
              }
              t = filter_1_0(x_3, t);
              k_12 = t;
              t = (ATerm) ATmakeAppl(sym__4, h_12, k_12, f_12, term_k_21);
              t = seq2abox_0_0(t);
              l_12 = t;
              t = g_12;
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm v_23 = t;
                  int w_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_23 = t;
                      int b_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_3 (ATerm t)
                          {
                            t = l_12;
                            return(t);
                          }
                          t = Instantiate_1_0(z_3, t);
                          ;
                          LocalPopChoice(b_24);
                        }
                      else
                        {
                          t = x_23;
                          t = flat_list_0_0(t);
                        }
                      ;
                      LocalPopChoice(w_23);
                    }
                  else
                    {
                      t = v_23;
                    }
                  return(t);
                }
                t = bottomup_1_0(y_3, t);
              }
            }
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          j_32 = ATgetArgument(t, 0);
          x_31 = ATgetArgument(t, 1);
          {
            ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATempty, p_32));
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm e_24 = ATgetArgument(t, 0);
                      ATerm f_24 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_32;
                  {
                    ATerm a_4 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, p_32);
                      return(t);
                    }
                    t = at_end_1_0(a_4, t);
                  }
                  ;
                  LocalPopChoice(d_24);
                }
              else
                {
                  t = c_24;
                  {
                    ATerm q_22 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATempty, p_32)));
                    if(match_cons(t, sym__2))
                      {
                        ATerm g_24 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) g_24) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        q_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = q_22;
                    t = concat_0_0(t);
                  }
                }
              y_13 = t;
              t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, j_32, x_31), l_32, y_13, term_k_21);
              {
                ATerm l_22 (ATerm t)
                {
                  ATerm m_22 (ATerm h_14, ATerm i_14, ATerm j_14, ATerm k_14, ATerm l_14, ATerm m_14, ATerm n_14, ATerm o_14, ATerm p_14, ATerm q_14, ATerm t)
                  {
                    ATerm z_14 = NULL;
                    t = k_14;
                    if((h_14 != t))
                      {
                        _fail(t);
                      }
                    t = l_14;
                    if((i_14 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym__2, p_14, term_k_21);
                    {
                      ATerm h_24 = t;
                      int i_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = SSL_addi(p_14, (ATerm) ATmakeInt(1));
                          ;
                          LocalPopChoice(i_24);
                        }
                      else
                        {
                          t = h_24;
                          t = SSL_addr(p_14, (ATerm) ATmakeInt(1));
                        }
                      z_14 = t;
                      t = (ATerm) ATmakeAppl(sym__4, i_14, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, j_14), i_14, m_14), n_14), o_14, z_14);
                      t = l_22(t);
                    }
                    return(t);
                  }
                  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,p_15 = NULL,q_15 = NULL,u_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,e_16 = NULL;
                  p_15 = t;
                  if(match_cons(t, sym__4))
                    {
                      q_15 = ATgetArgument(t, 0);
                      u_15 = ATgetArgument(t, 1);
                      a_16 = ATgetArgument(t, 2);
                      e_16 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_15;
                  if(match_cons(t, sym_appl_2))
                    {
                      w_15 = ATgetArgument(t, 0);
                      x_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_15;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_15 = ATgetFirst((ATermList) t);
                      z_15 = (ATerm) ATgetNext((ATermList) t);
                      t = z_15;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = w_15;
                          if(match_cons(t, sym_prod_3))
                            {
                              c_15 = ATgetArgument(t, 0);
                              g_15 = ATgetArgument(t, 1);
                              m_15 = ATgetArgument(t, 2);
                              t = g_15;
                              if(match_cons(t, sym_alt_2))
                                {
                                  k_15 = ATgetArgument(t, 0);
                                  l_15 = ATgetArgument(t, 1);
                                  t = c_15;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      d_15 = ATgetFirst((ATermList) t);
                                      f_15 = (ATerm) ATgetNext((ATermList) t);
                                      t = f_15;
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = q_15;
                                          if(match_cons(t, sym_alt_2))
                                            {
                                              a_15 = ATgetArgument(t, 0);
                                              b_15 = ATgetArgument(t, 1);
                                              {
                                                ATerm j_24 = t;
                                                int k_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = d_15;
                                                    if((a_15 != t))
                                                      {
                                                        _fail(t);
                                                      }
                                                    t = k_15;
                                                    if((a_15 != t))
                                                      {
                                                        _fail(t);
                                                      }
                                                    t = l_15;
                                                    if((b_15 != t))
                                                      {
                                                        _fail(t);
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym__4, a_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, a_15), a_15, m_15), x_15), a_16, e_16);
                                                    t = l_22(t);
                                                    ;
                                                    LocalPopChoice(k_24);
                                                  }
                                                else
                                                  {
                                                    t = j_24;
                                                    {
                                                      ATerm l_24 = t;
                                                      int m_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = m_22(a_15, b_15, d_15, k_15, l_15, m_15, x_15, a_16, e_16, p_15, t);
                                                          ;
                                                          LocalPopChoice(m_24);
                                                        }
                                                      else
                                                        {
                                                          t = l_24;
                                                          {
                                                            ATerm h_17 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, j_32, x_31), a_16);
                                                            t = get_pp_entry_0_0(t);
                                                            if(((z_13 != NULL) && (z_13 != t)))
                                                              _fail(t);
                                                            else
                                                              z_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym__4, q_15, y_15, a_16, term_k_21);
                                                            t = symbol2abox_0_0(t);
                                                            if(((a_14 != NULL) && (a_14 != t)))
                                                              _fail(t);
                                                            else
                                                              a_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym__2, e_16, not_null(z_13));
                                                            t = index_0_0(t);
                                                            h_17 = t;
                                                            t = (ATerm) ATinsert(ATempty, h_17);
                                                            {
                                                              ATerm b_4 (ATerm t)
                                                              {
                                                                ATerm n_24 = t;
                                                                int o_24 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm p_24 = t;
                                                                    int q_24 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm c_4 (ATerm t)
                                                                        {
                                                                          t = (ATerm) ATinsert(ATempty, not_null(a_14));
                                                                          return(t);
                                                                        }
                                                                        t = Instantiate_1_0(c_4, t);
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
                                                              t = bottomup_1_0(b_4, t);
                                                            }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              ATerm w_17 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, j_32, x_31), a_16);
                                              t = get_pp_entry_0_0(t);
                                              if(((z_13 != NULL) && (z_13 != t)))
                                                _fail(t);
                                              else
                                                z_13 = t;
                                              t = (ATerm) ATmakeAppl(sym__4, q_15, y_15, a_16, term_k_21);
                                              t = symbol2abox_0_0(t);
                                              if(((a_14 != NULL) && (a_14 != t)))
                                                _fail(t);
                                              else
                                                a_14 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, e_16, not_null(z_13));
                                              t = index_0_0(t);
                                              w_17 = t;
                                              t = (ATerm) ATinsert(ATempty, w_17);
                                              {
                                                ATerm d_4 (ATerm t)
                                                {
                                                  ATerm r_24 = t;
                                                  int s_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_24 = t;
                                                      int u_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_4 (ATerm t)
                                                          {
                                                            t = (ATerm) ATinsert(ATempty, not_null(a_14));
                                                            return(t);
                                                          }
                                                          t = Instantiate_1_0(e_4, t);
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
                                                t = bottomup_1_0(d_4, t);
                                              }
                                            }
                                        }
                                      else
                                        {
                                          ATerm v_18 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, j_32, x_31), a_16);
                                          t = get_pp_entry_0_0(t);
                                          if(((z_13 != NULL) && (z_13 != t)))
                                            _fail(t);
                                          else
                                            z_13 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, q_15, y_15, a_16, term_k_21);
                                          t = symbol2abox_0_0(t);
                                          if(((a_14 != NULL) && (a_14 != t)))
                                            _fail(t);
                                          else
                                            a_14 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, e_16, not_null(z_13));
                                          t = index_0_0(t);
                                          v_18 = t;
                                          t = (ATerm) ATinsert(ATempty, v_18);
                                          {
                                            ATerm f_4 (ATerm t)
                                            {
                                              ATerm v_24 = t;
                                              int w_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm x_24 = t;
                                                  int y_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_4 (ATerm t)
                                                      {
                                                        t = (ATerm) ATinsert(ATempty, not_null(a_14));
                                                        return(t);
                                                      }
                                                      t = Instantiate_1_0(g_4, t);
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
                                            t = bottomup_1_0(f_4, t);
                                          }
                                        }
                                    }
                                  else
                                    {
                                      ATerm h_19 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, j_32, x_31), a_16);
                                      t = get_pp_entry_0_0(t);
                                      if(((z_13 != NULL) && (z_13 != t)))
                                        _fail(t);
                                      else
                                        z_13 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, q_15, y_15, a_16, term_k_21);
                                      t = symbol2abox_0_0(t);
                                      if(((a_14 != NULL) && (a_14 != t)))
                                        _fail(t);
                                      else
                                        a_14 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, e_16, not_null(z_13));
                                      t = index_0_0(t);
                                      h_19 = t;
                                      t = (ATerm) ATinsert(ATempty, h_19);
                                      {
                                        ATerm h_4 (ATerm t)
                                        {
                                          ATerm z_24 = t;
                                          int a_25 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm b_25 = t;
                                              int c_25 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_4 (ATerm t)
                                                  {
                                                    t = (ATerm) ATinsert(ATempty, not_null(a_14));
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(i_4, t);
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
                                        t = bottomup_1_0(h_4, t);
                                      }
                                    }
                                }
                              else
                                {
                                  ATerm w_19 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, j_32, x_31), a_16);
                                  t = get_pp_entry_0_0(t);
                                  if(((z_13 != NULL) && (z_13 != t)))
                                    _fail(t);
                                  else
                                    z_13 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, q_15, y_15, a_16, term_k_21);
                                  t = symbol2abox_0_0(t);
                                  if(((a_14 != NULL) && (a_14 != t)))
                                    _fail(t);
                                  else
                                    a_14 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, e_16, not_null(z_13));
                                  t = index_0_0(t);
                                  w_19 = t;
                                  t = (ATerm) ATinsert(ATempty, w_19);
                                  {
                                    ATerm j_4 (ATerm t)
                                    {
                                      ATerm d_25 = t;
                                      int e_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_25 = t;
                                          int g_25 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm k_4 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, not_null(a_14));
                                                return(t);
                                              }
                                              t = Instantiate_1_0(k_4, t);
                                              ;
                                              LocalPopChoice(g_25);
                                            }
                                          else
                                            {
                                              t = f_25;
                                              t = flat_list_0_0(t);
                                            }
                                          ;
                                          LocalPopChoice(e_25);
                                        }
                                      else
                                        {
                                          t = d_25;
                                        }
                                      return(t);
                                    }
                                    t = bottomup_1_0(j_4, t);
                                  }
                                }
                            }
                          else
                            {
                              ATerm i_21 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, j_32, x_31), a_16);
                              t = get_pp_entry_0_0(t);
                              if(((z_13 != NULL) && (z_13 != t)))
                                _fail(t);
                              else
                                z_13 = t;
                              t = (ATerm) ATmakeAppl(sym__4, q_15, y_15, a_16, term_k_21);
                              t = symbol2abox_0_0(t);
                              if(((a_14 != NULL) && (a_14 != t)))
                                _fail(t);
                              else
                                a_14 = t;
                              t = (ATerm) ATmakeAppl(sym__2, e_16, not_null(z_13));
                              t = index_0_0(t);
                              i_21 = t;
                              t = (ATerm) ATinsert(ATempty, i_21);
                              {
                                ATerm l_4 (ATerm t)
                                {
                                  ATerm h_25 = t;
                                  int i_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm j_25 = t;
                                      int k_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_4 (ATerm t)
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(a_14));
                                            return(t);
                                          }
                                          t = Instantiate_1_0(m_4, t);
                                          ;
                                          LocalPopChoice(k_25);
                                        }
                                      else
                                        {
                                          t = j_25;
                                          t = flat_list_0_0(t);
                                        }
                                      ;
                                      LocalPopChoice(i_25);
                                    }
                                  else
                                    {
                                      t = h_25;
                                    }
                                  return(t);
                                }
                                t = bottomup_1_0(l_4, t);
                              }
                            }
                        }
                      else
                        {
                          t = w_15;
                          if(match_cons(t, sym_prod_3))
                            {
                              c_15 = ATgetArgument(t, 0);
                              g_15 = ATgetArgument(t, 1);
                              m_15 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = q_15;
                          if(match_cons(t, sym_alt_2))
                            {
                              a_15 = ATgetArgument(t, 0);
                              b_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = c_15;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              d_15 = ATgetFirst((ATermList) t);
                              f_15 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = f_15;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = g_15;
                          if(match_cons(t, sym_alt_2))
                            {
                              k_15 = ATgetArgument(t, 0);
                              l_15 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          {
                            ATerm l_25 = t;
                            int m_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = d_15;
                                if((a_15 != t))
                                  {
                                    _fail(t);
                                  }
                                t = k_15;
                                if((a_15 != t))
                                  {
                                    _fail(t);
                                  }
                                t = l_15;
                                if((b_15 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym__4, a_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, a_15), a_15, m_15), x_15), a_16, e_16);
                                t = l_22(t);
                                ;
                                LocalPopChoice(m_25);
                              }
                            else
                              {
                                t = l_25;
                                t = m_22(a_15, b_15, d_15, k_15, l_15, m_15, x_15, a_16, e_16, p_15, t);
                              }
                          }
                        }
                    }
                  else
                    {
                      t = w_15;
                      if(match_cons(t, sym_prod_3))
                        {
                          c_15 = ATgetArgument(t, 0);
                          g_15 = ATgetArgument(t, 1);
                          m_15 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = q_15;
                      if(match_cons(t, sym_alt_2))
                        {
                          a_15 = ATgetArgument(t, 0);
                          b_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_15;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          d_15 = ATgetFirst((ATermList) t);
                          f_15 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = f_15;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = g_15;
                      if(match_cons(t, sym_alt_2))
                        {
                          k_15 = ATgetArgument(t, 0);
                          l_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm n_25 = t;
                        int o_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = d_15;
                            if((a_15 != t))
                              {
                                _fail(t);
                              }
                            t = k_15;
                            if((a_15 != t))
                              {
                                _fail(t);
                              }
                            t = l_15;
                            if((b_15 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, a_15, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, a_15), a_15, m_15), x_15), a_16, e_16);
                            t = l_22(t);
                            ;
                            LocalPopChoice(o_25);
                          }
                        else
                          {
                            t = n_25;
                            t = m_22(a_15, b_15, d_15, k_15, l_15, m_15, x_15, a_16, e_16, p_15, t);
                          }
                      }
                    }
                  return(t);
                }
                t = l_22(t);
              }
            }
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              j_32 = ATgetArgument(t, 0);
              x_31 = ATgetArgument(t, 1);
              t = f_32;
              t = build_sep_list_0_0(t);
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  j_32 = ATgetArgument(t, 0);
                  x_31 = ATgetArgument(t, 1);
                  t = f_32;
                  t = build_sep_list_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      j_32 = ATgetArgument(t, 0);
                      t = f_32;
                      t = build_list_0_0(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          j_32 = ATgetArgument(t, 0);
                          t = f_32;
                          t = build_list_0_0(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              j_32 = ATgetArgument(t, 0);
                              t = l_32;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm p_25 = ATgetArgument(t, 0);
                                  d_32 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = d_32;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  y_31 = ATgetFirst((ATermList) t);
                                  z_31 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,j_27 = NULL,k_27 = NULL;
                                    t = z_31;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATempty, p_32));
                                    {
                                      ATerm q_25 = t;
                                      int r_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym__2))
                                            {
                                              ATerm s_25 = ATgetArgument(t, 0);
                                              ATerm t_25 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = n_32;
                                          {
                                            ATerm n_4 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, p_32);
                                              return(t);
                                            }
                                            t = at_end_1_0(n_4, t);
                                          }
                                          ;
                                          LocalPopChoice(r_25);
                                        }
                                      else
                                        {
                                          t = q_25;
                                          {
                                            ATerm y_26 = NULL;
                                            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_32, (ATerm) ATinsert(ATempty, p_32)));
                                            if(match_cons(t, sym__2))
                                              {
                                                ATerm u_25 = ATgetArgument(t, 0);
                                                if((ATgetSymbol((ATermAppl) u_25) != ATmakeSymbol("", 0, ATtrue)))
                                                  _fail(t);
                                                y_26 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = y_26;
                                            t = concat_0_0(t);
                                          }
                                        }
                                      y_23 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, j_32), y_23);
                                      t = get_pp_entry_0_0(t);
                                      z_23 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, j_32, y_31, y_23, term_k_21);
                                      t = symbol2abox_0_0(t);
                                      a_24 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, z_23, (ATerm) ATinsert(ATempty, a_24));
                                      t = filter_literals_0_0(t);
                                      if(match_cons(t, sym__2))
                                        {
                                          j_27 = ATgetArgument(t, 0);
                                          k_27 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = j_27;
                                      {
                                        ATerm o_4 (ATerm t)
                                        {
                                          ATerm v_25 = t;
                                          int w_25 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm x_25 = t;
                                              int y_25 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_4 (ATerm t)
                                                  {
                                                    t = k_27;
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(p_4, t);
                                                  ;
                                                  LocalPopChoice(y_25);
                                                }
                                              else
                                                {
                                                  t = x_25;
                                                  t = flat_list_0_0(t);
                                                }
                                              ;
                                              LocalPopChoice(w_25);
                                            }
                                          else
                                            {
                                              t = v_25;
                                            }
                                          return(t);
                                        }
                                        t = bottomup_1_0(o_4, t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                }
                            }
                          else
                            {
                              ATerm z_25 = t;
                              int a_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm b_26 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(a_26);
                                  {
                                    ATerm c_26 = t;
                                    int d_26 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = l_32;
                                        {
                                          ATerm e_26 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm u_27 = NULL;
                                              u_27 = t;
                                              t = SSL_is_string(u_27);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = e_26;
                                            }
                                          t = l_32;
                                          {
                                            ATerm f_26 = t;
                                            int g_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = application_to_abox_0_0(t);
                                                ;
                                                LocalPopChoice(g_26);
                                              }
                                            else
                                              {
                                                t = f_26;
                                                t = fatal_ambiguity_0_0(t);
                                              }
                                          }
                                        }
                                        ;
                                        LocalPopChoice(d_26);
                                      }
                                    else
                                      {
                                        t = c_26;
                                        t = SSL_is_string(l_32);
                                        t = (ATerm) ATmakeAppl(sym_S_1, l_32);
                                      }
                                  }
                                }
                              else
                                {
                                  t = z_25;
                                  {
                                    ATerm h_26 = t;
                                    int i_26 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm j_26 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(i_26);
                                        {
                                          ATerm n_28 = NULL;
                                          t = SSL_implode_string((ATerm) ATinsert(ATempty, l_32));
                                          n_28 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, n_28);
                                        }
                                      }
                                    else
                                      {
                                        t = h_26;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            j_32 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, j_32);
                                      }
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
  ATerm w_39 (ATerm f_35, ATerm t_35, ATerm u_35, ATerm v_35, ATerm w_35, ATerm x_35, ATerm z_35, ATerm t)
  {
    ATerm h_36 = NULL,i_36 = NULL,l_36 = NULL;
    t = (ATerm) ATmakeAppl(sym__4, f_35, u_35, w_35, x_35);
    t = symbol2abox_0_0(t);
    h_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_35, term_k_21);
    {
      ATerm k_26 = t;
      int l_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(x_35, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(l_26);
        }
      else
        {
          t = k_26;
          t = SSL_addr(x_35, (ATerm) ATmakeInt(1));
        }
      l_36 = t;
      t = (ATerm) ATmakeAppl(sym__4, t_35, v_35, w_35, l_36);
      t = seq2abox_0_0(t);
      i_36 = t;
      t = (ATerm) ATinsert(CheckATermList(i_36), h_36);
    }
    return(t);
  }
  ATerm o_36 = NULL,p_36 = NULL,u_36 = NULL,x_36 = NULL,c_37 = NULL,h_37 = NULL,n_37 = NULL,o_37 = NULL,q_37 = NULL;
  o_36 = t;
  if(match_cons(t, sym__4))
    {
      p_36 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
      o_37 = ATgetArgument(t, 2);
      q_37 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_36;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_37;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_36 = ATgetFirst((ATermList) t);
          x_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          n_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_37;
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm o_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(n_26);
            t = u_36;
            {
              ATerm p_26 = t;
              int q_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm r_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_26);
                  {
                    ATerm s_26 = t;
                    int t_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, x_36, n_37, o_37, q_37);
                        t = seq2abox_0_0(t);
                        ;
                        LocalPopChoice(t_26);
                      }
                    else
                      {
                        t = s_26;
                        t = w_39(u_36, x_36, h_37, n_37, o_37, q_37, o_36, t);
                      }
                  }
                }
              else
                {
                  t = p_26;
                  t = w_39(u_36, x_36, h_37, n_37, o_37, q_37, o_36, t);
                }
            }
          }
        else
          {
            t = m_26;
            t = u_36;
            t = w_39(u_36, x_36, h_37, n_37, o_37, q_37, o_36, t);
          }
      }
    }
  return(t);
}
ATerm lit_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
  d_40 = t;
  if(match_cons(t, sym_lit_1))
    {
      b_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_40);
  z_39 = t;
  t = b_40;
  t = h_94(t);
  c_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, c_40), z_39);
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), i_40);
  if(match_cons(t, sym__2))
    {
      j_40 = ATgetArgument(t, 0);
      k_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_40;
  t = path_to_string_0_0(t);
  {
    ATerm q_4 (ATerm t)
    {
      ATerm p_28 = NULL;
      p_28 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_28), (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue))));
      t = p_28;
      return(t);
    }
    t = if_verbose1_1_0(q_4, t);
    t = (ATerm) ATmakeAppl(sym__2, j_40, k_40);
  }
  return(t);
}
ATerm StoreEntryIfNotExists_0_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      m_40 = ATgetArgument(t, 0);
      l_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_40 = NULL;
        t = m_40;
        t = mk_key_0_0(t);
        n_40 = t;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), n_40);
        t = (ATerm) ATmakeAppl(sym_PP_Entry_2, m_40, l_40);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = StoreEntry_0_0(t);
      }
  }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm q_129 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  t = number_nonterminals_0_0(t);
  o_40 = t;
  t = make_0_0(t);
  p_40 = t;
  t = o_40;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        ATerm s_40 = NULL;
        t = term_x_12;
        t = q_129(t);
        s_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_40, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(u_4, t);
      return(t);
    }
    t = map_1_0(t_4, t);
    t = concat_0_0(t);
    q_40 = t;
    t = term_x_12;
    t = q_129(t);
    r_40 = t;
    t = (ATerm) ATinsert(CheckATermList(q_40), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, r_40), p_40));
  }
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm u_40 = NULL;
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
      ATerm z_26 = t;
      int a_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              b_41 = ATgetArgument(t, 0);
              {
                ATerm b_27 = ATgetArgument(t, 1);
              }
              d_41 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(a_27);
          t = d_41;
          {
            ATerm v_4 (ATerm t)
            {
              if(match_cons(t, sym_cons_1))
                {
                  if(((u_40 != NULL) && (u_40 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_40 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(v_4, t);
            t = b_41;
            {
              ATerm w_4 (ATerm t)
              {
                t = not_null(u_40);
                return(t);
              }
              t = symbols2pp_entries_1_0(w_4, t);
            }
          }
        }
      else
        {
          t = z_26;
          {
            ATerm f_41 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                b_41 = ATgetArgument(t, 0);
                c_41 = ATgetArgument(t, 1);
                d_41 = ATgetArgument(t, 2);
                e_41 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_27)), c_41), (ATerm) ATinsert(ATinsert(ATempty, term_d_27), (ATerm) ATmakeAppl(sym_lit_1, b_41)));
            t = concat_0_0(t);
            f_41 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, f_41, d_41, e_41);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_28 = NULL;
            ATerm i_27 = t;
            if((PushChoice() == 0))
              {
                ATerm g_41 = NULL;
                g_41 = t;
                t = term_l_27;
                t = get_options_0_0(t);
                {
                  ATerm b_5 (ATerm t)
                  {
                    if(!(match_cons(t, sym_Silent_0)))
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1_0(b_5, t);
                  t = g_41;
                }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_27;
              }
            w_28 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_28), (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue))));
            t = w_28;
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,z_45 = NULL,a_46 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      z_45 = ATgetArgument(t, 0);
      a_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_46;
  if(match_cons(t, sym_alt_2))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_46 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, w_45, x_45);
            t = flat_alt_0_0(t);
            e_46 = t;
            t = (ATerm) ATinsert(CheckATermList(e_46), z_45);
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = (ATerm) ATinsert(ATinsert(ATempty, a_46), z_45);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, a_46), z_45);
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm n_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,x_41 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_41 = ATgetFirst((ATermList) t);
            r_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_41;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_41 = ATgetFirst((ATermList) t);
            t_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_41;
        t = pair_0_0(t);
        x_41 = t;
        t = (ATerm) ATinsert(CheckATermList(x_41), (ATerm) ATmakeAppl(sym__2, n_41, s_41));
      }
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_42 = NULL;
      ATerm d_5 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, d_5, t);
      {
        ATerm e_5 (ATerm t)
        {
          ATerm o_42 = NULL;
          ATerm j_5 (ATerm t)
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1_0(_id, t);
                ;
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
                      t = iter_star_1_0(_id, t);
                      ;
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
                            t = iter_sep_2_0(_id, _id, t);
                            ;
                            LocalPopChoice(y_27);
                          }
                        else
                          {
                            t = x_27;
                            t = iter_star_sep_2_0(_id, _id, t);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2_0(_id, j_5, t);
          if(match_cons(t, sym_lit_1))
            {
              o_42 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_27, (ATerm) ATmakeAppl(sym_S_1, o_42));
            }
          else
            {
              if(match_cons(t, sym__2))
                {
                  o_42 = ATgetArgument(t, 0);
                  {
                    ATerm a_28 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Arg_1, o_42);
            }
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          ATerm k_5 (ATerm t)
          {
            ATerm t_42 = NULL;
            t = lit_1_0(_id, t);
            if(match_cons(t, sym_lit_1))
              {
                t_42 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_27, (ATerm) ATmakeAppl(sym_S_1, t_42));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    t_42 = ATgetArgument(t, 0);
                    {
                      ATerm b_28 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, t_42);
              }
            return(t);
          }
          t = map_1_0(k_5, t);
          return(t);
        }
        t = Cons_2_0(e_5, i_5, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_42 = ATgetFirst((ATermList) t);
            h_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_28 = t;
          if((PushChoice() == 0))
            {
              ATerm l_5 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(_id, l_5, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_28;
            }
          t = h_42;
          {
            ATerm m_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2_0(_id, m_5, t);
            m_42 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_42), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, m_42)));
          }
        }
      }
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2_0(_id, n_5, t);
            {
              ATerm o_5 (ATerm t)
              {
                ATerm z_42 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    z_42 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_27, (ATerm) ATmakeAppl(sym_S_1, z_42));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        z_42 = ATgetArgument(t, 0);
                        {
                          ATerm f_28 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, z_42);
                  }
                if(((l_42 != NULL) && (l_42 != t)))
                  _fail(t);
                else
                  l_42 = t;
                return(t);
              }
              ATerm q_5 (ATerm t)
              {
                ATerm g_28 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_28;
                  }
                {
                  ATerm s_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2_0(_id, s_5, t);
                  if(((j_42 != NULL) && (j_42 != t)))
                    _fail(t);
                  else
                    j_42 = t;
                }
                return(t);
              }
              t = Cons_2_0(o_5, q_5, t);
              t = not_null(j_42);
              t = pair_0_0(t);
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm e_43 = NULL,f_43 = NULL;
                  ATerm u_5 (ATerm t)
                  {
                    ATerm i_43 = NULL;
                    t = lit_1_0(_id, t);
                    if(match_cons(t, sym_lit_1))
                      {
                        i_43 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_27, (ATerm) ATmakeAppl(sym_S_1, i_43));
                      }
                    else
                      {
                        if(match_cons(t, sym__2))
                          {
                            i_43 = ATgetArgument(t, 0);
                            {
                              ATerm h_28 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Arg_1, i_43);
                      }
                    if(((e_43 != NULL) && (e_43 != t)))
                      _fail(t);
                    else
                      e_43 = t;
                    return(t);
                  }
                  ATerm v_5 (ATerm t)
                  {
                    ATerm o_43 = NULL;
                    ATerm w_5 (ATerm t)
                    {
                      ATerm i_28 = t;
                      int j_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = iter_1_0(_id, t);
                          ;
                          LocalPopChoice(j_28);
                        }
                      else
                        {
                          t = i_28;
                          t = iter_star_1_0(_id, t);
                        }
                      return(t);
                    }
                    t = _2_0(_id, w_5, t);
                    if(match_cons(t, sym_lit_1))
                      {
                        o_43 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_27, (ATerm) ATmakeAppl(sym_S_1, o_43));
                      }
                    else
                      {
                        if(match_cons(t, sym__2))
                          {
                            o_43 = ATgetArgument(t, 0);
                            {
                              ATerm k_28 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Arg_1, o_43);
                      }
                    if(((f_43 != NULL) && (f_43 != t)))
                      _fail(t);
                    else
                      f_43 = t;
                    return(t);
                  }
                  t = _2_0(u_5, v_5, t);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_o_28), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_43)), not_null(e_43)));
                  return(t);
                }
                t = map_1_0(t_5, t);
                k_42 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_42)), k_42));
              }
            }
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            {
              ATerm x_5 (ATerm t)
              {
                ATerm t_43 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    t_43 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_z_27, (ATerm) ATmakeAppl(sym_S_1, t_43));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        t_43 = ATgetArgument(t, 0);
                        {
                          ATerm q_28 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, t_43);
                  }
                return(t);
              }
              t = map_1_0(x_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm r_28 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_28;
    }
  return(t);
}
ATerm number_node_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, c_29);
  {
    ATerm z_44 (ATerm t)
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_5 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = _2_0(_id, y_5, t);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          {
            ATerm s_44 = NULL,t_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL;
            s_44 = t;
            if(match_cons(t, sym__2))
              {
                t_44 = ATgetArgument(t, 0);
                v_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_44;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_44 = ATgetFirst((ATermList) t);
                x_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm u_28 = t;
              int v_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_31 = NULL,w_31 = NULL;
                  t = w_44;
                  t = u_129(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_44, term_k_21);
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_addi(t_44, (ATerm) ATmakeInt(1));
                        ;
                        LocalPopChoice(y_28);
                      }
                    else
                      {
                        t = x_28;
                        t = SSL_addr(t_44, (ATerm) ATmakeInt(1));
                      }
                    u_31 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_31, x_44);
                    t = z_44(t);
                    w_31 = t;
                    t = (ATerm) ATinsert(CheckATermList(w_31), (ATerm) ATmakeAppl(sym__2, t_44, w_44));
                  }
                  ;
                  LocalPopChoice(v_28);
                }
              else
                {
                  t = u_28;
                  {
                    ATerm y_44 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, t_44, x_44);
                    t = z_44(t);
                    y_44 = t;
                    t = (ATerm) ATinsert(CheckATermList(y_44), w_44);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = z_44(t);
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_45 = NULL;
        if(match_cons(t, sym_label_2))
          {
            ATerm b_29 = ATgetArgument(t, 0);
            h_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_45;
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
      }
    return(t);
  }
  t = map_1_0(a_6, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_45 = NULL;
        s_45 = t;
        {
          ATerm f_29 = t;
          if((PushChoice() == 0))
            {
              ATerm e_32 = NULL;
              e_32 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_32;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm g_29 = ATgetFirst((ATermList) t);
                      ATerm h_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_32;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_29;
            }
          t = (ATerm) ATinsert(ATempty, s_45);
        }
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
      }
    return(t);
  }
  t = map_1_0(b_6, t);
  t = concat_0_0(t);
  return(t);
}
ATerm symbol2abox_1_0 (ATerm r_129 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_32 = NULL,m_32 = NULL;
  k_32 = t;
  t = term_x_12;
  t = r_129(t);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_32, k_32);
  {
    ATerm w_49 (ATerm t)
    {
      ATerm y_49 (ATerm e_48, ATerm f_48, ATerm g_48, ATerm h_48, ATerm i_48, ATerm t)
      {
        ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,y_48 = NULL,z_48 = NULL;
        t = SSL_explode_term(h_48);
        if(match_cons(t, sym__2))
          {
            r_48 = ATgetArgument(t, 0);
            s_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_48, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, g_48, r_48)));
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm k_29 = ATgetArgument(t, 0);
                  ATerm l_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_48;
              {
                ATerm c_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, g_48, r_48));
                  return(t);
                }
                t = at_end_1_0(c_6, t);
              }
              ;
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              {
                ATerm w_33 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_48, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, g_48, r_48))));
                if(match_cons(t, sym__2))
                  {
                    ATerm m_29 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_29) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    w_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_33;
                t = concat_0_0(t);
              }
            }
          t_48 = t;
          t = s_48;
          t = argument_list_0_0(t);
          t = number_nonterminals_0_0(t);
          u_48 = t;
          t = make_0_0(t);
          y_48 = t;
          t = u_48;
          {
            ATerm d_6 (ATerm t)
            {
              ATerm e_49 = NULL;
              e_49 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_48, t_48), e_49);
              t = w_49(t);
              return(t);
            }
            t = map_1_0(d_6, t);
            t = concat_0_0(t);
            z_48 = t;
            t = (ATerm) ATinsert(CheckATermList(z_48), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, e_48, t_48), y_48));
          }
        }
        return(t);
      }
      ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,k_49 = NULL,l_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
      k_49 = t;
      if(match_cons(t, sym__2))
        {
          l_49 = ATgetArgument(t, 0);
          p_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_49;
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm p_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(o_29);
            t = (ATerm) ATempty;
          }
        else
          {
            t = n_29;
            if(match_cons(t, sym__2))
              {
                q_49 = ATgetArgument(t, 0);
                r_49 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_49;
            {
              ATerm q_29 = t;
              int r_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_sort_1))
                    {
                      ATerm s_29 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_29);
                  t = l_49;
                  if(match_cons(t, sym__2))
                    {
                      n_49 = ATgetArgument(t, 0);
                      o_49 = ATgetArgument(t, 1);
                      {
                        ATerm t_29 = t;
                        int u_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(u_29);
                          }
                        else
                          {
                            t = t_29;
                            t = y_49(n_49, o_49, q_49, r_49, k_49, t);
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
                  t = q_29;
                  {
                    ATerm v_29 = t;
                    int w_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_char_class_1))
                          {
                            ATerm x_29 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_29);
                        t = l_49;
                        if(match_cons(t, sym__2))
                          {
                            n_49 = ATgetArgument(t, 0);
                            o_49 = ATgetArgument(t, 1);
                            {
                              ATerm y_29 = t;
                              int z_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATempty;
                                  ;
                                  LocalPopChoice(z_29);
                                }
                              else
                                {
                                  t = y_29;
                                  t = y_49(n_49, o_49, q_49, r_49, k_49, t);
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
                        t = v_29;
                        if(match_cons(t, sym_alt_2))
                          {
                            i_49 = ATgetArgument(t, 0);
                            f_49 = ATgetArgument(t, 1);
                            t = l_49;
                            if(match_cons(t, sym__2))
                              {
                                n_49 = ATgetArgument(t, 0);
                                o_49 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = f_49;
                            if(match_cons(t, sym_alt_2))
                              {
                                g_49 = ATgetArgument(t, 0);
                                h_49 = ATgetArgument(t, 1);
                                {
                                  ATerm a_30 = t;
                                  int b_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_34 = NULL,i_34 = NULL;
                                      t = n_49;
                                      if(((h_47 != NULL) && (h_47 != t)))
                                        _fail(t);
                                      else
                                        h_47 = t;
                                      t = o_49;
                                      if(((i_47 != NULL) && (i_47 != t)))
                                        _fail(t);
                                      else
                                        i_47 = t;
                                      t = q_49;
                                      if(((j_47 != NULL) && (j_47 != t)))
                                        _fail(t);
                                      else
                                        j_47 = t;
                                      t = (ATerm) ATmakeAppl(sym_alt_2, i_49, (ATerm) ATmakeAppl(sym_alt_2, g_49, h_49));
                                      t = flat_alt_0_0(t);
                                      h_34 = t;
                                      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), h_34);
                                      i_34 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_49, o_49), (ATerm) ATmakeAppl(sym__2, q_49, i_34));
                                      t = w_49(t);
                                      {
                                        ATerm e_6 (ATerm t)
                                        {
                                          ATerm g_6 (ATerm t)
                                          {
                                            ATerm c_30 = t;
                                            int d_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Arg_1_0(_id, t);
                                                t = term_e_30;
                                                ;
                                                LocalPopChoice(d_30);
                                              }
                                            else
                                              {
                                                t = c_30;
                                              }
                                            return(t);
                                          }
                                          t = topdown_1_0(g_6, t);
                                          return(t);
                                        }
                                        t = Cons_2_0(e_6, _id, t);
                                      }
                                      ;
                                      LocalPopChoice(b_30);
                                    }
                                  else
                                    {
                                      t = a_30;
                                      t = y_49(n_49, o_49, q_49, r_49, k_49, t);
                                    }
                                }
                              }
                            else
                              {
                                t = y_49(n_49, o_49, q_49, r_49, k_49, t);
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_bracket_symbol_1))
                              {
                                i_49 = ATgetArgument(t, 0);
                                t = l_49;
                                if(match_cons(t, sym__2))
                                  {
                                    n_49 = ATgetArgument(t, 0);
                                    o_49 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm f_30 = t;
                                  int g_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_49, o_49), (ATerm) ATmakeAppl(sym__2, q_49, i_49));
                                      t = w_49(t);
                                      ;
                                      LocalPopChoice(g_30);
                                    }
                                  else
                                    {
                                      t = f_30;
                                      t = y_49(n_49, o_49, q_49, r_49, k_49, t);
                                    }
                                }
                              }
                            else
                              {
                                t = l_49;
                                if(match_cons(t, sym__2))
                                  {
                                    n_49 = ATgetArgument(t, 0);
                                    o_49 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = y_49(n_49, o_49, q_49, r_49, k_49, t);
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
    t = w_49(t);
  }
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm l_51 (ATerm g_50, ATerm h_50, ATerm i_50, ATerm t)
  {
    ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
    t = i_50;
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_34 = NULL,m_34 = NULL;
          t = h_50;
          t = pp_table_get_0_0(t);
          l_34 = t;
          t = SSL_explode_term(l_34);
          if(match_cons(t, sym__2))
            {
              ATerm j_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm k_30 = ATgetArgument(t, 1);
                if(((ATgetType(k_30) == AT_LIST) && !(ATisEmpty(k_30))))
                  {
                    ATerm l_30 = ATgetFirst((ATermList) k_30);
                    ATerm m_30 = (ATerm) ATgetNext((ATermList) k_30);
                    if(((ATgetType(m_30) == AT_LIST) && !(ATisEmpty(m_30))))
                      {
                        m_34 = ATgetFirst((ATermList) m_30);
                        {
                          ATerm n_30 = (ATerm) ATgetNext((ATermList) m_30);
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
          t = m_34;
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          {
            ATerm p_34 = NULL,q_34 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,s_50 = NULL,t_34 = NULL,u_34 = NULL;
            t = h_50;
            {
              ATerm h_6 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2_0(_id, h_6, t);
              {
                ATerm i_6 (ATerm t)
                {
                  if(((m_50 != NULL) && (m_50 != t)))
                    _fail(t);
                  else
                    m_50 = t;
                  return(t);
                }
                ATerm j_6 (ATerm t)
                {
                  ATerm k_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2_0(_id, k_6, t);
                  if(((l_50 != NULL) && (l_50 != t)))
                    _fail(t);
                  else
                    l_50 = t;
                  return(t);
                }
                t = Cons_2_0(i_6, j_6, t);
                t = not_null(l_50);
                t = pp_table_get_0_0(t);
                p_34 = t;
                t = SSL_explode_term(p_34);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_30 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_30) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm p_30 = ATgetArgument(t, 1);
                      if(((ATgetType(p_30) == AT_LIST) && !(ATisEmpty(p_30))))
                        {
                          q_34 = ATgetFirst((ATermList) p_30);
                          {
                            ATerm q_30 = (ATerm) ATgetNext((ATermList) p_30);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = q_34;
                if(match_cons(t, sym_Path_2))
                  {
                    s_50 = ATgetArgument(t, 0);
                    o_50 = ATgetArgument(t, 1);
                    t = o_50;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        p_50 = ATgetFirst((ATermList) t);
                        q_50 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = q_50;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, s_50, (ATerm) ATinsert(ATempty, p_50));
                  }
                else
                  {
                    if(match_cons(t, sym_Path1_1))
                      {
                        s_50 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, s_50, (ATerm) ATempty);
                  }
                n_50 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_50), g_50);
                {
                  ATerm l_6 (ATerm t)
                  {
                    t = n_50;
                    return(t);
                  }
                  t = symbol2abox_1_0(l_6, t);
                  t = map_1_0(StoreEntryIfNotExists_0_0, t);
                  t = h_50;
                  t = pp_table_get_0_0(t);
                  t_34 = t;
                  t = SSL_explode_term(t_34);
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
                                u_34 = ATgetFirst((ATermList) u_30);
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
                  t = u_34;
                }
              }
            }
          }
        }
    }
    return(t);
  }
  ATerm m_51 (ATerm w_50, ATerm x_50, ATerm y_50, ATerm z_50, ATerm a_51, ATerm t)
  {
    t = a_51;
    {
      ATerm w_30 = t;
      int x_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_34 = NULL,y_34 = NULL;
          t = z_50;
          t = pp_table_get_0_0(t);
          x_34 = t;
          t = SSL_explode_term(x_34);
          if(match_cons(t, sym__2))
            {
              ATerm y_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm z_30 = ATgetArgument(t, 1);
                if(((ATgetType(z_30) == AT_LIST) && !(ATisEmpty(z_30))))
                  {
                    ATerm a_31 = ATgetFirst((ATermList) z_30);
                    ATerm b_31 = (ATerm) ATgetNext((ATermList) z_30);
                    if(((ATgetType(b_31) == AT_LIST) && !(ATisEmpty(b_31))))
                      {
                        y_34 = ATgetFirst((ATermList) b_31);
                        {
                          ATerm c_31 = (ATerm) ATgetNext((ATermList) b_31);
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
          t = y_34;
          ;
          LocalPopChoice(x_30);
        }
      else
        {
          t = w_30;
          {
            ATerm b_35 = NULL,c_35 = NULL;
            t = (ATerm) ATmakeAppl(sym_prod_3, w_50, x_50, y_50);
            t = generate_pp_entries_0_0(t);
            t = map_1_0(StoreEntryIfNotExists_0_0, t);
            t = z_50;
            t = pp_table_get_0_0(t);
            b_35 = t;
            t = SSL_explode_term(b_35);
            if(match_cons(t, sym__2))
              {
                ATerm d_31 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm e_31 = ATgetArgument(t, 1);
                  if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
                    {
                      ATerm f_31 = ATgetFirst((ATermList) e_31);
                      ATerm g_31 = (ATerm) ATgetNext((ATermList) e_31);
                      if(((ATgetType(g_31) == AT_LIST) && !(ATisEmpty(g_31))))
                        {
                          c_35 = ATgetFirst((ATermList) g_31);
                          {
                            ATerm h_31 = (ATerm) ATgetNext((ATermList) g_31);
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
            t = c_35;
          }
        }
    }
    return(t);
  }
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
  f_51 = t;
  if(match_cons(t, sym__2))
    {
      g_51 = ATgetArgument(t, 0);
      k_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_51;
  if(match_cons(t, sym_prod_3))
    {
      h_51 = ATgetArgument(t, 0);
      i_51 = ATgetArgument(t, 1);
      j_51 = ATgetArgument(t, 2);
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_51(g_51, k_51, f_51, t);
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            t = m_51(h_51, i_51, j_51, k_51, f_51, t);
          }
      }
    }
  else
    {
      t = l_51(g_51, k_51, f_51, t);
    }
  return(t);
}
ATerm prod_3_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
  u_51 = t;
  if(match_cons(t, sym_prod_3))
    {
      o_51 = ATgetArgument(t, 0);
      p_51 = ATgetArgument(t, 1);
      q_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_51);
  n_51 = t;
  t = o_51;
  t = x_94(t);
  r_51 = t;
  t = p_51;
  t = y_94(t);
  s_51 = t;
  t = q_51;
  t = z_94(t);
  t_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, r_51, s_51, t_51), n_51);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  y_51 = t;
  t = SSL_explode_string(y_51);
  x_51 = t;
  {
    ATerm k_31 = t;
    if((PushChoice() == 0))
      {
        ATerm a_52 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_52 = ATgetFirst((ATermList) t);
            {
              ATerm l_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = a_52;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_31;
      }
    t = x_51;
    {
      ATerm m_31 = t;
      if((PushChoice() == 0))
        {
          ATerm m_6 (ATerm t)
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_31 = ATgetFirst((ATermList) t);
                if(((ATgetType(n_31) != AT_INT) || (ATgetInt((ATermInt) n_31) != 34)))
                  _fail(t);
                {
                  ATerm o_31 = (ATerm) ATgetNext((ATermList) t);
                  if(((ATgetType(o_31) != AT_LIST) || !(ATisEmpty(o_31))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = at_last_1_0(m_6, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_31;
        }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_31)), x_51), (ATerm) ATinsert(ATempty, term_p_31));
      t = concat_0_0(t);
      z_51 = t;
      t = SSL_implode_string(z_51);
    }
  }
  return(t);
}
ATerm cons_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
  e_52 = t;
  if(match_cons(t, sym_cons_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_52);
  b_52 = t;
  t = c_52;
  t = v_94(t);
  d_52 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, d_52), b_52);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm i_52 = NULL,m_52 = NULL;
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm s_31 = ATgetArgument(t, 0);
          ATerm t_31 = ATgetArgument(t, 1);
          ATerm v_31 = ATgetArgument(t, 2);
          i_52 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(r_31);
      {
        ATerm o_52 = NULL;
        t = i_52;
        {
          ATerm o_6 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((o_52 != NULL) && (o_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(o_6, t);
          t = not_null(o_52);
        }
      }
    }
  else
    {
      t = q_31;
      {
        ATerm q_52 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm a_32 = ATgetArgument(t, 0);
            ATerm b_32 = ATgetArgument(t, 1);
            m_52 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_52;
        {
          ATerm p_6 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((q_52 != NULL) && (q_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(p_6, t);
          t = not_null(q_52);
        }
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,o_54 = NULL,p_54 = NULL,r_54 = NULL,s_54 = NULL;
  k_54 = t;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_54;
  if(match_cons(t, sym_prod_fun_4))
    {
      o_54 = ATgetArgument(t, 0);
      p_54 = ATgetArgument(t, 1);
      r_54 = ATgetArgument(t, 2);
      i_54 = ATgetArgument(t, 3);
      t = i_54;
      if(match_cons(t, sym_attrs_1))
        {
          h_54 = ATgetArgument(t, 0);
          {
            ATerm q_36 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, h_54, s_54);
            {
              ATerm c_32 = t;
              int g_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm i_32 = ATgetArgument(t, 0);
                      ATerm o_32 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_54;
                  {
                    ATerm q_6 (ATerm t)
                    {
                      t = s_54;
                      return(t);
                    }
                    t = at_end_1_0(q_6, t);
                  }
                  ;
                  LocalPopChoice(g_32);
                }
              else
                {
                  t = c_32;
                  {
                    ATerm z_36 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_54, s_54));
                    if(match_cons(t, sym__2))
                      {
                        ATerm q_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        z_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = z_36;
                    t = concat_0_0(t);
                  }
                }
              q_36 = t;
              t = (ATerm) ATmakeAppl(sym_prod_fun_4, o_54, p_54, r_54, (ATerm) ATmakeAppl(sym_attrs_1, q_36));
            }
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, o_54, p_54, r_54, (ATerm) ATmakeAppl(sym_attrs_1, s_54));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          o_54 = ATgetArgument(t, 0);
          p_54 = ATgetArgument(t, 1);
          r_54 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_54;
      if(match_cons(t, sym_attrs_1))
        {
          j_54 = ATgetArgument(t, 0);
          {
            ATerm l_37 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, j_54, s_54);
            {
              ATerm r_32 = t;
              int s_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm t_32 = ATgetArgument(t, 0);
                      ATerm u_32 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_54;
                  {
                    ATerm r_6 (ATerm t)
                    {
                      t = s_54;
                      return(t);
                    }
                    t = at_end_1_0(r_6, t);
                  }
                  ;
                  LocalPopChoice(s_32);
                }
              else
                {
                  t = r_32;
                  {
                    ATerm x_37 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_54, s_54));
                    if(match_cons(t, sym__2))
                      {
                        ATerm v_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) v_32) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        x_37 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = x_37;
                    t = concat_0_0(t);
                  }
                }
              l_37 = t;
              t = (ATerm) ATmakeAppl(sym_prod_3, o_54, p_54, (ATerm) ATmakeAppl(sym_attrs_1, l_37));
            }
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, o_54, p_54, (ATerm) ATmakeAppl(sym_attrs_1, s_54));
        }
    }
  return(t);
}
ATerm quote_0_0 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,m_63 = NULL;
  i_63 = t;
  t = SSL_explode_string(i_63);
  m_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_31)), m_63), (ATerm) ATinsert(ATempty, term_p_31));
  t = concat_0_0(t);
  j_63 = t;
  t = SSL_implode_string(j_63);
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL;
  o_63 = t;
  t = SSL_explode_string(o_63);
  n_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_63 = ATgetFirst((ATermList) t);
      {
        ATerm w_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_63;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = n_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_32 = ATgetFirst((ATermList) t);
      q_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_63;
  {
    ATerm s_6 (ATerm t)
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
      t = (ATerm) ATempty;
      return(t);
    }
    t = at_last_1_0(s_6, t);
    r_63 = t;
    t = SSL_implode_string(r_63);
  }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
      e_55 = t;
      if(match_int(t, 34))
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_p_31), term_e_33);
              ;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = (ATerm) ATinsert(ATempty, e_55);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm f_33 = t;
              int g_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_33), term_e_33);
                  ;
                  LocalPopChoice(g_33);
                }
              else
                {
                  t = f_33;
                  t = (ATerm) ATinsert(ATempty, e_55);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_55 = ATgetFirst((ATermList) t);
                  g_55 = (ATerm) ATgetNext((ATermList) t);
                  t = f_55;
                  if(match_int(t, 34))
                    {
                      ATerm h_33 = t;
                      int i_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, e_55);
                          ;
                          LocalPopChoice(i_33);
                        }
                      else
                        {
                          t = h_33;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_55), term_p_31), term_e_33);
                        }
                    }
                  else
                    {
                      if(match_int(t, 92))
                        {
                          ATerm j_33 = t;
                          int k_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, e_55);
                              ;
                              LocalPopChoice(k_33);
                            }
                          else
                            {
                              t = j_33;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(g_55), term_e_33), term_e_33);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm l_33 = t;
                              int m_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, e_55);
                                  ;
                                  LocalPopChoice(m_33);
                                }
                              else
                                {
                                  t = l_33;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(g_55), term_n_33), term_e_33);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, e_55);
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, e_55);
                }
            }
        }
      {
        ATerm t_6 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, t_6, t);
      }
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_56 = NULL,b_38 = NULL;
      l_56 = t;
      t = SSL_explode_string(l_56);
      {
        ATerm u_6 (ATerm t)
        {
          ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
          c_38 = t;
          if(match_int(t, 34))
            {
              ATerm s_33 = t;
              int t_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_31), term_e_33);
                  ;
                  LocalPopChoice(t_33);
                }
              else
                {
                  t = s_33;
                  t = (ATerm) ATinsert(ATempty, c_38);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  ATerm u_33 = t;
                  int v_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATinsert(ATempty, term_e_33), term_e_33);
                      ;
                      LocalPopChoice(v_33);
                    }
                  else
                    {
                      t = u_33;
                      t = (ATerm) ATinsert(ATempty, c_38);
                    }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_38 = ATgetFirst((ATermList) t);
                      e_38 = (ATerm) ATgetNext((ATermList) t);
                      t = d_38;
                      if(match_int(t, 34))
                        {
                          ATerm x_33 = t;
                          int y_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, c_38);
                              ;
                              LocalPopChoice(y_33);
                            }
                          else
                            {
                              t = x_33;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(e_38), term_p_31), term_e_33);
                            }
                        }
                      else
                        {
                          if(match_int(t, 92))
                            {
                              ATerm z_33 = t;
                              int a_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, c_38);
                                  ;
                                  LocalPopChoice(a_34);
                                }
                              else
                                {
                                  t = z_33;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(e_38), term_e_33), term_e_33);
                                }
                            }
                          else
                            {
                              if(match_int(t, 10))
                                {
                                  ATerm b_34 = t;
                                  int c_34 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATinsert(ATempty, c_38);
                                      ;
                                      LocalPopChoice(c_34);
                                    }
                                  else
                                    {
                                      t = b_34;
                                      t = (ATerm) ATinsert(ATinsert(CheckATermList(e_38), term_n_33), term_e_33);
                                    }
                                }
                              else
                                {
                                  t = (ATerm) ATinsert(ATempty, c_38);
                                }
                            }
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, c_38);
                    }
                }
            }
          return(t);
        }
        t = map_1_0(u_6, t);
        t = concat_0_0(t);
        b_38 = t;
        t = SSL_implode_string(b_38);
      }
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      {
        ATerm w_38 = NULL,x_38 = NULL;
        w_38 = t;
        t = SSL_explode_string(w_38);
        t = escape_chars_0_0(t);
        x_38 = t;
        t = SSL_implode_string(x_38);
      }
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm p_56 = NULL;
  ATerm v_6 (ATerm t)
  {
    ATerm d_34 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_34;
      }
    return(t);
  }
  t = filter_1_0(v_6, t);
  {
    ATerm w_6 (ATerm t)
    {
      ATerm q_56 = NULL,e_39 = NULL;
      q_56 = t;
      t = SSL_explode_string(q_56);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_39 = ATgetFirst((ATermList) t);
          {
            ATerm e_34 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = e_39;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, e_39, term_j_34);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_k_34, e_39);
            t = leq_0_0(t);
            ;
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            t = (ATerm) ATmakeAppl(sym__2, e_39, term_n_34);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_o_34, e_39);
            t = leq_0_0(t);
          }
        t = q_56;
      }
      return(t);
    }
    t = Cons_2_0(w_6, _id, t);
    {
      ATerm x_6 (ATerm t)
      {
        t = term_r_34;
        return(t);
      }
      t = separate_by_1_0(x_6, t);
      t = concat_strings_0_0(t);
      p_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_56, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_35), term_k_35), term_j_35), term_i_35), term_h_35), term_g_35), term_e_35), term_d_35), term_a_35), term_z_34), term_w_34), term_v_34), term_s_34));
      {
        ATerm m_35 = t;
        if((PushChoice() == 0))
          {
            ATerm u_56 = NULL,v_56 = NULL;
            if(match_cons(t, sym__2))
              {
                u_56 = ATgetArgument(t, 0);
                v_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_56;
            {
              ATerm y_6 (ATerm t)
              {
                if((u_56 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = oncetd_1_0(y_6, t);
              t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_35;
          }
        t = p_56;
        t = escape_0_0(t);
        t = quote_0_0(t);
      }
    }
  }
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  k_57 = t;
  if(match_cons(t, sym_cf_1))
    {
      i_57 = ATgetArgument(t, 0);
      t = i_57;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          i_57 = ATgetArgument(t, 0);
          t = i_57;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_n_35);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  i_57 = ATgetArgument(t, 0);
                  j_57 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(j_57), i_57);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      i_57 = ATgetArgument(t, 0);
                      t = i_57;
                      t = Sym2Strs_0_0(t);
                      {
                        ATerm z_6 (ATerm t)
                        {
                          t = (ATerm) ATinsert(ATempty, term_o_35);
                          return(t);
                        }
                        t = at_end_1_0(z_6, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          i_57 = ATgetArgument(t, 0);
                          t = i_57;
                          t = Sym2Strs_0_0(t);
                          {
                            ATerm a_7 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_p_35);
                              return(t);
                            }
                            t = at_end_1_0(a_7, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              i_57 = ATgetArgument(t, 0);
                              t = i_57;
                              t = Sym2Strs_0_0(t);
                              {
                                ATerm b_7 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_q_35);
                                  return(t);
                                }
                                t = at_end_1_0(b_7, t);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  i_57 = ATgetArgument(t, 0);
                                  j_57 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_57 = NULL,w_57 = NULL;
                                    t = i_57;
                                    t = Sym2Strs_0_0(t);
                                    u_57 = t;
                                    t = j_57;
                                    t = Sym2Strs_0_0(t);
                                    w_57 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_35)), w_57), u_57);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      i_57 = ATgetArgument(t, 0);
                                      j_57 = ATgetArgument(t, 1);
                                      {
                                        ATerm z_57 = NULL,a_58 = NULL;
                                        t = i_57;
                                        t = Sym2Strs_0_0(t);
                                        z_57 = t;
                                        t = j_57;
                                        t = Sym2Strs_0_0(t);
                                        a_58 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_35)), a_58), z_57);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm r_35 = t;
                                      int s_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              i_57 = ATgetArgument(t, 0);
                                              {
                                                ATerm y_35 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(s_35);
                                          {
                                            ATerm c_58 = NULL;
                                            t = i_57;
                                            t = Sym2Strs_0_0(t);
                                            c_58 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_36)), c_58);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = r_35;
                                          {
                                            ATerm b_36 = t;
                                            int c_36 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    i_57 = ATgetArgument(t, 0);
                                                    j_57 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_36 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(c_36);
                                                {
                                                  ATerm g_58 = NULL,h_58 = NULL;
                                                  t = i_57;
                                                  t = Sym2Strs_0_0(t);
                                                  g_58 = t;
                                                  t = j_57;
                                                  t = Sym2Strs_0_0(t);
                                                  h_58 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_36)), h_58), g_58);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = b_36;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    i_57 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm j_58 = NULL;
                                                      t = i_57;
                                                      t = Sym2Strs_0_0(t);
                                                      j_58 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, j_58), (ATerm) ATinsert(ATempty, term_e_36));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        i_57 = ATgetArgument(t, 0);
                                                        j_57 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_58 = NULL,n_58 = NULL;
                                                          t = i_57;
                                                          t = Sym2Strs_0_0(t);
                                                          m_58 = t;
                                                          t = j_57;
                                                          t = Sym2Strs_0_0(t);
                                                          n_58 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_58), (ATerm) ATinsert(ATempty, term_f_36)), m_58);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            i_57 = ATgetArgument(t, 0);
                                                            j_57 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm q_58 = NULL,r_58 = NULL;
                                                              t = i_57;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              q_58 = t;
                                                              t = j_57;
                                                              t = Sym2Strs_0_0(t);
                                                              r_58 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_58), (ATerm) ATinsert(ATempty, term_g_36)), q_58);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                i_57 = ATgetArgument(t, 0);
                                                                j_57 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm u_58 = NULL,v_58 = NULL;
                                                                  t = i_57;
                                                                  t = Sym2Strs_0_0(t);
                                                                  u_58 = t;
                                                                  t = j_57;
                                                                  t = Sym2Strs_0_0(t);
                                                                  v_58 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_58), (ATerm) ATinsert(ATempty, term_j_36)), u_58);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    i_57 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm x_58 = NULL;
                                                                      t = i_57;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      x_58 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(x_58), term_k_36);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        i_57 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, i_57);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            i_57 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm k_39 = NULL;
                                                                              t = i_57;
                                                                              {
                                                                                ATerm m_36 = t;
                                                                                int n_36 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(n_36);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_36;
                                                                                  }
                                                                                k_39 = t;
                                                                                t = (ATerm) ATinsert(ATempty, k_39);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm r_36 = t;
                                                                            int s_36 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    i_57 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm t_36 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(s_36);
                                                                                {
                                                                                  ATerm p_39 = NULL;
                                                                                  t = i_57;
                                                                                  {
                                                                                    ATerm v_36 = t;
                                                                                    int w_36 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(w_36);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_36;
                                                                                      }
                                                                                    p_39 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, p_39);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = r_36;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_y_36);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  {
    ATerm c_7 (ATerm t)
    {
      ATerm a_37 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = toAlphaNum_0_0(t);
          ;
          LocalPopChoice(b_37);
        }
      else
        {
          t = a_37;
        }
      return(t);
    }
    t = map_1_0(c_7, t);
  }
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
  ATerm d_37 = t;
  if((PushChoice() == 0))
    {
      ATerm c_59 = NULL,d_59 = NULL;
      if(match_cons(t, sym__2))
        {
          c_59 = ATgetArgument(t, 0);
          d_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(c_59, d_59);
            ;
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            t = SSL_gtr(c_59, d_59);
          }
        t = (ATerm) ATmakeAppl(sym__2, c_59, d_59);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_37;
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm t_59 (ATerm j_59, ATerm t)
  {
    t = SSL_explode_string(j_59);
    {
      ATerm g_37 = t;
      if((PushChoice() == 0))
        {
          ATerm d_7 (ATerm t)
          {
            ATerm l_59 = NULL;
            l_59 = t;
            if(match_int(t, 45))
              {
                ATerm i_37 = t;
                int j_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, l_59, term_k_37);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_m_37, l_59);
                    t = leq_0_0(t);
                    ;
                    LocalPopChoice(j_37);
                  }
                else
                  {
                    t = i_37;
                    {
                      ATerm p_37 = t;
                      int r_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, l_59, term_j_34);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, term_k_34, l_59);
                          t = leq_0_0(t);
                          ;
                          LocalPopChoice(r_37);
                        }
                      else
                        {
                          t = p_37;
                          {
                            ATerm s_37 = t;
                            int t_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__2, l_59, term_n_34);
                                t = leq_0_0(t);
                                t = (ATerm) ATmakeAppl(sym__2, term_o_34, l_59);
                                t = leq_0_0(t);
                                ;
                                LocalPopChoice(t_37);
                              }
                            else
                              {
                                t = s_37;
                                t = term_x_12;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm u_37 = t;
                int v_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, l_59, term_k_37);
                    t = leq_0_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_m_37, l_59);
                    t = leq_0_0(t);
                    ;
                    LocalPopChoice(v_37);
                  }
                else
                  {
                    t = u_37;
                    {
                      ATerm w_37 = t;
                      int y_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, l_59, term_j_34);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, term_k_34, l_59);
                          t = leq_0_0(t);
                          ;
                          LocalPopChoice(y_37);
                        }
                      else
                        {
                          t = w_37;
                          t = (ATerm) ATmakeAppl(sym__2, l_59, term_n_34);
                          t = leq_0_0(t);
                          t = (ATerm) ATmakeAppl(sym__2, term_o_34, l_59);
                          t = leq_0_0(t);
                        }
                    }
                  }
              }
            return(t);
          }
          t = map_1_0(d_7, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_37;
        }
      t = term_z_37;
    }
    return(t);
  }
  ATerm s_59 = NULL;
  s_59 = t;
  if(match_string(t, "|="))
    {
      ATerm a_38 = t;
      int f_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_59(s_59, t);
          ;
          LocalPopChoice(f_38);
        }
      else
        {
          t = a_38;
          t = term_g_38;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm h_38 = t;
          int i_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_59(s_59, t);
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
          if(match_string(t, "&="))
            {
              ATerm k_38 = t;
              int l_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_59(s_59, t);
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
              if(match_string(t, ">>="))
                {
                  ATerm n_38 = t;
                  int o_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = t_59(s_59, t);
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
                  if(match_string(t, "<<="))
                    {
                      ATerm q_38 = t;
                      int r_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_59(s_59, t);
                          ;
                          LocalPopChoice(r_38);
                        }
                      else
                        {
                          t = q_38;
                          t = term_s_38;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm t_38 = t;
                          int u_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = t_59(s_59, t);
                              ;
                              LocalPopChoice(u_38);
                            }
                          else
                            {
                              t = t_38;
                              t = term_v_38;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm y_38 = t;
                              int z_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = t_59(s_59, t);
                                  ;
                                  LocalPopChoice(z_38);
                                }
                              else
                                {
                                  t = y_38;
                                  t = term_a_39;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm b_39 = t;
                                  int c_39 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = t_59(s_59, t);
                                      ;
                                      LocalPopChoice(c_39);
                                    }
                                  else
                                    {
                                      t = b_39;
                                      t = term_d_39;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm f_39 = t;
                                      int g_39 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = t_59(s_59, t);
                                          ;
                                          LocalPopChoice(g_39);
                                        }
                                      else
                                        {
                                          t = f_39;
                                          t = term_h_39;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm i_39 = t;
                                          int j_39 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = t_59(s_59, t);
                                              ;
                                              LocalPopChoice(j_39);
                                            }
                                          else
                                            {
                                              t = i_39;
                                              t = term_l_39;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm m_39 = t;
                                              int n_39 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = t_59(s_59, t);
                                                  ;
                                                  LocalPopChoice(n_39);
                                                }
                                              else
                                                {
                                                  t = m_39;
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
                                                      t = t_59(s_59, t);
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
                                                          t = t_59(s_59, t);
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
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm x_39 = t;
                                                          int a_40 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = t_59(s_59, t);
                                                              ;
                                                              LocalPopChoice(a_40);
                                                            }
                                                          else
                                                            {
                                                              t = x_39;
                                                              t = term_j_36;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm e_40 = t;
                                                              int f_40 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = t_59(s_59, t);
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
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm h_40 = t;
                                                                  int t_40 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = t_59(s_59, t);
                                                                      ;
                                                                      LocalPopChoice(t_40);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_40;
                                                                      t = term_g_40;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm v_40 = t;
                                                                      int w_40 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = t_59(s_59, t);
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
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm y_40 = t;
                                                                          int z_40 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = t_59(s_59, t);
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
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm h_41 = t;
                                                                              int j_41 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = t_59(s_59, t);
                                                                                  ;
                                                                                  LocalPopChoice(j_41);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_41;
                                                                                  t = term_k_41;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm l_41 = t;
                                                                                  int m_41 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = t_59(s_59, t);
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
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm q_41 = t;
                                                                                      int u_41 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = t_59(s_59, t);
                                                                                          ;
                                                                                          LocalPopChoice(u_41);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_41;
                                                                                          t = term_v_41;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm w_41 = t;
                                                                                          int y_41 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = t_59(s_59, t);
                                                                                              ;
                                                                                              LocalPopChoice(y_41);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_41;
                                                                                              t = term_z_41;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm b_42 = t;
                                                                                              int c_42 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = t_59(s_59, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(c_42);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = b_42;
                                                                                                  t = term_d_42;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm e_42 = t;
                                                                                                  int f_42 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = t_59(s_59, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(f_42);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = e_42;
                                                                                                      t = term_n_42;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm p_42 = t;
                                                                                                      int q_42 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = t_59(s_59, t);
                                                                                                          ;
                                                                                                          LocalPopChoice(q_42);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = p_42;
                                                                                                          t = term_r_42;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm s_42 = t;
                                                                                                          int u_42 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = t_59(s_59, t);
                                                                                                              ;
                                                                                                              LocalPopChoice(u_42);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = s_42;
                                                                                                              t = term_v_42;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm w_42 = t;
                                                                                                              int x_42 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = t_59(s_59, t);
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
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm a_43 = t;
                                                                                                                  int b_43 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = t_59(s_59, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(b_43);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_43;
                                                                                                                      t = term_c_43;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm d_43 = t;
                                                                                                                      int g_43 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = t_59(s_59, t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(g_43);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_43;
                                                                                                                          t = term_f_36;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm h_43 = t;
                                                                                                                          int j_43 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = t_59(s_59, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(j_43);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_43;
                                                                                                                              t = term_k_43;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm l_43 = t;
                                                                                                                              int m_43 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = t_59(s_59, t);
                                                                                                                                  ;
                                                                                                                                  LocalPopChoice(m_43);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = l_43;
                                                                                                                                  t = term_n_43;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm p_43 = t;
                                                                                                                                  int q_43 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = t_59(s_59, t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(q_43);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = p_43;
                                                                                                                                      t = term_r_43;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm s_43 = t;
                                                                                                                                      int u_43 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = t_59(s_59, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(u_43);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = s_43;
                                                                                                                                          t = term_v_43;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm w_43 = t;
                                                                                                                                          int y_43 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = t_59(s_59, t);
                                                                                                                                              ;
                                                                                                                                              LocalPopChoice(y_43);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = w_43;
                                                                                                                                              t = term_z_43;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm c_44 = t;
                                                                                                                                              int e_44 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = t_59(s_59, t);
                                                                                                                                                  ;
                                                                                                                                                  LocalPopChoice(e_44);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = c_44;
                                                                                                                                                  t = term_g_44;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm h_44 = t;
                                                                                                                                                  int i_44 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = t_59(s_59, t);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(i_44);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = h_44;
                                                                                                                                                      t = term_k_44;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm l_44 = t;
                                                                                                                                                      int m_44 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = t_59(s_59, t);
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(m_44);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = l_44;
                                                                                                                                                          t = term_n_44;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm o_44 = t;
                                                                                                                                                          int p_44 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = t_59(s_59, t);
                                                                                                                                                              ;
                                                                                                                                                              LocalPopChoice(p_44);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = o_44;
                                                                                                                                                              t = term_q_44;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = t_59(s_59, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm u_59 = NULL,v_59 = NULL;
  if(match_cons(t, sym__2))
    {
      u_59 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_59;
  {
    ATerm r_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_45);
      }
    else
      {
        t = r_44;
        {
          ATerm e_7 (ATerm t)
          {
            ATerm c_45 = t;
            int e_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_45);
              }
            else
              {
                t = c_45;
                {
                  ATerm w_59 = NULL;
                  t = Cons_2_0(_id, e_7, t);
                  w_59 = t;
                  t = (ATerm) ATinsert(CheckATermList(w_59), u_59);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, e_7, t);
        }
      }
  }
  return(t);
}
ATerm separate_by_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL;
  a_60 = t;
  {
    ATerm f_7 (ATerm t)
    {
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue))));
      t = term_f_45;
      return(t);
    }
    t = if_verbose2_1_0(f_7, t);
    t = term_x_12;
    t = z_107(t);
    b_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_60, a_60);
    t = separate_by_0_0(t);
  }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  p_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_60 = ATgetFirst((ATermList) t);
      o_60 = (ATerm) ATgetNext((ATermList) t);
      t = o_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_60 = ATgetFirst((ATermList) t);
          m_60 = (ATerm) ATgetNext((ATermList) t);
          t = l_60;
          if(match_int(t, 34))
            {
              t = n_60;
              if(match_int(t, 92))
                {
                  ATerm g_45 = t;
                  int i_45 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_60 = NULL;
                      t = m_60;
                      t = De_Escape_0_0(t);
                      r_60 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_60), term_p_31);
                      ;
                      LocalPopChoice(i_45);
                    }
                  else
                    {
                      t = g_45;
                      {
                        ATerm u_60 = NULL;
                        t = o_60;
                        t = De_Escape_0_0(t);
                        u_60 = t;
                        t = (ATerm) ATinsert(CheckATermList(u_60), n_60);
                      }
                    }
                }
              else
                {
                  ATerm x_60 = NULL;
                  t = o_60;
                  t = De_Escape_0_0(t);
                  x_60 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_60), n_60);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = n_60;
                  if(match_int(t, 92))
                    {
                      ATerm l_45 = t;
                      int m_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_60 = NULL;
                          t = m_60;
                          t = De_Escape_0_0(t);
                          z_60 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_60), term_e_33);
                          ;
                          LocalPopChoice(m_45);
                        }
                      else
                        {
                          t = l_45;
                          {
                            ATerm d_61 = NULL;
                            t = o_60;
                            t = De_Escape_0_0(t);
                            d_61 = t;
                            t = (ATerm) ATinsert(CheckATermList(d_61), n_60);
                          }
                        }
                    }
                  else
                    {
                      ATerm g_61 = NULL;
                      t = o_60;
                      t = De_Escape_0_0(t);
                      g_61 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_61), n_60);
                    }
                }
              else
                {
                  ATerm j_61 = NULL;
                  t = o_60;
                  t = De_Escape_0_0(t);
                  j_61 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_61), n_60);
                }
            }
        }
      else
        {
          ATerm m_61 = NULL;
          t = o_60;
          t = De_Escape_0_0(t);
          m_61 = t;
          t = (ATerm) ATinsert(CheckATermList(m_61), n_60);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_60;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
  u_61 = t;
  t = SSL_explode_string(u_61);
  a_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_61 = ATgetFirst((ATermList) t);
      z_61 = (ATerm) ATgetNext((ATermList) t);
      t = z_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_61 = ATgetFirst((ATermList) t);
          x_61 = (ATerm) ATgetNext((ATermList) t);
          t = w_61;
          if(match_int(t, 34))
            {
              t = y_61;
              if(match_int(t, 92))
                {
                  ATerm n_45 = t;
                  int o_45 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_62 = NULL;
                      t = x_61;
                      t = De_Escape_0_0(t);
                      c_62 = t;
                      t = (ATerm) ATinsert(CheckATermList(c_62), term_p_31);
                      ;
                      LocalPopChoice(o_45);
                    }
                  else
                    {
                      t = n_45;
                      {
                        ATerm f_62 = NULL;
                        t = z_61;
                        t = De_Escape_0_0(t);
                        f_62 = t;
                        t = (ATerm) ATinsert(CheckATermList(f_62), y_61);
                      }
                    }
                }
              else
                {
                  ATerm i_62 = NULL;
                  t = z_61;
                  t = De_Escape_0_0(t);
                  i_62 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_62), y_61);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = y_61;
                  if(match_int(t, 92))
                    {
                      ATerm p_45 = t;
                      int q_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_62 = NULL;
                          t = x_61;
                          t = De_Escape_0_0(t);
                          k_62 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_62), term_e_33);
                          ;
                          LocalPopChoice(q_45);
                        }
                      else
                        {
                          t = p_45;
                          {
                            ATerm p_62 = NULL;
                            t = z_61;
                            t = De_Escape_0_0(t);
                            p_62 = t;
                            t = (ATerm) ATinsert(CheckATermList(p_62), y_61);
                          }
                        }
                    }
                  else
                    {
                      ATerm s_62 = NULL;
                      t = z_61;
                      t = De_Escape_0_0(t);
                      s_62 = t;
                      t = (ATerm) ATinsert(CheckATermList(s_62), y_61);
                    }
                }
              else
                {
                  ATerm v_62 = NULL;
                  t = z_61;
                  t = De_Escape_0_0(t);
                  v_62 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_62), y_61);
                }
            }
        }
      else
        {
          ATerm y_62 = NULL;
          t = z_61;
          t = De_Escape_0_0(t);
          y_62 = t;
          t = (ATerm) ATinsert(CheckATermList(y_62), y_61);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_62;
    }
  v_61 = t;
  t = SSL_implode_string(v_61);
  return(t);
}
ATerm list_ana_1_0 (ATerm f_131 (ATerm), ATerm t)
{
  ATerm f_63 (ATerm t)
  {
    ATerm r_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_63 = NULL;
        t = f_131(t);
        a_63 = t;
        t = (ATerm) ATinsert(ATempty, a_63);
        ;
        LocalPopChoice(t_45);
      }
    else
      {
        t = r_45;
        {
          ATerm u_45 = t;
          int y_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_63 = NULL,y_39 = NULL;
              e_63 = t;
              t = SSL_explode_term(e_63);
              if(match_cons(t, sym__2))
                {
                  ATerm b_46 = ATgetArgument(t, 0);
                  y_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_39;
              t = filter_1_0(f_63, t);
              t = concat_0_0(t);
              ;
              LocalPopChoice(y_45);
            }
          else
            {
              t = u_45;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = f_63(t);
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm h_63 = NULL;
    if(match_cons(t, sym_lit_1))
      {
        h_63 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = h_63;
    {
      ATerm c_46 = t;
      int d_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = de_quote_0_0(t);
          t = de_escape_0_0(t);
          ;
          LocalPopChoice(d_46);
        }
      else
        {
          t = c_46;
        }
    }
    return(t);
  }
  t = list_ana_1_0(g_7, t);
  {
    ATerm h_7 (ATerm t)
    {
      t = term_r_34;
      return(t);
    }
    t = separate_by_1_0(h_7, t);
    t = concat_strings_0_0(t);
    {
      ATerm f_46 = t;
      int g_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = toAlphaNum_0_0(t);
          ;
          LocalPopChoice(g_46);
        }
      else
        {
          t = f_46;
        }
    }
  }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm p_65 (ATerm g_64, ATerm h_64, ATerm i_64, ATerm t)
  {
    ATerm m_64 = NULL;
    t = i_64;
    {
      ATerm h_46 = t;
      int i_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_64;
          t = filter_1_0(lit2str_0_0, t);
          t = strs2constr_0_0(t);
          m_64 = t;
          ;
          LocalPopChoice(i_46);
        }
      else
        {
          t = h_46;
          {
            ATerm j_46 = t;
            int k_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_64 = NULL,o_64 = NULL;
                t = (ATerm) ATinsert(ATempty, h_64);
                t = syms2strs_0_0(t);
                n_64 = t;
                t = g_64;
                t = filter_1_0(lit2str_0_0, t);
                o_64 = t;
                {
                  ATerm i_7 (ATerm t)
                  {
                    ATerm l_46 = t;
                    if((PushChoice() == 0))
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = l_46;
                      }
                    return(t);
                  }
                  t = filter_1_0(i_7, t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm p_46 = ATgetFirst((ATermList) t);
                      ATerm q_46 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_64, o_64);
                  {
                    ATerm s_46 = t;
                    int t_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm u_46 = ATgetArgument(t, 0);
                            ATerm v_46 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = n_64;
                        {
                          ATerm j_7 (ATerm t)
                          {
                            t = o_64;
                            return(t);
                          }
                          t = at_end_1_0(j_7, t);
                        }
                        ;
                        LocalPopChoice(t_46);
                      }
                    else
                      {
                        t = s_46;
                        {
                          ATerm i_41 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_64, o_64));
                          if(match_cons(t, sym__2))
                            {
                              ATerm x_46 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) x_46) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              i_41 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = i_41;
                          t = concat_0_0(t);
                        }
                      }
                    t = strs2constr_0_0(t);
                    m_64 = t;
                  }
                }
                ;
                LocalPopChoice(k_46);
              }
            else
              {
                t = j_46;
                {
                  ATerm y_46 = t;
                  int z_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_64;
                      t = syms2strs_0_0(t);
                      t = strs2constr_0_0(t);
                      m_64 = t;
                      ;
                      LocalPopChoice(z_46);
                    }
                  else
                    {
                      t = y_46;
                      {
                        ATerm s_64 = NULL,y_64 = NULL;
                        t = (ATerm) ATinsert(ATempty, h_64);
                        t = syms2strs_0_0(t);
                        s_64 = t;
                        t = term_x_12;
                        t = new_0_0(t);
                        y_64 = t;
                        t = (ATerm) ATmakeAppl(sym__2, s_64, (ATerm) ATinsert(ATinsert(ATempty, y_64), term_a_47));
                        {
                          ATerm b_47 = t;
                          int c_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm d_47 = ATgetArgument(t, 0);
                                  ATerm e_47 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = s_64;
                              {
                                ATerm l_7 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATinsert(ATempty, y_64), term_a_47);
                                  return(t);
                                }
                                t = at_end_1_0(l_7, t);
                              }
                              ;
                              LocalPopChoice(c_47);
                            }
                          else
                            {
                              t = b_47;
                              {
                                ATerm o_41 = NULL;
                                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_64, (ATerm) ATinsert(ATinsert(ATempty, y_64), (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue)))));
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm f_47 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) f_47) != ATmakeSymbol("", 0, ATtrue)))
                                      _fail(t);
                                    o_41 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = o_41;
                                t = concat_0_0(t);
                              }
                            }
                          t = strs2constr_0_0(t);
                          m_64 = t;
                        }
                      }
                    }
                }
              }
          }
        }
      t = m_64;
    }
    return(t);
  }
  ATerm q_65 (ATerm c_65, ATerm d_65, ATerm t)
  {
    ATerm f_65 = NULL;
    t = (ATerm) ATinsert(ATempty, c_65);
    t = syms2strs_0_0(t);
    f_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_65, (ATerm) ATinsert(ATempty, term_g_47));
    {
      ATerm k_47 = t;
      int o_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm p_47 = ATgetArgument(t, 0);
              ATerm q_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_65;
          {
            ATerm m_7 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_g_47);
              return(t);
            }
            t = at_end_1_0(m_7, t);
          }
          ;
          LocalPopChoice(o_47);
        }
      else
        {
          t = k_47;
          {
            ATerm a_42 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_65, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue)))));
            if(match_cons(t, sym__2))
              {
                ATerm r_47 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_47) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                a_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_42;
            t = concat_0_0(t);
          }
        }
      t = strs2constr_0_0(t);
    }
    return(t);
  }
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
  k_65 = t;
  {
    ATerm s_47 = t;
    int t_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            l_65 = ATgetArgument(t, 0);
            {
              ATerm u_47 = ATgetArgument(t, 1);
            }
            {
              ATerm v_47 = ATgetArgument(t, 2);
            }
            {
              ATerm w_47 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_47);
        t = l_65;
        {
          ATerm x_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_48 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = a_48;
                }
              t = l_65;
              t = quote_0_0(t);
              ;
              LocalPopChoice(y_47);
            }
          else
            {
              t = x_47;
            }
        }
      }
    else
      {
        t = s_47;
        if(match_cons(t, sym_prod_3))
          {
            l_65 = ATgetArgument(t, 0);
            m_65 = ATgetArgument(t, 1);
            {
              ATerm b_48 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_65;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm c_48 = t;
            int d_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_65(l_65, m_65, k_65, t);
                ;
                LocalPopChoice(d_48);
              }
            else
              {
                t = c_48;
                t = q_65(m_65, k_65, t);
              }
          }
        else
          {
            t = p_65(l_65, m_65, k_65, t);
          }
      }
  }
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  w_65 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      s_65 = ATgetArgument(t, 0);
      t_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_65);
  r_65 = t;
  t = s_65;
  t = k_94(t);
  u_65 = t;
  t = t_65;
  t = l_94(t);
  v_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, u_65, v_65), r_65);
  return(t);
}
ATerm iter_sep_2_0 (ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,h_66 = NULL,i_66 = NULL;
  i_66 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      a_66 = ATgetArgument(t, 0);
      b_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_66);
  z_65 = t;
  t = a_66;
  t = i_94(t);
  c_66 = t;
  t = b_66;
  t = j_94(t);
  h_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, c_66, h_66), z_65);
  return(t);
}
ATerm iter_star_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
  o_66 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      m_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_66);
  l_66 = t;
  t = m_66;
  t = n_94(t);
  n_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, n_66), l_66);
  return(t);
}
ATerm iter_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL;
  u_66 = t;
  if(match_cons(t, sym_iter_1))
    {
      s_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_66);
  r_66 = t;
  t = s_66;
  t = m_94(t);
  t_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, t_66), r_66);
  return(t);
}
ATerm alt_2_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  c_67 = t;
  if(match_cons(t, sym_alt_2))
    {
      y_66 = ATgetArgument(t, 0);
      z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_67);
  x_66 = t;
  t = y_66;
  t = o_94(t);
  a_67 = t;
  t = z_66;
  t = p_94(t);
  b_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, a_67, b_67), x_66);
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm j_48 = t;
  int k_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
      ;
      LocalPopChoice(k_48);
    }
  else
    {
      t = j_48;
      {
        ATerm m_48 = t;
        int n_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = alt_2_0(syntaxless_sort_0_0, syntaxless_sort_0_0, t);
            ;
            LocalPopChoice(n_48);
          }
        else
          {
            t = m_48;
            {
              ATerm o_48 = t;
              int p_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = opt_1_0(syntaxless_sort_0_0, t);
                  ;
                  LocalPopChoice(p_48);
                }
              else
                {
                  t = o_48;
                  {
                    ATerm q_48 = t;
                    int v_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = iter_1_0(syntaxless_sort_0_0, t);
                        ;
                        LocalPopChoice(v_48);
                      }
                    else
                      {
                        t = q_48;
                        {
                          ATerm w_48 = t;
                          int x_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_star_1_0(syntaxless_sort_0_0, t);
                              ;
                              LocalPopChoice(x_48);
                            }
                          else
                            {
                              t = w_48;
                              {
                                ATerm a_49 = t;
                                int b_49 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = iter_sep_2_0(syntaxless_sort_0_0, _id, t);
                                    ;
                                    LocalPopChoice(b_49);
                                  }
                                else
                                  {
                                    t = a_49;
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
ATerm is_injection_0_0 (ATerm t)
{
  ATerm g_67 = NULL;
  ATerm n_7 (ATerm t)
  {
    ATerm o_7 (ATerm t)
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      return(t);
    }
    t = Cons_2_0(syntaxless_sort_0_0, o_7, t);
    return(t);
  }
  t = prod_3_0(n_7, _id, _id, t);
  g_67 = t;
  t = term_c_49;
  t = get_options_0_0(t);
  {
    ATerm p_7 (ATerm t)
    {
      if(!(match_cons(t, sym_Injections_0)))
        _fail(t);
      return(t);
    }
    t = oncetd_1_0(p_7, t);
    t = g_67;
  }
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm j_67 = NULL,n_67 = NULL;
  ATerm d_49 = t;
  int j_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm m_49 = ATgetArgument(t, 0);
          ATerm s_49 = ATgetArgument(t, 1);
          ATerm t_49 = ATgetArgument(t, 2);
          j_67 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(j_49);
      t = j_67;
      {
        ATerm q_7 (ATerm t)
        {
          if(!(match_cons(t, sym_reject_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(q_7, t);
        t = term_x_12;
      }
    }
  else
    {
      t = d_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm u_49 = ATgetArgument(t, 0);
          ATerm v_49 = ATgetArgument(t, 1);
          n_67 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_67;
      {
        ATerm r_7 (ATerm t)
        {
          if(!(match_cons(t, sym_reject_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(r_7, t);
        t = term_x_12;
      }
    }
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm r_67 = NULL,v_67 = NULL;
  ATerm x_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm a_50 = ATgetArgument(t, 0);
          ATerm b_50 = ATgetArgument(t, 1);
          ATerm c_50 = ATgetArgument(t, 2);
          r_67 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(z_49);
      t = r_67;
      {
        ATerm s_7 (ATerm t)
        {
          if(!(match_cons(t, sym_bracket_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(s_7, t);
        t = term_x_12;
      }
    }
  else
    {
      t = x_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm d_50 = ATgetArgument(t, 0);
          ATerm e_50 = ATgetArgument(t, 1);
          v_67 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_67;
      {
        ATerm u_7 (ATerm t)
        {
          if(!(match_cons(t, sym_bracket_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(u_7, t);
        t = term_x_12;
      }
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm c_68 = NULL;
  c_68 = t;
  {
    ATerm j_50 = t;
    int k_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_42 = NULL;
        t = c_68;
        {
          ATerm r_50 = t;
          if((PushChoice() == 0))
            {
              ATerm t_50 = t;
              int u_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  ;
                  LocalPopChoice(u_50);
                }
              else
                {
                  t = t_50;
                  {
                    ATerm v_50 = t;
                    int b_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        ;
                        LocalPopChoice(b_51);
                      }
                    else
                      {
                        t = v_50;
                        {
                          ATerm c_51 = t;
                          int d_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              ;
                              LocalPopChoice(d_51);
                            }
                          else
                            {
                              t = c_51;
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
              t = r_50;
            }
          t = c_68;
          t = mk_constr_0_0(t);
          g_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_68, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, g_42)));
          t = add_attributes_0_0(t);
        }
        ;
        LocalPopChoice(k_50);
      }
    else
      {
        t = j_50;
        {
          ATerm e_68 = NULL;
          t = c_68;
          t = get_constr_0_0(t);
          e_68 = t;
          t = c_68;
          {
            ATerm v_7 (ATerm t)
            {
              ATerm w_7 (ATerm t)
              {
                t = e_68;
                t = uq2q_0_0(t);
                return(t);
              }
              t = cons_1_0(w_7, t);
              return(t);
            }
            t = oncetd_1_0(v_7, t);
          }
        }
      }
  }
  return(t);
}
ATerm sort_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  j_68 = t;
  if(match_cons(t, sym_sort_1))
    {
      h_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_68);
  g_68 = t;
  t = h_68;
  t = r_94(t);
  i_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, i_68), g_68);
  return(t);
}
ATerm get_templ_0_0 (ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm e_51 = ATgetArgument(t, 0);
      if(match_cons(e_51, sym_prod_3))
        {
          m_68 = ATgetArgument(e_51, 0);
          n_68 = ATgetArgument(e_51, 1);
          o_68 = ATgetArgument(e_51, 2);
        }
      else
        _fail(t);
      {
        ATerm v_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm w_51 = t;
    int f_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_68;
        {
          ATerm c_8 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((p_68 != NULL) && (p_68 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_68 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(c_8, t);
        }
        ;
        LocalPopChoice(f_52);
      }
    else
      {
        t = w_51;
        {
          ATerm g_52 = t;
          int h_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_68;
              t = sort_1_0(_id, t);
              t = (ATerm) ATmakeAppl(sym_prod_3, m_68, n_68, o_68);
              t = prodcons_0_0(t);
              {
                ATerm e_8 (ATerm t)
                {
                  ATerm f_8 (ATerm t)
                  {
                    if(match_cons(t, sym_cons_1))
                      {
                        if(((p_68 != NULL) && (p_68 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          p_68 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1_0(f_8, t);
                  return(t);
                }
                t = prod_3_0(_id, _id, e_8, t);
              }
              ;
              LocalPopChoice(h_52);
            }
          else
            {
              t = g_52;
              t = term_j_52;
              p_68 = t;
            }
        }
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, m_68, n_68, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(p_68))))), (ATerm) ATinsert(ATempty, not_null(p_68)));
    t = get_pp_entry_0_0(t);
    q_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_68), q_68);
  }
  return(t);
}
ATerm application_to_abox_0_0 (ATerm t)
{
  ATerm r_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm k_52 = ATgetArgument(t, 0);
      if(match_cons(k_52, sym_prod_3))
        {
          r_68 = ATgetArgument(k_52, 0);
          {
            ATerm l_52 = ATgetArgument(k_52, 1);
          }
          {
            ATerm n_52 = ATgetArgument(k_52, 2);
          }
        }
      else
        _fail(t);
      z_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = get_templ_0_0(t);
  if(match_cons(t, sym__2))
    {
      a_69 = ATgetArgument(t, 0);
      b_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_68;
  {
    ATerm h_8 (ATerm t)
    {
      ATerm p_52 = t;
      if((PushChoice() == 0))
        {
          t = lit_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_52;
        }
      return(t);
    }
    t = filter_1_0(h_8, t);
    c_69 = t;
    t = z_68;
    {
      ATerm j_8 (ATerm t)
      {
        ATerm r_52 = t;
        if((PushChoice() == 0))
          {
            t = lit_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_52;
          }
        return(t);
      }
      t = filter_1_0(j_8, t);
      d_69 = t;
      t = (ATerm) ATmakeAppl(sym__4, c_69, d_69, (ATerm)ATinsert(ATempty, a_69), term_k_21);
      t = seq2abox_0_0(t);
      e_69 = t;
      t = b_69;
      {
        ATerm l_8 (ATerm t)
        {
          ATerm s_52 = t;
          int t_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_52 = t;
              int v_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_8 (ATerm t)
                  {
                    t = e_69;
                    return(t);
                  }
                  t = Instantiate_1_0(m_8, t);
                  ;
                  LocalPopChoice(v_52);
                }
              else
                {
                  t = u_52;
                  t = flat_list_0_0(t);
                }
              ;
              LocalPopChoice(t_52);
            }
          else
            {
              t = s_52;
            }
          return(t);
        }
        t = bottomup_1_0(l_8, t);
      }
    }
  }
  return(t);
}
ATerm opt_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,i_69 = NULL,m_69 = NULL;
  m_69 = t;
  if(match_cons(t, sym_opt_1))
    {
      g_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_69);
  f_69 = t;
  t = g_69;
  t = f_94(t);
  i_69 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, i_69), f_69);
  return(t);
}
ATerm filter_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm x_52 = t;
  int y_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_52);
    }
  else
    {
      t = x_52;
      {
        ATerm z_52 = t;
        int a_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 (ATerm t)
            {
              t = filter_1_0(i_115, t);
              return(t);
            }
            t = Cons_2_0(i_115, q_8, t);
            ;
            LocalPopChoice(a_53);
          }
        else
          {
            t = z_52;
            {
              ATerm s_69 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_53 = ATgetFirst((ATermList) t);
                  s_69 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_69;
              t = filter_1_0(i_115, t);
            }
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  t = m_102(t);
  {
    ATerm r_8 (ATerm t)
    {
      t = topdown_1_0(m_102, t);
      return(t);
    }
    t = SRTS_all(r_8, t);
  }
  return(t);
}
ATerm sometd_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm u_69 (ATerm t)
  {
    ATerm c_53 = t;
    int d_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_104(t);
        ;
        LocalPopChoice(d_53);
      }
    else
      {
        t = c_53;
        t = SRTS_some(u_69, t);
      }
    return(t);
  }
  t = u_69(t);
  return(t);
}
ATerm repeat_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm v_69 (ATerm t)
  {
    ATerm e_53 = t;
    int f_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_101(t);
        t = v_69(t);
        ;
        LocalPopChoice(f_53);
      }
    else
      {
        t = e_53;
      }
    return(t);
  }
  t = v_69(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm w_69 = NULL;
  ATerm s_8 (ATerm t)
  {
    ATerm x_69 = NULL;
    x_69 = t;
    t = SSL_explode_string(x_69);
    return(t);
  }
  t = map_1_0(s_8, t);
  t = concat_0_0(t);
  w_69 = t;
  t = SSL_implode_string(w_69);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      a_70 = ATgetArgument(t, 0);
      t = a_70;
    }
  else
    {
      ATerm j_70 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          a_70 = ATgetArgument(t, 0);
          b_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_70;
      {
        ATerm t_8 (ATerm t)
        {
          ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
          if(match_cons(t, sym_selector_2))
            {
              k_70 = ATgetArgument(t, 0);
              l_70 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_int_to_string(k_70);
          m_70 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_70), term_h_53), m_70), term_g_53);
          return(t);
        }
        t = map_1_0(t_8, t);
        t = concat_0_0(t);
        j_70 = t;
        t = (ATerm) ATinsert(CheckATermList(j_70), a_70);
        t = concat_strings_0_0(t);
      }
    }
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      p_70 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, p_70);
    }
  else
    {
      ATerm y_70 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          p_70 = ATgetArgument(t, 0);
          q_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_70;
      {
        ATerm u_8 (ATerm t)
        {
          ATerm z_70 = NULL;
          if(match_cons(t, sym_selector_2))
            {
              z_70 = ATgetArgument(t, 0);
              {
                ATerm i_53 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = z_70;
          return(t);
        }
        t = map_1_0(u_8, t);
        y_70 = t;
        t = (ATerm) ATinsert(CheckATermList(y_70), p_70);
      }
    }
  return(t);
}
ATerm StoreEntry_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      a_71 = ATgetArgument(t, 0);
      b_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_71;
  t = mk_key_0_0(t);
  c_71 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), c_71, (ATerm) ATmakeAppl(sym__2, a_71, b_71));
  t = a_71;
  t = path_to_string_0_0(t);
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_71, b_71);
  {
    ATerm v_8 (ATerm t)
    {
      ATerm x_43 = NULL;
      x_43 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_43), (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue))));
      t = x_43;
      return(t);
    }
    t = if_verbose1_1_0(v_8, t);
  }
  return(t);
}
ATerm selector_2_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
  j_71 = t;
  if(match_cons(t, sym_selector_2))
    {
      f_71 = ATgetArgument(t, 0);
      g_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_71);
  e_71 = t;
  t = f_71;
  t = i_92(t);
  h_71 = t;
  t = g_71;
  t = j_92(t);
  i_71 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, h_71, i_71), e_71);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_71 = ATgetFirst((ATermList) t);
          s_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_71;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = s_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_71 = ATgetFirst((ATermList) t);
          u_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_71;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(u_71), term_p_31);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(u_71), term_e_33);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(u_71), term_l_53);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(u_71), term_m_53);
                }
            }
        }
      ;
      LocalPopChoice(k_53);
    }
  else
    {
      t = j_53;
    }
  {
    ATerm n_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(o_53);
      }
    else
      {
        t = n_53;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm at_last_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm c_72 (ATerm t)
  {
    ATerm p_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, w_8, t);
        t = f_109(t);
        ;
        LocalPopChoice(r_53);
      }
    else
      {
        t = p_53;
        t = Cons_2_0(_id, c_72, t);
      }
    return(t);
  }
  t = c_72(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_72 = ATgetFirst((ATermList) t);
      h_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_72;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm t_53 = t;
      int u_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_72;
          ;
          LocalPopChoice(u_53);
        }
      else
        {
          t = t_53;
          t = h_72;
          t = last_0_0(t);
        }
    }
  else
    {
      t = h_72;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL;
  m_72 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_72 = ATgetFirst((ATermList) t);
      {
        ATerm v_53 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_72;
  t = g_117(t);
  t = m_72;
  t = last_0_0(t);
  t = g_117(t);
  t = m_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_53 = ATgetFirst((ATermList) t);
      o_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_72;
  {
    ATerm x_8 (ATerm t)
    {
      ATerm p_72 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm y_53 = ATgetFirst((ATermList) t);
          p_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_72;
      return(t);
    }
    t = at_last_1_0(x_8, t);
  }
  return(t);
}
ATerm S_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
  t_72 = t;
  if(match_cons(t, sym_S_1))
    {
      r_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_72);
  q_72 = t;
  t = r_72;
  t = n_92(t);
  s_72 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, s_72), q_72);
  return(t);
}
ATerm SOpt_2_0 (ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
  b_73 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      x_72 = ATgetArgument(t, 0);
      y_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_73);
  w_72 = t;
  t = x_72;
  t = z_93(t);
  z_72 = t;
  t = y_72;
  t = a_94(t);
  a_73 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, z_72, a_73), w_72);
  return(t);
}
ATerm Arg2_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
  j_73 = t;
  if(match_cons(t, sym_Arg2_2))
    {
      f_73 = ATgetArgument(t, 0);
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_73);
  e_73 = t;
  t = f_73;
  t = l_92(t);
  h_73 = t;
  t = g_73;
  t = m_92(t);
  i_73 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, h_73, i_73), e_73);
  return(t);
}
ATerm Arg_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL;
  p_73 = t;
  if(match_cons(t, sym_Arg_1))
    {
      n_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_73);
  m_73 = t;
  t = n_73;
  t = k_92(t);
  o_73 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, o_73), m_73);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm z_53 = t;
  int a_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_8 (ATerm t)
      {
        ATerm s_73 = NULL;
        s_73 = t;
        t = SSL_string_to_int(s_73);
        return(t);
      }
      t = Arg_1_0(z_8, t);
      ;
      LocalPopChoice(a_54);
    }
  else
    {
      t = z_53;
      {
        ATerm b_54 = t;
        int c_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 (ATerm t)
            {
              ATerm t_73 = NULL;
              t_73 = t;
              t = SSL_string_to_int(t_73);
              return(t);
            }
            ATerm b_9 (ATerm t)
            {
              ATerm u_73 = NULL;
              u_73 = t;
              t = SSL_string_to_int(u_73);
              return(t);
            }
            t = Arg2_2_0(a_9, b_9, t);
            ;
            LocalPopChoice(c_54);
          }
        else
          {
            t = b_54;
            {
              ATerm d_54 = t;
              int e_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(e_54);
                }
              else
                {
                  t = d_54;
                  {
                    ATerm f_54 = t;
                    int g_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_9 (ATerm t)
                        {
                          ATerm d_44 = NULL,f_44 = NULL,a_44 = NULL,b_44 = NULL;
                          a_44 = t;
                          t = SSL_explode_string(a_44);
                          {
                            ATerm d_9 (ATerm t)
                            {
                              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                                _fail(t);
                              return(t);
                            }
                            t = unquote_chars_1_0(d_9, t);
                            b_44 = t;
                            t = SSL_implode_string(b_44);
                            d_44 = t;
                            t = SSL_explode_string(d_44);
                            t = unescape_chars_0_0(t);
                            f_44 = t;
                            t = SSL_implode_string(f_44);
                          }
                          return(t);
                        }
                        t = S_1_0(c_9, t);
                        ;
                        LocalPopChoice(g_54);
                      }
                    else
                      {
                        t = f_54;
                        {
                          ATerm e_9 (ATerm t)
                          {
                            ATerm v_73 = NULL;
                            v_73 = t;
                            t = SSL_string_to_int(v_73);
                            return(t);
                          }
                          t = selector_2_0(e_9, _id, t);
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
ATerm oncetd_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm w_73 (ATerm t)
  {
    ATerm q_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_103(t);
        ;
        LocalPopChoice(t_54);
      }
    else
      {
        t = q_54;
        t = SRTS_one(w_73, t);
      }
    return(t);
  }
  t = w_73(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm u_54 = t;
  int v_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_54;
      t = get_options_0_0(t);
      {
        ATerm f_9 (ATerm t)
        {
          if(!(match_cons(t, sym_Strict_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(f_9, t);
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
        t = (ATerm) ATinsert(ATempty, term_x_54);
      }
      ;
      LocalPopChoice(v_54);
    }
  else
    {
      t = u_54;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_y_54);
    }
  return(t);
}
ATerm InId_1_0 (ATerm c_130 (ATerm), ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,f_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_54) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      y_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_73);
  if(match_cons(t, sym__2))
    {
      z_73 = ATgetArgument(t, 0);
      {
        ATerm a_55 = ATgetArgument(t, 1);
        if(((ATgetType(a_55) == AT_LIST) && !(ATisEmpty(a_55))))
          {
            f_74 = ATgetFirst((ATermList) a_55);
            {
              ATerm b_55 = (ATerm) ATgetNext((ATermList) a_55);
              if(((ATgetType(b_55) != AT_LIST) || !(ATisEmpty(b_55))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_73;
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_130(t);
        ;
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = type_failure_0_0(t);
      }
    t = f_74;
  }
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm g_74 = NULL;
  g_74 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)));
  t = g_74;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm d_75 = NULL,e_75 = NULL;
      ATerm i_9 (ATerm t)
      {
        ATerm j_44 = NULL;
        j_44 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_44), (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue))));
        t = j_44;
        return(t);
      }
      t = if_verbose1_1_0(i_9, t);
      t = ReadFromFile_0_0(t);
      e_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_55, e_75);
      {
        ATerm j_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = InId_1_0(j_9, t);
        if(match_cons(t, sym_PP_Table_1))
          {
            d_75 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_75;
        {
          ATerm k_9 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = reverse_acc_2_0(_id, k_9, t);
          {
            ATerm l_9 (ATerm t)
            {
              ATerm m_9 (ATerm t)
              {
                ATerm i_55 = t;
                int j_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MakePPTerm_0_0(t);
                    ;
                    LocalPopChoice(j_55);
                  }
                else
                  {
                    t = i_55;
                  }
                return(t);
              }
              t = topdown_1_0(m_9, t);
              t = StoreEntry_0_0(t);
              return(t);
            }
            t = map_1_0(l_9, t);
          }
        }
      }
      return(t);
    }
    t = map_1_0(h_9, t);
  }
  return(t);
}
ATerm union_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm a_76 = NULL,j_76 = NULL;
  if(match_cons(t, sym__2))
    {
      j_76 = ATgetArgument(t, 0);
      a_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_76;
  {
    ATerm k_76 (ATerm t)
    {
      ATerm k_55 = t;
      int l_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_76;
          ;
          LocalPopChoice(l_55);
        }
      else
        {
          t = k_55;
          {
            ATerm m_55 = t;
            int n_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_44 = NULL,b_45 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_44 = ATgetFirst((ATermList) t);
                    b_45 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_76;
                {
                  ATerm n_9 (ATerm t)
                  {
                    ATerm d_45 = NULL;
                    d_45 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_44, d_45);
                    t = h_112(t);
                    return(t);
                  }
                  t = fetch_1_0(n_9, t);
                  t = b_45;
                  t = k_76(t);
                }
                ;
                LocalPopChoice(n_55);
              }
            else
              {
                t = m_55;
                t = Cons_2_0(_id, k_76, t);
              }
          }
        }
      return(t);
    }
    t = k_76(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t)
{
  ATerm o_55 = t;
  int p_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_114(t);
      ;
      LocalPopChoice(p_55);
    }
  else
    {
      t = o_55;
      {
        ATerm x_76 = NULL,y_76 = NULL,d_77 = NULL,e_77 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_76 = ATgetFirst((ATermList) t);
            y_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_76;
        t = j_114(t);
        d_77 = t;
        t = y_76;
        t = foldr_3_0(h_114, i_114, j_114, t);
        e_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_77, e_77);
        t = i_114(t);
      }
    }
  return(t);
}
ATerm collect_om_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm q_55 = t;
  int r_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_77 = NULL;
      t = d_113(t);
      h_77 = t;
      t = (ATerm) ATinsert(ATempty, h_77);
      ;
      LocalPopChoice(r_55);
    }
  else
    {
      t = q_55;
      {
        ATerm j_45 = NULL,k_45 = NULL;
        j_45 = t;
        t = SSL_explode_term(j_45);
        if(match_cons(t, sym__2))
          {
            ATerm s_55 = ATgetArgument(t, 0);
            k_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_45;
        {
          ATerm o_9 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm p_9 (ATerm t)
          {
            ATerm r_9 (ATerm t)
            {
              ATerm v_45 = NULL;
              if(match_cons(t, sym__2))
                {
                  v_45 = ATgetArgument(t, 0);
                  if((v_45 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(r_9, t);
            return(t);
          }
          ATerm q_9 (ATerm t)
          {
            t = collect_om_1_0(d_113, t);
            return(t);
          }
          t = foldr_3_0(o_9, p_9, q_9, t);
        }
      }
    }
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,r_46 = NULL;
  if(match_cons(t, sym__2))
    {
      k_77 = ATgetArgument(t, 0);
      j_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_77;
  {
    ATerm s_9 (ATerm t)
    {
      ATerm l_77 = NULL;
      if(match_cons(t, sym_PP_Table_1))
        {
          l_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_77;
      return(t);
    }
    t = collect_om_1_0(s_9, t);
    {
      ATerm t_9 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, t_9, t);
      t = read_pp_tables_0_0(t);
      t = j_77;
      {
        ATerm u_9 (ATerm t)
        {
          ATerm v_9 (ATerm t)
          {
            ATerm m_77 = NULL;
            if(match_cons(t, sym_cf_1))
              {
                m_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_77;
            return(t);
          }
          t = sometd_1_0(v_9, t);
          return(t);
        }
        t = repeat_1_0(u_9, t);
        m_46 = t;
        {
          ATerm w_9 (ATerm t)
          {
            ATerm t_55 = t;
            int u_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_55 = t;
                int w_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    ;
                    LocalPopChoice(w_55);
                  }
                else
                  {
                    t = v_55;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm x_55 = ATgetFirst((ATermList) t);
                        ATerm y_55 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                  }
                {
                  ATerm x_9 (ATerm t)
                  {
                    ATerm z_55 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm y_9 (ATerm t)
                        {
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          return(t);
                        }
                        t = opt_1_0(y_9, t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = z_55;
                      }
                    {
                      ATerm a_56 = t;
                      if((PushChoice() == 0))
                        {
                          t = layout_1_0(_id, t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = a_56;
                        }
                    }
                    return(t);
                  }
                  t = filter_1_0(x_9, t);
                }
                ;
                LocalPopChoice(u_55);
              }
            else
              {
                t = t_55;
              }
            return(t);
          }
          t = topdown_1_0(w_9, t);
          {
            ATerm b_56 = t;
            int c_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = application_to_abox_0_0(t);
                ;
                LocalPopChoice(c_56);
              }
            else
              {
                t = b_56;
                t = fatal_ambiguity_0_0(t);
              }
            n_46 = t;
            t = m_46;
            {
              ATerm z_9 (ATerm t)
              {
                t = layout_1_0(_id, t);
                return(t);
              }
              t = collect_p__1_0(z_9, t);
              o_46 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
              t = insert_layout_0_0(t);
              r_46 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_77, r_46);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_120 (ATerm), ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,w_77 = NULL;
  if(match_cons(t, sym__2))
    {
      n_77 = ATgetArgument(t, 0);
      o_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_77, term_d_56);
  t = open_stream_0_0(t);
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_77, o_77);
  t = t_120(t);
  t = fclose_0_0(t);
  t = o_77;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_77 = NULL,c_78 = NULL;
  y_77 = t;
  {
    ATerm a_10 (ATerm t)
    {
      ATerm e_56 = t;
      int f_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_10 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_78 != NULL) && (c_78 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_78 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_10, t);
          ;
          LocalPopChoice(f_56);
        }
      else
        {
          t = e_56;
          t = term_g_56;
          if(((c_78 != NULL) && (c_78 != t)))
            _fail(t);
          else
            c_78 = t;
        }
      return(t);
    }
    t = _2_0(a_10, _id, t);
    t = y_77;
    {
      ATerm d_10 (ATerm t)
      {
        ATerm w_46 = NULL;
        w_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_78), w_46);
        return(t);
      }
      t = _2_0(_id, d_10, t);
      {
        ATerm h_56 = t;
        int i_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 (ATerm t)
            {
              ATerm g_10 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(g_10, t);
              return(t);
            }
            ATerm f_10 (ATerm t)
            {
              ATerm k_10 (ATerm t)
              {
                ATerm d_78 = NULL,o_78 = NULL,b_79 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm j_56 = ATgetArgument(t, 0);
                    if(match_cons(j_56, sym_Stream_1))
                      {
                        d_78 = ATgetArgument(j_56, 0);
                      }
                    else
                      _fail(t);
                    o_78 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(d_78, o_78);
                b_79 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_79);
                return(t);
              }
              t = WriteToFile_1_0(k_10, t);
              return(t);
            }
            t = _2_0(e_10, f_10, t);
            ;
            LocalPopChoice(i_56);
          }
        else
          {
            t = h_56;
            {
              ATerm l_10 (ATerm t)
              {
                ATerm m_10 (ATerm t)
                {
                  ATerm e_79 = NULL,f_79 = NULL,i_79 = NULL,j_79 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm k_56 = ATgetArgument(t, 0);
                      if(match_cons(k_56, sym_Stream_1))
                        {
                          e_79 = ATgetArgument(k_56, 0);
                        }
                      else
                        _fail(t);
                      f_79 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(e_79, f_79);
                  i_79 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), i_79);
                  j_79 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, j_79);
                  return(t);
                }
                t = WriteToFile_1_0(m_10, t);
                return(t);
              }
              t = _2_0(_id, l_10, t);
            }
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
ATerm apply_strategy_1_0 (ATerm v_123 (ATerm), ATerm t)
{
  ATerm k_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL;
  k_79 = t;
  t = dtime_0_0(t);
  t = k_79;
  t = v_123(t);
  n_79 = t;
  t = dtime_0_0(t);
  o_79 = t;
  t = n_79;
  if(match_cons(t, sym__2))
    {
      p_79 = ATgetArgument(t, 0);
      q_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_79), (ATerm) ATmakeAppl(sym_Runtime_1, o_79)), q_79);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_80 (ATerm z_79, ATerm t)
  {
    t = SSL_fclose(z_79);
    return(t);
  }
  ATerm d_80 = NULL,e_80 = NULL;
  e_80 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_80 = ATgetArgument(t, 0);
      {
        ATerm m_56 = t;
        int n_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_80);
            ;
            LocalPopChoice(n_56);
          }
        else
          {
            t = m_56;
            t = h_80(e_80, t);
          }
      }
    }
  else
    {
      t = h_80(e_80, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_80 = NULL;
  t = SSL_stdin_stream();
  i_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_80);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_81 = NULL;
  t = SSL_stdout_stream();
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_81);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_81 = NULL;
  t = SSL_stderr_stream();
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_81);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_56 = ATgetArgument(t, 0);
      ATerm r_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_47 = NULL,m_47 = NULL;
        l_47 = t;
        t = SSL_explode_term(l_47);
        if(match_cons(t, sym__2))
          {
            ATerm w_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_56) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_56 = ATgetArgument(t, 1);
              if(((ATgetType(x_56) == AT_LIST) && !(ATisEmpty(x_56))))
                {
                  m_47 = ATgetFirst((ATermList) x_56);
                  {
                    ATerm y_56 = (ATerm) ATgetNext((ATermList) x_56);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_47;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_47;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_47;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_47;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(t_56);
      }
    else
      {
        t = s_56;
        {
          ATerm z_56 = t;
          int a_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_81 = NULL,q_81 = NULL,s_82 = NULL;
              ATerm n_10 (ATerm t)
              {
                ATerm t_82 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    t_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_82;
                return(t);
              }
              t = _2_0(n_10, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_81 = ATgetArgument(t, 0);
                  q_81 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_81, q_81);
              s_82 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_82);
              ;
              LocalPopChoice(a_57);
            }
          else
            {
              t = z_56;
              {
                ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
                ATerm o_10 (ATerm t)
                {
                  ATerm x_82 = NULL;
                  x_82 = t;
                  t = SSL_is_string(x_82);
                  return(t);
                }
                t = _2_0(o_10, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_82 = ATgetArgument(t, 0);
                    v_82 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_82, v_82);
                w_82 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_82);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL;
  ATerm b_57 = t;
  int c_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_83 = NULL;
      b_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_83, term_d_57);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_57);
    }
  else
    {
      t = b_57;
      {
        ATerm n_47 = NULL;
        n_47 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_47), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = n_47;
        _fail(t);
      }
    }
  y_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_83);
  z_82 = t;
  t = y_82;
  t = fclose_0_0(t);
  t = z_82;
  return(t);
}
ATerm fetch_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm g_83 (ATerm t)
  {
    ATerm e_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_108, _id, t);
        ;
        LocalPopChoice(f_57);
      }
    else
      {
        t = e_57;
        t = Cons_2_0(_id, g_83, t);
      }
    return(t);
  }
  t = g_83(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_57);
    }
  else
    {
      t = g_57;
      {
        ATerm j_83 = NULL,k_83 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_83 = ATgetFirst((ATermList) t);
            k_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_83;
        {
          ATerm p_10 (ATerm t)
          {
            t = k_83;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_10, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm q_83 (ATerm t)
  {
    ATerm l_57 = t;
    int m_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_83, t);
        ;
        LocalPopChoice(m_57);
      }
    else
      {
        t = l_57;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_108(t);
      }
    return(t);
  }
  t = q_83(t);
  return(t);
}
ATerm _2_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL;
  w_83 = t;
  if(match_cons(t, sym__2))
    {
      s_83 = ATgetArgument(t, 0);
      t_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_83);
  r_83 = t;
  t = s_83;
  t = a_85(t);
  u_83 = t;
  t = t_83;
  t = b_85(t);
  v_83 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, u_83, v_83), r_83);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_84 = NULL;
  ATerm q_10 (ATerm t)
  {
    ATerm b_84 = NULL;
    b_84 = t;
    t = SSL_explode_string(b_84);
    return(t);
  }
  ATerm r_10 (ATerm t)
  {
    ATerm c_84 = NULL;
    c_84 = t;
    t = SSL_explode_string(c_84);
    return(t);
  }
  t = _2_0(q_10, r_10, t);
  {
    ATerm n_57 = t;
    int o_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_84 = NULL,f_84 = NULL;
        if(match_cons(t, sym__2))
          {
            e_84 = ATgetArgument(t, 0);
            f_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_84;
        {
          ATerm s_10 (ATerm t)
          {
            t = f_84;
            return(t);
          }
          t = at_end_1_0(s_10, t);
        }
        ;
        LocalPopChoice(o_57);
      }
    else
      {
        t = n_57;
        {
          ATerm z_47 = NULL,l_48 = NULL;
          z_47 = t;
          t = SSL_explode_term(z_47);
          if(match_cons(t, sym__2))
            {
              ATerm p_57 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_57) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              l_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_48;
          t = concat_0_0(t);
        }
      }
    a_84 = t;
    t = SSL_implode_string(a_84);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_57 = t;
  int r_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_84 = NULL;
      p_84 = t;
      t = SSL_is_string(p_84);
      ;
      LocalPopChoice(r_57);
    }
  else
    {
      t = q_57;
      {
        ATerm s_57 = t;
        int t_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_10 (ATerm t)
            {
              ATerm x_57 = t;
              int y_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(y_57);
                }
              else
                {
                  t = x_57;
                }
              return(t);
            }
            t = map_1_0(t_10, t);
            ;
            LocalPopChoice(t_57);
          }
        else
          {
            t = s_57;
            {
              ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
              t_84 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_84 = ATgetArgument(t, 0);
                  t = u_84;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_84 = ATgetArgument(t, 0);
                      t = u_84;
                      {
                        ATerm b_58 = t;
                        int d_58 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_84);
                            {
                              ATerm e_58 = t;
                              int f_58 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_50 = NULL;
                                  t = eval_config_0_0(t);
                                  f_50 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_84, f_50);
                                  t = f_50;
                                  ;
                                  LocalPopChoice(f_58);
                                }
                              else
                                {
                                  t = e_58;
                                }
                            }
                            ;
                            LocalPopChoice(d_58);
                          }
                        else
                          {
                            t = b_58;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_84), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = u_84;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_84 = NULL,c_85 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_84 = ATgetArgument(t, 0);
                          v_84 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_84;
                      t = eval_config_0_0(t);
                      z_84 = t;
                      t = v_84;
                      t = eval_config_0_0(t);
                      c_85 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_84, c_85);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_121 (ATerm), ATerm t)
{
  ATerm i_58 = t;
  int k_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_85 = NULL,j_85 = NULL;
      h_85 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_58 = t;
        int o_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_52 = NULL;
            t = eval_config_0_0(t);
            w_52 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_52);
            t = w_52;
            ;
            LocalPopChoice(o_58);
          }
        else
          {
            t = l_58;
          }
        j_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_85, term_e_22);
        t = geq_0_0(t);
        t = h_85;
        t = x_121(t);
      }
      ;
      LocalPopChoice(k_58);
    }
  else
    {
      t = i_58;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm u_10 (ATerm t)
  {
    ATerm l_85 = NULL;
    l_85 = t;
    if(match_string(t, "-k"))
      {
        t = l_85;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = l_85;
      }
    return(t);
  }
  ATerm w_10 (ATerm t)
  {
    ATerm m_85 = NULL,n_85 = NULL;
    m_85 = t;
    t = SSL_string_to_int(m_85);
    n_85 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_85);
    t = m_85;
    return(t);
  }
  ATerm x_10 (ATerm t)
  {
    t = term_p_58;
    return(t);
  }
  t = ArgOption_3_0(u_10, w_10, x_10, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_58 = t;
  int t_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_10 (ATerm t)
      {
        ATerm p_85 = NULL;
        p_85 = t;
        if(match_string(t, "-S"))
          {
            t = p_85;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = p_85;
          }
        return(t);
      }
      ATerm z_10 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_y_58;
        return(t);
      }
      ATerm a_11 (ATerm t)
      {
        t = term_z_58;
        return(t);
      }
      t = Option_3_0(y_10, z_10, a_11, t);
      ;
      LocalPopChoice(t_58);
    }
  else
    {
      t = s_58;
      {
        ATerm a_59 = t;
        int b_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm c_11 (ATerm t)
            {
              ATerm q_85 = NULL,r_85 = NULL;
              q_85 = t;
              t = SSL_string_to_int(q_85);
              r_85 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_85);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, q_85);
              return(t);
            }
            ATerm d_11 (ATerm t)
            {
              t = term_e_59;
              return(t);
            }
            t = ArgOption_3_0(b_11, c_11, d_11, t);
            ;
            LocalPopChoice(b_59);
          }
        else
          {
            t = a_59;
            {
              ATerm e_11 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm f_11 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_f_59;
                return(t);
              }
              ATerm g_11 (ATerm t)
              {
                t = term_g_59;
                return(t);
              }
              t = Option_3_0(e_11, f_11, g_11, t);
            }
          }
      }
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm h_11 (ATerm t)
  {
    ATerm t_85 = NULL;
    t_85 = t;
    if(match_string(t, "-o"))
      {
        t = t_85;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = t_85;
      }
    return(t);
  }
  ATerm i_11 (ATerm t)
  {
    ATerm u_85 = NULL;
    u_85 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_85);
    t = (ATerm) ATmakeAppl(sym_Output_1, u_85);
    return(t);
  }
  ATerm j_11 (ATerm t)
  {
    t = term_i_59;
    return(t);
  }
  t = ArgOption_3_0(h_11, i_11, j_11, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_11 (ATerm t)
  {
    ATerm w_85 = NULL;
    w_85 = t;
    if(match_string(t, "-i"))
      {
        t = w_85;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = w_85;
      }
    return(t);
  }
  ATerm l_11 (ATerm t)
  {
    ATerm x_85 = NULL;
    x_85 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), x_85);
    t = (ATerm) ATmakeAppl(sym_Input_1, x_85);
    return(t);
  }
  ATerm m_11 (ATerm t)
  {
    t = term_k_59;
    return(t);
  }
  t = ArgOption_3_0(k_11, l_11, m_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_12;
  t = whoami_0_0(t);
  y_85 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), y_85));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm m_59 = t;
    int n_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_53 = NULL;
        t = eval_config_0_0(t);
        q_53 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_53);
        t = q_53;
        ;
        LocalPopChoice(n_59);
      }
    else
      {
        t = m_59;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm t)
{
  ATerm o_59 = t;
  int p_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_114(t);
      ;
      LocalPopChoice(p_59);
    }
  else
    {
      t = o_59;
      {
        ATerm b_86 = NULL,c_86 = NULL,f_86 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_86 = ATgetFirst((ATermList) t);
            c_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_86;
        t = foldr_2_0(f_114, g_114, t);
        f_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_86, f_86);
        t = g_114(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_86 = NULL,s_53 = NULL,w_53 = NULL;
  t = times_0_0(t);
  s_53 = t;
  t = SSL_explode_term(s_53);
  if(match_cons(t, sym__2))
    {
      ATerm q_59 = ATgetArgument(t, 0);
      w_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_53;
  {
    ATerm q_11 (ATerm t)
    {
      t = term_w_58;
      return(t);
    }
    ATerm r_11 (ATerm t)
    {
      ATerm m_54 = NULL,n_54 = NULL;
      if(match_cons(t, sym__2))
        {
          m_54 = ATgetArgument(t, 0);
          n_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm r_59 = t;
        int x_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(m_54, n_54);
            ;
            LocalPopChoice(x_59);
          }
        else
          {
            t = r_59;
            t = SSL_addr(m_54, n_54);
          }
      }
      return(t);
    }
    t = foldr_2_0(q_11, r_11, t);
    i_86 = t;
    t = SSL_TicksToSeconds(i_86);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL;
  w_86 = t;
  if(match_cons(t, sym__2))
    {
      x_86 = ATgetArgument(t, 0);
      y_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_59 = t;
    int z_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_86;
        if((x_86 != t))
          {
            _fail(t);
          }
        t = w_86;
        ;
        LocalPopChoice(z_59);
      }
    else
      {
        t = y_59;
        t = w_86;
        {
          ATerm d_60 = t;
          int e_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_86, y_86);
              ;
              LocalPopChoice(e_60);
            }
          else
            {
              t = d_60;
              t = SSL_gtr(x_86, y_86);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_86, y_86);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  ATerm f_60 = t;
  int h_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_87 = NULL,d_87 = NULL;
      b_87 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_60 = t;
        int j_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_57 = NULL;
            t = eval_config_0_0(t);
            v_57 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_57);
            t = v_57;
            ;
            LocalPopChoice(j_60);
          }
        else
          {
            t = i_60;
          }
        d_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_87, term_k_21);
        t = geq_0_0(t);
        t = b_87;
        t = w_121(t);
      }
      ;
      LocalPopChoice(h_60);
    }
  else
    {
      t = f_60;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm s_11 (ATerm t)
  {
    ATerm f_87 = NULL,g_87 = NULL;
    t = run_time_0_0(t);
    f_87 = t;
    t = term_x_12;
    t = whoami_0_0(t);
    g_87 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), f_87), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), g_87));
    t = (ATerm) ATmakeAppl(sym__2, term_k_60, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_60), f_87), term_q_60), g_87));
    return(t);
  }
  t = if_verbose1_1_0(s_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm t_124 (ATerm), ATerm t)
{
  ATerm t_60 = t;
  int v_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm w_60 = t;
        int y_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_59 = NULL;
            t = eval_config_0_0(t);
            h_59 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), h_59);
            t = h_59;
            ;
            LocalPopChoice(y_60);
          }
        else
          {
            t = w_60;
          }
      }
      ;
      LocalPopChoice(v_60);
    }
  else
    {
      t = t_60;
      {
        ATerm u_11 (ATerm t)
        {
          ATerm a_61 = t;
          int b_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(b_61);
            }
          else
            {
              t = a_61;
              {
                ATerm c_61 = t;
                int e_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(e_61);
                  }
                else
                  {
                    t = c_61;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(u_11, t);
      }
    }
  t = t_124(t);
  return(t);
}
ATerm map_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm h_87 (ATerm t)
  {
    ATerm f_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_61);
      }
    else
      {
        t = f_61;
        t = Cons_2_0(d_108, h_87, t);
      }
    return(t);
  }
  t = h_87(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_87 = ATgetFirst((ATermList) t);
      k_87 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_87 = NULL,p_87 = NULL;
        t = k_87;
        t = c_0(t);
        o_87 = t;
        t = j_87;
        t = a_0(t);
        p_87 = t;
        t = k_87;
        {
          ATerm w_11 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_87), p_87);
            return(t);
          }
          t = reverse_acc_2_0(a_0, w_11, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_12;
      t = c_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL;
  t_87 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_87);
  q_87 = t;
  t = r_87;
  t = b_92(t);
  s_87 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, s_87), q_87);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_61 = t;
  int k_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_61 = t;
        int n_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_60 = NULL;
            t = eval_config_0_0(t);
            c_60 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_60);
            t = c_60;
            ;
            LocalPopChoice(n_61);
          }
        else
          {
            t = l_61;
          }
      }
      ;
      LocalPopChoice(k_61);
    }
  else
    {
      t = i_61;
      {
        ATerm x_11 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(x_11, t);
      }
    }
  t = term_o_61;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm y_11 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, y_11, t);
    {
      ATerm z_11 (ATerm t)
      {
        ATerm w_87 = NULL;
        w_87 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, w_87), term_p_61);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(z_11, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  a_88 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_88);
  x_87 = t;
  t = y_87;
  t = c_92(t);
  z_87 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, z_87), x_87);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL;
  e_88 = t;
  {
    ATerm q_61 = t;
    int r_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_88;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_61 = ATgetFirst((ATermList) t);
                ATerm t_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_88;
          }
        ;
        LocalPopChoice(r_61);
      }
    else
      {
        t = q_61;
        t = (ATerm) ATinsert(ATempty, e_88);
      }
    f_88 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), f_88);
    t = e_88;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_62 = t;
    int d_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_60 = NULL;
        t = eval_config_0_0(t);
        g_60 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_60);
        t = g_60;
        ;
        LocalPopChoice(d_62);
      }
    else
      {
        t = b_62;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_62 = t;
  int g_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm b_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_l_62;
        return(t);
      }
      ATerm c_12 (ATerm t)
      {
        t = term_m_62;
        return(t);
      }
      t = Option_3_0(a_12, b_12, c_12, t);
      ;
      LocalPopChoice(g_62);
    }
  else
    {
      t = e_62;
      {
        ATerm d_12 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_12 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_62;
          return(t);
        }
        ATerm m_12 (ATerm t)
        {
          t = term_q_62;
          return(t);
        }
        t = Option_3_0(d_12, e_12, m_12, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL;
  o_88 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_88 = ATgetFirst((ATermList) t);
      l_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_88);
  j_88 = t;
  t = k_88;
  t = j_86(t);
  m_88 = t;
  t = l_88;
  t = k_86(t);
  n_88 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(n_88), m_88), j_88);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_126 (ATerm), ATerm t)
{
  ATerm s_88 = NULL;
  s_88 = t;
  {
    ATerm r_62 = t;
    int t_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_62;
        t = w_126(t);
        ;
        LocalPopChoice(t_62);
      }
    else
      {
        t = r_62;
      }
    t = s_88;
    {
      ATerm p_12 (ATerm t)
      {
        ATerm t_88 = NULL;
        t_88 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_88);
        t = (ATerm) ATmakeAppl(sym_Program_1, t_88);
        return(t);
      }
      ATerm q_12 (ATerm t)
      {
        ATerm w_62 = t;
        int x_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_62 = t;
            int b_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(b_63);
              }
            else
              {
                t = z_62;
                t = w_126(t);
                t = Cons_2_0(_id, q_12, t);
              }
            ;
            LocalPopChoice(x_62);
          }
        else
          {
            t = w_62;
            {
              ATerm v_88 = NULL,w_88 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_88 = ATgetFirst((ATermList) t);
                  w_88 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_88), (ATerm) ATmakeAppl(sym_Undefined_1, v_88));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_12, q_12, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = d_89;
  {
    ATerm r_12 (ATerm t)
    {
      ATerm c_63 = t;
      int d_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_126(t);
          ;
          LocalPopChoice(d_63);
        }
      else
        {
          t = c_63;
          {
            ATerm g_63 = t;
            int k_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_12 (ATerm t)
                {
                  ATerm g_89 = NULL;
                  g_89 = t;
                  if(match_string(t, "--help"))
                    {
                      t = g_89;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = g_89;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = g_89;
                        }
                    }
                  return(t);
                }
                ATerm t_12 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_l_63;
                  return(t);
                }
                ATerm u_12 (ATerm t)
                {
                  t = term_s_63;
                  return(t);
                }
                t = Option_3_0(s_12, t_12, u_12, t);
                ;
                LocalPopChoice(k_63);
              }
            else
              {
                t = g_63;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_12, t);
    {
      ATerm t_63 = t;
      int v_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_89 = NULL;
          l_89 = t;
          {
            ATerm w_63 = t;
            int x_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_89;
                {
                  ATerm z_63 = t;
                  int a_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm c_64 = t;
                        int d_64 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_62 = NULL;
                            t = eval_config_0_0(t);
                            n_62 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_62);
                            t = n_62;
                            ;
                            LocalPopChoice(d_64);
                          }
                        else
                          {
                            t = c_64;
                          }
                      }
                      ;
                      LocalPopChoice(a_64);
                    }
                  else
                    {
                      t = z_63;
                      {
                        ATerm v_12 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(v_12, t);
                      }
                    }
                  t = l_89;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(x_63);
              }
            else
              {
                t = w_63;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm e_64 = t;
                  int f_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_63 = NULL;
                      t = eval_config_0_0(t);
                      u_63 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), u_63);
                      t = u_63;
                      ;
                      LocalPopChoice(f_64);
                    }
                  else
                    {
                      t = e_64;
                    }
                  t = l_89;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(v_63);
        }
      else
        {
          t = t_63;
          {
            ATerm j_64 = t;
            int k_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_12 (ATerm t)
                {
                  ATerm y_12 (ATerm t)
                  {
                    if(((e_89 != NULL) && (e_89 != t)))
                      _fail(t);
                    else
                      e_89 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_12, t);
                  return(t);
                }
                t = fetch_1_0(w_12, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_89)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_k_60, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_89)), term_l_64));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(k_64);
              }
            else
              {
                t = j_64;
              }
          }
        }
      f_89 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = f_89;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm t)
{
  ATerm o_89 = NULL;
  t = parse_options_1_0(v_124, t);
  o_89 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), o_89);
  t = o_89;
  t = x_124(t);
  {
    ATerm p_64 = t;
    int q_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_124, t);
        ;
        LocalPopChoice(q_64);
      }
    else
      {
        t = p_64;
        {
          ATerm r_64 = t;
          int t_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_124(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_64);
            }
          else
            {
              t = r_64;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t)
{
  ATerm z_12 (ATerm t)
  {
    ATerm u_64 = t;
    int v_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_124(t);
        ;
        LocalPopChoice(v_64);
      }
    else
      {
        t = u_64;
        {
          ATerm w_64 = t;
          int x_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_64);
            }
          else
            {
              t = w_64;
              {
                ATerm z_64 = t;
                int a_65 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(a_65);
                  }
                else
                  {
                    t = z_64;
                    {
                      ATerm b_65 = t;
                      int e_65 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_13 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm e_13 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_g_65;
                            return(t);
                          }
                          ATerm g_13 (ATerm t)
                          {
                            t = term_h_65;
                            return(t);
                          }
                          t = Option_3_0(d_13, e_13, g_13, t);
                          ;
                          LocalPopChoice(e_65);
                        }
                      else
                        {
                          t = b_65;
                          {
                            ATerm i_65 = t;
                            int j_65 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_65);
                              }
                            else
                              {
                                t = i_65;
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
  ATerm b_13 (ATerm t)
  {
    ATerm h_13 (ATerm t)
    {
      ATerm p_89 = NULL,q_89 = NULL;
      p_89 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm n_65 = t;
        int o_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_63 = NULL;
            t = eval_config_0_0(t);
            y_63 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_63);
            t = y_63;
            ;
            LocalPopChoice(o_65);
          }
        else
          {
            t = n_65;
          }
        q_89 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, q_89));
        t = p_89;
      }
      return(t);
    }
    t = if_verbose2_1_0(h_13, t);
    return(t);
  }
  ATerm c_13 (ATerm t)
  {
    ATerm r_89 = NULL,s_89 = NULL,b_64 = NULL;
    r_89 = t;
    {
      ATerm x_65 = t;
      int y_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_89 != NULL) && (s_89 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_89 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_13, t);
          ;
          LocalPopChoice(y_65);
        }
      else
        {
          t = x_65;
          t = term_d_66;
          s_89 = t;
        }
      t = not_null(s_89);
      t = ReadFromFile_0_0(t);
      b_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_89, b_64);
      t = apply_strategy_1_0(e_124, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_12, g_124, b_13, c_13, t);
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm e_66 = t;
    int f_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_13 (ATerm t)
        {
          t = term_g_66;
          return(t);
        }
        ATerm m_13 (ATerm t)
        {
          t = term_j_66;
          return(t);
        }
        t = Option_3_0(k_13, l_13, m_13, t);
        ;
        LocalPopChoice(f_66);
      }
    else
      {
        t = e_66;
        {
          ATerm k_66 = t;
          int p_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_13 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_13 (ATerm t)
              {
                t = term_f_16;
                return(t);
              }
              ATerm q_13 (ATerm t)
              {
                t = term_q_66;
                return(t);
              }
              t = Option_3_0(n_13, o_13, q_13, t);
              ;
              LocalPopChoice(p_66);
            }
          else
            {
              t = k_66;
              {
                ATerm r_13 (ATerm t)
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
                    _fail(t);
                  return(t);
                }
                ATerm s_13 (ATerm t)
                {
                  ATerm t_89 = NULL;
                  t_89 = t;
                  t = (ATerm) ATmakeAppl(sym_PP_Table_1, t_89);
                  return(t);
                }
                ATerm t_13 (ATerm t)
                {
                  t = term_v_66;
                  return(t);
                }
                t = ArgOption_3_0(r_13, s_13, t_13, t);
              }
            }
        }
      }
    return(t);
  }
  t = iowrap_3_0(asfix2abox_0_0, j_13, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

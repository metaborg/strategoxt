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
ATerm term_t_52;
ATerm term_s_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_z_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_q_49;
ATerm term_l_49;
ATerm term_i_49;
ATerm term_d_49;
ATerm term_x_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_h_47;
ATerm term_e_47;
ATerm term_b_47;
ATerm term_z_46;
ATerm term_x_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_p_46;
ATerm term_w_45;
ATerm term_t_45;
ATerm term_n_45;
ATerm term_x_44;
ATerm term_t_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_n_40;
ATerm term_a_39;
ATerm term_m_38;
ATerm term_d_38;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_n_35;
ATerm term_k_35;
ATerm term_h_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_q_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_s_33;
ATerm term_n_33;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_a_32;
ATerm term_x_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_n_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_y_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_q_25;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_a_24;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_y_20;
ATerm term_s_17;
ATerm term_l_17;
ATerm term_c_16;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
void init_constant_terms (void)
{
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_SOpt_2, term_w_14, term_x_14);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_lit_1, term_w_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_lit_1, term_f_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_SOpt_2, term_m_24, term_n_24);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Arg_1, term_l_17);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_46);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(sym__3, term_y_50, term_z_50, term_d_14);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm n_126 (ATerm), ATerm);
ATerm Option_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm layout2box_0_0 (ATerm);
ATerm has_significant_layout_0_0 (ATerm);
ATerm has_layout_0_0 (ATerm);
ATerm InsLayout_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm insert_layout_0_0 (ATerm);
ATerm layout_1_0 (ATerm f_86 (ATerm), ATerm);
ATerm collect_p__1_0 (ATerm b_130 (ATerm), ATerm);
ATerm amb_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm fatal_ambiguity_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm Instantiate_1_0 (ATerm d_0 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm instantiate_0_0 (ATerm);
ATerm filter_literals_0_0 (ATerm);
ATerm make_path_0_0 (ATerm);
ATerm instantiate_list_1_0 (ATerm h_130 (ATerm), ATerm);
ATerm build_list_0_0 (ATerm);
ATerm instantiate_sep_list_1_0 (ATerm j_130 (ATerm), ATerm);
ATerm BuildSepList_4_0 (ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm);
ATerm nzip_1_0 (ATerm l_110 (ATerm), ATerm);
ATerm build_sep_list_0_0 (ATerm);
ATerm Ind2_0_0 (ATerm);
ATerm index_0_0 (ATerm);
ATerm symbol2abox_0_0 (ATerm);
ATerm seq2abox_0_0 (ATerm);
ATerm lit_1_0 (ATerm a_94 (ATerm), ATerm);
ATerm pp_table_get_0_0 (ATerm);
ATerm StoreEntryIfNotExists_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm f_129 (ATerm), ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm pair_0_0 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm number_node_1_0 (ATerm j_129 (ATerm), ATerm);
ATerm no_labels_0_0 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm symbol2abox_1_0 (ATerm g_129 (ATerm), ATerm);
ATerm get_pp_entry_0_0 (ATerm);
ATerm prod_3_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm);
ATerm uq2q_0_0 (ATerm);
ATerm cons_1_0 (ATerm o_94 (ATerm), ATerm);
ATerm at_cons_1_0 (ATerm r_130 (ATerm), ATerm);
ATerm get_constr_0_0 (ATerm);
ATerm add_attributes_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm Escape_0_0 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm isAlpha_0_0 (ATerm);
ATerm strs2constr_0_0 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm sym2strs_0_0 (ATerm);
ATerm syms2strs_0_0 (ATerm);
ATerm Quote_0_0 (ATerm);
ATerm quote_0_0 (ATerm);
ATerm normalize_constr_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm empty_test_0_0 (ATerm);
ATerm isLower_0_0 (ATerm);
ATerm isUpper_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm isNum_0_0 (ATerm);
ATerm isAlphaNumHyphen_0_0 (ATerm);
ATerm toAlphaNum_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm dissuader_1_0 (ATerm c_120 (ATerm), ATerm);
ATerm separate_by_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm De_Escape3_0_0 (ATerm);
ATerm De_Escape2_0_0 (ATerm);
ATerm De_Escape1_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm Lit2Str_0_0 (ATerm);
ATerm list_ana_1_0 (ATerm u_130 (ATerm), ATerm);
ATerm lit2str_0_0 (ATerm);
ATerm lits2strs_0_0 (ATerm);
ATerm mk_constr_0_0 (ATerm);
ATerm iter_star_sep_2_0 (ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm g_94 (ATerm), ATerm);
ATerm iter_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm alt_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm);
ATerm syntaxless_sort_0_0 (ATerm);
ATerm is_injection_0_0 (ATerm);
ATerm is_reject_0_0 (ATerm);
ATerm is_bracket_0_0 (ATerm);
ATerm prodcons_0_0 (ATerm);
ATerm sort_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm get_templ_0_0 (ATerm);
ATerm application_to_abox_0_0 (ATerm);
ATerm appl2abox_0_0 (ATerm);
ATerm opt_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm filter_1_0 (ATerm a_115 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm sometd_1_0 (ATerm t_103 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm StoreEntry_0_0 (ATerm);
ATerm selector_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm);
ATerm UnEscape_0_0 (ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm unescape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm y_116 (ATerm), ATerm);
ATerm un_double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm un_double_quote_0_0 (ATerm);
ATerm S_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm SOpt_2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm);
ATerm Arg2_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm makePPEntry_0_0 (ATerm);
ATerm build_pp_table_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm j_103 (ATerm), ATerm);
ATerm is_subterm_0_0 (ATerm);
ATerm get_options_0_0 (ATerm);
ATerm check_option_0_0 (ATerm);
ATerm has_option_1_0 (ATerm l_123 (ATerm), ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm r_129 (ATerm), ATerm);
ATerm termid_check_1_0 (ATerm y_129 (ATerm), ATerm);
ATerm notify_1_0 (ATerm g_130 (ATerm), ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm);
ATerm union_1_0 (ATerm z_111 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm);
ATerm crush_3_0 (ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm collect_1_0 (ATerm w_112 (ATerm), ATerm);
ATerm asfix2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_121 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm i_120 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_123 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm u_119 (ATerm), ATerm);
ATerm _2_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm);
ATerm crush_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_121 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm i_124 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_107 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_91 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm i_125 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm l_126 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm k_126 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_124 (ATerm), ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm);
ATerm io_Asfix_2_abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
  g_2 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = g_2;
      t = register_usage_1_0(k_0, t);
    }
  else
    {
      ATerm o_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_2 = ATgetFirst((ATermList) t);
          i_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_2;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_2 = ATgetFirst((ATermList) t);
          k_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_2;
      t = i_0(t);
      t = j_2;
      t = j_0(t);
      o_2 = t;
      t = (ATerm) ATinsert(CheckATermList(k_2), o_2);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__3))
    {
      s_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
      u_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_2, t_2);
  {
    ATerm v_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_13 = ATgetArgument(t, 0);
            ATerm a_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_2, t_2);
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATempty;
      }
    v_2 = t;
    t = SSL_table_put(s_2, t_2, (ATerm) ATinsert(CheckATermList(v_2), u_2));
    t = (ATerm) ATmakeAppl(sym__3, s_2, t_2, u_2);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm n_126 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  t = term_d_14;
  t = n_126(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_14, term_g_14, a_3);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,f_3 = NULL;
  c_3 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_3;
      t = register_usage_1_0(h_0, t);
    }
  else
    {
      ATerm j_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_3 = ATgetFirst((ATermList) t);
          f_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_3;
      t = f_0(t);
      t = term_d_14;
      t = g_0(t);
      j_3 = t;
      t = (ATerm) ATinsert(CheckATermList(f_3), j_3);
    }
  return(t);
}
ATerm layout2box_0_0 (ATerm t)
{
  ATerm k_3 = NULL;
  if(match_cons(t, sym_layout_1))
    {
      k_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL;
        t = has_significant_layout_0_0(t);
        t = k_3;
        t = concat_strings_0_0(t);
        l_3 = t;
        t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, l_3)));
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm m_3 = NULL;
          t = k_3;
          t = concat_strings_0_0(t);
          m_3 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, m_3);
        }
      }
  }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  {
    ATerm k_14 = t;
    if((PushChoice() == 0))
      {
        ATerm c_0 (ATerm t)
        {
          if(!(match_cons(t, sym_layout_place_holder_0)))
            _fail(t);
          return(t);
        }
        t = layout_1_0(c_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_14;
      }
    if(match_cons(t, sym_layout_1))
      {
        q_3 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = q_3;
    t = concat_strings_0_0(t);
    r_3 = t;
    t = SSL_explode_string(r_3);
    {
      ATerm e_0 (ATerm t)
      {
        ATerm l_14 = t;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL;
            s_3 = t;
            if(match_int(t, 9))
              {
                t = s_3;
              }
            else
              {
                if(match_int(t, 10))
                  {
                    t = s_3;
                  }
                else
                  {
                    if(match_int(t, 13))
                      {
                        t = s_3;
                      }
                    else
                      {
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                          _fail(t);
                        t = s_3;
                      }
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_14;
          }
        return(t);
      }
      t = filter_1_0(e_0, t);
      {
        ATerm n_14 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_14;
          }
        t = p_3;
      }
    }
  }
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm o_14 = t;
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
      t = o_14;
    }
  return(t);
}
ATerm InsLayout_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm a_4 = NULL,b_4 = NULL,d_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(m_0, _id, t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
          a_5 = t;
          if(match_cons(t, sym__2))
            {
              b_5 = ATgetArgument(t, 0);
              g_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_5 = ATgetFirst((ATermList) t);
              d_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_5;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATmakeAppl(sym__2, c_5, g_5);
              t = o_130(t);
              if(match_cons(t, sym__2))
                {
                  a_4 = ATgetArgument(t, 0);
                  h_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, a_4), h_4);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_5 = ATgetFirst((ATermList) t);
                  f_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, c_5, g_5);
              t = o_130(t);
              if(match_cons(t, sym__2))
                {
                  a_4 = ATgetArgument(t, 0);
                  {
                    ATerm r_14 = ATgetArgument(t, 1);
                    if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
                      {
                        b_4 = ATgetFirst((ATermList) r_14);
                        h_4 = (ATerm) ATgetNext((ATermList) r_14);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_5), e_5), h_4);
              t = h_5(t);
              if(match_cons(t, sym__2))
                {
                  ATerm s_14 = ATgetArgument(t, 0);
                  if(((ATgetType(s_14) == AT_LIST) && !(ATisEmpty(s_14))))
                    {
                      d_4 = ATgetFirst((ATermList) s_14);
                      j_4 = (ATerm) ATgetNext((ATermList) s_14);
                    }
                  else
                    _fail(t);
                  i_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm t_14 = t;
                int u_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_0 = NULL;
                    ATerm n_0 (ATerm t)
                    {
                      t = term_v_14;
                      return(t);
                    }
                    t = has_option_1_0(n_0, t);
                    t = b_4;
                    t = has_layout_0_0(t);
                    t = b_4;
                    t = layout2box_0_0(t);
                    s_0 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_14), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_4))), s_0), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_4))))), i_4);
                    ;
                    LocalPopChoice(u_14);
                  }
                else
                  {
                    t = t_14;
                    {
                      ATerm a_15 = t;
                      int b_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_0 = NULL;
                          ATerm c_15 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm o_0 (ATerm t)
                              {
                                t = term_v_14;
                                return(t);
                              }
                              t = has_option_1_0(o_0, t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = c_15;
                            }
                          t = b_4;
                          t = has_significant_layout_0_0(t);
                          t = b_4;
                          t = layout2box_0_0(t);
                          t_0 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(j_4), d_4), t_0), a_4), i_4);
                          ;
                          LocalPopChoice(b_15);
                        }
                      else
                        {
                          t = a_15;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(j_4), d_4), a_4), i_4);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = h_5(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,g_6 = NULL,p_10 = NULL,s_10 = NULL,w_10 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm i_6 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_6 = ATgetFirst((ATermList) t);
        {
          ATerm g_15 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm h_15 = ATgetFirst((ATermList) t);
        i_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = i_6;
    return(t);
  }
  t = _2_0(_id, p_0, t);
  {
    ATerm h_11 (ATerm t)
    {
      ATerm k_6 = NULL,r_6 = NULL,t_6 = NULL,z_6 = NULL;
      ATerm j_15 = t;
      int k_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_9 = NULL,m_9 = NULL,n_9 = NULL,y_9 = NULL,z_9 = NULL;
          if(match_cons(t, sym__2))
            {
              m_9 = ATgetArgument(t, 0);
              z_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_9;
          if(match_cons(t, sym_H_2))
            {
              n_9 = ATgetArgument(t, 0);
              y_9 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
              t = InsLayout_1_0(h_11, t);
              if(match_cons(t, sym__2))
                {
                  r_6 = ATgetArgument(t, 0);
                  t_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, n_9, r_6), t_6);
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  n_9 = ATgetArgument(t, 0);
                  y_9 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
                  t = InsLayout_1_0(h_11, t);
                  if(match_cons(t, sym__2))
                    {
                      r_6 = ATgetArgument(t, 0);
                      t_6 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, n_9, r_6), t_6);
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      n_9 = ATgetArgument(t, 0);
                      y_9 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
                      t = InsLayout_1_0(h_11, t);
                      if(match_cons(t, sym__2))
                        {
                          r_6 = ATgetArgument(t, 0);
                          t_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, n_9, r_6), t_6);
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          n_9 = ATgetArgument(t, 0);
                          y_9 = ATgetArgument(t, 1);
                          k_9 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, k_9, z_9);
                          t = InsLayout_1_0(h_11, t);
                          if(match_cons(t, sym__2))
                            {
                              r_6 = ATgetArgument(t, 0);
                              t_6 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, n_9, y_9, r_6), t_6);
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              n_9 = ATgetArgument(t, 0);
                              y_9 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
                              t = InsLayout_1_0(h_11, t);
                              if(match_cons(t, sym__2))
                                {
                                  r_6 = ATgetArgument(t, 0);
                                  t_6 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, n_9, r_6), t_6);
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  n_9 = ATgetArgument(t, 0);
                                  y_9 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym__2, n_9, z_9);
                                  t = InsLayout_1_0(h_11, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      k_6 = ATgetArgument(t, 0);
                                      {
                                        ATerm l_15 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
                                  t = InsLayout_1_0(h_11, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      r_6 = ATgetArgument(t, 0);
                                      z_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, k_6, r_6), z_6);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      n_9 = ATgetArgument(t, 0);
                                      y_9 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
                                      t = InsLayout_1_0(h_11, t);
                                      if(match_cons(t, sym__2))
                                        {
                                          r_6 = ATgetArgument(t, 0);
                                          t_6 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, n_9, r_6), t_6);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          n_9 = ATgetArgument(t, 0);
                                          y_9 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
                                          t = InsLayout_1_0(h_11, t);
                                          if(match_cons(t, sym__2))
                                            {
                                              r_6 = ATgetArgument(t, 0);
                                              t_6 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, n_9, r_6), t_6);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              n_9 = ATgetArgument(t, 0);
                                              y_9 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
                                              t = InsLayout_1_0(h_11, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  r_6 = ATgetArgument(t, 0);
                                                  t_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, n_9, r_6), t_6);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  n_9 = ATgetArgument(t, 0);
                                                  y_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, y_9, z_9);
                                              t = InsLayout_1_0(h_11, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  r_6 = ATgetArgument(t, 0);
                                                  t_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, n_9, r_6), t_6);
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
          LocalPopChoice(k_15);
        }
      else
        {
          t = j_15;
          {
            ATerm m_15 = t;
            int n_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_0 (ATerm t)
                {
                  t = Cons_2_0(_id, _id, t);
                  return(t);
                }
                t = _2_0(q_0, _id, t);
                t = InsLayout_1_0(h_11, t);
                ;
                LocalPopChoice(n_15);
              }
            else
              {
                t = m_15;
              }
          }
        }
      return(t);
    }
    t = h_11(t);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm u_0 (ATerm t)
        {
          ATerm d_10 = NULL;
          d_10 = t;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = d_10;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_15 = ATgetFirst((ATermList) t);
                  ATerm p_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_10;
            }
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, d_10);
          return(t);
        }
        t = try_1_0(u_0, t);
        return(t);
      }
      t = _2_0(r_0, _id, t);
      if(match_cons(t, sym__2))
        {
          e_6 = ATgetArgument(t, 0);
          {
            ATerm q_15 = ATgetArgument(t, 1);
            if(((ATgetType(q_15) == AT_LIST) && !(ATisEmpty(q_15))))
              {
                g_6 = ATgetFirst((ATermList) q_15);
                {
                  ATerm r_15 = (ATerm) ATgetNext((ATermList) q_15);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_6), e_6), not_null(d_6));
      {
        ATerm v_0 (ATerm t)
        {
          ATerm s_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_15 = t;
              if((PushChoice() == 0))
                {
                  t = layout_1_0(_id, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_15;
                }
              ;
              LocalPopChoice(t_15);
            }
          else
            {
              t = s_15;
              {
                ATerm v_15 = t;
                int w_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = layout_1_0(_id, t);
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = term_v_14;
                        return(t);
                      }
                      t = has_option_1_0(w_0, t);
                      t = has_layout_0_0(t);
                      t = layout2box_0_0(t);
                    }
                    ;
                    LocalPopChoice(w_15);
                  }
                else
                  {
                    t = v_15;
                    t = layout_1_0(_id, t);
                    {
                      ATerm x_15 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm x_0 (ATerm t)
                          {
                            t = term_v_14;
                            return(t);
                          }
                          t = has_option_1_0(x_0, t);
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
        t = filter_1_0(v_0, t);
        t = flat_list_0_0(t);
        w_10 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_10 = ATgetFirst((ATermList) t);
            s_10 = (ATerm) ATgetNext((ATermList) t);
            t = s_10;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                ATerm y_15 = t;
                int z_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_10;
                    ;
                    LocalPopChoice(z_15);
                  }
                else
                  {
                    t = y_15;
                    t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_14), w_10);
                  }
              }
            else
              {
                t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_14), w_10);
              }
          }
        else
          {
            t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_y_14), w_10);
          }
      }
    }
  }
  return(t);
}
ATerm layout_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,z_14 = NULL,e_15 = NULL,f_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym_layout_1))
    {
      z_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  b_14 = t;
  t = z_14;
  t = f_86(t);
  e_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, e_15), b_14);
  return(t);
}
ATerm collect_p__1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm r_16 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_16 = NULL;
        t = b_130(t);
        q_16 = t;
        t = (ATerm) ATinsert(ATempty, q_16);
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        {
          ATerm y_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3_0(y_0, conc_0_0, r_16, t);
        }
      }
    return(t);
  }
  t = r_16(t);
  return(t);
}
ATerm amb_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,w_16 = NULL,x_16 = NULL,z_16 = NULL;
  z_16 = t;
  if(match_cons(t, sym_amb_1))
    {
      w_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_16);
  t_16 = t;
  t = w_16;
  t = v_94(t);
  x_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, x_16), t_16);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  t = amb_1_0(_id, t);
  t = (ATerm) ATinsert(ATempty, term_c_16);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = Cons_2_0(z_0, flat_list_0_0, t);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            {
              ATerm h_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_17 = NULL,v_17 = NULL,a_18 = NULL;
                  ATerm a_1 (ATerm t)
                  {
                    ATerm b_18 = NULL;
                    b_18 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = b_18;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm j_16 = ATgetFirst((ATermList) t);
                            ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = b_18;
                      }
                    return(t);
                  }
                  t = Cons_2_0(a_1, _id, t);
                  u_17 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_17 = ATgetFirst((ATermList) t);
                      {
                        ATerm l_16 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = u_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm m_16 = ATgetFirst((ATermList) t);
                      a_18 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, v_17, a_18);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
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
  ATerm g_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      l_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
      {
        ATerm o_18 = NULL,p_18 = NULL;
        t = term_d_14;
        t = d_0(t);
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_18, o_18);
        t = index_0_0(t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_18, p_18);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm r_18 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          l_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_d_14;
      t = d_0(t);
      r_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_18, r_18);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = bottomup_1_0(g_102, t);
    return(t);
  }
  t = SRTS_all(b_1, t);
  t = g_102(t);
  return(t);
}
ATerm instantiate_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_18;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              t = u_18;
              return(t);
            }
            t = Instantiate_1_0(e_1, t);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            t = flat_list_0_0(t);
          }
        return(t);
      }
      t = try_1_0(d_1, t);
      return(t);
    }
    t = bottomup_1_0(c_1, t);
  }
  return(t);
}
ATerm filter_literals_0_0 (ATerm t)
{
  ATerm f_19 = NULL,h_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      {
        ATerm p_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        ATerm s_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg_1_0(_id, t);
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = s_16;
            {
              ATerm v_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Arg2_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(y_16);
                }
              else
                {
                  t = v_16;
                  t = S_1_0(_id, t);
                }
            }
          }
        return(t);
      }
      t = collect_p__1_0(g_1, t);
      return(t);
    }
    t = _2_0(f_1, _id, t);
    {
      ATerm v_20 (ATerm t)
      {
        ATerm k_19 = NULL,p_19 = NULL;
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = _2_0(h_1, i_1, t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            {
              ATerm a_21 (ATerm g_20, ATerm h_20, ATerm i_20, ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym__2, h_20, i_20);
                t = v_20(t);
                if(match_cons(t, sym__2))
                  {
                    k_19 = ATgetArgument(t, 0);
                    p_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_19), g_20), p_19);
                return(t);
              }
              ATerm j_20 = NULL,k_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,s_20 = NULL,u_20 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_20 = ATgetArgument(t, 0);
                  p_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_20;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_20 = ATgetFirst((ATermList) t);
                  o_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_20;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_20 = ATgetFirst((ATermList) t);
                  u_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_20;
              if(match_cons(t, sym_Arg_1))
                {
                  j_20 = ATgetArgument(t, 0);
                  {
                    ATerm c_17 = t;
                    int d_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, o_20, u_20);
                        t = v_20(t);
                        if(match_cons(t, sym__2))
                          {
                            k_19 = ATgetArgument(t, 0);
                            p_19 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_19), (ATerm) ATmakeAppl(sym_Arg_1, j_20)), (ATerm) ATinsert(CheckATermList(p_19), s_20));
                        ;
                        LocalPopChoice(d_17);
                      }
                    else
                      {
                        t = c_17;
                        t = a_21(n_20, o_20, u_20, t);
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      j_20 = ATgetArgument(t, 0);
                      k_20 = ATgetArgument(t, 1);
                      {
                        ATerm e_17 = t;
                        int f_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATmakeAppl(sym__2, o_20, u_20);
                            t = v_20(t);
                            if(match_cons(t, sym__2))
                              {
                                k_19 = ATgetArgument(t, 0);
                                p_19 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_19), (ATerm) ATmakeAppl(sym_Arg2_2, j_20, k_20)), (ATerm) ATinsert(CheckATermList(p_19), s_20));
                            ;
                            LocalPopChoice(f_17);
                          }
                        else
                          {
                            t = e_17;
                            t = a_21(n_20, o_20, u_20, t);
                          }
                      }
                    }
                  else
                    {
                      t = a_21(n_20, o_20, u_20, t);
                    }
                }
            }
          }
        return(t);
      }
      t = v_20(t);
      if(match_cons(t, sym__2))
        {
          ATerm g_17 = ATgetArgument(t, 0);
          h_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, f_19, h_19);
    }
  }
  return(t);
}
ATerm make_path_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      b_21 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_21, (ATerm) ATinsert(ATempty, c_21));
  t = conc_0_0(t);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm h_130 (ATerm), ATerm t)
{
  ATerm k_21 (ATerm t)
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
          ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
          g_21 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_21 = ATgetFirst((ATermList) t);
              i_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_21;
          {
            ATerm j_1 (ATerm t)
            {
              ATerm j_21 = NULL;
              t = term_d_14;
              t = h_130(t);
              j_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_21, (ATerm) ATinsert(ATempty, h_21));
              t = instantiate_0_0(t);
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              t = i_21;
              t = k_21(t);
              return(t);
            }
            t = Cons_2_0(j_1, k_1, t);
          }
        }
      }
    return(t);
  }
  t = k_21(t);
  return(t);
}
ATerm build_list_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__4))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
      n_21 = ATgetArgument(t, 2);
      o_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  t = make_path_0_0(t);
  p_21 = t;
  t = l_21;
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          q_21 = t;
          return(t);
        }
        t = iter_1_0(l_1, t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm m_1 (ATerm t)
          {
            q_21 = t;
            return(t);
          }
          t = iter_star_1_0(m_1, t);
        }
      }
    t = (ATerm) ATmakeAppl(sym__2, l_21, p_21);
    t = get_pp_entry_0_0(t);
    r_21 = t;
    t = m_21;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm s_21 = NULL;
        s_21 = t;
        t = (ATerm) ATmakeAppl(sym__4, not_null(q_21), s_21, p_21, term_l_17);
        t = symbol2abox_0_0(t);
        return(t);
      }
      t = map_1_0(n_1, t);
      {
        ATerm o_1 (ATerm t)
        {
          t = r_21;
          return(t);
        }
        t = instantiate_list_1_0(o_1, t);
      }
    }
  }
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  ATerm e_22 (ATerm t)
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_1 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(_id, p_1, t);
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              {
                ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
                y_21 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_21 = ATgetFirst((ATermList) t);
                    a_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_22;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_22 = ATgetFirst((ATermList) t);
                    c_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_21;
                {
                  ATerm q_1 (ATerm t)
                  {
                    ATerm d_22 = NULL;
                    t = term_d_14;
                    t = j_130(t);
                    d_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_22, (ATerm) ATinsert(ATinsert(ATempty, b_22), z_21));
                    t = instantiate_0_0(t);
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = c_22;
                    t = e_22(t);
                    return(t);
                  }
                  t = Cons_2_0(q_1, r_1, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = e_22(t);
  return(t);
}
ATerm BuildSepList_4_0 (ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_22 = NULL,m_22 = NULL;
        t = SSL_mod(i_22, (ATerm) ATmakeInt(2));
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = term_d_14;
        t = h_100(t);
        l_22 = t;
        t = term_d_14;
        t = i_100(t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym__4, l_22, j_22, m_22, term_s_17);
        t = symbol2abox_0_0(t);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm n_22 = NULL;
            n_22 = t;
            {
              ATerm t_17 = t;
              if((PushChoice() == 0))
                {
                  ATerm q_22 = NULL;
                  q_22 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = q_22;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm w_17 = ATgetFirst((ATermList) t);
                          ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = q_22;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_17;
                }
              t = (ATerm) ATinsert(ATempty, n_22);
            }
            return(t);
          }
          t = try_1_0(s_1, t);
        }
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        {
          ATerm t_22 = NULL,u_22 = NULL;
          t = term_d_14;
          t = g_100(t);
          t_22 = t;
          t = term_d_14;
          t = i_100(t);
          u_22 = t;
          t = (ATerm) ATmakeAppl(sym__4, t_22, j_22, u_22, term_l_17);
          t = symbol2abox_0_0(t);
          {
            ATerm t_1 (ATerm t)
            {
              ATerm v_22 = NULL;
              v_22 = t;
              {
                ATerm y_17 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_22 = NULL;
                    w_22 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = w_22;
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm z_17 = ATgetFirst((ATermList) t);
                            ATerm c_18 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = w_22;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_17;
                  }
                t = (ATerm) ATinsert(ATempty, v_22);
              }
              return(t);
            }
            t = try_1_0(t_1, t);
          }
        }
      }
  }
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  if(match_cons(t, sym__2))
    {
      z_22 = ATgetArgument(t, 0);
      {
        ATerm d_18 = ATgetArgument(t, 1);
        if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
          {
            a_23 = ATgetFirst((ATermList) d_18);
            b_23 = (ATerm) ATgetNext((ATermList) d_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_22, term_l_17);
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_22, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        t = SSL_addr(z_22, (ATerm) ATmakeInt(1));
      }
    c_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_22, a_23), (ATerm) ATmakeAppl(sym__2, c_23, b_23));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm d_23 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_109(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = a_110(t);
        t = _2_0(c_110, d_23, t);
        t = b_110(t);
      }
    return(t);
  }
  t = d_23(t);
  return(t);
}
ATerm nzip_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, e_23);
  {
    ATerm u_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm k_18 = ATgetArgument(t, 0);
          ATerm m_18 = ATgetArgument(t, 1);
          if(((ATgetType(m_18) != AT_LIST) || !(ATisEmpty(m_18))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm v_1 (ATerm t)
    {
      ATerm f_23 = NULL,g_23 = NULL;
      if(match_cons(t, sym__2))
        {
          f_23 = ATgetArgument(t, 0);
          g_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(g_23), f_23);
      return(t);
    }
    t = genzip_4_0(u_1, NZip2_0_0, v_1, l_110, t);
  }
  return(t);
}
ATerm build_sep_list_0_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  if(match_cons(t, sym__4))
    {
      h_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
      j_23 = ATgetArgument(t, 2);
      k_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_23, k_23);
  t = make_path_0_0(t);
  l_23 = t;
  t = h_23;
  {
    ATerm n_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          m_23 = t;
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          n_23 = t;
          return(t);
        }
        t = iter_sep_2_0(w_1, x_1, t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = n_18;
        {
          ATerm y_1 (ATerm t)
          {
            m_23 = t;
            return(t);
          }
          ATerm z_1 (ATerm t)
          {
            n_23 = t;
            return(t);
          }
          t = iter_star_sep_2_0(y_1, z_1, t);
        }
      }
    t = (ATerm) ATmakeAppl(sym__2, h_23, l_23);
    t = get_pp_entry_0_0(t);
    o_23 = t;
    t = i_23;
    {
      ATerm a_2 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          t = not_null(m_23);
          return(t);
        }
        ATerm c_2 (ATerm t)
        {
          t = not_null(n_23);
          return(t);
        }
        ATerm d_2 (ATerm t)
        {
          t = l_23;
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = k_23;
          return(t);
        }
        t = BuildSepList_4_0(b_2, c_2, d_2, e_2, t);
        return(t);
      }
      t = nzip_1_0(a_2, t);
      {
        ATerm f_2 (ATerm t)
        {
          t = o_23;
          return(t);
        }
        t = instantiate_sep_list_1_0(f_2, t);
      }
    }
  }
  return(t);
}
ATerm Ind2_0_0 (ATerm t)
{
  ATerm p_23 = NULL,r_23 = NULL,s_23 = NULL;
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            ATerm v_18 = ATgetFirst((ATermList) s_18);
            r_23 = (ATerm) ATgetNext((ATermList) s_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_23, term_s_17);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, p_23, term_l_17);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(p_23, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = SSL_subtr(p_23, (ATerm) ATmakeInt(1));
      }
    s_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_23, r_23);
  }
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = repeat_1_0(Ind2_0_0, t);
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(((ATgetType(y_18) != AT_INT) || (ATgetInt((ATermInt) y_18) != 1)))
        _fail(t);
      {
        ATerm z_18 = ATgetArgument(t, 1);
        if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
          {
            t_23 = ATgetFirst((ATermList) z_18);
            {
              ATerm a_19 = (ATerm) ATgetNext((ATermList) z_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_23;
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  i_30 = t;
  if(match_cons(t, sym__4))
    {
      j_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
      m_30 = ATgetArgument(t, 2);
      n_30 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = j_30;
  if(match_cons(t, sym_seq_1))
    {
      k_30 = ATgetArgument(t, 0);
      {
        ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
        t = l_30;
        if(match_cons(t, sym_appl_2))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            h_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
        t = make_path_0_0(t);
        s_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, k_30), s_30);
        t = get_pp_entry_0_0(t);
        t_30 = t;
        t = k_30;
        {
          ATerm l_2 (ATerm t)
          {
            ATerm c_19 = t;
            if((PushChoice() == 0))
              {
                t = lit_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_19;
              }
            return(t);
          }
          t = filter_1_0(l_2, t);
          u_30 = t;
          t = h_30;
          {
            ATerm m_2 (ATerm t)
            {
              ATerm d_19 = t;
              if((PushChoice() == 0))
                {
                  t = lit_1_0(_id, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = d_19;
                }
              return(t);
            }
            t = filter_1_0(m_2, t);
            v_30 = t;
            t = (ATerm) ATmakeAppl(sym__4, u_30, v_30, s_30, term_l_17);
            t = seq2abox_0_0(t);
            w_30 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_30, w_30);
            t = instantiate_0_0(t);
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          k_30 = ATgetArgument(t, 0);
          d_30 = ATgetArgument(t, 1);
          {
            ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
            t = make_path_0_0(t);
            k_4 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, k_30, d_30), l_30, k_4, term_l_17);
            {
              ATerm u_11 (ATerm t)
              {
                ATerm v_11 (ATerm s_4, ATerm t_4, ATerm u_4, ATerm k_5, ATerm l_5, ATerm m_5, ATerm n_5, ATerm o_5, ATerm p_5, ATerm q_5, ATerm t)
                {
                  ATerm y_5 = NULL;
                  t = k_5;
                  if((s_4 != t))
                    {
                      _fail(t);
                    }
                  t = l_5;
                  if((t_4 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym__2, p_5, term_l_17);
                  {
                    ATerm e_19 = t;
                    int g_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_addi(p_5, (ATerm) ATmakeInt(1));
                        ;
                        LocalPopChoice(g_19);
                      }
                    else
                      {
                        t = e_19;
                        t = SSL_addr(p_5, (ATerm) ATmakeInt(1));
                      }
                    y_5 = t;
                    t = (ATerm) ATmakeAppl(sym__4, t_4, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, u_4), t_4, m_5), n_5), o_5, y_5);
                    t = u_11(t);
                  }
                  return(t);
                }
                ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,f_6 = NULL,h_6 = NULL,l_6 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,s_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,b_7 = NULL,c_7 = NULL;
                q_6 = t;
                if(match_cons(t, sym__4))
                  {
                    s_6 = ATgetArgument(t, 0);
                    u_6 = ATgetArgument(t, 1);
                    b_7 = ATgetArgument(t, 2);
                    c_7 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = u_6;
                if(match_cons(t, sym_appl_2))
                  {
                    v_6 = ATgetArgument(t, 0);
                    w_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_6;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_6 = ATgetFirst((ATermList) t);
                    y_6 = (ATerm) ATgetNext((ATermList) t);
                    t = y_6;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = v_6;
                        if(match_cons(t, sym_prod_3))
                          {
                            b_6 = ATgetArgument(t, 0);
                            h_6 = ATgetArgument(t, 1);
                            p_6 = ATgetArgument(t, 2);
                            t = h_6;
                            if(match_cons(t, sym_alt_2))
                              {
                                l_6 = ATgetArgument(t, 0);
                                n_6 = ATgetArgument(t, 1);
                                t = b_6;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    c_6 = ATgetFirst((ATermList) t);
                                    f_6 = (ATerm) ATgetNext((ATermList) t);
                                    t = f_6;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = s_6;
                                        if(match_cons(t, sym_alt_2))
                                          {
                                            z_5 = ATgetArgument(t, 0);
                                            a_6 = ATgetArgument(t, 1);
                                            {
                                              ATerm i_19 = t;
                                              int j_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = c_6;
                                                  if((z_5 != t))
                                                    {
                                                      _fail(t);
                                                    }
                                                  t = l_6;
                                                  if((z_5 != t))
                                                    {
                                                      _fail(t);
                                                    }
                                                  t = n_6;
                                                  if((a_6 != t))
                                                    {
                                                      _fail(t);
                                                    }
                                                  t = (ATerm) ATmakeAppl(sym__4, z_5, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_5), z_5, p_6), w_6), b_7, c_7);
                                                  t = u_11(t);
                                                  ;
                                                  LocalPopChoice(j_19);
                                                }
                                              else
                                                {
                                                  t = i_19;
                                                  {
                                                    ATerm l_19 = t;
                                                    int m_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = v_11(z_5, a_6, c_6, l_6, n_6, p_6, w_6, b_7, c_7, q_6, t);
                                                        ;
                                                        LocalPopChoice(m_19);
                                                      }
                                                    else
                                                      {
                                                        t = l_19;
                                                        {
                                                          ATerm n_8 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, k_30, d_30), b_7);
                                                          t = get_pp_entry_0_0(t);
                                                          l_4 = t;
                                                          t = (ATerm) ATmakeAppl(sym__4, s_6, x_6, b_7, term_l_17);
                                                          t = symbol2abox_0_0(t);
                                                          m_4 = t;
                                                          t = (ATerm) ATmakeAppl(sym__2, c_7, l_4);
                                                          t = index_0_0(t);
                                                          n_8 = t;
                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_8), (ATerm) ATinsert(ATempty, m_4));
                                                          t = instantiate_0_0(t);
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                        else
                                          {
                                            ATerm a_9 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, k_30, d_30), b_7);
                                            t = get_pp_entry_0_0(t);
                                            l_4 = t;
                                            t = (ATerm) ATmakeAppl(sym__4, s_6, x_6, b_7, term_l_17);
                                            t = symbol2abox_0_0(t);
                                            m_4 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, c_7, l_4);
                                            t = index_0_0(t);
                                            a_9 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, a_9), (ATerm) ATinsert(ATempty, m_4));
                                            t = instantiate_0_0(t);
                                          }
                                      }
                                    else
                                      {
                                        ATerm p_9 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, k_30, d_30), b_7);
                                        t = get_pp_entry_0_0(t);
                                        l_4 = t;
                                        t = (ATerm) ATmakeAppl(sym__4, s_6, x_6, b_7, term_l_17);
                                        t = symbol2abox_0_0(t);
                                        m_4 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, c_7, l_4);
                                        t = index_0_0(t);
                                        p_9 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, p_9), (ATerm) ATinsert(ATempty, m_4));
                                        t = instantiate_0_0(t);
                                      }
                                  }
                                else
                                  {
                                    ATerm x_9 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, k_30, d_30), b_7);
                                    t = get_pp_entry_0_0(t);
                                    l_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, s_6, x_6, b_7, term_l_17);
                                    t = symbol2abox_0_0(t);
                                    m_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, c_7, l_4);
                                    t = index_0_0(t);
                                    x_9 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, x_9), (ATerm) ATinsert(ATempty, m_4));
                                    t = instantiate_0_0(t);
                                  }
                              }
                            else
                              {
                                ATerm k_10 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, k_30, d_30), b_7);
                                t = get_pp_entry_0_0(t);
                                l_4 = t;
                                t = (ATerm) ATmakeAppl(sym__4, s_6, x_6, b_7, term_l_17);
                                t = symbol2abox_0_0(t);
                                m_4 = t;
                                t = (ATerm) ATmakeAppl(sym__2, c_7, l_4);
                                t = index_0_0(t);
                                k_10 = t;
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, k_10), (ATerm) ATinsert(ATempty, m_4));
                                t = instantiate_0_0(t);
                              }
                          }
                        else
                          {
                            ATerm v_10 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, k_30, d_30), b_7);
                            t = get_pp_entry_0_0(t);
                            l_4 = t;
                            t = (ATerm) ATmakeAppl(sym__4, s_6, x_6, b_7, term_l_17);
                            t = symbol2abox_0_0(t);
                            m_4 = t;
                            t = (ATerm) ATmakeAppl(sym__2, c_7, l_4);
                            t = index_0_0(t);
                            v_10 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, v_10), (ATerm) ATinsert(ATempty, m_4));
                            t = instantiate_0_0(t);
                          }
                      }
                    else
                      {
                        t = v_6;
                        if(match_cons(t, sym_prod_3))
                          {
                            b_6 = ATgetArgument(t, 0);
                            h_6 = ATgetArgument(t, 1);
                            p_6 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = s_6;
                        if(match_cons(t, sym_alt_2))
                          {
                            z_5 = ATgetArgument(t, 0);
                            a_6 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = b_6;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            c_6 = ATgetFirst((ATermList) t);
                            f_6 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = f_6;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = h_6;
                        if(match_cons(t, sym_alt_2))
                          {
                            l_6 = ATgetArgument(t, 0);
                            n_6 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm n_19 = t;
                          int o_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = c_6;
                              if((z_5 != t))
                                {
                                  _fail(t);
                                }
                              t = l_6;
                              if((z_5 != t))
                                {
                                  _fail(t);
                                }
                              t = n_6;
                              if((a_6 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym__4, z_5, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_5), z_5, p_6), w_6), b_7, c_7);
                              t = u_11(t);
                              ;
                              LocalPopChoice(o_19);
                            }
                          else
                            {
                              t = n_19;
                              t = v_11(z_5, a_6, c_6, l_6, n_6, p_6, w_6, b_7, c_7, q_6, t);
                            }
                        }
                      }
                  }
                else
                  {
                    t = v_6;
                    if(match_cons(t, sym_prod_3))
                      {
                        b_6 = ATgetArgument(t, 0);
                        h_6 = ATgetArgument(t, 1);
                        p_6 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = s_6;
                    if(match_cons(t, sym_alt_2))
                      {
                        z_5 = ATgetArgument(t, 0);
                        a_6 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = b_6;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        c_6 = ATgetFirst((ATermList) t);
                        f_6 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = f_6;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = h_6;
                    if(match_cons(t, sym_alt_2))
                      {
                        l_6 = ATgetArgument(t, 0);
                        n_6 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm q_19 = t;
                      int r_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_6;
                          if((z_5 != t))
                            {
                              _fail(t);
                            }
                          t = l_6;
                          if((z_5 != t))
                            {
                              _fail(t);
                            }
                          t = n_6;
                          if((a_6 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym__4, z_5, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_5), z_5, p_6), w_6), b_7, c_7);
                          t = u_11(t);
                          ;
                          LocalPopChoice(r_19);
                        }
                      else
                        {
                          t = q_19;
                          t = v_11(z_5, a_6, c_6, l_6, n_6, p_6, w_6, b_7, c_7, q_6, t);
                        }
                    }
                  }
                return(t);
              }
              t = u_11(t);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              k_30 = ATgetArgument(t, 0);
              d_30 = ATgetArgument(t, 1);
              t = i_30;
              t = build_sep_list_0_0(t);
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  k_30 = ATgetArgument(t, 0);
                  d_30 = ATgetArgument(t, 1);
                  t = i_30;
                  t = build_sep_list_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      k_30 = ATgetArgument(t, 0);
                      t = i_30;
                      t = build_list_0_0(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          k_30 = ATgetArgument(t, 0);
                          t = i_30;
                          t = build_list_0_0(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              k_30 = ATgetArgument(t, 0);
                              t = l_30;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm s_19 = ATgetArgument(t, 0);
                                  h_30 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = h_30;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  e_30 = ATgetFirst((ATermList) t);
                                  f_30 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
                                    t = f_30;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
                                    t = make_path_0_0(t);
                                    t_31 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, k_30), t_31);
                                    t = get_pp_entry_0_0(t);
                                    u_31 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, k_30, e_30, t_31, term_l_17);
                                    t = symbol2abox_0_0(t);
                                    v_31 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, u_31, (ATerm) ATinsert(ATempty, v_31));
                                    t = filter_literals_0_0(t);
                                    t = instantiate_0_0(t);
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
                              ATerm t_19 = t;
                              int u_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm v_19 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(u_19);
                                  {
                                    ATerm w_19 = t;
                                    int x_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = l_30;
                                        {
                                          ATerm y_19 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm z_11 = NULL;
                                              z_11 = t;
                                              t = SSL_is_string(z_11);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = y_19;
                                            }
                                          t = l_30;
                                          t = appl2abox_0_0(t);
                                        }
                                        ;
                                        LocalPopChoice(x_19);
                                      }
                                    else
                                      {
                                        t = w_19;
                                        t = SSL_is_string(l_30);
                                        t = (ATerm) ATmakeAppl(sym_S_1, l_30);
                                      }
                                  }
                                }
                              else
                                {
                                  t = t_19;
                                  {
                                    ATerm z_19 = t;
                                    int a_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm b_20 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(a_20);
                                        {
                                          ATerm g_12 = NULL;
                                          t = SSL_implode_string((ATerm) ATinsert(ATempty, l_30));
                                          g_12 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, g_12);
                                        }
                                      }
                                    else
                                      {
                                        t = z_19;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            k_30 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, k_30);
                                      }
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
  ATerm v_35 (ATerm l_32, ATerm m_32, ATerm n_32, ATerm o_32, ATerm p_32, ATerm q_32, ATerm r_32, ATerm t)
  {
    ATerm x_32 = NULL,y_32 = NULL,a_33 = NULL;
    t = (ATerm) ATmakeAppl(sym__4, l_32, n_32, p_32, q_32);
    t = symbol2abox_0_0(t);
    x_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_32, term_l_17);
    {
      ATerm c_20 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(q_32, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(d_20);
        }
      else
        {
          t = c_20;
          t = SSL_addr(q_32, (ATerm) ATmakeInt(1));
        }
      a_33 = t;
      t = (ATerm) ATmakeAppl(sym__4, m_32, o_32, p_32, a_33);
      t = seq2abox_0_0(t);
      y_32 = t;
      t = (ATerm) ATinsert(CheckATermList(y_32), x_32);
    }
    return(t);
  }
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym__4))
    {
      e_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      k_33 = ATgetArgument(t, 2);
      l_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = e_33;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_33;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_33 = ATgetFirst((ATermList) t);
          g_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_33 = ATgetFirst((ATermList) t);
          j_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_33;
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm l_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(f_20);
            t = f_33;
            {
              ATerm q_20 = t;
              int r_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm t_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_20);
                  {
                    ATerm w_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, g_33, j_33, k_33, l_33);
                        t = seq2abox_0_0(t);
                        ;
                        LocalPopChoice(x_20);
                      }
                    else
                      {
                        t = w_20;
                        t = v_35(f_33, g_33, i_33, j_33, k_33, l_33, d_33, t);
                      }
                  }
                }
              else
                {
                  t = q_20;
                  t = v_35(f_33, g_33, i_33, j_33, k_33, l_33, d_33, t);
                }
            }
          }
        else
          {
            t = e_20;
            t = f_33;
            t = v_35(f_33, g_33, i_33, j_33, k_33, l_33, d_33, t);
          }
      }
    }
  return(t);
}
ATerm lit_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm w_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_lit_1))
    {
      y_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_36);
  w_35 = t;
  t = y_35;
  t = a_94(t);
  z_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, z_35), w_35);
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm i_36 = NULL,k_36 = NULL,l_36 = NULL;
  i_36 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), i_36);
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_36;
  t = path_to_string_0_0(t);
  {
    ATerm n_2 (ATerm t)
    {
      t = term_y_20;
      return(t);
    }
    t = notify_1_0(n_2, t);
    t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
  }
  return(t);
}
ATerm StoreEntryIfNotExists_0_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      n_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_20 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_36 = NULL;
        t = n_36;
        t = mk_key_0_0(t);
        o_36 = t;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), o_36);
        t = (ATerm) ATmakeAppl(sym_PP_Entry_2, n_36, m_36);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = z_20;
        t = StoreEntry_0_0(t);
      }
  }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm f_129 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,b_37 = NULL,g_37 = NULL,n_37 = NULL;
  t = number_nonterminals_0_0(t);
  w_36 = t;
  t = make_0_0(t);
  b_37 = t;
  t = w_36;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm q_2 (ATerm t)
      {
        ATerm p_37 = NULL;
        t = term_d_14;
        t = f_129(t);
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_37, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(q_2, t);
      return(t);
    }
    t = map_1_0(p_2, t);
    t = concat_0_0(t);
    g_37 = t;
    t = term_d_14;
    t = f_129(t);
    n_37 = t;
    t = (ATerm) ATinsert(CheckATermList(g_37), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, n_37), b_37));
  }
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm r_37 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_38 = NULL,b_39 = NULL,e_39 = NULL,k_39 = NULL;
      ATerm t_21 = t;
      int u_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              y_38 = ATgetArgument(t, 0);
              {
                ATerm v_21 = ATgetArgument(t, 1);
              }
              e_39 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(u_21);
          t = e_39;
          {
            ATerm r_2 (ATerm t)
            {
              if(match_cons(t, sym_cons_1))
                {
                  r_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(r_2, t);
            t = y_38;
            {
              ATerm w_2 (ATerm t)
              {
                t = not_null(r_37);
                return(t);
              }
              t = symbols2pp_entries_1_0(w_2, t);
            }
          }
        }
      else
        {
          t = t_21;
          {
            ATerm u_39 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                y_38 = ATgetArgument(t, 0);
                b_39 = ATgetArgument(t, 1);
                e_39 = ATgetArgument(t, 2);
                k_39 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_22)), b_39), (ATerm) ATinsert(ATinsert(ATempty, term_x_21), (ATerm) ATmakeAppl(sym_lit_1, y_38)));
            t = concat_0_0(t);
            u_39 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, u_39, e_39, k_39);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm x_2 (ATerm t)
        {
          ATerm h_22 = t;
          if((PushChoice() == 0))
            {
              ATerm y_2 (ATerm t)
              {
                t = term_k_22;
                return(t);
              }
              t = has_option_1_0(y_2, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_22;
            }
          {
            ATerm z_2 (ATerm t)
            {
              t = term_o_22;
              return(t);
            }
            t = debug_1_0(z_2, t);
          }
          return(t);
        }
        t = try_1_0(x_2, t);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,u_43 = NULL,v_43 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_43;
  if(match_cons(t, sym_alt_2))
    {
      r_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
      {
        ATerm p_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_44 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, r_43, s_43);
            t = flat_alt_0_0(t);
            c_44 = t;
            t = (ATerm) ATinsert(CheckATermList(c_44), u_43);
            ;
            LocalPopChoice(r_22);
          }
        else
          {
            t = p_22;
            t = (ATerm) ATinsert(ATinsert(ATempty, v_43), u_43);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, v_43), u_43);
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = s_22;
      {
        ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,m_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_40 = ATgetFirst((ATermList) t);
            g_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_40;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_40 = ATgetFirst((ATermList) t);
            i_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_40;
        t = pair_0_0(t);
        m_40 = t;
        t = (ATerm) ATinsert(CheckATermList(m_40), (ATerm) ATmakeAppl(sym__2, f_40, h_40));
      }
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  ATerm y_22 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_40 = NULL;
      t = reverse_0_0(t);
      {
        ATerm b_3 (ATerm t)
        {
          ATerm b_41 = NULL;
          ATerm g_3 (ATerm t)
          {
            ATerm u_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1_0(_id, t);
                ;
                LocalPopChoice(v_23);
              }
            else
              {
                t = u_23;
                {
                  ATerm w_23 = t;
                  int x_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1_0(_id, t);
                      ;
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
                            t = iter_sep_2_0(_id, _id, t);
                            ;
                            LocalPopChoice(z_23);
                          }
                        else
                          {
                            t = y_23;
                            t = iter_star_sep_2_0(_id, _id, t);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2_0(_id, g_3, t);
          if(match_cons(t, sym_lit_1))
            {
              b_41 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_24, (ATerm) ATmakeAppl(sym_S_1, b_41));
            }
          else
            {
              if(match_cons(t, sym__2))
                {
                  b_41 = ATgetArgument(t, 0);
                  {
                    ATerm b_24 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Arg_1, b_41);
            }
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          ATerm h_3 (ATerm t)
          {
            ATerm g_41 = NULL;
            t = lit_1_0(_id, t);
            if(match_cons(t, sym_lit_1))
              {
                g_41 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_24, (ATerm) ATmakeAppl(sym_S_1, g_41));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    g_41 = ATgetArgument(t, 0);
                    {
                      ATerm c_24 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, g_41);
              }
            return(t);
          }
          t = map_1_0(h_3, t);
          return(t);
        }
        t = Cons_2_0(b_3, e_3, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_40 = ATgetFirst((ATermList) t);
            u_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_24 = t;
          if((PushChoice() == 0))
            {
              ATerm i_3 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(_id, i_3, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_24;
            }
          t = u_40;
          t = reverse_0_0(t);
          z_40 = t;
          t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_40), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, z_40)));
        }
      }
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = y_22;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_0_0(t);
            {
              ATerm n_3 (ATerm t)
              {
                ATerm s_41 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    s_41 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_24, (ATerm) ATmakeAppl(sym_S_1, s_41));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        s_41 = ATgetArgument(t, 0);
                        {
                          ATerm g_24 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, s_41);
                  }
                y_40 = t;
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                ATerm h_24 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_24;
                  }
                t = reverse_0_0(t);
                w_40 = t;
                return(t);
              }
              t = Cons_2_0(n_3, o_3, t);
              t = not_null(w_40);
              t = pair_0_0(t);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm w_41 = NULL,x_41 = NULL;
                  ATerm u_3 (ATerm t)
                  {
                    ATerm z_41 = NULL;
                    t = lit_1_0(_id, t);
                    if(match_cons(t, sym_lit_1))
                      {
                        z_41 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_24, (ATerm) ATmakeAppl(sym_S_1, z_41));
                      }
                    else
                      {
                        if(match_cons(t, sym__2))
                          {
                            z_41 = ATgetArgument(t, 0);
                            {
                              ATerm i_24 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Arg_1, z_41);
                      }
                    w_41 = t;
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    ATerm g_42 = NULL;
                    ATerm w_3 (ATerm t)
                    {
                      ATerm j_24 = t;
                      int k_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = iter_1_0(_id, t);
                          ;
                          LocalPopChoice(k_24);
                        }
                      else
                        {
                          t = j_24;
                          t = iter_star_1_0(_id, t);
                        }
                      return(t);
                    }
                    t = _2_0(_id, w_3, t);
                    if(match_cons(t, sym_lit_1))
                      {
                        g_42 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_24, (ATerm) ATmakeAppl(sym_S_1, g_42));
                      }
                    else
                      {
                        if(match_cons(t, sym__2))
                          {
                            g_42 = ATgetArgument(t, 0);
                            {
                              ATerm l_24 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Arg_1, g_42);
                      }
                    x_41 = t;
                    return(t);
                  }
                  t = _2_0(u_3, v_3, t);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_o_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_41)), not_null(w_41)));
                  return(t);
                }
                t = map_1_0(t_3, t);
                x_40 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_40)), x_40));
              }
            }
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            {
              ATerm x_3 (ATerm t)
              {
                ATerm l_42 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    l_42 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_a_24, (ATerm) ATmakeAppl(sym_S_1, l_42));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        l_42 = ATgetArgument(t, 0);
                        {
                          ATerm p_24 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, l_42);
                  }
                return(t);
              }
              t = map_1_0(x_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm q_24 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm number_node_1_0 (ATerm j_129 (ATerm), ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = term_l_17;
    return(t);
  }
  t = split_2_0(y_3, _id, t);
  {
    ATerm h_43 (ATerm t)
    {
      ATerm r_24 = t;
      int s_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_3 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = _2_0(_id, z_3, t);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(s_24);
        }
      else
        {
          t = r_24;
          {
            ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
            b_43 = t;
            if(match_cons(t, sym__2))
              {
                c_43 = ATgetArgument(t, 0);
                d_43 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_43;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_43 = ATgetFirst((ATermList) t);
                f_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm t_24 = t;
              int u_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_12 = NULL,m_12 = NULL;
                  t = e_43;
                  t = j_129(t);
                  t = (ATerm) ATmakeAppl(sym__2, c_43, term_l_17);
                  {
                    ATerm v_24 = t;
                    int w_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_addi(c_43, (ATerm) ATmakeInt(1));
                        ;
                        LocalPopChoice(w_24);
                      }
                    else
                      {
                        t = v_24;
                        t = SSL_addr(c_43, (ATerm) ATmakeInt(1));
                      }
                    l_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_12, f_43);
                    t = h_43(t);
                    m_12 = t;
                    t = (ATerm) ATinsert(CheckATermList(m_12), (ATerm) ATmakeAppl(sym__2, c_43, e_43));
                  }
                  ;
                  LocalPopChoice(u_24);
                }
              else
                {
                  t = t_24;
                  {
                    ATerm g_43 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, c_43, f_43);
                    t = h_43(t);
                    g_43 = t;
                    t = (ATerm) ATinsert(CheckATermList(g_43), e_43);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = h_43(t);
  }
  return(t);
}
ATerm no_labels_0_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm j_43 = NULL;
      if(match_cons(t, sym_label_2))
        {
          ATerm x_24 = ATgetArgument(t, 0);
          j_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_43;
      return(t);
    }
    t = try_1_0(e_4, t);
    return(t);
  }
  t = map_1_0(c_4, t);
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = no_labels_0_0(t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      ATerm l_43 = NULL;
      l_43 = t;
      {
        ATerm y_24 = t;
        if((PushChoice() == 0))
          {
            ATerm m_43 = NULL;
            m_43 = t;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = m_43;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm z_24 = ATgetFirst((ATermList) t);
                    ATerm a_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_43;
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_24;
          }
        t = (ATerm) ATinsert(ATempty, l_43);
      }
      return(t);
    }
    t = try_1_0(g_4, t);
    return(t);
  }
  t = map_1_0(f_4, t);
  t = concat_0_0(t);
  return(t);
}
ATerm symbol2abox_1_0 (ATerm g_129 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = term_d_14;
    t = g_129(t);
    return(t);
  }
  t = split_2_0(n_4, _id, t);
  {
    ATerm y_46 (ATerm t)
    {
      ATerm a_47 (ATerm o_45, ATerm p_45, ATerm q_45, ATerm r_45, ATerm s_45, ATerm t)
      {
        ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
        t = SSL_explode_term(r_45);
        if(match_cons(t, sym__2))
          {
            x_45 = ATgetArgument(t, 0);
            y_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, q_45, x_45)));
        t = conc_0_0(t);
        z_45 = t;
        t = y_45;
        t = argument_list_0_0(t);
        t = number_nonterminals_0_0(t);
        a_46 = t;
        t = make_0_0(t);
        b_46 = t;
        t = a_46;
        {
          ATerm o_4 (ATerm t)
          {
            ATerm d_46 = NULL;
            d_46 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_45, z_45), d_46);
            t = y_46(t);
            return(t);
          }
          t = map_1_0(o_4, t);
          t = concat_0_0(t);
          c_46 = t;
          t = (ATerm) ATinsert(CheckATermList(c_46), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, o_45, z_45), b_46));
        }
        return(t);
      }
      ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
      i_46 = t;
      if(match_cons(t, sym__2))
        {
          j_46 = ATgetArgument(t, 0);
          m_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_46;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm d_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(c_25);
            t = (ATerm) ATempty;
          }
        else
          {
            t = b_25;
            if(match_cons(t, sym__2))
              {
                n_46 = ATgetArgument(t, 0);
                o_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_46;
            {
              ATerm e_25 = t;
              int f_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_sort_1))
                    {
                      ATerm g_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_25);
                  t = j_46;
                  if(match_cons(t, sym__2))
                    {
                      k_46 = ATgetArgument(t, 0);
                      l_46 = ATgetArgument(t, 1);
                      {
                        ATerm h_25 = t;
                        int i_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(i_25);
                          }
                        else
                          {
                            t = h_25;
                            t = a_47(k_46, l_46, n_46, o_46, i_46, t);
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
                  t = e_25;
                  {
                    ATerm j_25 = t;
                    int k_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_char_class_1))
                          {
                            ATerm l_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_25);
                        t = j_46;
                        if(match_cons(t, sym__2))
                          {
                            k_46 = ATgetArgument(t, 0);
                            l_46 = ATgetArgument(t, 1);
                            {
                              ATerm m_25 = t;
                              int n_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATempty;
                                  ;
                                  LocalPopChoice(n_25);
                                }
                              else
                                {
                                  t = m_25;
                                  t = a_47(k_46, l_46, n_46, o_46, i_46, t);
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
                        t = j_25;
                        if(match_cons(t, sym_alt_2))
                          {
                            h_46 = ATgetArgument(t, 0);
                            e_46 = ATgetArgument(t, 1);
                            t = j_46;
                            if(match_cons(t, sym__2))
                              {
                                k_46 = ATgetArgument(t, 0);
                                l_46 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = e_46;
                            if(match_cons(t, sym_alt_2))
                              {
                                f_46 = ATgetArgument(t, 0);
                                g_46 = ATgetArgument(t, 1);
                                {
                                  ATerm o_25 = t;
                                  int p_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm b_13 = NULL,c_13 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_alt_2, h_46, (ATerm) ATmakeAppl(sym_alt_2, f_46, g_46));
                                      t = flat_alt_0_0(t);
                                      b_13 = t;
                                      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), b_13);
                                      c_13 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_46, l_46), (ATerm) ATmakeAppl(sym__2, n_46, c_13));
                                      t = y_46(t);
                                      {
                                        ATerm p_4 (ATerm t)
                                        {
                                          ATerm q_4 (ATerm t)
                                          {
                                            ATerm r_4 (ATerm t)
                                            {
                                              t = Arg_1_0(_id, t);
                                              t = term_q_25;
                                              return(t);
                                            }
                                            t = try_1_0(r_4, t);
                                            return(t);
                                          }
                                          t = topdown_1_0(q_4, t);
                                          return(t);
                                        }
                                        t = Cons_2_0(p_4, _id, t);
                                      }
                                      ;
                                      LocalPopChoice(p_25);
                                    }
                                  else
                                    {
                                      t = o_25;
                                      t = a_47(k_46, l_46, n_46, o_46, i_46, t);
                                    }
                                }
                              }
                            else
                              {
                                t = a_47(k_46, l_46, n_46, o_46, i_46, t);
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_bracket_symbol_1))
                              {
                                h_46 = ATgetArgument(t, 0);
                                t = j_46;
                                if(match_cons(t, sym__2))
                                  {
                                    k_46 = ATgetArgument(t, 0);
                                    l_46 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm r_25 = t;
                                  int s_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_46, l_46), (ATerm) ATmakeAppl(sym__2, n_46, h_46));
                                      t = y_46(t);
                                      ;
                                      LocalPopChoice(s_25);
                                    }
                                  else
                                    {
                                      t = r_25;
                                      t = a_47(k_46, l_46, n_46, o_46, i_46, t);
                                    }
                                }
                              }
                            else
                              {
                                t = j_46;
                                if(match_cons(t, sym__2))
                                  {
                                    k_46 = ATgetArgument(t, 0);
                                    l_46 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = a_47(k_46, l_46, n_46, o_46, i_46, t);
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
    t = y_46(t);
  }
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm r_48 (ATerm i_47, ATerm j_47, ATerm k_47, ATerm t)
  {
    ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
    t = k_47;
    {
      ATerm t_25 = t;
      int u_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_13 = NULL,g_13 = NULL;
          t = j_47;
          t = pp_table_get_0_0(t);
          f_13 = t;
          t = SSL_explode_term(f_13);
          if(match_cons(t, sym__2))
            {
              ATerm v_25 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_25) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm w_25 = ATgetArgument(t, 1);
                if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
                  {
                    ATerm x_25 = ATgetFirst((ATermList) w_25);
                    ATerm y_25 = (ATerm) ATgetNext((ATermList) w_25);
                    if(((ATgetType(y_25) == AT_LIST) && !(ATisEmpty(y_25))))
                      {
                        g_13 = ATgetFirst((ATermList) y_25);
                        {
                          ATerm z_25 = (ATerm) ATgetNext((ATermList) y_25);
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
          t = g_13;
          ;
          LocalPopChoice(u_25);
        }
      else
        {
          t = t_25;
          {
            ATerm j_13 = NULL,k_13 = NULL,q_47 = NULL,r_47 = NULL,w_47 = NULL,y_47 = NULL,n_13 = NULL,o_13 = NULL;
            t = j_47;
            t = reverse_0_0(t);
            {
              ATerm v_4 (ATerm t)
              {
                o_47 = t;
                return(t);
              }
              ATerm w_4 (ATerm t)
              {
                t = reverse_0_0(t);
                n_47 = t;
                return(t);
              }
              t = Cons_2_0(v_4, w_4, t);
              t = not_null(n_47);
              t = pp_table_get_0_0(t);
              j_13 = t;
              t = SSL_explode_term(j_13);
              if(match_cons(t, sym__2))
                {
                  ATerm a_26 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_26) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_26 = ATgetArgument(t, 1);
                    if(((ATgetType(b_26) == AT_LIST) && !(ATisEmpty(b_26))))
                      {
                        k_13 = ATgetFirst((ATermList) b_26);
                        {
                          ATerm c_26 = (ATerm) ATgetNext((ATermList) b_26);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = k_13;
              if(match_cons(t, sym_Path_2))
                {
                  y_47 = ATgetArgument(t, 0);
                  q_47 = ATgetArgument(t, 1);
                  t = q_47;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_47 = ATgetFirst((ATermList) t);
                      w_47 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = w_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, y_47, (ATerm) ATinsert(ATempty, r_47));
                }
              else
                {
                  if(match_cons(t, sym_Path1_1))
                    {
                      y_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, y_47, (ATerm) ATempty);
                }
              p_47 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), i_47);
              {
                ATerm x_4 (ATerm t)
                {
                  t = p_47;
                  return(t);
                }
                t = symbol2abox_1_0(x_4, t);
                t = map_1_0(StoreEntryIfNotExists_0_0, t);
                t = j_47;
                t = pp_table_get_0_0(t);
                n_13 = t;
                t = SSL_explode_term(n_13);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_26 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm e_26 = ATgetArgument(t, 1);
                      if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
                        {
                          ATerm f_26 = ATgetFirst((ATermList) e_26);
                          ATerm g_26 = (ATerm) ATgetNext((ATermList) e_26);
                          if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
                            {
                              o_13 = ATgetFirst((ATermList) g_26);
                              {
                                ATerm h_26 = (ATerm) ATgetNext((ATermList) g_26);
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
                t = o_13;
              }
            }
          }
        }
    }
    return(t);
  }
  ATerm s_48 (ATerm c_48, ATerm d_48, ATerm e_48, ATerm f_48, ATerm g_48, ATerm t)
  {
    t = g_48;
    {
      ATerm i_26 = t;
      int j_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_13 = NULL,s_13 = NULL;
          t = f_48;
          t = pp_table_get_0_0(t);
          r_13 = t;
          t = SSL_explode_term(r_13);
          if(match_cons(t, sym__2))
            {
              ATerm k_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_26) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm l_26 = ATgetArgument(t, 1);
                if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
                  {
                    ATerm m_26 = ATgetFirst((ATermList) l_26);
                    ATerm n_26 = (ATerm) ATgetNext((ATermList) l_26);
                    if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
                      {
                        s_13 = ATgetFirst((ATermList) n_26);
                        {
                          ATerm o_26 = (ATerm) ATgetNext((ATermList) n_26);
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
          t = s_13;
          ;
          LocalPopChoice(j_26);
        }
      else
        {
          t = i_26;
          {
            ATerm w_13 = NULL,x_13 = NULL;
            t = (ATerm) ATmakeAppl(sym_prod_3, c_48, d_48, e_48);
            t = generate_pp_entries_0_0(t);
            t = map_1_0(StoreEntryIfNotExists_0_0, t);
            t = f_48;
            t = pp_table_get_0_0(t);
            w_13 = t;
            t = SSL_explode_term(w_13);
            if(match_cons(t, sym__2))
              {
                ATerm p_26 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_26) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm q_26 = ATgetArgument(t, 1);
                  if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
                    {
                      ATerm r_26 = ATgetFirst((ATermList) q_26);
                      ATerm s_26 = (ATerm) ATgetNext((ATermList) q_26);
                      if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
                        {
                          x_13 = ATgetFirst((ATermList) s_26);
                          {
                            ATerm t_26 = (ATerm) ATgetNext((ATermList) s_26);
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
            t = x_13;
          }
        }
    }
    return(t);
  }
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
  l_48 = t;
  if(match_cons(t, sym__2))
    {
      m_48 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_48;
  if(match_cons(t, sym_prod_3))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
      p_48 = ATgetArgument(t, 2);
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_48(m_48, q_48, l_48, t);
            ;
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
            t = s_48(n_48, o_48, p_48, q_48, l_48, t);
          }
      }
    }
  else
    {
      t = r_48(m_48, q_48, l_48, t);
    }
  return(t);
}
ATerm prod_3_0 (ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
  a_49 = t;
  if(match_cons(t, sym_prod_3))
    {
      u_48 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
      w_48 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_49);
  t_48 = t;
  t = u_48;
  t = q_94(t);
  x_48 = t;
  t = v_48;
  t = r_94(t);
  y_48 = t;
  t = w_48;
  t = s_94(t);
  z_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, x_48, y_48, z_48), t_48);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  f_49 = t;
  t = SSL_explode_string(f_49);
  e_49 = t;
  {
    ATerm w_26 = t;
    if((PushChoice() == 0))
      {
        ATerm h_49 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_49 = ATgetFirst((ATermList) t);
            {
              ATerm x_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = h_49;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_26;
      }
    t = e_49;
    {
      ATerm y_26 = t;
      if((PushChoice() == 0))
        {
          ATerm y_4 (ATerm t)
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_26 = ATgetFirst((ATermList) t);
                if(((ATgetType(z_26) != AT_INT) || (ATgetInt((ATermInt) z_26) != 34)))
                  _fail(t);
                {
                  ATerm a_27 = (ATerm) ATgetNext((ATermList) t);
                  if(((ATgetType(a_27) != AT_LIST) || !(ATisEmpty(a_27))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = at_last_1_0(y_4, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_26;
        }
      t = e_49;
      t = Quote_0_0(t);
      g_49 = t;
      t = SSL_implode_string(g_49);
    }
  }
  return(t);
}
ATerm cons_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,m_49 = NULL,n_49 = NULL;
  n_49 = t;
  if(match_cons(t, sym_cons_1))
    {
      k_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_49);
  j_49 = t;
  t = k_49;
  t = o_94(t);
  m_49 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, m_49), j_49);
  return(t);
}
ATerm at_cons_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    t = cons_1_0(r_130, t);
    return(t);
  }
  t = oncetd_1_0(z_4, t);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm s_49 = NULL,w_49 = NULL;
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm d_27 = ATgetArgument(t, 0);
          ATerm e_27 = ATgetArgument(t, 1);
          ATerm f_27 = ATgetArgument(t, 2);
          s_49 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(c_27);
      {
        ATerm y_49 = NULL;
        t = s_49;
        {
          ATerm i_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                y_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(i_5, t);
          t = not_null(y_49);
        }
      }
    }
  else
    {
      t = b_27;
      {
        ATerm a_50 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm g_27 = ATgetArgument(t, 0);
            ATerm h_27 = ATgetArgument(t, 1);
            w_49 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = w_49;
        {
          ATerm j_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                a_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(j_5, t);
          t = not_null(a_50);
        }
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  if(match_cons(t, sym__2))
    {
      j_50 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_50;
  if(match_cons(t, sym_prod_fun_4))
    {
      k_50 = ATgetArgument(t, 0);
      l_50 = ATgetArgument(t, 1);
      m_50 = ATgetArgument(t, 2);
      g_50 = ATgetArgument(t, 3);
      t = g_50;
      if(match_cons(t, sym_attrs_1))
        {
          f_50 = ATgetArgument(t, 0);
          {
            ATerm t_50 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, f_50, n_50);
            t = conc_0_0(t);
            t_50 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, k_50, l_50, m_50, (ATerm) ATmakeAppl(sym_attrs_1, t_50));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, k_50, l_50, m_50, (ATerm) ATmakeAppl(sym_attrs_1, n_50));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          k_50 = ATgetArgument(t, 0);
          l_50 = ATgetArgument(t, 1);
          m_50 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_50;
      if(match_cons(t, sym_attrs_1))
        {
          h_50 = ATgetArgument(t, 0);
          {
            ATerm c_51 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, h_50, n_50);
            t = conc_0_0(t);
            c_51 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, k_50, l_50, (ATerm) ATmakeAppl(sym_attrs_1, c_51));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, k_50, l_50, (ATerm) ATmakeAppl(sym_attrs_1, n_50));
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm r_5 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, r_5, t);
      }
      ;
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
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm Escape_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  if(match_int(t, 34))
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_p_27), term_o_27);
          ;
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          t = (ATerm) ATinsert(ATempty, j_51);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_o_27), term_o_27);
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              t = (ATerm) ATinsert(ATempty, j_51);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_51 = ATgetFirst((ATermList) t);
              l_51 = (ATerm) ATgetNext((ATermList) t);
              t = k_51;
              if(match_int(t, 34))
                {
                  ATerm s_27 = t;
                  int t_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, j_51);
                      ;
                      LocalPopChoice(t_27);
                    }
                  else
                    {
                      t = s_27;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(l_51), term_p_27), term_o_27);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm u_27 = t;
                      int v_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, j_51);
                          ;
                          LocalPopChoice(v_27);
                        }
                      else
                        {
                          t = u_27;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(l_51), term_o_27), term_o_27);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm w_27 = t;
                          int x_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, j_51);
                              ;
                              LocalPopChoice(x_27);
                            }
                          else
                            {
                              t = w_27;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_51), term_y_27), term_o_27);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATinsert(ATempty, j_51);
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, j_51);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_52 = NULL,c_14 = NULL;
      a_52 = t;
      t = SSL_explode_string(a_52);
      t = map_1_0(Escape_0_0, t);
      t = concat_0_0(t);
      c_14 = t;
      t = SSL_implode_string(c_14);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      t = string_as_chars_1_0(escape_chars_0_0, t);
    }
  return(t);
}
ATerm isAlpha_0_0 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = isUpper_0_0(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      t = isLower_0_0(t);
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm e_52 = NULL;
  ATerm s_5 (ATerm t)
  {
    ATerm d_28 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_28;
      }
    return(t);
  }
  t = filter_1_0(s_5, t);
  {
    ATerm t_5 (ATerm t)
    {
      ATerm f_52 = NULL,f_14 = NULL;
      f_52 = t;
      t = SSL_explode_string(f_52);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_14 = ATgetFirst((ATermList) t);
          {
            ATerm e_28 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = f_14;
      t = isAlpha_0_0(t);
      t = f_52;
      return(t);
    }
    t = Cons_2_0(t_5, _id, t);
    {
      ATerm u_5 (ATerm t)
      {
        t = term_f_28;
        return(t);
      }
      t = separate_by_1_0(u_5, t);
      t = concat_strings_0_0(t);
      e_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_52, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_28), term_r_28), term_q_28), term_p_28), term_o_28), term_n_28), term_m_28), term_l_28), term_k_28), term_j_28), term_i_28), term_h_28), term_g_28));
      {
        ATerm t_28 = t;
        if((PushChoice() == 0))
          {
            t = is_subterm_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_28;
          }
        t = e_52;
        t = escape_0_0(t);
        t = quote_0_0(t);
      }
    }
  }
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  k_52 = t;
  if(match_cons(t, sym_cf_1))
    {
      i_52 = ATgetArgument(t, 0);
      t = i_52;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          i_52 = ATgetArgument(t, 0);
          t = i_52;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_u_28);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  i_52 = ATgetArgument(t, 0);
                  j_52 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(j_52), i_52);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      i_52 = ATgetArgument(t, 0);
                      t = i_52;
                      t = Sym2Strs_0_0(t);
                      {
                        ATerm v_5 (ATerm t)
                        {
                          t = (ATerm) ATinsert(ATempty, term_v_28);
                          return(t);
                        }
                        t = at_end_1_0(v_5, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          i_52 = ATgetArgument(t, 0);
                          t = i_52;
                          t = Sym2Strs_0_0(t);
                          {
                            ATerm w_5 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_w_28);
                              return(t);
                            }
                            t = at_end_1_0(w_5, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              i_52 = ATgetArgument(t, 0);
                              t = i_52;
                              t = Sym2Strs_0_0(t);
                              {
                                ATerm x_5 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_x_28);
                                  return(t);
                                }
                                t = at_end_1_0(x_5, t);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  i_52 = ATgetArgument(t, 0);
                                  j_52 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_52 = NULL,v_52 = NULL;
                                    t = i_52;
                                    t = Sym2Strs_0_0(t);
                                    u_52 = t;
                                    t = j_52;
                                    t = Sym2Strs_0_0(t);
                                    v_52 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_28)), v_52), u_52);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      i_52 = ATgetArgument(t, 0);
                                      j_52 = ATgetArgument(t, 1);
                                      {
                                        ATerm y_52 = NULL,z_52 = NULL;
                                        t = i_52;
                                        t = Sym2Strs_0_0(t);
                                        y_52 = t;
                                        t = j_52;
                                        t = Sym2Strs_0_0(t);
                                        z_52 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_28)), z_52), y_52);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm y_28 = t;
                                      int z_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              i_52 = ATgetArgument(t, 0);
                                              {
                                                ATerm a_29 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(z_28);
                                          {
                                            ATerm b_53 = NULL;
                                            t = i_52;
                                            t = Sym2Strs_0_0(t);
                                            b_53 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_29)), b_53);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = y_28;
                                          {
                                            ATerm c_29 = t;
                                            int d_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    i_52 = ATgetArgument(t, 0);
                                                    j_52 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_29 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(d_29);
                                                {
                                                  ATerm f_53 = NULL,g_53 = NULL;
                                                  t = i_52;
                                                  t = Sym2Strs_0_0(t);
                                                  f_53 = t;
                                                  t = j_52;
                                                  t = Sym2Strs_0_0(t);
                                                  g_53 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_29)), g_53), f_53);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = c_29;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    i_52 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_53 = NULL;
                                                      t = i_52;
                                                      t = Sym2Strs_0_0(t);
                                                      i_53 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, i_53), (ATerm) ATinsert(ATempty, term_f_29));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        i_52 = ATgetArgument(t, 0);
                                                        j_52 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_53 = NULL,m_53 = NULL;
                                                          t = i_52;
                                                          t = Sym2Strs_0_0(t);
                                                          l_53 = t;
                                                          t = j_52;
                                                          t = Sym2Strs_0_0(t);
                                                          m_53 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_53), (ATerm) ATinsert(ATempty, term_g_29)), l_53);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            i_52 = ATgetArgument(t, 0);
                                                            j_52 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_53 = NULL,q_53 = NULL;
                                                              t = i_52;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              p_53 = t;
                                                              t = j_52;
                                                              t = Sym2Strs_0_0(t);
                                                              q_53 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_53), (ATerm) ATinsert(ATempty, term_h_29)), p_53);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                i_52 = ATgetArgument(t, 0);
                                                                j_52 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm t_53 = NULL,u_53 = NULL;
                                                                  t = i_52;
                                                                  t = Sym2Strs_0_0(t);
                                                                  t_53 = t;
                                                                  t = j_52;
                                                                  t = Sym2Strs_0_0(t);
                                                                  u_53 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_53), (ATerm) ATinsert(ATempty, term_i_29)), t_53);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    i_52 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm w_53 = NULL;
                                                                      t = i_52;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      w_53 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(w_53), term_j_29);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        i_52 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, i_52);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            i_52 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm z_53 = NULL;
                                                                              t = i_52;
                                                                              {
                                                                                ATerm j_6 (ATerm t)
                                                                                {
                                                                                  t = de_quote_0_0(t);
                                                                                  t = de_escape_0_0(t);
                                                                                  return(t);
                                                                                }
                                                                                t = try_1_0(j_6, t);
                                                                                z_53 = t;
                                                                                t = (ATerm) ATinsert(ATempty, z_53);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm k_29 = t;
                                                                            int l_29 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    i_52 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm m_29 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(l_29);
                                                                                {
                                                                                  ATerm b_54 = NULL;
                                                                                  t = i_52;
                                                                                  {
                                                                                    ATerm m_6 (ATerm t)
                                                                                    {
                                                                                      t = de_quote_0_0(t);
                                                                                      t = de_escape_0_0(t);
                                                                                      return(t);
                                                                                    }
                                                                                    t = try_1_0(m_6, t);
                                                                                    b_54 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, b_54);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = k_29;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_n_29);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
    ATerm o_6 (ATerm t)
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = toAlphaNum_0_0(t);
          ;
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
        }
      return(t);
    }
    t = map_1_0(o_6, t);
  }
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm Quote_0_0 (ATerm t)
{
  ATerm u_55 = NULL;
  u_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_27)), u_55), (ATerm) ATinsert(ATempty, term_p_27));
  t = concat_0_0(t);
  return(t);
}
ATerm quote_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  v_55 = t;
  t = SSL_explode_string(v_55);
  t = Quote_0_0(t);
  w_55 = t;
  t = SSL_implode_string(w_55);
  return(t);
}
ATerm normalize_constr_0_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm c_56 = NULL;
    c_56 = t;
    {
      ATerm q_29 = t;
      if((PushChoice() == 0))
        {
          t = de_quote_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_29;
        }
      t = c_56;
      t = quote_0_0(t);
    }
    return(t);
  }
  t = try_1_0(a_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm empty_test_0_0 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm r_29 = t;
      if((PushChoice() == 0))
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_29;
        }
      return(t);
    }
    t = filter_1_0(d_7, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm s_29 = ATgetFirst((ATermList) t);
        ATerm t_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = d_54;
  }
  return(t);
}
ATerm isLower_0_0 (ATerm t)
{
  ATerm e_54 = NULL;
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_54, term_u_29);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, e_54);
  t = leq_0_0(t);
  return(t);
}
ATerm isUpper_0_0 (ATerm t)
{
  ATerm f_54 = NULL;
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_54, term_w_29);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_29, f_54);
  t = leq_0_0(t);
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm y_29 = t;
  if((PushChoice() == 0))
    {
      ATerm g_54 = NULL,h_54 = NULL;
      if(match_cons(t, sym__2))
        {
          g_54 = ATgetArgument(t, 0);
          h_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(g_54, h_54);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = SSL_gtr(g_54, h_54);
          }
        t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_29;
    }
  return(t);
}
ATerm isNum_0_0 (ATerm t)
{
  ATerm i_54 = NULL;
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_54, term_b_30);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_30, i_54);
  t = leq_0_0(t);
  return(t);
}
ATerm isAlphaNumHyphen_0_0 (ATerm t)
{
  ATerm g_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = isNum_0_0(t);
      ;
      LocalPopChoice(o_30);
    }
  else
    {
      t = g_30;
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = isUpper_0_0(t);
            ;
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            {
              ATerm r_30 = t;
              int x_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = isLower_0_0(t);
                  ;
                  LocalPopChoice(x_30);
                }
              else
                {
                  t = r_30;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_d_14;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm s_54 (ATerm p_54, ATerm t)
  {
    t = SSL_explode_string(p_54);
    {
      ATerm y_30 = t;
      if((PushChoice() == 0))
        {
          t = map_1_0(isAlphaNumHyphen_0_0, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_30;
        }
      t = term_z_30;
    }
    return(t);
  }
  ATerm r_54 = NULL;
  r_54 = t;
  if(match_string(t, "|="))
    {
      ATerm a_31 = t;
      int b_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_54(r_54, t);
          ;
          LocalPopChoice(b_31);
        }
      else
        {
          t = a_31;
          t = term_c_31;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm d_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_54(r_54, t);
              ;
              LocalPopChoice(e_31);
            }
          else
            {
              t = d_31;
              t = term_f_31;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm g_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_54(r_54, t);
                  ;
                  LocalPopChoice(h_31);
                }
              else
                {
                  t = g_31;
                  t = term_i_31;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm j_31 = t;
                  int k_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_54(r_54, t);
                      ;
                      LocalPopChoice(k_31);
                    }
                  else
                    {
                      t = j_31;
                      t = term_l_31;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm m_31 = t;
                      int n_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_54(r_54, t);
                          ;
                          LocalPopChoice(n_31);
                        }
                      else
                        {
                          t = m_31;
                          t = term_o_31;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm p_31 = t;
                          int q_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = s_54(r_54, t);
                              ;
                              LocalPopChoice(q_31);
                            }
                          else
                            {
                              t = p_31;
                              t = term_r_31;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm s_31 = t;
                              int w_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = s_54(r_54, t);
                                  ;
                                  LocalPopChoice(w_31);
                                }
                              else
                                {
                                  t = s_31;
                                  t = term_x_31;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm y_31 = t;
                                  int z_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = s_54(r_54, t);
                                      ;
                                      LocalPopChoice(z_31);
                                    }
                                  else
                                    {
                                      t = y_31;
                                      t = term_a_32;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm b_32 = t;
                                      int c_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = s_54(r_54, t);
                                          ;
                                          LocalPopChoice(c_32);
                                        }
                                      else
                                        {
                                          t = b_32;
                                          t = term_d_32;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm e_32 = t;
                                          int f_32 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = s_54(r_54, t);
                                              ;
                                              LocalPopChoice(f_32);
                                            }
                                          else
                                            {
                                              t = e_32;
                                              t = term_g_32;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm h_32 = t;
                                              int i_32 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = s_54(r_54, t);
                                                  ;
                                                  LocalPopChoice(i_32);
                                                }
                                              else
                                                {
                                                  t = h_32;
                                                  t = term_j_32;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm k_32 = t;
                                                  int s_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_54(r_54, t);
                                                      ;
                                                      LocalPopChoice(s_32);
                                                    }
                                                  else
                                                    {
                                                      t = k_32;
                                                      t = term_t_32;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm u_32 = t;
                                                      int v_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_54(r_54, t);
                                                          ;
                                                          LocalPopChoice(v_32);
                                                        }
                                                      else
                                                        {
                                                          t = u_32;
                                                          t = term_w_32;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm z_32 = t;
                                                          int b_33 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = s_54(r_54, t);
                                                              ;
                                                              LocalPopChoice(b_33);
                                                            }
                                                          else
                                                            {
                                                              t = z_32;
                                                              t = term_i_29;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm c_33 = t;
                                                              int m_33 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = s_54(r_54, t);
                                                                  ;
                                                                  LocalPopChoice(m_33);
                                                                }
                                                              else
                                                                {
                                                                  t = c_33;
                                                                  t = term_n_33;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm o_33 = t;
                                                                  int p_33 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = s_54(r_54, t);
                                                                      ;
                                                                      LocalPopChoice(p_33);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_33;
                                                                      t = term_n_33;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm q_33 = t;
                                                                      int r_33 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = s_54(r_54, t);
                                                                          ;
                                                                          LocalPopChoice(r_33);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = q_33;
                                                                          t = term_s_33;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm t_33 = t;
                                                                          int u_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = s_54(r_54, t);
                                                                              ;
                                                                              LocalPopChoice(u_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_33;
                                                                              t = term_v_33;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm w_33 = t;
                                                                              int x_33 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = s_54(r_54, t);
                                                                                  ;
                                                                                  LocalPopChoice(x_33);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = w_33;
                                                                                  t = term_y_33;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm z_33 = t;
                                                                                  int a_34 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = s_54(r_54, t);
                                                                                      ;
                                                                                      LocalPopChoice(a_34);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_33;
                                                                                      t = term_b_34;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm c_34 = t;
                                                                                      int d_34 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = s_54(r_54, t);
                                                                                          ;
                                                                                          LocalPopChoice(d_34);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_34;
                                                                                          t = term_e_34;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm f_34 = t;
                                                                                          int g_34 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = s_54(r_54, t);
                                                                                              ;
                                                                                              LocalPopChoice(g_34);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_34;
                                                                                              t = term_h_34;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm i_34 = t;
                                                                                              int j_34 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = s_54(r_54, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(j_34);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = i_34;
                                                                                                  t = term_k_34;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm l_34 = t;
                                                                                                  int m_34 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = s_54(r_54, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(m_34);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_34;
                                                                                                      t = term_n_34;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm o_34 = t;
                                                                                                      int p_34 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = s_54(r_54, t);
                                                                                                          ;
                                                                                                          LocalPopChoice(p_34);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = o_34;
                                                                                                          t = term_q_34;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm r_34 = t;
                                                                                                          int s_34 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = s_54(r_54, t);
                                                                                                              ;
                                                                                                              LocalPopChoice(s_34);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = r_34;
                                                                                                              t = term_t_34;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm u_34 = t;
                                                                                                              int v_34 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = s_54(r_54, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(v_34);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = u_34;
                                                                                                                  t = term_w_34;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm x_34 = t;
                                                                                                                  int y_34 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = s_54(r_54, t);
                                                                                                                      ;
                                                                                                                      LocalPopChoice(y_34);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = x_34;
                                                                                                                      t = term_z_34;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm a_35 = t;
                                                                                                                      int b_35 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = s_54(r_54, t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(b_35);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_35;
                                                                                                                          t = term_g_29;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm c_35 = t;
                                                                                                                          int d_35 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = s_54(r_54, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(d_35);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = c_35;
                                                                                                                              t = term_e_35;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm f_35 = t;
                                                                                                                              int g_35 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = s_54(r_54, t);
                                                                                                                                  ;
                                                                                                                                  LocalPopChoice(g_35);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = f_35;
                                                                                                                                  t = term_h_35;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm i_35 = t;
                                                                                                                                  int j_35 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = s_54(r_54, t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(j_35);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = i_35;
                                                                                                                                      t = term_k_35;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm l_35 = t;
                                                                                                                                      int m_35 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = s_54(r_54, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(m_35);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = l_35;
                                                                                                                                          t = term_n_35;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm o_35 = t;
                                                                                                                                          int p_35 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = s_54(r_54, t);
                                                                                                                                              ;
                                                                                                                                              LocalPopChoice(p_35);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = o_35;
                                                                                                                                              t = term_q_35;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm r_35 = t;
                                                                                                                                              int s_35 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = s_54(r_54, t);
                                                                                                                                                  ;
                                                                                                                                                  LocalPopChoice(s_35);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = r_35;
                                                                                                                                                  t = term_t_35;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm u_35 = t;
                                                                                                                                                  int x_35 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = s_54(r_54, t);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(x_35);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = u_35;
                                                                                                                                                      t = term_b_36;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm c_36 = t;
                                                                                                                                                      int d_36 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = s_54(r_54, t);
                                                                                                                                                          ;
                                                                                                                                                          LocalPopChoice(d_36);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = c_36;
                                                                                                                                                          t = term_e_36;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm f_36 = t;
                                                                                                                                                          int g_36 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = s_54(r_54, t);
                                                                                                                                                              ;
                                                                                                                                                              LocalPopChoice(g_36);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = f_36;
                                                                                                                                                              t = term_h_36;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = s_54(r_54, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm t_54 = NULL,u_54 = NULL;
  if(match_cons(t, sym__2))
    {
      t_54 = ATgetArgument(t, 0);
      u_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_54;
  {
    ATerm j_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_36);
      }
    else
      {
        t = j_36;
        {
          ATerm e_7 (ATerm t)
          {
            ATerm q_36 = t;
            int r_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_36);
              }
            else
              {
                t = q_36;
                {
                  ATerm v_54 = NULL;
                  t = Cons_2_0(_id, e_7, t);
                  v_54 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_54), t_54);
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
ATerm dissuader_1_0 (ATerm c_120 (ATerm), ATerm t)
{
  ATerm x_54 = NULL;
  x_54 = t;
  {
    ATerm f_7 (ATerm t)
    {
      t = c_120(t);
      {
        ATerm g_7 (ATerm t)
        {
          t = term_s_36;
          return(t);
        }
        t = debug_1_0(g_7, t);
      }
      return(t);
    }
    t = if_verbose2_1_0(f_7, t);
    t = x_54;
  }
  return(t);
}
ATerm separate_by_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  ATerm h_7 (ATerm t)
  {
    t = term_t_36;
    return(t);
  }
  t = dissuader_1_0(h_7, t);
  y_54 = t;
  t = term_d_14;
  t = s_107(t);
  z_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_54, y_54);
  t = separate_by_0_0(t);
  return(t);
}
ATerm De_Escape3_0_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_55 = ATgetFirst((ATermList) t);
      b_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_55;
  t = De_Escape_0_0(t);
  c_55 = t;
  t = (ATerm) ATinsert(CheckATermList(c_55), a_55);
  return(t);
}
ATerm De_Escape2_0_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_36 = ATgetFirst((ATermList) t);
      if(((ATgetType(u_36) != AT_INT) || (ATgetInt((ATermInt) u_36) != 92)))
        _fail(t);
      {
        ATerm v_36 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
          {
            ATerm x_36 = ATgetFirst((ATermList) v_36);
            if(((ATgetType(x_36) != AT_INT) || (ATgetInt((ATermInt) x_36) != 92)))
              _fail(t);
            d_55 = (ATerm) ATgetNext((ATermList) v_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_55;
  t = De_Escape_0_0(t);
  e_55 = t;
  t = (ATerm) ATinsert(CheckATermList(e_55), term_o_27);
  return(t);
}
ATerm De_Escape1_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_36 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_36) != AT_INT) || (ATgetInt((ATermInt) y_36) != 92)))
        _fail(t);
      {
        ATerm z_36 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(z_36) == AT_LIST) && !(ATisEmpty(z_36))))
          {
            ATerm a_37 = ATgetFirst((ATermList) z_36);
            if(((ATgetType(a_37) != AT_INT) || (ATgetInt((ATermInt) a_37) != 34)))
              _fail(t);
            f_55 = (ATerm) ATgetNext((ATermList) z_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_55;
  t = De_Escape_0_0(t);
  g_55 = t;
  t = (ATerm) ATinsert(CheckATermList(g_55), term_p_27);
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0_0(t);
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0_0(t);
            ;
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            {
              ATerm h_37 = t;
              int i_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0_0(t);
                  ;
                  LocalPopChoice(i_37);
                }
              else
                {
                  t = h_37;
                  {
                    ATerm i_55 = NULL;
                    i_55 = t;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = i_55;
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  j_55 = t;
  t = SSL_explode_string(j_55);
  t = De_Escape_0_0(t);
  k_55 = t;
  t = SSL_implode_string(k_55);
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  y_55 = t;
  t = SSL_explode_string(y_55);
  x_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_55 = ATgetFirst((ATermList) t);
      {
        ATerm j_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_55;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = x_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_37 = ATgetFirst((ATermList) t);
      a_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_56;
  {
    ATerm i_7 (ATerm t)
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm l_37 = ATgetFirst((ATermList) t);
          if(((ATgetType(l_37) != AT_INT) || (ATgetInt((ATermInt) l_37) != 34)))
            _fail(t);
          {
            ATerm m_37 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(m_37) != AT_LIST) || !(ATisEmpty(m_37))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    t = at_last_1_0(i_7, t);
    b_56 = t;
    t = SSL_implode_string(b_56);
  }
  return(t);
}
ATerm Lit2Str_0_0 (ATerm t)
{
  ATerm l_55 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      l_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_55;
  {
    ATerm j_7 (ATerm t)
    {
      t = de_quote_0_0(t);
      t = de_escape_0_0(t);
      return(t);
    }
    t = try_1_0(j_7, t);
  }
  return(t);
}
ATerm list_ana_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  ATerm s_55 (ATerm t)
  {
    ATerm o_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_55 = NULL;
        t = u_130(t);
        n_55 = t;
        t = (ATerm) ATinsert(ATempty, n_55);
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = o_37;
        {
          ATerm s_37 = t;
          int t_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_55 = NULL,j_14 = NULL;
              r_55 = t;
              t = SSL_explode_term(r_55);
              if(match_cons(t, sym__2))
                {
                  ATerm u_37 = ATgetArgument(t, 0);
                  j_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_14;
              t = filter_1_0(s_55, t);
              t = concat_0_0(t);
              ;
              LocalPopChoice(t_37);
            }
          else
            {
              t = s_37;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = s_55(t);
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  t = list_ana_1_0(Lit2Str_0_0, t);
  {
    ATerm k_7 (ATerm t)
    {
      t = term_f_28;
      return(t);
    }
    t = separate_by_1_0(k_7, t);
    t = concat_strings_0_0(t);
    {
      ATerm v_37 = t;
      int w_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = toAlphaNum_0_0(t);
          ;
          LocalPopChoice(w_37);
        }
      else
        {
          t = v_37;
        }
    }
  }
  return(t);
}
ATerm lits2strs_0_0 (ATerm t)
{
  t = filter_1_0(lit2str_0_0, t);
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm z_56 (ATerm g_56, ATerm h_56, ATerm i_56, ATerm t)
  {
    ATerm m_56 = NULL;
    t = i_56;
    {
      ATerm x_37 = t;
      int y_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_56;
          t = lits2strs_0_0(t);
          t = strs2constr_0_0(t);
          m_56 = t;
          ;
          LocalPopChoice(y_37);
        }
      else
        {
          t = x_37;
          {
            ATerm z_37 = t;
            int a_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_56 = NULL,o_56 = NULL;
                t = (ATerm) ATinsert(ATempty, h_56);
                t = syms2strs_0_0(t);
                n_56 = t;
                t = g_56;
                t = lits2strs_0_0(t);
                t = empty_test_0_0(t);
                o_56 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_56, o_56);
                t = conc_0_0(t);
                t = strs2constr_0_0(t);
                m_56 = t;
                ;
                LocalPopChoice(a_38);
              }
            else
              {
                t = z_37;
                {
                  ATerm b_38 = t;
                  int c_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_56;
                      t = syms2strs_0_0(t);
                      t = strs2constr_0_0(t);
                      m_56 = t;
                      ;
                      LocalPopChoice(c_38);
                    }
                  else
                    {
                      t = b_38;
                      {
                        ATerm p_56 = NULL,q_56 = NULL;
                        t = (ATerm) ATinsert(ATempty, h_56);
                        t = syms2strs_0_0(t);
                        p_56 = t;
                        t = term_d_14;
                        t = new_0_0(t);
                        q_56 = t;
                        t = (ATerm) ATmakeAppl(sym__2, p_56, (ATerm) ATinsert(ATinsert(ATempty, q_56), term_d_38));
                        t = conc_0_0(t);
                        t = strs2constr_0_0(t);
                        m_56 = t;
                      }
                    }
                }
              }
          }
        }
      t = m_56;
    }
    return(t);
  }
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            t_56 = ATgetArgument(t, 0);
            {
              ATerm g_38 = ATgetArgument(t, 1);
            }
            {
              ATerm h_38 = ATgetArgument(t, 2);
            }
            {
              ATerm i_38 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_38);
        t = t_56;
        t = normalize_constr_0_0(t);
      }
    else
      {
        t = e_38;
        if(match_cons(t, sym_prod_3))
          {
            t_56 = ATgetArgument(t, 0);
            u_56 = ATgetArgument(t, 1);
            {
              ATerm j_38 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_56;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm k_38 = t;
            int l_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_56(t_56, u_56, s_56, t);
                ;
                LocalPopChoice(l_38);
              }
            else
              {
                t = k_38;
                {
                  ATerm y_56 = NULL;
                  t = (ATerm) ATinsert(ATempty, u_56);
                  t = syms2strs_0_0(t);
                  y_56 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_56, (ATerm) ATinsert(ATempty, term_m_38));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = z_56(t_56, u_56, s_56, t);
          }
      }
  }
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  f_57 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      b_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_57);
  a_57 = t;
  t = b_57;
  t = d_94(t);
  d_57 = t;
  t = c_57;
  t = e_94(t);
  e_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, d_57, e_57), a_57);
  return(t);
}
ATerm iter_sep_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,p_57 = NULL;
  p_57 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      k_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_57);
  j_57 = t;
  t = k_57;
  t = b_94(t);
  m_57 = t;
  t = l_57;
  t = c_94(t);
  n_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, m_57, n_57), j_57);
  return(t);
}
ATerm iter_star_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL;
  w_57 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      u_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_57);
  t_57 = t;
  t = u_57;
  t = g_94(t);
  v_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, v_57), t_57);
  return(t);
}
ATerm iter_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  d_58 = t;
  if(match_cons(t, sym_iter_1))
    {
      b_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  a_58 = t;
  t = b_58;
  t = f_94(t);
  c_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, c_58), a_58);
  return(t);
}
ATerm alt_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  m_58 = t;
  if(match_cons(t, sym_alt_2))
    {
      i_58 = ATgetArgument(t, 0);
      j_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_58);
  h_58 = t;
  t = i_58;
  t = h_94(t);
  k_58 = t;
  t = j_58;
  t = i_94(t);
  l_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, k_58, l_58), h_58);
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1_0(_id, t);
      ;
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = alt_2_0(syntaxless_sort_0_0, syntaxless_sort_0_0, t);
            ;
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            {
              ATerm r_38 = t;
              int s_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = opt_1_0(syntaxless_sort_0_0, t);
                  ;
                  LocalPopChoice(s_38);
                }
              else
                {
                  t = r_38;
                  {
                    ATerm t_38 = t;
                    int u_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = iter_1_0(syntaxless_sort_0_0, t);
                        ;
                        LocalPopChoice(u_38);
                      }
                    else
                      {
                        t = t_38;
                        {
                          ATerm v_38 = t;
                          int w_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_star_1_0(syntaxless_sort_0_0, t);
                              ;
                              LocalPopChoice(w_38);
                            }
                          else
                            {
                              t = v_38;
                              {
                                ATerm x_38 = t;
                                int z_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = iter_sep_2_0(syntaxless_sort_0_0, _id, t);
                                    ;
                                    LocalPopChoice(z_38);
                                  }
                                else
                                  {
                                    t = x_38;
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
  ATerm l_7 (ATerm t)
  {
    ATerm m_7 (ATerm t)
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      return(t);
    }
    t = Cons_2_0(syntaxless_sort_0_0, m_7, t);
    return(t);
  }
  t = prod_3_0(l_7, _id, _id, t);
  {
    ATerm n_7 (ATerm t)
    {
      t = term_a_39;
      return(t);
    }
    t = has_option_1_0(n_7, t);
  }
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm s_58 = NULL,w_58 = NULL;
  ATerm c_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm f_39 = ATgetArgument(t, 0);
          ATerm g_39 = ATgetArgument(t, 1);
          ATerm h_39 = ATgetArgument(t, 2);
          s_58 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(d_39);
      t = s_58;
      {
        ATerm o_7 (ATerm t)
        {
          if(!(match_cons(t, sym_reject_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(o_7, t);
        t = term_d_14;
      }
    }
  else
    {
      t = c_39;
      if(match_cons(t, sym_prod_3))
        {
          ATerm i_39 = ATgetArgument(t, 0);
          ATerm j_39 = ATgetArgument(t, 1);
          w_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_58;
      {
        ATerm p_7 (ATerm t)
        {
          if(!(match_cons(t, sym_reject_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(p_7, t);
        t = term_d_14;
      }
    }
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm a_59 = NULL,e_59 = NULL;
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm n_39 = ATgetArgument(t, 0);
          ATerm o_39 = ATgetArgument(t, 1);
          ATerm p_39 = ATgetArgument(t, 2);
          a_59 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(m_39);
      t = a_59;
      {
        ATerm q_7 (ATerm t)
        {
          if(!(match_cons(t, sym_bracket_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(q_7, t);
        t = term_d_14;
      }
    }
  else
    {
      t = l_39;
      if(match_cons(t, sym_prod_3))
        {
          ATerm q_39 = ATgetArgument(t, 0);
          ATerm r_39 = ATgetArgument(t, 1);
          e_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_59;
      {
        ATerm r_7 (ATerm t)
        {
          if(!(match_cons(t, sym_bracket_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(r_7, t);
        t = term_d_14;
      }
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = NULL;
        t = l_59;
        {
          ATerm v_39 = t;
          if((PushChoice() == 0))
            {
              ATerm w_39 = t;
              int x_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
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
                        t = is_bracket_0_0(t);
                        ;
                        LocalPopChoice(z_39);
                      }
                    else
                      {
                        t = y_39;
                        {
                          ATerm a_40 = t;
                          int b_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              ;
                              LocalPopChoice(b_40);
                            }
                          else
                            {
                              t = a_40;
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
              t = v_39;
            }
          t = l_59;
          t = mk_constr_0_0(t);
          m_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_59, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, m_14)));
          t = add_attributes_0_0(t);
        }
        ;
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        {
          ATerm n_59 = NULL;
          t = l_59;
          t = get_constr_0_0(t);
          n_59 = t;
          t = l_59;
          {
            ATerm s_7 (ATerm t)
            {
              t = n_59;
              t = uq2q_0_0(t);
              return(t);
            }
            t = at_cons_1_0(s_7, t);
          }
        }
      }
  }
  return(t);
}
ATerm sort_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm p_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
  u_59 = t;
  if(match_cons(t, sym_sort_1))
    {
      s_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_59);
  p_59 = t;
  t = s_59;
  t = k_94(t);
  t_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, t_59), p_59);
  return(t);
}
ATerm get_templ_0_0 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm c_40 = ATgetArgument(t, 0);
      if(match_cons(c_40, sym_prod_3))
        {
          y_59 = ATgetArgument(c_40, 0);
          z_59 = ATgetArgument(c_40, 1);
          a_60 = ATgetArgument(c_40, 2);
        }
      else
        _fail(t);
      {
        ATerm d_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm e_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_60;
        {
          ATerm t_7 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                b_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(t_7, t);
        }
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = e_40;
        {
          ATerm k_40 = t;
          int l_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_59;
              t = sort_1_0(_id, t);
              t = (ATerm) ATmakeAppl(sym_prod_3, y_59, z_59, a_60);
              t = prodcons_0_0(t);
              {
                ATerm u_7 (ATerm t)
                {
                  ATerm v_7 (ATerm t)
                  {
                    if(match_cons(t, sym_cons_1))
                      {
                        b_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1_0(v_7, t);
                  return(t);
                }
                t = prod_3_0(_id, _id, u_7, t);
              }
              ;
              LocalPopChoice(l_40);
            }
          else
            {
              t = k_40;
              t = term_n_40;
              b_60 = t;
            }
        }
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, y_59, z_59, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(b_60))))), (ATerm) ATinsert(ATempty, not_null(b_60)));
    t = get_pp_entry_0_0(t);
    c_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_60), c_60);
  }
  return(t);
}
ATerm application_to_abox_0_0 (ATerm t)
{
  ATerm d_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm o_40 = ATgetArgument(t, 0);
      if(match_cons(o_40, sym_prod_3))
        {
          d_60 = ATgetArgument(o_40, 0);
          {
            ATerm p_40 = ATgetArgument(o_40, 1);
          }
          {
            ATerm q_40 = ATgetArgument(o_40, 2);
          }
        }
      else
        _fail(t);
      g_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = get_templ_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_60;
  {
    ATerm w_7 (ATerm t)
    {
      ATerm r_40 = t;
      if((PushChoice() == 0))
        {
          t = lit_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_40;
        }
      return(t);
    }
    t = filter_1_0(w_7, t);
    j_60 = t;
    t = g_60;
    {
      ATerm x_7 (ATerm t)
      {
        ATerm s_40 = t;
        if((PushChoice() == 0))
          {
            t = lit_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_40;
          }
        return(t);
      }
      t = filter_1_0(x_7, t);
      k_60 = t;
      t = (ATerm) ATmakeAppl(sym__4, j_60, k_60, (ATerm)ATinsert(ATempty, h_60), term_l_17);
      t = seq2abox_0_0(t);
      l_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_60, l_60);
      t = instantiate_0_0(t);
    }
  }
  return(t);
}
ATerm appl2abox_0_0 (ATerm t)
{
  ATerm t_40 = t;
  int a_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = application_to_abox_0_0(t);
      ;
      LocalPopChoice(a_41);
    }
  else
    {
      t = t_40;
      t = fatal_ambiguity_0_0(t);
    }
  return(t);
}
ATerm opt_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  p_60 = t;
  if(match_cons(t, sym_opt_1))
    {
      n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_60);
  m_60 = t;
  t = n_60;
  t = y_93(t);
  o_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, o_60), m_60);
  return(t);
}
ATerm filter_1_0 (ATerm a_115 (ATerm), ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 (ATerm t)
            {
              t = filter_1_0(a_115, t);
              return(t);
            }
            t = Cons_2_0(a_115, y_7, t);
            ;
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            {
              ATerm w_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm h_41 = ATgetFirst((ATermList) t);
                  w_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_60;
              t = filter_1_0(a_115, t);
            }
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  t = f_102(t);
  {
    ATerm z_7 (ATerm t)
    {
      t = topdown_1_0(f_102, t);
      return(t);
    }
    t = SRTS_all(z_7, t);
  }
  return(t);
}
ATerm sometd_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm y_60 (ATerm t)
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_103(t);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = SRTS_some(y_60, t);
      }
    return(t);
  }
  t = y_60(t);
  return(t);
}
ATerm repeat_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm z_60 (ATerm t)
  {
    ATerm a_8 (ATerm t)
    {
      t = h_101(t);
      t = z_60(t);
      return(t);
    }
    t = try_1_0(a_8, t);
    return(t);
  }
  t = z_60(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm a_61 = NULL;
  ATerm b_8 (ATerm t)
  {
    ATerm b_61 = NULL;
    b_61 = t;
    t = SSL_explode_string(b_61);
    return(t);
  }
  t = map_1_0(b_8, t);
  t = concat_0_0(t);
  a_61 = t;
  t = SSL_implode_string(a_61);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      e_61 = ATgetArgument(t, 0);
      t = e_61;
    }
  else
    {
      ATerm n_61 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          e_61 = ATgetArgument(t, 0);
          f_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_61;
      {
        ATerm c_8 (ATerm t)
        {
          ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
          if(match_cons(t, sym_selector_2))
            {
              o_61 = ATgetArgument(t, 0);
              p_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_int_to_string(o_61);
          q_61 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_61), term_l_41), q_61), term_k_41);
          return(t);
        }
        t = map_1_0(c_8, t);
        t = concat_0_0(t);
        n_61 = t;
        t = (ATerm) ATinsert(CheckATermList(n_61), e_61);
        t = concat_strings_0_0(t);
      }
    }
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      t_61 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, t_61);
    }
  else
    {
      ATerm c_62 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          t_61 = ATgetArgument(t, 0);
          u_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_61;
      {
        ATerm d_8 (ATerm t)
        {
          ATerm d_62 = NULL;
          if(match_cons(t, sym_selector_2))
            {
              d_62 = ATgetArgument(t, 0);
              {
                ATerm m_41 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = d_62;
          return(t);
        }
        t = map_1_0(d_8, t);
        c_62 = t;
        t = (ATerm) ATinsert(CheckATermList(c_62), t_61);
      }
    }
  return(t);
}
ATerm StoreEntry_0_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      e_62 = ATgetArgument(t, 0);
      f_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_62;
  t = mk_key_0_0(t);
  g_62 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)), g_62, (ATerm) ATmakeAppl(sym__2, e_62, f_62));
  t = e_62;
  t = path_to_string_0_0(t);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_62, f_62);
  {
    ATerm e_8 (ATerm t)
    {
      t = term_n_41;
      return(t);
    }
    t = notify_1_0(e_8, t);
  }
  return(t);
}
ATerm selector_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL;
  n_62 = t;
  if(match_cons(t, sym_selector_2))
    {
      j_62 = ATgetArgument(t, 0);
      k_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  i_62 = t;
  t = j_62;
  t = b_92(t);
  l_62 = t;
  t = k_62;
  t = c_92(t);
  m_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, l_62, m_62), i_62);
  return(t);
}
ATerm UnEscape_0_0 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_62 = ATgetFirst((ATermList) t);
      x_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_62;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = x_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_62 = ATgetFirst((ATermList) t);
      z_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_62;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(z_62), term_p_27);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(z_62), term_o_27);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_62), term_o_41);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_62), term_p_41);
            }
        }
    }
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  t = try_1_0(UnEscape_0_0, t);
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm unescape_0_0 (ATerm t)
{
  t = string_as_chars_1_0(unescape_chars_0_0, t);
  return(t);
}
ATerm at_last_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm h_63 (ATerm t)
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, f_8, t);
        t = x_108(t);
        ;
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = Cons_2_0(_id, h_63, t);
      }
    return(t);
  }
  t = h_63(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm i_63 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm v_41 = ATgetFirst((ATermList) t);
        i_63 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = i_63;
    return(t);
  }
  t = at_last_1_0(g_8, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_63 = ATgetFirst((ATermList) t);
      n_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_63;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm y_41 = t;
      int a_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_63;
          ;
          LocalPopChoice(a_42);
        }
      else
        {
          t = y_41;
          t = n_63;
          t = last_0_0(t);
        }
    }
  else
    {
      t = n_63;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm y_116 (ATerm), ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_63 = ATgetFirst((ATermList) t);
      {
        ATerm b_42 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_63;
  t = y_116(t);
  t = s_63;
  t = last_0_0(t);
  t = y_116(t);
  t = s_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_42 = ATgetFirst((ATermList) t);
      u_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_63;
  t = init_0_0(t);
  return(t);
}
ATerm un_double_quote_chars_0_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  t = unquote_chars_1_0(h_8, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  v_63 = t;
  t = SSL_explode_string(v_63);
  t = j_117(t);
  w_63 = t;
  t = SSL_implode_string(w_63);
  return(t);
}
ATerm un_double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(un_double_quote_chars_0_0, t);
  return(t);
}
ATerm S_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
  a_64 = t;
  if(match_cons(t, sym_S_1))
    {
      y_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_64);
  x_63 = t;
  t = y_63;
  t = g_92(t);
  z_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, z_63), x_63);
  return(t);
}
ATerm SOpt_2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
  l_64 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      h_64 = ATgetArgument(t, 0);
      i_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_64);
  g_64 = t;
  t = h_64;
  t = s_93(t);
  j_64 = t;
  t = i_64;
  t = t_93(t);
  k_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, j_64, k_64), g_64);
  return(t);
}
ATerm Arg2_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
  z_64 = t;
  if(match_cons(t, sym_Arg2_2))
    {
      v_64 = ATgetArgument(t, 0);
      w_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_64);
  u_64 = t;
  t = v_64;
  t = e_92(t);
  x_64 = t;
  t = w_64;
  t = f_92(t);
  y_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, x_64, y_64), u_64);
  return(t);
}
ATerm Arg_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  g_65 = t;
  if(match_cons(t, sym_Arg_1))
    {
      e_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_65);
  d_65 = t;
  t = e_65;
  t = d_92(t);
  f_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, f_65), d_65);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 (ATerm t)
      {
        ATerm k_65 = NULL;
        k_65 = t;
        t = SSL_string_to_int(k_65);
        return(t);
      }
      t = Arg_1_0(i_8, t);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      {
        ATerm f_42 = t;
        int h_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 (ATerm t)
            {
              ATerm l_65 = NULL;
              l_65 = t;
              t = SSL_string_to_int(l_65);
              return(t);
            }
            ATerm k_8 (ATerm t)
            {
              ATerm m_65 = NULL;
              m_65 = t;
              t = SSL_string_to_int(m_65);
              return(t);
            }
            t = Arg2_2_0(j_8, k_8, t);
            ;
            LocalPopChoice(h_42);
          }
        else
          {
            t = f_42;
            {
              ATerm i_42 = t;
              int j_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(j_42);
                }
              else
                {
                  t = i_42;
                  {
                    ATerm k_42 = t;
                    int m_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_8 (ATerm t)
                        {
                          t = un_double_quote_0_0(t);
                          t = unescape_0_0(t);
                          return(t);
                        }
                        t = S_1_0(l_8, t);
                        ;
                        LocalPopChoice(m_42);
                      }
                    else
                      {
                        t = k_42;
                        {
                          ATerm m_8 (ATerm t)
                          {
                            ATerm n_65 = NULL;
                            n_65 = t;
                            t = SSL_string_to_int(n_65);
                            return(t);
                          }
                          t = selector_2_0(m_8, _id, t);
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
ATerm makePPEntry_0_0 (ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    t = try_1_0(MakePPTerm_0_0, t);
    return(t);
  }
  t = topdown_1_0(o_8, t);
  return(t);
}
ATerm build_pp_table_0_0 (ATerm t)
{
  ATerm o_65 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      o_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_65;
  t = reverse_0_0(t);
  {
    ATerm p_8 (ATerm t)
    {
      t = makePPEntry_0_0(t);
      t = StoreEntry_0_0(t);
      return(t);
    }
    t = map_1_0(p_8, t);
  }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm q_65 = NULL;
  q_65 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), q_65);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = q_65;
  return(t);
}
ATerm oncetd_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm r_65 (ATerm t)
  {
    ATerm n_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_103(t);
        ;
        LocalPopChoice(o_42);
      }
    else
      {
        t = n_42;
        t = SRTS_one(r_65, t);
      }
    return(t);
  }
  t = r_65(t);
  return(t);
}
ATerm is_subterm_0_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL;
  if(match_cons(t, sym__2))
    {
      s_65 = ATgetArgument(t, 0);
      t_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_65;
  {
    ATerm q_8 (ATerm t)
    {
      if((s_65 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = oncetd_1_0(q_8, t);
    t = (ATerm) ATmakeAppl(sym__2, s_65, t_65);
  }
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm check_option_0_0 (ATerm t)
{
  ATerm u_65 = NULL,d_66 = NULL;
  u_65 = t;
  t = get_options_0_0(t);
  d_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_65, d_66);
  t = is_subterm_0_0(t);
  t = term_d_14;
  return(t);
}
ATerm has_option_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm e_66 = NULL;
  e_66 = t;
  t = term_d_14;
  t = l_123(t);
  t = check_option_0_0(t);
  t = e_66;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_8 (ATerm t)
      {
        t = term_r_42;
        return(t);
      }
      t = has_option_1_0(r_8, t);
      t = (ATerm) ATinsert(ATempty, term_s_42);
      t = fatal_error_0_0(t);
      ;
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_t_42);
    }
  return(t);
}
ATerm InId_1_0 (ATerm r_129 (ATerm), ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_42) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      f_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_66);
  if(match_cons(t, sym__2))
    {
      g_66 = ATgetArgument(t, 0);
      {
        ATerm v_42 = ATgetArgument(t, 1);
        if(((ATgetType(v_42) == AT_LIST) && !(ATisEmpty(v_42))))
          {
            h_66 = ATgetFirst((ATermList) v_42);
            {
              ATerm w_42 = (ATerm) ATgetNext((ATermList) v_42);
              if(((ATgetType(w_42) != AT_LIST) || !(ATisEmpty(w_42))))
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
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_129(t);
        ;
        LocalPopChoice(y_42);
      }
    else
      {
        t = x_42;
        t = type_failure_0_0(t);
      }
    t = h_66;
  }
  return(t);
}
ATerm termid_check_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm i_66 = NULL;
  i_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_42, i_66);
  t = InId_1_0(y_129, t);
  return(t);
}
ATerm notify_1_0 (ATerm g_130 (ATerm), ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    t = debug_1_0(g_130, t);
    return(t);
  }
  t = if_verbose1_1_0(s_8, t);
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm j_66 = NULL;
  j_66 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue)));
  t = j_66;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm u_8 (ATerm t)
      {
        t = term_a_43;
        return(t);
      }
      t = notify_1_0(u_8, t);
      t = ReadFromFile_0_0(t);
      {
        ATerm v_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = termid_check_1_0(v_8, t);
        t = build_pp_table_0_0(t);
      }
      return(t);
    }
    t = map_1_0(t_8, t);
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_66 = ATgetFirst((ATermList) t);
      l_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_112(t);
  {
    ATerm w_8 (ATerm t)
    {
      ATerm m_66 = NULL;
      m_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_66, m_66);
      t = d_112(t);
      return(t);
    }
    t = fetch_1_0(w_8, t);
    t = l_66;
  }
  return(t);
}
ATerm union_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL;
  if(match_cons(t, sym__2))
    {
      o_66 = ATgetArgument(t, 0);
      n_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_66;
  {
    ATerm p_66 (ATerm t)
    {
      ATerm i_43 = t;
      int k_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_66;
          ;
          LocalPopChoice(k_43);
        }
      else
        {
          t = i_43;
          {
            ATerm n_43 = t;
            int o_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_8 (ATerm t)
                {
                  t = n_66;
                  return(t);
                }
                t = HdMember_p__2_0(z_111, x_8, t);
                t = p_66(t);
                ;
                LocalPopChoice(o_43);
              }
            else
              {
                t = n_43;
                t = Cons_2_0(_id, p_66, t);
              }
          }
        }
      return(t);
    }
    t = p_66(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm y_8 (ATerm t)
  {
    ATerm q_66 = NULL;
    if(match_cons(t, sym__2))
      {
        q_66 = ATgetArgument(t, 0);
        if((q_66 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(y_8, t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm t)
{
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_113(t);
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      {
        ATerm t_66 = NULL,u_66 = NULL,x_66 = NULL,y_66 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_66 = ATgetFirst((ATermList) t);
            u_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_66;
        t = b_114(t);
        x_66 = t;
        t = u_66;
        t = foldr_3_0(z_113, a_114, b_114, t);
        y_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_66, y_66);
        t = a_114(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm u_117 (ATerm), ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL;
  z_66 = t;
  t = SSL_explode_term(z_66);
  if(match_cons(t, sym__2))
    {
      ATerm t_43 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_67;
  t = foldr_3_0(s_117, t_117, u_117, t);
  return(t);
}
ATerm collect_om_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_67 = NULL;
      t = v_112(t);
      b_67 = t;
      t = (ATerm) ATinsert(ATempty, b_67);
      ;
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      {
        ATerm z_8 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm b_9 (ATerm t)
        {
          t = collect_om_1_0(v_112, t);
          return(t);
        }
        t = crush_3_0(z_8, union_0_0, b_9, t);
      }
    }
  return(t);
}
ATerm collect_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  t = collect_om_1_0(w_112, t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL;
  if(match_cons(t, sym__2))
    {
      e_67 = ATgetArgument(t, 0);
      d_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_67;
  {
    ATerm c_9 (ATerm t)
    {
      ATerm f_67 = NULL;
      if(match_cons(t, sym_PP_Table_1))
        {
          f_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_67;
      return(t);
    }
    t = collect_1_0(c_9, t);
    t = reverse_0_0(t);
    t = read_pp_tables_0_0(t);
    t = d_67;
    {
      ATerm d_9 (ATerm t)
      {
        ATerm e_9 (ATerm t)
        {
          ATerm g_67 = NULL;
          if(match_cons(t, sym_cf_1))
            {
              g_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_67;
          return(t);
        }
        t = sometd_1_0(e_9, t);
        return(t);
      }
      t = repeat_1_0(d_9, t);
      {
        ATerm f_9 (ATerm t)
        {
          ATerm h_9 (ATerm t)
          {
            ATerm i_9 (ATerm t)
            {
              ATerm h_67 = NULL;
              h_67 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = h_67;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_43 = ATgetFirst((ATermList) t);
                      ATerm z_43 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = h_67;
                }
              {
                ATerm j_9 (ATerm t)
                {
                  ATerm a_44 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm l_9 (ATerm t)
                      {
                        if(!(match_cons(t, sym_layout_0)))
                          _fail(t);
                        return(t);
                      }
                      t = opt_1_0(l_9, t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = a_44;
                    }
                  {
                    ATerm b_44 = t;
                    if((PushChoice() == 0))
                      {
                        t = layout_1_0(_id, t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_44;
                      }
                  }
                  return(t);
                }
                t = filter_1_0(j_9, t);
              }
              return(t);
            }
            t = try_1_0(i_9, t);
            return(t);
          }
          t = topdown_1_0(h_9, t);
          t = appl2abox_0_0(t);
          return(t);
        }
        ATerm g_9 (ATerm t)
        {
          ATerm o_9 (ATerm t)
          {
            t = layout_1_0(_id, t);
            return(t);
          }
          t = collect_p__1_0(o_9, t);
          return(t);
        }
        t = split_2_0(f_9, g_9, t);
        t = insert_layout_0_0(t);
        {
          ATerm q_9 (ATerm t)
          {
            t = e_67;
            return(t);
          }
          t = split_2_0(q_9, _id, t);
        }
      }
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL;
  k_67 = t;
  t = term_d_14;
  t = whoami_0_0(t);
  l_67 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_67), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_67;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      {
        ATerm o_67 = NULL,p_67 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_67 = ATgetFirst((ATermList) t);
            p_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_67;
        {
          ATerm r_9 (ATerm t)
          {
            t = p_67;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_9, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL;
  t_67 = t;
  t = SSL_explode_term(t_67);
  if(match_cons(t, sym__2))
    {
      ATerm f_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_67;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm v_67 (ATerm t)
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_67, t);
        ;
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_108(t);
      }
    return(t);
  }
  t = v_67(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL;
  if(match_cons(t, sym__2))
    {
      x_67 = ATgetArgument(t, 0);
      w_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_67;
  {
    ATerm s_9 (ATerm t)
    {
      t = w_67;
      return(t);
    }
    t = at_end_1_0(s_9, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_44 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(j_44);
    }
  else
    {
      t = i_44;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_67 = NULL;
  ATerm t_9 (ATerm t)
  {
    ATerm z_67 = NULL;
    z_67 = t;
    t = SSL_explode_string(z_67);
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    ATerm a_68 = NULL;
    a_68 = t;
    t = SSL_explode_string(a_68);
    return(t);
  }
  t = _2_0(t_9, u_9, t);
  t = conc_0_0(t);
  y_67 = t;
  t = SSL_implode_string(y_67);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_68 = NULL;
      g_68 = t;
      t = SSL_is_string(g_68);
      ;
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      {
        ATerm m_44 = t;
        int n_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_9, t);
            ;
            LocalPopChoice(n_44);
          }
        else
          {
            t = m_44;
            {
              ATerm k_68 = NULL,q_68 = NULL,r_68 = NULL;
              k_68 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_68 = ATgetArgument(t, 0);
                  t = q_68;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_68 = ATgetArgument(t, 0);
                      t = q_68;
                      {
                        ATerm o_44 = t;
                        int p_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_44);
                          }
                        else
                          {
                            t = o_44;
                            {
                              ATerm w_9 (ATerm t)
                              {
                                t = term_q_44;
                                return(t);
                              }
                              t = debug_1_0(w_9, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm v_68 = NULL,w_68 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_68 = ATgetArgument(t, 0);
                          r_68 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_68;
                      t = eval_config_0_0(t);
                      v_68 = t;
                      t = r_68;
                      t = eval_config_0_0(t);
                      w_68 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_68, w_68);
                      t = conc_strings_0_0(t);
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
  ATerm z_68 = NULL;
  z_68 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_68);
  {
    ATerm a_10 (ATerm t)
    {
      ATerm b_69 = NULL;
      t = eval_config_0_0(t);
      b_69 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_68, b_69);
      t = b_69;
      return(t);
    }
    t = try_1_0(a_10, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_121 (ATerm), ATerm t)
{
  ATerm b_10 (ATerm t)
  {
    ATerm f_69 = NULL,g_69 = NULL;
    f_69 = t;
    t = term_r_44;
    t = get_config_0_0(t);
    g_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_69, term_s_17);
    t = geq_0_0(t);
    t = f_69;
    t = m_121(t);
    return(t);
  }
  t = try_1_0(b_10, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm c_10 (ATerm t)
  {
    ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_44 = ATgetArgument(t, 0);
        if(match_cons(s_44, sym_Stream_1))
          {
            h_69 = ATgetArgument(s_44, 0);
          }
        else
          _fail(t);
        i_69 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(h_69, i_69);
    j_69 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), j_69);
    k_69 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, k_69);
    return(t);
  }
  t = WriteToFile_1_0(c_10, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm i_120 (ATerm), ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
  if(match_cons(t, sym__2))
    {
      l_69 = ATgetArgument(t, 0);
      m_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_69, term_t_44);
  t = open_stream_0_0(t);
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_69, m_69);
  t = i_120(t);
  t = fclose_0_0(t);
  t = m_69;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_44 = ATgetArgument(t, 0);
        if(match_cons(u_44, sym_Stream_1))
          {
            o_69 = ATgetArgument(u_44, 0);
          }
        else
          _fail(t);
        p_69 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(o_69, p_69);
    q_69 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, q_69);
    return(t);
  }
  t = WriteToFile_1_0(e_10, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL;
  r_69 = t;
  {
    ATerm f_10 (ATerm t)
    {
      ATerm v_44 = t;
      int w_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_10 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                s_69 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(g_10, t);
          ;
          LocalPopChoice(w_44);
        }
      else
        {
          t = v_44;
          t = term_x_44;
          s_69 = t;
        }
      return(t);
    }
    t = _2_0(f_10, _id, t);
    t = r_69;
    {
      ATerm h_10 (ATerm t)
      {
        ATerm i_10 (ATerm t)
        {
          t = not_null(s_69);
          return(t);
        }
        t = split_2_0(i_10, _id, t);
        return(t);
      }
      t = _2_0(_id, h_10, t);
      {
        ATerm y_44 = t;
        int z_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_10 (ATerm t)
            {
              ATerm l_10 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(l_10, t);
              return(t);
            }
            t = _2_0(j_10, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(z_44);
          }
        else
          {
            t = y_44;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
  t_69 = t;
  t = dtime_0_0(t);
  t = t_69;
  t = k_123(t);
  u_69 = t;
  t = dtime_0_0(t);
  v_69 = t;
  t = u_69;
  if(match_cons(t, sym__2))
    {
      w_69 = ATgetArgument(t, 0);
      x_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_69), (ATerm) ATmakeAppl(sym_Runtime_1, v_69)), x_69);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_70 (ATerm f_70, ATerm t)
  {
    t = SSL_fclose(f_70);
    return(t);
  }
  ATerm i_70 = NULL,j_70 = NULL;
  j_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_70 = ATgetArgument(t, 0);
      {
        ATerm a_45 = t;
        int b_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_70);
            ;
            LocalPopChoice(b_45);
          }
        else
          {
            t = a_45;
            t = l_70(j_70, t);
          }
      }
    }
  else
    {
      t = l_70(j_70, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL;
  m_70 = t;
  t = u_119(t);
  n_70 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_70), n_70));
  t = m_70;
  return(t);
}
ATerm _2_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL;
  t_70 = t;
  if(match_cons(t, sym__2))
    {
      p_70 = ATgetArgument(t, 0);
      q_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_70);
  o_70 = t;
  t = p_70;
  t = t_84(t);
  r_70 = t;
  t = q_70;
  t = u_84(t);
  s_70 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_70, s_70), o_70);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_70 = NULL;
  t = SSL_stdin_stream();
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_70);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_70 = NULL;
  t = SSL_stdout_stream();
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_70);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_70 = NULL;
  t = SSL_stderr_stream();
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_70);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_71 = NULL;
  b_71 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_71;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_71;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_71;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      ATerm d_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_15 = NULL,i_15 = NULL;
        d_15 = t;
        t = SSL_explode_term(d_15);
        if(match_cons(t, sym__2))
          {
            ATerm g_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_45) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_45 = ATgetArgument(t, 1);
              if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
                {
                  i_15 = ATgetFirst((ATermList) h_45);
                  {
                    ATerm i_45 = (ATerm) ATgetNext((ATermList) h_45);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_15;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        {
          ATerm j_45 = t;
          int k_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
              ATerm m_10 (ATerm t)
              {
                ATerm h_71 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    h_71 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = h_71;
                return(t);
              }
              t = _2_0(m_10, _id, t);
              if(match_cons(t, sym__2))
                {
                  e_71 = ATgetArgument(t, 0);
                  f_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(e_71, f_71);
              g_71 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, g_71);
              ;
              LocalPopChoice(k_45);
            }
          else
            {
              t = j_45;
              {
                ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
                ATerm n_10 (ATerm t)
                {
                  ATerm l_71 = NULL;
                  l_71 = t;
                  t = SSL_is_string(l_71);
                  return(t);
                }
                t = _2_0(n_10, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_71 = ATgetArgument(t, 0);
                    j_71 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(i_71, j_71);
                k_71 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_71);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_71 = NULL;
      p_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_71, term_n_45);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
      {
        ATerm o_10 (ATerm t)
        {
          t = term_t_45;
          return(t);
        }
        t = debug_1_0(o_10, t);
        _fail(t);
      }
    }
  m_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(o_71);
  n_71 = t;
  t = m_71;
  t = fclose_0_0(t);
  t = n_71;
  return(t);
}
ATerm split_2_0 (ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
  r_71 = t;
  t = m_115(t);
  s_71 = t;
  t = r_71;
  t = n_115(t);
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_71, t_71);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  u_71 = t;
  {
    ATerm u_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              v_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(q_10, t);
        ;
        LocalPopChoice(v_45);
      }
    else
      {
        t = u_45;
        t = term_w_45;
        v_71 = t;
      }
    t = u_71;
    {
      ATerm r_10 (ATerm t)
      {
        t = not_null(v_71);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, r_10, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm t_10 (ATerm t)
  {
    ATerm x_71 = NULL;
    x_71 = t;
    if(match_string(t, "-k"))
      {
        t = x_71;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = x_71;
      }
    return(t);
  }
  ATerm u_10 (ATerm t)
  {
    ATerm y_71 = NULL,z_71 = NULL;
    y_71 = t;
    t = SSL_string_to_int(y_71);
    z_71 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_71);
    t = y_71;
    return(t);
  }
  ATerm x_10 (ATerm t)
  {
    t = term_p_46;
    return(t);
  }
  t = ArgOption_3_0(t_10, u_10, x_10, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_46 = t;
  int r_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_10 (ATerm t)
      {
        ATerm b_72 = NULL;
        b_72 = t;
        if(match_string(t, "-S"))
          {
            t = b_72;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = b_72;
          }
        return(t);
      }
      ATerm z_10 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_t_46;
        return(t);
      }
      ATerm a_11 (ATerm t)
      {
        t = term_u_46;
        return(t);
      }
      t = Option_3_0(y_10, z_10, a_11, t);
      ;
      LocalPopChoice(r_46);
    }
  else
    {
      t = q_46;
      {
        ATerm v_46 = t;
        int w_46 = stack_ptr;
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
              ATerm c_72 = NULL,d_72 = NULL;
              c_72 = t;
              t = SSL_string_to_int(c_72);
              d_72 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_72);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, c_72);
              return(t);
            }
            ATerm d_11 (ATerm t)
            {
              t = term_x_46;
              return(t);
            }
            t = ArgOption_3_0(b_11, c_11, d_11, t);
            ;
            LocalPopChoice(w_46);
          }
        else
          {
            t = v_46;
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
                t = term_z_46;
                return(t);
              }
              ATerm g_11 (ATerm t)
              {
                t = term_b_47;
                return(t);
              }
              t = Option_3_0(e_11, f_11, g_11, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_47 = t;
  int d_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(d_47);
    }
  else
    {
      t = c_47;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm i_11 (ATerm t)
  {
    ATerm f_72 = NULL;
    f_72 = t;
    if(match_string(t, "-o"))
      {
        t = f_72;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_72;
      }
    return(t);
  }
  ATerm j_11 (ATerm t)
  {
    ATerm g_72 = NULL;
    g_72 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_72);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_72);
    return(t);
  }
  ATerm k_11 (ATerm t)
  {
    t = term_e_47;
    return(t);
  }
  t = ArgOption_3_0(i_11, j_11, k_11, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_47);
    }
  else
    {
      t = f_47;
      {
        ATerm l_11 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_11 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_h_47;
          return(t);
        }
        ATerm n_11 (ATerm t)
        {
          t = term_l_47;
          return(t);
        }
        t = Option_3_0(l_11, m_11, n_11, t);
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm o_11 (ATerm t)
  {
    ATerm i_72 = NULL;
    i_72 = t;
    if(match_string(t, "-i"))
      {
        t = i_72;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = i_72;
      }
    return(t);
  }
  ATerm p_11 (ATerm t)
  {
    ATerm j_72 = NULL;
    j_72 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_72);
    t = (ATerm) ATmakeAppl(sym_Input_1, j_72);
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    t = term_m_47;
    return(t);
  }
  t = ArgOption_3_0(o_11, p_11, q_11, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      {
        ATerm u_47 = t;
        int v_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(v_47);
          }
        else
          {
            t = u_47;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_72 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_14;
  t = whoami_0_0(t);
  k_72 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_72));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_47;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t)
{
  ATerm z_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_113(t);
      ;
      LocalPopChoice(a_48);
    }
  else
    {
      t = z_47;
      {
        ATerm n_72 = NULL,o_72 = NULL,r_72 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_72 = ATgetFirst((ATermList) t);
            o_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_72;
        t = foldr_2_0(x_113, y_113, t);
        r_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_72, r_72);
        t = y_113(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL;
  s_72 = t;
  t = SSL_explode_term(s_72);
  if(match_cons(t, sym__2))
    {
      ATerm b_48 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_72;
  t = foldr_2_0(q_117, r_117, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_72 = NULL;
  t = times_0_0(t);
  {
    ATerm r_11 (ATerm t)
    {
      t = term_s_46;
      return(t);
    }
    ATerm s_11 (ATerm t)
    {
      ATerm v_72 = NULL,w_72 = NULL;
      if(match_cons(t, sym__2))
        {
          v_72 = ATgetArgument(t, 0);
          w_72 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm h_48 = t;
        int i_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(v_72, w_72);
            ;
            LocalPopChoice(i_48);
          }
        else
          {
            t = h_48;
            t = SSL_addr(v_72, w_72);
          }
      }
      return(t);
    }
    t = crush_2_0(r_11, s_11, t);
    u_72 = t;
    t = SSL_TicksToSeconds(u_72);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  f_73 = t;
  if(match_cons(t, sym__2))
    {
      g_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_73;
        if((g_73 != t))
          {
            _fail(t);
          }
        t = f_73;
        ;
        LocalPopChoice(k_48);
      }
    else
      {
        t = j_48;
        t = f_73;
        {
          ATerm b_49 = t;
          int c_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_73, h_73);
              ;
              LocalPopChoice(c_49);
            }
          else
            {
              t = b_49;
              t = SSL_gtr(g_73, h_73);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_73, h_73);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_121 (ATerm), ATerm t)
{
  ATerm t_11 (ATerm t)
  {
    ATerm k_73 = NULL,l_73 = NULL;
    k_73 = t;
    t = term_r_44;
    t = get_config_0_0(t);
    l_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_73, term_l_17);
    t = geq_0_0(t);
    t = k_73;
    t = l_121(t);
    return(t);
  }
  t = try_1_0(t_11, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm w_11 (ATerm t)
  {
    ATerm n_73 = NULL,o_73 = NULL;
    t = run_time_0_0(t);
    n_73 = t;
    t = term_d_14;
    t = whoami_0_0(t);
    o_73 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), n_73), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), o_73));
    t = (ATerm) ATmakeAppl(sym__2, term_d_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_49), n_73), term_i_49), o_73));
    return(t);
  }
  t = if_verbose1_1_0(w_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm i_124 (ATerm), ATerm t)
{
  ATerm o_49 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_49;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_49);
    }
  else
    {
      t = o_49;
      {
        ATerm x_11 (ATerm t)
        {
          ATerm r_49 = t;
          int t_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(t_49);
            }
          else
            {
              t = r_49;
              {
                ATerm u_49 = t;
                int v_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(v_49);
                  }
                else
                  {
                    t = u_49;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(x_11, t);
      }
    }
  t = i_124(t);
  return(t);
}
ATerm map_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm q_73 (ATerm t)
  {
    ATerm x_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_49);
      }
    else
      {
        t = x_49;
        t = Cons_2_0(w_107, q_73, t);
      }
    return(t);
  }
  t = q_73(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm t)
{
  ATerm s_73 = NULL,y_73 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_73 = ATgetFirst((ATermList) t);
      y_73 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_75 = NULL,c_76 = NULL;
        t = y_73;
        t = b_0(t);
        h_75 = t;
        t = s_73;
        t = a_0(t);
        c_76 = t;
        t = y_73;
        {
          ATerm y_11 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_75), c_76);
            return(t);
          }
          t = reverse_acc_2_0(a_0, y_11, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_14;
      t = b_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, a_12, t);
  return(t);
}
ATerm Program_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm d_76 = NULL,f_76 = NULL,p_76 = NULL,q_76 = NULL;
  q_76 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_76);
  d_76 = t;
  t = f_76;
  t = u_91(t);
  p_76 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_76), d_76);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_50 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_47;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_50);
    }
  else
    {
      t = b_50;
      {
        ATerm b_12 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(b_12, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_d_50;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm c_12 (ATerm t)
    {
      ATerm w_76 = NULL;
      w_76 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, w_76), term_e_50);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(c_12, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,a_77 = NULL,b_77 = NULL;
  b_77 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_77);
  x_76 = t;
  t = y_76;
  t = v_91(t);
  a_77 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, a_77), x_76);
  return(t);
}
ATerm fetch_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm f_77 (ATerm t)
  {
    ATerm i_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_108, _id, t);
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = i_50;
        t = Cons_2_0(_id, f_77, t);
      }
    return(t);
  }
  t = f_77(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm i_125 (ATerm), ATerm t)
{
  t = fetch_1_0(i_125, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_77 = NULL,p_77 = NULL;
  h_77 = t;
  {
    ATerm p_50 = t;
    int q_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_77;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_50 = ATgetFirst((ATermList) t);
                ATerm s_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_77;
          }
        ;
        LocalPopChoice(q_50);
      }
    else
      {
        t = p_50;
        t = (ATerm) ATinsert(ATempty, h_77);
      }
    p_77 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_77);
    t = h_77;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_47;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm u_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_100(t);
      ;
      LocalPopChoice(v_50);
    }
  else
    {
      t = u_50;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_12 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm e_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_a_51;
        return(t);
      }
      ATerm f_12 (ATerm t)
      {
        t = term_b_51;
        return(t);
      }
      t = Option_3_0(d_12, e_12, f_12, t);
      ;
      LocalPopChoice(x_50);
    }
  else
    {
      t = w_50;
      {
        ATerm h_12 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_12 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_51;
          return(t);
        }
        ATerm j_12 (ATerm t)
        {
          t = term_e_51;
          return(t);
        }
        t = Option_3_0(h_12, i_12, j_12, t);
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm k_12 (ATerm t)
  {
    ATerm x_78 = NULL;
    x_78 = t;
    if(match_string(t, "--help"))
      {
        t = x_78;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = x_78;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = x_78;
          }
      }
    return(t);
  }
  ATerm n_12 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_f_51;
    return(t);
  }
  ATerm o_12 (ATerm t)
  {
    t = term_g_51;
    return(t);
  }
  t = Option_3_0(k_12, n_12, o_12, t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm t)
{
  ATerm y_78 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,g_79 = NULL,h_79 = NULL;
  h_79 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_79 = ATgetFirst((ATermList) t);
      c_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_79);
  y_78 = t;
  t = b_79;
  t = c_86(t);
  d_79 = t;
  t = c_79;
  t = d_86(t);
  g_79 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_79), d_79), y_78);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_126 (ATerm), ATerm t)
{
  ATerm o_79 = NULL;
  o_79 = t;
  {
    ATerm p_12 (ATerm t)
    {
      t = term_h_51;
      t = l_126(t);
      return(t);
    }
    t = try_1_0(p_12, t);
    t = o_79;
    {
      ATerm q_12 (ATerm t)
      {
        ATerm p_79 = NULL;
        p_79 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_79);
        t = (ATerm) ATmakeAppl(sym_Program_1, p_79);
        return(t);
      }
      ATerm r_12 (ATerm t)
      {
        ATerm i_51 = t;
        int m_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_51 = t;
            int o_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_51);
              }
            else
              {
                t = n_51;
                t = l_126(t);
                t = Cons_2_0(_id, r_12, t);
              }
            ;
            LocalPopChoice(m_51);
          }
        else
          {
            t = i_51;
            {
              ATerm s_79 = NULL,t_79 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_79 = ATgetFirst((ATermList) t);
                  t_79 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_79), (ATerm) ATmakeAppl(sym_Undefined_1, s_79));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_12, r_12, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm k_126 (ATerm), ATerm t)
{
  ATerm b_80 = NULL,y_80 = NULL,d_81 = NULL;
  b_80 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = b_80;
  {
    ATerm s_12 (ATerm t)
    {
      ATerm p_51 = t;
      int q_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_126(t);
          ;
          LocalPopChoice(q_51);
        }
      else
        {
          t = p_51;
          {
            ATerm r_51 = t;
            int s_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(s_51);
              }
            else
              {
                t = r_51;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_12, t);
    {
      ATerm t_12 (ATerm t)
      {
        ATerm t_51 = t;
        int u_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_81 = NULL;
            i_81 = t;
            {
              ATerm v_51 = t;
              int w_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_81;
                  {
                    ATerm x_51 = t;
                    int y_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_49;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(y_51);
                      }
                    else
                      {
                        t = x_51;
                        {
                          ATerm u_12 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(u_12, t);
                        }
                      }
                    t = i_81;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(w_51);
                }
              else
                {
                  t = v_51;
                  t = term_z_50;
                  t = get_config_0_0(t);
                  t = i_81;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(u_51);
          }
        else
          {
            t = t_51;
            {
              ATerm v_12 (ATerm t)
              {
                ATerm w_12 (ATerm t)
                {
                  y_80 = t;
                  return(t);
                }
                t = Undefined_1_0(w_12, t);
                return(t);
              }
              t = option_defined_1_0(v_12, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_80)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_d_49, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_80)), term_z_51));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(t_12, t);
      d_81 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = d_81;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_124 (ATerm), ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm t)
{
  ATerm j_18 = NULL;
  t = parse_options_1_0(k_124, t);
  j_18 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), j_18);
  t = j_18;
  t = m_124(t);
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_124, t);
        ;
        LocalPopChoice(c_52);
      }
    else
      {
        t = b_52;
        {
          ATerm d_52 = t;
          int g_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_124(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_52);
            }
          else
            {
              t = d_52;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm h_52 = t;
    int l_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_124(t);
        ;
        LocalPopChoice(l_52);
      }
    else
      {
        t = h_52;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm y_12 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(z_123, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(x_12, b_124, c_124, y_12, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm t)
{
  ATerm z_12 (ATerm t)
  {
    ATerm a_13 (ATerm t)
    {
      ATerm m_82 = NULL,n_82 = NULL;
      m_82 = t;
      t = term_x_47;
      t = get_config_0_0(t);
      n_82 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, n_82));
      t = m_82;
      return(t);
    }
    t = if_verbose2_1_0(a_13, t);
    return(t);
  }
  t = iowrap_4_0(t_123, u_123, v_123, z_12, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm t)
{
  t = iowrap_3_0(r_123, s_123, default_usage_0_0, t);
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  ATerm d_13 (ATerm t)
  {
    ATerm m_52 = t;
    int n_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm h_13 (ATerm t)
        {
          t = term_o_52;
          return(t);
        }
        ATerm i_13 (ATerm t)
        {
          t = term_p_52;
          return(t);
        }
        t = Option_3_0(e_13, h_13, i_13, t);
        ;
        LocalPopChoice(n_52);
      }
    else
      {
        t = m_52;
        {
          ATerm q_52 = t;
          int r_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_13 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm m_13 (ATerm t)
              {
                t = term_v_14;
                return(t);
              }
              ATerm p_13 (ATerm t)
              {
                t = term_s_52;
                return(t);
              }
              t = Option_3_0(l_13, m_13, p_13, t);
              ;
              LocalPopChoice(r_52);
            }
          else
            {
              t = q_52;
              {
                ATerm q_13 (ATerm t)
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
                    _fail(t);
                  return(t);
                }
                ATerm t_13 (ATerm t)
                {
                  ATerm o_82 = NULL;
                  o_82 = t;
                  t = (ATerm) ATmakeAppl(sym_PP_Table_1, o_82);
                  return(t);
                }
                ATerm u_13 (ATerm t)
                {
                  t = term_t_52;
                  return(t);
                }
                t = ArgOption_3_0(q_13, t_13, u_13, t);
              }
            }
        }
      }
    return(t);
  }
  t = iowrap_2_0(asfix2abox_0_0, d_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}

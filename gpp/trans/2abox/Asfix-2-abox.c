#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_PP_Table_1;
Symbol sym_layout_1;
Symbol sym_Verbose_0;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_SOpt_2;
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
static void init_module_constructors (void)
{
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
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
}
ATerm term_j_60;
ATerm term_i_60;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_z_59;
ATerm term_h_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_z_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_f_58;
ATerm term_w_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_o_57;
ATerm term_j_57;
ATerm term_g_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_x_56;
ATerm term_v_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_w_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_e_55;
ATerm term_x_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_x_53;
ATerm term_q_53;
ATerm term_a_53;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_q_52;
ATerm term_o_52;
ATerm term_m_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_y_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_g_51;
ATerm term_u_49;
ATerm term_r_49;
ATerm term_u_48;
ATerm term_j_47;
ATerm term_g_47;
ATerm term_a_47;
ATerm term_t_46;
ATerm term_p_46;
ATerm term_h_46;
ATerm term_v_45;
ATerm term_p_45;
ATerm term_j_45;
ATerm term_c_45;
ATerm term_z_44;
ATerm term_v_44;
ATerm term_q_44;
ATerm term_m_44;
ATerm term_g_44;
ATerm term_d_44;
ATerm term_a_44;
ATerm term_w_43;
ATerm term_p_43;
ATerm term_m_43;
ATerm term_f_43;
ATerm term_r_42;
ATerm term_h_42;
ATerm term_d_42;
ATerm term_w_41;
ATerm term_t_41;
ATerm term_k_41;
ATerm term_e_41;
ATerm term_y_40;
ATerm term_t_40;
ATerm term_q_40;
ATerm term_n_40;
ATerm term_i_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_p_39;
ATerm term_n_39;
ATerm term_h_39;
ATerm term_w_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_f_38;
ATerm term_x_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_h_37;
ATerm term_c_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_h_35;
ATerm term_t_34;
ATerm term_x_33;
ATerm term_l_31;
ATerm term_x_29;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_x_26;
ATerm term_q_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_a_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_q_20;
ATerm term_d_19;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_SOpt_2, term_c_16, term_d_16);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_lit_1, term_i_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_lit_1, term_k_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_SOpt_2, term_d_27, term_e_27);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Arg_1, term_v_14);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeInt(48);
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
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym__2, term_m_52, term_o_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(sym__2, term_k_55, term_n_55);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_55);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(sym__2, term_s_55, term_p_14);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_z_14);
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(sym__2, term_o_57, term_p_14);
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(sym__2, term_s_57, term_p_14);
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(sym__2, term_b_57, term_p_14);
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym__2, term_e_59, term_p_14);
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm m_10 (ATerm b_58, ATerm c_58, ATerm a_58, ATerm t);
ATerm Option_3_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm n_10 (ATerm r_68, ATerm t);
static ATerm h_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm t_128 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm collect_p__1_0 (ATerm g_128 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm e_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm g_97 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm d_38 (ATerm e_33, ATerm l_33, ATerm m_33, ATerm t);
static ATerm p_10 (ATerm r_21, ATerm q_21, ATerm t);
ATerm instantiate_list_1_0 (ATerm m_128 (ATerm), ATerm t);
static ATerm r_10 (ATerm g_24, ATerm h_24, ATerm e_24, ATerm f_24, ATerm t);
static ATerm y_42 (ATerm u_40, ATerm w_40, ATerm z_40, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm o_128 (ATerm), ATerm t);
static ATerm s_10 (ATerm c_47, ATerm d_47, ATerm t);
static ATerm t_10 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm m_25, ATerm n_25, ATerm t);
ATerm genzip_4_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm nzip_1_0 (ATerm h_106 (ATerm), ATerm t);
static ATerm x_10 (ATerm d_25, ATerm e_25, ATerm c_25, ATerm i_25, ATerm t);
static ATerm z_10 (ATerm k_46, ATerm l_46, ATerm t);
static ATerm a_11 (ATerm q_31, ATerm o_31, ATerm p_31, ATerm t);
static ATerm r_2 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm b_11 (ATerm s_65, ATerm r_65, ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm k_127 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
static ATerm c_11 (ATerm u_43, ATerm v_43, ATerm t);
ATerm flat_alt_0_0 (ATerm t);
ATerm _2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
static ATerm u_91 (ATerm u_90, ATerm v_90, ATerm w_90, ATerm t);
ATerm number_node_1_0 (ATerm o_127 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm symbol2abox_1_0 (ATerm l_127 (ATerm), ATerm t);
static ATerm x_98 (ATerm b_97, ATerm c_97, ATerm d_97, ATerm t);
static ATerm y_98 (ATerm c_98, ATerm d_98, ATerm e_98, ATerm f_98, ATerm g_98, ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm escape_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
static ATerm d_104 (ATerm t_103, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm o_107 (ATerm k_107, ATerm t);
static ATerm p_6 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
static ATerm g_11 (ATerm u_28, ATerm v_28, ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm z_128 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm w_113 (ATerm w_112, ATerm x_112, ATerm y_112, ATerm t);
static ATerm w_6 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm m_11 (ATerm d_22, ATerm e_22, ATerm c_22, ATerm b_22, ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm n_11 (ATerm k_21, ATerm i_21, ATerm j_21, ATerm l_21, ATerm t);
ATerm filter_1_0 (ATerm c_111 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm f_97 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm t_98 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm i_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm o_11 (ATerm p_65, ATerm q_65, ATerm t);
ATerm unescape_chars_1_0 (ATerm n_113 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm t_104 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm unquote_chars_2_0 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm w_11 (ATerm o_65, ATerm t);
ATerm oncetd_1_0 (ATerm j_98 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
static ATerm z_11 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm l_34, ATerm k_34, ATerm t);
static ATerm a_12 (ATerm w_107 (ATerm), ATerm h_34, ATerm g_34, ATerm t);
ATerm foldr_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
ATerm collect_om_2_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm b_12 (ATerm u_26, ATerm t_26, ATerm t);
static ATerm d_12 (ATerm i_43, ATerm j_43, ATerm t);
static ATerm e_12 (ATerm k_28, ATerm l_28, ATerm t);
static ATerm g_12 (ATerm i_103 (ATerm), ATerm p_198, ATerm q_28, ATerm t);
static ATerm f_12 (ATerm g_28, ATerm h_28, ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm h_120 (ATerm), ATerm t);
static ATerm c_134 (ATerm w_133, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_12 (ATerm m_28, ATerm t);
static ATerm j_12 (ATerm k_43, ATerm l_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_135 (ATerm m_134, ATerm t);
static ATerm o_135 (ATerm q_134, ATerm r_134, ATerm s_134, ATerm t);
static ATerm p_135 (ATerm a_135, ATerm b_135, ATerm c_135, ATerm t);
static ATerm k_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_104 (ATerm), ATerm t);
static ATerm i_12 (ATerm b_42, ATerm c_42, ATerm t);
ATerm debug_1_0 (ATerm g_103 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm q_118 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_12 (ATerm b_53, ATerm c_53, ATerm t);
static ATerm y_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_12 (ATerm e_46, ATerm f_46, ATerm t);
ATerm foldr_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm p_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_118 (ATerm), ATerm t);
static ATerm t_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_11 (ATerm t);
ATerm need_help_1_0 (ATerm f_121 (ATerm), ATerm t);
ATerm map_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm n_12 (ATerm s_59, ATerm t_59, ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_123 (ATerm), ATerm t);
static ATerm i_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm parse_options_1_0 (ATerm h_123 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t);
static ATerm q_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm iowrap_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm m_14 (ATerm t);
ATerm io_Asfix_2_abox_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,j_0 = NULL,m_0 = NULL;
  a_0 = t;
  t = term_p_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_q_14;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_14), b_0), term_s_14);
  m_0 = t;
  t = SSL_printnl(j_0, m_0);
  t = term_v_14;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,w_0 = NULL,x_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL;
      t = term_p_14;
      t = o_0(t);
      y_0 = t;
      t = term_y_14;
      z_0 = t;
      t = term_z_14;
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, y_0);
      t = m_10(z_0, a_1, y_0, t);
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
      t = n_0(t);
      g_1 = t;
      t = (ATerm) ATinsert(CheckATermList(x_0), g_1);
    }
  return(t);
}
static ATerm m_10 (ATerm b_58, ATerm c_58, ATerm a_58, ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_58, c_58);
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_15 = ATgetArgument(t, 0);
            ATerm d_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_58, c_58);
        t = n_12(b_58, c_58, t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = (ATerm) ATempty;
      }
  }
  l_1 = t;
  t = (ATerm) ATinsert(CheckATermList(l_1), a_58);
  m_1 = t;
  t = SSL_table_put(b_58, c_58, m_1);
  t = j_1;
  return(t);
}
ATerm Option_3_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
      t = term_p_14;
      t = k_0(t);
      w_1 = t;
      t = term_y_14;
      x_1 = t;
      t = term_z_14;
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, w_1);
      t = m_10(x_1, y_1, w_1, t);
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
      t = g_0(t);
      t = term_p_14;
      t = i_0(t);
      b_2 = t;
      t = (ATerm) ATinsert(CheckATermList(v_1), b_2);
    }
  return(t);
}
static ATerm n_10 (ATerm r_68, ATerm t)
{
  ATerm e_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL;
      t = has_significant_layout_0_0(t);
      t = SSL_concat_strings(r_68);
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, c_2)));
      LocalPopChoice(g_15);
    }
  else
    {
      t = e_15;
      {
        ATerm d_2 = NULL;
        t = SSL_concat_strings(r_68);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, d_2);
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm h_15 = t;
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
      t = h_15;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL;
  g_2 = t;
  {
    ATerm m_15 = t;
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
        t = m_15;
      }
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
  t = filter_1_0(h_0, t);
  {
    ATerm n_15 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_15;
      }
  }
  t = g_2;
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
static ATerm m_5 (ATerm x_2, ATerm y_2, ATerm z_2, ATerm t)
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
static ATerm p_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm InsLayout_1_0 (ATerm t_128 (ATerm), ATerm t)
{
  static ATerm l_5 (ATerm t)
  {
    static ATerm n_5 (ATerm q_3, ATerm r_3, ATerm s_3, ATerm t)
    {
      ATerm u_3 = NULL,a_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
      t = t_128(t);
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
    static ATerm p_5 (ATerm d_4, ATerm e_4, ATerm f_4, ATerm g_4, ATerm i_4, ATerm t)
    {
      ATerm k_4 = NULL,l_4 = NULL,n_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_4, g_4);
      t = t_128(t);
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
            t = n_10(u_4, t);
            t_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_4))), t_4), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_4))))), r_4);
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm f_16 = t;
              int g_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_4 = NULL,x_4 = NULL;
                  ATerm h_16 = t;
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
                  t = n_10(x_4, t);
                  w_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(s_4), n_4), w_4), k_4), r_4);
                  LocalPopChoice(g_16);
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
            ATerm i_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_5(b_5, j_5, a_5, t);
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
static ATerm r_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_16 = t;
      if((PushChoice() == 0))
        {
          ATerm b_23 = NULL,d_23 = NULL,e_23 = NULL,p_7 = NULL;
          e_23 = t;
          if(match_cons(t, sym_layout_1))
            {
              d_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_23);
          b_23 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, d_23);
          p_7 = t;
          t = SSLsetAnnotations(p_7, b_23);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_16;
        }
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm b_25 = NULL,h_25 = NULL;
        b_25 = t;
        if(match_cons(t, sym_layout_1))
          {
            h_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm p_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_17 = NULL,i_17 = NULL,n_17 = NULL,q_7 = NULL;
              t = SSLgetAnnotations(b_25);
              i_17 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, h_25);
              q_7 = t;
              t = SSLsetAnnotations(q_7, i_17);
              n_17 = t;
              t = term_b_16;
              t = get_options_0_0(t);
              t = oncetd_1_0(s_0, t);
              t = n_17;
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  b_17 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_10(b_17, t);
              LocalPopChoice(q_16);
            }
          else
            {
              t = p_16;
              {
                ATerm v_17 = NULL,y_17 = NULL,r_7 = NULL;
                t = SSLgetAnnotations(b_25);
                y_17 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, h_25);
                r_7 = t;
                t = SSLsetAnnotations(r_7, y_17);
                {
                  ATerm r_16 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm b_18 = NULL;
                      b_18 = t;
                      t = term_b_16;
                      t = get_options_0_0(t);
                      t = oncetd_1_0(v_0, t);
                      t = b_18;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = r_16;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    v_17 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_10(v_17, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  if(!(match_cons(t, sym_Conservative_0)))
    _fail(t);
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,j_25 = NULL,l_25 = NULL,o_25 = NULL,n_7 = NULL,j_7 = NULL;
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
    static ATerm h_26 (ATerm t)
    {
      static ATerm i_27 (ATerm u_14, ATerm w_14, ATerm x_14, ATerm t)
      {
        ATerm f_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_7 = NULL,l_7 = NULL;
        t = SSLgetAnnotations(u_14);
        f_15 = t;
        t = w_14;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_15 = ATgetFirst((ATermList) t);
            k_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_14);
        i_15 = t;
        t = (ATerm) ATinsert(CheckATermList(k_15), j_15);
        l_7 = t;
        t = SSLsetAnnotations(l_7, i_15);
        l_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, x_14);
        m_7 = t;
        t = SSLsetAnnotations(m_7, f_15);
        t = InsLayout_1_0(h_26, t);
        return(t);
      }
      ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
      t_15 = t;
      if(match_cons(t, sym__2))
        {
          r_15 = ATgetArgument(t, 0);
          s_15 = ATgetArgument(t, 1);
          t = r_15;
          if(match_cons(t, sym_H_2))
            {
              p_15 = ATgetArgument(t, 0);
              q_15 = ATgetArgument(t, 1);
              {
                ATerm u_16 = t;
                int v_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_1 = NULL,i_1 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                    t = InsLayout_1_0(h_26, t);
                    if(match_cons(t, sym__2))
                      {
                        h_1 = ATgetArgument(t, 0);
                        i_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, p_15, h_1), i_1);
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
                          t = i_27(t_15, r_15, s_15, t);
                          LocalPopChoice(x_16);
                        }
                      else
                        {
                          t = w_16;
                          t = t_15;
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  p_15 = ATgetArgument(t, 0);
                  q_15 = ATgetArgument(t, 1);
                  {
                    ATerm y_16 = t;
                    int z_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_2 = NULL,w_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                        t = InsLayout_1_0(h_26, t);
                        if(match_cons(t, sym__2))
                          {
                            v_2 = ATgetArgument(t, 0);
                            w_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, p_15, v_2), w_2);
                        LocalPopChoice(z_16);
                      }
                    else
                      {
                        t = y_16;
                        {
                          ATerm a_17 = t;
                          int c_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_27(t_15, r_15, s_15, t);
                              LocalPopChoice(c_17);
                            }
                          else
                            {
                              t = a_17;
                              t = t_15;
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      p_15 = ATgetArgument(t, 0);
                      q_15 = ATgetArgument(t, 1);
                      {
                        ATerm d_17 = t;
                        int e_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_5 = NULL,u_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                            t = InsLayout_1_0(h_26, t);
                            if(match_cons(t, sym__2))
                              {
                                t_5 = ATgetArgument(t, 0);
                                u_5 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, p_15, t_5), u_5);
                            LocalPopChoice(e_17);
                          }
                        else
                          {
                            t = d_17;
                            {
                              ATerm f_17 = t;
                              int g_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_27(t_15, r_15, s_15, t);
                                  LocalPopChoice(g_17);
                                }
                              else
                                {
                                  t = f_17;
                                  t = t_15;
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          p_15 = ATgetArgument(t, 0);
                          q_15 = ATgetArgument(t, 1);
                          o_15 = ATgetArgument(t, 2);
                          {
                            ATerm h_17 = t;
                            int j_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_6 = NULL,i_6 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, o_15, s_15);
                                t = InsLayout_1_0(h_26, t);
                                if(match_cons(t, sym__2))
                                  {
                                    h_6 = ATgetArgument(t, 0);
                                    i_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, p_15, q_15, h_6), i_6);
                                LocalPopChoice(j_17);
                              }
                            else
                              {
                                t = h_17;
                                {
                                  ATerm k_17 = t;
                                  int l_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_27(t_15, r_15, s_15, t);
                                      LocalPopChoice(l_17);
                                    }
                                  else
                                    {
                                      t = k_17;
                                      t = t_15;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              p_15 = ATgetArgument(t, 0);
                              q_15 = ATgetArgument(t, 1);
                              {
                                ATerm m_17 = t;
                                int o_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_8 = NULL,c_8 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                                    t = InsLayout_1_0(h_26, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        a_8 = ATgetArgument(t, 0);
                                        c_8 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, p_15, a_8), c_8);
                                    LocalPopChoice(o_17);
                                  }
                                else
                                  {
                                    t = m_17;
                                    {
                                      ATerm p_17 = t;
                                      int q_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = i_27(t_15, r_15, s_15, t);
                                          LocalPopChoice(q_17);
                                        }
                                      else
                                        {
                                          t = p_17;
                                          t = t_15;
                                        }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  p_15 = ATgetArgument(t, 0);
                                  q_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_17 = t;
                                    int s_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_8 = NULL,o_8 = NULL,s_8 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__2, p_15, s_15);
                                        t = InsLayout_1_0(h_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            l_8 = ATgetArgument(t, 0);
                                            {
                                              ATerm t_17 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                                        t = InsLayout_1_0(h_26, t);
                                        if(match_cons(t, sym__2))
                                          {
                                            o_8 = ATgetArgument(t, 0);
                                            s_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, l_8, o_8), s_8);
                                        LocalPopChoice(s_17);
                                      }
                                    else
                                      {
                                        t = r_17;
                                        {
                                          ATerm u_17 = t;
                                          int w_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = i_27(t_15, r_15, s_15, t);
                                              LocalPopChoice(w_17);
                                            }
                                          else
                                            {
                                              t = u_17;
                                              t = t_15;
                                            }
                                        }
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      p_15 = ATgetArgument(t, 0);
                                      q_15 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_17 = t;
                                        int z_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm e_10 = NULL,g_10 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                                            t = InsLayout_1_0(h_26, t);
                                            if(match_cons(t, sym__2))
                                              {
                                                e_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, p_15, e_10), g_10);
                                            LocalPopChoice(z_17);
                                          }
                                        else
                                          {
                                            t = x_17;
                                            {
                                              ATerm a_18 = t;
                                              int c_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = i_27(t_15, r_15, s_15, t);
                                                  LocalPopChoice(c_18);
                                                }
                                              else
                                                {
                                                  t = a_18;
                                                  t = t_15;
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          p_15 = ATgetArgument(t, 0);
                                          q_15 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_18 = t;
                                            int e_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_11 = NULL,s_11 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                                                t = InsLayout_1_0(h_26, t);
                                                if(match_cons(t, sym__2))
                                                  {
                                                    r_11 = ATgetArgument(t, 0);
                                                    s_11 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, p_15, r_11), s_11);
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
                                                      t = i_27(t_15, r_15, s_15, t);
                                                      LocalPopChoice(g_18);
                                                    }
                                                  else
                                                    {
                                                      t = f_18;
                                                      t = t_15;
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              p_15 = ATgetArgument(t, 0);
                                              q_15 = ATgetArgument(t, 1);
                                              {
                                                ATerm i_18 = t;
                                                int j_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm j_13 = NULL,p_13 = NULL;
                                                    t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                                                    t = InsLayout_1_0(h_26, t);
                                                    if(match_cons(t, sym__2))
                                                      {
                                                        j_13 = ATgetArgument(t, 0);
                                                        p_13 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, p_15, j_13), p_13);
                                                    LocalPopChoice(j_18);
                                                  }
                                                else
                                                  {
                                                    t = i_18;
                                                    {
                                                      ATerm k_18 = t;
                                                      int l_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = i_27(t_15, r_15, s_15, t);
                                                          LocalPopChoice(l_18);
                                                        }
                                                      else
                                                        {
                                                          t = k_18;
                                                          t = t_15;
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  p_15 = ATgetArgument(t, 0);
                                                  q_15 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm m_18 = t;
                                                    int o_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm x_15 = NULL,a_16 = NULL;
                                                        t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
                                                        t = InsLayout_1_0(h_26, t);
                                                        if(match_cons(t, sym__2))
                                                          {
                                                            x_15 = ATgetArgument(t, 0);
                                                            a_16 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, p_15, x_15), a_16);
                                                        LocalPopChoice(o_18);
                                                      }
                                                    else
                                                      {
                                                        t = m_18;
                                                        {
                                                          ATerm p_18 = t;
                                                          int q_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = i_27(t_15, r_15, s_15, t);
                                                              LocalPopChoice(q_18);
                                                            }
                                                          else
                                                            {
                                                              t = p_18;
                                                              t = t_15;
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
                                                      t = i_27(t_15, r_15, s_15, t);
                                                      LocalPopChoice(s_18);
                                                    }
                                                  else
                                                    {
                                                      t = r_18;
                                                      t = t_15;
                                                    }
                                                }
                                            }
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
          t = t_15;
        }
      return(t);
    }
    t = h_26(t);
  }
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
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_18 = ATgetFirst((ATermList) t);
                ATerm x_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, q_6);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
      }
  }
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_6, r_6);
  n_7 = t;
  t = SSLsetAnnotations(n_7, o_6);
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      {
        ATerm y_18 = ATgetArgument(t, 1);
        if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
          {
            n_6 = ATgetFirst((ATermList) y_18);
            {
              ATerm z_18 = (ATerm) ATgetNext((ATermList) y_18);
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
  o_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_25 = ATgetFirst((ATermList) t);
      l_25 = (ATerm) ATgetNext((ATermList) t);
      t = l_25;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_25;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), o_25);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_e_16), o_25);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm g_128 (ATerm), ATerm t)
{
  static ATerm n_27 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL;
        t = g_128(t);
        m_27 = t;
        t = (ATerm) ATinsert(ATempty, m_27);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm h_18 = NULL,n_18 = NULL;
          n_18 = t;
          t = SSL_explode_term(n_18);
          if(match_cons(t, sym__2))
            {
              ATerm c_19 = ATgetArgument(t, 0);
              h_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_18;
          t = foldr_3_0(b_1, conc_0_0, n_27, t);
        }
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,r_8 = NULL;
  w_27 = t;
  if(match_cons(t, sym_amb_1))
    {
      v_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_27);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, v_27);
  r_8 = t;
  t = SSLsetAnnotations(r_8, u_27);
  t = term_q_14;
  p_27 = t;
  t = (ATerm) ATinsert(ATempty, term_d_19);
  t_27 = t;
  t = SSL_printnl(p_27, t_27);
  t = term_v_14;
  o_27 = t;
  t = SSL_exit(o_27);
  t = (ATerm) ATinsert(ATempty, term_d_19);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_30;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          l_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_20 = NULL,j_20 = NULL,u_8 = NULL;
            t = SSLgetAnnotations(j_30);
            a_20 = t;
            t = k_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_30;
            t = flat_list_0_0(t);
            j_20 = t;
            t = (ATerm) ATinsert(CheckATermList(j_20), k_30);
            u_8 = t;
            t = SSLsetAnnotations(u_8, a_20);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            {
              ATerm g_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,e_21 = NULL,w_8 = NULL;
                  t = SSLgetAnnotations(j_30);
                  a_21 = t;
                  t = k_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = k_30;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm i_19 = ATgetFirst((ATermList) t);
                          ATerm j_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = k_30;
                    }
                  t = (ATerm) ATinsert(CheckATermList(l_30), k_30);
                  w_8 = t;
                  t = SSLsetAnnotations(w_8, a_21);
                  e_21 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_20 = ATgetFirst((ATermList) t);
                      {
                        ATerm k_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = e_21;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm m_19 = ATgetFirst((ATermList) t);
                      y_20 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, z_20, y_20);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = g_19;
                  {
                    ATerm w_21 = NULL,z_21 = NULL,x_8 = NULL;
                    t = SSLgetAnnotations(j_30);
                    w_21 = t;
                    t = l_30;
                    t = flat_list_0_0(t);
                    z_21 = t;
                    t = (ATerm) ATinsert(CheckATermList(z_21), k_30);
                    x_8 = t;
                    t = SSLsetAnnotations(x_8, w_21);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,t_30 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      t_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
      {
        ATerm w_30 = NULL,y_30 = NULL;
        t = term_p_14;
        t = e_0(t);
        y_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_30, y_30);
        t = index_0_0(t);
        w_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_30, w_30);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm a_31 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          t_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_p_14;
      t = e_0(t);
      a_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_30, a_31);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    t = bottomup_1_0(g_97, t);
    return(t);
  }
  t = SRTS_all(c_1, t);
  t = g_97(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  c_33 = t;
  if(match_cons(t, sym_Arg_1))
    {
      d_33 = ATgetArgument(t, 0);
      {
        ATerm k_22 = NULL,c_9 = NULL;
        t = SSLgetAnnotations(c_33);
        k_22 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, d_33);
        c_9 = t;
        t = SSLsetAnnotations(c_9, k_22);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          d_33 = ATgetArgument(t, 0);
          b_33 = ATgetArgument(t, 1);
          {
            ATerm y_22 = NULL,e_9 = NULL;
            t = SSLgetAnnotations(c_33);
            y_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, d_33, b_33);
            e_9 = t;
            t = SSLsetAnnotations(e_9, y_22);
          }
        }
      else
        {
          ATerm u_23 = NULL,f_9 = NULL;
          if(match_cons(t, sym_S_1))
            {
              d_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_33);
          u_23 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, d_33);
          f_9 = t;
          t = SSLsetAnnotations(f_9, u_23);
        }
    }
  return(t);
}
static ATerm d_38 (ATerm e_33, ATerm l_33, ATerm m_33, ATerm t)
{
  ATerm d_34 = NULL,h_9 = NULL;
  t = SSLgetAnnotations(e_33);
  d_34 = t;
  t = l_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = m_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_33, m_33);
  h_9 = t;
  t = SSLsetAnnotations(h_9, d_34);
  return(t);
}
static ATerm p_10 (ATerm r_21, ATerm q_21, ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,d_32 = NULL,g_9 = NULL;
  x_31 = t;
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_31);
  z_31 = t;
  t = a_32;
  t = collect_p__1_0(d_1, t);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_32, b_32);
  g_9 = t;
  t = SSLsetAnnotations(g_9, z_31);
  {
    static ATerm b_38 (ATerm t)
    {
      static ATerm e_38 (ATerm j_34, ATerm n_34, ATerm o_34, ATerm p_34, ATerm t)
      {
        ATerm s_34 = NULL,w_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_34, p_34);
        t = b_38(t);
        if(match_cons(t, sym__2))
          {
            s_34 = ATgetArgument(t, 0);
            w_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_34), (ATerm) ATmakeAppl(sym_Arg_1, j_34)), (ATerm) ATinsert(CheckATermList(w_34), o_34));
        return(t);
      }
      static ATerm g_38 (ATerm d_35, ATerm e_35, ATerm f_35, ATerm m_35, ATerm n_35, ATerm t)
      {
        ATerm z_35 = NULL,c_36 = NULL;
        t = e_35;
        if(((v_31 != NULL) && (v_31 != t)))
          _fail(t);
        else
          v_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_35, n_35);
        t = b_38(t);
        if(match_cons(t, sym__2))
          {
            z_35 = ATgetArgument(t, 0);
            c_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_35), (ATerm) ATmakeAppl(sym_Arg2_2, d_35, e_35)), (ATerm) ATinsert(CheckATermList(c_36), m_35));
        return(t);
      }
      static ATerm h_38 (ATerm g_36, ATerm i_36, ATerm j_36, ATerm t)
      {
        ATerm p_36 = NULL,s_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, i_36, j_36);
        t = b_38(t);
        if(match_cons(t, sym__2))
          {
            p_36 = ATgetArgument(t, 0);
            s_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_36), g_36), s_36);
        return(t);
      }
      ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,j_37 = NULL,m_37 = NULL,n_37 = NULL;
      b_37 = t;
      if(match_cons(t, sym__2))
        {
          d_37 = ATgetArgument(t, 0);
          j_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          n_37 = (ATerm) ATgetNext((ATermList) t);
          t = d_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_37 = ATgetFirst((ATermList) t);
              f_37 = (ATerm) ATgetNext((ATermList) t);
              t = e_37;
              if(match_cons(t, sym_Arg_1))
                {
                  z_36 = ATgetArgument(t, 0);
                  {
                    ATerm n_19 = t;
                    int o_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = d_38(b_37, d_37, j_37, t);
                        LocalPopChoice(o_19);
                      }
                    else
                      {
                        t = n_19;
                        {
                          ATerm p_19 = t;
                          int q_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = e_38(z_36, f_37, m_37, n_37, t);
                              LocalPopChoice(q_19);
                            }
                          else
                            {
                              t = p_19;
                              t = h_38(e_37, f_37, n_37, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Arg2_2))
                    {
                      z_36 = ATgetArgument(t, 0);
                      a_37 = ATgetArgument(t, 1);
                      {
                        ATerm r_19 = t;
                        int s_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = d_38(b_37, d_37, j_37, t);
                            LocalPopChoice(s_19);
                          }
                        else
                          {
                            t = r_19;
                            {
                              ATerm t_19 = t;
                              int u_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = g_38(z_36, a_37, f_37, m_37, n_37, t);
                                  LocalPopChoice(u_19);
                                }
                              else
                                {
                                  t = t_19;
                                  t = h_38(e_37, f_37, n_37, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm v_19 = t;
                      int w_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_38(b_37, d_37, j_37, t);
                          LocalPopChoice(w_19);
                        }
                      else
                        {
                          t = v_19;
                          t = h_38(e_37, f_37, n_37, t);
                        }
                    }
                }
            }
          else
            {
              t = d_38(b_37, d_37, j_37, t);
            }
        }
      else
        {
          t = d_37;
          t = d_38(b_37, d_37, j_37, t);
        }
      return(t);
    }
    t = b_38(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      w_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_21, w_31);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  static ATerm q_39 (ATerm t)
  {
    ATerm i_39 = NULL,j_39 = NULL,l_39 = NULL;
    i_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_39;
      }
    else
      {
        ATerm p_24 = NULL,q_24 = NULL,s_24 = NULL,p_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_39 = ATgetFirst((ATermList) t);
            l_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_39;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_19 = ATgetFirst((ATermList) t);
            ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_39);
        p_24 = t;
        t = term_p_14;
        t = m_128(t);
        {
          static ATerm e_1 (ATerm t)
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_20 = t;
                int e_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm f_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, j_39);
                      return(t);
                    }
                    t = Instantiate_1_0(f_1, t);
                    LocalPopChoice(e_20);
                  }
                else
                  {
                    t = d_20;
                    t = flat_list_0_0(t);
                  }
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
              }
            return(t);
          }
          t = bottomup_1_0(e_1, t);
        }
        s_24 = t;
        t = l_39;
        t = q_39(t);
        q_24 = t;
        t = (ATerm) ATinsert(CheckATermList(q_24), s_24);
        p_9 = t;
        t = SSLsetAnnotations(p_9, p_24);
      }
    return(t);
  }
  t = q_39(t);
  return(t);
}
static ATerm r_10 (ATerm g_24, ATerm h_24, ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm v_39 = NULL,x_39 = NULL,y_39 = NULL,j_40 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = not_null(x_39);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, e_24, (ATerm) ATinsert(ATempty, f_24));
  t = conc_0_0(t);
  y_39 = t;
  t = g_24;
  if(match_cons(t, sym_iter_1))
    {
      j_40 = ATgetArgument(t, 0);
      {
        ATerm f_25 = NULL,r_9 = NULL;
        t = SSLgetAnnotations(g_24);
        f_25 = t;
        t = j_40;
        v_39 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, j_40);
        r_9 = t;
        t = SSLsetAnnotations(r_9, f_25);
      }
    }
  else
    {
      ATerm q_25 = NULL,s_9 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          j_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_24);
      q_25 = t;
      t = j_40;
      v_39 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, j_40);
      s_9 = t;
      t = SSLsetAnnotations(s_9, q_25);
    }
  t = (ATerm) ATmakeAppl(sym__2, g_24, y_39);
  t = get_pp_entry_0_0(t);
  if(((x_39 != NULL) && (x_39 != t)))
    _fail(t);
  else
    x_39 = t;
  t = h_24;
  {
    static ATerm k_1 (ATerm t)
    {
      ATerm k_40 = NULL;
      k_40 = t;
      t = (ATerm) ATmakeAppl(sym__4, v_39, k_40, y_39, term_v_14);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  t = instantiate_list_1_0(n_1, t);
  return(t);
}
static ATerm y_42 (ATerm u_40, ATerm w_40, ATerm z_40, ATerm t)
{
  ATerm f_41 = NULL,w_9 = NULL;
  t = SSLgetAnnotations(z_40);
  f_41 = t;
  t = w_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_40), u_40);
  w_9 = t;
  t = SSLsetAnnotations(w_9, f_41);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm o_128 (ATerm), ATerm t)
{
  static ATerm u_42 (ATerm t)
  {
    static ATerm z_42 (ATerm m_41, ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
    {
      ATerm z_41 = NULL,a_42 = NULL,e_42 = NULL,x_9 = NULL;
      t = p_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm f_20 = ATgetFirst((ATermList) t);
          ATerm g_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_41);
      z_41 = t;
      t = term_p_14;
      t = o_128(t);
      {
        static ATerm o_1 (ATerm t)
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_20 = t;
              int l_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm p_1 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, n_41), m_41);
                    return(t);
                  }
                  t = Instantiate_1_0(p_1, t);
                  LocalPopChoice(l_20);
                }
              else
                {
                  t = k_20;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
            }
          return(t);
        }
        t = bottomup_1_0(o_1, t);
      }
      e_42 = t;
      t = o_41;
      t = u_42(t);
      a_42 = t;
      t = (ATerm) ATinsert(CheckATermList(a_42), e_42);
      x_9 = t;
      t = SSLsetAnnotations(x_9, z_41);
      return(t);
    }
    ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,p_42 = NULL,q_42 = NULL;
    k_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_42 = ATgetFirst((ATermList) t);
            m_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_42;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_42 = ATgetFirst((ATermList) t);
            q_42 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm m_20 = t;
              int n_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_42(l_42, m_42, k_42, t);
                  LocalPopChoice(n_20);
                }
              else
                {
                  t = m_20;
                  t = z_42(l_42, p_42, q_42, k_42, t);
                }
            }
          }
        else
          {
            t = y_42(l_42, m_42, k_42, t);
          }
      }
    return(t);
  }
  t = u_42(t);
  return(t);
}
static ATerm s_10 (ATerm c_47, ATerm d_47, ATerm t)
{
  t = SSL_mod(c_47, d_47);
  return(t);
}
static ATerm t_10 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm m_25, ATerm n_25, ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_43 = NULL,r_43 = NULL,z_43 = NULL,i_44 = NULL;
      t = term_q_20;
      z_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_25, term_q_20);
      t = s_10(m_25, z_43, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_p_14;
      t = i_95(t);
      q_43 = t;
      t = term_p_14;
      t = j_95(t);
      r_43 = t;
      t = (ATerm) ATmakeAppl(sym__4, q_43, n_25, r_43, term_q_20);
      t = symbol2abox_0_0(t);
      i_44 = t;
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_44;
            {
              ATerm t_20 = t;
              if((PushChoice() == 0))
                {
                  ATerm x_25 = NULL;
                  x_25 = t;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = x_25;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm u_20 = ATgetFirst((ATermList) t);
                          ATerm v_20 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = x_25;
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_20;
                }
            }
            t = (ATerm) ATinsert(ATempty, i_44);
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = i_44;
          }
      }
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm r_44 = NULL,s_44 = NULL,f_45 = NULL;
        t = term_p_14;
        t = h_95(t);
        r_44 = t;
        t = term_p_14;
        t = j_95(t);
        s_44 = t;
        t = (ATerm) ATmakeAppl(sym__4, r_44, n_25, s_44, term_v_14);
        t = symbol2abox_0_0(t);
        f_45 = t;
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_45;
              {
                ATerm b_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_26 = NULL;
                    f_26 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = f_26;
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
                        t = f_26;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_21;
                  }
              }
              t = (ATerm) ATinsert(ATempty, f_45);
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
              t = f_45;
            }
        }
      }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  static ATerm w_45 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_105(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          ATerm l_45 = NULL,n_45 = NULL,o_45 = NULL,q_45 = NULL,s_45 = NULL,t_45 = NULL,f_10 = NULL;
          t = w_105(t);
          t_45 = t;
          if(match_cons(t, sym__2))
            {
              n_45 = ATgetArgument(t, 0);
              o_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_45);
          l_45 = t;
          t = n_45;
          t = y_105(t);
          q_45 = t;
          t = o_45;
          t = w_45(t);
          s_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_45, s_45);
          f_10 = t;
          t = SSLsetAnnotations(f_10, l_45);
          t = x_105(t);
        }
      }
    return(t);
  }
  t = w_45(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      ATerm m_21 = ATgetArgument(t, 1);
      if(((ATgetType(m_21) != AT_LIST) || !(ATisEmpty(m_21))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm z_45 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,i_46 = NULL;
  if(match_cons(t, sym__2))
    {
      z_45 = ATgetArgument(t, 0);
      {
        ATerm n_21 = ATgetArgument(t, 1);
        if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
          {
            b_46 = ATgetFirst((ATermList) n_21);
            c_46 = (ATerm) ATgetNext((ATermList) n_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_v_14;
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_45, term_v_14);
  t = l_12(z_45, i_46, t);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_45, b_46), (ATerm) ATmakeAppl(sym__2, d_46, c_46));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  if(match_cons(t, sym__2))
    {
      m_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_46), m_46);
  return(t);
}
ATerm nzip_1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, x_45);
  t = genzip_4_0(q_1, r_1, s_1, h_106, t);
  return(t);
}
static ATerm x_10 (ATerm d_25, ATerm e_25, ATerm c_25, ATerm i_25, ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,y_46 = NULL,z_46 = NULL,y_47 = NULL,z_47 = NULL;
  static ATerm q_2 (ATerm t)
  {
    t = not_null(y_46);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, c_25, (ATerm) ATinsert(ATempty, i_25));
  t = conc_0_0(t);
  z_46 = t;
  t = d_25;
  if(match_cons(t, sym_iter_sep_2))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
      {
        ATerm m_26 = NULL,i_10 = NULL;
        t = SSLgetAnnotations(d_25);
        m_26 = t;
        t = y_47;
        v_46 = t;
        t = z_47;
        w_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, y_47, z_47);
        i_10 = t;
        t = SSLsetAnnotations(i_10, m_26);
      }
    }
  else
    {
      ATerm c_27 = NULL,u_10 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          y_47 = ATgetArgument(t, 0);
          z_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_25);
      c_27 = t;
      t = y_47;
      v_46 = t;
      t = z_47;
      w_46 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, y_47, z_47);
      u_10 = t;
      t = SSLsetAnnotations(u_10, c_27);
    }
  t = (ATerm) ATmakeAppl(sym__2, d_25, z_46);
  t = get_pp_entry_0_0(t);
  if(((y_46 != NULL) && (y_46 != t)))
    _fail(t);
  else
    y_46 = t;
  t = e_25;
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm b_48 = NULL,c_48 = NULL;
      static ATerm z_1 (ATerm t)
      {
        t = v_46;
        return(t);
      }
      static ATerm a_2 (ATerm t)
      {
        t = w_46;
        return(t);
      }
      static ATerm e_2 (ATerm t)
      {
        t = z_46;
        return(t);
      }
      static ATerm p_2 (ATerm t)
      {
        t = i_25;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          b_48 = ATgetArgument(t, 0);
          c_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_10(z_1, a_2, e_2, p_2, b_48, c_48, t);
      return(t);
    }
    t = nzip_1_0(u_1, t);
  }
  t = instantiate_sep_list_1_0(q_2, t);
  return(t);
}
static ATerm z_10 (ATerm k_46, ATerm l_46, ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_46, l_46);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      t = SSL_subtr(k_46, l_46);
    }
  return(t);
}
static ATerm a_11 (ATerm q_31, ATerm o_31, ATerm p_31, ATerm t)
{
  ATerm j_48 = NULL,l_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_31, term_q_20);
  t = geq_0_0(t);
  t = term_v_14;
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_31, term_v_14);
  t = z_10(q_31, l_48, t);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, p_31);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm s_48 = NULL,v_48 = NULL,x_48 = NULL;
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      {
        ATerm s_21 = ATgetArgument(t, 1);
        if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
          {
            v_48 = ATgetFirst((ATermList) s_21);
            x_48 = (ATerm) ATgetNext((ATermList) s_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_11(s_48, v_48, x_48, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm q_48 = NULL;
  t = repeat_2_0(r_2, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if(((ATgetType(t_21) != AT_INT) || (ATgetInt((ATermInt) t_21) != 1)))
        _fail(t);
      {
        ATerm u_21 = ATgetArgument(t, 1);
        if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
          {
            q_48 = ATgetFirst((ATermList) u_21);
            {
              ATerm v_21 = (ATerm) ATgetNext((ATermList) u_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_48;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm x_21 = t;
  if((PushChoice() == 0))
    {
      ATerm c_68 = NULL,p_68 = NULL,s_68 = NULL,i_11 = NULL;
      s_68 = t;
      if(match_cons(t, sym_lit_1))
        {
          p_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_68);
      c_68 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, p_68);
      i_11 = t;
      t = SSLsetAnnotations(i_11, c_68);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_21;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_21 = t;
  if((PushChoice() == 0))
    {
      ATerm t_68 = NULL,w_68 = NULL,x_68 = NULL,k_11 = NULL;
      x_68 = t;
      if(match_cons(t, sym_lit_1))
        {
          w_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_68);
      t_68 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, w_68);
      k_11 = t;
      t = SSLsetAnnotations(k_11, t_68);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_21;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm a_65 = NULL,c_65 = NULL,x_65 = NULL,a_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,p_66 = NULL,q_66 = NULL,t_66 = NULL;
  k_66 = t;
  if(match_cons(t, sym__4))
    {
      l_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
      q_66 = ATgetArgument(t, 2);
      t_66 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_66;
  if(match_cons(t, sym_seq_1))
    {
      m_66 = ATgetArgument(t, 0);
      {
        ATerm c_67 = NULL,i_67 = NULL,m_67 = NULL,q_67 = NULL,r_67 = NULL;
        static ATerm u_2 (ATerm t)
        {
          ATerm a_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_22 = t;
              int h_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm a_3 (ATerm t)
                  {
                    t = not_null(i_67);
                    return(t);
                  }
                  t = Instantiate_1_0(a_3, t);
                  LocalPopChoice(h_22);
                }
              else
                {
                  t = g_22;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(f_22);
            }
          else
            {
              t = a_22;
            }
          return(t);
        }
        t = p_66;
        if(match_cons(t, sym_appl_2))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            a_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_66, (ATerm) ATinsert(ATempty, t_66));
        t = conc_0_0(t);
        r_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, m_66), r_67);
        t = get_pp_entry_0_0(t);
        c_67 = t;
        t = m_66;
        t = filter_1_0(s_2, t);
        m_67 = t;
        t = a_66;
        t = filter_1_0(t_2, t);
        q_67 = t;
        t = (ATerm) ATmakeAppl(sym__4, m_67, q_67, r_67, term_v_14);
        t = seq2abox_0_0(t);
        if(((i_67 != NULL) && (i_67 != t)))
          _fail(t);
        else
          i_67 = t;
        t = c_67;
        t = bottomup_1_0(u_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          m_66 = ATgetArgument(t, 0);
          a_65 = ATgetArgument(t, 1);
          {
            ATerm p_28 = NULL,s_28 = NULL,t_28 = NULL;
            static ATerm t_39 (ATerm t)
            {
              ATerm w_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,k_29 = NULL,m_29 = NULL,n_29 = NULL,p_29 = NULL,q_29 = NULL,t_29 = NULL,u_29 = NULL,f_30 = NULL,q_30 = NULL,x_30 = NULL,b_31 = NULL;
              if(match_cons(t, sym__4))
                {
                  p_29 = ATgetArgument(t, 0);
                  q_29 = ATgetArgument(t, 1);
                  x_30 = ATgetArgument(t, 2);
                  b_31 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = q_29;
              if(match_cons(t, sym_appl_2))
                {
                  t_29 = ATgetArgument(t, 0);
                  u_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_29;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_30 = ATgetFirst((ATermList) t);
                  q_30 = (ATerm) ATgetNext((ATermList) t);
                  t = q_30;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = t_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          z_28 = ATgetArgument(t, 0);
                          c_29 = ATgetArgument(t, 1);
                          n_29 = ATgetArgument(t, 2);
                          t = c_29;
                          if(match_cons(t, sym_alt_2))
                            {
                              k_29 = ATgetArgument(t, 0);
                              m_29 = ATgetArgument(t, 1);
                              t = z_28;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  a_29 = ATgetFirst((ATermList) t);
                                  b_29 = (ATerm) ATgetNext((ATermList) t);
                                  t = b_29;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = p_29;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          w_28 = ATgetArgument(t, 0);
                                          y_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm j_22 = t;
                                            int l_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = a_29;
                                                if((w_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = k_29;
                                                if((w_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = m_29;
                                                if((y_28 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_28), w_28, n_29), u_29), x_30, b_31);
                                                t = t_39(t);
                                                LocalPopChoice(l_22);
                                              }
                                            else
                                              {
                                                t = j_22;
                                                {
                                                  ATerm m_22 = t;
                                                  int n_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_31 = NULL,u_31 = NULL;
                                                      t = k_29;
                                                      if((w_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = m_29;
                                                      if((y_28 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = term_v_14;
                                                      u_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__2, b_31, term_v_14);
                                                      t = l_12(b_31, u_31, t);
                                                      t_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, y_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, a_29), y_28, n_29), u_29), x_30, t_31);
                                                      t = t_39(t);
                                                      LocalPopChoice(n_22);
                                                    }
                                                  else
                                                    {
                                                      t = m_22;
                                                      {
                                                        ATerm y_32 = NULL;
                                                        static ATerm b_3 (ATerm t)
                                                        {
                                                          ATerm o_22 = t;
                                                          int p_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_22 = t;
                                                              int r_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  static ATerm c_3 (ATerm t)
                                                                  {
                                                                    t = (ATerm) ATinsert(ATempty, not_null(s_28));
                                                                    return(t);
                                                                  }
                                                                  t = Instantiate_1_0(c_3, t);
                                                                  LocalPopChoice(r_22);
                                                                }
                                                              else
                                                                {
                                                                  t = q_22;
                                                                  t = flat_list_0_0(t);
                                                                }
                                                              LocalPopChoice(p_22);
                                                            }
                                                          else
                                                            {
                                                              t = o_22;
                                                            }
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, m_66, a_65), x_30);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((p_28 != NULL) && (p_28 != t)))
                                                          _fail(t);
                                                        else
                                                          p_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, p_29, f_30, x_30, term_v_14);
                                                        t = symbol2abox_0_0(t);
                                                        if(((s_28 != NULL) && (s_28 != t)))
                                                          _fail(t);
                                                        else
                                                          s_28 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, b_31, p_28);
                                                        t = index_0_0(t);
                                                        y_32 = t;
                                                        t = (ATerm) ATinsert(ATempty, y_32);
                                                        t = bottomup_1_0(b_3, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm t_33 = NULL;
                                          static ATerm d_3 (ATerm t)
                                          {
                                            ATerm s_22 = t;
                                            int t_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm u_22 = t;
                                                int v_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    static ATerm e_3 (ATerm t)
                                                    {
                                                      t = (ATerm) ATinsert(ATempty, not_null(s_28));
                                                      return(t);
                                                    }
                                                    t = Instantiate_1_0(e_3, t);
                                                    LocalPopChoice(v_22);
                                                  }
                                                else
                                                  {
                                                    t = u_22;
                                                    t = flat_list_0_0(t);
                                                  }
                                                LocalPopChoice(t_22);
                                              }
                                            else
                                              {
                                                t = s_22;
                                              }
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, m_66, a_65), x_30);
                                          t = get_pp_entry_0_0(t);
                                          if(((p_28 != NULL) && (p_28 != t)))
                                            _fail(t);
                                          else
                                            p_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, p_29, f_30, x_30, term_v_14);
                                          t = symbol2abox_0_0(t);
                                          if(((s_28 != NULL) && (s_28 != t)))
                                            _fail(t);
                                          else
                                            s_28 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, b_31, p_28);
                                          t = index_0_0(t);
                                          t_33 = t;
                                          t = (ATerm) ATinsert(ATempty, t_33);
                                          t = bottomup_1_0(d_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm y_34 = NULL;
                                      static ATerm f_3 (ATerm t)
                                      {
                                        ATerm w_22 = t;
                                        int x_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_22 = t;
                                            int a_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                static ATerm g_3 (ATerm t)
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(s_28));
                                                  return(t);
                                                }
                                                t = Instantiate_1_0(g_3, t);
                                                LocalPopChoice(a_23);
                                              }
                                            else
                                              {
                                                t = z_22;
                                                t = flat_list_0_0(t);
                                              }
                                            LocalPopChoice(x_22);
                                          }
                                        else
                                          {
                                            t = w_22;
                                          }
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, m_66, a_65), x_30);
                                      t = get_pp_entry_0_0(t);
                                      if(((p_28 != NULL) && (p_28 != t)))
                                        _fail(t);
                                      else
                                        p_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, p_29, f_30, x_30, term_v_14);
                                      t = symbol2abox_0_0(t);
                                      if(((s_28 != NULL) && (s_28 != t)))
                                        _fail(t);
                                      else
                                        s_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, b_31, p_28);
                                      t = index_0_0(t);
                                      y_34 = t;
                                      t = (ATerm) ATinsert(ATempty, y_34);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm q_35 = NULL;
                                  static ATerm h_3 (ATerm t)
                                  {
                                    ATerm c_23 = t;
                                    int g_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm m_23 = t;
                                        int n_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm i_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(s_28));
                                              return(t);
                                            }
                                            t = Instantiate_1_0(i_3, t);
                                            LocalPopChoice(n_23);
                                          }
                                        else
                                          {
                                            t = m_23;
                                            t = flat_list_0_0(t);
                                          }
                                        LocalPopChoice(g_23);
                                      }
                                    else
                                      {
                                        t = c_23;
                                      }
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, m_66, a_65), x_30);
                                  t = get_pp_entry_0_0(t);
                                  if(((p_28 != NULL) && (p_28 != t)))
                                    _fail(t);
                                  else
                                    p_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, p_29, f_30, x_30, term_v_14);
                                  t = symbol2abox_0_0(t);
                                  if(((s_28 != NULL) && (s_28 != t)))
                                    _fail(t);
                                  else
                                    s_28 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, b_31, p_28);
                                  t = index_0_0(t);
                                  q_35 = t;
                                  t = (ATerm) ATinsert(ATempty, q_35);
                                  t = bottomup_1_0(h_3, t);
                                }
                            }
                          else
                            {
                              ATerm h_36 = NULL;
                              static ATerm j_3 (ATerm t)
                              {
                                ATerm o_23 = t;
                                int p_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_23 = t;
                                    int r_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        static ATerm k_3 (ATerm t)
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(s_28));
                                          return(t);
                                        }
                                        t = Instantiate_1_0(k_3, t);
                                        LocalPopChoice(r_23);
                                      }
                                    else
                                      {
                                        t = q_23;
                                        t = flat_list_0_0(t);
                                      }
                                    LocalPopChoice(p_23);
                                  }
                                else
                                  {
                                    t = o_23;
                                  }
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, m_66, a_65), x_30);
                              t = get_pp_entry_0_0(t);
                              if(((p_28 != NULL) && (p_28 != t)))
                                _fail(t);
                              else
                                p_28 = t;
                              t = (ATerm) ATmakeAppl(sym__4, p_29, f_30, x_30, term_v_14);
                              t = symbol2abox_0_0(t);
                              if(((s_28 != NULL) && (s_28 != t)))
                                _fail(t);
                              else
                                s_28 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_31, p_28);
                              t = index_0_0(t);
                              h_36 = t;
                              t = (ATerm) ATinsert(ATempty, h_36);
                              t = bottomup_1_0(j_3, t);
                            }
                        }
                      else
                        {
                          ATerm g_37 = NULL;
                          static ATerm l_3 (ATerm t)
                          {
                            ATerm s_23 = t;
                            int t_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_23 = t;
                                int w_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    static ATerm n_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, not_null(s_28));
                                      return(t);
                                    }
                                    t = Instantiate_1_0(n_3, t);
                                    LocalPopChoice(w_23);
                                  }
                                else
                                  {
                                    t = v_23;
                                    t = flat_list_0_0(t);
                                  }
                                LocalPopChoice(t_23);
                              }
                            else
                              {
                                t = s_23;
                              }
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, m_66, a_65), x_30);
                          t = get_pp_entry_0_0(t);
                          if(((p_28 != NULL) && (p_28 != t)))
                            _fail(t);
                          else
                            p_28 = t;
                          t = (ATerm) ATmakeAppl(sym__4, p_29, f_30, x_30, term_v_14);
                          t = symbol2abox_0_0(t);
                          if(((s_28 != NULL) && (s_28 != t)))
                            _fail(t);
                          else
                            s_28 = t;
                          t = (ATerm) ATmakeAppl(sym__2, b_31, p_28);
                          t = index_0_0(t);
                          g_37 = t;
                          t = (ATerm) ATinsert(ATempty, g_37);
                          t = bottomup_1_0(l_3, t);
                        }
                    }
                  else
                    {
                      t = t_29;
                      if(match_cons(t, sym_prod_3))
                        {
                          z_28 = ATgetArgument(t, 0);
                          c_29 = ATgetArgument(t, 1);
                          n_29 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = p_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          w_28 = ATgetArgument(t, 0);
                          y_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_28;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          a_29 = ATgetFirst((ATermList) t);
                          b_29 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = b_29;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = c_29;
                      if(match_cons(t, sym_alt_2))
                        {
                          k_29 = ATgetArgument(t, 0);
                          m_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm x_23 = t;
                        int y_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = a_29;
                            if((w_28 != t))
                              {
                                _fail(t);
                              }
                            t = k_29;
                            if((w_28 != t))
                              {
                                _fail(t);
                              }
                            t = m_29;
                            if((y_28 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_28), w_28, n_29), u_29), x_30, b_31);
                            t = t_39(t);
                            LocalPopChoice(y_23);
                          }
                        else
                          {
                            t = x_23;
                            {
                              ATerm i_38 = NULL,j_38 = NULL;
                              t = k_29;
                              if((w_28 != t))
                                {
                                  _fail(t);
                                }
                              t = m_29;
                              if((y_28 != t))
                                {
                                  _fail(t);
                                }
                              t = term_v_14;
                              j_38 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_31, term_v_14);
                              t = l_12(b_31, j_38, t);
                              i_38 = t;
                              t = (ATerm) ATmakeAppl(sym__4, y_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, a_29), y_28, n_29), u_29), x_30, i_38);
                              t = t_39(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = t_29;
                  if(match_cons(t, sym_prod_3))
                    {
                      z_28 = ATgetArgument(t, 0);
                      c_29 = ATgetArgument(t, 1);
                      n_29 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = p_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      w_28 = ATgetArgument(t, 0);
                      y_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_28;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_29 = ATgetFirst((ATermList) t);
                      b_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = b_29;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_29;
                  if(match_cons(t, sym_alt_2))
                    {
                      k_29 = ATgetArgument(t, 0);
                      m_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_23 = t;
                    int a_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = a_29;
                        if((w_28 != t))
                          {
                            _fail(t);
                          }
                        t = k_29;
                        if((w_28 != t))
                          {
                            _fail(t);
                          }
                        t = m_29;
                        if((y_28 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, w_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, w_28), w_28, n_29), u_29), x_30, b_31);
                        t = t_39(t);
                        LocalPopChoice(a_24);
                      }
                    else
                      {
                        t = z_23;
                        {
                          ATerm o_39 = NULL,s_39 = NULL;
                          t = k_29;
                          if((w_28 != t))
                            {
                              _fail(t);
                            }
                          t = m_29;
                          if((y_28 != t))
                            {
                              _fail(t);
                            }
                          t = term_v_14;
                          s_39 = t;
                          t = (ATerm) ATmakeAppl(sym__2, b_31, term_v_14);
                          t = l_12(b_31, s_39, t);
                          o_39 = t;
                          t = (ATerm) ATmakeAppl(sym__4, y_28, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, a_29), y_28, n_29), u_29), x_30, o_39);
                          t = t_39(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, q_66, (ATerm) ATinsert(ATempty, t_66));
            t = conc_0_0(t);
            t_28 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, m_66, a_65), p_66, t_28, term_v_14);
            t = t_39(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              m_66 = ATgetArgument(t, 0);
              a_65 = ATgetArgument(t, 1);
              {
                ATerm h_69 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, m_66, a_65);
                h_69 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, m_66, a_65), p_66, q_66, t_66);
                t = x_10(h_69, p_66, q_66, t_66, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  m_66 = ATgetArgument(t, 0);
                  a_65 = ATgetArgument(t, 1);
                  {
                    ATerm o_69 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, m_66, a_65);
                    o_69 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, m_66, a_65), p_66, q_66, t_66);
                    t = x_10(o_69, p_66, q_66, t_66, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      m_66 = ATgetArgument(t, 0);
                      {
                        ATerm v_69 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, m_66);
                        v_69 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, m_66), p_66, q_66, t_66);
                        t = r_10(v_69, p_66, q_66, t_66, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          m_66 = ATgetArgument(t, 0);
                          {
                            ATerm h_72 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, m_66);
                            h_72 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, m_66), p_66, q_66, t_66);
                            t = r_10(h_72, p_66, q_66, t_66, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              m_66 = ATgetArgument(t, 0);
                              t = p_66;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm b_24 = ATgetArgument(t, 0);
                                  a_66 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = a_66;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  c_65 = ATgetFirst((ATermList) t);
                                  x_65 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm b_41 = NULL,d_41 = NULL,i_41 = NULL,j_41 = NULL,l_41 = NULL,r_41 = NULL;
                                    static ATerm o_3 (ATerm t)
                                    {
                                      ATerm c_24 = t;
                                      int d_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_24 = t;
                                          int j_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm p_3 (ATerm t)
                                              {
                                                t = not_null(j_41);
                                                return(t);
                                              }
                                              t = Instantiate_1_0(p_3, t);
                                              LocalPopChoice(j_24);
                                            }
                                          else
                                            {
                                              t = i_24;
                                              t = flat_list_0_0(t);
                                            }
                                          LocalPopChoice(d_24);
                                        }
                                      else
                                        {
                                          t = c_24;
                                        }
                                      return(t);
                                    }
                                    t = x_65;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, q_66, (ATerm) ATinsert(ATempty, t_66));
                                    t = conc_0_0(t);
                                    r_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, m_66), r_41);
                                    t = get_pp_entry_0_0(t);
                                    b_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, m_66, c_65, r_41, term_v_14);
                                    t = symbol2abox_0_0(t);
                                    d_41 = t;
                                    t = (ATerm) ATinsert(ATempty, d_41);
                                    l_41 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, b_41, (ATerm) ATinsert(ATempty, d_41));
                                    t = p_10(b_41, l_41, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        i_41 = ATgetArgument(t, 0);
                                        if(((j_41 != NULL) && (j_41 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          j_41 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = i_41;
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
                              ATerm k_24 = t;
                              int l_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm m_24 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(l_24);
                                  {
                                    ATerm r_24 = t;
                                    int t_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_66;
                                        {
                                          ATerm u_24 = t;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm w_42 = NULL;
                                              w_42 = t;
                                              t = SSL_is_string(w_42);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = u_24;
                                            }
                                        }
                                        t = p_66;
                                        {
                                          ATerm v_24 = t;
                                          int w_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  a_43 = ATgetArgument(t, 0);
                                                  e_43 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = a_43;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  b_43 = ATgetArgument(t, 0);
                                                  c_43 = ATgetArgument(t, 1);
                                                  d_43 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = p_66;
                                              t = n_11(b_43, c_43, d_43, e_43, t);
                                              LocalPopChoice(w_24);
                                            }
                                          else
                                            {
                                              t = v_24;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(t_24);
                                      }
                                    else
                                      {
                                        t = r_24;
                                        t = SSL_is_string(p_66);
                                        t = (ATerm) ATmakeAppl(sym_S_1, p_66);
                                      }
                                  }
                                }
                              else
                                {
                                  t = k_24;
                                  {
                                    ATerm x_24 = t;
                                    int y_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm z_24 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(y_24);
                                        {
                                          ATerm j_44 = NULL,l_44 = NULL;
                                          t = (ATerm) ATinsert(ATempty, p_66);
                                          l_44 = t;
                                          t = SSL_implode_string(l_44);
                                          j_44 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, j_44);
                                        }
                                      }
                                    else
                                      {
                                        t = x_24;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            m_66 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, m_66);
                                      }
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
  ATerm v_73 = NULL,y_73 = NULL,a_74 = NULL,o_74 = NULL,r_74 = NULL,u_74 = NULL,v_74 = NULL,x_74 = NULL;
  if(match_cons(t, sym__4))
    {
      v_73 = ATgetArgument(t, 0);
      o_74 = ATgetArgument(t, 1);
      v_74 = ATgetArgument(t, 2);
      x_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = v_73;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_74;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_73 = ATgetFirst((ATermList) t);
          a_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_74;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_74 = ATgetFirst((ATermList) t);
          u_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_74;
      {
        ATerm a_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm k_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(g_25);
            t = y_73;
            {
              ATerm p_25 = t;
              int r_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm s_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_25);
                  {
                    ATerm t_25 = t;
                    int u_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, a_74, u_74, v_74, x_74);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(u_25);
                      }
                    else
                      {
                        t = t_25;
                        {
                          ATerm q_76 = NULL,r_76 = NULL,t_76 = NULL,u_76 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, y_73, r_74, v_74, x_74);
                          t = symbol2abox_0_0(t);
                          q_76 = t;
                          t = term_v_14;
                          u_76 = t;
                          t = (ATerm) ATmakeAppl(sym__2, x_74, term_v_14);
                          t = l_12(x_74, u_76, t);
                          t_76 = t;
                          t = (ATerm) ATmakeAppl(sym__4, a_74, u_74, v_74, t_76);
                          t = seq2abox_0_0(t);
                          r_76 = t;
                          t = (ATerm) ATinsert(CheckATermList(r_76), q_76);
                        }
                      }
                  }
                }
              else
                {
                  t = p_25;
                  {
                    ATerm g_77 = NULL,h_77 = NULL,k_77 = NULL,l_77 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, y_73, r_74, v_74, x_74);
                    t = symbol2abox_0_0(t);
                    g_77 = t;
                    t = term_v_14;
                    l_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_74, term_v_14);
                    t = l_12(x_74, l_77, t);
                    k_77 = t;
                    t = (ATerm) ATmakeAppl(sym__4, a_74, u_74, v_74, k_77);
                    t = seq2abox_0_0(t);
                    h_77 = t;
                    t = (ATerm) ATinsert(CheckATermList(h_77), g_77);
                  }
                }
            }
          }
        else
          {
            t = a_25;
            {
              ATerm d_78 = NULL,e_78 = NULL,g_78 = NULL,h_78 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, y_73, r_74, v_74, x_74);
              t = symbol2abox_0_0(t);
              d_78 = t;
              t = term_v_14;
              h_78 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_74, term_v_14);
              t = l_12(x_74, h_78, t);
              g_78 = t;
              t = (ATerm) ATmakeAppl(sym__4, a_74, u_74, v_74, g_78);
              t = seq2abox_0_0(t);
              e_78 = t;
              t = (ATerm) ATinsert(CheckATermList(e_78), d_78);
            }
          }
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm l_78 = NULL,o_78 = NULL,r_78 = NULL,s_78 = NULL;
  l_78 = t;
  t = term_w_25;
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, l_78);
  t = n_12(s_78, l_78, t);
  if(match_cons(t, sym__2))
    {
      r_78 = ATgetArgument(t, 0);
      o_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_78;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(t_3, t);
  t = (ATerm) ATmakeAppl(sym__2, r_78, o_78);
  return(t);
}
static ATerm b_11 (ATerm s_65, ATerm r_65, ATerm t)
{
  ATerm u_78 = NULL,y_78 = NULL,b_79 = NULL;
  u_78 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      y_78 = ATgetArgument(t, 0);
      b_79 = ATgetArgument(t, 1);
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_79 = NULL,k_79 = NULL;
            t = s_65;
            t = mk_key_0_0(t);
            j_79 = t;
            t = term_w_25;
            k_79 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_w_25, j_79);
            t = n_12(k_79, j_79, t);
            t = u_78;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = u_78;
            t = o_11(y_78, b_79, t);
          }
      }
    }
  else
    {
      ATerm t_79 = NULL,x_79 = NULL;
      t = s_65;
      t = mk_key_0_0(t);
      t_79 = t;
      t = term_w_25;
      x_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_25, t_79);
      t = n_12(x_79, t_79, t);
      t = u_78;
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm k_127 (ATerm), ATerm t)
{
  ATerm y_79 = NULL,b_80 = NULL,i_80 = NULL,j_80 = NULL;
  t = number_nonterminals_0_0(t);
  j_80 = t;
  t = make_0_0(t);
  y_79 = t;
  t = j_80;
  {
    static ATerm w_3 (ATerm t)
    {
      static ATerm x_3 (ATerm t)
      {
        ATerm k_80 = NULL;
        t = term_p_14;
        t = k_127(t);
        k_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_80, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(x_3, t);
      return(t);
    }
    t = map_1_0(w_3, t);
  }
  t = concat_0_0(t);
  b_80 = t;
  t = term_p_14;
  t = k_127(t);
  i_80 = t;
  t = (ATerm) ATinsert(CheckATermList(b_80), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, i_80), y_79));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm s_80 = NULL;
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_81 = NULL,f_81 = NULL,h_81 = NULL,i_81 = NULL;
      ATerm d_26 = t;
      int e_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              e_81 = ATgetArgument(t, 0);
              {
                ATerm g_26 = ATgetArgument(t, 1);
              }
              h_81 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(e_26);
          {
            static ATerm z_3 (ATerm t)
            {
              t = not_null(s_80);
              return(t);
            }
            t = h_81;
            {
              static ATerm y_3 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((s_80 != NULL) && (s_80 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(y_3, t);
            }
            t = e_81;
            t = symbols2pp_entries_1_0(z_3, t);
          }
        }
      else
        {
          t = d_26;
          {
            ATerm j_81 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                e_81 = ATgetArgument(t, 0);
                f_81 = ATgetArgument(t, 1);
                h_81 = ATgetArgument(t, 2);
                i_81 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_26)), f_81), (ATerm) ATinsert(ATinsert(ATempty, term_j_26), (ATerm) ATmakeAppl(sym_lit_1, e_81)));
            t = concat_0_0(t);
            j_81 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, j_81, h_81, i_81);
            t = generate_pp_entries_0_0(t);
          }
        }
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_26 = t;
            if((PushChoice() == 0))
              {
                ATerm l_81 = NULL;
                l_81 = t;
                t = term_q_26;
                t = get_options_0_0(t);
                t = oncetd_1_0(b_4, t);
                t = l_81;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_26;
              }
            t = debug_1_0(c_4, t);
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_11 (ATerm u_43, ATerm v_43, ATerm t)
{
  t = SSL_mkterm(u_43, v_43);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,t_92 = NULL,u_92 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      t_92 = ATgetArgument(t, 0);
      u_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_92;
  if(match_cons(t, sym_alt_2))
    {
      q_92 = ATgetArgument(t, 0);
      r_92 = ATgetArgument(t, 1);
      {
        ATerm s_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_92 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, q_92, r_92);
            t = flat_alt_0_0(t);
            y_92 = t;
            t = (ATerm) ATinsert(CheckATermList(y_92), t_92);
            LocalPopChoice(v_26);
          }
        else
          {
            t = s_26;
            t = (ATerm) ATinsert(ATinsert(ATempty, u_92), t_92);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, u_92), t_92);
    }
  return(t);
}
ATerm _2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,q_11 = NULL;
  f_82 = t;
  if(match_cons(t, sym__2))
    {
      b_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_82);
  a_82 = t;
  t = b_82;
  t = s_74(t);
  d_82 = t;
  t = c_82;
  t = t_74(t);
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_82, e_82);
  q_11 = t;
  t = SSLsetAnnotations(q_11, a_82);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,o_82 = NULL,r_82 = NULL;
  i_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_82;
    }
  else
    {
      ATerm v_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_82 = ATgetFirst((ATermList) t);
          k_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_82 = ATgetFirst((ATermList) t);
          r_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_82;
      t = pair_0_0(t);
      v_82 = t;
      t = (ATerm) ATinsert(CheckATermList(v_82), (ATerm) ATmakeAppl(sym__2, j_82, o_82));
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,m_87 = NULL,r_12 = NULL;
  k_87 = t;
  if(match_cons(t, sym_lit_1))
    {
      j_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_87);
  i_87 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, j_87);
  r_12 = t;
  t = SSLsetAnnotations(r_12, i_87);
  if(match_cons(t, sym_lit_1))
    {
      m_87 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, m_87));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          m_87 = ATgetArgument(t, 0);
          {
            ATerm z_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, m_87);
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,c_13 = NULL,y_89 = NULL,g_89 = NULL,y_12 = NULL;
  e_89 = t;
  if(match_cons(t, sym__2))
    {
      a_89 = ATgetArgument(t, 0);
      b_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_89);
  z_88 = t;
  t = a_89;
  if(match_cons(t, sym_lit_1))
    {
      d_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_89);
  c_89 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, d_89);
  y_12 = t;
  t = SSLsetAnnotations(y_12, c_89);
  if(match_cons(t, sym_lit_1))
    {
      g_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, g_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          g_89 = ATgetArgument(t, 0);
          {
            ATerm a_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, g_89);
    }
  x_88 = t;
  t = b_89;
  t = _2_0(_id, z_4, t);
  if(match_cons(t, sym_lit_1))
    {
      y_89 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, y_89));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          y_89 = ATgetArgument(t, 0);
          {
            ATerm b_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, y_89);
    }
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_88, y_88);
  c_13 = t;
  t = SSLsetAnnotations(c_13, z_88);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_h_27), (ATerm) ATinsert(ATinsert(ATempty, y_88), x_88));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm v_89 = NULL,w_89 = NULL;
  v_89 = t;
  if(match_cons(t, sym_iter_1))
    {
      w_89 = ATgetArgument(t, 0);
      {
        ATerm r_46 = NULL,z_12 = NULL;
        t = SSLgetAnnotations(v_89);
        r_46 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, w_89);
        z_12 = t;
        t = SSLsetAnnotations(z_12, r_46);
      }
    }
  else
    {
      ATerm f_47 = NULL,b_13 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          w_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_89);
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, w_89);
      b_13 = t;
      t = SSLsetAnnotations(b_13, f_47);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm d_90 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      d_90 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, d_90));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          d_90 = ATgetArgument(t, 0);
          {
            ATerm j_27 = ATgetArgument(t, 1);
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
  ATerm d_84 = NULL,e_84 = NULL,i_84 = NULL,k_84 = NULL,r_84 = NULL;
  ATerm k_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_84 = NULL,w_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,v_12 = NULL,x_86 = NULL,m_12 = NULL,s_86 = NULL,t_86 = NULL;
      t = reverse_acc_2_0(_id, h_4, t);
      g_85 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_84 = ATgetFirst((ATermList) t);
          z_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_85);
      w_84 = t;
      t = y_84;
      if(match_cons(t, sym__2))
        {
          d_85 = ATgetArgument(t, 0);
          e_85 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_84);
      c_85 = t;
      t = e_85;
      if(match_cons(t, sym_iter_1))
        {
          s_86 = ATgetArgument(t, 0);
          {
            ATerm p_44 = NULL,v_11 = NULL;
            t = SSLgetAnnotations(e_85);
            p_44 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, s_86);
            v_11 = t;
            t = SSLsetAnnotations(v_11, p_44);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_1))
            {
              s_86 = ATgetArgument(t, 0);
              {
                ATerm x_44 = NULL,x_11 = NULL;
                t = SSLgetAnnotations(e_85);
                x_44 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, s_86);
                x_11 = t;
                t = SSLsetAnnotations(x_11, x_44);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  s_86 = ATgetArgument(t, 0);
                  t_86 = ATgetArgument(t, 1);
                  {
                    ATerm h_45 = NULL,y_11 = NULL;
                    t = SSLgetAnnotations(e_85);
                    h_45 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, s_86, t_86);
                    y_11 = t;
                    t = SSLsetAnnotations(y_11, h_45);
                  }
                }
              else
                {
                  ATerm a_46 = NULL,c_12 = NULL;
                  if(match_cons(t, sym_iter_star_sep_2))
                    {
                      s_86 = ATgetArgument(t, 0);
                      t_86 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_85);
                  a_46 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, s_86, t_86);
                  c_12 = t;
                  t = SSLsetAnnotations(c_12, a_46);
                }
            }
        }
      f_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_85, f_85);
      m_12 = t;
      t = SSLsetAnnotations(m_12, c_85);
      if(match_cons(t, sym_lit_1))
        {
          x_86 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, x_86));
        }
      else
        {
          if(match_cons(t, sym__2))
            {
              x_86 = ATgetArgument(t, 0);
              {
                ATerm r_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, x_86);
        }
      a_85 = t;
      t = z_84;
      t = map_1_0(j_4, t);
      b_85 = t;
      t = (ATerm) ATinsert(CheckATermList(b_85), a_85);
      v_12 = t;
      t = SSLsetAnnotations(v_12, w_84);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_84 = ATgetFirst((ATermList) t);
          d_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_27 = t;
        if((PushChoice() == 0))
          {
            ATerm t_87 = NULL,u_87 = NULL,b_88 = NULL,c_88 = NULL,w_12 = NULL;
            c_88 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_87 = ATgetFirst((ATermList) t);
                b_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_88);
            t_87 = t;
            t = b_88;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_88), u_87);
            w_12 = t;
            t = SSLsetAnnotations(w_12, t_87);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_27;
          }
      }
      t = d_84;
      t = reverse_acc_2_0(_id, m_4, t);
      s_84 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_84), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, s_84)));
      LocalPopChoice(q_27);
    }
  else
    {
      t = k_27;
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,x_12 = NULL,p_88 = NULL;
            t = reverse_acc_2_0(_id, o_4, t);
            m_88 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_88 = ATgetFirst((ATermList) t);
                l_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_88);
            j_88 = t;
            t = k_88;
            if(match_cons(t, sym_lit_1))
              {
                p_88 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_26, (ATerm) ATmakeAppl(sym_S_1, p_88));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    p_88 = ATgetArgument(t, 0);
                    {
                      ATerm z_27 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, p_88);
              }
            r_84 = t;
            t = l_88;
            {
              ATerm a_28 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = a_28;
                }
            }
            t = reverse_acc_2_0(_id, p_4, t);
            i_84 = t;
            t = (ATerm) ATinsert(CheckATermList(i_84), r_84);
            x_12 = t;
            t = SSLsetAnnotations(x_12, j_88);
            t = i_84;
            t = pair_0_0(t);
            t = map_1_0(v_4, t);
            k_84 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, r_84), k_84));
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            t = map_1_0(e_5, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm b_28 = t;
  if((PushChoice() == 0))
    {
      ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,z_13 = NULL;
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
      z_13 = t;
      t = SSLsetAnnotations(z_13, n_90);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_28;
    }
  return(t);
}
static ATerm u_91 (ATerm u_90, ATerm v_90, ATerm w_90, ATerm t)
{
  ATerm a_91 = NULL,b_14 = NULL;
  t = SSLgetAnnotations(u_90);
  a_91 = t;
  t = w_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_90, w_90);
  b_14 = t;
  t = SSLsetAnnotations(b_14, a_91);
  t = (ATerm) ATempty;
  return(t);
}
ATerm number_node_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm t_90 = NULL;
  static ATerm t_91 (ATerm t)
  {
    ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL;
    e_91 = t;
    if(match_cons(t, sym__2))
      {
        f_91 = ATgetArgument(t, 0);
        g_91 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_91;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_91 = ATgetFirst((ATermList) t);
        i_91 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_91(e_91, f_91, g_91, t);
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              {
                ATerm f_28 = t;
                int i_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL;
                    t = h_91;
                    t = o_127(t);
                    t = term_v_14;
                    o_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_91, term_v_14);
                    t = l_12(f_91, o_91, t);
                    n_91 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_91, i_91);
                    t = t_91(t);
                    m_91 = t;
                    t = (ATerm) ATinsert(CheckATermList(m_91), (ATerm) ATmakeAppl(sym__2, f_91, h_91));
                    LocalPopChoice(i_28);
                  }
                else
                  {
                    t = f_28;
                    {
                      ATerm s_91 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, f_91, i_91);
                      t = t_91(t);
                      s_91 = t;
                      t = (ATerm) ATinsert(CheckATermList(s_91), h_91);
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = u_91(e_91, f_91, g_91, t);
      }
    return(t);
  }
  t_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, t_90);
  t = t_91(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL;
  z_91 = t;
  {
    ATerm j_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_label_2))
          {
            ATerm r_28 = ATgetArgument(t, 0);
            y_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(n_28);
        t = y_91;
      }
    else
      {
        t = j_28;
        t = z_91;
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
static ATerm i_5 (ATerm t)
{
  ATerm l_92 = NULL;
  l_92 = t;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_92;
        {
          ATerm o_29 = t;
          if((PushChoice() == 0))
            {
              ATerm w_47 = NULL;
              w_47 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = w_47;
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
                  t = w_47;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_29;
            }
        }
        t = (ATerm) ATinsert(ATempty, l_92);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = l_92;
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
static ATerm o_5 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  t_49 = t;
  if(match_cons(t, sym_Arg_1))
    {
      s_49 = ATgetArgument(t, 0);
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_50 = NULL,d_14 = NULL;
            t = SSLgetAnnotations(t_49);
            f_50 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, s_49);
            d_14 = t;
            t = SSLsetAnnotations(d_14, f_50);
            t = term_x_29;
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
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
ATerm symbol2abox_1_0 (ATerm l_127 (ATerm), ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL;
  static ATerm o_96 (ATerm t)
  {
    static ATerm q_96 (ATerm a_95, ATerm b_95, ATerm c_95, ATerm d_95, ATerm t)
    {
      ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
      t = SSL_explode_term(d_95);
      if(match_cons(t, sym__2))
        {
          r_95 = ATgetArgument(t, 0);
          s_95 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, b_95, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, c_95, r_95)));
      t = conc_0_0(t);
      n_95 = t;
      t = s_95;
      t = argument_list_0_0(t);
      t = number_nonterminals_0_0(t);
      t_95 = t;
      t = make_0_0(t);
      o_95 = t;
      t = t_95;
      {
        static ATerm k_5 (ATerm t)
        {
          ATerm v_95 = NULL;
          v_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_95, n_95), v_95);
          t = o_96(t);
          return(t);
        }
        t = map_1_0(k_5, t);
      }
      t = concat_0_0(t);
      p_95 = t;
      t = (ATerm) ATinsert(CheckATermList(p_95), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, a_95, n_95), o_95));
      return(t);
    }
    ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,i_96 = NULL,j_96 = NULL;
    if(match_cons(t, sym__2))
      {
        b_96 = ATgetArgument(t, 0);
        e_96 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_96;
    {
      ATerm z_29 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_lit_1))
            {
              ATerm e_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(d_30);
          t = (ATerm) ATempty;
        }
      else
        {
          t = z_29;
          if(match_cons(t, sym__2))
            {
              i_96 = ATgetArgument(t, 0);
              j_96 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_96;
          {
            ATerm g_30 = t;
            int m_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_sort_1))
                  {
                    ATerm p_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(m_30);
                t = b_96;
                {
                  ATerm s_30 = t;
                  int u_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm v_30 = ATgetArgument(t, 0);
                          ATerm z_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(u_30);
                      t = (ATerm) ATempty;
                    }
                  else
                    {
                      t = s_30;
                      t = (ATerm) ATempty;
                    }
                }
              }
            else
              {
                t = g_30;
                {
                  ATerm c_31 = t;
                  int d_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_char_class_1))
                        {
                          ATerm e_31 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(d_31);
                      t = b_96;
                      {
                        ATerm f_31 = t;
                        int g_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym__2))
                              {
                                ATerm h_31 = ATgetArgument(t, 0);
                                ATerm i_31 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(g_31);
                            t = (ATerm) ATempty;
                          }
                        else
                          {
                            t = f_31;
                            t = (ATerm) ATempty;
                          }
                      }
                    }
                  else
                    {
                      t = c_31;
                      if(match_cons(t, sym_alt_2))
                        {
                          z_95 = ATgetArgument(t, 0);
                          w_95 = ATgetArgument(t, 1);
                          t = b_96;
                          if(match_cons(t, sym__2))
                            {
                              c_96 = ATgetArgument(t, 0);
                              d_96 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = w_95;
                          if(match_cons(t, sym_alt_2))
                            {
                              x_95 = ATgetArgument(t, 0);
                              y_95 = ATgetArgument(t, 1);
                              {
                                ATerm j_31 = t;
                                int k_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,e_14 = NULL;
                                    t = c_96;
                                    if(((v_93 != NULL) && (v_93 != t)))
                                      _fail(t);
                                    else
                                      v_93 = t;
                                    t = d_96;
                                    if(((w_93 != NULL) && (w_93 != t)))
                                      _fail(t);
                                    else
                                      w_93 = t;
                                    t = i_96;
                                    if(((x_93 != NULL) && (x_93 != t)))
                                      _fail(t);
                                    else
                                      x_93 = t;
                                    t = (ATerm) ATmakeAppl(sym_alt_2, z_95, (ATerm) ATmakeAppl(sym_alt_2, x_95, y_95));
                                    t = flat_alt_0_0(t);
                                    f_49 = t;
                                    t = term_l_31;
                                    h_49 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, term_l_31, f_49);
                                    t = c_11(h_49, f_49, t);
                                    g_49 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_96, d_96), (ATerm) ATmakeAppl(sym__2, i_96, g_49));
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
                                    i_49 = t;
                                    t = j_49;
                                    t = topdown_1_0(o_5, t);
                                    l_49 = t;
                                    t = (ATerm) ATinsert(CheckATermList(k_49), l_49);
                                    e_14 = t;
                                    t = SSLsetAnnotations(e_14, i_49);
                                    LocalPopChoice(k_31);
                                  }
                                else
                                  {
                                    t = j_31;
                                    t = q_96(c_96, d_96, i_96, j_96, t);
                                  }
                              }
                            }
                          else
                            {
                              t = q_96(c_96, d_96, i_96, j_96, t);
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_bracket_symbol_1))
                            {
                              z_95 = ATgetArgument(t, 0);
                              t = b_96;
                              if(match_cons(t, sym__2))
                                {
                                  c_96 = ATgetArgument(t, 0);
                                  d_96 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              {
                                ATerm m_31 = t;
                                int n_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_96, d_96), (ATerm) ATmakeAppl(sym__2, i_96, z_95));
                                    t = o_96(t);
                                    LocalPopChoice(n_31);
                                  }
                                else
                                  {
                                    t = m_31;
                                    t = q_96(c_96, d_96, i_96, j_96, t);
                                  }
                              }
                            }
                          else
                            {
                              t = b_96;
                              if(match_cons(t, sym__2))
                                {
                                  c_96 = ATgetArgument(t, 0);
                                  d_96 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = q_96(c_96, d_96, i_96, j_96, t);
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
  z_93 = t;
  t = term_p_14;
  t = l_127(t);
  y_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_93, z_93);
  t = o_96(t);
  return(t);
}
static ATerm x_98 (ATerm b_97, ATerm c_97, ATerm d_97, ATerm t)
{
  ATerm e_97 = NULL,i_97 = NULL;
  t = d_97;
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,l_50 = NULL;
        t = c_97;
        t = pp_table_get_0_0(t);
        l_50 = t;
        t = SSL_explode_term(l_50);
        if(match_cons(t, sym__2))
          {
            ATerm y_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_31) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_32 = ATgetArgument(t, 1);
              if(((ATgetType(c_32) == AT_LIST) && !(ATisEmpty(c_32))))
                {
                  ATerm e_32 = ATgetFirst((ATermList) c_32);
                  ATerm f_32 = (ATerm) ATgetNext((ATermList) c_32);
                  if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
                    {
                      k_50 = ATgetFirst((ATermList) f_32);
                      {
                        ATerm g_32 = (ATerm) ATgetNext((ATermList) f_32);
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
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        {
          ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,m_50 = NULL,n_50 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,w_97 = NULL,l_14 = NULL;
          t = c_97;
          t = reverse_acc_2_0(_id, q_5, t);
          p_97 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_97 = ATgetFirst((ATermList) t);
              o_97 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_97);
          m_97 = t;
          t = o_97;
          t = reverse_acc_2_0(_id, r_5, t);
          e_97 = t;
          t = (ATerm) ATinsert(CheckATermList(e_97), n_97);
          l_14 = t;
          t = SSLsetAnnotations(l_14, m_97);
          t = e_97;
          t = pp_table_get_0_0(t);
          l_97 = t;
          t = SSL_explode_term(l_97);
          if(match_cons(t, sym__2))
            {
              ATerm j_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm k_32 = ATgetArgument(t, 1);
                if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
                  {
                    k_97 = ATgetFirst((ATermList) k_32);
                    {
                      ATerm l_32 = (ATerm) ATgetNext((ATermList) k_32);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = k_97;
          if(match_cons(t, sym_Path_2))
            {
              w_97 = ATgetArgument(t, 0);
              s_97 = ATgetArgument(t, 1);
              t = s_97;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_97 = ATgetFirst((ATermList) t);
                  u_97 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_97;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, w_97, (ATerm) ATinsert(ATempty, t_97));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  w_97 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, w_97, (ATerm) ATempty);
            }
          i_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_97, b_97);
          {
            static ATerm s_5 (ATerm t)
            {
              t = i_97;
              return(t);
            }
            t = symbol2abox_1_0(s_5, t);
          }
          t = map_1_0(v_5, t);
          t = c_97;
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
                    ATerm r_32 = (ATerm) ATgetNext((ATermList) p_32);
                    if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
                      {
                        m_50 = ATgetFirst((ATermList) r_32);
                        {
                          ATerm t_32 = (ATerm) ATgetNext((ATermList) r_32);
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
  return(t);
}
static ATerm y_98 (ATerm c_98, ATerm d_98, ATerm e_98, ATerm f_98, ATerm g_98, ATerm t)
{
  t = g_98;
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL,p_50 = NULL;
        t = f_98;
        t = pp_table_get_0_0(t);
        p_50 = t;
        t = SSL_explode_term(p_50);
        if(match_cons(t, sym__2))
          {
            ATerm x_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_32) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_33 = ATgetArgument(t, 1);
              if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
                {
                  ATerm f_33 = ATgetFirst((ATermList) a_33);
                  ATerm g_33 = (ATerm) ATgetNext((ATermList) a_33);
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
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        {
          ATerm q_50 = NULL,r_50 = NULL;
          t = (ATerm) ATmakeAppl(sym_prod_3, c_98, d_98, e_98);
          t = generate_pp_entries_0_0(t);
          t = map_1_0(w_5, t);
          t = f_98;
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
                    ATerm n_33 = (ATerm) ATgetNext((ATermList) j_33);
                    if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
                      {
                        q_50 = ATgetFirst((ATermList) n_33);
                        {
                          ATerm o_33 = (ATerm) ATgetNext((ATermList) n_33);
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
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      a_98 = ATgetArgument(t, 0);
      b_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(a_98, b_98, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      n_98 = ATgetArgument(t, 0);
      o_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(n_98, o_98, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,v_98 = NULL,w_98 = NULL;
  p_98 = t;
  if(match_cons(t, sym__2))
    {
      q_98 = ATgetArgument(t, 0);
      w_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_98;
  if(match_cons(t, sym_prod_3))
    {
      r_98 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
      v_98 = ATgetArgument(t, 2);
      {
        ATerm p_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_98(q_98, w_98, p_98, t);
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            t = y_98(r_98, s_98, v_98, w_98, p_98, t);
          }
      }
    }
  else
    {
      t = x_98(q_98, w_98, p_98, t);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_33 = ATgetFirst((ATermList) t);
      if(((ATgetType(r_33) != AT_INT) || (ATgetInt((ATermInt) r_33) != 34)))
        _fail(t);
      {
        ATerm s_33 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(s_33) != AT_LIST) || !(ATisEmpty(s_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
  b_99 = t;
  t = SSL_explode_string(b_99);
  z_98 = t;
  {
    ATerm u_33 = t;
    if((PushChoice() == 0))
      {
        ATerm c_99 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_99 = ATgetFirst((ATermList) t);
            {
              ATerm v_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = c_99;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_33;
      }
  }
  t = z_98;
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
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_33)), z_98), (ATerm) ATinsert(ATempty, term_x_33));
  t = concat_0_0(t);
  a_99 = t;
  t = SSL_implode_string(a_99);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm e_99 = NULL,i_99 = NULL;
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm a_34 = ATgetArgument(t, 0);
          ATerm b_34 = ATgetArgument(t, 1);
          ATerm c_34 = ATgetArgument(t, 2);
          e_99 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(z_33);
      {
        ATerm k_99 = NULL;
        t = e_99;
        {
          static ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((k_99 != NULL) && (k_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(y_5, t);
        }
        t = not_null(k_99);
      }
    }
  else
    {
      t = y_33;
      {
        ATerm m_99 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm e_34 = ATgetArgument(t, 0);
            ATerm f_34 = ATgetArgument(t, 1);
            i_99 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = i_99;
        {
          static ATerm z_5 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((m_99 != NULL) && (m_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(z_5, t);
        }
        t = not_null(m_99);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL;
  if(match_cons(t, sym__2))
    {
      v_99 = ATgetArgument(t, 0);
      z_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_99;
  if(match_cons(t, sym_prod_fun_4))
    {
      w_99 = ATgetArgument(t, 0);
      x_99 = ATgetArgument(t, 1);
      y_99 = ATgetArgument(t, 2);
      s_99 = ATgetArgument(t, 3);
      t = s_99;
      if(match_cons(t, sym_attrs_1))
        {
          r_99 = ATgetArgument(t, 0);
          {
            ATerm f_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, r_99, z_99);
            t = conc_0_0(t);
            f_100 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, w_99, x_99, y_99, (ATerm) ATmakeAppl(sym_attrs_1, f_100));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, w_99, x_99, y_99, (ATerm) ATmakeAppl(sym_attrs_1, z_99));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          w_99 = ATgetArgument(t, 0);
          x_99 = ATgetArgument(t, 1);
          y_99 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_99;
      if(match_cons(t, sym_attrs_1))
        {
          t_99 = ATgetArgument(t, 0);
          {
            ATerm o_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, t_99, z_99);
            t = conc_0_0(t);
            o_100 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, w_99, x_99, (ATerm) ATmakeAppl(sym_attrs_1, o_100));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, w_99, x_99, (ATerm) ATmakeAppl(sym_attrs_1, z_99));
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm i_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL,n_14 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL;
      e_101 = t;
      if(match_int(t, 34))
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_x_33), term_t_34);
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
              t = (ATerm) ATinsert(ATempty, e_101);
            }
        }
      else
        {
          if(match_int(t, 92))
            {
              ATerm u_34 = t;
              int v_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_34), term_t_34);
                  LocalPopChoice(v_34);
                }
              else
                {
                  t = u_34;
                  t = (ATerm) ATinsert(ATempty, e_101);
                }
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_101 = ATgetFirst((ATermList) t);
                  g_101 = (ATerm) ATgetNext((ATermList) t);
                  t = f_101;
                  if(match_int(t, 34))
                    {
                      ATerm x_34 = t;
                      int z_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, e_101);
                          LocalPopChoice(z_34);
                        }
                      else
                        {
                          t = x_34;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_101), term_x_33), term_t_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 92))
                        {
                          ATerm a_35 = t;
                          int b_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, e_101);
                              LocalPopChoice(b_35);
                            }
                          else
                            {
                              t = a_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(g_101), term_t_34), term_t_34);
                            }
                        }
                      else
                        {
                          if(match_int(t, 10))
                            {
                              ATerm c_35 = t;
                              int g_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(ATempty, e_101);
                                  LocalPopChoice(g_35);
                                }
                              else
                                {
                                  t = c_35;
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(g_101), term_h_35), term_t_34);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATinsert(ATempty, e_101);
                            }
                        }
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, e_101);
                }
            }
        }
      d_101 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_101 = ATgetFirst((ATermList) t);
          b_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_101);
      z_100 = t;
      t = b_101;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      c_101 = t;
      t = (ATerm) ATinsert(CheckATermList(c_101), a_101);
      n_14 = t;
      t = SSLsetAnnotations(n_14, z_100);
      LocalPopChoice(m_34);
    }
  else
    {
      t = i_34;
      {
        ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL;
        c_102 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_102 = ATgetFirst((ATermList) t);
            b_102 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm o_51 = NULL,x_51 = NULL,o_14 = NULL;
              t = SSLgetAnnotations(c_102);
              o_51 = t;
              t = b_102;
              t = escape_chars_0_0(t);
              x_51 = t;
              t = (ATerm) ATinsert(CheckATermList(x_51), a_102);
              o_14 = t;
              t = SSLsetAnnotations(o_14, o_51);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_102;
          }
      }
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm p_52 = NULL,r_52 = NULL,x_52 = NULL;
  p_52 = t;
  if(match_int(t, 34))
    {
      ATerm i_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_x_33), term_t_34);
          LocalPopChoice(j_35);
        }
      else
        {
          t = i_35;
          t = (ATerm) ATinsert(ATempty, p_52);
        }
    }
  else
    {
      if(match_int(t, 92))
        {
          ATerm k_35 = t;
          int l_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_t_34), term_t_34);
              LocalPopChoice(l_35);
            }
          else
            {
              t = k_35;
              t = (ATerm) ATinsert(ATempty, p_52);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_52 = ATgetFirst((ATermList) t);
              x_52 = (ATerm) ATgetNext((ATermList) t);
              t = r_52;
              if(match_int(t, 34))
                {
                  ATerm o_35 = t;
                  int p_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, p_52);
                      LocalPopChoice(p_35);
                    }
                  else
                    {
                      t = o_35;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(x_52), term_x_33), term_t_34);
                    }
                }
              else
                {
                  if(match_int(t, 92))
                    {
                      ATerm r_35 = t;
                      int s_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(ATempty, p_52);
                          LocalPopChoice(s_35);
                        }
                      else
                        {
                          t = r_35;
                          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_52), term_t_34), term_t_34);
                        }
                    }
                  else
                    {
                      if(match_int(t, 10))
                        {
                          ATerm t_35 = t;
                          int u_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(ATempty, p_52);
                              LocalPopChoice(u_35);
                            }
                          else
                            {
                              t = t_35;
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(x_52), term_h_35), term_t_34);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATinsert(ATempty, p_52);
                        }
                    }
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, p_52);
            }
        }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_103 = NULL,n_52 = NULL;
      a_103 = t;
      t = SSL_explode_string(a_103);
      t = map_1_0(a_6, t);
      t = concat_0_0(t);
      n_52 = t;
      t = SSL_implode_string(n_52);
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      {
        ATerm u_53 = NULL,v_53 = NULL;
        v_53 = t;
        t = SSL_explode_string(v_53);
        t = escape_chars_0_0(t);
        u_53 = t;
        t = SSL_implode_string(u_53);
      }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm x_35 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_35;
    }
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,h_103 = NULL,j_103 = NULL,k_103 = NULL,j_54 = NULL,l_54 = NULL,m_54 = NULL,g_54 = NULL,h_54 = NULL,r_14 = NULL;
  t = filter_1_0(b_6, t);
  k_103 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_103 = ATgetFirst((ATermList) t);
      h_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_103);
  e_103 = t;
  t = SSL_explode_string(f_103);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_103 = ATgetFirst((ATermList) t);
      {
        ATerm y_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_103;
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_103, term_d_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_e_36, j_103);
        t = leq_0_0(t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATmakeAppl(sym__2, j_103, term_f_36);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, term_k_36, j_103);
        t = leq_0_0(t);
      }
  }
  t = (ATerm) ATinsert(CheckATermList(h_103), f_103);
  r_14 = t;
  t = SSLsetAnnotations(r_14, e_103);
  h_54 = t;
  t = term_l_36;
  g_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_36, h_54);
  t = g_11(g_54, h_54, t);
  d_103 = t;
  t = SSL_concat_strings(d_103);
  c_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_103, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_37), term_c_37), term_y_36), term_x_36), term_w_36), term_v_36), term_u_36), term_t_36), term_r_36), term_q_36), term_o_36), term_n_36), term_m_36));
  {
    ATerm i_37 = t;
    if((PushChoice() == 0))
      {
        ATerm l_103 = NULL,m_103 = NULL;
        if(match_cons(t, sym__2))
          {
            l_103 = ATgetArgument(t, 0);
            m_103 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_103;
        {
          static ATerm c_6 (ATerm t)
          {
            if((l_103 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(c_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, l_103, m_103);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_37;
      }
  }
  t = c_103;
  t = escape_0_0(t);
  l_54 = t;
  t = SSL_explode_string(l_54);
  m_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_33)), m_54), (ATerm) ATinsert(ATempty, term_x_33));
  t = concat_0_0(t);
  j_54 = t;
  t = SSL_implode_string(j_54);
  return(t);
}
static ATerm d_104 (ATerm t_103, ATerm t)
{
  ATerm u_103 = NULL;
  t = SSL_explode_term(t_103);
  if(match_cons(t, sym__2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_103;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL;
  y_103 = t;
  if(match_cons(t, sym__2))
    {
      w_103 = ATgetArgument(t, 0);
      x_103 = ATgetArgument(t, 1);
      {
        ATerm l_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_6 (ATerm t)
            {
              t = x_103;
              return(t);
            }
            t = w_103;
            t = at_end_1_0(d_6, t);
            LocalPopChoice(o_37);
          }
        else
          {
            t = l_37;
            t = d_104(y_103, t);
          }
      }
    }
  else
    {
      t = d_104(y_103, t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_37);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_37);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_37);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL;
  c_105 = t;
  if(match_cons(t, sym_cf_1))
    {
      a_105 = ATgetArgument(t, 0);
      t = a_105;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          a_105 = ATgetArgument(t, 0);
          t = a_105;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_s_37);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  a_105 = ATgetArgument(t, 0);
                  b_105 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(b_105), a_105);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      a_105 = ATgetArgument(t, 0);
                      t = a_105;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(e_6, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          a_105 = ATgetArgument(t, 0);
                          t = a_105;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(f_6, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              a_105 = ATgetArgument(t, 0);
                              t = a_105;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(g_6, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  a_105 = ATgetArgument(t, 0);
                                  b_105 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_105 = NULL,n_105 = NULL;
                                    t = a_105;
                                    t = Sym2Strs_0_0(t);
                                    m_105 = t;
                                    t = b_105;
                                    t = Sym2Strs_0_0(t);
                                    n_105 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_37)), n_105), m_105);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      a_105 = ATgetArgument(t, 0);
                                      b_105 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_105 = NULL,r_105 = NULL;
                                        t = a_105;
                                        t = Sym2Strs_0_0(t);
                                        q_105 = t;
                                        t = b_105;
                                        t = Sym2Strs_0_0(t);
                                        r_105 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_37)), r_105), q_105);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_37 = t;
                                      int v_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              a_105 = ATgetArgument(t, 0);
                                              {
                                                ATerm w_37 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(v_37);
                                          {
                                            ATerm t_105 = NULL;
                                            t = a_105;
                                            t = Sym2Strs_0_0(t);
                                            t_105 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_37)), t_105);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = t_37;
                                          {
                                            ATerm y_37 = t;
                                            int z_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    a_105 = ATgetArgument(t, 0);
                                                    b_105 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_38 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(z_37);
                                                {
                                                  ATerm c_106 = NULL,d_106 = NULL;
                                                  t = a_105;
                                                  t = Sym2Strs_0_0(t);
                                                  c_106 = t;
                                                  t = b_105;
                                                  t = Sym2Strs_0_0(t);
                                                  d_106 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_37)), d_106), c_106);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = y_37;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    a_105 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_106 = NULL;
                                                      t = a_105;
                                                      t = Sym2Strs_0_0(t);
                                                      f_106 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, f_106), (ATerm) ATinsert(ATempty, term_f_38));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        a_105 = ATgetArgument(t, 0);
                                                        b_105 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_106 = NULL,k_106 = NULL;
                                                          t = a_105;
                                                          t = Sym2Strs_0_0(t);
                                                          j_106 = t;
                                                          t = b_105;
                                                          t = Sym2Strs_0_0(t);
                                                          k_106 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_106), (ATerm) ATinsert(ATempty, term_k_38)), j_106);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            a_105 = ATgetArgument(t, 0);
                                                            b_105 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm n_106 = NULL,o_106 = NULL;
                                                              t = a_105;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              n_106 = t;
                                                              t = b_105;
                                                              t = Sym2Strs_0_0(t);
                                                              o_106 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_106), (ATerm) ATinsert(ATempty, term_l_38)), n_106);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                a_105 = ATgetArgument(t, 0);
                                                                b_105 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm r_106 = NULL,s_106 = NULL;
                                                                  t = a_105;
                                                                  t = Sym2Strs_0_0(t);
                                                                  r_106 = t;
                                                                  t = b_105;
                                                                  t = Sym2Strs_0_0(t);
                                                                  s_106 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_106), (ATerm) ATinsert(ATempty, term_m_38)), r_106);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    a_105 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm u_106 = NULL;
                                                                      t = a_105;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      u_106 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(u_106), term_n_38);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        a_105 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, a_105);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            a_105 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm u_54 = NULL;
                                                                              t = a_105;
                                                                              {
                                                                                ATerm p_38 = t;
                                                                                int q_38 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(q_38);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_38;
                                                                                  }
                                                                              }
                                                                              u_54 = t;
                                                                              t = (ATerm) ATinsert(ATempty, u_54);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm r_38 = t;
                                                                            int s_38 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    a_105 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm t_38 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(s_38);
                                                                                {
                                                                                  ATerm i_55 = NULL;
                                                                                  t = a_105;
                                                                                  {
                                                                                    ATerm u_38 = t;
                                                                                    int v_38 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(v_38);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_38;
                                                                                      }
                                                                                  }
                                                                                  i_55 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, i_55);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = r_38;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_w_38);
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
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
static ATerm j_6 (ATerm t)
{
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(y_38);
    }
  else
    {
      t = x_38;
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
static ATerm k_6 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_38 = ATgetFirst((ATermList) t);
      if(((ATgetType(z_38) != AT_INT) || (ATgetInt((ATermInt) z_38) != 34)))
        _fail(t);
      {
        ATerm a_39 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_39) != AT_LIST) || !(ATisEmpty(a_39))))
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
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  k_112 = t;
  t = SSL_explode_string(k_112);
  g_112 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_112 = ATgetFirst((ATermList) t);
      {
        ATerm b_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_112;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = g_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_39 = ATgetFirst((ATermList) t);
      i_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_112;
  t = at_last_1_0(k_6, t);
  h_112 = t;
  t = SSL_implode_string(h_112);
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
      ATerm e_107 = NULL,f_107 = NULL;
      if(match_cons(t, sym__2))
        {
          e_107 = ATgetArgument(t, 0);
          f_107 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, e_107, f_107);
      {
        ATerm e_39 = t;
        int f_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(e_107, f_107);
            LocalPopChoice(f_39);
          }
        else
          {
            t = e_39;
            t = SSL_gtr(e_107, f_107);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, e_107, f_107);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_39;
    }
  return(t);
}
static ATerm o_107 (ATerm k_107, ATerm t)
{
  t = SSL_explode_string(k_107);
  {
    ATerm g_39 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(p_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_39;
      }
  }
  t = term_h_39;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm k_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_55 = NULL;
      v_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_55, term_n_39);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_p_39, v_55);
      t = leq_0_0(t);
      LocalPopChoice(m_39);
    }
  else
    {
      t = k_39;
      {
        ATerm r_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_55 = NULL;
            z_55 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_55, term_d_36);
            t = leq_0_0(t);
            t = (ATerm) ATmakeAppl(sym__2, term_e_36, z_55);
            t = leq_0_0(t);
            LocalPopChoice(u_39);
          }
        else
          {
            t = r_39;
            {
              ATerm w_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_56 = NULL;
                  a_56 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_56, term_f_36);
                  t = leq_0_0(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_k_36, a_56);
                  t = leq_0_0(t);
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = w_39;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_p_14;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  if(match_string(t, "|="))
    {
      ATerm a_40 = t;
      int b_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_107(n_107, t);
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
              t = o_107(n_107, t);
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
                  t = o_107(n_107, t);
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
                  ATerm l_40 = t;
                  int m_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_107(n_107, t);
                      LocalPopChoice(m_40);
                    }
                  else
                    {
                      t = l_40;
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
                          t = o_107(n_107, t);
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
                              t = o_107(n_107, t);
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
                              ATerm v_40 = t;
                              int x_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = o_107(n_107, t);
                                  LocalPopChoice(x_40);
                                }
                              else
                                {
                                  t = v_40;
                                  t = term_y_40;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm a_41 = t;
                                  int c_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_107(n_107, t);
                                      LocalPopChoice(c_41);
                                    }
                                  else
                                    {
                                      t = a_41;
                                      t = term_e_41;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm g_41 = t;
                                      int h_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = o_107(n_107, t);
                                          LocalPopChoice(h_41);
                                        }
                                      else
                                        {
                                          t = g_41;
                                          t = term_k_41;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm q_41 = t;
                                          int s_41 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_107(n_107, t);
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
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm u_41 = t;
                                              int v_41 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = o_107(n_107, t);
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
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm x_41 = t;
                                                  int y_41 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = o_107(n_107, t);
                                                      LocalPopChoice(y_41);
                                                    }
                                                  else
                                                    {
                                                      t = x_41;
                                                      t = term_d_42;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm f_42 = t;
                                                      int g_42 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = o_107(n_107, t);
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
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm i_42 = t;
                                                          int j_42 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = o_107(n_107, t);
                                                              LocalPopChoice(j_42);
                                                            }
                                                          else
                                                            {
                                                              t = i_42;
                                                              t = term_m_38;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm n_42 = t;
                                                              int o_42 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = o_107(n_107, t);
                                                                  LocalPopChoice(o_42);
                                                                }
                                                              else
                                                                {
                                                                  t = n_42;
                                                                  t = term_r_42;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm s_42 = t;
                                                                  int t_42 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = o_107(n_107, t);
                                                                      LocalPopChoice(t_42);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = s_42;
                                                                      t = term_r_42;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm v_42 = t;
                                                                      int x_42 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = o_107(n_107, t);
                                                                          LocalPopChoice(x_42);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = v_42;
                                                                          t = term_f_43;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm g_43 = t;
                                                                          int h_43 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = o_107(n_107, t);
                                                                              LocalPopChoice(h_43);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_43;
                                                                              t = term_m_43;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm n_43 = t;
                                                                              int o_43 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = o_107(n_107, t);
                                                                                  LocalPopChoice(o_43);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = n_43;
                                                                                  t = term_p_43;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm s_43 = t;
                                                                                  int t_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = o_107(n_107, t);
                                                                                      LocalPopChoice(t_43);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_43;
                                                                                      t = term_w_43;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm x_43 = t;
                                                                                      int y_43 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = o_107(n_107, t);
                                                                                          LocalPopChoice(y_43);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_43;
                                                                                          t = term_a_44;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm b_44 = t;
                                                                                          int c_44 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = o_107(n_107, t);
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
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm e_44 = t;
                                                                                              int f_44 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = o_107(n_107, t);
                                                                                                  LocalPopChoice(f_44);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_44;
                                                                                                  t = term_g_44;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm h_44 = t;
                                                                                                  int k_44 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = o_107(n_107, t);
                                                                                                      LocalPopChoice(k_44);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_44;
                                                                                                      t = term_m_44;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm n_44 = t;
                                                                                                      int o_44 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = o_107(n_107, t);
                                                                                                          LocalPopChoice(o_44);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = n_44;
                                                                                                          t = term_q_44;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm t_44 = t;
                                                                                                          int u_44 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = o_107(n_107, t);
                                                                                                              LocalPopChoice(u_44);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = t_44;
                                                                                                              t = term_v_44;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm w_44 = t;
                                                                                                              int y_44 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = o_107(n_107, t);
                                                                                                                  LocalPopChoice(y_44);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = w_44;
                                                                                                                  t = term_z_44;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm a_45 = t;
                                                                                                                  int b_45 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = o_107(n_107, t);
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
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm d_45 = t;
                                                                                                                      int e_45 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = o_107(n_107, t);
                                                                                                                          LocalPopChoice(e_45);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_45;
                                                                                                                          t = term_k_38;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm g_45 = t;
                                                                                                                          int i_45 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = o_107(n_107, t);
                                                                                                                              LocalPopChoice(i_45);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = g_45;
                                                                                                                              t = term_j_45;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm k_45 = t;
                                                                                                                              int m_45 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = o_107(n_107, t);
                                                                                                                                  LocalPopChoice(m_45);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = k_45;
                                                                                                                                  t = term_p_45;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm r_45 = t;
                                                                                                                                  int u_45 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = o_107(n_107, t);
                                                                                                                                      LocalPopChoice(u_45);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = r_45;
                                                                                                                                      t = term_v_45;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm y_45 = t;
                                                                                                                                      int g_46 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = o_107(n_107, t);
                                                                                                                                          LocalPopChoice(g_46);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = y_45;
                                                                                                                                          t = term_h_46;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm j_46 = t;
                                                                                                                                          int o_46 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = o_107(n_107, t);
                                                                                                                                              LocalPopChoice(o_46);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = j_46;
                                                                                                                                              t = term_p_46;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm q_46 = t;
                                                                                                                                              int s_46 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = o_107(n_107, t);
                                                                                                                                                  LocalPopChoice(s_46);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = q_46;
                                                                                                                                                  t = term_t_46;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm u_46 = t;
                                                                                                                                                  int x_46 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = o_107(n_107, t);
                                                                                                                                                      LocalPopChoice(x_46);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = u_46;
                                                                                                                                                      t = term_a_47;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm b_47 = t;
                                                                                                                                                      int e_47 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = o_107(n_107, t);
                                                                                                                                                          LocalPopChoice(e_47);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = b_47;
                                                                                                                                                          t = term_g_47;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm h_47 = t;
                                                                                                                                                          int i_47 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = o_107(n_107, t);
                                                                                                                                                              LocalPopChoice(i_47);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = h_47;
                                                                                                                                                              t = term_j_47;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = o_107(n_107, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm g_11 (ATerm u_28, ATerm v_28, ATerm t)
{
  ATerm i_108 = NULL,j_108 = NULL;
  t = v_28;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_28;
    }
  else
    {
      ATerm h_56 = NULL,s_56 = NULL,v_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_108 = ATgetFirst((ATermList) t);
          j_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_28);
      h_56 = t;
      t = j_108;
      {
        static ATerm y_56 (ATerm t)
        {
          ATerm k_47 = t;
          int l_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_56 = NULL;
              u_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_56;
              LocalPopChoice(l_47);
            }
          else
            {
              t = k_47;
              {
                ATerm w_56 = NULL;
                t = Cons_2_0(_id, y_56, t);
                w_56 = t;
                t = (ATerm) ATinsert(CheckATermList(w_56), u_28);
              }
            }
          return(t);
        }
        t = y_56(t);
      }
      s_56 = t;
      t = (ATerm) ATinsert(CheckATermList(s_56), i_108);
      v_18 = t;
      t = SSLsetAnnotations(v_18, h_56);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_108 = ATgetFirst((ATermList) t);
      y_108 = (ATerm) ATgetNext((ATermList) t);
      t = y_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_108 = ATgetFirst((ATermList) t);
          w_108 = (ATerm) ATgetNext((ATermList) t);
          t = v_108;
          if(match_int(t, 34))
            {
              t = x_108;
              if(match_int(t, 92))
                {
                  ATerm m_47 = t;
                  int n_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_109 = NULL;
                      t = w_108;
                      t = De_Escape_0_0(t);
                      d_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(d_109), term_x_33);
                      LocalPopChoice(n_47);
                    }
                  else
                    {
                      t = m_47;
                      {
                        ATerm g_109 = NULL;
                        t = y_108;
                        t = De_Escape_0_0(t);
                        g_109 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_109), x_108);
                      }
                    }
                }
              else
                {
                  ATerm j_109 = NULL;
                  t = y_108;
                  t = De_Escape_0_0(t);
                  j_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_109), x_108);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = x_108;
                  if(match_int(t, 92))
                    {
                      ATerm o_47 = t;
                      int p_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_109 = NULL;
                          t = w_108;
                          t = De_Escape_0_0(t);
                          l_109 = t;
                          t = (ATerm) ATinsert(CheckATermList(l_109), term_t_34);
                          LocalPopChoice(p_47);
                        }
                      else
                        {
                          t = o_47;
                          {
                            ATerm o_109 = NULL;
                            t = y_108;
                            t = De_Escape_0_0(t);
                            o_109 = t;
                            t = (ATerm) ATinsert(CheckATermList(o_109), x_108);
                          }
                        }
                    }
                  else
                    {
                      ATerm r_109 = NULL;
                      t = y_108;
                      t = De_Escape_0_0(t);
                      r_109 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_109), x_108);
                    }
                }
              else
                {
                  ATerm u_109 = NULL;
                  t = y_108;
                  t = De_Escape_0_0(t);
                  u_109 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_109), x_108);
                }
            }
        }
      else
        {
          ATerm x_109 = NULL;
          t = y_108;
          t = De_Escape_0_0(t);
          x_109 = t;
          t = (ATerm) ATinsert(CheckATermList(x_109), x_108);
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
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL;
  l_110 = t;
  t = SSL_explode_string(l_110);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_110 = ATgetFirst((ATermList) t);
      q_110 = (ATerm) ATgetNext((ATermList) t);
      t = q_110;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_110 = ATgetFirst((ATermList) t);
          o_110 = (ATerm) ATgetNext((ATermList) t);
          t = m_110;
          if(match_int(t, 34))
            {
              t = p_110;
              if(match_int(t, 92))
                {
                  ATerm q_47 = t;
                  int r_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_110 = NULL;
                      t = o_110;
                      t = De_Escape_0_0(t);
                      t_110 = t;
                      t = (ATerm) ATinsert(CheckATermList(t_110), term_x_33);
                      LocalPopChoice(r_47);
                    }
                  else
                    {
                      t = q_47;
                      {
                        ATerm w_110 = NULL;
                        t = q_110;
                        t = De_Escape_0_0(t);
                        w_110 = t;
                        t = (ATerm) ATinsert(CheckATermList(w_110), p_110);
                      }
                    }
                }
              else
                {
                  ATerm z_110 = NULL;
                  t = q_110;
                  t = De_Escape_0_0(t);
                  z_110 = t;
                  t = (ATerm) ATinsert(CheckATermList(z_110), p_110);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = p_110;
                  if(match_int(t, 92))
                    {
                      ATerm s_47 = t;
                      int t_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_111 = NULL;
                          t = o_110;
                          t = De_Escape_0_0(t);
                          b_111 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_111), term_t_34);
                          LocalPopChoice(t_47);
                        }
                      else
                        {
                          t = s_47;
                          {
                            ATerm f_111 = NULL;
                            t = q_110;
                            t = De_Escape_0_0(t);
                            f_111 = t;
                            t = (ATerm) ATinsert(CheckATermList(f_111), p_110);
                          }
                        }
                    }
                  else
                    {
                      ATerm i_111 = NULL;
                      t = q_110;
                      t = De_Escape_0_0(t);
                      i_111 = t;
                      t = (ATerm) ATinsert(CheckATermList(i_111), p_110);
                    }
                }
              else
                {
                  ATerm l_111 = NULL;
                  t = q_110;
                  t = De_Escape_0_0(t);
                  l_111 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_111), p_110);
                }
            }
        }
      else
        {
          ATerm o_111 = NULL;
          t = q_110;
          t = De_Escape_0_0(t);
          o_111 = t;
          t = (ATerm) ATinsert(CheckATermList(o_111), p_110);
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
ATerm list_ana_1_0 (ATerm z_128 (ATerm), ATerm t)
{
  static ATerm v_111 (ATerm t)
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_111 = NULL;
        t = z_128(t);
        q_111 = t;
        t = (ATerm) ATinsert(ATempty, q_111);
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        {
          ATerm x_47 = t;
          int a_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_111 = NULL,d_57 = NULL;
              u_111 = t;
              t = SSL_explode_term(u_111);
              if(match_cons(t, sym__2))
                {
                  ATerm d_48 = ATgetArgument(t, 0);
                  d_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_57;
              t = filter_1_0(v_111, t);
              t = concat_0_0(t);
              LocalPopChoice(a_48);
            }
          else
            {
              t = x_47;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = v_111(t);
  return(t);
}
static ATerm v_6 (ATerm t)
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
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        t = de_escape_0_0(t);
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
      }
  }
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  ATerm z_111 = NULL,h_57 = NULL,i_57 = NULL;
  t = list_ana_1_0(v_6, t);
  i_57 = t;
  t = term_l_36;
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_36, i_57);
  t = g_11(h_57, i_57, t);
  z_111 = t;
  t = SSL_concat_strings(z_111);
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(h_48);
      }
    else
      {
        t = g_48;
      }
  }
  return(t);
}
static ATerm w_113 (ATerm w_112, ATerm x_112, ATerm y_112, ATerm t)
{
  ATerm d_113 = NULL;
  t = y_112;
  {
    ATerm i_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_112;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        d_113 = t;
        LocalPopChoice(k_48);
      }
    else
      {
        t = i_48;
        {
          ATerm m_48 = t;
          int n_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_113 = NULL,g_113 = NULL;
              t = (ATerm) ATinsert(ATempty, x_112);
              t = syms2strs_0_0(t);
              f_113 = t;
              t = w_112;
              t = filter_1_0(lit2str_0_0, t);
              g_113 = t;
              t = filter_1_0(w_6, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_48 = ATgetFirst((ATermList) t);
                  ATerm p_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, f_113, g_113);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              d_113 = t;
              LocalPopChoice(n_48);
            }
          else
            {
              t = m_48;
              {
                ATerm r_48 = t;
                int t_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = w_112;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    d_113 = t;
                    LocalPopChoice(t_48);
                  }
                else
                  {
                    t = r_48;
                    {
                      ATerm i_113 = NULL,j_113 = NULL;
                      t = (ATerm) ATinsert(ATempty, x_112);
                      t = syms2strs_0_0(t);
                      i_113 = t;
                      t = term_p_14;
                      t = new_0_0(t);
                      j_113 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_113, (ATerm) ATinsert(ATinsert(ATempty, j_113), term_u_48));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      d_113 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = d_113;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm w_48 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_48;
    }
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm l_113 = NULL,q_113 = NULL,r_113 = NULL;
  l_113 = t;
  {
    ATerm y_48 = t;
    int z_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            q_113 = ATgetArgument(t, 0);
            {
              ATerm a_49 = ATgetArgument(t, 1);
            }
            {
              ATerm b_49 = ATgetArgument(t, 2);
            }
            {
              ATerm c_49 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_48);
        t = q_113;
        {
          ATerm d_49 = t;
          int e_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_57 = NULL,v_57 = NULL;
              ATerm n_49 = t;
              if((PushChoice() == 0))
                {
                  t = de_quote_0_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_49;
                }
              t = SSL_explode_string(q_113);
              v_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_33)), v_57), (ATerm) ATinsert(ATempty, term_x_33));
              t = concat_0_0(t);
              p_57 = t;
              t = SSL_implode_string(p_57);
              LocalPopChoice(e_49);
            }
          else
            {
              t = d_49;
            }
        }
      }
    else
      {
        t = y_48;
        if(match_cons(t, sym_prod_3))
          {
            q_113 = ATgetArgument(t, 0);
            r_113 = ATgetArgument(t, 1);
            {
              ATerm o_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_113;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm p_49 = t;
            int q_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_113(q_113, r_113, l_113, t);
                LocalPopChoice(q_49);
              }
            else
              {
                t = p_49;
                {
                  ATerm u_113 = NULL;
                  t = (ATerm) ATinsert(ATempty, r_113);
                  t = syms2strs_0_0(t);
                  u_113 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_113, (ATerm) ATinsert(ATempty, term_r_49));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = w_113(q_113, r_113, l_113, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm g_116 = NULL,h_116 = NULL,i_116 = NULL;
  g_116 = t;
  if(match_cons(t, sym_sort_1))
    {
      h_116 = ATgetArgument(t, 0);
      {
        ATerm y_57 = NULL,l_19 = NULL;
        t = SSLgetAnnotations(g_116);
        y_57 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, h_116);
        l_19 = t;
        t = SSLsetAnnotations(l_19, y_57);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          h_116 = ATgetArgument(t, 0);
          i_116 = ATgetArgument(t, 1);
          {
            ATerm m_59 = NULL,q_59 = NULL,u_59 = NULL,f_23 = NULL;
            t = SSLgetAnnotations(g_116);
            m_59 = t;
            t = h_116;
            t = syntaxless_sort_0_0(t);
            q_59 = t;
            t = i_116;
            t = syntaxless_sort_0_0(t);
            u_59 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, q_59, u_59);
            f_23 = t;
            t = SSLsetAnnotations(f_23, m_59);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              h_116 = ATgetArgument(t, 0);
              {
                ATerm e_60 = NULL,h_60 = NULL,h_23 = NULL;
                t = SSLgetAnnotations(g_116);
                e_60 = t;
                t = h_116;
                t = syntaxless_sort_0_0(t);
                h_60 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, h_60);
                h_23 = t;
                t = SSLsetAnnotations(h_23, e_60);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  h_116 = ATgetArgument(t, 0);
                  {
                    ATerm a_61 = NULL,d_61 = NULL,i_23 = NULL;
                    t = SSLgetAnnotations(g_116);
                    a_61 = t;
                    t = h_116;
                    t = syntaxless_sort_0_0(t);
                    d_61 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, d_61);
                    i_23 = t;
                    t = SSLsetAnnotations(i_23, a_61);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      h_116 = ATgetArgument(t, 0);
                      {
                        ATerm l_61 = NULL,n_61 = NULL,j_23 = NULL;
                        t = SSLgetAnnotations(g_116);
                        l_61 = t;
                        t = h_116;
                        t = syntaxless_sort_0_0(t);
                        n_61 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, n_61);
                        j_23 = t;
                        t = SSLsetAnnotations(j_23, l_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          h_116 = ATgetArgument(t, 0);
                          i_116 = ATgetArgument(t, 1);
                          {
                            ATerm e_62 = NULL,j_62 = NULL,k_23 = NULL;
                            t = SSLgetAnnotations(g_116);
                            e_62 = t;
                            t = h_116;
                            t = syntaxless_sort_0_0(t);
                            j_62 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, j_62, i_116);
                            k_23 = t;
                            t = SSLsetAnnotations(k_23, e_62);
                          }
                        }
                      else
                        {
                          ATerm g_63 = NULL,o_63 = NULL,l_23 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              h_116 = ATgetArgument(t, 0);
                              i_116 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(g_116);
                          g_63 = t;
                          t = h_116;
                          t = syntaxless_sort_0_0(t);
                          o_63 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, o_63, i_116);
                          l_23 = t;
                          t = SSLsetAnnotations(l_23, g_63);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_Injections_0)))
    _fail(t);
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL,o_24 = NULL,n_24 = NULL;
  c_117 = t;
  if(match_cons(t, sym_prod_3))
    {
      t_116 = ATgetArgument(t, 0);
      u_116 = ATgetArgument(t, 1);
      v_116 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_117);
  s_116 = t;
  t = t_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_116 = ATgetFirst((ATermList) t);
      z_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_116);
  x_116 = t;
  t = y_116;
  t = syntaxless_sort_0_0(t);
  a_117 = t;
  t = z_116;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_116), a_117);
  n_24 = t;
  t = SSLsetAnnotations(n_24, x_116);
  b_117 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, b_117, u_116, v_116);
  o_24 = t;
  t = SSLsetAnnotations(o_24, s_116);
  w_116 = t;
  t = term_u_49;
  t = get_options_0_0(t);
  t = oncetd_1_0(x_6, t);
  t = w_116;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm e_117 = NULL,i_117 = NULL;
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm x_49 = ATgetArgument(t, 0);
          ATerm y_49 = ATgetArgument(t, 1);
          ATerm z_49 = ATgetArgument(t, 2);
          e_117 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(w_49);
      t = e_117;
      t = oncetd_1_0(z_6, t);
      t = term_p_14;
    }
  else
    {
      t = v_49;
      if(match_cons(t, sym_prod_3))
        {
          ATerm a_50 = ATgetArgument(t, 0);
          ATerm b_50 = ATgetArgument(t, 1);
          i_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_117;
      t = oncetd_1_0(e_7, t);
      t = term_p_14;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm m_117 = NULL,q_117 = NULL;
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm e_50 = ATgetArgument(t, 0);
          ATerm g_50 = ATgetArgument(t, 1);
          ATerm h_50 = ATgetArgument(t, 2);
          m_117 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(d_50);
      t = m_117;
      t = oncetd_1_0(g_7, t);
      t = term_p_14;
    }
  else
    {
      t = c_50;
      if(match_cons(t, sym_prod_3))
        {
          ATerm i_50 = ATgetArgument(t, 0);
          ATerm j_50 = ATgetArgument(t, 1);
          q_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_117;
      t = oncetd_1_0(i_7, t);
      t = term_p_14;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm x_117 = NULL;
  x_117 = t;
  {
    ATerm s_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_63 = NULL;
        t = x_117;
        {
          ATerm u_50 = t;
          if((PushChoice() == 0))
            {
              ATerm v_50 = t;
              int w_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
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
                        t = is_bracket_0_0(t);
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
                              t = is_reject_0_0(t);
                              LocalPopChoice(a_51);
                            }
                          else
                            {
                              t = z_50;
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
              t = u_50;
            }
        }
        t = x_117;
        t = mk_constr_0_0(t);
        v_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_117, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, v_63)));
        t = add_attributes_0_0(t);
        LocalPopChoice(t_50);
      }
    else
      {
        t = s_50;
        {
          ATerm z_117 = NULL;
          static ATerm k_7 (ATerm t)
          {
            ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL,r_26 = NULL;
            c_118 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm b_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_118);
            a_118 = t;
            t = not_null(z_117);
            t = uq2q_0_0(t);
            b_118 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, b_118);
            r_26 = t;
            t = SSLsetAnnotations(r_26, a_118);
            return(t);
          }
          t = x_117;
          t = get_constr_0_0(t);
          if(((z_117 != NULL) && (z_117 != t)))
            _fail(t);
          else
            z_117 = t;
          t = x_117;
          t = oncetd_1_0(k_7, t);
        }
      }
  }
  return(t);
}
static ATerm m_11 (ATerm d_22, ATerm e_22, ATerm c_22, ATerm b_22, ATerm t)
{
  ATerm e_118 = NULL,f_118 = NULL;
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm o_7 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((e_118 != NULL) && (e_118 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              e_118 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = c_22;
      t = oncetd_1_0(o_7, t);
      LocalPopChoice(d_51);
    }
  else
    {
      t = c_51;
      {
        ATerm e_51 = t;
        int f_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,y_26 = NULL,w_26 = NULL;
            t = e_22;
            if(match_cons(t, sym_sort_1))
              {
                n_118 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_22);
            m_118 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, n_118);
            w_26 = t;
            t = SSLsetAnnotations(w_26, m_118);
            t = (ATerm) ATmakeAppl(sym_prod_3, d_22, e_22, c_22);
            t = prodcons_0_0(t);
            l_118 = t;
            if(match_cons(t, sym_prod_3))
              {
                h_118 = ATgetArgument(t, 0);
                i_118 = ATgetArgument(t, 1);
                j_118 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_118);
            g_118 = t;
            t = j_118;
            {
              static ATerm s_7 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((e_118 != NULL) && (e_118 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_118 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(s_7, t);
            }
            k_118 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, h_118, i_118, k_118);
            y_26 = t;
            t = SSLsetAnnotations(y_26, g_118);
            LocalPopChoice(f_51);
          }
        else
          {
            t = e_51;
            t = term_g_51;
            e_118 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, d_22, e_22, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(e_118))))), (ATerm) ATinsert(ATempty, not_null(e_118)));
  t = get_pp_entry_0_0(t);
  f_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_118), f_118);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm h_51 = t;
  if((PushChoice() == 0))
    {
      ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL,f_27 = NULL;
      y_118 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_118);
      w_118 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_118);
      f_27 = t;
      t = SSLsetAnnotations(f_27, w_118);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_51;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm i_51 = t;
  if((PushChoice() == 0))
    {
      ATerm z_118 = NULL,a_119 = NULL,b_119 = NULL,g_27 = NULL;
      b_119 = t;
      if(match_cons(t, sym_lit_1))
        {
          a_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_119);
      z_118 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, a_119);
      g_27 = t;
      t = SSLsetAnnotations(g_27, z_118);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_51;
    }
  return(t);
}
static ATerm n_11 (ATerm k_21, ATerm i_21, ATerm j_21, ATerm l_21, ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL;
  static ATerm v_7 (ATerm t)
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_51 = t;
        int m_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_7 (ATerm t)
            {
              t = not_null(t_118);
              return(t);
            }
            t = Instantiate_1_0(w_7, t);
            LocalPopChoice(m_51);
          }
        else
          {
            t = l_51;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, k_21, i_21, j_21), l_21);
  t = m_11(k_21, i_21, j_21, l_21, t);
  if(match_cons(t, sym__2))
    {
      r_118 = ATgetArgument(t, 0);
      s_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_21;
  t = filter_1_0(t_7, t);
  u_118 = t;
  t = l_21;
  t = filter_1_0(u_7, t);
  v_118 = t;
  t = (ATerm) ATmakeAppl(sym__4, u_118, v_118, (ATerm)ATinsert(ATempty, r_118), term_v_14);
  t = seq2abox_0_0(t);
  if(((t_118 != NULL) && (t_118 != t)))
    _fail(t);
  else
    t_118 = t;
  t = s_118;
  t = bottomup_1_0(v_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL;
  p_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_119;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_119 = ATgetFirst((ATermList) t);
          r_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_51 = t;
        int p_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_64 = NULL,d_64 = NULL,e_64 = NULL,l_27 = NULL;
            t = SSLgetAnnotations(p_119);
            a_64 = t;
            t = q_119;
            t = c_111(t);
            d_64 = t;
            t = r_119;
            t = filter_1_0(c_111, t);
            e_64 = t;
            t = (ATerm) ATinsert(CheckATermList(e_64), d_64);
            l_27 = t;
            t = SSLsetAnnotations(l_27, a_64);
            LocalPopChoice(p_51);
          }
        else
          {
            t = n_51;
            t = r_119;
            t = filter_1_0(c_111, t);
          }
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  static ATerm x_7 (ATerm t)
  {
    t = topdown_1_0(f_97, t);
    return(t);
  }
  t = f_97(t);
  t = SRTS_all(x_7, t);
  return(t);
}
ATerm sometd_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  static ATerm u_119 (ATerm t)
  {
    ATerm q_51 = t;
    int r_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_98(t);
        LocalPopChoice(r_51);
      }
    else
      {
        t = q_51;
        t = SRTS_some(u_119, t);
      }
    return(t);
  }
  t = u_119(t);
  return(t);
}
ATerm repeat_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t)
{
  static ATerm v_119 (ATerm t)
  {
    ATerm s_51 = t;
    int t_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_96(t);
        t = v_119(t);
        LocalPopChoice(t_51);
      }
    else
      {
        t = s_51;
        t = g_96(t);
      }
    return(t);
  }
  t = v_119(t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  static ATerm k_120 (ATerm t)
  {
    ATerm g_120 = NULL,i_120 = NULL,j_120 = NULL;
    j_120 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_120 = ATgetFirst((ATermList) t);
        i_120 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_64 = NULL,p_64 = NULL,e_28 = NULL;
          t = SSLgetAnnotations(j_120);
          m_64 = t;
          t = i_120;
          t = k_120(t);
          p_64 = t;
          t = (ATerm) ATinsert(CheckATermList(p_64), g_120);
          e_28 = t;
          t = SSLsetAnnotations(e_28, m_64);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_120;
        t = i_104(t);
      }
    return(t);
  }
  t = k_120(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL;
  n_120 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_120;
    }
  else
    {
      static ATerm y_7 (ATerm t)
      {
        t = not_null(p_120);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_120 = ATgetFirst((ATermList) t);
          if(((p_120 != NULL) && (p_120 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_120;
      t = at_end_1_0(y_7, t);
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(h_65);
  j_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_65), term_v_51), j_65), term_u_51);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm o_121 = NULL,p_121 = NULL,q_121 = NULL;
  o_121 = t;
  if(match_cons(t, sym_Path1_1))
    {
      p_121 = ATgetArgument(t, 0);
      t = p_121;
    }
  else
    {
      ATerm f_65 = NULL,g_65 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          p_121 = ATgetArgument(t, 0);
          q_121 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_121;
      t = map_1_0(z_7, t);
      t = concat_0_0(t);
      f_65 = t;
      t = (ATerm) ATinsert(CheckATermList(f_65), p_121);
      g_65 = t;
      t = SSL_concat_strings(g_65);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm i_122 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      i_122 = ATgetArgument(t, 0);
      {
        ATerm w_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_122;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm y_121 = NULL,z_121 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      y_121 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, y_121);
    }
  else
    {
      ATerm h_122 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          y_121 = ATgetArgument(t, 0);
          z_121 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_121;
      t = map_1_0(b_8, t);
      h_122 = t;
      t = (ATerm) ATinsert(CheckATermList(h_122), y_121);
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = debug_1_0(e_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_y_51;
  return(t);
}
static ATerm o_11 (ATerm p_65, ATerm q_65, ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL;
  t = p_65;
  t = mk_key_0_0(t);
  k_122 = t;
  t = term_w_25;
  l_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_65, q_65);
  m_122 = t;
  t = SSL_table_put(l_122, k_122, m_122);
  t = p_65;
  t = path_to_string_0_0(t);
  j_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_122, q_65);
  t = if_verbose1_1_0(d_8, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  static ATerm d_123 (ATerm t)
  {
    ATerm a_123 = NULL,b_123 = NULL,c_123 = NULL;
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_113(t);
        LocalPopChoice(a_52);
      }
    else
      {
        t = z_51;
      }
    c_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_123 = ATgetFirst((ATermList) t);
        b_123 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_65 = NULL,b_66 = NULL,o_28 = NULL;
          t = SSLgetAnnotations(c_123);
          v_65 = t;
          t = b_123;
          t = d_123(t);
          b_66 = t;
          t = (ATerm) ATinsert(CheckATermList(b_66), a_123);
          o_28 = t;
          t = SSLsetAnnotations(o_28, v_65);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_123;
      }
    return(t);
  }
  t = d_123(t);
  return(t);
}
ATerm at_last_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  static ATerm c_124 (ATerm t)
  {
    ATerm z_123 = NULL,a_124 = NULL,b_124 = NULL;
    z_123 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_124 = ATgetFirst((ATermList) t);
        b_124 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_52 = t;
      int c_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_66 = NULL,x_28 = NULL;
          t = SSLgetAnnotations(z_123);
          j_66 = t;
          t = b_124;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_124), a_124);
          x_28 = t;
          t = SSLsetAnnotations(x_28, j_66);
          t = t_104(t);
          LocalPopChoice(c_52);
        }
      else
        {
          t = b_52;
          {
            ATerm e_67 = NULL,h_67 = NULL,d_29 = NULL;
            t = SSLgetAnnotations(z_123);
            e_67 = t;
            t = b_124;
            t = c_124(t);
            h_67 = t;
            t = (ATerm) ATinsert(CheckATermList(h_67), a_124);
            d_29 = t;
            t = SSLsetAnnotations(d_29, e_67);
          }
        }
    }
    return(t);
  }
  t = c_124(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_124 = NULL,j_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_124 = ATgetFirst((ATermList) t);
      j_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_124;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_124;
    }
  else
    {
      t = j_124;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm r_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_52 = ATgetFirst((ATermList) t);
      r_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_124;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm t)
{
  ATerm o_124 = NULL,p_124 = NULL,q_124 = NULL;
  o_124 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_124 = ATgetFirst((ATermList) t);
      {
        ATerm e_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_124;
  t = z_112(t);
  t = o_124;
  t = last_0_0(t);
  t = a_113(t);
  t = o_124;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_52 = ATgetFirst((ATermList) t);
      p_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_124;
  t = at_last_1_0(f_8, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_70 = ATgetFirst((ATermList) t);
      g_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_70;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = g_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_70 = ATgetFirst((ATermList) t);
      i_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_70;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(i_70), term_x_33);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(i_70), term_t_34);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(i_70), term_g_52);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_70), term_h_52);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm y_126 = NULL,z_126 = NULL,a_127 = NULL;
  y_126 = t;
  if(match_cons(t, sym_Arg_1))
    {
      z_126 = ATgetArgument(t, 0);
      {
        ATerm s_67 = NULL,u_67 = NULL,g_29 = NULL;
        t = SSLgetAnnotations(y_126);
        s_67 = t;
        t = SSL_string_to_int(z_126);
        u_67 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, u_67);
        g_29 = t;
        t = SSLsetAnnotations(g_29, s_67);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          z_126 = ATgetArgument(t, 0);
          a_127 = ATgetArgument(t, 1);
          {
            ATerm b_68 = NULL,f_68 = NULL,g_68 = NULL,h_29 = NULL;
            t = SSLgetAnnotations(y_126);
            b_68 = t;
            t = SSL_string_to_int(z_126);
            f_68 = t;
            t = SSL_string_to_int(a_127);
            g_68 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, f_68, g_68);
            h_29 = t;
            t = SSLsetAnnotations(h_29, b_68);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              z_126 = ATgetArgument(t, 0);
              a_127 = ATgetArgument(t, 1);
              {
                ATerm o_68 = NULL,i_29 = NULL;
                t = SSLgetAnnotations(y_126);
                o_68 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, z_126, a_127);
                i_29 = t;
                t = SSLsetAnnotations(i_29, o_68);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  z_126 = ATgetArgument(t, 0);
                  {
                    ATerm x_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,j_29 = NULL;
                    t = SSLgetAnnotations(y_126);
                    x_69 = t;
                    t = SSL_explode_string(z_126);
                    t = unquote_chars_2_0(g_8, h_8, t);
                    c_70 = t;
                    t = SSL_implode_string(c_70);
                    b_70 = t;
                    t = SSL_explode_string(b_70);
                    t = unescape_chars_1_0(i_8, t);
                    a_70 = t;
                    t = SSL_implode_string(a_70);
                    z_69 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, z_69);
                    j_29 = t;
                    t = SSLsetAnnotations(j_29, x_69);
                  }
                }
              else
                {
                  ATerm s_70 = NULL,w_70 = NULL,l_29 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      z_126 = ATgetArgument(t, 0);
                      a_127 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_126);
                  s_70 = t;
                  t = SSL_string_to_int(z_126);
                  w_70 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, w_70, a_127);
                  l_29 = t;
                  t = SSLsetAnnotations(l_29, s_70);
                }
            }
        }
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm j_127 = NULL,r_127 = NULL;
  t = topdown_1_0(m_8, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      j_127 = ATgetArgument(t, 0);
      r_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(j_127, r_127, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm i_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(j_52);
    }
  else
    {
      t = i_52;
    }
  return(t);
}
static ATerm w_11 (ATerm o_65, ATerm t)
{
  t = o_65;
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(k_8, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  static ATerm u_127 (ATerm t)
  {
    ATerm k_52 = t;
    int l_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_98(t);
        LocalPopChoice(l_52);
      }
    else
      {
        t = k_52;
        t = SRTS_one(u_127, t);
      }
    return(t);
  }
  t = u_127(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm v_127 = NULL,x_127 = NULL;
  t = term_m_52;
  v_127 = t;
  t = term_o_52;
  x_127 = t;
  t = term_q_52;
  t = n_12(v_127, x_127, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm s_52 = t;
  int t_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL;
      t = term_u_52;
      t = get_options_0_0(t);
      t = oncetd_1_0(n_8, t);
      t = term_q_14;
      z_127 = t;
      t = (ATerm) ATinsert(ATempty, term_v_52);
      a_128 = t;
      t = SSL_printnl(z_127, a_128);
      t = term_v_14;
      y_127 = t;
      t = SSL_exit(y_127);
      t = (ATerm) ATinsert(ATempty, term_v_52);
      LocalPopChoice(t_52);
    }
  else
    {
      t = s_52;
      {
        ATerm c_128 = NULL,d_128 = NULL;
        t = term_q_14;
        c_128 = t;
        t = (ATerm) ATinsert(ATempty, term_w_52);
        d_128 = t;
        t = SSL_printnl(c_128, d_128);
        t = (ATerm) ATinsert(ATempty, term_w_52);
      }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm q_128 = NULL,r_128 = NULL,e_71 = NULL,f_71 = NULL;
  t = if_verbose1_1_0(q_8, t);
  t = ReadFromFile_0_0(t);
  r_128 = t;
  t = SSL_explode_term(r_128);
  if(match_cons(t, sym__2))
    {
      f_71 = ATgetArgument(t, 0);
      {
        ATerm y_52 = ATgetArgument(t, 1);
        if(((ATgetType(y_52) == AT_LIST) && !(ATisEmpty(y_52))))
          {
            e_71 = ATgetFirst((ATermList) y_52);
            {
              ATerm z_52 = (ATerm) ATgetNext((ATermList) y_52);
              if(((ATgetType(z_52) != AT_LIST) || !(ATisEmpty(z_52))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_71;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = e_71;
  if(match_cons(t, sym_PP_Table_1))
    {
      q_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(q_128, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = debug_1_0(t_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_a_53;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm k_128 = NULL,l_128 = NULL;
  k_128 = t;
  t = term_w_25;
  l_128 = t;
  t = SSL_table_create(l_128);
  t = k_128;
  t = map_1_0(p_8, t);
  return(t);
}
static ATerm z_11 (ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm l_34, ATerm k_34, ATerm t)
{
  t = a_108(t);
  {
    static ATerm v_8 (ATerm t)
    {
      ATerm w_128 = NULL;
      w_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_34, w_128);
      t = z_107(t);
      return(t);
    }
    t = fetch_1_0(v_8, t);
  }
  t = k_34;
  return(t);
}
static ATerm a_12 (ATerm w_107 (ATerm), ATerm h_34, ATerm g_34, ATerm t)
{
  static ATerm p_129 (ATerm t)
  {
    ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
    k_129 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_129 = ATgetFirst((ATermList) t);
            m_129 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_53 = t;
          int e_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_129;
              {
                static ATerm y_8 (ATerm t)
                {
                  t = g_34;
                  return(t);
                }
                t = z_11(w_107, y_8, l_129, m_129, t);
              }
              t = p_129(t);
              LocalPopChoice(e_53);
            }
          else
            {
              t = d_53;
              {
                ATerm m_71 = NULL,p_71 = NULL,y_29 = NULL;
                t = SSLgetAnnotations(k_129);
                m_71 = t;
                t = m_129;
                t = p_129(t);
                p_71 = t;
                t = (ATerm) ATinsert(CheckATermList(p_71), l_129);
                y_29 = t;
                t = SSLsetAnnotations(y_29, m_71);
              }
            }
        }
      }
    return(t);
  }
  t = h_34;
  t = p_129(t);
  return(t);
}
ATerm foldr_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL;
  s_129 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_129;
      t = a_110(t);
    }
  else
    {
      ATerm x_129 = NULL,z_129 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_129 = ATgetFirst((ATermList) t);
          u_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_129;
      t = c_110(t);
      x_129 = t;
      t = u_129;
      t = foldr_3_0(a_110, b_110, c_110, t);
      z_129 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_129, z_129);
      t = b_110(t);
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t)
{
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_130 = NULL;
      t = b_109(t);
      c_130 = t;
      t = (ATerm) ATinsert(ATempty, c_130);
      LocalPopChoice(g_53);
    }
  else
    {
      t = f_53;
      {
        ATerm u_71 = NULL,v_71 = NULL;
        static ATerm a_9 (ATerm t)
        {
          t = collect_om_2_0(b_109, c_109, t);
          return(t);
        }
        v_71 = t;
        t = SSL_explode_term(v_71);
        if(match_cons(t, sym__2))
          {
            ATerm h_53 = ATgetArgument(t, 0);
            u_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_71;
        t = foldr_3_0(z_8, c_109, a_9, t);
      }
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm n_130 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      n_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_130;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL;
  if(match_cons(t, sym__2))
    {
      o_130 = ATgetArgument(t, 0);
      p_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(i_9, o_130, p_130, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm q_130 = NULL;
  if(match_cons(t, sym__2))
    {
      q_130 = ATgetArgument(t, 0);
      if((q_130 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = sometd_1_0(l_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm s_130 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      s_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_130;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm i_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_53 = ATgetFirst((ATermList) t);
              ATerm l_53 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
        }
      t = filter_1_0(n_9, t);
      LocalPopChoice(j_53);
    }
  else
    {
      t = i_53;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm m_53 = t;
  if((PushChoice() == 0))
    {
      ATerm u_130 = NULL,v_130 = NULL,w_130 = NULL,a_30 = NULL;
      w_130 = t;
      if(match_cons(t, sym_opt_1))
        {
          v_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_130);
      u_130 = t;
      t = v_130;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, v_130);
      a_30 = t;
      t = SSLsetAnnotations(a_30, u_130);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_53;
    }
  {
    ATerm n_53 = t;
    if((PushChoice() == 0))
      {
        ATerm x_130 = NULL,y_130 = NULL,z_130 = NULL,b_30 = NULL;
        z_130 = t;
        if(match_cons(t, sym_layout_1))
          {
            y_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_130);
        x_130 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, y_130);
        b_30 = t;
        t = SSLsetAnnotations(b_30, x_130);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_53;
      }
  }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm m_131 = NULL,n_131 = NULL,o_131 = NULL,c_30 = NULL;
  o_131 = t;
  if(match_cons(t, sym_layout_1))
    {
      n_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_131);
  m_131 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, n_131);
  c_30 = t;
  t = SSLsetAnnotations(c_30, m_131);
  return(t);
}
static ATerm b_12 (ATerm u_26, ATerm t_26, ATerm t)
{
  ATerm i_130 = NULL,j_130 = NULL,l_130 = NULL,m_130 = NULL;
  t = u_26;
  t = collect_om_2_0(b_9, d_9, t);
  t = reverse_acc_2_0(_id, j_9, t);
  t = read_pp_tables_0_0(t);
  t = t_26;
  t = repeat_2_0(k_9, _id, t);
  m_130 = t;
  t = topdown_1_0(m_9, t);
  {
    ATerm o_53 = t;
    int p_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_131 = NULL,d_131 = NULL,e_131 = NULL,f_131 = NULL,g_131 = NULL,h_131 = NULL;
        c_131 = t;
        if(match_cons(t, sym_appl_2))
          {
            d_131 = ATgetArgument(t, 0);
            h_131 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_131;
        if(match_cons(t, sym_prod_3))
          {
            e_131 = ATgetArgument(t, 0);
            f_131 = ATgetArgument(t, 1);
            g_131 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = c_131;
        t = n_11(e_131, f_131, g_131, h_131, t);
        LocalPopChoice(p_53);
      }
    else
      {
        t = o_53;
        t = fatal_ambiguity_0_0(t);
      }
  }
  j_130 = t;
  t = m_130;
  t = collect_p__1_0(o_9, t);
  l_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_130, l_130);
  t = insert_layout_0_0(t);
  i_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, i_130);
  return(t);
}
static ATerm d_12 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm p_131 = NULL;
  t = SSL_fputc(i_43, j_43);
  p_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_131);
  return(t);
}
static ATerm e_12 (ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm q_131 = NULL;
  t = SSL_write_term_to_stream_text(k_28, l_28);
  q_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_131);
  return(t);
}
static ATerm g_12 (ATerm i_103 (ATerm), ATerm p_198, ATerm q_28, ATerm t)
{
  ATerm r_131 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_198, term_q_53);
  t = k_12(t);
  r_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_131, q_28);
  t = i_103(t);
  t = fclose_0_0(t);
  t = q_28;
  return(t);
}
static ATerm f_12 (ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm s_131 = NULL;
  t = SSL_write_term_to_stream_baf(g_28, h_28);
  s_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_131);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_53 = ATgetArgument(t, 0);
      if(match_cons(r_53, sym_Stream_1))
        {
          j_72 = ATgetArgument(r_53, 0);
        }
      else
        _fail(t);
      k_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(j_72, k_72, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_53 = ATgetArgument(t, 0);
      if(match_cons(s_53, sym_Stream_1))
        {
          f_73 = ATgetArgument(s_53, 0);
        }
      else
        _fail(t);
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(f_73, g_73, t);
  c_73 = t;
  t = term_g_52;
  d_73 = t;
  t = c_73;
  if(match_cons(t, sym_Stream_1))
    {
      e_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_52, c_73);
  t = d_12(d_73, e_73, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL,c_132 = NULL,d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL,g_133 = NULL,h_133 = NULL,i_30 = NULL,h_30 = NULL;
  x_131 = t;
  if(match_cons(t, sym__2))
    {
      e_132 = ATgetArgument(t, 0);
      f_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_131);
  d_132 = t;
  t = e_132;
  {
    ATerm t_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_9 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_131 != NULL) && (w_131 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_131 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_9, t);
        LocalPopChoice(w_53);
      }
    else
      {
        t = t_53;
        t = term_x_53;
        w_131 = t;
      }
  }
  g_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_132, f_132);
  h_30 = t;
  t = SSLsetAnnotations(h_30, d_132);
  t = x_131;
  if(match_cons(t, sym__2))
    {
      z_131 = ATgetArgument(t, 0);
      a_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_131);
  y_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_131, (ATerm) ATmakeAppl(sym__2, not_null(w_131), a_132));
  i_30 = t;
  t = SSLsetAnnotations(i_30, y_131);
  c_132 = t;
  if(match_cons(t, sym__2))
    {
      g_133 = ATgetArgument(t, 0);
      h_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_53 = t;
    int z_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,i_72 = NULL,n_30 = NULL;
        t = SSLgetAnnotations(c_132);
        b_72 = t;
        t = g_133;
        t = fetch_1_0(t_9, t);
        e_72 = t;
        t = h_133;
        if(match_cons(t, sym__2))
          {
            g_72 = ATgetArgument(t, 0);
            i_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_12(u_9, g_72, i_72, t);
        f_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_72, f_72);
        n_30 = t;
        t = SSLsetAnnotations(n_30, b_72);
        LocalPopChoice(z_53);
      }
    else
      {
        t = y_53;
        {
          ATerm q_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,o_30 = NULL;
          t = SSLgetAnnotations(c_132);
          q_72 = t;
          t = h_133;
          if(match_cons(t, sym__2))
            {
              a_73 = ATgetArgument(t, 0);
              b_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_12(v_9, a_73, b_73, t);
          z_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_133, z_72);
          o_30 = t;
          t = SSLsetAnnotations(o_30, q_72);
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
ATerm apply_strategy_1_0 (ATerm h_120 (ATerm), ATerm t)
{
  ATerm k_133 = NULL,l_133 = NULL,m_133 = NULL,n_133 = NULL,o_133 = NULL;
  o_133 = t;
  t = dtime_0_0(t);
  t = o_133;
  t = h_120(t);
  n_133 = t;
  t = dtime_0_0(t);
  k_133 = t;
  t = n_133;
  if(match_cons(t, sym__2))
    {
      l_133 = ATgetArgument(t, 0);
      m_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_133), (ATerm) ATmakeAppl(sym_Runtime_1, k_133)), m_133);
  return(t);
}
static ATerm c_134 (ATerm w_133, ATerm t)
{
  t = SSL_fclose(w_133);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_133 = NULL,a_134 = NULL;
  a_134 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_133 = ATgetArgument(t, 0);
      {
        ATerm a_54 = t;
        int b_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_133);
            LocalPopChoice(b_54);
          }
        else
          {
            t = a_54;
            t = c_134(a_134, t);
          }
      }
    }
  else
    {
      t = c_134(a_134, t);
    }
  return(t);
}
static ATerm h_12 (ATerm m_28, ATerm t)
{
  t = SSL_read_term_from_stream(m_28);
  return(t);
}
static ATerm j_12 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm d_134 = NULL;
  t = SSL_fopen(k_43, l_43);
  d_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_134);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_134 = NULL;
  t = SSL_stdin_stream();
  e_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_134);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_134 = NULL;
  t = SSL_stdout_stream();
  f_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_134);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_134 = NULL;
  t = SSL_stderr_stream();
  g_134 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_134);
  return(t);
}
static ATerm n_135 (ATerm m_134, ATerm t)
{
  ATerm n_134 = NULL;
  t = SSL_explode_term(m_134);
  if(match_cons(t, sym__2))
    {
      ATerm c_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_54 = ATgetArgument(t, 1);
        if(((ATgetType(d_54) == AT_LIST) && !(ATisEmpty(d_54))))
          {
            n_134 = ATgetFirst((ATermList) d_54);
            {
              ATerm e_54 = (ATerm) ATgetNext((ATermList) d_54);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_134;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_134;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_134;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_134;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_135 (ATerm q_134, ATerm r_134, ATerm s_134, ATerm t)
{
  ATerm t_134 = NULL,u_134 = NULL,v_134 = NULL,y_134 = NULL,h_32 = NULL;
  t = SSLgetAnnotations(s_134);
  v_134 = t;
  t = q_134;
  if(match_cons(t, sym_Path_1))
    {
      y_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
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
  t = j_12(t_134, u_134, t);
  return(t);
}
static ATerm p_135 (ATerm a_135, ATerm b_135, ATerm c_135, ATerm t)
{
  ATerm d_135 = NULL,e_135 = NULL,f_135 = NULL,i_135 = NULL,i_32 = NULL;
  t = SSLgetAnnotations(c_135);
  f_135 = t;
  t = SSL_is_string(a_135);
  i_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_135, b_135);
  i_32 = t;
  t = SSLsetAnnotations(i_32, f_135);
  if(match_cons(t, sym__2))
    {
      d_135 = ATgetArgument(t, 0);
      e_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(d_135, e_135, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm k_135 = NULL,l_135 = NULL,m_135 = NULL;
  k_135 = t;
  if(match_cons(t, sym__2))
    {
      l_135 = ATgetArgument(t, 0);
      m_135 = ATgetArgument(t, 1);
      {
        ATerm f_54 = t;
        int i_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_135(k_135, t);
            LocalPopChoice(i_54);
          }
        else
          {
            t = f_54;
            {
              ATerm k_54 = t;
              int n_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_135(l_135, m_135, k_135, t);
                  LocalPopChoice(n_54);
                }
              else
                {
                  t = k_54;
                  t = p_135(l_135, m_135, k_135, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_135(k_135, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_135 = NULL,s_135 = NULL,t_135 = NULL,y_135 = NULL;
  y_135 = t;
  {
    ATerm o_54 = t;
    int p_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_135, term_q_54);
        t = k_12(t);
        LocalPopChoice(p_54);
      }
    else
      {
        t = o_54;
        {
          ATerm u_73 = NULL,w_73 = NULL;
          t = term_r_54;
          w_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_54, y_135);
          t = i_12(w_73, y_135, t);
          u_73 = t;
          t = SSL_perror(u_73);
          _fail(t);
        }
      }
  }
  s_135 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_12(t_135, t);
  r_135 = t;
  t = s_135;
  t = fclose_0_0(t);
  t = r_135;
  return(t);
}
ATerm fetch_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  static ATerm x_136 (ATerm t)
  {
    ATerm u_136 = NULL,v_136 = NULL,w_136 = NULL;
    u_136 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_136 = ATgetFirst((ATermList) t);
        w_136 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_54 = t;
      int t_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_74 = NULL,g_74 = NULL,m_32 = NULL;
          t = SSLgetAnnotations(u_136);
          d_74 = t;
          t = v_136;
          t = b_104(t);
          g_74 = t;
          t = (ATerm) ATinsert(CheckATermList(w_136), g_74);
          m_32 = t;
          t = SSLsetAnnotations(m_32, d_74);
          LocalPopChoice(t_54);
        }
      else
        {
          t = s_54;
          {
            ATerm w_74 = NULL,a_75 = NULL,n_32 = NULL;
            t = SSLgetAnnotations(u_136);
            w_74 = t;
            t = w_136;
            t = x_136(t);
            a_75 = t;
            t = (ATerm) ATinsert(CheckATermList(a_75), v_136);
            n_32 = t;
            t = SSLsetAnnotations(n_32, w_74);
          }
        }
    }
    return(t);
  }
  t = x_136(t);
  return(t);
}
static ATerm i_12 (ATerm b_42, ATerm c_42, ATerm t)
{
  t = SSL_strcat(b_42, c_42);
  return(t);
}
ATerm debug_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL,d_137 = NULL;
  a_137 = t;
  t = g_103(t);
  b_137 = t;
  t = term_q_14;
  c_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_137), b_137);
  d_137 = t;
  t = SSL_printnl(c_137, d_137);
  t = a_137;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm v_54 = t;
  int w_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(w_54);
    }
  else
    {
      t = v_54;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_x_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_54 = t;
  int z_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_137 = NULL;
      k_137 = t;
      t = SSL_is_string(k_137);
      LocalPopChoice(z_54);
    }
  else
    {
      t = y_54;
      {
        ATerm a_55 = t;
        int b_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_9, t);
            LocalPopChoice(b_55);
          }
        else
          {
            t = a_55;
            {
              ATerm r_137 = NULL,s_137 = NULL,t_137 = NULL;
              r_137 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_137 = ATgetArgument(t, 0);
                  t = s_137;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_137 = ATgetArgument(t, 0);
                      t = s_137;
                      {
                        ATerm c_55 = t;
                        int d_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(d_55);
                          }
                        else
                          {
                            t = c_55;
                            t = debug_1_0(z_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_137 = NULL,y_137 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_137 = ATgetArgument(t, 0);
                          t_137 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_137;
                      t = eval_config_0_0(t);
                      x_137 = t;
                      t = t_137;
                      t = eval_config_0_0(t);
                      y_137 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_137, y_137);
                      t = i_12(x_137, y_137, t);
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
  ATerm c_138 = NULL,d_138 = NULL;
  c_138 = t;
  t = term_e_55;
  d_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_55, c_138);
  t = n_12(d_138, c_138, t);
  {
    ATerm f_55 = t;
    int g_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_138 = NULL,f_138 = NULL;
        t = eval_config_0_0(t);
        e_138 = t;
        t = term_e_55;
        f_138 = t;
        t = SSL_table_put(f_138, c_138, e_138);
        t = e_138;
        LocalPopChoice(g_55);
      }
    else
      {
        t = f_55;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_118 (ATerm), ATerm t)
{
  ATerm j_138 = NULL;
  j_138 = t;
  {
    ATerm h_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_138 = NULL;
        t = term_k_55;
        t = get_config_0_0(t);
        l_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_138, term_q_20);
        t = geq_0_0(t);
        t = j_138;
        t = q_118(t);
        LocalPopChoice(j_55);
      }
    else
      {
        t = h_55;
        t = j_138;
      }
  }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm o_138 = NULL;
  o_138 = t;
  if(match_string(t, "-k"))
    {
      t = o_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_138;
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm p_138 = NULL,q_138 = NULL,r_138 = NULL;
  p_138 = t;
  t = SSL_string_to_int(p_138);
  q_138 = t;
  t = term_l_55;
  r_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_55, q_138);
  t = p_12(r_138, q_138, t);
  t = p_138;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_m_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_10, b_10, c_10, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm t_138 = NULL;
  t_138 = t;
  if(match_string(t, "-S"))
    {
      t = t_138;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_138;
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm u_138 = NULL,v_138 = NULL;
  t = term_k_55;
  u_138 = t;
  t = term_n_55;
  v_138 = t;
  t = term_o_55;
  t = p_12(u_138, v_138, t);
  t = term_p_55;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_q_55;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm w_138 = NULL,x_138 = NULL,y_138 = NULL;
  w_138 = t;
  t = SSL_string_to_int(w_138);
  x_138 = t;
  t = term_k_55;
  y_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_55, x_138);
  t = p_12(y_138, x_138, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_138);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_r_55;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm z_138 = NULL,a_139 = NULL;
  t = term_s_55;
  z_138 = t;
  t = term_p_14;
  a_139 = t;
  t = term_t_55;
  t = p_12(z_138, a_139, t);
  t = term_u_55;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_w_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_55 = t;
  int y_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_10, h_10, j_10, t);
      LocalPopChoice(y_55);
    }
  else
    {
      t = x_55;
      {
        ATerm b_56 = t;
        int c_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_10, l_10, o_10, t);
            LocalPopChoice(c_56);
          }
        else
          {
            t = b_56;
            t = Option_3_0(q_10, v_10, w_10, t);
          }
      }
    }
  return(t);
}
static ATerm p_12 (ATerm b_53, ATerm c_53, ATerm t)
{
  ATerm b_139 = NULL;
  t = term_e_55;
  b_139 = t;
  t = SSL_table_put(b_139, b_53, c_53);
  t = (ATerm) ATmakeAppl(sym__3, term_e_55, b_53, c_53);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm d_139 = NULL;
  d_139 = t;
  if(match_string(t, "-o"))
    {
      t = d_139;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_139;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm e_139 = NULL,f_139 = NULL;
  e_139 = t;
  t = term_d_56;
  f_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_56, e_139);
  t = p_12(f_139, e_139, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_139);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_e_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_10, d_11, e_11, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm h_139 = NULL;
  h_139 = t;
  if(match_string(t, "-i"))
    {
      t = h_139;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_139;
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL;
  i_139 = t;
  t = term_f_56;
  j_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_56, i_139);
  t = p_12(j_139, i_139, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_139);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_g_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_11, h_11, j_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_139 = NULL,l_139 = NULL,m_139 = NULL,n_139 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_14;
  t = whoami_0_0(t);
  k_139 = t;
  t = term_q_14;
  m_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_56), k_139);
  n_139 = t;
  t = SSL_printnl(m_139, n_139);
  t = term_v_14;
  l_139 = t;
  t = SSL_exit(l_139);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_56;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_12 (ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm k_56 = t;
  int l_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_46, f_46);
      LocalPopChoice(l_56);
    }
  else
    {
      t = k_56;
      t = SSL_addr(e_46, f_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t)
{
  ATerm p_139 = NULL,q_139 = NULL,r_139 = NULL;
  p_139 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_139;
      t = y_109(t);
    }
  else
    {
      ATerm u_139 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_139 = ATgetFirst((ATermList) t);
          r_139 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_139;
      t = foldr_2_0(y_109, z_109, t);
      u_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_139, u_139);
      t = z_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_n_55;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL;
  if(match_cons(t, sym__2))
    {
      l_76 = ATgetArgument(t, 0);
      m_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(l_76, m_76, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_139 = NULL,e_76 = NULL,f_76 = NULL;
  t = times_0_0(t);
  f_76 = t;
  t = SSL_explode_term(f_76);
  if(match_cons(t, sym__2))
    {
      ATerm m_56 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_76;
  t = foldr_2_0(l_11, p_11, t);
  x_139 = t;
  t = SSL_TicksToSeconds(x_139);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_140 = NULL,k_140 = NULL,l_140 = NULL;
  j_140 = t;
  if(match_cons(t, sym__2))
    {
      k_140 = ATgetArgument(t, 0);
      l_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_56 = t;
    int o_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_140;
        if((k_140 != t))
          {
            _fail(t);
          }
        t = j_140;
        LocalPopChoice(o_56);
      }
    else
      {
        t = n_56;
        t = (ATerm) ATmakeAppl(sym__2, k_140, l_140);
        {
          ATerm p_56 = t;
          int q_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_140, l_140);
              LocalPopChoice(q_56);
            }
          else
            {
              t = p_56;
              t = SSL_gtr(k_140, l_140);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_140, l_140);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_118 (ATerm), ATerm t)
{
  ATerm p_140 = NULL;
  p_140 = t;
  {
    ATerm r_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_140 = NULL;
        t = term_k_55;
        t = get_config_0_0(t);
        r_140 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_140, term_v_14);
        t = geq_0_0(t);
        t = p_140;
        t = p_118(t);
        LocalPopChoice(t_56);
      }
    else
      {
        t = r_56;
        t = p_140;
      }
  }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm t_140 = NULL,u_140 = NULL,w_140 = NULL,x_140 = NULL;
  t = run_time_0_0(t);
  t_140 = t;
  t = term_p_14;
  t = whoami_0_0(t);
  u_140 = t;
  t = term_q_14;
  w_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_56), t_140), term_v_56), u_140);
  x_140 = t;
  t = SSL_printnl(w_140, x_140);
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_56), t_140), term_v_56), u_140));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_140 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_55;
  y_140 = t;
  t = SSL_exit(y_140);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm g_141 = NULL,h_141 = NULL;
  h_141 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_141;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_141 = ATgetArgument(t, 0);
          {
            ATerm q_77 = NULL,s_32 = NULL;
            t = SSLgetAnnotations(h_141);
            q_77 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_141);
            s_32 = t;
            t = SSLsetAnnotations(s_32, q_77);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_141;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  ATerm z_56 = t;
  int a_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_57;
      t = get_config_0_0(t);
      LocalPopChoice(a_57);
    }
  else
    {
      t = z_56;
      t = fetch_1_0(u_11, t);
    }
  t = f_121(t);
  return(t);
}
ATerm map_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  static ATerm x_141 (ATerm t)
  {
    ATerm u_141 = NULL,v_141 = NULL,w_141 = NULL;
    u_141 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_141;
      }
    else
      {
        ATerm z_77 = NULL,n_78 = NULL,p_78 = NULL,u_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_141 = ATgetFirst((ATermList) t);
            w_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_141);
        z_77 = t;
        t = v_141;
        t = r_103(t);
        n_78 = t;
        t = w_141;
        t = x_141(t);
        p_78 = t;
        t = (ATerm) ATinsert(CheckATermList(p_78), n_78);
        u_32 = t;
        t = SSLsetAnnotations(u_32, z_77);
      }
    return(t);
  }
  t = x_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_142 = NULL,b_142 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_142 = ATgetFirst((ATermList) t);
      b_142 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_142 = NULL,g_142 = NULL;
        static ATerm o_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_142)), not_null(g_142));
          return(t);
        }
        t = b_142;
        t = d_0(t);
        if(((f_142 != NULL) && (f_142 != t)))
          _fail(t);
        else
          f_142 = t;
        t = a_142;
        t = c_0(t);
        if(((g_142 != NULL) && (g_142 != t)))
          _fail(t);
        else
          g_142 = t;
        t = b_142;
        t = reverse_acc_2_0(c_0, o_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_14;
      t = d_0(t);
    }
  return(t);
}
static ATerm n_12 (ATerm s_59, ATerm t_59, ATerm t)
{
  t = SSL_table_get(s_59, t_59);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL,m_142 = NULL,z_32 = NULL;
  m_142 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_142);
  k_142 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_142);
  z_32 = t;
  t = SSLsetAnnotations(z_32, k_142);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm o_142 = NULL;
  o_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_142), term_c_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_142 = NULL,j_142 = NULL;
  ATerm e_57 = t;
  int f_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_56;
      t = get_config_0_0(t);
      LocalPopChoice(f_57);
    }
  else
    {
      t = e_57;
      t = fetch_1_0(q_12, t);
    }
  t = term_g_57;
  t = echo_0_0(t);
  t = term_y_14;
  i_142 = t;
  t = term_z_14;
  j_142 = t;
  t = term_j_57;
  t = n_12(i_142, j_142, t);
  t = reverse_acc_2_0(_id, s_12, t);
  t = map_1_0(t_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_142 = NULL,r_142 = NULL,s_142 = NULL;
  q_142 = t;
  {
    ATerm k_57 = t;
    int l_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_142;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_57 = ATgetFirst((ATermList) t);
                ATerm n_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_142;
          }
        LocalPopChoice(l_57);
      }
    else
      {
        t = k_57;
        t = (ATerm) ATinsert(ATempty, q_142);
      }
  }
  r_142 = t;
  t = term_x_53;
  s_142 = t;
  t = SSL_printnl(s_142, r_142);
  t = q_142;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_56;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm w_142 = NULL,x_142 = NULL;
  t = term_o_57;
  w_142 = t;
  t = term_p_14;
  x_142 = t;
  t = term_q_57;
  t = p_12(w_142, x_142, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_r_57;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL;
  t = term_o_57;
  a_143 = t;
  t = term_p_14;
  b_143 = t;
  t = term_q_57;
  t = p_12(a_143, b_143, t);
  t = term_s_57;
  y_142 = t;
  t = term_p_14;
  z_142 = t;
  t = term_t_57;
  t = p_12(y_142, z_142, t);
  t = term_u_57;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_w_57;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_57 = t;
  int z_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_12, a_13, d_13, t);
      LocalPopChoice(z_57);
    }
  else
    {
      t = x_57;
      t = Option_3_0(e_13, f_13, g_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm t)
{
  ATerm c_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,u_37 = NULL;
  h_143 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_143 = ATgetFirst((ATermList) t);
      e_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_143);
  c_143 = t;
  t = d_143;
  t = p_74(t);
  f_143 = t;
  t = e_143;
  t = q_74(t);
  g_143 = t;
  t = (ATerm) ATinsert(CheckATermList(g_143), f_143);
  u_37 = t;
  t = SSLsetAnnotations(u_37, c_143);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm m_143 = NULL,n_143 = NULL,o_143 = NULL,p_143 = NULL,r_143 = NULL,s_143 = NULL,a_38 = NULL;
  m_143 = t;
  {
    ATerm d_58 = t;
    int e_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_58;
        t = i_123(t);
        LocalPopChoice(e_58);
      }
    else
      {
        t = d_58;
      }
  }
  t = m_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_143 = ATgetFirst((ATermList) t);
      p_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_143);
  n_143 = t;
  t = term_j_56;
  s_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_56, o_143);
  t = p_12(s_143, o_143, t);
  t = p_143;
  {
    static ATerm c_144 (ATerm t)
    {
      ATerm g_58 = t;
      int h_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_58 = t;
          int j_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_143 = NULL;
              v_143 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_143;
              LocalPopChoice(j_58);
            }
          else
            {
              t = i_58;
              t = i_123(t);
              t = Cons_2_0(_id, c_144, t);
            }
          LocalPopChoice(h_58);
        }
      else
        {
          t = g_58;
          {
            ATerm y_143 = NULL,z_143 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_143 = ATgetFirst((ATermList) t);
                z_143 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_143), (ATerm) ATmakeAppl(sym_Undefined_1, y_143));
          }
        }
      return(t);
    }
    t = c_144(t);
  }
  r_143 = t;
  t = (ATerm) ATinsert(CheckATermList(r_143), (ATerm) ATmakeAppl(sym_Program_1, o_143));
  a_38 = t;
  t = SSLsetAnnotations(a_38, n_143);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm o_144 = NULL;
  o_144 = t;
  if(match_string(t, "--help"))
    {
      t = o_144;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_144;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_144;
        }
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm p_144 = NULL,q_144 = NULL;
  t = term_b_57;
  p_144 = t;
  t = term_p_14;
  q_144 = t;
  t = term_k_58;
  t = p_12(p_144, q_144, t);
  t = term_l_58;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_m_58;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm h_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL,l_144 = NULL,m_144 = NULL,n_144 = NULL;
  j_144 = t;
  t = term_y_14;
  l_144 = t;
  t = term_z_14;
  m_144 = t;
  t = (ATerm) ATempty;
  n_144 = t;
  t = SSL_table_put(l_144, m_144, n_144);
  t = j_144;
  {
    static ATerm h_13 (ATerm t)
    {
      ATerm n_58 = t;
      int o_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_123(t);
          LocalPopChoice(o_58);
        }
      else
        {
          t = n_58;
          {
            ATerm p_58 = t;
            int q_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_13, k_13, l_13, t);
                LocalPopChoice(q_58);
              }
            else
              {
                t = p_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_13, t);
  }
  {
    ATerm r_58 = t;
    int s_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_144 = NULL;
        x_144 = t;
        {
          ATerm t_58 = t;
          int u_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_79 = NULL;
              t = x_144;
              {
                ATerm v_58 = t;
                int w_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_57;
                    t = get_config_0_0(t);
                    LocalPopChoice(w_58);
                  }
                else
                  {
                    t = v_58;
                    t = fetch_1_0(m_13, t);
                  }
              }
              t = x_144;
              t = default_system_usage_0_0(t);
              t = term_n_55;
              a_79 = t;
              t = SSL_exit(a_79);
              LocalPopChoice(u_58);
            }
          else
            {
              t = t_58;
              {
                ATerm g_79 = NULL;
                t = term_o_57;
                t = get_config_0_0(t);
                t = x_144;
                t = default_system_about_0_0(t);
                t = term_n_55;
                g_79 = t;
                t = SSL_exit(g_79);
              }
            }
        }
        LocalPopChoice(s_58);
      }
    else
      {
        t = r_58;
        {
          ATerm x_58 = t;
          int y_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_144 = NULL,z_144 = NULL,a_145 = NULL;
              static ATerm n_13 (ATerm t)
              {
                ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL,o_38 = NULL;
                d_145 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_145 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_145);
                b_145 = t;
                t = c_145;
                if(((h_144 != NULL) && (h_144 != t)))
                  _fail(t);
                else
                  h_144 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_145);
                o_38 = t;
                t = SSLsetAnnotations(o_38, b_145);
                return(t);
              }
              t = fetch_1_0(n_13, t);
              t = term_q_14;
              z_144 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_144)), term_z_58);
              a_145 = t;
              t = SSL_printnl(z_144, a_145);
              t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_144)), term_z_58));
              t = default_system_usage_0_0(t);
              t = term_v_14;
              y_144 = t;
              t = SSL_exit(y_144);
              LocalPopChoice(y_58);
            }
          else
            {
              t = x_58;
            }
        }
      }
  }
  i_144 = t;
  t = term_y_14;
  k_144 = t;
  t = SSL_table_destroy(k_144);
  t = i_144;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t)
{
  ATerm i_145 = NULL,j_145 = NULL,k_145 = NULL,l_145 = NULL;
  t = parse_options_1_0(h_121, t);
  i_145 = t;
  t = term_m_52;
  l_145 = t;
  t = SSL_table_create(l_145);
  t = term_m_52;
  j_145 = t;
  t = term_o_52;
  k_145 = t;
  t = SSL_table_put(j_145, k_145, i_145);
  t = i_145;
  t = j_121(t);
  {
    ATerm a_59 = t;
    int b_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_121, t);
        LocalPopChoice(b_59);
      }
    else
      {
        t = a_59;
        {
          ATerm c_59 = t;
          int d_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_121(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_59);
            }
          else
            {
              t = c_59;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = if_verbose2_1_0(v_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm m_145 = NULL,n_145 = NULL;
  t = term_e_59;
  m_145 = t;
  t = term_p_14;
  n_145 = t;
  t = term_f_59;
  t = p_12(m_145, n_145, t);
  t = term_g_59;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_h_59;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm o_145 = NULL,p_145 = NULL,q_145 = NULL,r_145 = NULL;
  o_145 = t;
  t = term_j_56;
  t = get_config_0_0(t);
  p_145 = t;
  t = term_q_14;
  q_145 = t;
  t = (ATerm) ATinsert(ATempty, p_145);
  r_145 = t;
  t = SSL_printnl(q_145, r_145);
  t = o_145;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t)
{
  static ATerm o_13 (ATerm t)
  {
    ATerm i_59 = t;
    int j_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_120(t);
        LocalPopChoice(j_59);
      }
    else
      {
        t = i_59;
        {
          ATerm k_59 = t;
          int l_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(l_59);
            }
          else
            {
              t = k_59;
              {
                ATerm n_59 = t;
                int o_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(o_59);
                  }
                else
                  {
                    t = n_59;
                    {
                      ATerm p_59 = t;
                      int r_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_13, t_13, u_13, t);
                          LocalPopChoice(r_59);
                        }
                      else
                        {
                          t = p_59;
                          {
                            ATerm v_59 = t;
                            int w_59 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(w_59);
                              }
                            else
                              {
                                t = v_59;
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
  static ATerm r_13 (ATerm t)
  {
    ATerm s_145 = NULL,t_145 = NULL,u_145 = NULL;
    t_145 = t;
    {
      ATerm x_59 = t;
      int y_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_145 != NULL) && (s_145 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_145 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_13, t);
          LocalPopChoice(y_59);
        }
      else
        {
          t = x_59;
          t = term_z_59;
          s_145 = t;
        }
    }
    t = not_null(s_145);
    t = ReadFromFile_0_0(t);
    u_145 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_145, u_145);
    t = apply_strategy_1_0(q_120, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_13, s_120, q_13, r_13, t);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm v_145 = NULL,w_145 = NULL;
  if(match_cons(t, sym__2))
    {
      v_145 = ATgetArgument(t, 0);
      w_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(v_145, w_145, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm a_60 = t;
  int b_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_14, c_14, f_14, t);
      LocalPopChoice(b_60);
    }
  else
    {
      t = a_60;
      {
        ATerm c_60 = t;
        int d_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(g_14, h_14, i_14, t);
            LocalPopChoice(d_60);
          }
        else
          {
            t = c_60;
            t = ArgOption_3_0(j_14, k_14, m_14, t);
          }
      }
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_f_60;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_g_60;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_b_16;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_i_60;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm x_145 = NULL;
  x_145 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, x_145);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_j_60;
  return(t);
}
ATerm io_Asfix_2_abox_0_0 (ATerm t)
{
  t = iowrap_3_0(x_13, y_13, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Asfix_2_abox_0_0(t);
  return(t);
}
